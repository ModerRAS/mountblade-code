#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part123.c - 27 个函数

// 函数: void FUN_18073dba0(uint64_t param_1,int32_t param_2)
void FUN_18073dba0(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  int64_t lStack_138;
  int64_t *plStack_130;
  int8_t auStack_128 [256];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  lStack_138 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_130,&lStack_138);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_130 + 0x20))(plStack_130,param_2,0);
    if (iVar1 == 0) goto LAB_18073dc41;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b830(auStack_128,0x100,param_2);
    puStack_148 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6080_ptr);
  }
LAB_18073dc41:
  if (lStack_138 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073dc80(uint64_t param_1,int8_t param_2)
void FUN_18073dc80(uint64_t param_1,int8_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t lStack_128;
  int64_t *plStack_120;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lStack_128 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0x30))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073dd1d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074be90(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6112_ptr);
  }
LAB_18073dd1d:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073dd60(uint64_t param_1)
void FUN_18073dd60(uint64_t param_1)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t lStack_128;
  int64_t *plStack_120;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lStack_128 = 0;
  iVar1 = func_0x00018074fb10(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 8))();
    if (iVar1 == 0) goto LAB_18073dde3;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    puStack_138 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_5992_ptr);
  }
LAB_18073dde3:
  if (lStack_128 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073de20(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_18073de20(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t *aplStack_148 [2];
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  iVar1 = FUN_180752c80(param_1,aplStack_148,0);
  if (iVar1 == 0) {
    if (((int)aplStack_148[0][0x22] == 0) || ((int)aplStack_148[0][0x22] == 7)) {
      iVar1 = (**(code **)(*aplStack_148[0] + 0x40))(aplStack_148[0],param_2,param_3);
      if (iVar1 == 0) goto LAB_18073df0e;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bac0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074b930(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,param_1,&unknown_var_6912_ptr);
  }
LAB_18073df0e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}





// 函数: void FUN_18073de94(void)
void FUN_18073de94(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074bac0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074b930(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,5);
}





// 函数: void FUN_18073df0c(void)
void FUN_18073df0c(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073df50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18073df50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  int64_t *aplStack_158 [2];
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  iVar1 = FUN_180752c80(param_1,aplStack_158,0);
  if (iVar1 == 0) {
    if (((int)aplStack_158[0][0x22] == 0) || ((int)aplStack_158[0][0x22] == 7)) {
      puStack_168 = (int8_t *)param_5;
      iVar1 = (**(code **)(*aplStack_158[0] + 0xa0))(aplStack_158[0],param_2,param_3,param_4);
      if (iVar1 == 0) goto LAB_18073e0bd;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b930(auStack_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074b930(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,param_1,&unknown_var_6984_ptr);
  }
LAB_18073e0bd:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_188);
}





// 函数: void FUN_18073dfd7(void)
void FUN_18073dfd7(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b930(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074b930(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,5);
}





// 函数: void FUN_18073e0bb(void)
void FUN_18073e0bb(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073e110(uint64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_18073e110(uint64_t param_1,uint64_t param_2,int32_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t *plStack_148;
  int64_t lStack_140;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  lStack_140 = 0;
  iVar1 = FUN_180752c80(param_1,&plStack_148,&lStack_140);
  if (iVar1 == 0) {
    if (((int)plStack_148[0x22] == 0) || ((int)plStack_148[0x22] == 7)) {
      iVar1 = (**(code **)(*plStack_148 + 0x98))(plStack_148,param_2,param_3);
      if (iVar1 == 0) goto FUN_18073e229;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,param_1,&unknown_var_6960_ptr);
  }
FUN_18073e229:
  if (lStack_140 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_140,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073e12d(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
void FUN_18073e12d(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t lStack0000000000000038;
  uint64_t in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000038 = 0;
  iVar1 = FUN_180752c80(param_1,&param_6,&stack0x00000038);
  if (iVar1 == 0) {
    if (((int)param_6[0x22] == 0) || ((int)param_6[0x22] == 7)) {
      iVar1 = (**(code **)(*param_6 + 0x98))(param_6,param_2,param_3);
      if (iVar1 == 0) goto FUN_18073e229;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,param_1,&unknown_var_6960_ptr,&stack0x00000040);
  }
FUN_18073e229:
  if (lStack0000000000000038 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack0000000000000038,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073e1b1(void)
void FUN_18073e1b1(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074ba80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b800(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_EBP);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,5);
}





// 函数: void FUN_18073e229(void)
void FUN_18073e229(void)

{
  int64_t in_stack_00000038;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000038 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(in_stack_00000038,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073e24b(uint64_t param_1)
void FUN_18073e24b(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0xc);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073e270(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
void FUN_18073e270(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
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
      iVar1 = (**(code **)(*plStack_158 + 0x140))(plStack_158,param_2,param_3,param_4);
      if (iVar1 == 0) goto FUN_18073e414;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074ba80(auStack_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,param_1,&unknown_var_7088_ptr);
  }
FUN_18073e414:
  if (lStack_150 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_150,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073e28d(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
void FUN_18073e28d(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
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
      iVar1 = (**(code **)(*param_6 + 0x140))
                        (param_6,param_2,param_3,param_4,CONCAT44(uVar4,in_stack_000001b0));
      if (iVar1 == 0) goto FUN_18073e414;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074ba80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074ba80(&stack0x00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b800(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),in_stack_000001b0
                       );
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,param_1,&unknown_var_7088_ptr,&stack0x00000040);
  }
FUN_18073e414:
  if (lStack0000000000000038 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack0000000000000038,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073e330(void)
void FUN_18073e330(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  int32_t unaff_R15D;
  
  iVar1 = FUN_18074ba80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b800(&stack0x00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074ba80(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b800(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R15D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,5);
}





// 函数: void FUN_18073e414(void)
void FUN_18073e414(void)

{
  int64_t in_stack_00000038;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000038 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(in_stack_00000038,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073e446(uint64_t param_1)
void FUN_18073e446(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0xc);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073e470(uint64_t param_1,uint64_t param_2)
void FUN_18073e470(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t *aplStack_128 [2];
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  iVar1 = FUN_180752c80(param_1,aplStack_128,0);
  if (iVar1 == 0) {
    if (((int)aplStack_128[0][0x22] == 0) || ((int)aplStack_128[0][0x22] == 7)) {
      iVar1 = (**(code **)(*aplStack_128[0] + 0x120))(aplStack_128[0],param_2);
      if (iVar1 == 0) goto LAB_18073e512;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074ba80(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,param_1,&unknown_var_7072_ptr);
  }
LAB_18073e512:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073e550(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18073e550(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  int64_t lStack_158;
  int64_t *plStack_150;
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  lStack_158 = 0;
  iVar1 = FUN_180752c80(param_1,&plStack_150,&lStack_158);
  if (iVar1 == 0) {
    puStack_168 = (int8_t *)param_5;
    iVar1 = (**(code **)(*plStack_150 + 0xc0))(plStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_18073e6ce;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074ba80(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074be30(auStack_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074be30(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,param_1,&unknown_var_7008_ptr);
  }
FUN_18073e6ce:
  if (lStack_158 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_158,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073e56d(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18073e56d(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,int64_t *param_7)

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
  uint64_t in_stack_00000140;
  uint64_t in_stack_000001b0;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  param_6 = 0;
  iVar1 = FUN_180752c80(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_7 + 0xc0))(param_7,param_2,param_3,param_4,in_stack_000001b0);
    if (iVar1 == 0) goto FUN_18073e6ce;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074ba80(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074be30(&stack0x00000040 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074be30(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),in_stack_000001b0);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,param_1,&unknown_var_7008_ptr,&stack0x00000040);
  }
FUN_18073e6ce:
  if (param_6 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(param_6,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073e5ea(void)
void FUN_18073e5ea(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074ba80(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074be30(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074be30(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,5);
}





// 函数: void FUN_18073e6ce(void)
void FUN_18073e6ce(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(in_stack_00000030,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073e700(uint64_t param_1)
void FUN_18073e700(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0xc);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073e810(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073e810(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t *plStack_148;
  int64_t lStack_140;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  iVar2 = 0;
  lStack_140 = 0;
  iVar1 = FUN_180752c80(param_1,&plStack_148,&lStack_140);
  if (iVar1 == 0) {
    if (plStack_148[0x21] != 0) {
      iVar2 = *(int *)(plStack_148[0x21] + 0x124);
    }
    if (((int)plStack_148[0x22] == 0) || (iVar2 == 0xf)) {
      iVar1 = (**(code **)(*plStack_148 + 0x78))(plStack_148,param_2,param_3);
      if (iVar1 == 0) goto LAB_18073e90c;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,param_1,&unknown_var_6936_ptr);
  }
LAB_18073e90c:
  if (lStack_140 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_140,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073e940(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
void FUN_18073e940(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_1b8 [32];
  int8_t *puStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  int64_t *plStack_178;
  int64_t lStack_170;
  uint64_t uStack_168;
  int8_t auStack_158 [256];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1b8;
  lStack_170 = 0;
  uStack_168 = param_1;
  iVar1 = FUN_180752c80(param_1,&plStack_178,&lStack_170);
  if (iVar1 == 0) {
    if (((int)plStack_178[0x22] == 0) || ((int)plStack_178[0x22] == 7)) {
      uStack_188 = param_7;
      uStack_190 = param_6;
      puStack_198 = (int8_t *)param_5;
      iVar1 = (**(code **)(*plStack_178 + 0x28))(plStack_178,param_2,param_3,param_4);
      if (iVar1 == 0) goto FUN_18073eb6d;
    }
    else {
      iVar1 = 0x2e;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b800(auStack_158,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(auStack_158 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(auStack_158 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074bda0(auStack_158 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074ba80(auStack_158 + iVar2,0x100 - iVar2,param_6);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074ba80(auStack_158 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_7);
    puStack_198 = auStack_158;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,5,uStack_168,&unknown_var_6856_ptr);
  }
FUN_18073eb6d:
  if (lStack_170 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(lStack_170,0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_1b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




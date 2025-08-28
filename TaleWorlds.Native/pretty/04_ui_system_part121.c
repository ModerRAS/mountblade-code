#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part121.c - 34 个函数

// 函数: void FUN_18073c111(void)
void FUN_18073c111(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073c133(void)
void FUN_18073c133(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c160(uint64_t param_1,int64_t param_2,int32_t param_3)
void FUN_18073c160(uint64_t param_1,int64_t param_2,int32_t param_3)

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
    param_2 = param_2 << 0x14;
    iVar1 = (**(code **)(*plStack_140 + 0xf0))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073c258;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074be80(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b830(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6544_ptr);
  }
FUN_18073c258:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c17d(uint64_t param_1,int64_t param_2,int32_t param_3)
void FUN_18073c17d(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int64_t lStack0000000000000030;
  int64_t *in_stack_00000038;
  uint64_t in_stack_00000140;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBP;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  lStack0000000000000030 = 0;
  iVar1 = func_0x00018074fb10(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    param_2 = param_2 << 0x14;
    iVar1 = (**(code **)(*in_stack_00000038 + 0xf0))(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073c258;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074be80(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b830(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6544_ptr,&stack0x00000040);
  }
FUN_18073c258:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073c1e0(void)
void FUN_18073c1e0(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074be80(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b830(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073c258(void)
void FUN_18073c258(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073c27a(void)
void FUN_18073c27a(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c2a0(uint64_t param_1,uint64_t param_2)
void FUN_18073c2a0(uint64_t param_1,uint64_t param_2)

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
    iVar1 = (**(code **)(*plStack_120 + 0x40))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073c33b;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074bac0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6176_ptr);
  }
LAB_18073c33b:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c380(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073c380(uint64_t param_1,int32_t param_2,uint64_t param_3)

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
    iVar1 = (**(code **)(*plStack_140 + 0x120))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073c471;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6656_ptr);
  }
FUN_18073c471:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c39d(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18073c39d(uint64_t param_1,int32_t param_2,uint64_t param_3)

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
    iVar1 = (**(code **)(*in_stack_00000038 + 0x120))(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073c471;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6656_ptr,&stack0x00000040);
  }
FUN_18073c471:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073c3f9(void)
void FUN_18073c3f9(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073c471(void)
void FUN_18073c471(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073c493(void)
void FUN_18073c493(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c4c0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_18073c4c0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)

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
  iVar1 = func_0x00018074fb10(param_1,aplStack_148,0);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(*aplStack_148[0] + 0xd8))(aplStack_148[0],param_2,param_3), iVar1 == 0))
  {
    if (param_2 != (uint64_t *)0x0) {
      *param_2 = *param_2 >> 0x14;
    }
    if (param_3 != (uint64_t *)0x0) {
      *param_3 = *param_3 >> 0x14;
    }
    iVar1 = func_0x00018074fb10(param_1,aplStack_148,0);
    if (iVar1 == 0) goto LAB_18073c5c9;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bdf0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074bdf0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6448_ptr);
  }
LAB_18073c5c9:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}





// 函数: void FUN_18073c54f(void)
void FUN_18073c54f(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074bdf0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074bdf0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073c5c7(void)
void FUN_18073c5c7(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c5f0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_18073c5f0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
    iVar1 = (**(code **)(*plStack_140 + 0x138))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073c6e3;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074b930(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6736_ptr);
  }
FUN_18073c6e3:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c60d(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_18073c60d(uint64_t param_1,uint64_t param_2,uint64_t param_3)

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
    iVar1 = (**(code **)(*in_stack_00000038 + 0x138))(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073c6e3;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074bda0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074b930(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6736_ptr,&stack0x00000040);
  }
FUN_18073c6e3:
  if (lStack0000000000000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073c66b(void)
void FUN_18073c66b(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074b930(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073c6e3(void)
void FUN_18073c6e3(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073c705(void)
void FUN_18073c705(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c730(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
void FUN_18073c730(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)

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
  iVar1 = func_0x00018074fb10(param_1,&plStack_150,&lStack_158);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_150 + 0xe8))(plStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) {
      if (param_2 != (uint64_t *)0x0) {
        *param_2 = *param_2 >> 0x14;
      }
      if (param_3 != (uint64_t *)0x0) {
        *param_3 = *param_3 >> 0x14;
      }
      goto FUN_18073c87f;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bdf0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bdf0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074be30(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6512_ptr);
  }
FUN_18073c87f:
  if (lStack_158 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c74d(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
void FUN_18073c74d(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,int64_t *param_7)

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
  iVar1 = func_0x00018074fb10(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_7 + 0xe8))(param_7,param_2,param_3,param_4);
    if (iVar1 == 0) {
      if (param_2 != (uint64_t *)0x0) {
        *param_2 = *param_2 >> 0x14;
      }
      if (param_3 != (uint64_t *)0x0) {
        *param_3 = *param_3 >> 0x14;
      }
      goto FUN_18073c87f;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bdf0(&stack0x00000040,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074bdf0(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    FUN_18074be30(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6512_ptr,&stack0x00000040);
  }
FUN_18073c87f:
  if (param_6 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073c7d1(void)
void FUN_18073c7d1(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074bdf0(&stack0x00000040,0x100);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bdf0(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074be30(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,4);
}





// 函数: void FUN_18073c87f(void)
void FUN_18073c87f(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18073c8a9(void)
void FUN_18073c8a9(void)

{
  uint64_t in_stack_00000140;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c8d0(uint64_t param_1,uint64_t param_2)
void FUN_18073c8d0(uint64_t param_1,uint64_t param_2)

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
    iVar1 = (**(code **)(*plStack_120 + 0x98))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073c96e;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074ba80(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6360_ptr);
  }
LAB_18073c96e:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073c9b0(uint64_t param_1,uint64_t param_2)
void FUN_18073c9b0(uint64_t param_1,uint64_t param_2)

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
    iVar1 = (**(code **)(*plStack_120 + 0x18))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073ca4b;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074be30(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6048_ptr);
  }
LAB_18073ca4b:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073ca90(uint64_t param_1,uint64_t param_2)
void FUN_18073ca90(uint64_t param_1,uint64_t param_2)

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
    iVar1 = (**(code **)(*plStack_120 + 0x50))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073cb2b;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074bac0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6240_ptr);
  }
LAB_18073cb2b:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073cb70(uint64_t param_1,uint64_t param_2)
void FUN_18073cb70(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  uint64_t *apuStack_128 [2];
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  iVar1 = func_0x00018074fb10(param_1,apuStack_128,0);
  if (((iVar1 != 0) || (iVar1 = (**(code **)*apuStack_128[0])(apuStack_128[0],param_2), iVar1 != 0))
     && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_5960_ptr);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073cc30(uint64_t param_1,uint64_t param_2)
void FUN_18073cc30(uint64_t param_1,uint64_t param_2)

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
    iVar1 = (**(code **)(*plStack_120 + 0x38))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073cccb;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074be30(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6144_ptr);
  }
LAB_18073cccb:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073cd10(uint64_t param_1,int8_t *param_2)
void FUN_18073cd10(uint64_t param_1,int8_t *param_2)

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
  iVar1 = func_0x00018074fb10(param_1,&plStack_120,&lStack_128);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*plStack_120 + 0xa8))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073cdb6;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    FUN_18074be30(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6384_ptr);
  }
LAB_18073cdb6:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073cdf0(uint64_t param_1,uint64_t param_2)
void FUN_18073cdf0(uint64_t param_1,uint64_t param_2)

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
    iVar1 = (**(code **)(*plStack_120 + 0x118))(plStack_120,param_2);
    if (iVar1 == 0) goto LAB_18073ce8e;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6704_ptr);
  }
LAB_18073ce8e:
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18073ced0(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_18073ced0(uint64_t param_1,int64_t param_2,int64_t param_3)

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
    param_2 = param_2 << 0x14;
    param_3 = param_3 << 0x14;
    iVar1 = (**(code **)(*plStack_140 + 0x100))(plStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_18073cfcb;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074be80(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074be80(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,4,param_1,&unknown_var_6616_ptr);
  }
FUN_18073cfcb:
  if (lStack_148 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part127.c - 16 个函数

// 函数: void FUN_18074177e(void)
void FUN_18074177e(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807417b0(uint64_t param_1,int32_t param_2,int32_t param_3)
void FUN_1807417b0(uint64_t param_1,int32_t param_2,int32_t param_3)

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
  iVar1 = FUN_180763070(param_1,auStack_148,0);
  if (((iVar1 != 0) || (iVar1 = func_0x000180762af0(auStack_148[0],param_2,param_3), iVar1 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b7d0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,7,param_1,&unknown_var_7744_ptr);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}





// 函数: void FUN_180741810(void)
void FUN_180741810(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b7d0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_EBP);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,7);
}





// 函数: void FUN_180741888(void)
void FUN_180741888(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807418b0(uint64_t param_1,int32_t param_2)
void FUN_1807418b0(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  int64_t lStack_138;
  uint64_t uStack_130;
  int8_t auStack_128 [256];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  lStack_138 = 0;
  iVar1 = FUN_180766520(param_1,&uStack_130,&lStack_138);
  if (iVar1 == 0) {
    puStack_148 = (int8_t *)((uint64_t)puStack_148 & 0xffffffffffffff00);
    iVar1 = FUN_180765c40(uStack_130,param_2,0x40,1);
    if (iVar1 == 0) goto LAB_180741958;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074b830(auStack_128,0x100,param_2);
    puStack_148 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,8,param_1,&unknown_var_8040_ptr);
  }
LAB_180741958:
  if (lStack_138 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807419a0(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void FUN_1807419a0(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_198 [32];
  int8_t *puStack_178;
  int32_t uStack_170;
  int8_t uStack_168;
  int64_t lStack_158;
  uint64_t uStack_150;
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  lStack_158 = 0;
  iVar1 = FUN_180766520(param_1,&uStack_150,&lStack_158);
  if (iVar1 == 0) {
    uStack_168 = 1;
    uStack_170 = 0x40;
    puStack_178 = (int8_t *)CONCAT44(puStack_178._4_4_,param_5);
    iVar1 = FUN_180765da0(uStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_180741b27;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bac0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(auStack_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b7d0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    puStack_178 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,8,param_1,&unknown_var_8064_ptr);
  }
FUN_180741b27:
  if (lStack_158 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807419bd(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
void FUN_1807419bd(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)

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
  int64_t lStack0000000000000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000150;
  int32_t in_stack_000001c0;
  
  uVar4 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  lStack0000000000000040 = 0;
  iVar1 = FUN_180766520(param_1,&stack0x00000048,&stack0x00000040);
  if (iVar1 == 0) {
    iVar1 = FUN_180765da0(in_stack_00000048,param_2,param_3,param_4,
                          CONCAT44(uVar4,in_stack_000001c0));
    if (iVar1 == 0) goto FUN_180741b27;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = FUN_18074bac0(&stack0x00000050,0x100,param_2);
    iVar3 = FUN_18074b880(&stack0x00000050 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(&stack0x00000050 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000050 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b7d0(&stack0x00000050 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(&stack0x00000050 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074b7d0(&stack0x00000050 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),in_stack_000001c0
                       );
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,8,param_1,&unknown_var_8064_ptr,&stack0x00000050);
  }
FUN_180741b27:
  if (lStack0000000000000040 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180741a43(void)
void FUN_180741a43(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  int32_t unaff_R14D;
  int32_t unaff_R15D;
  
  iVar1 = FUN_18074bac0(&stack0x00000050,0x100);
  iVar2 = FUN_18074b880(&stack0x00000050 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(&stack0x00000050 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000050 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(&stack0x00000050 + iVar1,0x100 - iVar1,unaff_R14D);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000050 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b7d0(&stack0x00000050 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R15D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,8);
}





// 函数: void FUN_180741b27(void)
void FUN_180741b27(void)

{
  int64_t in_stack_00000040;
  uint64_t in_stack_00000150;
  
  if (in_stack_00000040 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180741b59(void)
void FUN_180741b59(void)

{
  uint64_t in_stack_00000150;
  
  FUN_180743d80();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_180741b80(int *param_1)

{
  uint64_t uVar1;
  
  *param_1 = *param_1 + -1;
  if (*param_1 == 0) {
    uVar1 = FUN_18076ade0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_18076a6f0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_180768820();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int64_t *)(param_1 + 0x4a) != 0) {
      FUN_180768380(*(int64_t *)(param_1 + 0x4a),0);
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
    }
    if (*(int64_t *)(param_1 + 0x48) != 0) {
      FUN_180768380(*(int64_t *)(param_1 + 0x48),0);
      param_1[0x48] = 0;
      param_1[0x49] = 0;
    }
    if (*(int64_t *)(param_1 + 0x46) != 0) {
      FUN_180768380(*(int64_t *)(param_1 + 0x46),0);
      param_1[0x46] = 0;
      param_1[0x47] = 0;
    }
  }
  return 0;
}



uint64_t FUN_180741c20(int *param_1)

{
  uint64_t uVar1;
  
  if (*param_1 == 0) {
    uVar1 = FUN_1807682e0(param_1 + 0x48,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1807682e0(param_1 + 0x46,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1807682e0(param_1 + 0x4a,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1807686d0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  *param_1 = *param_1 + 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t thunk_FUN_180742070(int64_t *param_1)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  if (((*(byte *)(param_1 + 0x66) & 1) != 0) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8096_ptr,0x14b,1);
  }
  plVar2 = param_1 + 2;
  lVar3 = 100;
  do {
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar2,&unknown_var_8096_ptr,0x152,1);
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x6b] = (int64_t)&unknown_var_528_ptr;
  param_1[0x6c] = (int64_t)&unknown_var_544_ptr;
  param_1[0x6d] = (int64_t)&unknown_var_512_ptr;
  uVar1 = *(uint *)(param_1 + 0x66);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x67] = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0x66) = uVar1 & 0xfffffffe;
  param_1[0x6e] = 0;
  if (param_1[0x6f] != 0) {
    FUN_180768380(param_1[0x6f],~(byte)(uVar1 >> 1) & 1);
    param_1[0x6f] = 0;
  }
  return 0;
}



uint64_t FUN_180741d10(uint64_t param_1,int param_2,int param_3,uint64_t param_4,
                       int32_t param_5,int32_t param_6,int8_t param_7)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  
  iVar3 = 8;
  if (0 < param_3) {
    iVar3 = param_3;
  }
  lVar1 = FUN_180741e10(param_1,param_2 + 8 + iVar3,param_4,param_5,param_6,param_7,1);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = (int64_t)iVar3 + 7 + lVar1 & ~((int64_t)iVar3 - 1U);
  *(int64_t *)(uVar2 - 8) = lVar1;
  return uVar2;
}





// 函数: void FUN_180741d80(uint64_t param_1,int param_2,int param_3,uint64_t param_4,int32_t param_5,
void FUN_180741d80(uint64_t param_1,int param_2,int param_3,uint64_t param_4,int32_t param_5,
                  int32_t param_6)

{
  int64_t lVar1;
  int iVar2;
  
  iVar2 = 8;
  if (0 < param_3) {
    iVar2 = param_3;
  }
  lVar1 = FUN_180741e10(param_1,param_2 + 8 + iVar2,param_4,param_5,param_6,1,1);
  if (lVar1 == 0) {
    return;
  }
  *(int64_t *)(((int64_t)(iVar2 + -1) + 8U + lVar1 & ~(int64_t)(iVar2 + -1)) - 8) = lVar1;
  return;
}





// 函数: void FUN_180741df0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180741df0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(param_1,*(uint64_t *)(param_2 + -8),param_3,param_4,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180741e10(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,uint param_5,
void FUN_180741e10(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,uint param_5,
                  char param_6)

{
  uint64_t uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int64_t lVar5;
  int8_t auStack_198 [32];
  int32_t uStack_178;
  int8_t uStack_170;
  int8_t uStack_168;
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  lVar5 = (int64_t)param_2;
  if (*(int64_t *)(param_1 + 0x378) == 0) {
    iVar2 = FUN_1807682e0(param_1 + 0x378,1);
    if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_198);
    }
  }
  FUN_180768360(*(uint64_t *)(param_1 + 0x378));
  if (*(code **)(param_1 + 0x358) == (code *)0x0) {
    if ((*(byte *)(param_1 + 0x330) & 1) == 0) {
      piVar4 = (int *)FUN_18076c8c0(*(uint64_t *)(param_1 + 0x370),lVar5);
      if (piVar4 == (int *)0x0) goto LAB_180741fc4;
      param_2 = func_0x00018076c250(piVar4);
    }
    else {
      uVar1 = (int64_t)(param_2 + -1 + *(int *)(param_1 + 0x380)) /
              (int64_t)*(int *)(param_1 + 0x380);
      iVar2 = FUN_180742190(param_1,*(int32_t *)(param_1 + 0x348),
                            *(int32_t *)(param_1 + 0x33c),uVar1 & 0xffffffff);
      if (iVar2 < 0) goto LAB_180741fc4;
      FUN_180742af0(param_1,iVar2,1,uVar1 & 0xffffffff);
      uStack_168 = 1;
      uStack_170 = 0;
      uStack_178 = 0;
      piVar4 = (int *)FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),8,&unknown_var_8096_ptr,0x2b0);
      if (piVar4 == (int *)0x0) goto LAB_180741fc4;
      piVar4[1] = iVar2;
      *piVar4 = param_2;
    }
  }
  else {
    param_2 = param_2 + 8;
    param_5 = param_5 & *(uint *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x24);
    piVar3 = (int *)(**(code **)(param_1 + 0x358))(param_2,param_5,0);
    if (piVar3 == (int *)0x0) goto LAB_180741fc4;
    *piVar3 = param_2;
    piVar4 = piVar3 + 2;
    piVar3[1] = param_5;
  }
  if (piVar4 != (int *)0x0) {
    *(int *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + param_2;
    if (*(uint *)(param_1 + 0x344) < *(uint *)(param_1 + 0x340)) {
      *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x340);
    }
    if (((*(byte *)(param_1 + 0x330) & 1) == 0) && (param_6 != '\0')) {
                    // WARNING: Subroutine does not return
      memset(piVar4,0,lVar5);
    }
                    // WARNING: Subroutine does not return
    FUN_180768400(*(uint64_t *)(param_1 + 0x378));
  }
LAB_180741fc4:
                    // WARNING: Subroutine does not return
  FUN_180768400(*(uint64_t *)(param_1 + 0x378));
}





// 函数: void FUN_180742050(void)
void FUN_180742050(void)

{
  FUN_180741e10();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180742070(int64_t *param_1)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  if (((*(byte *)(param_1 + 0x66) & 1) != 0) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8096_ptr,0x14b,1);
  }
  plVar2 = param_1 + 2;
  lVar3 = 100;
  do {
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar2,&unknown_var_8096_ptr,0x152,1);
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x6b] = (int64_t)&unknown_var_528_ptr;
  param_1[0x6c] = (int64_t)&unknown_var_544_ptr;
  param_1[0x6d] = (int64_t)&unknown_var_512_ptr;
  uVar1 = *(uint *)(param_1 + 0x66);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x67] = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0x66) = uVar1 & 0xfffffffe;
  param_1[0x6e] = 0;
  if (param_1[0x6f] != 0) {
    FUN_180768380(param_1[0x6f],~(byte)(uVar1 >> 1) & 1);
    param_1[0x6f] = 0;
  }
  return 0;
}



int FUN_180742190(int64_t *param_1,uint param_2,int param_3,int param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 1 << ((byte)param_2 & 7);
  if (0 < param_4) {
    lVar2 = (int64_t)(int)param_2 >> 3;
    do {
      if ((param_3 <= (int)param_2) || (*(int *)((int64_t)param_1 + 0x33c) <= (int)param_2)) break;
      lVar1 = *param_1;
      if (((*(byte *)(lVar1 + lVar2) & (byte)iVar4) == 0) &&
         (((param_2 & 0x1f) != 0 || (*(int *)(lVar1 + lVar2) != -1)))) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = 0;
      }
      if (((param_2 & 0x1f) == 0) && (*(int *)(lVar1 + lVar2) == -1)) {
        lVar2 = lVar2 + 4;
        param_2 = param_2 + 0x20;
      }
      else {
        param_2 = param_2 + 1;
        iVar4 = iVar4 * 2;
        if ((param_2 & 7) == 0) {
          iVar4 = 1;
          lVar2 = lVar2 + 1;
        }
      }
    } while (iVar3 < param_4);
  }
  if (iVar3 == param_4) {
    return param_2 - param_4;
  }
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180742250(int64_t *param_1,int *param_2)
void FUN_180742250(int64_t *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint uVar8;
  uint64_t uVar9;
  uint uVar10;
  uint uVar11;
  uint64_t uVar12;
  bool bVar13;
  
  uVar10 = 0;
  if ((param_1[0x6f] == 0) && (iVar1 = FUN_1807682e0(param_1 + 0x6f,1), iVar1 != 0)) {
    return;
  }
  FUN_180768360(param_1[0x6f]);
  if (param_1[0x6b] == 0) {
    if ((*(byte *)(param_1 + 0x66) & 1) == 0) {
      iVar1 = func_0x00018076c250(param_2);
    }
    else {
      iVar1 = *param_2;
    }
  }
  else {
    uVar10 = param_2[-1];
    iVar1 = param_2[-2];
  }
  *(int *)(param_1 + 0x68) = (int)param_1[0x68] - iVar1;
  if ((code *)param_1[0x6d] == (code *)0x0) {
    if ((*(byte *)(param_1 + 0x66) & 1) == 0) {
      FUN_18076c260(param_1[0x6e],param_2);
    }
    else {
      uVar10 = param_2[1];
      uVar8 = uVar10 & 7;
      uVar9 = (int64_t)(*param_2 + -1 + (int)param_1[0x70]) / (int64_t)(int)param_1[0x70];
      uVar6 = uVar9 & 0xffffffff;
      uVar11 = (uint)uVar9;
      uVar2 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 7U)) >> 3;
      uVar9 = (uint64_t)(int)uVar2;
      if ((uVar10 & 0x1f) != 0) {
        uVar5 = 0x20 - (uVar10 & 0x1f);
        if ((int)uVar5 <= (int)uVar11) {
          uVar6 = (uint64_t)uVar5;
        }
        if ((int)uVar6 != 0) {
          uVar11 = uVar11 - (int)uVar6;
          uVar12 = uVar9;
          do {
            *(byte *)(*param_1 + uVar12) =
                 *(byte *)(*param_1 + uVar12) & ~(byte)(1 << (uVar8 & 0x1f));
            uVar5 = uVar8 + 1;
            bVar13 = (int)(uVar8 - 7) < 0;
            uVar2 = (uint)uVar9 + 1;
            if ((int)uVar5 < 8) {
              uVar2 = (uint)uVar9;
            }
            uVar8 = 0;
            if (SBORROW4(uVar5,8) != bVar13) {
              uVar8 = uVar5;
            }
            uVar9 = (uint64_t)uVar2;
            uVar3 = uVar12 + 1;
            if (SBORROW4(uVar5,8) != bVar13) {
              uVar3 = uVar12;
            }
            uVar5 = (int)uVar6 - 1;
            uVar6 = (uint64_t)uVar5;
            uVar12 = uVar3;
          } while (uVar5 != 0);
        }
      }
      iVar1 = (int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3;
      if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
        memset((int64_t)(int)uVar2 + *param_1,0,(int64_t)iVar1);
      }
      uVar11 = uVar11 & 0x1f;
      if (uVar11 != 0) {
        lVar7 = (int64_t)(int)uVar2;
        do {
          *(byte *)(*param_1 + lVar7) = *(byte *)(*param_1 + lVar7) & ~(byte)(1 << (uVar8 & 0x1f));
          uVar2 = uVar8 + 1;
          iVar1 = uVar8 - 7;
          lVar4 = lVar7 + 1;
          if ((int)uVar2 < 8) {
            lVar4 = lVar7;
          }
          uVar8 = 0;
          if (SBORROW4(uVar2,8) != iVar1 < 0) {
            uVar8 = uVar2;
          }
          uVar11 = uVar11 - 1;
          lVar7 = lVar4;
        } while (uVar11 != 0);
      }
      if ((int)uVar10 < (int)param_1[0x69]) {
        *(uint *)(param_1 + 0x69) = uVar10;
      }
    }
  }
  else {
    (*(code *)param_1[0x6d])(param_2 + -2,*(uint *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x24) & uVar10,0);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(param_1[0x6f]);
}



uint64_t
FUN_180742460(int64_t param_1,int64_t param_2,int param_3,int32_t param_4,int32_t param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  FUN_180742070();
  *(int32_t *)(param_1 + 0x330) = param_4;
  *(int32_t *)(param_1 + 0x334) = param_5;
  if (param_2 == 0) {
    lVar1 = FUN_180742570(param_3,param_1);
    if (lVar1 == -1) {
      return 0x26;
    }
    lVar1 = FUN_18076bcd0(lVar1,(int64_t)param_3,0,FUN_180742570,param_1);
    *(int64_t *)(param_1 + 0x370) = lVar1;
  }
  else {
    if (param_3 == 0) {
      return 0x26;
    }
    uVar3 = param_2 + 0xffU & 0xffffffffffffff00;
    lVar1 = FUN_18076bcd0(uVar3,(int64_t)(((int)param_2 - (int)uVar3) + param_3) &
                                0xffffffffffffff00,0,0,0);
    *(int64_t *)(param_1 + 0x370) = lVar1;
  }
  if (lVar1 == 0) {
    return 0x26;
  }
  *(uint64_t *)(param_1 + 0x344) = 0;
  *(int32_t *)(param_1 + 0x340) = 0;
  *(uint64_t *)(param_1 + 0x358) = 0;
  *(uint64_t *)(param_1 + 0x360) = 0;
  *(uint64_t *)(param_1 + 0x368) = 0;
  uVar2 = FUN_1807682e0(param_1 + 0x378,
                        CONCAT31((uint3)(*(uint *)(param_1 + 0x330) >> 9),
                                 ~(byte)(*(uint *)(param_1 + 0x330) >> 1)) & 0xffffff01);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180742570(int param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    uVar3 = *(uint64_t *)(param_2 + 0x350);
    *(uint64_t *)(param_2 + 0x350) = uVar3;
    return uVar3;
  }
  if (-1 < param_1) {
    uVar4 = 0;
    plVar1 = (int64_t *)(param_2 + 0x10);
    uVar3 = uVar4;
    do {
      iVar5 = (int)uVar3;
      if (*plVar1 == 0) {
        lVar2 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1 + 0x10,&unknown_var_8096_ptr,
                              0x9b,*(int32_t *)(param_2 + 0x334),0,1);
        if (lVar2 == 0) {
          return 0xffffffffffffffff;
        }
        if (iVar5 == 100) {
          return 0xffffffffffffffff;
        }
        *(int64_t *)(param_2 + 0x10 + (int64_t)iVar5 * 8) = lVar2;
        uVar3 = lVar2 + 0xfU & 0xfffffffffffffff0;
        *(uint64_t *)(param_2 + 0x350) = uVar3 + (int64_t)param_1;
        return uVar3;
      }
      uVar3 = (uint64_t)(iVar5 + 1);
      uVar4 = uVar4 + 1;
      plVar1 = plVar1 + 1;
    } while ((int64_t)uVar4 < 100);
  }
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180742650(int64_t *param_1,int *param_2,int param_3,uint64_t param_4,int32_t param_5,
void FUN_180742650(int64_t *param_1,int *param_2,int param_3,uint64_t param_4,int32_t param_5,
                  int32_t param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint uVar14;
  bool bVar15;
  int8_t auStack_1b8 [32];
  int32_t uStack_198;
  int8_t uStack_190;
  int8_t uStack_188;
  uint uStack_178;
  int iStack_174;
  int32_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1b8;
  uStack_170 = param_5;
  uStack_168 = param_4;
  if (param_2 == (int *)0x0) {
    uStack_188 = 1;
    uStack_190 = 0;
    uStack_198 = param_6;
    FUN_180741e10(param_1,param_3,param_4,param_5);
FUN_180742aca:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_1b8);
  }
  if ((param_1[0x6f] == 0) && (iVar2 = FUN_1807682e0(param_1 + 0x6f,1), iVar2 != 0))
  goto FUN_180742aca;
  FUN_180768360(param_1[0x6f]);
  if ((param_1[0x6b] == 0) && ((*(byte *)(param_1 + 0x66) & 1) == 0)) {
    uVar11 = 0;
    iVar2 = func_0x00018076c250(param_2);
  }
  else {
    uVar11 = param_2[-1];
    iVar2 = param_2[-2];
  }
  *(int *)(param_1 + 0x68) = (int)param_1[0x68] - iVar2;
  if ((code *)param_1[0x6c] == (code *)0x0) {
    if ((code *)param_1[0x6b] != (code *)0x0) {
      uVar11 = uVar11 & *(uint *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x24);
      piVar5 = (int *)(*(code *)param_1[0x6b])(param_3 + 8,uVar11,0);
      if (piVar5 != (int *)0x0) {
        *piVar5 = param_3 + 8;
        piVar5[1] = uVar11;
                    // WARNING: Subroutine does not return
        memmove(piVar5 + 2,param_2,(int64_t)iVar2 + -8);
      }
      goto LAB_180742a3a;
    }
    if ((*(byte *)(param_1 + 0x66) & 1) == 0) {
      param_2 = (int *)func_0x00018076cc30(param_1[0x6e],param_2,(int64_t)param_3);
      if (param_2 == (int *)0x0) goto LAB_180742a3a;
      param_3 = func_0x00018076c250(param_2);
    }
    else {
      iVar1 = (int)param_1[0x70];
      uStack_178 = param_2[-1];
      iVar3 = (param_3 + -1 + iVar1) / iVar1;
      uVar11 = uStack_178 & 7;
      uVar12 = (int64_t)(iVar1 + -1 + iVar2) / (int64_t)iVar1;
      uVar9 = uVar12 & 0xffffffff;
      uVar14 = (uint)uVar12;
      uVar4 = (int)(uStack_178 + ((int)uStack_178 >> 0x1f & 7U)) >> 3;
      uVar12 = (uint64_t)(int)uVar4;
      if ((uStack_178 & 0x1f) != 0) {
        uVar8 = 0x20 - (uStack_178 & 0x1f);
        if ((int)uVar8 <= (int)uVar14) {
          uVar9 = (uint64_t)uVar8;
        }
        if ((int)uVar9 != 0) {
          uVar14 = uVar14 - (int)uVar9;
          uVar13 = uVar12;
          do {
            *(byte *)(*param_1 + uVar13) =
                 *(byte *)(*param_1 + uVar13) & ~(byte)(1 << (uVar11 & 0x1f));
            uVar8 = uVar11 + 1;
            bVar15 = (int)(uVar11 - 7) < 0;
            uVar4 = (uint)uVar12 + 1;
            if ((int)uVar8 < 8) {
              uVar4 = (uint)uVar12;
            }
            uVar11 = 0;
            if (SBORROW4(uVar8,8) != bVar15) {
              uVar11 = uVar8;
            }
            uVar12 = (uint64_t)uVar4;
            uVar6 = uVar13 + 1;
            if (SBORROW4(uVar8,8) != bVar15) {
              uVar6 = uVar13;
            }
            uVar8 = (int)uVar9 - 1;
            uVar9 = (uint64_t)uVar8;
            uVar13 = uVar6;
          } while (uVar8 != 0);
        }
      }
      iVar2 = (int)(uVar14 + ((int)uVar14 >> 0x1f & 7U)) >> 3;
      iStack_174 = iVar3;
      if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
        memset((int64_t)(int)uVar4 + *param_1,0,(int64_t)iVar2);
      }
      uVar14 = uVar14 & 0x1f;
      if (uVar14 != 0) {
        lVar10 = (int64_t)(int)uVar4;
        do {
          *(byte *)(*param_1 + lVar10) =
               *(byte *)(*param_1 + lVar10) & ~(byte)(1 << (uVar11 & 0x1f));
          uVar4 = uVar11 + 1;
          iVar2 = uVar11 - 7;
          lVar7 = lVar10 + 1;
          if ((int)uVar4 < 8) {
            lVar7 = lVar10;
          }
          uVar11 = 0;
          if (SBORROW4(uVar4,8) != iVar2 < 0) {
            uVar11 = uVar4;
          }
          uVar14 = uVar14 - 1;
          lVar10 = lVar7;
        } while (uVar14 != 0);
      }
      uVar11 = *(uint *)(param_1 + 0x69);
      if ((int)uStack_178 < (int)*(uint *)(param_1 + 0x69)) {
        *(uint *)(param_1 + 0x69) = uStack_178;
        uVar11 = uStack_178;
      }
      iVar2 = FUN_180742190(param_1,param_2[-1],param_2[-1] + iVar3,iVar3);
      if (iVar2 < 0) {
        iVar2 = FUN_180742190(param_1,uVar11,*(int32_t *)((int64_t)param_1 + 0x33c),iVar3);
        if (-1 < iVar2) {
          FUN_180742af0(param_1,iVar2,1,iVar3);
          if ((*(byte *)(param_1 + 0x66) & 1) == 0) {
            piVar5 = (int *)((int64_t)((int)param_1[0x70] * iVar2) + param_1[1]);
          }
          else {
            piVar5 = param_2 + -2;
          }
          piVar5[1] = iVar2;
          *piVar5 = param_3;
          if ((*(byte *)(param_1 + 0x66) & 1) == 0) {
                    // WARNING: Subroutine does not return
            memmove(piVar5 + 2,param_2,(int64_t)param_2[-2]);
          }
        }
      }
      else {
        FUN_180742af0(param_1,iVar2,1);
        *(int *)((int64_t)((int)param_1[0x70] * iVar2) + 4 + param_1[1]) = iVar2;
      }
    }
  }
  else {
    param_3 = param_3 + 8;
    uVar11 = uVar11 & *(uint *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x24);
    piVar5 = (int *)(*(code *)param_1[0x6c])(param_2 + -2,param_3,uVar11,0);
    if (piVar5 == (int *)0x0) goto LAB_180742a3a;
    *piVar5 = param_3;
    param_2 = piVar5 + 2;
    piVar5[1] = uVar11;
  }
  if (param_2 != (int *)0x0) {
    *(int *)(param_1 + 0x68) = (int)param_1[0x68] + param_3;
    if (*(uint *)((int64_t)param_1 + 0x344) < *(uint *)(param_1 + 0x68)) {
      *(uint *)((int64_t)param_1 + 0x344) = *(uint *)(param_1 + 0x68);
    }
                    // WARNING: Subroutine does not return
    FUN_180768400(param_1[0x6f]);
  }
LAB_180742a3a:
                    // WARNING: Subroutine does not return
  FUN_180768400(param_1[0x6f]);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




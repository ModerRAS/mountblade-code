#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part324.c - 25 个函数

// 函数: void FUN_180845ef0(ulonglong param_1,uint *param_2)
void FUN_180845ef0(ulonglong param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  uint64_t uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  int8_t auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  if (param_2 == (uint *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
    }
    FUN_18074b930(auStack_118,0x100,0);
    puStack_148 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&unknown_var_736_ptr);
  }
  *param_2 = 0;
  uStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  iVar1 = func_0x00018088c590(0,&lStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,lStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    lStack_128 = *(longlong *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
  lVar2 = FUN_18083fbf0(*(uint64_t *)(lStack_130 + 800),lStack_128 + 0x30);
  if (lVar2 != 0) {
    puVar3 = (uint *)FUN_18084cde0(lVar2,&lStack_120);
    *param_2 = *puVar3 / 0x30;
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846050(int32_t param_1,int32_t *param_2,int32_t *param_3)
void FUN_180846050(int32_t param_1,int32_t *param_2,int32_t *param_3)

{
  int iVar1;
  int8_t auStack_188 [48];
  uint64_t uStack_158;
  uint64_t uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
  }
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_150);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_140), iVar1 == 0)) {
    lStack_148 = *(longlong *)(alStack_140[0] + 8);
  }
  else if (iVar1 != 0) goto LAB_18084610f;
  if (lStack_148 != 0) {
    if (param_2 != (int32_t *)0x0) {
      *param_2 = *(int32_t *)(lStack_148 + 0xf0);
    }
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(lStack_148 + 0xf4);
    }
  }
LAB_18084610f:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846210(uint64_t param_1,longlong param_2,int32_t *param_3,int32_t *param_4)
void FUN_180846210(uint64_t param_1,longlong param_2,int32_t *param_3,int32_t *param_4)

{
  int iVar1;
  int iVar2;
  int8_t auStack_198 [32];
  int8_t *puStack_178;
  int32_t auStack_168 [2];
  uint64_t uStack_160;
  longlong alStack_158 [2];
  int8_t auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_198;
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (int32_t *)0x0) {
    *param_4 = 0;
  }
  if (param_2 == 0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
      iVar1 = FUN_18074b880(auStack_148,0x100,0);
      iVar2 = FUN_18074b880(auStack_148 + iVar1,0x100 - iVar1,&system_temp_buffer);
      iVar1 = iVar1 + iVar2;
      iVar2 = FUN_18074bac0(auStack_148 + iVar1,0x100 - iVar1,param_3);
      iVar1 = iVar1 + iVar2;
      iVar2 = FUN_18074b880(auStack_148 + iVar1,0x100 - iVar1,&system_temp_buffer);
      FUN_18074bac0(auStack_148 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_4);
      puStack_178 = auStack_148;
                    // WARNING: Subroutine does not return
      FUN_180749ef0(0x1f,0xb,param_1,&unknown_var_480_ptr);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
  }
  uStack_160 = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_158);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_158[0] + 0x24) >> 1 & 1) == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&uStack_160);
    }
    iVar2 = FUN_18088c740(&uStack_160);
    if (iVar2 != 0) goto LAB_1808462b2;
  }
  iVar2 = iVar1;
LAB_1808462b2:
  if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_160);
  }
  auStack_168[0] = 0;
  iVar1 = FUN_180840af0(alStack_158[0],param_2,auStack_168);
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_160);
  }
  func_0x0001808676a0(alStack_158[0] + 0x60,auStack_168[0],param_3,param_4);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_160);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846410(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_180846410(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  iVar1 = FUN_180840600();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = func_0x00018074b7d0(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_148 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xc,param_1,&unknown_var_640_ptr);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}





// 函数: void FUN_180846453(void)
void FUN_180846453(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000030,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xc);
}





// 函数: void FUN_1808464cb(void)
void FUN_1808464cb(void)

{
  ulonglong in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000130 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808464f0(ulonglong param_1,int32_t *param_2)
void FUN_1808464f0(ulonglong param_1,int32_t *param_2)

{
  int iVar1;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  uint64_t uStack_138;
  uint64_t uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  int8_t auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  if (param_2 == (int32_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
    }
    FUN_18074b930(auStack_118,0x100,0);
    puStack_148 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&unknown_var_592_ptr);
  }
  *param_2 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,uStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    lStack_128 = *(longlong *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
  *param_2 = *(int32_t *)(lStack_128 + 0x88);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846610(ulonglong param_1,int8_t *param_2,int param_3,int32_t *param_4)
void FUN_180846610(ulonglong param_1,int8_t *param_2,int param_3,int32_t *param_4)

{
  int iVar1;
  int iVar2;
  int8_t auStack_1a8 [32];
  int32_t *puStack_188;
  uint64_t uStack_178;
  uint64_t uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  int32_t uStack_158;
  int32_t uStack_154;
  int32_t uStack_150;
  int32_t uStack_14c;
  int8_t auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1a8;
  if (param_2 != (int8_t *)0x0) {
    *param_2 = 0;
  }
  if (param_4 != (int32_t *)0x0) {
    *param_4 = 0;
  }
  if (((param_2 != (int8_t *)0x0) || (param_3 == 0)) && (-1 < param_3)) {
    lStack_168 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    iVar1 = func_0x00018088c590(0,&uStack_170);
    if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_178,uStack_170), iVar1 == 0)) &&
       (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_160), iVar1 == 0)) {
      lStack_168 = *(longlong *)(lStack_160 + 8);
    }
    else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&uStack_178);
    }
    uStack_158 = *(int32_t *)(lStack_168 + 0x10);
    uStack_154 = *(int32_t *)(lStack_168 + 0x14);
    uStack_150 = *(int32_t *)(lStack_168 + 0x18);
    uStack_14c = *(int32_t *)(lStack_168 + 0x1c);
    puStack_188 = param_4;
    FUN_180882160(uStack_170,&uStack_158,param_2,param_3);
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_178);
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1a8);
  }
  iVar1 = FUN_18074b880(auStack_148,0x100,param_2);
  iVar2 = FUN_18074b880(auStack_148 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(auStack_148 + iVar1,0x100 - iVar1,param_3);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(auStack_148 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074b930(auStack_148 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_4);
  puStack_188 = (int32_t *)auStack_148;
                    // WARNING: Subroutine does not return
  FUN_180749ef0(0x1f,0xc,param_1,&unknown_var_560_ptr);
}





// 函数: void FUN_180846730(void)
void FUN_180846730(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074b880(&stack0x00000060,0x100);
  iVar2 = FUN_18074b880(&stack0x00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(&stack0x00000060 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000060 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074b930(&stack0x00000060 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xc);
}





// 函数: void FUN_1808467de(void)
void FUN_1808467de(void)

{
  ulonglong in_stack_00000160;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000160 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846810(ulonglong param_1,int8_t *param_2)
void FUN_180846810(ulonglong param_1,int8_t *param_2)

{
  int iVar1;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  uint64_t uStack_148;
  uint64_t uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  int8_t auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  if (param_2 == (int8_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    FUN_18074be30(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&unknown_var_1176_ptr);
  }
  *param_2 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_140);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_148,uStack_140), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
  *param_2 = *(int8_t *)(lStack_138 + 0xbc);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846930(int32_t param_1,int32_t *param_2,int32_t *param_3)
void FUN_180846930(int32_t param_1,int32_t *param_2,int32_t *param_3)

{
  int iVar1;
  int8_t auStack_188 [48];
  uint64_t uStack_158;
  uint64_t uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
  }
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_150);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_140), iVar1 == 0)) {
    lStack_148 = 0;
    if (alStack_140[0] != 0) {
      lStack_148 = alStack_140[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_1808469dd;
  FUN_180868270(lStack_148,param_2,param_3);
LAB_1808469dd:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846a90(ulonglong param_1,int32_t *param_2)
void FUN_180846a90(ulonglong param_1,int32_t *param_2)

{
  int iVar1;
  int32_t uVar2;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  uint64_t uStack_148;
  uint64_t uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  int8_t auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  if (param_2 == (int32_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&unknown_var_1248_ptr);
  }
  *param_2 = 2;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_140);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_148,uStack_140), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
  uVar2 = func_0x0001808682c0(lStack_138);
  *param_2 = uVar2;
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846bc0(ulonglong param_1,uint param_2,int32_t *param_3)
void FUN_180846bc0(ulonglong param_1,uint param_2,int32_t *param_3)

{
  int iVar1;
  int iVar2;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  uint64_t uStack_158;
  uint64_t uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
    if (param_2 < 6) {
      lStack_148 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      iVar1 = func_0x00018088c590(0,&uStack_150);
      if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
         (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_140), iVar1 == 0)) {
        lStack_148 = 0;
        if (lStack_140 != 0) {
          lStack_148 = lStack_140 + -8;
        }
      }
      else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18088c790(&uStack_158);
      }
      *param_3 = *(int32_t *)(lStack_148 + 0xa4 + (longlong)(int)param_2 * 4);
                    // WARNING: Subroutine does not return
      FUN_18088c790(&uStack_158);
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_188);
  }
  iVar1 = func_0x00018074b7d0(auStack_138,0x100,param_2);
  iVar2 = FUN_18074b880(auStack_138 + iVar1,0x100 - iVar1,&system_temp_buffer);
  FUN_18074bac0(auStack_138 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
  puStack_168 = auStack_138;
                    // WARNING: Subroutine does not return
  FUN_180749ef0(0x1f,0xd,param_1,&unknown_var_1144_ptr);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846d30(uint64_t param_1,int32_t *param_2)
void FUN_180846d30(uint64_t param_1,int32_t *param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  longlong alStack_148 [2];
  uint64_t *apuStack_138 [2];
  int8_t auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  if (param_2 == (int32_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&unknown_var_6368_ptr);
  }
  *param_2 = 1;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_180846d91;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_180846df9;
  }
  else {
LAB_180846df9:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &unknown_var_6264_ptr;
    *(int32_t *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    iVar1 = func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138[0]);
    if (iVar1 == 0) {
      *param_2 = *(int32_t *)(apuStack_138[0] + 3);
                    // WARNING: Subroutine does not return
      FUN_18088c790(alStack_148 + 1);
    }
  }
LAB_180846d91:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846e90(ulonglong param_1,uint *param_2)
void FUN_180846e90(ulonglong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  uint64_t uStack_148;
  uint64_t uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  int8_t auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  if (param_2 == (uint *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    FUN_18074b930(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&unknown_var_1208_ptr);
  }
  uVar2 = 0;
  *param_2 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_140);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_148,uStack_140), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    if (lStack_130 == 0) {
      lStack_138 = 0;
    }
    else {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
  if (*(longlong *)(lStack_138 + 0x10) != 0) {
    uVar2 = func_0x000180855b70(*(longlong *)(lStack_138 + 0x10) + 200);
    uVar2 = uVar2 / 0x30;
  }
  *param_2 = uVar2;
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180846fe0(ulonglong param_1,uint64_t *param_2)
void FUN_180846fe0(ulonglong param_1,uint64_t *param_2)

{
  int iVar1;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  uint64_t uStack_138;
  uint64_t uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  int8_t auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
    }
    func_0x00018074bda0(auStack_118,0x100,0);
    puStack_148 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&unknown_var_896_ptr);
  }
  *param_2 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,uStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    lStack_128 = *(longlong *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
  *param_2 = *(uint64_t *)(*(longlong *)(lStack_128 + 0xd0) + 0x38);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847110(ulonglong param_1,uint64_t *param_2)
void FUN_180847110(ulonglong param_1,uint64_t *param_2)

{
  int iVar1;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  uint64_t uStack_148;
  uint64_t uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  int8_t auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&unknown_var_1312_ptr);
  }
  *param_2 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_140);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_148,uStack_140), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
  *param_2 = *(uint64_t *)(lStack_138 + 0x30);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847230(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180847230(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  iVar1 = FUN_180840790();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = FUN_18074b880(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_148 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xc,param_1,&unknown_var_696_ptr);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}





// 函数: void FUN_180847274(void)
void FUN_180847274(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074b880(&stack0x00000030,0x100);
  iVar2 = FUN_18074b880(&stack0x00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xc);
}





// 函数: void FUN_1808472ec(void)
void FUN_1808472ec(void)

{
  ulonglong in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000130 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847310(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180847310(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  iVar1 = FUN_18083ff70();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = FUN_18074b880(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_148 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_664_ptr);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}





// 函数: void FUN_180847354(void)
void FUN_180847354(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = FUN_18074b880(&stack0x00000030,0x100);
  iVar2 = FUN_18074b880(&stack0x00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xb);
}





// 函数: void FUN_1808473cc(void)
void FUN_1808473cc(void)

{
  ulonglong in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000130 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808473f0(int32_t param_1,int32_t *param_2,int32_t *param_3)
void FUN_1808473f0(int32_t param_1,int32_t *param_2,int32_t *param_3)

{
  int iVar1;
  int8_t auStack_188 [48];
  uint64_t uStack_158;
  uint64_t uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
  }
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_150);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_140), iVar1 == 0)) {
    lStack_148 = 0;
    if (alStack_140[0] != 0) {
      lStack_148 = alStack_140[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_18084749d;
  FUN_1808682e0(lStack_148,param_2,param_3);
LAB_18084749d:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




#include "TaleWorlds.Native.Split.h"

// 05_networking_part090.c - 12 个函数

// 函数: void FUN_180893080(longlong param_1,longlong param_2)
void FUN_180893080(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint64_t uStackX_8;
  
  iVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10));
  if (iVar1 == 0) {
    if (uStackX_8 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = uStackX_8 + -8;
    }
    *(int8_t *)(lVar2 + 0xbc) = *(int8_t *)(param_1 + 0x18);
                    // WARNING: Subroutine does not return
    FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return;
}



uint64_t FUN_1808930e0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  float fVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t unaff_RDI;
  longlong lStackX_8;
  
  fVar1 = *(float *)(param_1 + 0x18);
  lStackX_8 = CONCAT44(lStackX_8._4_4_,fVar1);
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  if ((fVar1 < 0.0) || (3.4028235e+38 <= fVar1)) {
    return 0x1f;
  }
  uVar2 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (lStackX_8 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lStackX_8 + -8;
  }
  *(int32_t *)(lVar3 + 0x90) = *(int32_t *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_2 + 0x98);
  if ((*(int *)(lVar3 + 0x180) != 0) || (*(int *)(lVar3 + 0x184) != 0)) {
    lStackX_8 = 0;
    FUN_180768b50(&lStackX_8,param_1,param_3,param_4,unaff_RDI);
    if (lStackX_8 == *(longlong *)((longlong)*(int *)(lVar3 + 0x17c) * 8 + 0x180c4f450)) {
      uVar2 = FUN_18088dd60(lVar3,param_1);
      if ((int)uVar2 == 0) {
        return 0;
      }
      return uVar2;
    }
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  uVar2 = func_0x0001808e64d0(*(uint64_t *)(lVar3 + 0x1e0));
  if ((int)uVar2 == 0) {
    return 0;
  }
  return uVar2;
}



uint64_t FUN_180893190(longlong param_1,longlong param_2)

{
  float fVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong lStackX_8;
  
  fVar1 = *(float *)(param_1 + 0x1c);
  lStackX_8 = CONCAT44(lStackX_8._4_4_,fVar1);
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  switch(*(int32_t *)(param_1 + 0x18)) {
  case 0:
    if ((0.0 <= fVar1) && (fVar1 <= 256.0)) goto code_r0x00018089322c;
    goto joined_r0x00018089322a;
  case 1:
  case 2:
  case 3:
  case 4:
    break;
  case 5:
    break;
  default:
    goto code_r0x000180893206;
  }
  if (fVar1 < 0.0) {
joined_r0x00018089322a:
    if (fVar1 != -1.0) {
code_r0x000180893206:
      return 0x1f;
    }
  }
code_r0x00018089322c:
  uVar2 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10));
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (lStackX_8 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lStackX_8 + -8;
  }
  *(int32_t *)(lVar3 + 0xa4 + (longlong)*(int *)(param_1 + 0x18) * 4) =
       *(int32_t *)(param_1 + 0x1c);
  lVar3 = *(longlong *)(param_2 + 0x98);
  if ((*(int *)(lVar3 + 0x180) != 0) || (*(int *)(lVar3 + 0x184) != 0)) {
    lStackX_8 = 0;
    FUN_180768b50(&lStackX_8);
    if (lStackX_8 == *(longlong *)((longlong)*(int *)(lVar3 + 0x17c) * 8 + 0x180c4f450)) {
      uVar2 = FUN_18088dd60(lVar3,param_1);
      if ((int)uVar2 == 0) {
        return 0;
      }
      return uVar2;
    }
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  uVar2 = func_0x0001808e64d0(*(uint64_t *)(lVar3 + 0x1e0));
  if ((int)uVar2 == 0) {
    return 0;
  }
  return uVar2;
}



uint64_t FUN_180893290(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lStackX_8;
  
  if (3 < *(uint *)(param_1 + 0x18)) {
    return 0x1f;
  }
  lStackX_8 = CONCAT44(lStackX_8._4_4_,*(uint *)(param_1 + 0x1c));
  if ((*(uint *)(param_1 + 0x1c) & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lStackX_8 + -8;
  }
  *(int32_t *)(lVar2 + 0x94 + (longlong)*(int *)(param_1 + 0x18) * 4) =
       *(int32_t *)(param_1 + 0x1c);
  lVar2 = *(longlong *)(param_2 + 0x98);
  if ((*(int *)(lVar2 + 0x180) != 0) || (*(int *)(lVar2 + 0x184) != 0)) {
    lStackX_8 = 0;
    FUN_180768b50(&lStackX_8);
    if (lStackX_8 == *(longlong *)((longlong)*(int *)(lVar2 + 0x17c) * 8 + 0x180c4f450)) {
      uVar1 = FUN_18088dd60(lVar2,param_1);
      if ((int)uVar1 == 0) {
        return 0;
      }
      return uVar1;
    }
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  uVar1 = func_0x0001808e64d0(*(uint64_t *)(lVar2 + 0x1e0));
  if ((int)uVar1 == 0) {
    return 0;
  }
  return uVar1;
}



uint64_t FUN_180893330(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  uint uStackX_8;
  int32_t uStackX_c;
  
  uStackX_8 = *(uint *)(param_1 + 0x18);
  if ((uStackX_8 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&uStackX_8);
  if ((int)uVar1 == 0) {
    if (CONCAT44(uStackX_c,uStackX_8) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = CONCAT44(uStackX_c,uStackX_8) + -8;
    }
    *(int32_t *)(lVar2 + 0x8c) = *(int32_t *)(param_1 + 0x18);
                    // WARNING: Subroutine does not return
    FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return uVar1;
}





// 函数: void FUN_1808933c0(longlong param_1,longlong param_2)
void FUN_1808933c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lStackX_8;
  
  iVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if (iVar1 == 0) {
    if (lStackX_8 != 0) {
      lStackX_8 = lStackX_8 + -8;
    }
    *(int *)(lStackX_8 + 0x84) = *(int *)(lStackX_8 + 0x84) + 1;
    *(int8_t *)(lStackX_8 + 0xbd) = 1;
                    // WARNING: Subroutine does not return
    FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return;
}





// 函数: void FUN_180893420(longlong param_1,longlong param_2)
void FUN_180893420(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lStackX_8;
  
  iVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if (iVar1 == 0) {
    if (lStackX_8 != 0) {
      lStackX_8 = lStackX_8 + -8;
    }
    *(int *)(lStackX_8 + 0x84) = *(int *)(lStackX_8 + 0x84) + 1;
    *(int8_t *)(lStackX_8 + 0xbd) = 0;
                    // WARNING: Subroutine does not return
    FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
  }
  return;
}



uint64_t FUN_180893480(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  uint64_t uVar3;
  float fVar4;
  uint uStackX_8;
  int32_t uStackX_c;
  
  uStackX_8 = *(uint *)(param_1 + 0x14);
  if ((uStackX_8 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar3 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&uStackX_8);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar2 = *(longlong *)(CONCAT44(uStackX_c,uStackX_8) + 0x10);
  if (lVar2 == 0) {
    return 0x1e;
  }
  if ((*(byte *)(lVar2 + 0x34) & 0x11) != 0) {
    return 0x1f;
  }
  fVar1 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(lVar2 + 0x38);
  if ((*(float *)(lVar2 + 0x38) <= fVar1) &&
     (fVar4 = *(float *)(lVar2 + 0x3c), fVar1 <= *(float *)(lVar2 + 0x3c))) {
    fVar4 = fVar1;
  }
  *(float *)(param_1 + 0x14) = fVar4;
  *(float *)(CONCAT44(uStackX_c,uStackX_8) + 4) = fVar4;
                    // WARNING: Subroutine does not return
  FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
}



uint64_t FUN_180893540(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *(int32_t *)(param_1 + 0x10);
  uStack_14 = *(int32_t *)(param_1 + 0x14);
  uStack_10 = *(int32_t *)(param_1 + 0x18);
  uStack_c = *(int32_t *)(param_1 + 0x1c);
  lVar1 = (**(code **)(**(longlong **)(param_2 + 800) + 600))
                    (*(longlong **)(param_2 + 800),&uStack_18,1);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x2e8) == 0)) {
    uVar2 = 0x4a;
  }
  else {
    uVar2 = func_0x00018088c500(*(longlong *)(lVar1 + 0x2e8),param_1 + 0x20);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_18088d7c0(*(uint64_t *)(param_2 + 0x98),param_1);
      return uVar2;
    }
  }
  return uVar2;
}



uint64_t FUN_1808935c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *(int32_t *)(param_1 + 0x10);
  uStack_14 = *(int32_t *)(param_1 + 0x14);
  uStack_10 = *(int32_t *)(param_1 + 0x18);
  uStack_c = *(int32_t *)(param_1 + 0x1c);
  lVar1 = (**(code **)(**(longlong **)(param_2 + 800) + 600))
                    (*(longlong **)(param_2 + 800),&uStack_18,1);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x2e8) == 0)) {
    return 0x4a;
  }
  uVar2 = func_0x00018088c500(*(longlong *)(lVar1 + 0x2e8),param_1 + 0x20);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  lVar1 = *(longlong *)(param_2 + 0x98);
  if (*(int *)(lVar1 + 0x200) != 0) {
    if (((*(int *)(lVar1 + 0x180) == 0) && (*(int *)(lVar1 + 0x184) == 0)) ||
       (FUN_180768b50(&stack0x00000008),
       *(longlong *)((longlong)*(int *)(lVar1 + 0x17c) * 8 + 0x180c4f450) != 0)) {
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
      uVar2 = func_0x0001808e64d0(*(uint64_t *)(lVar1 + 0x1e0));
    }
    else {
      uVar2 = FUN_18088dd60(lVar1,param_1);
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}





// 函数: void FUN_180893640(longlong param_1,longlong param_2)
void FUN_180893640(longlong param_1,longlong param_2)

{
  int iVar1;
  uint64_t uStackX_8;
  
  iVar1 = FUN_180894860(param_2,param_1 + 0x10,&uStackX_8);
  if (iVar1 == 0) {
    iVar1 = func_0x00018088c500(uStackX_8,param_1 + 0x20);
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return;
}





// 函数: void FUN_1808936a0(longlong param_1,longlong param_2)
void FUN_1808936a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lStackX_8;
  
  iVar1 = FUN_1808949c0(param_2,param_1 + 0x10,&lStackX_8);
  if (iVar1 == 0) {
    iVar1 = func_0x00018088c500(*(uint64_t *)(lStackX_8 + 0xd0),param_1 + 0x20);
    if (iVar1 == 0) {
      FUN_18088d7c0(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return;
}





// 函数: void FUN_180893700(longlong param_1,longlong param_2)
void FUN_180893700(longlong param_1,longlong param_2)

{
  int iVar1;
  uint64_t uStackX_8;
  
  iVar1 = FUN_180894b00(param_2,param_1 + 0x10,&uStackX_8);
  if (iVar1 == 0) {
    iVar1 = func_0x00018088c500(uStackX_8,param_1 + 0x20);
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180893865)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180893760(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lStackX_8;
  
  if ((((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) && (*(longlong *)(param_1 + 0x40) != 0)) {
    if (*(int *)(param_1 + 0x20) < 1) {
      iVar1 = FUN_1808de900(param_2,param_1 + 0x4c);
      if ((iVar1 == 0) &&
         (iVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x4c),&lStackX_8), iVar1 == 0)) {
        if (*(int *)(lStackX_8 + 0x30) == 1) {
          *(int32_t *)(lStackX_8 + 0x30) = 2;
        }
                    // WARNING: Subroutine does not return
        FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
      }
    }
    else if (*(longlong *)(param_1 + 0x18) == 0) {
      iVar1 = 0x1f;
    }
    else {
      lVar2 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(int *)(param_1 + 0x20),
                            &unknown_var_7712_ptr,0x315,0,0,1);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar2,*(uint64_t *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20));
      }
      iVar1 = 0x26;
    }
    return iVar1;
  }
  return 0x1f;
}



// WARNING: Removing unreachable block (ram,0x000180893865)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18089379d(longlong param_1,uint64_t param_2)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong unaff_R15;
  longlong in_stack_00000060;
  
  if ((int)param_2 < 1) {
    iVar1 = FUN_1808de900();
    if ((iVar1 == 0) &&
       (iVar1 = func_0x00018088c530(*(int32_t *)(unaff_RDI + 0x4c),&stack0x00000060), iVar1 == 0)
       ) {
      if (*(int *)(in_stack_00000060 + 0x30) == 1) {
        *(int32_t *)(in_stack_00000060 + 0x30) = 2;
      }
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(unaff_R15 + 0x98));
    }
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    iVar1 = 0x1f;
  }
  else {
    lVar2 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2,&unknown_var_7712_ptr,0x315,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lVar2,*(uint64_t *)(unaff_RDI + 0x18),(longlong)*(int *)(unaff_RDI + 0x20));
    }
    iVar1 = 0x26;
  }
  return iVar1;
}



uint64_t FUN_1808938ab(void)

{
  return 0x1f;
}





// 函数: void FUN_1808938c0(longlong param_1,longlong param_2)
void FUN_1808938c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lStackX_8;
  
  iVar1 = FUN_1808de900(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = func_0x00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
    if (iVar1 == 0) {
      if (*(int *)(lStackX_8 + 0x30) == 1) {
        *(int32_t *)(lStackX_8 + 0x30) = 2;
      }
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180893a22)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180893930(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lStackX_8;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((((uVar1 != 1) || ((*(byte *)(param_1 + 0x10) & 0x1f) == 0)) && (0 < *(int *)(param_1 + 0x18))
      ) && (uVar1 < 2)) {
    if (uVar1 == 0) {
      lVar3 = FUN_180741d10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(int *)(param_1 + 0x18),0x20,
                            &unknown_var_8432_ptr,0xdd,0,0);
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar3,*(uint64_t *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0x18));
      }
      iVar2 = 0x26;
    }
    else {
      iVar2 = FUN_1808de900(param_2,param_1 + 0x24);
      if ((iVar2 == 0) &&
         (iVar2 = func_0x00018088c530(*(int32_t *)(param_1 + 0x24),&lStackX_8), iVar2 == 0)) {
        if (*(int *)(lStackX_8 + 0x30) == 1) {
          *(int32_t *)(lStackX_8 + 0x30) = 2;
        }
                    // WARNING: Subroutine does not return
        FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
      }
    }
    return iVar2;
  }
  return 0x1f;
}



// WARNING: Removing unreachable block (ram,0x000180893a22)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180893964(uint64_t param_1,uint64_t param_2)

{
  int in_EAX;
  int iVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong unaff_R15;
  longlong in_stack_00000060;
  
  if (in_EAX == 0) {
    lVar2 = FUN_180741d10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2,0x20,&unknown_var_8432_ptr,0xdd);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lVar2,*(uint64_t *)(unaff_RDI + 0x10),(longlong)*(int *)(unaff_RDI + 0x18));
    }
    iVar1 = 0x26;
  }
  else {
    iVar1 = FUN_1808de900();
    if ((iVar1 == 0) &&
       (iVar1 = func_0x00018088c530(*(int32_t *)(unaff_RDI + 0x24),&stack0x00000060), iVar1 == 0)
       ) {
      if (*(int *)(in_stack_00000060 + 0x30) == 1) {
        *(int32_t *)(in_stack_00000060 + 0x30) = 2;
      }
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(unaff_R15 + 0x98));
    }
  }
  return iVar1;
}



uint64_t FUN_180893a63(void)

{
  return 0x1f;
}



uint64_t FUN_180893d50(longlong param_1,longlong param_2)

{
  float fVar1;
  uint64_t uVar2;
  longlong lVar3;
  float fVar4;
  int32_t auStackX_18 [2];
  
  if ((*(uint *)(param_1 + 0x18) & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  auStackX_18[0] = 0;
  uVar2 = FUN_180867600(param_2 + 0x60,param_1 + 0x10,auStackX_18);
  if ((int)uVar2 == 0) {
    lVar3 = func_0x000180867680(param_2 + 0x60,auStackX_18[0]);
    if ((*(uint *)(lVar3 + 0x34) >> 4 & 1) != 0) {
      return 0x1f;
    }
    fVar1 = *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(lVar3 + 0x38);
    if ((*(float *)(lVar3 + 0x38) <= fVar1) &&
       (fVar4 = *(float *)(lVar3 + 0x3c), fVar1 <= *(float *)(lVar3 + 0x3c))) {
      fVar4 = fVar1;
    }
    *(float *)(param_1 + 0x18) = fVar4;
    uVar2 = func_0x000180867960(param_2 + 0x60,auStackX_18[0],fVar4);
    if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return uVar2;
}



uint64_t FUN_180893d8f(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  float fVar4;
  int32_t uStack0000000000000040;
  
  uStack0000000000000040 = 0;
  uVar2 = FUN_180867600(unaff_RSI + 0x60,param_2,&stack0x00000040);
  if ((int)uVar2 == 0) {
    lVar3 = func_0x000180867680(unaff_RSI + 0x60,uStack0000000000000040);
    if ((*(uint *)(lVar3 + 0x34) >> 4 & 1) != 0) {
      return 0x1f;
    }
    fVar1 = *(float *)(unaff_RBX + 0x18);
    fVar4 = *(float *)(lVar3 + 0x38);
    if ((*(float *)(lVar3 + 0x38) <= fVar1) &&
       (fVar4 = *(float *)(lVar3 + 0x3c), fVar1 <= *(float *)(lVar3 + 0x3c))) {
      fVar4 = fVar1;
    }
    *(float *)(unaff_RBX + 0x18) = fVar4;
    uVar2 = func_0x000180867960(unaff_RSI + 0x60,uStack0000000000000040,fVar4);
    if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(unaff_RSI + 0x98));
    }
  }
  return uVar2;
}





// 函数: void FUN_180893ddb(void)
void FUN_180893ddb(void)

{
  float fVar1;
  int32_t in_EAX;
  int iVar2;
  int32_t in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RSI;
  float fVar3;
  int32_t in_stack_00000040;
  
  fVar3 = *(float *)(CONCAT44(in_register_00000004,in_EAX) + 0x38);
  fVar1 = *(float *)(unaff_RBX + 0x18);
  if ((fVar3 <= fVar1) &&
     (fVar3 = *(float *)(CONCAT44(in_register_00000004,in_EAX) + 0x3c), fVar1 <= fVar3)) {
    fVar3 = fVar1;
  }
  *(float *)(unaff_RBX + 0x18) = fVar3;
  iVar2 = func_0x000180867960(unaff_RSI + 0x60,in_stack_00000040,fVar3);
  if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18088d720(*(uint64_t *)(unaff_RSI + 0x98));
  }
  return;
}



uint64_t FUN_180893e30(longlong param_1,longlong param_2)

{
  float fVar1;
  uint64_t uVar2;
  longlong lVar3;
  int32_t auStackX_10 [2];
  
  auStackX_10[0] = 0;
  uVar2 = FUN_180867600(param_2 + 0x60,param_1 + 0x10,auStackX_10);
  if ((int)uVar2 == 0) {
    lVar3 = func_0x000180867680(param_2 + 0x60,auStackX_10[0]);
    if ((*(uint *)(lVar3 + 0x34) >> 4 & 1) != 0) {
      return 0x1f;
    }
    uVar2 = FUN_18084de40(lVar3,param_1 + 0x1d,param_1 + 0x18);
    if ((int)uVar2 == 0) {
      fVar1 = *(float *)(param_1 + 0x18);
      if ((fVar1 < *(float *)(lVar3 + 0x38)) ||
         (*(float *)(lVar3 + 0x3c) <= fVar1 && fVar1 != *(float *)(lVar3 + 0x3c))) {
        uVar2 = 0x1c;
      }
      else {
        uVar2 = func_0x000180867960(param_2 + 0x60,auStackX_10[0]);
        if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
        }
      }
    }
  }
  return uVar2;
}



uint64_t FUN_180893e69(void)

{
  float fVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong unaff_RDI;
  longlong unaff_R14;
  int32_t in_stack_00000048;
  
  lVar2 = func_0x000180867680();
  if ((*(uint *)(lVar2 + 0x34) >> 4 & 1) != 0) {
    return 0x1f;
  }
  uVar3 = FUN_18084de40(lVar2,unaff_RDI + 0x1d,unaff_RDI + 0x18);
  if ((int)uVar3 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x18);
    if ((fVar1 < *(float *)(lVar2 + 0x38)) ||
       (*(float *)(lVar2 + 0x3c) <= fVar1 && fVar1 != *(float *)(lVar2 + 0x3c))) {
      uVar3 = 0x1c;
    }
    else {
      uVar3 = func_0x000180867960(unaff_R14 + 0x60,in_stack_00000048);
      if ((int)uVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18088d720(*(uint64_t *)(unaff_R14 + 0x98));
      }
    }
  }
  return uVar3;
}



uint64_t FUN_180893e94(void)

{
  float fVar1;
  uint64_t uVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R14;
  int32_t in_stack_00000048;
  
  uVar2 = FUN_18084de40();
  if ((int)uVar2 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x18);
    if ((fVar1 < *(float *)(unaff_RBX + 0x38)) ||
       (*(float *)(unaff_RBX + 0x3c) <= fVar1 && fVar1 != *(float *)(unaff_RBX + 0x3c))) {
      uVar2 = 0x1c;
    }
    else {
      uVar2 = func_0x000180867960(unaff_R14 + 0x60,in_stack_00000048);
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18088d720(*(uint64_t *)(unaff_R14 + 0x98));
      }
    }
  }
  return uVar2;
}





// 函数: void FUN_180893eef(void)
void FUN_180893eef(void)

{
  return;
}



uint64_t FUN_180893f00(longlong param_1,longlong param_2)

{
  float fVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t *puVar4;
  float fVar5;
  uint auStackX_8 [2];
  int32_t auStackX_18 [2];
  
  auStackX_8[0] = *(uint *)(param_1 + 0x10);
  if ((auStackX_8[0] & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  auStackX_18[0] = 0;
  uVar2 = FUN_180840af0(param_2,param_1 + 0x20,auStackX_18);
  if ((int)uVar2 == 0) {
    lVar3 = func_0x000180867680(param_2 + 0x60,auStackX_18[0]);
    if ((*(uint *)(lVar3 + 0x34) >> 4 & 1) != 0) {
      return 0x1f;
    }
    fVar1 = *(float *)(param_1 + 0x10);
    fVar5 = *(float *)(lVar3 + 0x38);
    if ((*(float *)(lVar3 + 0x38) <= fVar1) &&
       (fVar5 = *(float *)(lVar3 + 0x3c), fVar1 <= *(float *)(lVar3 + 0x3c))) {
      fVar5 = fVar1;
    }
    *(float *)(param_1 + 0x10) = fVar5;
    uVar2 = func_0x000180867960(param_2 + 0x60,auStackX_18[0],fVar5);
    if ((int)uVar2 == 0) {
      puVar4 = (uint64_t *)func_0x000180867660(param_2 + 0x60,auStackX_8,auStackX_18[0]);
      *(uint64_t *)(param_1 + 0x18) = *puVar4;
                    // WARNING: Subroutine does not return
      FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
    }
  }
  return uVar2;
}



uint64_t FUN_180893f64(void)

{
  float fVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar5;
  int32_t in_stack_00000040;
  
  lVar2 = func_0x000180867680();
  if ((*(uint *)(lVar2 + 0x34) >> 4 & 1) != 0) {
    return 0x1f;
  }
  fVar1 = *(float *)(unaff_RBX + 0x10);
  fVar5 = *(float *)(lVar2 + 0x38);
  if ((*(float *)(lVar2 + 0x38) <= fVar1) &&
     (fVar5 = *(float *)(lVar2 + 0x3c), fVar1 <= *(float *)(lVar2 + 0x3c))) {
    fVar5 = fVar1;
  }
  *(float *)(unaff_RBX + 0x10) = fVar5;
  uVar3 = func_0x000180867960(unaff_RDI + 0x60,in_stack_00000040,fVar5);
  if ((int)uVar3 == 0) {
    puVar4 = (uint64_t *)func_0x000180867660(unaff_RDI + 0x60,&stack0x00000030,in_stack_00000040);
    *(uint64_t *)(unaff_RBX + 0x18) = *puVar4;
                    // WARNING: Subroutine does not return
    FUN_18088d720(*(uint64_t *)(unaff_RDI + 0x98));
  }
  return uVar3;
}





// 函数: void FUN_180893f8e(void)
void FUN_180893f8e(void)

{
  float fVar1;
  uint64_t *puVar2;
  int32_t in_EAX;
  int iVar3;
  int32_t in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar4;
  int32_t in_stack_00000040;
  
  fVar4 = *(float *)(CONCAT44(in_register_00000004,in_EAX) + 0x38);
  fVar1 = *(float *)(unaff_RBX + 0x10);
  if ((fVar4 <= fVar1) &&
     (fVar4 = *(float *)(CONCAT44(in_register_00000004,in_EAX) + 0x3c), fVar1 <= fVar4)) {
    fVar4 = fVar1;
  }
  *(float *)(unaff_RBX + 0x10) = fVar4;
  iVar3 = func_0x000180867960(unaff_RDI + 0x60,in_stack_00000040,fVar4);
  if (iVar3 == 0) {
    puVar2 = (uint64_t *)func_0x000180867660(unaff_RDI + 0x60,&stack0x00000030,in_stack_00000040);
    *(uint64_t *)(unaff_RBX + 0x18) = *puVar2;
                    // WARNING: Subroutine does not return
    FUN_18088d720(*(uint64_t *)(unaff_RDI + 0x98));
  }
  return;
}





// 函数: void FUN_180893fed(void)
void FUN_180893fed(void)

{
  return;
}



uint64_t FUN_180894000(longlong param_1,longlong param_2)

{
  float fVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t *puVar4;
  int8_t auStackX_8 [8];
  int32_t auStackX_18 [2];
  
  auStackX_18[0] = 0;
  uVar2 = FUN_180840af0(param_2,param_1 + 0x20,auStackX_18);
  if ((int)uVar2 == 0) {
    lVar3 = func_0x000180867680(param_2 + 0x60,auStackX_18[0]);
    if ((*(uint *)(lVar3 + 0x34) >> 4 & 1) != 0) {
      return 0x1f;
    }
    uVar2 = FUN_18084de40(lVar3,param_1 + 0xa0,param_1 + 0x10);
    if ((int)uVar2 == 0) {
      fVar1 = *(float *)(param_1 + 0x10);
      if ((fVar1 < *(float *)(lVar3 + 0x38)) ||
         (*(float *)(lVar3 + 0x3c) <= fVar1 && fVar1 != *(float *)(lVar3 + 0x3c))) {
        uVar2 = 0x1c;
      }
      else {
        uVar2 = func_0x000180867960(param_2 + 0x60,auStackX_18[0]);
        if ((int)uVar2 == 0) {
          puVar4 = (uint64_t *)func_0x000180867660(param_2 + 0x60,auStackX_8,auStackX_18[0]);
          *(uint64_t *)(param_1 + 0x18) = *puVar4;
                    // WARNING: Subroutine does not return
          FUN_18088d720(*(uint64_t *)(param_2 + 0x98),param_1);
        }
      }
    }
  }
  return uVar2;
}



uint64_t FUN_180894037(void)

{
  float fVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  longlong unaff_RDI;
  longlong unaff_R14;
  int32_t in_stack_00000050;
  
  lVar2 = func_0x000180867680();
  if ((*(uint *)(lVar2 + 0x34) >> 4 & 1) != 0) {
    return 0x1f;
  }
  uVar3 = FUN_18084de40(lVar2,unaff_RDI + 0xa0,unaff_RDI + 0x10);
  if ((int)uVar3 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x10);
    if ((fVar1 < *(float *)(lVar2 + 0x38)) ||
       (*(float *)(lVar2 + 0x3c) <= fVar1 && fVar1 != *(float *)(lVar2 + 0x3c))) {
      uVar3 = 0x1c;
    }
    else {
      uVar3 = func_0x000180867960(unaff_R14 + 0x60,in_stack_00000050);
      if ((int)uVar3 == 0) {
        puVar4 = (uint64_t *)
                 func_0x000180867660(unaff_R14 + 0x60,&stack0x00000040,in_stack_00000050);
        *(uint64_t *)(unaff_RDI + 0x18) = *puVar4;
                    // WARNING: Subroutine does not return
        FUN_18088d720(*(uint64_t *)(unaff_R14 + 0x98));
      }
    }
  }
  return uVar3;
}



uint64_t FUN_18089406b(void)

{
  float fVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R14;
  int32_t in_stack_00000050;
  
  uVar2 = FUN_18084de40();
  if ((int)uVar2 == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x10);
    if ((fVar1 < *(float *)(unaff_RBX + 0x38)) ||
       (*(float *)(unaff_RBX + 0x3c) <= fVar1 && fVar1 != *(float *)(unaff_RBX + 0x3c))) {
      uVar2 = 0x1c;
    }
    else {
      uVar2 = func_0x000180867960(unaff_R14 + 0x60,in_stack_00000050);
      if ((int)uVar2 == 0) {
        puVar3 = (uint64_t *)
                 func_0x000180867660(unaff_R14 + 0x60,&stack0x00000040,in_stack_00000050);
        *(uint64_t *)(unaff_RDI + 0x18) = *puVar3;
                    // WARNING: Subroutine does not return
        FUN_18088d720(*(uint64_t *)(unaff_R14 + 0x98));
      }
    }
  }
  return uVar2;
}





// 函数: void FUN_1808940e8(void)
void FUN_1808940e8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




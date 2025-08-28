#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part055.c - 6 个函数

// 函数: void FUN_1807b91e8(uint64_t param_1,longlong param_2)
void FUN_1807b91e8(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  longlong unaff_RBX;
  int unaff_EBP;
  int32_t unaff_0000002c;
  longlong lVar2;
  
  if (unaff_EBP < *(int *)(unaff_RBX + 0x3bc8)) {
    lVar2 = CONCAT44(unaff_0000002c,unaff_EBP);
    do {
      lVar1 = *(longlong *)(lVar2 + 8 + param_2);
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_6512_ptr,0xcfb,1);
      }
      unaff_EBP = unaff_EBP + 1;
      lVar2 = lVar2 + 0x28;
    } while (unaff_EBP < *(int *)(unaff_RBX + 0x3bc8));
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_6512_ptr,0xcfe,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807b9277(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  int unaff_EBP;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x420);
  if (lVar1 != 0) {
    if (unaff_EBP < *(int *)(unaff_RBX + 0x1c8)) {
      do {
        FUN_180755c10((longlong)unaff_EBP * 800 + *(longlong *)(unaff_RBX + 0x420) + 0x20);
        unaff_EBP = unaff_EBP + 1;
      } while (unaff_EBP < *(int *)(unaff_RBX + 0x1c8));
      lVar1 = *(longlong *)(unaff_RBX + 0x420);
    }
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_6512_ptr,0xd08,1);
  }
  if (*(longlong *)(unaff_RBX + 0x1c0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x1c0),
                  &unknown_var_6512_ptr,0xd0e,1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807b92fb(uint64_t param_1,uint64_t param_2)
void FUN_1807b92fb(uint64_t param_1,uint64_t param_2)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_6512_ptr,0xd0e,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807b95c0(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_1807b95c0(longlong param_1,uint64_t param_2,longlong param_3)

{
  int iVar1;
  int8_t auStack_338 [32];
  uint64_t uStack_318;
  int32_t uStack_2f0;
  int32_t uStack_2ec;
  int8_t auStack_1b0 [4];
  uint uStack_1ac;
  ushort uStack_1a8;
  ushort uStack_1a6;
  ushort uStack_1a4;
  int8_t auStack_168 [256];
  ulonglong uStack_68;
  
  uStack_68 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_338;
  *(int32_t *)(param_1 + 0x28) = 7;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  uStack_2f0 = 0;
  func_0x000180752d10(param_1 + 0x1d0);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))
                    (*(longlong **)(param_1 + 0x170),&uStack_2f0);
  if (iVar1 == 0) {
    uStack_318 = 0;
    iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_1b0,1,0xe);
    if (iVar1 == 0) {
      uStack_1a8 = uStack_1a8 << 8 | uStack_1a8 >> 8;
      uStack_1a4 = uStack_1a4 << 8 | uStack_1a4 >> 8;
      uStack_1a6 = uStack_1a6 << 8 | uStack_1a6 >> 8;
      uStack_1ac = (uStack_1ac & 0xff0000 | uStack_1ac >> 0x10) >> 8 |
                   (uStack_1ac & 0xff00 | uStack_1ac << 0x10) << 8;
      iVar1 = func_0x00018076b6b0(auStack_1b0,&unknown_var_6780_ptr,4);
      if (iVar1 == 0) {
        *(int32_t *)(param_1 + 0x3be8) = 500000;
        *(uint *)(param_1 + 0x3bc8) = uStack_1a6 + 1;
        *(uint *)(param_1 + 0x3bcc) = (uint)uStack_1a8;
        *(uint *)(param_1 + 0x3bd0) = (uint)uStack_1a4;
        *(int32_t *)(param_1 + 0x3bf8) = 0x3f800000;
        if ((param_3 == 0) || (iVar1 = *(int *)(param_3 + 0x60), iVar1 == 0)) {
          iVar1 = 0x40;
        }
        *(int *)(param_1 + 0x1c8) = iVar1;
        if ((param_3 == 0) || (iVar1 = *(int *)(param_3 + 0xd0), iVar1 == 0)) {
          iVar1 = 0x200;
        }
        *(int *)(param_1 + 0x3bb8) = iVar1;
        uStack_2ec = 0xffffffff;
                    // WARNING: Subroutine does not return
        memset(auStack_168,0,0x100);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_338);
}






// 函数: void FUN_1807b975a(void)
void FUN_1807b975a(void)

{
  int32_t in_EAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int32_t uStack000000000000004c;
  
  *(int32_t *)(unaff_RDI + 0x3bb8) = in_EAX;
  uStack000000000000004c = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + 0xd0,0,0x100);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807b9d7c(void)
void FUN_1807b9d7c(void)

{
  uint in_EAX;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  uint uVar4;
  longlong unaff_RDI;
  uint unaff_R12D;
  int32_t unaff_000000a4;
  longlong unaff_R13;
  uint uVar5;
  float fVar6;
  uint64_t extraout_XMM0_Qa;
  uint in_stack_00000040;
  uint uStack0000000000000044;
  
  do {
    uVar5 = unaff_R12D;
    if (0 < (int)in_EAX) {
      lVar2 = *(longlong *)(unaff_RDI + 0x3be0);
      lVar3 = CONCAT44(unaff_000000a4,unaff_R12D);
      uVar4 = unaff_R12D;
      do {
        FUN_1807bb100(lVar2 + (longlong)(int)uVar4 * 0x28,1);
        lVar2 = *(longlong *)(unaff_RDI + 0x3be0);
        if ((*(char *)(lVar2 + 0x24 + lVar3) != (char)unaff_R12D) ||
           (*(longlong *)(lVar2 + 8 + lVar3) == CONCAT44(unaff_000000a4,unaff_R12D))) {
          uVar5 = uVar5 + 1;
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x28;
      } while ((int)uVar4 < *(int *)(unaff_RDI + 0x3bc8));
    }
    fVar6 = *(float *)(unaff_RDI + 0x3bec) + 10.0;
    *(float *)(unaff_RDI + 0x3bec) = fVar6;
    *(float *)(unaff_RDI + 0x3bf4) =
         ((float)*(uint *)(unaff_RDI + 0x3be8) / (float)*(int *)(unaff_RDI + 0x3bd0)) * 0.01 +
         *(float *)(unaff_RDI + 0x3bf4);
    in_EAX = *(uint *)(unaff_RDI + 0x3bc8);
  } while (uVar5 != in_EAX);
  if ((unaff_R13 == 0) || (*(int *)(unaff_R13 + 4) != -1)) {
    fVar6 = (float)*(int *)(*(longlong *)(unaff_RDI + 8) + 0x10) * *(float *)(unaff_RDI + 0x3bf4) *
            0.001;
    *(int *)(*(longlong *)(unaff_RDI + 8) + 0x18) = (int)fVar6;
  }
  else {
    *(int32_t *)(*(longlong *)(unaff_RDI + 8) + 0x18) = 0xffffffff;
  }
  uStack0000000000000044 = unaff_R12D;
  if (*(ulonglong *)(unaff_RDI + 0x440) != (ulonglong)unaff_R12D) {
    uStack0000000000000044 = 1;
  }
  in_stack_00000040 = uStack0000000000000044;
  if (*(longlong *)(unaff_RDI + 0x7b8) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = uStack0000000000000044 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 2;
  }
  if (*(longlong *)(unaff_RDI + 0xb30) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 4;
  }
  if (*(longlong *)(unaff_RDI + 0xea8) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 8;
  }
  if (*(longlong *)(unaff_RDI + 0x1220) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x10;
  }
  if (*(longlong *)(unaff_RDI + 0x1598) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x20;
  }
  if (*(longlong *)(unaff_RDI + 0x1910) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x40;
  }
  if (*(longlong *)(unaff_RDI + 0x1c88) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x80;
  }
  if (*(longlong *)(unaff_RDI + 0x2000) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x100;
  }
  if (*(longlong *)(unaff_RDI + 0x2378) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x200;
  }
  if (*(longlong *)(unaff_RDI + 0x26f0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x400;
  }
  if (*(longlong *)(unaff_RDI + 0x2a68) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x800;
  }
  if (*(longlong *)(unaff_RDI + 0x2de0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x1000;
  }
  if (*(longlong *)(unaff_RDI + 0x3158) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x2000;
  }
  if (*(longlong *)(unaff_RDI + 0x34d0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x4000;
  }
  if (*(longlong *)(unaff_RDI + 0x3848) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    in_stack_00000040 = in_stack_00000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x8000;
  }
  iVar1 = FUN_180772fe0(fVar6,9,&unknown_var_5832_ptr,&stack0x00000040,4);
  if (iVar1 == 0) {
    iVar1 = FUN_180772fe0(extraout_XMM0_Qa,9,&unknown_var_6872_ptr,&stack0x00000044,4);
    if (iVar1 == 0) {
      lVar2 = *(longlong *)(unaff_RDI + 0x3c08);
      if ((int)unaff_R12D < *(int *)(lVar2 + 0xb0)) {
        lVar3 = CONCAT44(unaff_000000a4,unaff_R12D);
        uVar5 = unaff_R12D;
        do {
          if ((*(char *)(lVar3 + *(longlong *)(unaff_RDI + 0x3c18)) != (char)unaff_R12D) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0xa0) + lVar3 * 8) ==
              CONCAT44(unaff_000000a4,unaff_R12D))) {
            iVar1 = FUN_180751170(lVar2,uVar5,8);
            if (iVar1 != 0) goto LAB_1807ba329;
          }
          lVar2 = *(longlong *)(unaff_RDI + 0x3c08);
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 1;
        } while ((int)uVar5 < *(int *)(lVar2 + 0xb0));
      }
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(unaff_RDI + 0x3c18),
                    &unknown_var_6512_ptr,0xc7e,1);
    }
  }
LAB_1807ba329:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807b9e61(void)
void FUN_1807b9e61(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  uint uVar4;
  longlong unaff_RDI;
  char cVar5;
  uint unaff_R12D;
  int32_t unaff_000000a4;
  longlong unaff_R13;
  uint64_t extraout_XMM0_Qa;
  int32_t uStack0000000000000028;
  char cStack0000000000000030;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  
  if ((unaff_R13 == 0) || (*(int *)(unaff_R13 + 4) != -1)) {
    *(int *)(*(longlong *)(unaff_RDI + 8) + 0x18) =
         (int)((float)*(int *)(*(longlong *)(unaff_RDI + 8) + 0x10) * *(float *)(unaff_RDI + 0x3bf4)
              * 0.001);
  }
  else {
    *(int32_t *)(*(longlong *)(unaff_RDI + 8) + 0x18) = 0xffffffff;
  }
  uStack0000000000000044 = unaff_R12D;
  if (*(ulonglong *)(unaff_RDI + 0x440) != (ulonglong)unaff_R12D) {
    uStack0000000000000044 = 1;
  }
  uStack0000000000000040 = uStack0000000000000044;
  if (*(longlong *)(unaff_RDI + 0x7b8) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000044 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 2;
  }
  if (*(longlong *)(unaff_RDI + 0xb30) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 4;
  }
  if (*(longlong *)(unaff_RDI + 0xea8) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 8;
  }
  if (*(longlong *)(unaff_RDI + 0x1220) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x10;
  }
  if (*(longlong *)(unaff_RDI + 0x1598) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x20;
  }
  if (*(longlong *)(unaff_RDI + 0x1910) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x40;
  }
  if (*(longlong *)(unaff_RDI + 0x1c88) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x80;
  }
  if (*(longlong *)(unaff_RDI + 0x2000) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x100;
  }
  if (*(longlong *)(unaff_RDI + 0x2378) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x200;
  }
  if (*(longlong *)(unaff_RDI + 0x26f0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x400;
  }
  if (*(longlong *)(unaff_RDI + 0x2a68) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x800;
  }
  if (*(longlong *)(unaff_RDI + 0x2de0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x1000;
  }
  if (*(longlong *)(unaff_RDI + 0x3158) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x2000;
  }
  if (*(longlong *)(unaff_RDI + 0x34d0) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x4000;
  }
  if (*(longlong *)(unaff_RDI + 0x3848) != CONCAT44(unaff_000000a4,unaff_R12D)) {
    uStack0000000000000040 = uStack0000000000000040 + 1;
    uStack0000000000000044 = uStack0000000000000044 | 0x8000;
  }
  cVar5 = (char)unaff_R12D;
  uStack0000000000000028 = 1;
  cStack0000000000000030 = cVar5;
  iVar1 = FUN_180772fe0();
  if (iVar1 == 0) {
    uStack0000000000000028 = 1;
    cStack0000000000000030 = cVar5;
    iVar1 = FUN_180772fe0(extraout_XMM0_Qa,9,&unknown_var_6872_ptr,&stack0x00000044,4);
    if (iVar1 == 0) {
      lVar2 = *(longlong *)(unaff_RDI + 0x3c08);
      if ((int)unaff_R12D < *(int *)(lVar2 + 0xb0)) {
        lVar3 = CONCAT44(unaff_000000a4,unaff_R12D);
        uVar4 = unaff_R12D;
        do {
          if ((*(char *)(lVar3 + *(longlong *)(unaff_RDI + 0x3c18)) != cVar5) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0xa0) + lVar3 * 8) ==
              CONCAT44(unaff_000000a4,unaff_R12D))) {
            iVar1 = FUN_180751170(lVar2,uVar4,8);
            if (iVar1 != 0) goto LAB_1807ba329;
          }
          lVar2 = *(longlong *)(unaff_RDI + 0x3c08);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 1;
        } while ((int)uVar4 < *(int *)(lVar2 + 0xb0));
      }
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(unaff_RDI + 0x3c18),
                    &unknown_var_6512_ptr,0xc7e,1);
    }
  }
LAB_1807ba329:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}







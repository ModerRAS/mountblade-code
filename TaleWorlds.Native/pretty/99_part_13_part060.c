#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part060.c - 7 个函数

// 函数: void FUN_1808cff60(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_1808cff60(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int param_5,uint64_t param_6,int32_t param_7)

{
  int iVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int8_t auStack_f8 [32];
  uint uStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  int32_t uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  int32_t auStack_70 [2];
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  iVar1 = FUN_1808b2f30(param_1,5);
  if (((iVar1 == 0) && (iVar1 = FUN_1808b2f30(param_1,6), iVar1 == 0)) &&
     (iVar1 = FUN_1808b2f30(param_1,7), iVar1 == 0)) {
    auStack_70[0] = 0x3f800000;
    *(int32_t *)(param_1 + 0x1d8) = param_7;
    iVar1 = FUN_18073ca90(*(uint64_t *)(param_1 + 0xf0),auStack_70);
    if (iVar1 == 0) {
      iStack_74 = -1;
      iStack_78 = iVar1;
      FUN_180856c80(*(int64_t *)(param_1 + 0x170) + 200,*(int64_t *)(param_1 + 0x218) + 0x10,
                    &iStack_78);
      if (iStack_74 == -1) {
        uStack_d8 = param_5;
        iVar1 = FUN_1808ce6a0(param_1,param_2,param_3,param_4);
      }
      else {
        puVar3 = (int32_t *)
                 (*(int64_t *)(*(int64_t *)(param_1 + 0x218) + 0xd8) + (int64_t)iStack_74 * 0x14)
        ;
        uStack_88 = *puVar3;
        uStack_84 = puVar3[1];
        uStack_80 = puVar3[2];
        uStack_7c = puVar3[3];
        *(int *)(*(int64_t *)(param_1 + 0x1a0) + 0x1c) = iStack_74;
        lVar2 = (**(code **)(**(int64_t **)(param_1 + 0x178) + 0x128))
                          (*(int64_t **)(param_1 + 0x178),&uStack_88,
                           CONCAT71((int7)(int3)((uint)iStack_74 >> 8),1));
        if (lVar2 == 0) {
          uStack_90 = uStack_7c >> 0x18;
          uStack_b0 = uStack_80 >> 0x18;
          uStack_98 = uStack_7c >> 0x10 & 0xff;
          uStack_a0 = uStack_7c >> 8 & 0xff;
          uStack_a8 = uStack_7c & 0xff;
          uStack_b8 = uStack_80 >> 0x10 & 0xff;
          uStack_c0 = uStack_80 >> 8 & 0xff;
          uStack_d0 = uStack_84 >> 0x10;
          uStack_c8 = uStack_80 & 0xff;
          uStack_d8 = uStack_84 & 0xffff;
                    // WARNING: Subroutine does not return
          SystemDataValidator(auStack_68,0x27,&processed_var_8960_ptr,uStack_88);
        }
        uStack_d0 = 0;
        uStack_d8 = iStack_78;
        iVar1 = FUN_1808ce5b0(param_1,lVar2,param_2,param_3);
      }
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x1d8) == 0) {
          *(int8_t *)(param_1 + 0x1dd) = 1;
        }
        else {
          puVar3 = (int32_t *)FUN_18084da10();
          uStack_d8 = 0;
          FUN_1808ce830(param_1,param_3,param_3,*puVar3);
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_f8);
}






// 函数: void FUN_1808d001f(void)
void FUN_1808d001f(void)

{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_R13;
  int32_t extraout_XMM0_Da;
  int32_t uStack0000000000000070;
  uint uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  int iStack0000000000000084;
  uint64_t in_stack_000000b8;
  
  iStack0000000000000084 = -1;
  FUN_180856c80();
  if (iStack0000000000000084 == -1) {
    iVar2 = FUN_1808ce6a0();
  }
  else {
    puVar1 = (int32_t *)
             (*(int64_t *)(*(int64_t *)(unaff_R13 + 0x218) + 0xd8) +
             (int64_t)iStack0000000000000084 * 0x14);
    uStack0000000000000070 = *puVar1;
    uStack0000000000000074 = puVar1[1];
    uStack0000000000000078 = puVar1[2];
    uStack000000000000007c = puVar1[3];
    *(int *)(*(int64_t *)(unaff_R13 + 0x1a0) + 0x1c) = iStack0000000000000084;
    lVar3 = (**(code **)(**(int64_t **)(unaff_R13 + 0x178) + 0x128))
                      (*(int64_t **)(unaff_R13 + 0x178),&stack0x00000070,
                       CONCAT71((int7)(int3)((uint)iStack0000000000000084 >> 8),1));
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(&stack0x00000090,0x27,&processed_var_8960_ptr,uStack0000000000000070,
                    uStack0000000000000074 & 0xffff);
    }
    iVar2 = FUN_1808ce5b0(extraout_XMM0_Da,lVar3);
  }
  if (iVar2 == 0) {
    if (*(int *)(unaff_R13 + 0x1d8) == 0) {
      *(int8_t *)(unaff_R13 + 0x1dd) = 1;
    }
    else {
      FUN_18084da10();
      FUN_1808ce830();
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b8 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808d0087(uint64_t param_1,int64_t param_2,int32_t param_3)
void FUN_1808d0087(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  int32_t *puVar1;
  int iVar2;
  int64_t in_RAX;
  int64_t lVar3;
  int64_t unaff_R13;
  int32_t extraout_XMM0_Da;
  int32_t uStack0000000000000070;
  uint uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  int32_t in_stack_00000080;
  uint64_t in_stack_000000b8;
  
  puVar1 = (int32_t *)(*(int64_t *)(in_RAX + 0xd8) + param_2 * 4);
  uStack0000000000000070 = *puVar1;
  uStack0000000000000074 = puVar1[1];
  uStack0000000000000078 = puVar1[2];
  uStack000000000000007c = puVar1[3];
  *(int32_t *)(*(int64_t *)(unaff_R13 + 0x1a0) + 0x1c) = param_3;
  lVar3 = (**(code **)(**(int64_t **)(unaff_R13 + 0x178) + 0x128))
                    (*(int64_t **)(unaff_R13 + 0x178),&stack0x00000070,1);
  if (lVar3 != 0) {
    iVar2 = FUN_1808ce5b0(extraout_XMM0_Da,lVar3);
    if (iVar2 == 0) {
      if (*(int *)(unaff_R13 + 0x1d8) == 0) {
        *(int8_t *)(unaff_R13 + 0x1dd) = 1;
      }
      else {
        FUN_18084da10();
        FUN_1808ce830();
      }
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(in_stack_000000b8 ^ (uint64_t)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(&stack0x00000090,0x27,&processed_var_8960_ptr,uStack0000000000000070,
                uStack0000000000000074 & 0xffff);
}






// 函数: void FUN_1808d0128(void)
void FUN_1808d0128(void)

{
  uint uStack0000000000000028;
  uint uStack0000000000000030;
  uint64_t in_stack_00000070;
  byte in_stack_00000078;
  
  uStack0000000000000030 = (uint)in_stack_00000078;
  uStack0000000000000028 = (uint)in_stack_00000070._6_2_;
                    // WARNING: Subroutine does not return
  SystemDataValidator();
}






// 函数: void FUN_1808d0180(void)
void FUN_1808d0180(void)

{
  int iVar1;
  int64_t unaff_R13;
  uint64_t in_stack_000000b8;
  
  iVar1 = FUN_1808ce5b0();
  if (iVar1 == 0) {
    if (*(int *)(unaff_R13 + 0x1d8) == 0) {
      *(int8_t *)(unaff_R13 + 0x1dd) = 1;
    }
    else {
      FUN_18084da10();
      FUN_1808ce830();
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b8 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808d01ae(void)
void FUN_1808d01ae(void)

{
  int64_t unaff_R13;
  uint64_t in_stack_000000b8;
  
  if (*(int *)(unaff_R13 + 0x1d8) == 0) {
    *(int8_t *)(unaff_R13 + 0x1dd) = 1;
  }
  else {
    FUN_18084da10();
    FUN_1808ce830();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b8 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808d01ec(void)
void FUN_1808d01ec(void)

{
  uint64_t in_stack_000000b8;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b8 ^ (uint64_t)&stack0x00000000);
}







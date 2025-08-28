#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part360.c - 8 个函数

// 函数: void FUN_1808629a0(int64_t param_1,uint64_t param_2,char param_3)
void FUN_1808629a0(int64_t param_1,uint64_t param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t auStack_e8 [32];
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  int32_t uStack_78;
  ushort uStack_74;
  ushort uStack_72;
  byte bStack_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  plVar3 = (int64_t *)FUN_18085fea0();
  if (plVar3 != (int64_t *)0x0) {
    *(uint *)((int64_t)plVar3 + 0x1c) = *(uint *)((int64_t)plVar3 + 0x1c) & 0xfffffffa;
    (**(code **)(*(int64_t *)plVar3[2] + 0x30))((int64_t *)plVar3[2],&uStack_78);
    lVar4 = (**(code **)(**(int64_t **)(param_1 + 0x458) + 0x128))
                      (*(int64_t **)(param_1 + 0x458),&uStack_78,1);
    if (lVar4 == 0) {
      uStack_80 = (uint)bStack_69;
      uStack_88 = (uint)bStack_6a;
      uStack_90 = (uint)bStack_6b;
      uStack_98 = (uint)bStack_6c;
      uStack_a0 = (uint)bStack_6d;
      uStack_a8 = (uint)bStack_6e;
      uStack_b0 = (uint)bStack_6f;
      uStack_b8 = (uint)bStack_70;
      uStack_c0 = (uint)uStack_72;
      uStack_c8 = (uint)uStack_74;
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_68,0x27,&unknown_var_8960_ptr,uStack_78);
    }
    if (*(int *)(lVar4 + 0xd0) == 0) {
      uVar1 = *(uint *)((int64_t)plVar3 + 0x1c);
      (**(code **)(*(int64_t *)plVar3[2] + 0x30))((int64_t *)plVar3[2],&uStack_78);
      iVar2 = FUN_1808caa20(param_1 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,&uStack_78);
      if (iVar2 == 0) {
        uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
        *(int64_t *)plVar3[1] = *plVar3;
        *(int64_t *)(*plVar3 + 8) = plVar3[1];
        plVar3[1] = (int64_t)plVar3;
        *plVar3 = (int64_t)plVar3;
        *(int64_t **)plVar3[1] = plVar3;
        *(int64_t *)(*plVar3 + 8) = plVar3[1];
        plVar3[1] = (int64_t)plVar3;
        *plVar3 = (int64_t)plVar3;
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&unknown_var_2624_ptr,0x8a4);
      }
    }
    else if (param_3 != '\0') {
      plVar3[4] = 0;
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808629e9(int64_t *param_1)
void FUN_1808629e9(int64_t *param_1)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  char unaff_R13B;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  int32_t uStack0000000000000070;
  int16_t uStack0000000000000074;
  int8_t in_stack_00000078;
  uint64_t in_stack_000000a8;
  
  (**(code **)(*param_1 + 0x30))();
  lVar3 = (**(code **)(**(int64_t **)(unaff_R15 + 0x458) + 0x128))
                    (*(int64_t **)(unaff_R15 + 0x458),&stack0x00000070,1);
  if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(&stack0x00000080,0x27,&unknown_var_8960_ptr,uStack0000000000000070,uStack0000000000000074
                 );
  }
  if (*(int *)(lVar3 + 0xd0) == 0) {
    uVar1 = *(uint *)((int64_t)unaff_R14 + 0x1c);
    (**(code **)(*(int64_t *)unaff_R14[2] + 0x30))((int64_t *)unaff_R14[2],&stack0x00000070);
    iVar2 = FUN_1808caa20(unaff_R15 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,&stack0x00000070
                         );
    if (iVar2 == 0) {
      *(int64_t *)unaff_R14[1] = *unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
      *(int64_t **)unaff_R14[1] = unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
    }
  }
  else if (unaff_R13B != '\0') {
    unaff_R14[4] = 0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808629f1(int64_t *param_1)
void FUN_1808629f1(int64_t *param_1)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  char unaff_R13B;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  int32_t uStack0000000000000070;
  int16_t uStack0000000000000074;
  int8_t in_stack_00000078;
  uint64_t in_stack_000000a8;
  
  (**(code **)(*param_1 + 0x30))();
  lVar3 = (**(code **)(**(int64_t **)(unaff_R15 + 0x458) + 0x128))
                    (*(int64_t **)(unaff_R15 + 0x458),&stack0x00000070,1);
  if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(&stack0x00000080,0x27,&unknown_var_8960_ptr,uStack0000000000000070,uStack0000000000000074
                 );
  }
  if (*(int *)(lVar3 + 0xd0) == 0) {
    uVar1 = *(uint *)((int64_t)unaff_R14 + 0x1c);
    (**(code **)(*(int64_t *)unaff_R14[2] + 0x30))((int64_t *)unaff_R14[2],&stack0x00000070);
    iVar2 = FUN_1808caa20(unaff_R15 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,&stack0x00000070
                         );
    if (iVar2 == 0) {
      *(int64_t *)unaff_R14[1] = *unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
      *(int64_t **)unaff_R14[1] = unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
    }
  }
  else if (unaff_R13B != '\0') {
    unaff_R14[4] = 0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180862a7d(void)
void FUN_180862a7d(void)

{
  uint uStack0000000000000028;
  uint uStack0000000000000030;
  uint64_t in_stack_00000070;
  byte in_stack_00000078;
  
  uStack0000000000000030 = (uint)in_stack_00000078;
  uStack0000000000000028 = (uint)in_stack_00000070._6_2_;
                    // WARNING: Subroutine does not return
  FUN_18076b390();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180862ad1(void)
void FUN_180862ad1(void)

{
  uint uVar1;
  int iVar2;
  int64_t unaff_R12;
  char unaff_R13B;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  uint64_t in_stack_000000a8;
  
  if (*(int *)(unaff_R12 + 0xd0) == 0) {
    uVar1 = *(uint *)((int64_t)unaff_R14 + 0x1c);
    (**(code **)(*(int64_t *)unaff_R14[2] + 0x30))((int64_t *)unaff_R14[2],&stack0x00000070);
    iVar2 = FUN_1808caa20(unaff_R15 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,&stack0x00000070
                         );
    if (iVar2 == 0) {
      *(int64_t *)unaff_R14[1] = *unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
      *(int64_t **)unaff_R14[1] = unaff_R14;
      *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
      unaff_R14[1] = (int64_t)unaff_R14;
      *unaff_R14 = (int64_t)unaff_R14;
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
    }
  }
  else if (unaff_R13B != '\0') {
    unaff_R14[4] = 0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180862ae8(void)
void FUN_180862ae8(void)

{
  uint uVar1;
  int iVar2;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  uint64_t in_stack_000000a8;
  
  uVar1 = *(uint *)((int64_t)unaff_R14 + 0x1c);
  (**(code **)(*(int64_t *)unaff_R14[2] + 0x30))((int64_t *)unaff_R14[2],&stack0x00000070);
  iVar2 = FUN_1808caa20(unaff_R15 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,&stack0x00000070);
  if (iVar2 == 0) {
    *(int64_t *)unaff_R14[1] = *unaff_R14;
    *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
    unaff_R14[1] = (int64_t)unaff_R14;
    *unaff_R14 = (int64_t)unaff_R14;
    *(int64_t **)unaff_R14[1] = unaff_R14;
    *(int64_t *)(*unaff_R14 + 8) = unaff_R14[1];
    unaff_R14[1] = (int64_t)unaff_R14;
    *unaff_R14 = (int64_t)unaff_R14;
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180862b96(void)
void FUN_180862b96(void)

{
  uint64_t in_stack_000000a8;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000a8 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_180862bc0(int64_t param_1,float param_2)

{
  uint64_t uVar1;
  float fVar2;
  
  if (param_2 != *(float *)(param_1 + 0x2f8)) {
    *(float *)(param_1 + 0x2f8) = param_2;
    if (*(int64_t *)(param_1 + 0x2b0) != 0) {
      param_2 = param_2 * *(float *)(param_1 + 0x2fc);
      fVar2 = 0.0;
      if ((0.0 <= param_2) && (fVar2 = param_2, 100.0 <= param_2)) {
        fVar2 = 100.0;
      }
      uVar1 = func_0x000180853cc0(*(int64_t *)(param_1 + 0x2b0),fVar2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
  }
  return 0;
}



uint64_t FUN_180862c50(uint64_t param_1,int32_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int aiStackX_18 [2];
  uint64_t uStackX_20;
  
  iVar3 = 0;
  aiStackX_18[0] = 0;
  uVar1 = FUN_18073f570(param_1,aiStackX_18);
  if ((int)uVar1 == 0) {
    iVar2 = iVar3;
    if (0 < aiStackX_18[0]) {
      do {
        uStackX_20 = 0;
        uVar1 = FUN_18073f370(param_1,iVar2,&uStackX_20);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_180862c50(uStackX_20,param_2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < aiStackX_18[0]);
    }
    aiStackX_18[0] = 0;
    uVar1 = FUN_18073f4a0(param_1,aiStackX_18);
    if ((int)uVar1 == 0) {
      if (0 < aiStackX_18[0]) {
        do {
          uStackX_20 = 0;
          uVar1 = FUN_18073f240(param_1,iVar3,&uStackX_20);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = FUN_18073ff60(uStackX_20,param_2);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < aiStackX_18[0]);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x000180862ce0)
// WARNING: Removing unreachable block (ram,0x000180862cf8)
// WARNING: Removing unreachable block (ram,0x000180862d08)

uint64_t FUN_180862c75(void)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t unaff_RBP;
  int32_t unaff_ESI;
  int in_stack_00000050;
  
  uVar2 = (uint)unaff_RBP;
  uVar3 = unaff_RBP & 0xffffffff;
  while( true ) {
    if (in_stack_00000050 <= (int)uVar2) {
      uVar1 = FUN_18073f4a0();
      if ((int)uVar1 == 0) {
        uVar1 = 0;
      }
      return uVar1;
    }
    uVar1 = FUN_18073f370();
    if ((int)uVar1 != 0) break;
    uVar1 = FUN_180862c50(unaff_RBP,unaff_ESI);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (uint64_t)uVar2;
  }
  return uVar1;
}





// 函数: void FUN_180862d17(void)
void FUN_180862d17(void)

{
  return;
}



uint64_t FUN_180862d20(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if (iVar2 != *(int *)(param_1 + 0x2e0)) {
    *(int *)(param_1 + 0x2e0) = iVar2;
    if (iVar2 == -1) {
      param_2 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x88) + 0xdc);
    }
    uVar1 = FUN_180862c50(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}






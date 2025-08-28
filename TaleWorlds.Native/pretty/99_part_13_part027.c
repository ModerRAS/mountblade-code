/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part027.c - 10 个函数

// 函数: void FUN_1808b6c30(uint64_t *param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808b6c30(uint64_t *param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t auStack_c8 [32];
  int64_t lStack_a8;
  int32_t uStack_a0;
  int64_t lStack_98;
  int8_t auStack_90 [80];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  *param_4 = 0;
  lVar2 = (**(code **)(*(int64_t *)*param_1 + 0x298))((int64_t *)*param_1,param_2,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(param_2,auStack_90);
  }
  if ((((*(int *)(lVar2 + 0x20) != 0) || (*(int *)(lVar2 + 0x24) != 0)) ||
      (*(int *)(lVar2 + 0x28) != 0)) || (*(int *)(lVar2 + 0x2c) != 0)) {
    lVar3 = (**(code **)(*(int64_t *)*param_1 + 0x268))((int64_t *)*param_1,lVar2 + 0x30,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(lVar2 + 0x30,auStack_90);
    }
    lStack_98 = 0;
    lVar4 = (**(code **)(*(int64_t *)*param_1 + 0x110))((int64_t *)*param_1,lVar2 + 0x20,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(lVar2 + 0x20,auStack_90);
    }
    iVar1 = FUN_1808b86e0(param_1,lVar4,*(int32_t *)(lVar2 + 0x40),&lStack_98);
    if ((iVar1 == 0) && (lStack_98 != 0)) {
      lStack_a8 = lStack_98;
      lStack_98 = 0;
      uStack_a0 = param_3;
      iVar1 = func_0x0001808bc310(param_1[1],&lStack_98,lVar2,lVar3);
      if ((iVar1 == 0) && (iVar1 = func_0x0001808c6d00(lStack_98), iVar1 == 0)) {
        *param_4 = lStack_98;
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_c8);
}






// 函数: void FUN_1808b6cb1(int64_t *param_1,uint64_t param_2)
void FUN_1808b6cb1(int64_t *param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  int64_t *unaff_R15;
  int64_t in_stack_00000030;
  uint64_t in_stack_00000088;
  
  lVar2 = (**(code **)(*param_1 + 0x268))(param_1,param_2,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(unaff_RDI + 0x30,&stack0x00000038);
  }
  in_stack_00000030 = 0;
  lVar2 = (**(code **)(*(int64_t *)*unaff_RSI + 0x110))((int64_t *)*unaff_RSI,unaff_RDI + 0x20,1);
  if (lVar2 != 0) {
    iVar1 = FUN_1808b86e0();
    if ((iVar1 == 0) && (in_stack_00000030 != 0)) {
      in_stack_00000030 = 0;
      iVar1 = func_0x0001808bc310(unaff_RSI[1],&stack0x00000030);
      if ((iVar1 == 0) && (iVar1 = func_0x0001808c6d00(in_stack_00000030), iVar1 == 0)) {
        *unaff_R15 = in_stack_00000030;
      }
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(in_stack_00000088 ^ (uint64_t)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  SystemController(unaff_RDI + 0x20,&stack0x00000038);
}






// 函数: void FUN_1808b6db3(void)
void FUN_1808b6db3(void)

{
  uint64_t in_stack_00000088;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000088 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808b6de0(int64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x98,&rendering_buffer_2288_ptr,0x329,0,0,1);
  if (lVar2 == 0) {
    uVar1 = 0x26;
  }
  else {
    uVar3 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 8) + 0x30))();
    uVar3 = func_0x0001808c9100(lVar2,param_2,uVar3,*(uint64_t *)(param_1 + 0x18));
    *param_3 = uVar3;
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b6e80(uint64_t *param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808b6e80(uint64_t *param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int iVar1;
  int64_t lVar2;
  int8_t auStack_b8 [32];
  int64_t lStack_98;
  int64_t *plStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  lStack_80 = 0;
  lVar2 = (**(code **)(*(int64_t *)*param_1 + 0x288))((int64_t *)*param_1,param_2,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(param_2,auStack_68);
  }
  lStack_88 = 0;
  if ((((*(int *)(lVar2 + 0x60) == 0) && (*(int *)(lVar2 + 100) == 0)) &&
      (*(int *)(lVar2 + 0x68) == 0)) && (*(int *)(lVar2 + 0x6c) == 0)) {
    if (((*(int *)(lVar2 + 0x40) == 0) && (*(int *)(lVar2 + 0x44) == 0)) &&
       ((*(int *)(lVar2 + 0x48) == 0 && (*(int *)(lVar2 + 0x4c) == 0)))) goto LAB_1808b6fa7;
    uStack_78 = *(int32_t *)(lVar2 + 0x40);
    uStack_74 = *(int32_t *)(lVar2 + 0x44);
    uStack_70 = *(int32_t *)(lVar2 + 0x48);
    uStack_6c = *(int32_t *)(lVar2 + 0x4c);
    iVar1 = FUN_1808bc010(param_1[2],&uStack_78,0,&lStack_88);
    if (iVar1 != 0) goto LAB_1808b6fa7;
  }
  plStack_90 = &lStack_80;
  lStack_98 = param_1[2] + 0x290;
  iVar1 = FUN_1808b6fd0(param_1,lVar2,param_3,lStack_88);
  lVar2 = lStack_80;
  if (((iVar1 == 0) &&
      ((lStack_88 == 0 ||
       (iVar1 = FUN_18073f130(*(uint64_t *)(lStack_88 + 0x78),
                              *(uint64_t *)(*(int64_t *)(lStack_80 + 0x2b0) + 0x78),1,0),
       iVar1 == 0)))) && (iVar1 = FUN_1808624a0(lVar2), iVar1 == 0)) {
    *param_4 = lVar2;
  }
LAB_1808b6fa7:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b6fd0(uint64_t *param_1,int64_t param_2,int32_t param_3,uint64_t param_4,
void FUN_1808b6fd0(uint64_t *param_1,int64_t param_2,int32_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t *param_6)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int8_t auStack_138 [32];
  int64_t *plStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int64_t lStack_e8;
  int32_t uStack_e0;
  int32_t uStack_dc;
  uint64_t uStack_d8;
  int64_t *plStack_d0;
  char acStack_c8 [8];
  int64_t lStack_c0;
  char cStack_b8;
  int64_t lStack_b0;
  char cStack_a8;
  int64_t lStack_a0;
  char cStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int8_t auStack_78 [40];
  uint64_t uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  plStack_d0 = param_6;
  if (param_6 != (int64_t *)0x0) {
    *param_6 = 0;
  }
  lStack_88 = param_1[2];
  acStack_c8[0] = '\0';
  lStack_c0 = lStack_88 + 0x38;
  cStack_b8 = '\0';
  *(int *)(lStack_88 + 0x98) = *(int *)(lStack_88 + 0x98) + 1;
  lStack_b0 = lStack_88 + 0x170;
  *(int *)(lStack_88 + 0x1d0) = *(int *)(lStack_88 + 0x1d0) + 1;
  lStack_a0 = lStack_88 + 0x108;
  *(int *)(lStack_88 + 0x168) = *(int *)(lStack_88 + 0x168) + 1;
  lStack_90 = lStack_88 + 0x1d8;
  *(int *)(lStack_88 + 0x238) = *(int *)(lStack_88 + 0x238) + 1;
  cStack_a8 = '\0';
  cStack_98 = '\0';
  if ((param_2 != 0) &&
     (((((*(int *)(param_2 + 0x30) != 0 || (*(int *)(param_2 + 0x34) != 0)) ||
        (*(int *)(param_2 + 0x38) != 0)) || (*(int *)(param_2 + 0x3c) != 0)) &&
      (((*(int *)(param_2 + 0x50) != 0 || (*(int *)(param_2 + 0x54) != 0)) ||
       ((*(int *)(param_2 + 0x58) != 0 || (*(int *)(param_2 + 0x5c) != 0)))))))) {
    lVar3 = (**(code **)(*(int64_t *)*param_1 + 0x2f0))((int64_t *)*param_1,param_2 + 0x30,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(param_2 + 0x30,auStack_78);
    }
    uStack_108 = CONCAT31(uStack_108._1_3_,1);
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    plStack_118 = (int64_t *)((uint64_t)plStack_118 & 0xffffffff00000000);
    lVar4 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x4f0,&rendering_buffer_2288_ptr,0x431);
    if (lVar4 != 0) {
      plStack_118 = (int64_t *)param_1[2];
      uStack_f8 = param_5;
      uStack_110 = plStack_118[0x98];
      uStack_108 = param_3;
      uStack_100 = param_4;
      lVar4 = FUN_18085d860(lVar4,param_2,lVar3,*param_1);
      if (lVar4 == 0) {
        plVar7 = (int64_t *)0x0;
        plVar8 = (int64_t *)&system_data_0008;
      }
      else {
        plVar7 = (int64_t *)(lVar4 + 8);
        plVar8 = plVar7;
      }
      uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
      iVar1 = FUN_1808b89f0(uVar5,plVar7);
      if ((iVar1 == 0) && (iVar1 = FUN_1808b8b80(param_1[1],param_2 + 0x10,lVar4), iVar1 == 0)) {
        for (uVar6 = *(uint64_t *)(param_2 + 0x70);
            (*(uint64_t *)(param_2 + 0x70) <= uVar6 &&
            (uVar6 < (int64_t)*(int *)(param_2 + 0x78) * 0x10 + *(uint64_t *)(param_2 + 0x70)));
            uVar6 = uVar6 + 0x10) {
          lStack_e8 = 0;
          iVar1 = FUN_1808bc010(param_1[2],uVar6,lVar4,&lStack_e8);
          if (iVar1 != 0) goto LAB_1808b7425;
        }
        lStack_e8 = *(int64_t *)(param_2 + 0x50);
        uStack_e0 = *(int32_t *)(param_2 + 0x58);
        uStack_dc = *(int32_t *)(param_2 + 0x5c);
        uStack_d8 = 0;
        iVar1 = FUN_1808bc010(param_1[2],&lStack_e8,lVar4,&uStack_d8);
        if ((iVar1 == 0) && (iVar1 = FUN_1808616f0(lVar4,uStack_d8), iVar1 == 0)) {
          iVar1 = 0;
          if (0 < *(int *)(param_2 + 0x88)) {
            do {
              iVar2 = FUN_18085ea80(lVar4,0xffffffff,
                                    (int64_t)iVar1 * 0x10 + *(int64_t *)(param_2 + 0x80));
              if (iVar2 != 0) goto LAB_1808b7425;
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_2 + 0x88));
          }
          for (uVar6 = *(uint64_t *)(lVar3 + 0x28);
              (*(uint64_t *)(lVar3 + 0x28) <= uVar6 &&
              (uVar6 < (int64_t)*(int *)(lVar3 + 0x30) * 0x10 + *(uint64_t *)(lVar3 + 0x28)));
              uVar6 = uVar6 + 0x10) {
            lStack_e8 = 0;
            uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
            iVar1 = FUN_1808b6c30(uVar5,uVar6,1,&lStack_e8);
            if ((iVar1 != 0) ||
               ((lStack_e8 != 0 && (iVar1 = func_0x0001808b8f10(lVar4 + 0x1e0), iVar1 != 0))))
            goto LAB_1808b7425;
          }
          iVar1 = FUN_1808b8f60(lVar4,uStack_d8);
          if (iVar1 == 0) {
            lVar3 = param_1[2];
            plVar7 = (int64_t *)(lVar4 + 0x60);
            if (plVar7 != (int64_t *)0x0) {
              plVar8 = (int64_t *)*plVar7;
              iVar1 = 0;
              if (plVar8 != plVar7) {
                do {
                  plVar8 = (int64_t *)*plVar8;
                  iVar1 = iVar1 + 1;
                } while (plVar8 != plVar7);
                if (iVar1 != 0) goto LAB_1808b7425;
              }
              *(uint64_t *)(lVar4 + 0x68) = *(uint64_t *)(lVar3 + 0x10);
              *plVar7 = lVar3 + 8;
              *(int64_t **)(lVar3 + 0x10) = plVar7;
              **(int64_t **)(lVar4 + 0x68) = (int64_t)plVar7;
              iVar1 = FUN_1808b7f30(param_1,lVar4);
              if (iVar1 == 0) {
                if ((((*(int *)(param_2 + 0x60) != 0) || (*(int *)(param_2 + 100) != 0)) ||
                    (*(int *)(param_2 + 0x68) != 0)) || (*(int *)(param_2 + 0x6c) != 0)) {
                  lVar3 = (**(code **)(*(int64_t *)*param_1 + 0x280))
                                    ((int64_t *)*param_1,param_2 + 0x60,1);
                  if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
                    SystemController(param_2 + 0x60,auStack_78);
                  }
                  plStack_118 = &lStack_e8;
                  lStack_e8 = 0;
                  iVar1 = FUN_1808d8040(param_1[2] + 0x2c8,lVar3,*(int32_t *)(param_1[2] + 0x774)
                                        ,lVar4);
                  if (iVar1 != 0) goto LAB_1808b7425;
                  *(int64_t *)(lVar4 + 0x478) = lStack_e8;
                }
                iVar1 = FUN_1808b66c0(acStack_c8);
                if ((iVar1 == 0) && (plStack_d0 != (int64_t *)0x0)) {
                  *plStack_d0 = lVar4;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1808b7425:
  if (cStack_98 == '\0') {
    *(int32_t *)(lStack_90 + 0x60) = 0;
    FUN_18084f560(lStack_90 + 0x30);
  }
  if (cStack_a8 == '\0') {
    *(int32_t *)(lStack_a0 + 0x60) = 0;
    FUN_18084f040(lStack_a0 + 0x30);
  }
  if (cStack_b8 == '\0') {
    *(int32_t *)(lStack_b0 + 0x60) = 0;
    FUN_18084f040(lStack_b0 + 0x30);
  }
  if (acStack_c8[0] == '\0') {
    *(int32_t *)(lStack_c0 + 0x60) = 0;
    FUN_18084f2d0(lStack_c0 + 0x30);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_50 ^ (uint64_t)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b6ff5(uint64_t *param_1,int64_t param_2)
void FUN_1808b6ff5(uint64_t *param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  int64_t *in_RAX;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t *plVar8;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t in_stack_00000020;
  int64_t in_stack_00000050;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  uint64_t in_stack_00000060;
  int64_t *plStack0000000000000068;
  char cStack0000000000000070;
  int64_t lStack0000000000000078;
  
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  if (in_RAX != (int64_t *)0x0) {
    *in_RAX = 0;
  }
  lVar3 = param_1[2];
  cStack0000000000000070 = '\0';
  lStack0000000000000078 = lVar3 + 0x38;
  *(int8_t *)(unaff_RBP + -0x80) = 0;
  *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
  *(int *)(lVar3 + 0x1d0) = *(int *)(lVar3 + 0x1d0) + 1;
  *(int64_t *)(unaff_RBP + -0x78) = lVar3 + 0x170;
  *(int *)(lVar3 + 0x168) = *(int *)(lVar3 + 0x168) + 1;
  *(int64_t *)(unaff_RBP + -0x68) = lVar3 + 0x108;
  *(int *)(lVar3 + 0x238) = *(int *)(lVar3 + 0x238) + 1;
  *(int8_t *)(unaff_RBP + -0x70) = 0;
  *(int8_t *)(unaff_RBP + -0x60) = 0;
  *(int64_t *)(unaff_RBP + -0x58) = lVar3 + 0x1d8;
  *(int64_t *)(unaff_RBP + -0x50) = lVar3;
  if ((param_2 != 0) &&
     (((((*(int *)(param_2 + 0x30) != 0 || (*(int *)(param_2 + 0x34) != 0)) ||
        (*(int *)(param_2 + 0x38) != 0)) || (*(int *)(param_2 + 0x3c) != 0)) &&
      (((*(int *)(param_2 + 0x50) != 0 || (*(int *)(param_2 + 0x54) != 0)) ||
       ((*(int *)(param_2 + 0x58) != 0 || (*(int *)(param_2 + 0x5c) != 0)))))))) {
    plStack0000000000000068 = in_RAX;
    lVar3 = (**(code **)(*(int64_t *)*param_1 + 0x2f0))((int64_t *)*param_1,param_2 + 0x30,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(param_2 + 0x30,unaff_RBP + -0x40);
    }
    lVar4 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x4f0,&rendering_buffer_2288_ptr,0x431,
                          in_stack_00000020 & 0xffffffff00000000);
    if (lVar4 != 0) {
      lVar4 = FUN_18085d860(lVar4,param_2,lVar3,*param_1,param_1[2]);
      if (lVar4 == 0) {
        plVar7 = (int64_t *)0x0;
        plVar8 = (int64_t *)&system_data_0008;
      }
      else {
        plVar7 = (int64_t *)(lVar4 + 8);
        plVar8 = plVar7;
      }
      uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
      iVar1 = FUN_1808b89f0(uVar5,plVar7);
      if ((iVar1 == 0) && (iVar1 = FUN_1808b8b80(param_1[1],param_2 + 0x10,lVar4), iVar1 == 0)) {
        for (uVar6 = *(uint64_t *)(param_2 + 0x70);
            (*(uint64_t *)(param_2 + 0x70) <= uVar6 &&
            (uVar6 < (int64_t)*(int *)(param_2 + 0x78) * 0x10 + *(uint64_t *)(param_2 + 0x70)));
            uVar6 = uVar6 + 0x10) {
          in_stack_00000050 = 0;
          iVar1 = FUN_1808bc010(param_1[2],uVar6,lVar4,&stack0x00000050);
          if (iVar1 != 0) goto LAB_1808b7425;
        }
        in_stack_00000050 = *(int64_t *)(param_2 + 0x50);
        uStack0000000000000058 = *(int32_t *)(param_2 + 0x58);
        uStack000000000000005c = *(int32_t *)(param_2 + 0x5c);
        in_stack_00000060 = 0;
        iVar1 = FUN_1808bc010(param_1[2],&stack0x00000050,lVar4,&stack0x00000060);
        if ((iVar1 == 0) && (iVar1 = FUN_1808616f0(lVar4,in_stack_00000060), iVar1 == 0)) {
          iVar1 = 0;
          if (0 < *(int *)(param_2 + 0x88)) {
            do {
              iVar2 = FUN_18085ea80(lVar4,0xffffffff,
                                    (int64_t)iVar1 * 0x10 + *(int64_t *)(param_2 + 0x80));
              if (iVar2 != 0) goto LAB_1808b7425;
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_2 + 0x88));
          }
          for (uVar6 = *(uint64_t *)(lVar3 + 0x28);
              (*(uint64_t *)(lVar3 + 0x28) <= uVar6 &&
              (uVar6 < (int64_t)*(int *)(lVar3 + 0x30) * 0x10 + *(uint64_t *)(lVar3 + 0x28)));
              uVar6 = uVar6 + 0x10) {
            in_stack_00000050 = 0;
            uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
            iVar1 = FUN_1808b6c30(uVar5,uVar6,1,&stack0x00000050);
            if ((iVar1 != 0) ||
               ((in_stack_00000050 != 0 && (iVar1 = func_0x0001808b8f10(lVar4 + 0x1e0), iVar1 != 0))
               )) goto LAB_1808b7425;
          }
          iVar1 = FUN_1808b8f60(lVar4,in_stack_00000060);
          if (iVar1 == 0) {
            lVar3 = param_1[2];
            plVar7 = (int64_t *)(lVar4 + 0x60);
            if (plVar7 != (int64_t *)0x0) {
              plVar8 = (int64_t *)*plVar7;
              iVar1 = 0;
              if (plVar8 != plVar7) {
                do {
                  plVar8 = (int64_t *)*plVar8;
                  iVar1 = iVar1 + 1;
                } while (plVar8 != plVar7);
                if (iVar1 != 0) goto LAB_1808b7425;
              }
              *(uint64_t *)(lVar4 + 0x68) = *(uint64_t *)(lVar3 + 0x10);
              *plVar7 = lVar3 + 8;
              *(int64_t **)(lVar3 + 0x10) = plVar7;
              **(int64_t **)(lVar4 + 0x68) = (int64_t)plVar7;
              iVar1 = FUN_1808b7f30(param_1,lVar4);
              if (iVar1 == 0) {
                if ((((*(int *)(param_2 + 0x60) != 0) || (*(int *)(param_2 + 100) != 0)) ||
                    (*(int *)(param_2 + 0x68) != 0)) || (*(int *)(param_2 + 0x6c) != 0)) {
                  lVar3 = (**(code **)(*(int64_t *)*param_1 + 0x280))
                                    ((int64_t *)*param_1,param_2 + 0x60,1);
                  if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
                    SystemController(param_2 + 0x60,unaff_RBP + -0x40);
                  }
                  in_stack_00000050 = 0;
                  iVar1 = FUN_1808d8040(param_1[2] + 0x2c8,lVar3,*(int32_t *)(param_1[2] + 0x774)
                                        ,lVar4,&stack0x00000050);
                  if (iVar1 != 0) goto LAB_1808b7425;
                  *(int64_t *)(lVar4 + 0x478) = in_stack_00000050;
                }
                iVar1 = FUN_1808b66c0(&stack0x00000070);
                if ((iVar1 == 0) && (plStack0000000000000068 != (int64_t *)0x0)) {
                  *plStack0000000000000068 = lVar4;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1808b7425:
  if (*(char *)(unaff_RBP + -0x60) == '\0') {
    lVar3 = *(int64_t *)(unaff_RBP + -0x58);
    *(int32_t *)(lVar3 + 0x60) = 0;
    FUN_18084f560(lVar3 + 0x30);
  }
  if (*(char *)(unaff_RBP + -0x70) == '\0') {
    lVar3 = *(int64_t *)(unaff_RBP + -0x68);
    *(int32_t *)(lVar3 + 0x60) = 0;
    FUN_18084f040(lVar3 + 0x30);
  }
  if (*(char *)(unaff_RBP + -0x80) == '\0') {
    lVar3 = *(int64_t *)(unaff_RBP + -0x78);
    *(int32_t *)(lVar3 + 0x60) = 0;
    FUN_18084f040(lVar3 + 0x30);
  }
  if (cStack0000000000000070 == '\0') {
    *(int32_t *)(lStack0000000000000078 + 0x60) = 0;
    FUN_18084f2d0(lStack0000000000000078 + 0x30);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x18) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808b7453(void)
void FUN_1808b7453(void)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  int32_t unaff_EDI;
  char in_stack_00000070;
  int64_t in_stack_00000078;
  
  lVar1 = *(int64_t *)(unaff_RBP + -0x58);
  *(int32_t *)(lVar1 + 0x60) = unaff_EDI;
  FUN_18084f560(lVar1 + 0x30);
  if (*(char *)(unaff_RBP + -0x70) == '\0') {
    lVar1 = *(int64_t *)(unaff_RBP + -0x68);
    *(int32_t *)(lVar1 + 0x60) = unaff_EDI;
    FUN_18084f040(lVar1 + 0x30);
  }
  if (*(char *)(unaff_RBP + -0x80) == '\0') {
    lVar1 = *(int64_t *)(unaff_RBP + -0x78);
    *(int32_t *)(lVar1 + 0x60) = unaff_EDI;
    FUN_18084f040(lVar1 + 0x30);
  }
  if (in_stack_00000070 == '\0') {
    *(int32_t *)(in_stack_00000078 + 0x60) = unaff_EDI;
    FUN_18084f2d0(in_stack_00000078 + 0x30);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x18) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b74d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_1808b74d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t *param_5)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  lVar2 = (**(code **)(*(int64_t *)*param_1 + 0x290))((int64_t *)*param_1,param_2,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemController(param_2,auStack_68);
  }
  iVar1 = *(int *)(lVar2 + 0x48);
  if (iVar1 == 0) {
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    lStack_80 = (uint64_t)lStack_80._1_7_ << 8;
    uStack_88 = (uint64_t *)((uint64_t)uStack_88._4_4_ << 0x20);
    lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe0,&rendering_buffer_2288_ptr);
    if (lVar3 == 0) goto LAB_1808b7702;
    uStack_88 = param_1;
    lStack_80 = param_4;
    plVar4 = (int64_t *)FUN_1808d2d20(lVar3,lVar2,param_3,param_1[1]);
  }
  else if (iVar1 == 1) {
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    lStack_80 = (uint64_t)lStack_80._1_7_ << 8;
    uStack_88 = (uint64_t *)((uint64_t)uStack_88._4_4_ << 0x20);
    lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xb8,&rendering_buffer_2288_ptr);
    if (lVar3 == 0) goto LAB_1808b7702;
    uStack_88 = param_1;
    lStack_80 = param_4;
    plVar4 = (int64_t *)FUN_1808d3040(lVar3,lVar2,param_3,param_1[1]);
  }
  else if (iVar1 == 2) {
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    lStack_80 = (uint64_t)lStack_80._1_7_ << 8;
    uStack_88 = (uint64_t *)((uint64_t)uStack_88._4_4_ << 0x20);
    lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),200,&rendering_buffer_2288_ptr);
    if (lVar3 == 0) goto LAB_1808b7702;
    uStack_88 = param_1;
    lStack_80 = param_4;
    plVar4 = (int64_t *)FUN_1808d2dd0(lVar3,lVar2,param_3,param_1[1]);
  }
  else {
    plVar4 = (int64_t *)0x0;
    if (iVar1 == 3) {
      uStack_78 = CONCAT71(uStack_78._1_7_,1);
      lStack_80 = (uint64_t)lStack_80._1_7_ << 8;
      uStack_88 = (uint64_t *)((uint64_t)uStack_88._4_4_ << 0x20);
      lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&rendering_buffer_2288_ptr);
      if (lVar3 == 0) goto LAB_1808b7702;
      uStack_78 = param_1[3];
      uStack_88 = param_1;
      lStack_80 = param_4;
      plVar4 = (int64_t *)FUN_1808d2e60(lVar3,lVar2,param_3,param_1[1]);
    }
  }
  plVar5 = plVar4 + 9;
  if (plVar4 == (int64_t *)0x0) {
    plVar5 = (int64_t *)0x0;
  }
  iVar1 = FUN_1808b89f0(param_1,plVar5);
  if (((iVar1 == 0) && (iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4), iVar1 == 0)) &&
     (iVar1 = func_0x0001808c19c0(param_1[1],plVar4), iVar1 == 0)) {
    *param_5 = plVar4;
  }
LAB_1808b7702:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b752f(int param_1)
void FUN_1808b752f(int param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t unaff_RDI;
  uint64_t *unaff_R15;
  uint64_t in_stack_00000020;
  uint uVar4;
  uint64_t in_stack_00000068;
  
  plVar3 = (int64_t *)0x0;
  uVar4 = (uint)((uint64_t)in_stack_00000020 >> 0x20);
  if (param_1 == 0) {
    lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe0,&rendering_buffer_2288_ptr,0xe9,
                          (uint64_t)uVar4 << 0x20);
    if (lVar2 == 0) goto LAB_1808b7702;
    plVar3 = (int64_t *)FUN_1808d2d20(lVar2);
  }
  else if (param_1 == 1) {
    lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xb8,&rendering_buffer_2288_ptr,0xf5,
                          (uint64_t)uVar4 << 0x20);
    if (lVar2 == 0) goto LAB_1808b7702;
    plVar3 = (int64_t *)FUN_1808d3040(lVar2);
  }
  else if (param_1 == 2) {
    lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),200,&rendering_buffer_2288_ptr,0xef,
                          (uint64_t)uVar4 << 0x20);
    if (lVar2 == 0) goto LAB_1808b7702;
    plVar3 = (int64_t *)FUN_1808d2dd0(lVar2);
  }
  else if (param_1 == 3) {
    lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&rendering_buffer_2288_ptr,0xfb,
                          (uint64_t)uVar4 << 0x20);
    if (lVar2 == 0) goto LAB_1808b7702;
    plVar3 = (int64_t *)FUN_1808d2e60(lVar2);
  }
  iVar1 = FUN_1808b89f0();
  if (((iVar1 == 0) && (iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3), iVar1 == 0)) &&
     (iVar1 = func_0x0001808c19c0(*(uint64_t *)(unaff_RDI + 8),plVar3), iVar1 == 0)) {
    *unaff_R15 = plVar3;
  }
LAB_1808b7702:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000068 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808b7707(void)
void FUN_1808b7707(void)

{
  uint64_t in_stack_00000068;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000068 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





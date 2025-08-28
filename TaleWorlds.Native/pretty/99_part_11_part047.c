#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part047.c - 8 个函数

// 函数: void FUN_1807ac600(void)
void FUN_1807ac600(void)

{
  short sVar1;
  int64_t lVar2;
  int8_t auVar3 [16];
  int64_t *plVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint uVar8;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t uVar9;
  uint64_t *unaff_R12;
  short unaff_R13W;
  uint64_t in_stack_00000020;
  uint64_t uVar10;
  int16_t uStack0000000000000040;
  int16_t uStack0000000000000044;
  uint uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t in_stack_00000050;
  int64_t *in_stack_00000058;
  uint64_t in_stack_00000060;
  int64_t *in_stack_00000070;
  int64_t in_stack_00000078;
  
  iVar5 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),0,0);
  if ((((iVar5 == 0) &&
       (iVar5 = (**(code **)(*(int64_t *)*unaff_R12 + 0xb8))
                          ((int64_t *)*unaff_R12,*(uint64_t *)(unaff_RDI + 0x180)), -1 < iVar5))
      && (iVar5 = (*(code *)**(uint64_t **)*unaff_R12)
                            ((uint64_t *)*unaff_R12,&unknown_var_8392_ptr,&stack0x00000070),
         plVar6 = in_stack_00000070, -1 < iVar5)) &&
     ((uVar8 = (uint)unaff_RBX, uStack0000000000000048 = uVar8, in_stack_00000058 = unaff_RBX,
      in_stack_00000070 != (int64_t *)0x0 &&
      (iVar5 = (**(code **)(*in_stack_00000070 + 0x40))(in_stack_00000070,&stack0x00000048),
      -1 < iVar5)))) {
    *(uint *)(unaff_RDI + 0x188) = uVar8;
    if (uVar8 < uStack0000000000000048) {
      do {
        iVar5 = (**(code **)(*plVar6 + 0x48))
                          (plVar6,(uint64_t)unaff_RBX & 0xffffffff,&stack0x00000058);
        if (iVar5 < 0) goto LAB_1807ac5c4;
        uStack0000000000000040 = 0;
        iVar5 = (**(code **)(*in_stack_00000058 + 0x20))(in_stack_00000058,&stack0x00000040);
        if ((iVar5 < 0) ||
           (iVar5 = (**(code **)(*in_stack_00000058 + 0x18))(in_stack_00000058,&stack0x00000078),
           iVar5 < 0)) goto LAB_1807ac5c4;
        if ((in_stack_00000078 == 0x10000073647561) &&
           (*(int64_t *)(unaff_RBP + -0x80) == 0x719b3800aa000080)) {
          *(int16_t *)(unaff_RDI + 0x188) = uStack0000000000000040;
        }
        else if ((in_stack_00000078 == 0x10000073646976) &&
                (*(int64_t *)(unaff_RBP + -0x80) == 0x719b3800aa000080)) {
          *(int16_t *)(unaff_RDI + 0x18a) = uStack0000000000000040;
        }
        if (in_stack_00000058 != (int64_t *)0x0) {
          (**(code **)(*in_stack_00000058 + 0x10))();
        }
        uVar8 = (int)unaff_RBX + 1;
        unaff_RBX = (int64_t *)(uint64_t)uVar8;
      } while (uVar8 < uStack0000000000000048);
    }
    (**(code **)(*in_stack_00000070 + 0x10))();
    iVar5 = (**(code **)(*(int64_t *)*unaff_R12 + 0x28))((int64_t *)*unaff_R12,0,0);
    if (((-1 < iVar5) &&
        (iVar5 = (**(code **)(*(int64_t *)*unaff_R12 + 0x40))
                           ((int64_t *)*unaff_R12,1,unaff_RDI + 0x188,&stack0x00000068), -1 < iVar5
        )) && (iVar5 = (**(code **)(*(int64_t *)*unaff_R12 + 0x50))
                                 ((int64_t *)*unaff_R12,*(int16_t *)(unaff_RDI + 0x188),0),
              -1 < iVar5)) {
      (**(code **)(*(int64_t *)*unaff_R12 + 0x70))
                ((int64_t *)*unaff_R12,(int64_t)&stack0x00000060 + 4);
      if (in_stack_00000060._4_4_ < 1) {
        iVar5 = (*(code *)**(uint64_t **)*unaff_R12)
                          ((uint64_t *)*unaff_R12,&unknown_var_8376_ptr,&stack0x00000058);
        if (-1 < iVar5) {
          uStack0000000000000040 = 0;
          uVar10 = 0;
          iVar5 = (**(code **)(*in_stack_00000058 + 0x28))
                            (in_stack_00000058,&stack0x00000040,&unknown_var_9296_ptr,&stack0x00000050,0);
          if ((-1 < iVar5) &&
             (plVar6 = (int64_t *)
                       SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uStack0000000000000044,
                                     &unknown_var_9168_ptr,0x199,uVar10 & 0xffffffff00000000),
             plVar6 != (int64_t *)0x0)) {
            iVar5 = (**(code **)(*in_stack_00000058 + 0x28))
                              (in_stack_00000058,&stack0x00000040,&unknown_var_9296_ptr,&stack0x00000050,
                               plVar6);
            if (-1 < iVar5) {
              uVar10 = (uint64_t)
                       ((int64_t)*(int *)(*(int64_t *)(unaff_RDI + 8) + 0x10) * *plVar6) / 10000;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar10;
              lVar7 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar3,8);
              *(int *)(*(int64_t *)(unaff_RDI + 8) + 0x18) =
                   (int)((uVar10 - lVar7 >> 1) + lVar7 >> 9);
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&unknown_var_9168_ptr,0x1a9,1);
            }
            uVar9 = 0x1a2;
LAB_1807ac9fe:
                    // WARNING: Subroutine does not return
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&unknown_var_9168_ptr,uVar9,1);
          }
        }
      }
      else {
        iVar5 = (**(code **)(*(int64_t *)*unaff_R12 + 0x90))
                          ((int64_t *)*unaff_R12,0,0,&stack0x00000048);
        if (-1 < iVar5) {
          iVar5 = (**(code **)(*(int64_t *)CONCAT44(uStack000000000000004c,uStack0000000000000048)
                              + 0x20))
                            ((int64_t *)CONCAT44(uStack000000000000004c,uStack0000000000000048),0,
                             &stack0x00000050);
          if (-1 < iVar5) {
            plVar6 = (int64_t *)
                     SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),in_stack_00000050,
                                   &unknown_var_9168_ptr,0x152,in_stack_00000020 & 0xffffffff00000000);
            plVar4 = (int64_t *)CONCAT44(uStack000000000000004c,uStack0000000000000048);
            if (plVar6 == (int64_t *)0x0) {
              (**(code **)(*plVar4 + 0x10))();
              goto LAB_1807ac5c4;
            }
            iVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,plVar6,&stack0x00000050);
            if (-1 < iVar5) {
              if ((*(int64_t *)((int64_t)plVar6 + 0x2c) == 0x11cec35605589f81) &&
                 (*(int64_t *)((int64_t)plVar6 + 0x34) == 0x5a595500aa0001bf)) {
                lVar7 = plVar6[10];
                lVar2 = *(int64_t *)(unaff_RDI + 8);
                sVar1 = *(short *)(lVar7 + 0xe);
                if (sVar1 == 8) {
                  *(int32_t *)(lVar2 + 8) = 1;
                }
                else if (sVar1 == 0x10) {
                  *(int32_t *)(lVar2 + 8) = 2;
                }
                else if (sVar1 == unaff_R13W) {
                  *(int32_t *)(lVar2 + 8) = 3;
                }
                else {
                  if (sVar1 != 0x20) {
                    (**(code **)(*(int64_t *)
                                  CONCAT44(uStack000000000000004c,uStack0000000000000048) + 0x10))()
                    ;
                    uVar9 = 0x16f;
                    goto LAB_1807ac9fe;
                  }
                  *(int32_t *)(lVar2 + 8) = 4;
                }
                *(uint *)(*(int64_t *)(unaff_RDI + 8) + 0xc) = (uint)*(ushort *)(lVar7 + 2);
                *(int32_t *)(*(int64_t *)(unaff_RDI + 8) + 0x10) = *(int32_t *)(lVar7 + 4);
              }
              (**(code **)(*(int64_t *)CONCAT44(uStack000000000000004c,uStack0000000000000048) +
                          0x10))();
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&unknown_var_9168_ptr,0x178,1);
            }
          }
          (**(code **)(*(int64_t *)CONCAT44(uStack000000000000004c,uStack0000000000000048) + 0x10))
                    ();
        }
      }
    }
  }
LAB_1807ac5c4:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1a0) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Type propagation algorithm not settling

uint64_t FUN_1807acd20(int64_t param_1,uint64_t param_2,uint64_t param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int16_t auStackX_8 [4];
  uint auStackX_20 [2];
  int32_t uStack_48;
  int32_t uStack_44;
  int64_t *plStack_40;
  int64_t alStack_38 [2];
  
  plStack_40 = (int64_t *)0x0;
  alStack_38[1] = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  auStackX_8[0] = 0;
  alStack_38[0] = 0;
  auStackX_20[0] = 0;
  *param_4 = 0;
  while( true ) {
    iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x178) + 0x38))
                      (*(int64_t **)(param_1 + 0x178),*(int16_t *)(param_1 + 0x188),&plStack_40,
                       param_1 + 400,alStack_38 + 1,&uStack_44,&uStack_48,auStackX_8);
    if (iVar2 < 0) {
      if (iVar2 != -0x3ff2f431) {
        return 0xd;
      }
      return 0x10;
    }
    (**(code **)(*plStack_40 + 0x38))(plStack_40,alStack_38,auStackX_20);
    uVar1 = *(uint *)(param_1 + 0x1a8);
    if (uVar1 < auStackX_20[0]) break;
    *(uint *)(param_1 + 0x1a8) = uVar1 - auStackX_20[0];
    (**(code **)(*plStack_40 + 0x10))();
    if (*param_4 != 0) {
      return 0;
    }
  }
                    // WARNING: Subroutine does not return
  memcpy(param_2,(uint64_t)uVar1 + alStack_38[0],auStackX_20[0] - uVar1);
}



uint64_t FUN_1807acec0(int64_t param_1,uint64_t param_2,uint param_3)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x198) == '\0') {
    return 0xe;
  }
  *(int32_t *)(param_1 + 0x1a8) = 0;
  lVar2 = *(int64_t *)(param_1 + 8);
  iVar6 = (int)(int64_t)(((float)*(uint *)(lVar2 + 0x18) / (float)*(int *)(lVar2 + 0x10)) * 1000.0)
  ;
  uVar7 = iVar6 - 2000;
  if (param_3 <= uVar7) goto LAB_1807acfb6;
  uVar1 = (param_3 - iVar6) + 2000;
  *(uint *)(param_1 + 0x1a8) = uVar1;
  uVar5 = (uint64_t)((float)uVar1 * 0.001 * (float)*(int *)(lVar2 + 0x10));
  iVar3 = (int)uVar5;
  *(int *)(param_1 + 0x1a8) = iVar3;
  iVar6 = *(int *)(lVar2 + 8);
  if (iVar6 == 1) {
    lVar4 = 8;
LAB_1807acf9f:
    iVar3 = (int)((uVar5 & 0xffffffff) * lVar4 >> 3);
  }
  else {
    if (iVar6 == 2) {
      lVar4 = 0x10;
      goto LAB_1807acf9f;
    }
    if (iVar6 == 3) {
      lVar4 = 0x18;
      goto LAB_1807acf9f;
    }
    if ((iVar6 == 4) || (iVar6 == 5)) {
      lVar4 = 0x20;
      goto LAB_1807acf9f;
    }
  }
  *(int *)(param_1 + 0x1a8) = iVar3 * *(int *)(lVar2 + 0xc);
  param_3 = uVar7;
LAB_1807acfb6:
  iVar6 = 0;
  do {
    iVar3 = (**(code **)(**(int64_t **)(param_1 + 0x178) + 0x28))
                      (*(int64_t **)(param_1 + 0x178),(uint64_t)param_3 * 10000,0);
    if (-1 < iVar3) {
      return 0;
    }
    iVar6 = iVar6 + 1;
    param_3 = param_3 + 100;
  } while (iVar6 < 100);
  return 0x31;
}



uint64_t FUN_1807acefa(int64_t param_1)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint unaff_EBX;
  int64_t unaff_RSI;
  int iVar5;
  uint uVar6;
  
  iVar5 = (int)(int64_t)
               (((float)*(uint *)(param_1 + 0x18) / (float)*(int *)(param_1 + 0x10)) * 1000.0);
  uVar6 = iVar5 - 2000;
  if (unaff_EBX <= uVar6) goto LAB_1807acfb6;
  uVar1 = (unaff_EBX - iVar5) + 2000;
  *(uint *)(unaff_RSI + 0x1a8) = uVar1;
  uVar4 = (uint64_t)((float)uVar1 * 0.001 * (float)*(int *)(param_1 + 0x10));
  iVar2 = (int)uVar4;
  *(int *)(unaff_RSI + 0x1a8) = iVar2;
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 1) {
    lVar3 = 8;
LAB_1807acf9f:
    iVar2 = (int)((uVar4 & 0xffffffff) * lVar3 >> 3);
  }
  else {
    if (iVar5 == 2) {
      lVar3 = 0x10;
      goto LAB_1807acf9f;
    }
    if (iVar5 == 3) {
      lVar3 = 0x18;
      goto LAB_1807acf9f;
    }
    if ((iVar5 == 4) || (iVar5 == 5)) {
      lVar3 = 0x20;
      goto LAB_1807acf9f;
    }
  }
  *(int *)(unaff_RSI + 0x1a8) = iVar2 * *(int *)(param_1 + 0xc);
  unaff_EBX = uVar6;
LAB_1807acfb6:
  iVar5 = 0;
  do {
    iVar2 = (**(code **)(**(int64_t **)(unaff_RSI + 0x178) + 0x28))
                      (*(int64_t **)(unaff_RSI + 0x178),(uint64_t)unaff_EBX * 10000,0);
    if (-1 < iVar2) {
      return 0;
    }
    iVar5 = iVar5 + 1;
    unaff_EBX = unaff_EBX + 100;
  } while (iVar5 < 100);
  return 0x31;
}



uint64_t FUN_1807acffd(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807ad010(int64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  
  if ((*(int *)(param_1 + 0x19c) != 0) && (lVar1 = *(int64_t *)(param_1 + 0x1a0), lVar1 != 0)) {
    uVar2 = 0;
    uVar4 = uVar2;
    if (0 < *(int *)(param_1 + 0x19c)) {
      do {
        (**(code **)(*param_3 + 0x108))
                  (param_3,*(int32_t *)(*(int64_t *)(param_1 + 0x1a0) + 0x30 + uVar4),2,
                   *(uint64_t *)(*(int64_t *)(param_1 + 0x1a0) + 0x20 + uVar4),0,0xffffffff,1);
        uVar3 = (int)uVar2 + 1;
        uVar2 = (uint64_t)uVar3;
        uVar4 = uVar4 + 0x13c;
      } while ((int)uVar3 < *(int *)(param_1 + 0x19c));
      lVar1 = *(int64_t *)(param_1 + 0x1a0);
    }
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_9168_ptr,0x3a6,1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ad03f(uint64_t param_1,uint64_t param_2)
void FUN_1807ad03f(uint64_t param_1,uint64_t param_2)

{
  int in_EAX;
  int64_t unaff_RBX;
  int iVar1;
  int64_t *unaff_R14;
  
  iVar1 = 0;
  if (0 < in_EAX) {
    do {
      (**(code **)(*unaff_R14 + 0x108))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_RBX + 0x19c));
    param_2 = *(uint64_t *)(unaff_RBX + 0x1a0);
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_9168_ptr,0x3a6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ad051(void)
void FUN_1807ad051(void)

{
  int64_t unaff_RBX;
  int unaff_ESI;
  int64_t *unaff_R14;
  int32_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  do {
    uStack0000000000000030 = 1;
    uStack0000000000000028 = 0xffffffff;
    (**(code **)(*unaff_R14 + 0x108))();
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < *(int *)(unaff_RBX + 0x19c));
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(unaff_RBX + 0x1a0),
                &unknown_var_9168_ptr,0x3a6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ad0b2(uint64_t param_1,uint64_t param_2)
void FUN_1807ad0b2(uint64_t param_1,uint64_t param_2)

{
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_9168_ptr,0x3a6,1);
}



uint64_t FUN_1807ad0e8(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807ad100(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  
  if (*(int64_t *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 8),&unknown_var_9392_ptr,
                  0x282,1);
  }
  lVar2 = *(int64_t *)(param_1 + 0x180);
  if (lVar2 == 0) {
    if (*(int64_t *)(param_1 + 400) == 0) {
      return 0;
    }
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 400),
                  &unknown_var_9392_ptr,0x2a9,1);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x178)) {
    lVar6 = 0;
    do {
      if (*(int64_t *)(lVar6 + 0x110 + lVar2) != 0) {
        uVar4 = 0;
        if (*(int *)(lVar6 + 0x100 + lVar2) != 0) {
          do {
            lVar2 = *(int64_t *)(*(int64_t *)(lVar6 + 0x110 + lVar2) + 0x40 + uVar4 * 0x48);
            if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_9392_ptr,0x297,1);
            }
            lVar2 = *(int64_t *)(param_1 + 0x180);
            uVar3 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar3;
          } while (uVar3 < *(uint *)(lVar6 + 0x100 + lVar2));
        }
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(lVar6 + 0x110 + lVar2)
                      ,&unknown_var_9392_ptr,0x29b,1);
      }
      lVar1 = *(int64_t *)(lVar6 + 0x120 + lVar2);
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_9392_ptr,0x29f,1);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x128;
    } while (iVar5 < *(int *)(param_1 + 0x178));
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_9392_ptr,0x2a3,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ad14f(uint64_t param_1,int64_t param_2)
void FUN_1807ad14f(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  iVar4 = 0;
  if (0 < *(int *)(unaff_RDI + 0x178)) {
    lVar5 = 0;
    do {
      if (*(int64_t *)(lVar5 + 0x110 + param_2) != 0) {
        uVar3 = 0;
        if (*(int *)(lVar5 + 0x100 + param_2) != 0) {
          do {
            lVar1 = *(int64_t *)(*(int64_t *)(lVar5 + 0x110 + param_2) + 0x40 + uVar3 * 0x48);
            if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_9392_ptr,0x297,1);
            }
            param_2 = *(int64_t *)(unaff_RDI + 0x180);
            uVar2 = (int)uVar3 + 1;
            uVar3 = (uint64_t)uVar2;
          } while (uVar2 < *(uint *)(lVar5 + 0x100 + param_2));
        }
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                      *(uint64_t *)(lVar5 + 0x110 + param_2),&unknown_var_9392_ptr,0x29b,1);
      }
      lVar1 = *(int64_t *)(lVar5 + 0x120 + param_2);
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_9392_ptr,0x29f,1);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x128;
    } while (iVar4 < *(int *)(unaff_RDI + 0x178));
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_9392_ptr,0x2a3,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ad162(uint64_t param_1,int64_t param_2)
void FUN_1807ad162(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  int unaff_EBP;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  lVar4 = 0;
  do {
    if (*(int64_t *)(lVar4 + 0x110 + param_2) != 0) {
      uVar3 = 0;
      if (*(int *)(lVar4 + 0x100 + param_2) != 0) {
        do {
          lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x110 + param_2) + 0x40 + uVar3 * 0x48);
          if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_9392_ptr,0x297,1);
          }
          param_2 = *(int64_t *)(unaff_RDI + 0x180);
          uVar2 = (int)uVar3 + 1;
          uVar3 = (uint64_t)uVar2;
        } while (uVar2 < *(uint *)(lVar4 + 0x100 + param_2));
      }
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(lVar4 + 0x110 + param_2)
                    ,&unknown_var_9392_ptr,0x29b,1);
    }
    lVar1 = *(int64_t *)(lVar4 + 0x120 + param_2);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_9392_ptr,0x29f,1);
    }
    unaff_EBP = unaff_EBP + 1;
    lVar4 = lVar4 + 0x128;
  } while (unaff_EBP < *(int *)(unaff_RDI + 0x178));
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_9392_ptr,0x2a3,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ad275(uint64_t param_1,uint64_t param_2)
void FUN_1807ad275(uint64_t param_1,uint64_t param_2)

{
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_9392_ptr,0x2a3,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807ad2aa(void)

{
  int64_t unaff_RDI;
  
  if (*(int64_t *)(unaff_RDI + 400) != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RDI + 400),
                  &unknown_var_9392_ptr,0x2a9,1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ad370(int64_t param_1)
void FUN_1807ad370(int64_t param_1)

{
  int iVar1;
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  int8_t auStack_28 [8];
  int8_t auStack_20 [4];
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  *(int32_t *)(param_1 + 0x28) = 3;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x110) = 0;
  *(int32_t *)(param_1 + 0x178) = 0;
  *(int32_t *)(param_1 + 0x188) = 0;
  uStack_38 = 0;
  iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_20,1,8);
  if ((iVar1 == 0) && (iVar1 = func_0x00018076b6b0(auStack_20,&unknown_var_9732_ptr,4), iVar1 == 0)) {
    uStack_38 = 0;
    iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_28,1);
    if ((iVar1 == 0) && (iVar1 = func_0x00018076b6b0(auStack_28,&unknown_var_9740_ptr,4), iVar1 == 0)) {
      *(int32_t *)(param_1 + 0x110) = 0;
      *(int32_t *)(param_1 + 0x18c) = 0;
      iVar1 = FUN_1807ad4b0(param_1,auStack_28,uStack_1c);
      if ((iVar1 == 0) && (0 < *(int *)(param_1 + 0x178))) {
        *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_1 + 0x188);
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





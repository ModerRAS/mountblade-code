/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction
#include "RenderingAdvancedManager_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_11_part047.c - 8 个函数
// 函数: void SystemCore_ac600(void)
void SystemCore_ac600(void)
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
  uint64_t local_var_20;
  uint64_t uVar10;
  int16_t local_buffer_40;
  int16_t local_buffer_44;
  uint local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int64_t *local_var_58;
  uint64_t local_var_60;
  int64_t *local_var_70;
  int64_t local_var_78;
  iVar5 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0,0);
  if ((((iVar5 == 0) &&
       (iVar5 = (**(code **)(*(int64_t *)*unaff_R12 + 0xb8))
                          ((int64_t *)*unaff_R12,*(uint64_t *)(unaff_RDI + 0x180)), -1 < iVar5))
      && (iVar5 = (*(code *)**(uint64_t **)*unaff_R12)
                            ((uint64_t *)*unaff_R12,&processed_var_8392_ptr,&local_buffer_00000070),
         plVar6 = local_var_70, -1 < iVar5)) &&
     ((uVar8 = (uint)unaff_RBX, local_buffer_48 = uVar8, local_var_58 = unaff_RBX,
      local_var_70 != (int64_t *)0x0 &&
      (iVar5 = (**(code **)(*local_var_70 + 0x40))(local_var_70,&local_buffer_00000048),
      -1 < iVar5)))) {
    *(uint *)(unaff_RDI + 0x188) = uVar8;
    if (uVar8 < local_buffer_48) {
      do {
        iVar5 = (**(code **)(*plVar6 + 0x48))
                          (plVar6,(uint64_t)unaff_RBX & 0xffffffff,&local_buffer_00000058);
        if (iVar5 < 0) goto LAB_1807ac5c4;
        local_buffer_40 = 0;
        iVar5 = (**(code **)(*local_var_58 + 0x20))(local_var_58,&local_buffer_00000040);
        if ((iVar5 < 0) ||
           (iVar5 = (**(code **)(*local_var_58 + 0x18))(local_var_58,&local_buffer_00000078),
           iVar5 < 0)) goto LAB_1807ac5c4;
        if ((local_var_78 == 0x10000073647561) &&
           (*(int64_t *)(unaff_RBP + -0x80) == 0x719b3800aa000080)) {
          *(int16_t *)(unaff_RDI + 0x188) = local_buffer_40;
        }
        else if ((local_var_78 == 0x10000073646976) &&
                (*(int64_t *)(unaff_RBP + -0x80) == 0x719b3800aa000080)) {
          *(int16_t *)(unaff_RDI + 0x18a) = local_buffer_40;
        }
        if (local_var_58 != (int64_t *)0x0) {
          (**(code **)(*local_var_58 + 0x10))();
        }
        uVar8 = (int)unaff_RBX + 1;
        unaff_RBX = (int64_t *)(uint64_t)uVar8;
      } while (uVar8 < local_buffer_48);
    }
    (**(code **)(*local_var_70 + 0x10))();
    iVar5 = (**(code **)(*(int64_t *)*unaff_R12 + 0x28))((int64_t *)*unaff_R12,0,0);
    if (((-1 < iVar5) &&
        (iVar5 = (**(code **)(*(int64_t *)*unaff_R12 + 0x40))
                           ((int64_t *)*unaff_R12,1,unaff_RDI + 0x188,&local_buffer_00000068), -1 < iVar5
        )) && (iVar5 = (**(code **)(*(int64_t *)*unaff_R12 + 0x50))
                                 ((int64_t *)*unaff_R12,*(int16_t *)(unaff_RDI + 0x188),0),
              -1 < iVar5)) {
      (**(code **)(*(int64_t *)*unaff_R12 + 0x70))
                ((int64_t *)*unaff_R12,(int64_t)&local_buffer_00000060 + 4);
      if (local_var_60._4_4_ < 1) {
        iVar5 = (*(code *)**(uint64_t **)*unaff_R12)
                          ((uint64_t *)*unaff_R12,&processed_var_8376_ptr,&local_buffer_00000058);
        if (-1 < iVar5) {
          local_buffer_40 = 0;
          uVar10 = 0;
          iVar5 = (**(code **)(*local_var_58 + 0x28))
                            (local_var_58,&local_buffer_00000040,&processed_var_9296_ptr,&local_buffer_00000050,0);
          if ((-1 < iVar5) &&
             (plVar6 = (int64_t *)
                       SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),local_buffer_44,
                                     &processed_var_9168_ptr,0x199,uVar10 & 0xffffffff00000000),
             plVar6 != (int64_t *)0x0)) {
            iVar5 = (**(code **)(*local_var_58 + 0x28))
                              (local_var_58,&local_buffer_00000040,&processed_var_9296_ptr,&local_buffer_00000050,
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
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&processed_var_9168_ptr,0x1a9,1);
            }
            uVar9 = 0x1a2;
LAB_1807ac9fe:
// WARNING: Subroutine does not return
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&processed_var_9168_ptr,uVar9,1);
          }
        }
      }
      else {
        iVar5 = (**(code **)(*(int64_t *)*unaff_R12 + 0x90))
                          ((int64_t *)*unaff_R12,0,0,&local_buffer_00000048);
        if (-1 < iVar5) {
          iVar5 = (**(code **)(*(int64_t *)CONCAT44(local_buffer_4c,local_buffer_48)
                              + 0x20))
                            ((int64_t *)CONCAT44(local_buffer_4c,local_buffer_48),0,
                             &local_buffer_00000050);
          if (-1 < iVar5) {
            plVar6 = (int64_t *)
                     SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),local_buffer_50,
                                   &processed_var_9168_ptr,0x152,local_var_20 & 0xffffffff00000000);
            plVar4 = (int64_t *)CONCAT44(local_buffer_4c,local_buffer_48);
            if (plVar6 == (int64_t *)0x0) {
              (**(code **)(*plVar4 + 0x10))();
              goto LAB_1807ac5c4;
            }
            iVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,plVar6,&local_buffer_00000050);
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
                                  CONCAT44(local_buffer_4c,local_buffer_48) + 0x10))()
                    ;
                    uVar9 = 0x16f;
                    goto LAB_1807ac9fe;
                  }
                  *(int32_t *)(lVar2 + 8) = 4;
                }
                *(uint *)(*(int64_t *)(unaff_RDI + 8) + 0xc) = (uint)*(ushort *)(lVar7 + 2);
                *(int32_t *)(*(int64_t *)(unaff_RDI + 8) + 0x10) = *(int32_t *)(lVar7 + 4);
              }
              (**(code **)(*(int64_t *)CONCAT44(local_buffer_4c,local_buffer_48) +
                          0x10))();
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&processed_var_9168_ptr,0x178,1);
            }
          }
          (**(code **)(*(int64_t *)CONCAT44(local_buffer_4c,local_buffer_48) + 0x10))
                    ();
        }
      }
    }
  }
LAB_1807ac5c4:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1a0) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Type propagation algorithm not settling
uint64_t SystemCore_acd20(int64_t param_1,uint64_t param_2,uint64_t param_3,int *param_4)
{
  uint uVar1;
  int iVar2;
  int16_t astack_special_x_8 [4];
  uint astack_special_x_20 [2];
  int32_t local_var_48;
  int32_t local_var_44;
  int64_t *plStack_40;
  int64_t alStack_38 [2];
  plStack_40 = (int64_t *)0x0;
  alStack_38[1] = 0;
  local_var_44 = 0;
  local_var_48 = 0;
  astack_special_x_8[0] = 0;
  alStack_38[0] = 0;
  astack_special_x_20[0] = 0;
  *param_4 = 0;
  while( true ) {
    iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x178) + 0x38))
                      (*(int64_t **)(param_1 + 0x178),*(int16_t *)(param_1 + 0x188),&plStack_40,
                       param_1 + 400,alStack_38 + 1,&local_var_44,&local_var_48,astack_special_x_8);
    if (iVar2 < 0) {
      if (iVar2 != -0x3ff2f431) {
        return 0xd;
      }
      return 0x10;
    }
    (**(code **)(*plStack_40 + 0x38))(plStack_40,alStack_38,astack_special_x_20);
    uVar1 = *(uint *)(param_1 + 0x1a8);
    if (uVar1 < astack_special_x_20[0]) break;
    *(uint *)(param_1 + 0x1a8) = uVar1 - astack_special_x_20[0];
    (**(code **)(*plStack_40 + 0x10))();
    if (*param_4 != 0) {
      return 0;
    }
  }
// WARNING: Subroutine does not return
  memcpy(param_2,(uint64_t)uVar1 + alStack_38[0],astack_special_x_20[0] - uVar1);
}
uint64_t SystemCore_acec0(int64_t param_1,uint64_t param_2,uint param_3)
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
uint64_t SystemCore_acefa(int64_t param_1)
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
uint64_t SystemCore_acffd(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_ad010(int64_t param_1,uint64_t param_2,int64_t *param_3)
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
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_9168_ptr,0x3a6,1);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ad03f(uint64_t param_1,uint64_t param_2)
void SystemCore_ad03f(uint64_t param_1,uint64_t param_2)
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
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_9168_ptr,0x3a6,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ad051(void)
void SystemCore_ad051(void)
{
  int64_t unaff_RBX;
  int unaff_ESI;
  int64_t *unaff_R14;
  int32_t local_buffer_28;
  int8_t local_buffer_30;
  do {
    local_buffer_30 = 1;
    local_buffer_28 = 0xffffffff;
    (**(code **)(*unaff_R14 + 0x108))();
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < *(int *)(unaff_RBX + 0x19c));
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(unaff_RBX + 0x1a0),
                &processed_var_9168_ptr,0x3a6,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ad0b2(uint64_t param_1,uint64_t param_2)
void SystemCore_ad0b2(uint64_t param_1,uint64_t param_2)
{
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_9168_ptr,0x3a6,1);
}
uint64_t SystemCore_ad0e8(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_ad100(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  if (*(int64_t *)(param_1 + 8) != 0) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 8),&processed_var_9392_ptr,
                  0x282,1);
  }
  lVar2 = *(int64_t *)(param_1 + 0x180);
  if (lVar2 == 0) {
    if (*(int64_t *)(param_1 + 400) == 0) {
      return 0;
    }
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 400),
                  &processed_var_9392_ptr,0x2a9,1);
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
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&processed_var_9392_ptr,0x297,1);
            }
            lVar2 = *(int64_t *)(param_1 + 0x180);
            uVar3 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar3;
          } while (uVar3 < *(uint *)(lVar6 + 0x100 + lVar2));
        }
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(lVar6 + 0x110 + lVar2)
                      ,&processed_var_9392_ptr,0x29b,1);
      }
      lVar1 = *(int64_t *)(lVar6 + 0x120 + lVar2);
      if (lVar1 != 0) {
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_9392_ptr,0x29f,1);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x128;
    } while (iVar5 < *(int *)(param_1 + 0x178));
  }
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&processed_var_9392_ptr,0x2a3,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ad14f(uint64_t param_1,int64_t param_2)
void SystemCore_ad14f(uint64_t param_1,int64_t param_2)
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
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_9392_ptr,0x297,1);
            }
            param_2 = *(int64_t *)(unaff_RDI + 0x180);
            uVar2 = (int)uVar3 + 1;
            uVar3 = (uint64_t)uVar2;
          } while (uVar2 < *(uint *)(lVar5 + 0x100 + param_2));
        }
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                      *(uint64_t *)(lVar5 + 0x110 + param_2),&processed_var_9392_ptr,0x29b,1);
      }
      lVar1 = *(int64_t *)(lVar5 + 0x120 + param_2);
      if (lVar1 != 0) {
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_9392_ptr,0x29f,1);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x128;
    } while (iVar4 < *(int *)(unaff_RDI + 0x178));
  }
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_9392_ptr,0x2a3,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ad162(uint64_t param_1,int64_t param_2)
void SystemCore_ad162(uint64_t param_1,int64_t param_2)
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
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_9392_ptr,0x297,1);
          }
          param_2 = *(int64_t *)(unaff_RDI + 0x180);
          uVar2 = (int)uVar3 + 1;
          uVar3 = (uint64_t)uVar2;
        } while (uVar2 < *(uint *)(lVar4 + 0x100 + param_2));
      }
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(lVar4 + 0x110 + param_2)
                    ,&processed_var_9392_ptr,0x29b,1);
    }
    lVar1 = *(int64_t *)(lVar4 + 0x120 + param_2);
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&processed_var_9392_ptr,0x29f,1);
    }
    unaff_EBP = unaff_EBP + 1;
    lVar4 = lVar4 + 0x128;
  } while (unaff_EBP < *(int *)(unaff_RDI + 0x178));
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_9392_ptr,0x2a3,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ad275(uint64_t param_1,uint64_t param_2)
void SystemCore_ad275(uint64_t param_1,uint64_t param_2)
{
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_9392_ptr,0x2a3,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_ad2aa(void)
{
  int64_t unaff_RDI;
  if (*(int64_t *)(unaff_RDI + 400) != 0) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(unaff_RDI + 400),
                  &processed_var_9392_ptr,0x2a9,1);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ad370(int64_t param_1)
void SystemCore_ad370(int64_t param_1)
{
  int iVar1;
  int8_t stack_array_58 [32];
  uint64_t local_var_38;
  int8_t stack_array_28 [8];
  int8_t stack_array_20 [4];
  int32_t local_var_1c;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_58;
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
  local_var_38 = 0;
  iVar1 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_20,1,8);
  if ((iVar1 == 0) && (iVar1 = Function_3be2b034(stack_array_20,&processed_var_9732_ptr,4), iVar1 == 0)) {
    local_var_38 = 0;
    iVar1 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_28,1);
    if ((iVar1 == 0) && (iVar1 = Function_3be2b034(stack_array_28,&processed_var_9740_ptr,4), iVar1 == 0)) {
      *(int32_t *)(param_1 + 0x110) = 0;
      *(int32_t *)(param_1 + 0x18c) = 0;
      iVar1 = SystemCore_ad4b0(param_1,stack_array_28,local_var_1c);
      if ((iVar1 == 0) && (0 < *(int *)(param_1 + 0x178))) {
        *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_1 + 0x188);
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
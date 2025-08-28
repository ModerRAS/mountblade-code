#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* UISystem_Controller - UISystem_Controller */
#define UISystem_Controller UISystem_Controller
/* 函数别名定义: SystemInputManager */
#define SystemInputManager SystemInputManager
/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
/* 函数别名定义: DataCompressor */
#define DataCompressor DataCompressor
// 99_part_12_part087.c - 7 个函数
// 函数: void function_8a3f12(int32_t param_1)
void function_8a3f12(int32_t param_1)
{
  uint64_t *puVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  uint64_t uVar6;
  uint64_t uVar7;
  int32_t *puVar8;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  int32_t uVar9;
  int32_t extraout_XMM0_Da_11;
  int32_t extraout_XMM0_Da_12;
  int32_t extraout_XMM0_Da_13;
  int32_t extraout_XMM0_Da_14;
  int32_t extraout_XMM0_Da_15;
  int32_t extraout_XMM0_Da_16;
  if (in_EAX == 0) {
    uVar7 = *(uint64_t *)(unaff_RDI + 0x80);
    uVar9 = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 0;
    while( true ) {
      if ((uVar7 < *(uint64_t *)(unaff_RDI + 0x80)) ||
         ((int64_t)*(int *)(unaff_RDI + 0x88) * 0x10 + *(uint64_t *)(unaff_RDI + 0x80) <= uVar7))
      goto LAB_1808a3fa4;
      iVar3 = UltraHighFreq_ResourceLoader1(param_1,uVar9);
      if (iVar3 != 0) {
        return;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) break;
      iVar3 = SystemCleanupProcessor(*unaff_RBX,uVar7);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = UISystem_Controller(extraout_XMM0_Da_00,unaff_RBP + -0x30);
      if (iVar3 != 0) {
        return;
      }
      uVar9 = *(int32_t *)(unaff_RBP + -0x30);
      uVar7 = uVar7 + 0x10;
      param_1 = extraout_XMM0_Da_01;
    }
    param_1 = extraout_XMM0_Da;
    if (unaff_ESI != 0) {
      return;
    }
LAB_1808a3fa4:
    if ((((((0x3b < *(uint *)(unaff_RBX + 8)) ||
           (iVar3 = function_8de620(), param_1 = extraout_XMM0_Da_02, iVar3 == 0)) &&
          (iVar3 = function_8a68e0(param_1,unaff_RDI + 0xb0,0,0), iVar3 == 0)) &&
         ((iVar3 = function_8a6d00(extraout_XMM0_Da_03,unaff_RDI + 0xc0,0,0), iVar3 == 0 &&
          (iVar3 = UISystem_LayoutProcessor(extraout_XMM0_Da_04,unaff_RDI + 0xe0,0x30), iVar3 == 0)))) &&
        ((iVar3 = function_8a7bf0(extraout_XMM0_Da_05,unaff_RDI + 0xe8,0x34), iVar3 == 0 &&
         ((iVar3 = UISystem_LayoutProcessor(extraout_XMM0_Da_06,unaff_RDI + 0xec,0x4e), iVar3 == 0 &&
          (iVar3 = function_8a7bf0(extraout_XMM0_Da_07,unaff_RDI + 0xf8,0x61), iVar3 == 0)))))) &&
       ((uVar9 = extraout_XMM0_Da_08, *(uint *)(unaff_RBX + 8) < 0x6b ||
        (iVar3 = function_8a7b00(extraout_XMM0_Da_08,unaff_RDI + 0x70), uVar9 = extraout_XMM0_Da_09,
        iVar3 == 0)))) {
      if (0x75 < *(uint *)(unaff_RBX + 8)) {
        uVar2 = *(int *)(unaff_RDI + 0x98) * 2;
        puVar1 = *(uint64_t **)(*unaff_RBX + 8);
        if ((uVar2 | 1) < 0x8000) {
          *(short *)(unaff_RBP + 0x38) = (short)(uVar2 | 1);
          uVar6 = 2;
          lVar5 = unaff_RBP + 0x38;
        }
        else {
          uVar6 = 4;
          lVar5 = unaff_RBP + -0x2c;
          *(uint *)(unaff_RBP + -0x2c) = (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff | 1;
        }
        iVar3 = (**(code **)*puVar1)(puVar1,lVar5,uVar6);
        if (iVar3 != 0) {
          return;
        }
        puVar8 = *(int32_t **)(unaff_RDI + 0x90);
        uVar4 = 0;
        *(int32_t *)(unaff_RBP + -0x30) = 0;
        uVar9 = extraout_XMM0_Da_10;
        while( true ) {
          if ((puVar8 < *(int32_t **)(unaff_RDI + 0x90)) ||
             (*(int32_t **)(unaff_RDI + 0x90) + (int64_t)*(int *)(unaff_RDI + 0x98) * 2 <=
              puVar8)) goto LAB_1808a41ae;
          iVar3 = UltraHighFreq_ResourceLoader1(uVar9,uVar4);
          if (iVar3 != 0) {
            return;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) break;
          lVar5 = *unaff_RBX;
          *(int32_t *)(unaff_RBP + -0x28) = *puVar8;
          puVar1 = *(uint64_t **)(lVar5 + 8);
          iVar3 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x28,4);
          if (iVar3 != 0) {
            return;
          }
          puVar1 = *(uint64_t **)(lVar5 + 8);
          *(int32_t *)(unaff_RBP + -0x24) = puVar8[1];
          iVar3 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x24,4);
          if (iVar3 != 0) {
            return;
          }
          iVar3 = UISystem_Controller(extraout_XMM0_Da_12,unaff_RBP + -0x30);
          if (iVar3 != 0) {
            return;
          }
          uVar4 = *(int32_t *)(unaff_RBP + -0x30);
          puVar8 = puVar8 + 2;
          uVar9 = extraout_XMM0_Da_13;
        }
        uVar9 = extraout_XMM0_Da_11;
        if (unaff_ESI != 0) {
          return;
        }
      }
LAB_1808a41ae:
      if ((*(uint *)(unaff_RBX + 8) < 0x83) ||
         (iVar3 = function_8a7b00(uVar9,unaff_RDI + 0xa0), uVar9 = extraout_XMM0_Da_14, iVar3 == 0)) {
        if (*(uint *)(unaff_RBX + 8) < 0x89) {
          unaff_ESI = 0;
        }
        else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          lVar5 = *unaff_RBX;
          *(int32_t *)(unaff_RBP + 0x38) = *(int32_t *)(unaff_RDI + 0xf0);
          unaff_ESI = (**(code **)**(uint64_t **)(lVar5 + 8))
                                (*(uint64_t **)(lVar5 + 8),unaff_RBP + 0x38,4);
          uVar9 = extraout_XMM0_Da_15;
        }
        if ((unaff_ESI == 0) && (iVar3 = UISystem_LayoutProcessor(uVar9,unaff_RDI + 0xf4,0x89), iVar3 == 0)) {
// WARNING: Subroutine does not return
          SystemThreadManager(extraout_XMM0_Da_16,unaff_RBP + -0x20);
        }
      }
    }
  }
  return;
}
uint64_t function_8a407e(int32_t param_1)
{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_ESI;
  int64_t unaff_RDI;
  uint64_t uVar6;
  int32_t *puVar7;
  bool in_CF;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  if (!in_CF) {
    uVar2 = *(int *)(unaff_RDI + 0x98) * 2;
    puVar1 = *(uint64_t **)(*unaff_RBX + 8);
    if ((uVar2 | 1) < 0x8000) {
      *(short *)(unaff_RBP + 0x38) = (short)(uVar2 | 1);
      uVar6 = 2;
      lVar5 = unaff_RBP + 0x38;
    }
    else {
      uVar6 = 4;
      lVar5 = unaff_RBP + -0x2c;
      *(uint *)(unaff_RBP + -0x2c) = (uVar2 & 0xffffc000 | 0x4000) * 2 | uVar2 & 0x7fff | 1;
    }
    uVar3 = (**(code **)*puVar1)(puVar1,lVar5,uVar6);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    puVar7 = *(int32_t **)(unaff_RDI + 0x90);
    uVar4 = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 0;
    param_1 = extraout_XMM0_Da;
    while( true ) {
      if ((puVar7 < *(int32_t **)(unaff_RDI + 0x90)) ||
         (*(int32_t **)(unaff_RDI + 0x90) + (int64_t)*(int *)(unaff_RDI + 0x98) * 2 <= puVar7))
      goto LAB_1808a41ae;
      uVar3 = UltraHighFreq_ResourceLoader1(param_1,uVar4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) break;
      lVar5 = *unaff_RBX;
      *(int32_t *)(unaff_RBP + -0x28) = *puVar7;
      puVar1 = *(uint64_t **)(lVar5 + 8);
      uVar3 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x28,4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      puVar1 = *(uint64_t **)(lVar5 + 8);
      *(int32_t *)(unaff_RBP + -0x24) = puVar7[1];
      uVar3 = (**(code **)*puVar1)(puVar1,unaff_RBP + -0x24,4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = UISystem_Controller(extraout_XMM0_Da_01,unaff_RBP + -0x30);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar4 = *(int32_t *)(unaff_RBP + -0x30);
      puVar7 = puVar7 + 2;
      param_1 = extraout_XMM0_Da_02;
    }
    param_1 = extraout_XMM0_Da_00;
    if (unaff_ESI != 0) {
      return (uint64_t)unaff_ESI;
    }
  }
LAB_1808a41ae:
  if ((0x82 < *(uint *)(unaff_RBX + 8)) &&
     (uVar3 = function_8a7b00(param_1,unaff_RDI + 0xa0), param_1 = extraout_XMM0_Da_03,
     (int)uVar3 != 0)) {
    return uVar3;
  }
  if (*(uint *)(unaff_RBX + 8) < 0x89) {
    unaff_ESI = 0;
  }
  else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    lVar5 = *unaff_RBX;
    *(int32_t *)(unaff_RBP + 0x38) = *(int32_t *)(unaff_RDI + 0xf0);
    unaff_ESI = (**(code **)**(uint64_t **)(lVar5 + 8))
                          (*(uint64_t **)(lVar5 + 8),unaff_RBP + 0x38,4);
    param_1 = extraout_XMM0_Da_04;
  }
  if (unaff_ESI == 0) {
    uVar3 = UISystem_LayoutProcessor(param_1,unaff_RDI + 0xf4,0x89);
    if ((int)uVar3 == 0) {
// WARNING: Subroutine does not return
      SystemThreadManager(extraout_XMM0_Da_05,unaff_RBP + -0x20);
    }
  }
  else {
    uVar3 = (uint64_t)unaff_ESI;
  }
  return uVar3;
}
// 函数: void function_8a423b(void)
void function_8a423b(void)
{
  return;
}
// 函数: void function_8a4243(void)
void function_8a4243(void)
{
  return;
}
// 函数: void function_8a424b(void)
void function_8a424b(void)
{
  return;
}
// WARNING: Type propagation algorithm not settling
uint64_t function_8a4260(int64_t *param_1,int32_t param_2,int64_t *param_3)
{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t astack_special_x_18 [4];
  int8_t stack_array_38 [32];
  if (*param_3 == 0) {
    return 0x1c;
  }
  uVar5 = DataCompressor0(param_1,stack_array_38,0,param_2,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((0x54 < uVar1) && (uVar5 = UltraHighFreq_ResourceLoader1(param_1,0), (int)uVar5 != 0)) {
    return uVar5;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemCleanupProcessor(*param_1,*param_3 + 0x10);
  if (uVar3 != 0) {
LAB_1808a430d:
    return (uint64_t)uVar3;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemCleanupProcessor(*param_1,*param_3 + 0x30);
  if (uVar3 != 0) goto LAB_1808a430d;
  uVar5 = UISystem_WindowManager(param_1,*param_3 + 0x40);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar5 = UISystem_WindowManager(param_1,*param_3 + 0x48);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar3 = 0;
  if ((0x54 < *(uint *)(param_1 + 8)) && (uVar3 = 0x1c, *(int *)(param_1[1] + 0x18) == 0)) {
    astack_special_x_18[0] = *(int32_t *)(*param_3 + 0x44);
    uVar3 = (**(code **)**(uint64_t **)(*param_1 + 8))
                      (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
  }
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (uVar1 < 0x55) {
    uVar5 = UltraHighFreq_ResourceLoader1(param_1,0);
    iVar4 = (int)uVar5;
  }
  else {
    uVar5 = UISystem_Controller(param_1,0);
    iVar4 = (int)uVar5;
  }
  if (iVar4 != 0) {
    return uVar5;
  }
  lVar2 = *param_3;
  iVar4 = *(int *)(lVar2 + 0x48);
  if (iVar4 == 0) {
    uVar5 = function_89ef40(lVar2,param_1);
    iVar4 = (int)uVar5;
  }
  else {
    if (iVar4 == 1) {
      if (*(uint *)(param_1 + 8) < 0x55) {
        if (*(int *)(param_1[1] + 0x18) == 0) {
          astack_special_x_18[0] = *(int32_t *)(lVar2 + 0x50);
          uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                            (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            astack_special_x_18[0] = *(int32_t *)(lVar2 + 0x54);
            goto LAB_1808a4579;
          }
          uVar5 = 0x1c;
        }
        else {
          uVar5 = 0x1c;
        }
      }
      else if (*(int *)(param_1[1] + 0x18) == 0) {
        astack_special_x_18[0] = *(int32_t *)(lVar2 + 0x58);
LAB_1808a4579:
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
LAB_1808a459c:
        if ((int)uVar5 == 0) goto LAB_1808a45b5;
      }
      else {
        uVar5 = 0x1c;
      }
    }
    else {
      if (iVar4 == 2) {
        uVar5 = function_89fd30(lVar2,param_1);
        iVar4 = (int)uVar5;
        goto joined_r0x0001808a450b;
      }
      if (iVar4 != 3) goto LAB_1808a45b5;
      if (*(int *)(param_1[1] + 0x18) == 0) {
        astack_special_x_18[0] = *(int32_t *)(lVar2 + 0x50);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) == 0) {
          astack_special_x_18[0] = *(int32_t *)(lVar2 + 0x54);
          uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                            (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            astack_special_x_18[0] = *(int32_t *)(lVar2 + 0x58);
            uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                              (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            if (*(int *)(param_1[1] + 0x18) == 0) {
              astack_special_x_18[0] = *(int32_t *)(lVar2 + 0x5c);
              uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                                (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
              if ((int)uVar5 != 0) {
                return uVar5;
              }
              uVar5 = NetworkSecurityManager(param_1,lVar2 + 0x60);
              if ((int)uVar5 != 0) {
                return uVar5;
              }
              uVar5 = NetworkSecurityManager(param_1,lVar2 + 100);
              goto LAB_1808a459c;
            }
            uVar5 = 0x1c;
          }
          else {
            uVar5 = 0x1c;
          }
        }
        else {
          uVar5 = 0x1c;
        }
      }
      else {
        uVar5 = 0x1c;
      }
    }
    iVar4 = (int)uVar5;
  }
joined_r0x0001808a450b:
  if (iVar4 != 0) {
    return uVar5;
  }
LAB_1808a45b5:
  if ((uVar1 < 0x55) && (uVar5 = UISystem_Controller(param_1,0), (int)uVar5 != 0)) {
    return uVar5;
  }
// WARNING: Subroutine does not return
  SystemThreadManager(param_1,stack_array_38);
}
uint64_t function_8a42a4(int32_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *unaff_RBX;
  uint unaff_EBP;
  int64_t *unaff_RSI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  int32_t extraout_XMM0_Da_11;
  int32_t extraout_XMM0_Da_12;
  int32_t extraout_XMM0_Da_13;
  int32_t uVar6;
  int32_t extraout_XMM0_Da_14;
  int32_t extraout_XMM0_Da_15;
  int32_t local_buffer_80;
  uVar1 = *(uint *)(unaff_RBX + 8);
  if ((0x54 < uVar1) && (uVar5 = UltraHighFreq_ResourceLoader1(param_1,0), (int)uVar5 != 0)) {
    return uVar5;
  }
  if (*(uint *)(unaff_RBX[1] + 0x18) != unaff_EBP) {
    return 0x1c;
  }
  uVar3 = SystemCleanupProcessor(*unaff_RBX,*unaff_RSI + 0x10);
  if (uVar3 != 0) {
LAB_1808a430d:
    return (uint64_t)uVar3;
  }
  if (*(uint *)(unaff_RBX[1] + 0x18) != unaff_EBP) {
    return 0x1c;
  }
  uVar3 = SystemCleanupProcessor(*unaff_RBX,*unaff_RSI + 0x30);
  if (uVar3 != 0) goto LAB_1808a430d;
  uVar5 = UISystem_WindowManager(extraout_XMM0_Da,*unaff_RSI + 0x40);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar5 = UISystem_WindowManager(extraout_XMM0_Da_00,*unaff_RSI + 0x48);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar6 = extraout_XMM0_Da_01;
  uVar3 = unaff_EBP;
  if ((0x54 < *(uint *)(unaff_RBX + 8)) &&
     (uVar3 = 0x1c, *(uint *)(unaff_RBX[1] + 0x18) == unaff_EBP)) {
    local_buffer_80 = *(int32_t *)(*unaff_RSI + 0x44);
    uVar3 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000080,4);
    uVar6 = extraout_XMM0_Da_02;
  }
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (uVar1 < 0x55) {
    uVar5 = UltraHighFreq_ResourceLoader1(uVar6,0);
    iVar4 = (int)uVar5;
    uVar6 = extraout_XMM0_Da_04;
  }
  else {
    uVar5 = UISystem_Controller(uVar6,0);
    iVar4 = (int)uVar5;
    uVar6 = extraout_XMM0_Da_03;
  }
  if (iVar4 != 0) {
    return uVar5;
  }
  lVar2 = *unaff_RSI;
  iVar4 = *(int *)(lVar2 + 0x48);
  if (iVar4 == 0) {
    uVar5 = function_89ef40(lVar2);
    iVar4 = (int)uVar5;
    uVar6 = extraout_XMM0_Da_14;
  }
  else {
    if (iVar4 == 1) {
      if (*(uint *)(unaff_RBX + 8) < 0x55) {
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          local_buffer_80 = *(int32_t *)(lVar2 + 0x50);
          uVar5 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                            (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000080,4);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            local_buffer_80 = *(int32_t *)(lVar2 + 0x54);
            goto LAB_1808a4579;
          }
          uVar5 = 0x1c;
          uVar6 = extraout_XMM0_Da_12;
        }
        else {
          uVar5 = 0x1c;
        }
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        local_buffer_80 = *(int32_t *)(lVar2 + 0x58);
LAB_1808a4579:
        uVar5 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000080,4);
        uVar6 = extraout_XMM0_Da_13;
LAB_1808a459c:
        if ((int)uVar5 == 0) goto LAB_1808a45b5;
      }
      else {
        uVar5 = 0x1c;
      }
    }
    else {
      if (iVar4 == 2) {
        uVar5 = function_89fd30(lVar2);
        iVar4 = (int)uVar5;
        uVar6 = extraout_XMM0_Da_11;
        goto joined_r0x0001808a450b;
      }
      if (iVar4 != 3) goto LAB_1808a45b5;
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        local_buffer_80 = *(int32_t *)(lVar2 + 0x50);
        uVar5 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000080,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          local_buffer_80 = *(int32_t *)(lVar2 + 0x54);
          uVar5 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                            (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000080,4);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            local_buffer_80 = *(int32_t *)(lVar2 + 0x58);
            uVar5 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                              (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000080,4);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              local_buffer_80 = *(int32_t *)(lVar2 + 0x5c);
              uVar5 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                                (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000080,4);
              if ((int)uVar5 != 0) {
                return uVar5;
              }
              uVar5 = NetworkSecurityManager(extraout_XMM0_Da_08,lVar2 + 0x60);
              if ((int)uVar5 != 0) {
                return uVar5;
              }
              uVar5 = NetworkSecurityManager(extraout_XMM0_Da_09,lVar2 + 100);
              uVar6 = extraout_XMM0_Da_10;
              goto LAB_1808a459c;
            }
            uVar5 = 0x1c;
            uVar6 = extraout_XMM0_Da_07;
          }
          else {
            uVar5 = 0x1c;
            uVar6 = extraout_XMM0_Da_06;
          }
        }
        else {
          uVar5 = 0x1c;
          uVar6 = extraout_XMM0_Da_05;
        }
      }
      else {
        uVar5 = 0x1c;
      }
    }
    iVar4 = (int)uVar5;
  }
joined_r0x0001808a450b:
  if (iVar4 != 0) {
    return uVar5;
  }
LAB_1808a45b5:
  if ((uVar1 < 0x55) &&
     (uVar5 = UISystem_Controller(uVar6,0), uVar6 = extraout_XMM0_Da_15, (int)uVar5 != 0)) {
    return uVar5;
  }
// WARNING: Subroutine does not return
  SystemThreadManager(uVar6,&local_buffer_00000030);
}
// 函数: void function_8a45db(void)
void function_8a45db(void)
{
  return;
}
uint64_t function_8a45f0(int64_t param_1,int64_t *param_2)
{
  uint64_t uVar1;
  int32_t astack_special_x_10 [6];
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  astack_special_x_10[0] = *(int32_t *)(param_1 + 0x40);
  uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))(*(uint64_t **)(*param_2 + 8),astack_special_x_10,4)
  ;
  if (((((int)uVar1 == 0) && (uVar1 = function_8a77c0(param_2,param_1,1,0), (int)uVar1 == 0)) &&
      (uVar1 = function_8a5c00(param_2,param_1 + 0x20,1,0), (int)uVar1 == 0)) &&
     (uVar1 = function_8a5c00(param_2,param_1 + 0x30,1,0), (int)uVar1 == 0)) {
    if (0x3d < *(uint *)(param_2 + 8)) {
      uVar1 = UISystem_WindowManager(param_2,param_1 + 0x44);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = UISystem_WindowManager(param_2,param_1 + 0x48);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = function_8a77c0(param_2,param_1 + 0x50,1,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = function_8a77c0(param_2,param_1 + 0x60,1,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x70);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    if ((0x7d < *(uint *)(param_2 + 8)) &&
       (uVar1 = function_8a77c0(param_2,param_1 + 0x10,1), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t function_8a4730(int64_t param_1,int64_t *param_2,int32_t param_3)
{
  uint uVar1;
  uint64_t uVar2;
  uint *puVar3;
  uint64_t uVar4;
  int16_t astack_special_x_20 [4];
  int32_t local_var_38;
  uint local_var_34;
  int8_t stack_array_30 [40];
  uVar2 = DataCompressor0(param_2,stack_array_30,0,param_3,0);
  if ((int)uVar2 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar2 == 0) {
      uVar1 = *(int *)(param_1 + 0x60) * 2;
      if ((uVar1 | 1) < 0x8000) {
        astack_special_x_20[0] = (int16_t)(uVar1 | 1);
        uVar2 = 2;
        puVar3 = (uint *)astack_special_x_20;
      }
      else {
        uVar2 = 4;
        local_var_34 = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff | 1;
        puVar3 = &local_var_34;
      }
      uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),puVar3,uVar2);
      if ((int)uVar2 == 0) {
        uVar4 = *(uint64_t *)(param_1 + 0x58);
        local_var_38 = 0;
        for (; (*(uint64_t *)(param_1 + 0x58) <= uVar4 &&
               (uVar4 < (int64_t)*(int *)(param_1 + 0x60) * 0x10 + *(uint64_t *)(param_1 + 0x58)))
            ; uVar4 = uVar4 + 0x10) {
          uVar2 = UltraHighFreq_ResourceLoader1(param_2,local_var_38);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(param_2[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar2 = SystemCleanupProcessor(*param_2,uVar4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = UISystem_Controller(param_2,&local_var_38);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
        }
        uVar2 = function_8a0670(param_1,param_2);
        if ((int)uVar2 == 0) {
// WARNING: Subroutine does not return
          SystemThreadManager(param_2,stack_array_30);
        }
      }
    }
  }
  return uVar2;
}
// 函数: void function_8a47f1(void)
void function_8a47f1(void)
{
  int in_EAX;
  int iVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar2;
  if (in_EAX == 0) {
    for (uVar2 = *(uint64_t *)(unaff_RSI + 0x58);
        (*(uint64_t *)(unaff_RSI + 0x58) <= uVar2 &&
        (uVar2 < (int64_t)*(int *)(unaff_RSI + 0x60) * 0x10 + *(uint64_t *)(unaff_RSI + 0x58)));
        uVar2 = uVar2 + 0x10) {
      iVar1 = UltraHighFreq_ResourceLoader1();
      if (iVar1 != 0) {
        return;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        return;
      }
      iVar1 = SystemCleanupProcessor(*unaff_RBX,uVar2);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = UISystem_Controller();
      if (iVar1 != 0) {
        return;
      }
    }
    iVar1 = function_8a0670();
    if (iVar1 == 0) {
// WARNING: Subroutine does not return
      SystemThreadManager();
    }
  }
  return;
}
// 函数: void function_8a488e(void)
void function_8a488e(void)
{
  return;
}
uint64_t function_8a48b0(int64_t param_1,int64_t param_2,int32_t param_3)
{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  int aiStack_58 [2];
  uint64_t local_var_50;
  int8_t stack_array_48 [32];
  int8_t stack_array_28 [32];
  uVar2 = DataFlowProcessor(param_1,stack_array_28,1,param_3);
  if ((int)uVar2 == 0) {
    iVar4 = 0;
    aiStack_58[0] = 0;
    uVar1 = SystemCore_EncryptionManager(param_1,aiStack_58);
    if (aiStack_58[0] < 0) {
      uVar2 = 0xd;
    }
    else {
      uVar3 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_58[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar3) - uVar3)) ||
         (uVar2 = RenderingTextureManager0(param_2,aiStack_58[0]), (int)uVar2 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          if (0 < aiStack_58[0]) {
            do {
              local_var_50 = 0;
              if (0x54 < *(uint *)(param_1 + 0x40)) {
                uVar2 = DataFlowProcessor(param_1,stack_array_48,1,0x55444f4d);
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
                uVar2 = function_8a33c0(param_1,0x42444f4d,&local_var_50);
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
                uVar2 = function_89d250(local_var_50,param_1);
                if ((int)uVar2 != 0) {
                  return uVar2;
                }
// WARNING: Subroutine does not return
                AdvancedSystemManager(param_1,stack_array_48);
              }
              uVar2 = function_8a33c0(param_1,0x55444f4d,&local_var_50);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              uVar2 = DataStreamProcessor(param_2,&local_var_50);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < aiStack_58[0]);
          }
        }
// WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,stack_array_28);
      }
    }
  }
  return uVar2;
}
// WARNING: Removing unreachable block (ram,0x0001808a4950)
// WARNING: Removing unreachable block (ram,0x0001808a495e)
// WARNING: Removing unreachable block (ram,0x0001808a4978)
// WARNING: Removing unreachable block (ram,0x0001808a498e)
// WARNING: Removing unreachable block (ram,0x0001808a499f)
// WARNING: Removing unreachable block (ram,0x0001808a49b2)
// WARNING: Removing unreachable block (ram,0x0001808a49c5)
// WARNING: Removing unreachable block (ram,0x0001808a49dc)
// WARNING: Removing unreachable block (ram,0x0001808a4908)
uint64_t function_8a48db(void)
{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  int64_t unaff_RSI;
  uVar1 = SystemCore_EncryptionManager();
  uVar3 = (int)*(uint *)(unaff_RSI + 0xc) >> 0x1f;
  if ((-1 < (int)((*(uint *)(unaff_RSI + 0xc) ^ uVar3) - uVar3)) ||
     (uVar2 = RenderingTextureManager0(), (int)uVar2 == 0)) {
    if ((uVar1 == 0x12) || (uVar1 == 0)) {
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
    uVar2 = (uint64_t)uVar1;
  }
  return uVar2;
}
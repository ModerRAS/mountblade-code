#include "SystemDataAdvancedController_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part055.c - 9 个函数
// 函数: void NetworkProtocol_cc546(void)
void NetworkProtocol_cc546(void)
{
  int8_t auVar1 [16];
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int8_t in_AL;
  char cVar5;
  char cVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  int64_t *plVar11;
  int64_t *unaff_R12;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t uVar12;
  *(int8_t *)(unaff_RBP + -0x39) = in_AL;
  uVar8 = (**(code **)*unaff_R12)();
  cVar5 = Function_649b67ea(extraout_XMM0_Da,uVar8);
  if (cVar5 == '\0') {
    lVar9 = (**(code **)*unaff_R12)();
    if ((((*(int *)(lVar9 + 0x70) != 0) || (*(int *)(lVar9 + 0x74) != 0)) ||
        (*(int *)(lVar9 + 0x78) != 0)) ||
       (uVar12 = extraout_XMM0_Da_02, *(int *)(lVar9 + 0x7c) != 0)) {
      lVar9 = (**(code **)*unaff_R12)();
      plVar11 = unaff_RSI + 0x97;
      if (unaff_RSI == (uint64_t *)0xffffffffffffff08) {
        plVar11 = (int64_t *)0x0;
      }
      uVar12 = extraout_XMM0_Da_03;
      if (plVar11 != (int64_t *)0x0) {
        if (((*(int *)((int64_t)plVar11 + 0x24) != 0) && ((int)plVar11[1] != 0)) &&
           (iVar7 = *(int *)(*plVar11 +
                            (int64_t)
                            (int)((*(uint *)(lVar9 + 0x7c) ^ *(uint *)(lVar9 + 0x78) ^
                                   *(uint *)(lVar9 + 0x74) ^ *(uint *)(lVar9 + 0x70)) &
                                 (int)plVar11[1] - 1U) * 4), iVar7 != -1)) {
          lVar2 = plVar11[2];
          do {
            lVar10 = (int64_t)iVar7;
            if ((*(int64_t *)(lVar2 + lVar10 * 0x18) == *(int64_t *)(lVar9 + 0x70)) &&
               (*(int64_t *)(lVar2 + 8 + lVar10 * 0x18) == *(int64_t *)(lVar9 + 0x78)))
            goto LAB_1808cc7cb;
            iVar7 = *(int *)(lVar2 + 0x10 + lVar10 * 0x18);
          } while (iVar7 != -1);
        }
        iVar7 = -1;
LAB_1808cc7cb:
        if (iVar7 != -1) {
          iVar7 = NetworkProtocol_cba60();
          uVar12 = extraout_XMM0_Da_04;
          goto joined_r0x0001808cc7da;
        }
      }
    }
  }
  else {
    if (unaff_R12[0x15] != 0) {
      lVar9 = (**(code **)*unaff_R12)();
      auVar1 = *(int8_t (*) [16])(lVar9 + 0x40);
      *(int8_t (*) [16])(unaff_RBP + -0x31) = auVar1;
      lVar9 = *(int64_t *)(unaff_RBP + -0x29);
      if ((((auVar1._0_4_ == 0) && (auVar1._4_4_ == 0)) && ((int)lVar9 == 0)) &&
         ((int)((uint64_t)lVar9 >> 0x20) == 0)) goto LAB_1808cc8f3;
      lVar2 = *(int64_t *)(unaff_R12[0x15] + 0x10);
      uVar8 = *(uint64_t *)(unaff_R12[0x15] + 0x18);
      *(int64_t *)(unaff_RBP + -0x19) = lVar2;
      *(uint64_t *)(unaff_RBP + -0x11) = uVar8;
      if ((auVar1._0_8_ != lVar2) || (lVar9 != *(int64_t *)(unaff_RBP + -0x11))) {
        lVar9 = (**(code **)(*(int64_t *)*unaff_RSI + 0x150))
                          ((int64_t *)*unaff_RSI,unaff_RBP + -0x31,1);
        if (lVar9 == 0) {
// WARNING: Subroutine does not return
          SystemDataValidator(unaff_RBP + -9,0x27,&processed_var_8960_ptr,*(int32_t *)(unaff_RBP + -0x31),
                        *(int16_t *)(unaff_RBP + -0x2d));
        }
        unaff_R12[0x15] = lVar9;
        if ((lVar9 == 0) ||
           ((((lVar9 = (**(code **)(*unaff_R12 + 0x30))(), *(int *)(unaff_RBP + -0x31) == 0 &&
              (*(int *)(unaff_RBP + -0x2d) == 0)) &&
             ((*(int *)(unaff_RBP + -0x29) == 0 && (*(int *)(unaff_RBP + -0x25) == 0)))) ||
            ((lVar9 == 0 || (lVar9 = *(int64_t *)(lVar9 + 0x18), lVar9 == 0))))))
        goto LAB_1808cc8f3;
        *(uint64_t *)(unaff_RBP + -0x19) = 0;
        iVar7 = NetworkProtocol_60650(lVar9,unaff_RBP + -0x31,unaff_RBP + -0x19);
        if ((iVar7 != 0) ||
           (iVar7 = (**(code **)(*unaff_R12 + 0x120))
                              (extraout_XMM0_Da_00,*(uint64_t *)(unaff_RBP + -0x19)), iVar7 != 0))
        goto LAB_1808cc8f3;
        *(int8_t *)(unaff_RBP + -0x39) = 1;
      }
    }
    iVar7 = NetworkProtocol_cba60();
    uVar12 = extraout_XMM0_Da_01;
joined_r0x0001808cc7da:
    if (iVar7 != 0) goto LAB_1808cc8f3;
  }
  lVar9 = unaff_R12[0x15];
  if (lVar9 != 0) {
    uVar12 = *(int32_t *)(lVar9 + 0x14);
    uVar3 = *(int32_t *)(lVar9 + 0x18);
    uVar4 = *(int32_t *)(lVar9 + 0x1c);
    plVar11 = (int64_t *)*unaff_RSI;
    *(int32_t *)(unaff_RBP + -0x31) = *(int32_t *)(lVar9 + 0x10);
    *(int32_t *)(unaff_RBP + -0x2d) = uVar12;
    *(int32_t *)(unaff_RBP + -0x29) = uVar3;
    *(int32_t *)(unaff_RBP + -0x25) = uVar4;
    lVar9 = (**(code **)(*plVar11 + 0x150))(plVar11,unaff_RBP + -0x31,1);
    if (lVar9 == 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(unaff_RBP + -9,0x27,&processed_var_8960_ptr,*(int32_t *)(unaff_RBP + -0x31),
                    *(int16_t *)(unaff_RBP + -0x2d));
    }
    unaff_R12[0x15] = lVar9;
    uVar12 = extraout_XMM0_Da_05;
  }
  cVar6 = Function_c54f8ddb(uVar12,lVar9);
  cVar5 = *(char *)(unaff_RBP + -0x39);
  if (cVar6 != '\0') {
    cVar5 = '\x01';
  }
  uVar12 = NetworkProtocol_c8f30(extraout_XMM0_Da_06,unaff_R12 + 0x16);
  cVar6 = Function_649b67ea(uVar12,unaff_R12[0x16]);
  if ((cVar6 != '\0') || (cVar5 != '\0')) {
    NetworkProtocol_c9e60();
  }
LAB_1808cc8f3:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_cc7e0(int32_t param_1)
void NetworkProtocol_cc7e0(int32_t param_1)
{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  int64_t lVar5;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  char cVar6;
  int64_t unaff_R12;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar7;
  lVar5 = *(int64_t *)(unaff_R12 + 0xa8);
  if (lVar5 != 0) {
    uVar7 = *(int32_t *)(lVar5 + 0x14);
    uVar2 = *(int32_t *)(lVar5 + 0x18);
    uVar3 = *(int32_t *)(lVar5 + 0x1c);
    plVar1 = (int64_t *)*unaff_RSI;
    *(int32_t *)(unaff_RBP + -0x31) = *(int32_t *)(lVar5 + 0x10);
    *(int32_t *)(unaff_RBP + -0x2d) = uVar7;
    *(int32_t *)(unaff_RBP + -0x29) = uVar2;
    *(int32_t *)(unaff_RBP + -0x25) = uVar3;
    lVar5 = (**(code **)(*plVar1 + 0x150))(plVar1,unaff_RBP + -0x31,1);
    if (lVar5 == 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(unaff_RBP + -9,0x27,&processed_var_8960_ptr,*(int32_t *)(unaff_RBP + -0x31),
                    *(int16_t *)(unaff_RBP + -0x2d));
    }
    *(int64_t *)(unaff_R12 + 0xa8) = lVar5;
    param_1 = extraout_XMM0_Da;
  }
  cVar4 = Function_c54f8ddb(param_1,lVar5);
  cVar6 = *(char *)(unaff_RBP + -0x39);
  if (cVar4 != '\0') {
    cVar6 = '\x01';
  }
  uVar7 = NetworkProtocol_c8f30(extraout_XMM0_Da_00,unaff_R12 + 0xb0);
  cVar4 = Function_649b67ea(uVar7,*(uint64_t *)(unaff_R12 + 0xb0));
  if ((cVar4 != '\0') || (cVar6 != '\0')) {
    NetworkProtocol_c9e60();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_cc8e0(void)
void NetworkProtocol_cc8e0(void)
{
  int64_t unaff_RBP;
  char unaff_DIL;
  if (unaff_DIL != '\0') {
    NetworkProtocol_c9e60();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_AdvancedController(void)
void SystemCore_AdvancedController(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_cc930(uint64_t *param_1,uint64_t param_2)
void NetworkProtocol_cc930(uint64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int64_t *plVar7;
  uint uVar8;
  uint64_t uVar9;
  uint uVar10;
  int8_t stack_array_f8 [32];
  uint local_var_d8;
  uint local_var_d0;
  uint local_var_c8;
  uint local_var_c0;
  uint local_var_b8;
  uint local_var_b0;
  uint local_var_a8;
  uint local_var_a0;
  uint local_var_98;
  uint local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  int8_t stack_array_70 [16];
  int8_t stack_array_60 [40];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  lVar1 = param_1[0x1e];
  NetworkProtocol_c8f30(param_2,param_1 + 0x1e);
  NetworkProtocol_cc510(param_1,param_2);
  lVar2 = param_1[0x1e];
  if ((lVar1 == lVar2) || (*(short *)(lVar2 + 0xc) != 0xf)) {
LAB_1808cca15:
    iVar3 = (**(code **)(*(int64_t *)param_1[0x20] + 0x38))
                      ((int64_t *)param_1[0x20],param_2,&local_var_88);
    if (iVar3 != 0) goto LAB_1808cca49;
    iVar3 = NetworkProtocol_d0a30(param_1,local_var_88);
    if (iVar3 == 0) goto LAB_1808ccad0;
  }
  else {
    stack_array_70 = *(int8_t (*) [16])(lVar2 + 0xdc);
    local_var_88 = *(uint64_t *)(lVar1 + 0xdc);
    local_var_80 = *(int64_t *)(lVar1 + 0xe4);
    if ((local_var_88 == stack_array_70._0_8_) && (local_var_80 == stack_array_70._8_8_)) goto LAB_1808cca15;
    if ((((stack_array_70._0_4_ == 0) && (stack_array_70._4_4_ == 0)) && (stack_array_70._8_4_ == 0)) &&
       (stack_array_70._12_4_ == 0)) {
      iVar3 = NetworkProtocol_ec8e0(&local_var_88);
      uVar9 = local_var_88;
    }
    else {
      iVar3 = NetworkProtocol_bf8e0(param_1[0x2d],stack_array_70,&local_var_78);
      uVar9 = local_var_78;
    }
    if (iVar3 != 0) goto LAB_1808cca49;
    iVar3 = NetworkProtocol_d0a30(param_1,uVar9);
  }
  if (iVar3 == 0) {
LAB_1808ccad0:
    if (*(int *)(param_1 + 0x26) != *(int *)(param_1[0x1e] + 0xb0)) {
      *(int *)(param_1 + 0x26) = *(int *)(param_1[0x1e] + 0xb0);
      if (param_1[0x1f] != 0) {
        local_var_88 = 0;
        uVar4 = UtilitiesSystem_MathCalculator(param_1[0x1f],0,&local_var_88);
        if ((uVar4 < 0x1f) && ((0x40000009U >> (uVar4 & 0x1f) & 1) != 0)) {
          local_var_78 = 0;
          iVar3 = NetworkProtocol_cd780(param_1,local_var_88 - param_1[6],&local_var_78);
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_1 + 0x26);
            uVar4 = (uint)local_var_78;
            if (iVar3 == 0) {
              uVar6 = *(int *)((int64_t)param_1 + 0x15c) - 1;
              if (uVar6 <= uVar4) {
                uVar4 = uVar6;
              }
              uVar9 = (uint64_t)uVar4;
            }
            else {
              uVar6 = *(uint *)(param_1 + 0x2c);
              uVar9 = local_var_78;
              if (uVar6 < uVar4) {
                uVar10 = uVar4 - uVar6;
                uVar8 = (*(int *)((int64_t)param_1 + 0x164) - uVar6) + 1;
                if (iVar3 == -1) {
                  uVar9 = (uint64_t)(uVar6 + uVar10 % uVar8);
                }
                else {
                  uVar5 = (iVar3 + 1) * uVar8 + uVar6;
                  if (uVar5 < uVar4) {
                    iVar3 = 0;
                    uVar6 = *(int *)((int64_t)param_1 + 0x15c) - 1;
                    uVar4 = (*(int *)((int64_t)param_1 + 0x164) - uVar5) + uVar4;
                    if (uVar6 <= uVar4) {
                      uVar4 = uVar6;
                    }
                    uVar9 = (uint64_t)uVar4;
                  }
                  else {
                    iVar3 = iVar3 - uVar10 / uVar8;
                    uVar9 = (uint64_t)(uVar6 + uVar10 % uVar8);
                  }
                }
              }
            }
            uVar4 = SystemCore_3fd60(param_1[0x1f],iVar3);
            if ((uVar4 < 0x1f) && ((0x40000009U >> (uVar4 & 0x1f) & 1) != 0)) {
              uVar4 = SystemCore_3fe30(param_1[0x1f],uVar9 & 0xffffffff,2);
              if ((uVar4 < 0x1f) && ((0x40000009U >> (uVar4 & 0x1f) & 1) != 0)) {
                *(int *)((int64_t)param_1 + 0x13c) = (int)uVar9;
              }
            }
          }
        }
      }
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_f8);
  }
LAB_1808cca49:
  plVar7 = (int64_t *)(**(code **)*param_1)(param_1);
  (**(code **)(*plVar7 + 0x30))(plVar7,&local_var_88);
  local_var_90 = (uint)local_var_80._7_1_;
  local_var_98 = (uint)local_var_80._6_1_;
  local_var_a0 = (uint)local_var_80._5_1_;
  local_var_a8 = (uint)local_var_80._4_1_;
  local_var_b0 = (uint)local_var_80._3_1_;
  local_var_b8 = (uint)local_var_80._2_1_;
  local_var_c0 = (uint)local_var_80._1_1_;
  local_var_c8 = (uint)(byte)local_var_80;
  local_var_d0 = (uint)local_var_88._6_2_;
  local_var_d8 = (uint)local_var_88._4_2_;
// WARNING: Subroutine does not return
  SystemDataValidator(stack_array_60,0x27,&processed_var_8960_ptr,local_var_88 & 0xffffffff);
}
// 函数: void NetworkProtocol_cc962(uint64_t *param_1)
void NetworkProtocol_cc962(uint64_t *param_1)
{
  int8_t auVar1 [16];
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int64_t *plVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint uVar12;
  NetworkProtocol_c8f30();
  NetworkProtocol_cc510(param_1);
  lVar2 = param_1[0x1e];
  if ((unaff_RDI == lVar2) || (*(short *)(lVar2 + 0xc) != 0xf)) {
LAB_1808cca15:
    iVar4 = (**(code **)(*(int64_t *)param_1[0x20] + 0x38))();
    if (iVar4 != 0) goto LAB_1808cca49;
    iVar4 = NetworkProtocol_d0a30(param_1,*(uint64_t *)(unaff_RBP + -0x29));
    if (iVar4 == 0) goto LAB_1808ccad0;
  }
  else {
    auVar1 = *(int8_t (*) [16])(lVar2 + 0xdc);
    lVar3 = *(int64_t *)(unaff_RDI + 0xdc);
    uVar10 = *(uint64_t *)(unaff_RDI + 0xe4);
    *(int8_t (*) [16])(unaff_RBP + -0x11) = auVar1;
    lVar2 = *(int64_t *)(unaff_RBP + -9);
    *(int64_t *)(unaff_RBP + -0x29) = lVar3;
    *(uint64_t *)(unaff_RBP + -0x21) = uVar10;
    if ((lVar3 == auVar1._0_8_) && (*(int64_t *)(unaff_RBP + -0x21) == lVar2)) goto LAB_1808cca15;
    if ((((auVar1._0_4_ == 0) && (auVar1._4_4_ == 0)) && ((int)lVar2 == 0)) &&
       ((int)((uint64_t)lVar2 >> 0x20) == 0)) {
      iVar4 = NetworkProtocol_ec8e0(unaff_RBP + -0x29);
      uVar10 = *(uint64_t *)(unaff_RBP + -0x29);
    }
    else {
      iVar4 = NetworkProtocol_bf8e0(param_1[0x2d],unaff_RBP + -0x11,unaff_RBP + -0x19);
      uVar10 = *(uint64_t *)(unaff_RBP + -0x19);
    }
    if (iVar4 != 0) goto LAB_1808cca49;
    iVar4 = NetworkProtocol_d0a30(param_1,uVar10);
  }
  if (iVar4 == 0) {
LAB_1808ccad0:
    if (*(int *)(param_1 + 0x26) != *(int *)(param_1[0x1e] + 0xb0)) {
      *(int *)(param_1 + 0x26) = *(int *)(param_1[0x1e] + 0xb0);
      lVar2 = param_1[0x1f];
      if (lVar2 != 0) {
        *(uint64_t *)(unaff_RBP + -0x29) = 0;
        uVar5 = UtilitiesSystem_MathCalculator(lVar2,0,unaff_RBP + -0x29);
        if ((uVar5 < 0x1f) && ((0x40000009U >> (uVar5 & 0x1f) & 1) != 0)) {
          lVar2 = param_1[6];
          *(uint64_t *)(unaff_RBP + -0x19) = 0;
          iVar4 = NetworkProtocol_cd780(param_1,*(int64_t *)(unaff_RBP + -0x29) - lVar2,unaff_RBP + -0x19);
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x26);
            if (iVar4 == 0) {
              uVar9 = *(int *)((int64_t)param_1 + 0x15c) - 1;
              uVar5 = (uint)*(uint64_t *)(unaff_RBP + -0x19);
              if (uVar9 <= uVar5) {
                uVar5 = uVar9;
              }
              uVar11 = (uint64_t)uVar5;
            }
            else {
              uVar11 = *(uint64_t *)(unaff_RBP + -0x19);
              uVar5 = *(uint *)(param_1 + 0x2c);
              uVar9 = (uint)uVar11;
              if (uVar5 < uVar9) {
                uVar12 = uVar9 - uVar5;
                uVar8 = (*(int *)((int64_t)param_1 + 0x164) - uVar5) + 1;
                if (iVar4 == -1) {
                  uVar11 = (uint64_t)(uVar5 + uVar12 % uVar8);
                }
                else {
                  uVar6 = (iVar4 + 1) * uVar8 + uVar5;
                  if (uVar6 < uVar9) {
                    iVar4 = 0;
                    uVar5 = *(int *)((int64_t)param_1 + 0x15c) - 1;
                    uVar9 = (*(int *)((int64_t)param_1 + 0x164) - uVar6) + uVar9;
                    if (uVar5 <= uVar9) {
                      uVar9 = uVar5;
                    }
                    uVar11 = (uint64_t)uVar9;
                  }
                  else {
                    iVar4 = iVar4 - uVar12 / uVar8;
                    uVar11 = (uint64_t)(uVar5 + uVar12 % uVar8);
                  }
                }
              }
            }
            uVar5 = SystemCore_3fd60(param_1[0x1f],iVar4);
            if ((uVar5 < 0x1f) && ((0x40000009U >> (uVar5 & 0x1f) & 1) != 0)) {
              uVar5 = SystemCore_3fe30(param_1[0x1f],uVar11 & 0xffffffff,2);
              if ((uVar5 < 0x1f) && ((0x40000009U >> (uVar5 & 0x1f) & 1) != 0)) {
                *(int *)((int64_t)param_1 + 0x13c) = (int)uVar11;
              }
            }
          }
        }
      }
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x27) ^ (uint64_t)&local_buffer_00000000);
  }
LAB_1808cca49:
  plVar7 = (int64_t *)(**(code **)*param_1)(param_1);
  (**(code **)(*plVar7 + 0x30))(plVar7,unaff_RBP + -0x29);
// WARNING: Subroutine does not return
  SystemDataValidator(unaff_RBP + -1,0x27,&processed_var_8960_ptr,*(int32_t *)(unaff_RBP + -0x29),
                *(int16_t *)(unaff_RBP + -0x25));
}
// 函数: void NetworkProtocol_ccaf2(int32_t param_1)
void NetworkProtocol_ccaf2(int32_t param_1)
{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t unaff_RBP;
  uint uVar8;
  int64_t unaff_R14;
  *(int32_t *)(unaff_R14 + 0x130) = param_1;
  lVar1 = *(int64_t *)(unaff_R14 + 0xf8);
  if (lVar1 != 0) {
    *(uint64_t *)(unaff_RBP + -0x29) = 0;
    uVar2 = UtilitiesSystem_MathCalculator(lVar1,0,unaff_RBP + -0x29);
    if ((uVar2 < 0x1f) && ((0x40000009U >> (uVar2 & 0x1f) & 1) != 0)) {
      *(uint64_t *)(unaff_RBP + -0x19) = 0;
      iVar3 = NetworkProtocol_cd780();
      if (iVar3 == 0) {
        iVar3 = *(int *)(unaff_R14 + 0x130);
        if (iVar3 == 0) {
          uVar6 = *(int *)(unaff_R14 + 0x15c) - 1;
          uVar2 = (uint)*(uint64_t *)(unaff_RBP + -0x19);
          if (uVar6 <= uVar2) {
            uVar2 = uVar6;
          }
          uVar7 = (uint64_t)uVar2;
        }
        else {
          uVar7 = *(uint64_t *)(unaff_RBP + -0x19);
          uVar2 = *(uint *)(unaff_R14 + 0x160);
          uVar6 = (uint)uVar7;
          if (uVar2 < uVar6) {
            uVar8 = uVar6 - uVar2;
            uVar5 = (*(int *)(unaff_R14 + 0x164) - uVar2) + 1;
            if (iVar3 == -1) {
              uVar7 = (uint64_t)(uVar2 + uVar8 % uVar5);
            }
            else {
              uVar4 = (iVar3 + 1) * uVar5 + uVar2;
              if (uVar4 < uVar6) {
                iVar3 = 0;
                uVar2 = *(int *)(unaff_R14 + 0x15c) - 1;
                uVar6 = (*(int *)(unaff_R14 + 0x164) - uVar4) + uVar6;
                if (uVar2 <= uVar6) {
                  uVar6 = uVar2;
                }
                uVar7 = (uint64_t)uVar6;
              }
              else {
                iVar3 = iVar3 - uVar8 / uVar5;
                uVar7 = (uint64_t)(uVar2 + uVar8 % uVar5);
              }
            }
          }
        }
        uVar2 = SystemCore_3fd60(*(uint64_t *)(unaff_R14 + 0xf8),iVar3);
        if ((uVar2 < 0x1f) && ((0x40000009U >> (uVar2 & 0x1f) & 1) != 0)) {
          uVar2 = SystemCore_3fe30(*(uint64_t *)(unaff_R14 + 0xf8),uVar7 & 0xffffffff,2);
          if ((uVar2 < 0x1f) && ((0x40000009U >> (uVar2 & 0x1f) & 1) != 0)) {
            *(int *)(unaff_R14 + 0x13c) = (int)uVar7;
          }
        }
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x27) ^ (uint64_t)&local_buffer_00000000);
}
uint64_t NetworkProtocol_ccc40(int64_t param_1)
{
  uint64_t *puVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  puVar6 = (uint64_t *)(*(int64_t *)(param_1 + 0xe8) + 0xe8);
  puVar1 = (uint64_t *)*puVar6;
  do {
    if (puVar1 == puVar6) {
      return 0;
    }
    cVar2 = Function_1505f8b7(*(uint64_t *)(param_1 + 0xe8),
                                *(int32_t *)((int64_t)puVar1 + 0x24));
    lVar3 = Function_50820c96(*(uint64_t *)(param_1 + 0xf8),puVar1 + 2);
    if ((lVar3 == 0) || ((*(int64_t *)(lVar3 + 0x40) != 0) == (cVar2 == '\0'))) {
      uVar5 = SystemDataFlowProcessor(param_1,*(int32_t *)((int64_t)puVar1 + 0x24));
LAB_1808ccd05:
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    else {
      if (cVar2 != '\0') {
        uVar5 = NetworkProtocol_d5e40(lVar3);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar5 = NetworkProtocol_b21b0(param_1,*(int32_t *)((int64_t)puVar1 + 0x24));
        goto LAB_1808ccd05;
      }
      lVar4 = Function_50820c96(*(uint64_t *)(param_1 + 0xf0),puVar1 + 2);
      if (lVar4 != 0) {
        uVar5 = NetworkProtocol_d71e0(lVar3,lVar4);
        goto LAB_1808ccd05;
      }
    }
    if (puVar1 == puVar6) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ccd40(uint64_t *param_1,uint64_t param_2,int64_t param_3)
void NetworkProtocol_ccd40(uint64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  int64_t lStack_40;
  int32_t local_var_38;
  uVar4 = (**(code **)*param_1)();
  cVar2 = Function_649b67ea(param_2,uVar4);
  if (cVar2 != '\0') {
    plVar8 = (int64_t *)0x0;
    for (plVar10 = *(int64_t **)(param_3 + 0xd8);
        (*(int64_t **)(param_3 + 0xd8) <= plVar10 &&
        (plVar10 < (int64_t *)
                   ((int64_t)*(int64_t **)(param_3 + 0xd8) +
                   (int64_t)*(int *)(param_3 + 0xe0) * 0x14)));
        plVar10 = (int64_t *)((int64_t)plVar10 + 0x14)) {
      lVar5 = (**(code **)*param_1)(param_1);
      if (0 < *(int *)(lVar5 + 0xe0)) {
        plVar7 = plVar8;
        do {
          lStack_48 = *plVar10;
          lStack_40 = plVar10[1];
          iVar3 = (int)plVar7;
          local_var_38 = 0x3f800000;
          if ((*(int64_t *)(*(int64_t *)(lVar5 + 0xd8) + (int64_t)iVar3 * 0x14) == lStack_48) &&
             (*(int64_t *)(*(int64_t *)(lVar5 + 0xd8) + 8 + (int64_t)iVar3 * 0x14) == lStack_40))
          goto LAB_1808ccf2c;
          plVar7 = (int64_t *)(uint64_t)(iVar3 + 1U);
        } while ((int)(iVar3 + 1U) < *(int *)(lVar5 + 0xe0));
      }
      plVar7 = param_1 + 0x24;
      plVar9 = (int64_t *)(*plVar7 + -0x20);
      if (*plVar7 == 0) {
        plVar9 = plVar8;
      }
      plVar1 = plVar8;
      if (plVar9 != (int64_t *)0x0) {
        plVar1 = plVar9 + 4;
      }
      while (plVar1 != plVar7) {
        plVar9 = plVar1 + -4;
        if (plVar1 == (int64_t *)0x0) {
          plVar9 = plVar8;
        }
        plVar6 = (int64_t *)(**(code **)*plVar9)(plVar9);
        (**(code **)(*plVar6 + 0x30))(plVar6,&lStack_58);
        if ((lStack_58 == *plVar10) && (lStack_50 == plVar10[1])) {
          if (plVar1 != plVar7) {
            *(int64_t *)plVar1[1] = *plVar1;
            *(int64_t *)(*plVar1 + 8) = plVar1[1];
            plVar1[1] = (int64_t)plVar1;
            *plVar1 = (int64_t)plVar1;
            (**(code **)(*plVar9 + 0x28))(plVar9,0);
// WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar9,&processed_var_5904_ptr,0xec9,1);
          }
          break;
        }
        if (plVar1 == plVar7) break;
        plVar9 = (int64_t *)(*plVar1 + -0x20);
        if (*plVar1 == 0) {
          plVar9 = plVar8;
        }
        plVar1 = plVar8;
        if (plVar9 != (int64_t *)0x0) {
          plVar1 = plVar9 + 4;
        }
      }
LAB_1808ccf2c:
    }
  }
  plVar7 = (int64_t *)0x0;
  NetworkProtocol_c8f30(param_2,param_1 + 0x30);
  plVar10 = param_1 + 0x24;
  plVar8 = (int64_t *)(*plVar10 + -0x20);
  if (*plVar10 == 0) {
    plVar8 = plVar7;
  }
  plVar9 = plVar7;
  if (plVar8 != (int64_t *)0x0) {
    plVar9 = plVar8 + 4;
  }
  while (plVar9 != plVar10) {
    plVar8 = plVar9 + -4;
    if (plVar9 == (int64_t *)0x0) {
      plVar8 = plVar7;
    }
    iVar3 = (**(code **)(*plVar8 + 0xb0))(plVar8,param_2);
    if (iVar3 != 0) {
      return;
    }
    if (plVar9 == plVar10) break;
    plVar8 = (int64_t *)(*plVar9 + -0x20);
    if (*plVar9 == 0) {
      plVar8 = plVar7;
    }
    plVar9 = plVar7;
    if (plVar8 != (int64_t *)0x0) {
      plVar9 = plVar8 + 4;
    }
  }
  iVar3 = NetworkProtocol_cad80(param_1 + 0x23,param_1 + 0x3a,param_1 + 0x37);
  if (iVar3 == 0) {
    NetworkProtocol_cc510(param_1,param_2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ccd5b(uint64_t *param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void NetworkProtocol_ccd5b(uint64_t *param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6,int64_t param_7,int64_t param_8,
                  int64_t param_9,int32_t param_10)
{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint64_t *in_RAX;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t unaff_R12;
  int64_t *plVar10;
  int32_t extraout_XMM0_Da;
  uint64_t local_var_98;
  uVar4 = (*(code *)*in_RAX)();
  cVar2 = Function_649b67ea(extraout_XMM0_Da,uVar4);
  if (cVar2 != '\0') {
    plVar8 = (int64_t *)0x0;
    for (plVar10 = *(int64_t **)(param_3 + 0xd8);
        (unaff_R12 = local_var_98, *(int64_t **)(param_3 + 0xd8) <= plVar10 &&
        (plVar10 < (int64_t *)
                   ((int64_t)*(int64_t **)(param_3 + 0xd8) +
                   (int64_t)*(int *)(param_3 + 0xe0) * 0x14)));
        plVar10 = (int64_t *)((int64_t)plVar10 + 0x14)) {
      lVar5 = (**(code **)*param_1)(param_1);
      if (0 < *(int *)(lVar5 + 0xe0)) {
        plVar7 = plVar8;
        do {
          param_8 = *plVar10;
          param_9 = plVar10[1];
          iVar3 = (int)plVar7;
          param_10 = 0x3f800000;
          if ((*(int64_t *)(*(int64_t *)(lVar5 + 0xd8) + (int64_t)iVar3 * 0x14) == param_8) &&
             (*(int64_t *)(*(int64_t *)(lVar5 + 0xd8) + 8 + (int64_t)iVar3 * 0x14) == param_9))
          goto LAB_1808ccf2c;
          plVar7 = (int64_t *)(uint64_t)(iVar3 + 1U);
        } while ((int)(iVar3 + 1U) < *(int *)(lVar5 + 0xe0));
      }
      plVar7 = param_1 + 0x24;
      plVar9 = (int64_t *)(*plVar7 + -0x20);
      if (*plVar7 == 0) {
        plVar9 = plVar8;
      }
      plVar1 = plVar8;
      if (plVar9 != (int64_t *)0x0) {
        plVar1 = plVar9 + 4;
      }
      while (plVar1 != plVar7) {
        plVar9 = plVar1 + -4;
        if (plVar1 == (int64_t *)0x0) {
          plVar9 = plVar8;
        }
        plVar6 = (int64_t *)(**(code **)*plVar9)(plVar9);
        (**(code **)(*plVar6 + 0x30))(plVar6,&param_6);
        if ((param_6 == *plVar10) && (param_7 == plVar10[1])) {
          if (plVar1 != plVar7) {
            *(int64_t *)plVar1[1] = *plVar1;
            *(int64_t *)(*plVar1 + 8) = plVar1[1];
            plVar1[1] = (int64_t)plVar1;
            *plVar1 = (int64_t)plVar1;
            (**(code **)(*plVar9 + 0x28))(plVar9,0);
// WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar9,&processed_var_5904_ptr,0xec9,1);
          }
          break;
        }
        if (plVar1 == plVar7) break;
        plVar9 = (int64_t *)(*plVar1 + -0x20);
        if (*plVar1 == 0) {
          plVar9 = plVar8;
        }
        plVar1 = plVar8;
        if (plVar9 != (int64_t *)0x0) {
          plVar1 = plVar9 + 4;
        }
      }
LAB_1808ccf2c:
    }
  }
  plVar7 = (int64_t *)0x0;
  NetworkProtocol_c8f30(unaff_R12,param_1 + 0x30);
  plVar10 = param_1 + 0x24;
  plVar8 = (int64_t *)(*plVar10 + -0x20);
  if (*plVar10 == 0) {
    plVar8 = plVar7;
  }
  plVar9 = plVar7;
  if (plVar8 != (int64_t *)0x0) {
    plVar9 = plVar8 + 4;
  }
  while (plVar9 != plVar10) {
    plVar8 = plVar9 + -4;
    if (plVar9 == (int64_t *)0x0) {
      plVar8 = plVar7;
    }
    iVar3 = (**(code **)(*plVar8 + 0xb0))(plVar8,unaff_R12);
    if (iVar3 != 0) {
      return;
    }
    if (plVar9 == plVar10) break;
    plVar8 = (int64_t *)(*plVar9 + -0x20);
    if (*plVar9 == 0) {
      plVar8 = plVar7;
    }
    plVar9 = plVar7;
    if (plVar8 != (int64_t *)0x0) {
      plVar9 = plVar8 + 4;
    }
  }
  iVar3 = NetworkProtocol_cad80(param_1 + 0x23,param_1 + 0x3a,param_1 + 0x37);
  if (iVar3 == 0) {
    NetworkProtocol_cc510(param_1,unaff_R12);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
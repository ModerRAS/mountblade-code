/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_12_part061.c - 5 个函数
// 函数: void function_7f4270(int64_t param_1)
void function_7f4270(int64_t param_1)
{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int8_t stack_array_f8 [32];
  uint *plocal_var_d8;
  int iStack_d0;
  int8_t local_var_c8;
  uint local_var_b8;
  ushort stack_array_b4 [2];
  ushort stack_array_b0 [2];
  short asStack_ac [2];
  uint local_var_a8;
  uint local_var_a4;
  uint local_var_a0;
  uint local_var_9c;
  uint local_var_98;
  ushort stack_array_94 [2];
  uint64_t local_var_90;
  uint local_var_88;
  int aiStack_84 [3];
  int64_t lStack_78;
  uint64_t local_var_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  int64_t lStack_40;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  local_var_90 = 0;
  iVar1 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x10))
                    (*(int64_t **)(param_1 + 0x170),&local_var_88);
  if (iVar1 == 0) {
    local_var_70 = (uint64_t)local_var_88;
    uVar6 = 0;
    while (iVar1 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),uVar6 & 0xffffffff,0), iVar1 == 0)
    {
      plocal_var_d8 = &local_var_b8;
      iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&lStack_50);
      if ((iVar1 != 0) || (local_var_b8 != 0x18)) break;
      if ((lStack_50 == 0x11cf668e75b22630) && (lStack_48 == 0x6cce6200aa00d9a6)) {
        plocal_var_d8 = &local_var_b8;
        iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),aiStack_84);
        if ((iVar1 != 0) || (local_var_b8 != 6)) break;
        lStack_78 = 0x1e;
        uVar9 = 0;
        if (0 < aiStack_84[0]) {
          do {
            iVar1 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),(int)uVar6 + (int)lStack_78,0);
            if (iVar1 != 0) goto NetworkSystem_ConnectionHandler;
            plocal_var_d8 = &local_var_b8;
            iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&lStack_68);
            if ((iVar1 != 0) || (local_var_b8 != 0x18)) goto NetworkSystem_ConnectionHandler;
            if ((lStack_68 == 0x11cf668e75b22633) && (lStack_60 == 0x6cce6200aa00d9a6)) {
              plocal_var_d8 = &local_var_b8;
              local_var_a8 = 0;
              local_var_a4 = 0;
              local_var_a0 = 0;
              local_var_9c = 0;
              local_var_98 = 0;
              iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&local_var_a8,2);
              if ((iVar1 != 0) || (local_var_b8 != 1)) goto NetworkSystem_ConnectionHandler;
              plocal_var_d8 = &local_var_b8;
              iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&local_var_a4,2);
              if ((iVar1 != 0) || (local_var_b8 != 1)) goto NetworkSystem_ConnectionHandler;
              plocal_var_d8 = &local_var_b8;
              iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&local_var_a0,2);
              if ((iVar1 != 0) || (local_var_b8 != 1)) goto NetworkSystem_ConnectionHandler;
              plocal_var_d8 = &local_var_b8;
              iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&local_var_9c,2);
              if ((iVar1 != 0) || (local_var_b8 != 1)) goto NetworkSystem_ConnectionHandler;
              plocal_var_d8 = &local_var_b8;
              iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&local_var_98);
              if ((iVar1 != 0) || (local_var_b8 != 1)) goto NetworkSystem_ConnectionHandler;
              if (local_var_a8 != 0) {
                plocal_var_d8 = &local_var_b8;
                iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),0x180c312d0,1);
                if ((iVar1 != 0) || (local_var_b8 != local_var_a8)) goto NetworkSystem_ConnectionHandler;
                uVar4 = local_var_a8;
                if ((int)local_var_a8 < 0) {
                  uVar4 = local_var_a8 + 1;
                }
                iVar1 = ((int)uVar4 >> 1) + -1;
                iVar2 = wcstombs(0x180c322e0,0x180c312d0,0x1000);
                if (iVar2 == iVar1) {
                  iVar5 = ((int)uVar4 >> 1) + -1;
                }
                else {
                  iVar5 = local_var_a8 - 2;
                }
                local_var_c8 = 0;
                uVar7 = 0x180c322e0;
                iStack_d0 = (iVar2 != iVar1) + 3;
                plocal_var_d8 = (uint *)CONCAT44(plocal_var_d8._4_4_,iVar5);
                if (iVar2 != iVar1) {
                  uVar7 = 0x180c312d0;
                }
                iVar1 = SystemMemory_Controller(param_1,6,&rendering_buffer_2136_ptr,uVar7);
                if (iVar1 != 0) goto NetworkSystem_ConnectionHandler;
              }
              if (local_var_a4 != 0) {
                plocal_var_d8 = &local_var_b8;
                iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),0x180c312d0,1);
                if ((iVar1 != 0) || (local_var_b8 != local_var_a4)) goto NetworkSystem_ConnectionHandler;
                uVar4 = local_var_a4;
                if ((int)local_var_a4 < 0) {
                  uVar4 = local_var_a4 + 1;
                }
                iVar1 = ((int)uVar4 >> 1) + -1;
                iVar2 = wcstombs(0x180c322e0,0x180c312d0,0x1000);
                if (iVar2 == iVar1) {
                  iVar5 = ((int)uVar4 >> 1) + -1;
                }
                else {
                  iVar5 = local_var_a4 - 2;
                }
                local_var_c8 = 0;
                uVar7 = 0x180c322e0;
                iStack_d0 = (iVar2 != iVar1) + 3;
                plocal_var_d8 = (uint *)CONCAT44(plocal_var_d8._4_4_,iVar5);
                if (iVar2 != iVar1) {
                  uVar7 = 0x180c312d0;
                }
                iVar1 = SystemMemory_Controller(param_1,6,&processed_var_4148_ptr,uVar7);
                if (iVar1 != 0) goto NetworkSystem_ConnectionHandler;
              }
              if (local_var_a0 != 0) {
                plocal_var_d8 = &local_var_b8;
                iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),0x180c312d0,1);
                if ((iVar1 != 0) || (local_var_b8 != local_var_a0)) goto NetworkSystem_ConnectionHandler;
                uVar4 = local_var_a0;
                if ((int)local_var_a0 < 0) {
                  uVar4 = local_var_a0 + 1;
                }
                iVar1 = ((int)uVar4 >> 1) + -1;
                iVar2 = wcstombs(0x180c322e0,0x180c312d0,0x1000);
                if (iVar2 == iVar1) {
                  iVar5 = ((int)uVar4 >> 1) + -1;
                }
                else {
                  iVar5 = local_var_a0 - 2;
                }
                local_var_c8 = 0;
                uVar7 = 0x180c322e0;
                iStack_d0 = (iVar2 != iVar1) + 3;
                plocal_var_d8 = (uint *)CONCAT44(plocal_var_d8._4_4_,iVar5);
                if (iVar2 != iVar1) {
                  uVar7 = 0x180c312d0;
                }
                iVar1 = SystemMemory_Controller(param_1,6,&processed_var_4160_ptr,uVar7);
                if (iVar1 != 0) goto NetworkSystem_ConnectionHandler;
              }
              if (local_var_9c != 0) {
                plocal_var_d8 = &local_var_b8;
                iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),0x180c312d0,1);
                if ((iVar1 != 0) || (local_var_b8 != local_var_9c)) goto NetworkSystem_ConnectionHandler;
                uVar4 = local_var_9c;
                if ((int)local_var_9c < 0) {
                  uVar4 = local_var_9c + 1;
                }
                iVar1 = ((int)uVar4 >> 1) + -1;
                iVar2 = wcstombs(0x180c322e0,0x180c312d0,0x1000);
                if (iVar2 == iVar1) {
                  iVar5 = ((int)uVar4 >> 1) + -1;
                }
                else {
                  iVar5 = local_var_9c - 2;
                }
                local_var_c8 = 0;
                uVar7 = 0x180c322e0;
                iStack_d0 = (iVar2 != iVar1) + 3;
                plocal_var_d8 = (uint *)CONCAT44(plocal_var_d8._4_4_,iVar5);
                if (iVar2 != iVar1) {
                  uVar7 = 0x180c312d0;
                }
                iVar1 = SystemMemory_Controller(param_1,6,&processed_var_4176_ptr,uVar7);
                if (iVar1 != 0) goto NetworkSystem_ConnectionHandler;
              }
              uVar6 = local_var_90;
              if (local_var_98 != 0) {
                plocal_var_d8 = &local_var_b8;
                iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),0x180c312d0,1);
                if ((iVar1 != 0) || (local_var_b8 != local_var_98)) goto NetworkSystem_ConnectionHandler;
                uVar4 = local_var_98;
                if ((int)local_var_98 < 0) {
                  uVar4 = local_var_98 + 1;
                }
                iVar1 = ((int)uVar4 >> 1) + -1;
                iVar2 = wcstombs(0x180c322e0,0x180c312d0,0x1000);
                if (iVar2 == iVar1) {
                  iVar5 = ((int)uVar4 >> 1) + -1;
                }
                else {
                  iVar5 = local_var_98 - 2;
                }
                local_var_c8 = 0;
                uVar7 = 0x180c322e0;
                iStack_d0 = (iVar2 != iVar1) + 3;
                plocal_var_d8 = (uint *)CONCAT44(plocal_var_d8._4_4_,iVar5);
                if (iVar2 != iVar1) {
                  uVar7 = 0x180c312d0;
                }
                iVar1 = SystemMemory_Controller(param_1,6,&processed_var_4188_ptr,uVar7);
                uVar6 = local_var_90;
                if (iVar1 != 0) goto NetworkSystem_ConnectionHandler;
              }
            }
            else if ((lStack_68 == 0x11d2e307d2d0a440) && (lStack_60 == 0x50a85ec9a000f097)) {
              plocal_var_d8 = &local_var_b8;
              iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),asStack_ac);
              if ((iVar1 != 0) || (local_var_b8 != 1)) goto NetworkSystem_ConnectionHandler;
              if (asStack_ac[0] != 0) {
                plocal_var_d8 = &local_var_b8;
                iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),stack_array_b0,2);
                if ((iVar1 == 0) && (local_var_b8 == 1)) {
                  plocal_var_d8 = &local_var_b8;
                  iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),0x180c34300,1,stack_array_b0[0]
                                       );
                  if ((iVar1 == 0) && (local_var_b8 == stack_array_b0[0])) {
                    wcstombs(0x180c332f0,0x180c34300,0x1000);
                    plocal_var_d8 = &local_var_b8;
                    iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),stack_array_94,2);
                    if ((iVar1 == 0) && (local_var_b8 == 1)) {
                      plocal_var_d8 = &local_var_b8;
                      iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),stack_array_b4,2);
                      if ((iVar1 == 0) && (local_var_b8 == 1)) {
                        plocal_var_d8 = (uint *)((uint64_t)plocal_var_d8 & 0xffffffff00000000);
                        lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),stack_array_b4[0],
                                              &processed_var_4032_ptr,0x42d);
                        if (lVar3 != 0) {
                          plocal_var_d8 = &local_var_b8;
                          iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),lVar3,1,
                                                stack_array_b4[0]);
                          if ((iVar1 == 0) &&
                             (uVar4 = (uint)stack_array_b4[0], local_var_b8 == stack_array_b4[0])) {
                            if (stack_array_94[0] == 0) {
                              iVar1 = (stack_array_b4[0] >> 1) - 1;
                              iVar2 = wcstombs(0x180c34300,lVar3,0x1000);
                              local_var_c8 = 0;
                              lVar8 = 0x180c34300;
                              if (iVar2 != iVar1) {
                                lVar8 = lVar3;
                              }
                              iStack_d0 = (iVar2 != iVar1) + 3;
                              iVar5 = (stack_array_b4[0] >> 1) - 1;
                              if (iVar2 != iVar1) {
                                iVar5 = uVar4 - 2;
                              }
                              plocal_var_d8 = (uint *)CONCAT44(plocal_var_d8._4_4_,iVar5);
                              iVar1 = SystemMemory_Controller(param_1,6,0x180c332f0,lVar8);
                            }
                            else {
                              local_var_c8 = 0;
                              if (stack_array_94[0] == 2) {
                                iStack_d0 = 0;
                                plocal_var_d8 = (uint *)CONCAT44(plocal_var_d8._4_4_,uVar4);
                                iVar1 = SystemMemory_Controller(param_1,6,0x180c332f0,lVar3);
                              }
                              else if (stack_array_94[0] - 3 < 3) {
                                iStack_d0 = 1;
                                plocal_var_d8 = (uint *)CONCAT44(plocal_var_d8._4_4_,uVar4);
                                iVar1 = SystemMemory_Controller(param_1,6,0x180c332f0,lVar3);
                              }
                              else {
                                iStack_d0 = 3;
                                plocal_var_d8 = (uint *)CONCAT44(plocal_var_d8._4_4_,uVar4);
                                iVar1 = SystemMemory_Controller(param_1,6,0x180c332f0,lVar3);
                              }
                            }
                            if (iVar1 == 0) {
                              uVar6 = (uint64_t)plocal_var_d8 >> 8;
                              plocal_var_d8 = (uint *)CONCAT71((int7)uVar6,1);
// WARNING: Subroutine does not return
                              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,
                                            &processed_var_4032_ptr,0x46a);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto NetworkSystem_ConnectionHandler;
              }
            }
            uVar4 = (int)uVar9 + 1;
            lStack_78 = lStack_78 + lStack_58;
            uVar9 = (uint64_t)uVar4;
          } while ((int)uVar4 < aiStack_84[0]);
        }
      }
      uVar6 = uVar6 + lStack_40;
      local_var_90 = uVar6;
      if ((local_var_70 <= uVar6) || (lStack_40 == 0)) break;
    }
  }
NetworkSystem_ConnectionHandler:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7f42bc(uint64_t param_1)
void function_7f42bc(uint64_t param_1)
{
  ushort uVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t in_RAX;
  int64_t lVar5;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RDI;
  int unaff_R14D;
  *(uint64_t *)(unaff_RBP + -0x11) = in_RAX;
  do {
    iVar3 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RBX + 0x170),param_1 & 0xffffffff,0);
    if (((iVar3 != 0) ||
        (iVar3 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + 0xf,1,0x18,
                               unaff_RBP + -0x59), iVar3 != 0)) ||
       (*(int *)(unaff_RBP + -0x59) != 0x18)) goto LAB_1807f4bf6;
    if ((*(int64_t *)(unaff_RBP + 0xf) == 0x11cf668e75b22630) &&
       (*(int64_t *)(unaff_RBP + 0x17) == 0x6cce6200aa00d9a6)) {
      iVar3 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x25,1,6,
                            unaff_RBP + -0x59);
      if ((iVar3 != 0) || (*(int *)(unaff_RBP + -0x59) != 6)) {
LAB_1807f4bf6:
// WARNING: Subroutine does not return
        SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x27) ^ (uint64_t)&local_buffer_00000000);
      }
      lVar5 = 0x1e;
      *(uint64_t *)(unaff_RBP + -0x19) = 0x1e;
      iVar3 = unaff_R14D;
      if (0 < *(int *)(unaff_RBP + -0x25)) {
        do {
          iVar4 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RBX + 0x170),(int)unaff_RDI + (int)lVar5,0);
          if (((iVar4 != 0) ||
              (iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -9,1,0x18,
                                     unaff_RBP + -0x59), iVar4 != 0)) ||
             (*(int *)(unaff_RBP + -0x59) != 0x18)) goto LAB_1807f4bf6;
          if ((*(int64_t *)(unaff_RBP + -9) == 0x11cf668e75b22633) &&
             (*(int64_t *)(unaff_RBP + -1) == 0x6cce6200aa00d9a6)) {
            uVar2 = *(uint64_t *)(unaff_RBX + 0x170);
            *(int *)(unaff_RBP + -0x49) = unaff_R14D;
            *(int *)(unaff_RBP + -0x45) = unaff_R14D;
            *(int *)(unaff_RBP + -0x41) = unaff_R14D;
            *(int *)(unaff_RBP + -0x3d) = unaff_R14D;
            *(int *)(unaff_RBP + -0x39) = unaff_R14D;
            iVar4 = SystemDataAnalyzer(uVar2,unaff_RBP + -0x49,2,1,unaff_RBP + -0x59);
            if ((((((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != 1)) ||
                  (iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x45,2,1,
                                         unaff_RBP + -0x59), iVar4 != 0)) ||
                 ((*(int *)(unaff_RBP + -0x59) != 1 ||
                  (iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x41,2,1,
                                         unaff_RBP + -0x59), iVar4 != 0)))) ||
                (((*(int *)(unaff_RBP + -0x59) != 1 ||
                  ((iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x3d,2,1,
                                          unaff_RBP + -0x59), iVar4 != 0 ||
                   (*(int *)(unaff_RBP + -0x59) != 1)))) ||
                 (iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x39,2,1,
                                        unaff_RBP + -0x59), iVar4 != 0)))) ||
               (*(int *)(unaff_RBP + -0x59) != 1)) goto LAB_1807f4bf6;
            if (*(int *)(unaff_RBP + -0x49) != 0) {
              iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),0x180c312d0,1,
                                    *(int *)(unaff_RBP + -0x49),unaff_RBP + -0x59);
              if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != *(int *)(unaff_RBP + -0x49)))
              goto LAB_1807f4bf6;
              wcstombs(0x180c322e0,0x180c312d0,0x1000);
              iVar4 = SystemMemory_Controller();
              if (iVar4 != 0) goto LAB_1807f4bf6;
            }
            if (*(int *)(unaff_RBP + -0x45) != 0) {
              iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),0x180c312d0,1,
                                    *(int *)(unaff_RBP + -0x45),unaff_RBP + -0x59);
              if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != *(int *)(unaff_RBP + -0x45)))
              goto LAB_1807f4bf6;
              wcstombs(0x180c322e0,0x180c312d0,0x1000);
              iVar4 = SystemMemory_Controller();
              if (iVar4 != 0) goto LAB_1807f4bf6;
            }
            if (*(int *)(unaff_RBP + -0x41) != 0) {
              iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),0x180c312d0,1,
                                    *(int *)(unaff_RBP + -0x41),unaff_RBP + -0x59);
              if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != *(int *)(unaff_RBP + -0x41)))
              goto LAB_1807f4bf6;
              wcstombs(0x180c322e0,0x180c312d0,0x1000);
              iVar4 = SystemMemory_Controller();
              if (iVar4 != 0) goto LAB_1807f4bf6;
            }
            if (*(int *)(unaff_RBP + -0x3d) != 0) {
              iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),0x180c312d0,1,
                                    *(int *)(unaff_RBP + -0x3d),unaff_RBP + -0x59);
              if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != *(int *)(unaff_RBP + -0x3d)))
              goto LAB_1807f4bf6;
              wcstombs(0x180c322e0,0x180c312d0,0x1000);
              iVar4 = SystemMemory_Controller();
              if (iVar4 != 0) goto LAB_1807f4bf6;
            }
            if (*(int *)(unaff_RBP + -0x39) != 0) {
              iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),0x180c312d0,1,
                                    *(int *)(unaff_RBP + -0x39),unaff_RBP + -0x59);
              if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != *(int *)(unaff_RBP + -0x39)))
              goto LAB_1807f4bf6;
              wcstombs(0x180c322e0,0x180c312d0,0x1000);
              iVar4 = SystemMemory_Controller();
              if (iVar4 != 0) goto LAB_1807f4bf6;
            }
            unaff_RDI = *(uint64_t *)(unaff_RBP + -0x31);
          }
          else if ((*(int64_t *)(unaff_RBP + -9) == 0x11d2e307d2d0a440) &&
                  (*(int64_t *)(unaff_RBP + -1) == 0x50a85ec9a000f097)) {
            iVar4 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x4d,2,1,
                                  unaff_RBP + -0x59);
            if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != 1)) goto LAB_1807f4bf6;
            if ((ushort)unaff_R14D < *(ushort *)(unaff_RBP + -0x4d)) {
              iVar3 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x51,2,1,
                                    unaff_RBP + -0x59);
              if ((((iVar3 == 0) && (*(int *)(unaff_RBP + -0x59) == 1)) &&
                  (iVar3 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),0x180c34300,1,
                                         *(int16_t *)(unaff_RBP + -0x51),unaff_RBP + -0x59),
                  iVar3 == 0)) &&
                 (*(uint *)(unaff_RBP + -0x59) == (uint)*(ushort *)(unaff_RBP + -0x51))) {
                wcstombs(0x180c332f0,0x180c34300,0x1000);
                iVar3 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x35,2,1,
                                      unaff_RBP + -0x59);
                if ((((iVar3 == 0) && (*(int *)(unaff_RBP + -0x59) == 1)) &&
                    ((iVar3 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x55,2,1
                                            ,unaff_RBP + -0x59), iVar3 == 0 &&
                     ((*(int *)(unaff_RBP + -0x59) == 1 &&
                      (lVar5 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                             *(int16_t *)(unaff_RBP + -0x55),&processed_var_4032_ptr,0x42d
                                             ,unaff_R14D), lVar5 != 0)))))) &&
                   ((iVar3 = SystemDataAnalyzer(*(uint64_t *)(unaff_RBX + 0x170),lVar5,1,
                                           *(int16_t *)(unaff_RBP + -0x55),unaff_RBP + -0x59),
                    iVar3 == 0 &&
                    (*(uint *)(unaff_RBP + -0x59) == (uint)*(ushort *)(unaff_RBP + -0x55))))) {
                  uVar1 = *(ushort *)(unaff_RBP + -0x35);
                  if (uVar1 == 0) {
                    wcstombs(0x180c34300,lVar5,0x1000);
                    iVar3 = SystemMemory_Controller();
                  }
                  else if (uVar1 == 2) {
                    iVar3 = SystemMemory_Controller();
                  }
                  else if (uVar1 - 3 < 3) {
                    iVar3 = SystemMemory_Controller();
                  }
                  else {
                    iVar3 = SystemMemory_Controller();
                  }
                  if (iVar3 == 0) {
// WARNING: Subroutine does not return
                    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar5,&processed_var_4032_ptr,0x46a
                                  ,1);
                  }
                }
              }
              goto LAB_1807f4bf6;
            }
          }
          iVar3 = iVar3 + 1;
          lVar5 = *(int64_t *)(unaff_RBP + -0x19) + *(int64_t *)(unaff_RBP + 7);
          *(int64_t *)(unaff_RBP + -0x19) = lVar5;
        } while (iVar3 < *(int *)(unaff_RBP + -0x25));
      }
    }
    param_1 = unaff_RDI + *(int64_t *)(unaff_RBP + 0x1f);
    *(uint64_t *)(unaff_RBP + -0x31) = param_1;
    if ((*(uint64_t *)(unaff_RBP + -0x11) <= param_1) ||
       (unaff_RDI = param_1, *(int64_t *)(unaff_RBP + 0x1f) == 0)) goto LAB_1807f4bf6;
  } while( true );
}
// 函数: void NetworkSystem_ConnectionHandler(void)
void NetworkSystem_ConnectionHandler(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x27) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_7f4c2f(void)
void function_7f4c2f(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x27) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7f4c40(int64_t param_1)
void function_7f4c40(int64_t param_1)
{
  int iVar1;
  int8_t stack_array_88 [32];
  int *piStack_68;
  int32_t local_var_60;
  int8_t local_var_58;
  int aiStack_48 [2];
  uint64_t stack_array_40 [3];
  int32_t local_var_28;
  int16_t local_var_24;
  int8_t local_var_22;
  int8_t stack_array_20 [8];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  stack_array_40[0] = 0;
  stack_array_40[1] = 0;
  stack_array_40[2] = 0;
  local_var_28 = 0;
  local_var_24 = 0;
  local_var_22 = 0;
  piStack_68 = aiStack_48;
  iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),stack_array_40,1);
  if ((iVar1 == 0) && (aiStack_48[0] == 0x1e)) {
    iVar1 = Function_055df91e(stack_array_40);
    if (iVar1 != 0) {
      iVar1 = Function_055df91e(stack_array_40);
      local_var_58 = 0;
      local_var_60 = 3;
      piStack_68 = (int *)CONCAT44(piStack_68._4_4_,iVar1 + 1);
      SystemMemory_Controller(param_1,1,&rendering_buffer_2136_ptr,stack_array_40);
    }
    stack_array_40[0] = 0;
    stack_array_40[1] = 0;
    stack_array_40[2] = 0;
    local_var_28 = 0;
    local_var_24 = 0;
    local_var_22 = 0;
    piStack_68 = aiStack_48;
    iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),stack_array_40,1);
    if ((iVar1 == 0) && (aiStack_48[0] == 0x1e)) {
      iVar1 = Function_055df91e(stack_array_40);
      if (iVar1 != 0) {
        iVar1 = Function_055df91e(stack_array_40);
        local_var_58 = 0;
        local_var_60 = 3;
        piStack_68 = (int *)CONCAT44(piStack_68._4_4_,iVar1 + 1);
        SystemMemory_Controller(param_1,1,&memory_allocator_3984_ptr,stack_array_40);
      }
      stack_array_40[0] = 0;
      stack_array_40[1] = 0;
      stack_array_40[2] = 0;
      local_var_28 = 0;
      local_var_24 = 0;
      local_var_22 = 0;
      piStack_68 = aiStack_48;
      iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),stack_array_40,1);
      if ((iVar1 == 0) && (aiStack_48[0] == 0x1e)) {
        iVar1 = Function_055df91e(stack_array_40);
        if (iVar1 != 0) {
          iVar1 = Function_055df91e(stack_array_40);
          local_var_58 = 0;
          local_var_60 = 3;
          piStack_68 = (int *)CONCAT44(piStack_68._4_4_,iVar1 + 1);
          SystemMemory_Controller(param_1,1,&memory_allocator_3992_ptr,stack_array_40);
        }
        stack_array_40[0] = 0;
        stack_array_40[1] = 0;
        stack_array_40[2] = 0;
        local_var_28 = 0;
        local_var_24 = 0;
        local_var_22 = 0;
        piStack_68 = aiStack_48;
        iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),stack_array_40,1);
        if ((iVar1 == 0) && (aiStack_48[0] == 4)) {
          iVar1 = Function_055df91e(stack_array_40);
          if (iVar1 != 0) {
            iVar1 = Function_055df91e(stack_array_40);
            local_var_58 = 0;
            local_var_60 = 3;
            piStack_68 = (int *)CONCAT44(piStack_68._4_4_,iVar1 + 1);
            SystemMemory_Controller(param_1,1,&processed_var_4000_ptr,stack_array_40);
          }
          stack_array_40[0] = 0;
          stack_array_40[1] = 0;
          stack_array_40[2] = 0;
          local_var_28 = 0;
          local_var_24 = 0;
          local_var_22 = 0;
          piStack_68 = aiStack_48;
          iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),stack_array_40,1);
          if ((iVar1 == 0) && (aiStack_48[0] == 0x1e)) {
            iVar1 = Function_055df91e(stack_array_40);
            if (iVar1 != 0) {
              iVar1 = Function_055df91e(stack_array_40);
              local_var_58 = 0;
              local_var_60 = 3;
              piStack_68 = (int *)CONCAT44(piStack_68._4_4_,iVar1 + 1);
              SystemMemory_Controller(param_1,1,&processed_var_4008_ptr,stack_array_40);
            }
            if (((char)local_var_24 == '\0') && (local_var_24._1_1_ != '\0')) {
// WARNING: Subroutine does not return
              SystemDataValidator(stack_array_20,8,&processed_var_4576_ptr,local_var_24._1_1_);
            }
            stack_array_40[0] = 0;
            stack_array_40[1] = 0;
            stack_array_40[2] = 0;
            local_var_28 = 0;
            local_var_24 = 0;
            local_var_22 = 0;
            piStack_68 = aiStack_48;
            iVar1 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),stack_array_40,1);
            if ((iVar1 == 0) && (aiStack_48[0] == 1)) {
// WARNING: Subroutine does not return
              SystemDataValidator(stack_array_20,8,&processed_var_4576_ptr,stack_array_40[0] & 0xff);
            }
          }
        }
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_88);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
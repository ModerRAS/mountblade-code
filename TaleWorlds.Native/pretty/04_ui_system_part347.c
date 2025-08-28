#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part347.c - 4 个函数
// 函数: void NetworkProtocol_57b70(int64_t param_1,int64_t param_2)
void NetworkProtocol_57b70(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int *piVar6;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int64_t *plVar10;
  int32_t uVar11;
  int8_t stack_array_88 [32];
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  if ((*(int *)(param_2 + 0xc) - 4U < 2) && (*(int64_t *)(param_2 + 0x10) != 0)) {
    plVar10 = (int64_t *)0x0;
    plVar2 = (int64_t *)(param_1 + 0x118);
    lVar3 = **(int64_t **)(param_1 + 0x38);
    plVar7 = (int64_t *)(*plVar2 + -0x18);
    if (*plVar2 == 0) {
      plVar7 = plVar10;
    }
    plVar4 = plVar10;
    if (plVar7 != (int64_t *)0x0) {
      plVar4 = plVar7 + 3;
    }
    while (plVar4 != plVar2) {
      piVar6 = (int *)((int64_t)plVar4 + 0x54);
      if (plVar4 == (int64_t *)0x0) {
        piVar6 = (int *)0x6c;
      }
      if (*piVar6 == 4) {
        puVar9 = *(uint64_t **)(lVar3 + 0x70);
        puVar1 = (uint64_t *)(lVar3 + 0x70);
        if (puVar9 != puVar1) {
          plVar7 = plVar4 + 2;
          if (plVar4 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x28;
          }
          do {
            if ((*(int64_t *)(*plVar7 + 0x10) == puVar9[2]) &&
               (*(int64_t *)(*plVar7 + 0x18) == puVar9[3])) {
              lVar8 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x268))
                                (*(int64_t **)(param_1 + 0x170),puVar9 + 4,
                                 CONCAT71((int7)((uint64_t)puVar1 >> 8),1));
              if (lVar8 == 0) {
// WARNING: Subroutine does not return
                SystemStateProcessor(puVar9 + 4,stack_array_68);
              }
              plVar7 = plVar4 + -3;
              if (plVar4 == (int64_t *)0x0) {
                plVar7 = plVar10;
              }
              iVar5 = UISystem_CallbackHandler(plVar7,0x3f800000,4);
              if (iVar5 != 0) goto NetworkProtocol_57c7a;
              uVar11 = NetworkProtocol_c6120(lVar8,*(int32_t *)(lVar3 + 0xa0));
              iVar5 = UISystem_EventDispatcher(plVar7,uVar11);
              goto joined_r0x000180857d6c;
            }
            if (puVar9 != puVar1) {
              puVar9 = (uint64_t *)*puVar9;
            }
          } while (puVar9 != puVar1);
        }
      }
      else {
        plVar7 = plVar4 + -3;
        if (plVar4 == (int64_t *)0x0) {
          plVar7 = plVar10;
        }
        iVar5 = UISystem_CallbackHandler(plVar7,0,0);
joined_r0x000180857d6c:
        if (iVar5 != 0) goto NetworkProtocol_57c7a;
      }
      if (plVar4 == plVar2) break;
      plVar7 = (int64_t *)(*plVar4 + -0x18);
      if (*plVar4 == 0) {
        plVar7 = plVar10;
      }
      plVar4 = plVar10;
      if (plVar7 != (int64_t *)0x0) {
        plVar4 = plVar7 + 3;
      }
    }
    iVar5 = NetworkProtocol_558e0(param_1,param_2,*(int64_t *)(param_1 + 0x160) + 0x378);
    if (iVar5 == 0) {
      NetworkProtocol_558e0(param_1,param_2,*(int64_t *)(param_1 + 0x160) + 0x3f8);
    }
  }
NetworkProtocol_57c7a:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_88);
}
// 函数: void NetworkProtocol_57bad(int64_t param_1)
void NetworkProtocol_57bad(int64_t param_1)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t *in_RAX;
  int *piVar6;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t *plVar10;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t uVar11;
  int8_t astack_special_x_20 [8];
  uint64_t local_var_48;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R12;
  plVar10 = (int64_t *)0x0;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  plVar2 = (int64_t *)(param_1 + 0x118);
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  lVar3 = *in_RAX;
  plVar7 = (int64_t *)(*plVar2 + -0x18);
  if (*plVar2 == 0) {
    plVar7 = plVar10;
  }
  plVar4 = plVar10;
  if (plVar7 != (int64_t *)0x0) {
    plVar4 = plVar7 + 3;
  }
  while (plVar4 != plVar2) {
    piVar6 = (int *)((int64_t)plVar4 + 0x54);
    if (plVar4 == (int64_t *)0x0) {
      piVar6 = (int *)0x6c;
    }
    if (*piVar6 == 4) {
      puVar9 = *(uint64_t **)(lVar3 + 0x70);
      puVar1 = (uint64_t *)(lVar3 + 0x70);
      if (puVar9 != puVar1) {
        plVar7 = plVar4 + 2;
        if (plVar4 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x28;
        }
        do {
          if ((*(int64_t *)(*plVar7 + 0x10) == puVar9[2]) &&
             (*(int64_t *)(*plVar7 + 0x18) == puVar9[3])) {
            lVar8 = (**(code **)(**(int64_t **)(unaff_RBP + 0x170) + 0x268))
                              (*(int64_t **)(unaff_RBP + 0x170),puVar9 + 4,
                               CONCAT71((int7)((uint64_t)puVar1 >> 8),1));
            if (lVar8 == 0) {
// WARNING: Subroutine does not return
              SystemStateProcessor(puVar9 + 4,astack_special_x_20);
            }
            plVar7 = plVar4 + -3;
            if (plVar4 == (int64_t *)0x0) {
              plVar7 = plVar10;
            }
            iVar5 = UISystem_CallbackHandler(plVar7,0x3f800000,4);
            if (iVar5 != 0) goto LAB_180857c4e;
            uVar11 = NetworkProtocol_c6120(lVar8,*(int32_t *)(lVar3 + 0xa0));
            iVar5 = UISystem_EventDispatcher(plVar7,uVar11);
            goto joined_r0x000180857d6c;
          }
          if (puVar9 != puVar1) {
            puVar9 = (uint64_t *)*puVar9;
          }
        } while (puVar9 != puVar1);
      }
    }
    else {
      plVar7 = plVar4 + -3;
      if (plVar4 == (int64_t *)0x0) {
        plVar7 = plVar10;
      }
      iVar5 = UISystem_CallbackHandler(plVar7,0,0);
joined_r0x000180857d6c:
      if (iVar5 != 0) goto LAB_180857c4e;
    }
    if (plVar4 == plVar2) break;
    plVar7 = (int64_t *)(*plVar4 + -0x18);
    if (*plVar4 == 0) {
      plVar7 = plVar10;
    }
    plVar4 = plVar10;
    if (plVar7 != (int64_t *)0x0) {
      plVar4 = plVar7 + 3;
    }
  }
  iVar5 = NetworkProtocol_558e0();
  if (iVar5 == 0) {
    NetworkProtocol_558e0();
  }
LAB_180857c4e:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_57c7a(void)
void NetworkProtocol_57c7a(void)
{
  uint64_t local_var_48;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_57c8f(int32_t param_1)
void NetworkProtocol_57c8f(int32_t param_1)
{
  uint64_t *puVar1;
  int iVar2;
  int *piVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int *in_RCX;
  uint64_t *puVar6;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  int64_t *unaff_R12;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t uVar7;
  int32_t extraout_XMM0_Da_00;
  int8_t astack_special_x_20 [8];
  uint64_t local_var_48;
code_r0x000180857c8f:
  puVar6 = *(uint64_t **)(unaff_R15 + 0x70);
  puVar1 = (uint64_t *)(unaff_R15 + 0x70);
  if (puVar6 == puVar1) goto LAB_180857d7c;
  plVar4 = unaff_RBX + 2;
  if (unaff_RBX == (int64_t *)0x0) {
    plVar4 = unaff_RDI;
  }
  do {
    if ((*(int64_t *)(*plVar4 + 0x10) == puVar6[2]) && (*(int64_t *)(*plVar4 + 0x18) == puVar6[3])
       ) {
      lVar5 = (**(code **)(**(int64_t **)(unaff_RBP + 0x170) + 0x268))
                        (*(int64_t **)(unaff_RBP + 0x170),puVar6 + 4,
                         CONCAT71((int7)((uint64_t)puVar1 >> 8),1));
      if (lVar5 == 0) {
// WARNING: Subroutine does not return
        SystemStateProcessor(puVar6 + 4,astack_special_x_20);
      }
      plVar4 = unaff_RBX + -3;
      if (unaff_RBX == (int64_t *)0x0) {
        plVar4 = unaff_R12;
      }
      iVar2 = UISystem_CallbackHandler(plVar4);
      if (iVar2 != 0) goto LAB_180857c4e;
      uVar7 = NetworkProtocol_c6120(lVar5,*(int32_t *)(unaff_R15 + 0xa0));
      iVar2 = UISystem_EventDispatcher(plVar4,uVar7);
      param_1 = extraout_XMM0_Da_00;
      if (iVar2 != 0) goto LAB_180857c4e;
      break;
    }
    if (puVar6 != puVar1) {
      puVar6 = (uint64_t *)*puVar6;
    }
  } while (puVar6 != puVar1);
  unaff_RDI = (int64_t *)0x28;
LAB_180857d77:
  in_RCX = (int *)0x6c;
LAB_180857d7c:
  if (unaff_RBX == unaff_R14) {
LAB_180857da6:
    iVar2 = NetworkProtocol_558e0();
    if (iVar2 == 0) {
      NetworkProtocol_558e0();
    }
    goto LAB_180857c4e;
  }
  plVar4 = (int64_t *)(*unaff_RBX + -0x18);
  if (*unaff_RBX == 0) {
    plVar4 = unaff_R12;
  }
  unaff_RBX = unaff_R12;
  if (plVar4 != (int64_t *)0x0) {
    unaff_RBX = plVar4 + 3;
  }
  if (unaff_RBX == unaff_R14) goto LAB_180857da6;
  piVar3 = (int *)((int64_t)unaff_RBX + 0x54);
  if (unaff_RBX == (int64_t *)0x0) {
    piVar3 = in_RCX;
  }
  if (*piVar3 != 4) goto code_r0x000180857c3e;
  goto code_r0x000180857c8f;
code_r0x000180857c3e:
  iVar2 = UISystem_CallbackHandler(param_1,0,0);
  param_1 = extraout_XMM0_Da;
  if (iVar2 != 0) {
LAB_180857c4e:
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)&local_buffer_00000000);
  }
  goto LAB_180857d77;
}
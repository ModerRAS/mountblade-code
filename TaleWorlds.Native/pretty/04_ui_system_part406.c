#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part406.c - 21 个函数
// 函数: void NetworkProtocol_8ffdf(void)
void NetworkProtocol_8ffdf(void)
{
  return;
}
uint64_t NetworkProtocol_8fff0(int64_t param_1)
{
  uint64_t uVar1;
  int64_t alStackX_8 [4];
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar1 == 0) {
    *(int8_t *)(*(int64_t *)(alStackX_8[0] + 0x10) + 0x75) = *(int8_t *)(param_1 + 0x18);
    if ((*(int64_t *)(alStackX_8[0] + 8) != 0) && (uVar1 = NetworkProtocol_4ec10(), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t NetworkProtocol_90040(int64_t param_1)
{
  uint64_t uVar1;
  int64_t alStackX_8 [4];
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar1 == 0) {
    *(int8_t *)(*(int64_t *)(alStackX_8[0] + 0x10) + 0x74) = *(int8_t *)(param_1 + 0x18);
    if ((*(int64_t *)(alStackX_8[0] + 8) != 0) && (uVar1 = NetworkProtocol_4ec60(), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t NetworkProtocol_90090(int64_t param_1)
{
  uint64_t uVar1;
  int64_t alStackX_8 [4];
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar1 == 0) {
    *(int32_t *)(*(int64_t *)(alStackX_8[0] + 0x10) + 0x70) = *(int32_t *)(param_1 + 0x18);
    if ((*(int64_t *)(alStackX_8[0] + 8) != 0) && (uVar1 = NetworkProtocol_4ed10(), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_900e0(int64_t param_1,int64_t param_2)
void NetworkProtocol_900e0(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int8_t stack_array_278 [32];
  int64_t alStack_258 [2];
  int8_t *plocal_var_248;
  int iStack_240;
  int32_t local_var_23c;
  int8_t stack_array_238 [512];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_278;
  iVar2 = Function_85b738db(*(int32_t *)(param_1 + 0x10),alStack_258);
  if ((iVar2 == 0) && (*(int64_t *)(alStack_258[0] + 8) != 0)) {
    plocal_var_248 = stack_array_238;
    iVar4 = 0;
    iStack_240 = 0;
    local_var_23c = 0xffffffc0;
    iVar2 = NetworkProtocol_bf350(*(uint64_t *)(param_2 + 0x90),*(int64_t *)(alStack_258[0] + 8),
                          &plocal_var_248);
    if (iVar2 == 0) {
      if (0 < iStack_240) {
        lVar3 = 0;
        do {
          uVar1 = *(uint64_t *)(plocal_var_248 + lVar3);
          iVar2 = SystemCore_StateController(uVar1);
          if (iVar2 != 2) {
// WARNING: Subroutine does not return
            SystemCore_OperationHandler(uVar1,1);
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar4 < iStack_240);
      }
      SystemController(&plocal_var_248);
    }
    else {
      SystemController(&plocal_var_248);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_278);
}
// 函数: void NetworkProtocol_9011d(void)
void NetworkProtocol_9011d(void)
{
  uint64_t uVar1;
  int iVar2;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t lVar3;
  int iVar4;
  int8_t *local_var_30;
  int iStack0000000000000038;
  int32_t local_buffer_3c;
  uint64_t local_var_240;
  if (*(int64_t *)(in_RAX + 8) != 0) {
    local_var_30 = &local_buffer_00000040;
    iVar4 = 0;
    iStack0000000000000038 = 0;
    local_buffer_3c = 0xffffffc0;
    iVar2 = NetworkProtocol_bf350(*(uint64_t *)(unaff_RBX + 0x90),*(int64_t *)(in_RAX + 8),
                          &local_buffer_00000030);
    if (iVar2 == 0) {
      if (0 < iStack0000000000000038) {
        lVar3 = 0;
        do {
          uVar1 = *(uint64_t *)(local_var_30 + lVar3);
          iVar2 = SystemCore_StateController(uVar1);
          if (iVar2 != 2) {
// WARNING: Subroutine does not return
            SystemCore_OperationHandler(uVar1,1);
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar4 < iStack0000000000000038);
      }
      SystemController(&local_buffer_00000030);
    }
    else {
      SystemController(&local_buffer_00000030);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_240 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_9022b(void)
void NetworkProtocol_9022b(void)
{
  uint64_t local_var_240;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_240 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_90246(void)
void NetworkProtocol_90246(void)
{
  int64_t unaff_RBX;
  uint64_t local_var_240;
  if ((*(uint *)(unaff_RBX + 0x2d8) >> 7 & 1) != 0) {
// WARNING: Subroutine does not return
    SystemCore_OperationHandler();
  }
  SystemController(&local_buffer_00000030);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_240 ^ (uint64_t)&local_buffer_00000000);
}
uint64_t NetworkProtocol_90270(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int iVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t local_var_008;
  char acStackX_18 [16];
  uVar4 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&local_buffer_00000008);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar2 = *(int64_t *)(local_var_008 + 8);
  if ((lVar2 == 0) || (*(int64_t *)(lVar2 + 0x48) != local_var_008)) {
    return 0x1c;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x38);
  if (lVar2 == 0) {
    return 0x1f;
  }
  if (*(int *)(lVar2 + 0xe4) == -1) {
    uVar4 = NetworkProtocol_53000(lVar2,acStackX_18);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar5 = Function_9c658beb(lVar2);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((char)uVar4 == (char)uVar5) {
      if (acStackX_18[0] == (char)uVar5) {
        plVar11 = (int64_t *)(lVar1 + 0x4d8);
        uVar8 = 0;
        iVar7 = *(int *)(lVar1 + 0x4e4);
        if (0 < iVar7) {
          plVar6 = (int64_t *)*plVar11;
          uVar10 = uVar8;
          do {
            if (*plVar6 == lVar2) {
              if (-1 < (int)uVar10) {
                return 0;
              }
              break;
            }
            uVar10 = (uint64_t)((int)uVar10 + 1);
            uVar8 = uVar8 + 1;
            plVar6 = plVar6 + 1;
          } while ((int64_t)uVar8 < (int64_t)iVar7);
        }
        iVar7 = iVar7 + 1;
        if (*(int *)(lVar1 + 0x4e8) < iVar7) {
          iVar9 = (int)((float)*(int *)(lVar1 + 0x4e8) * 1.5);
          iVar3 = iVar7;
          if (iVar7 <= iVar9) {
            iVar3 = iVar9;
          }
          if (iVar3 < 8) {
            iVar9 = 8;
          }
          else if (iVar9 < iVar7) {
            iVar9 = iVar7;
          }
          iVar7 = NetworkProtocol_c17c0(plVar11,iVar9);
          if (iVar7 != 0) {
            return 0;
          }
        }
        *(int64_t *)(*plVar11 + (int64_t)*(int *)(lVar1 + 0x4e4) * 8) = lVar2;
        *(int *)(lVar1 + 0x4e4) = *(int *)(lVar1 + 0x4e4) + 1;
        *(int *)(lVar1 + 0x4e0) = *(int *)(lVar1 + 0x4e0) + 1;
      }
      else {
        uVar4 = NetworkProtocol_51490(lVar1 + 0x368,lVar2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
    }
  }
  return 0;
}
uint64_t NetworkProtocol_902b0(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lStackX_8;
  int64_t lStackX_18;
  uVar6 = Function_85b738db(*(int32_t *)(param_1 + 0x18),&lStackX_18);
  iVar4 = (int)uVar6;
  if (iVar4 == 0) {
    plVar10 = (int64_t *)0x0;
    plVar9 = plVar10;
    if (lStackX_18 != 0) {
      plVar9 = (int64_t *)(lStackX_18 + -8);
    }
    uVar6 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_18);
    iVar4 = (int)uVar6;
    if (iVar4 == 0) {
      lStackX_8 = 0;
      uVar5 = NetworkProtocol_8fb40(*(uint64_t *)(param_2 + 0x90),*(int64_t *)(lStackX_18 + 8) + 0x10,
                            &lStackX_8);
      if (uVar5 != 0) {
        NetworkProtocol_67d60(plVar9);
        return (uint64_t)uVar5;
      }
      if (((*(uint *)(*(int64_t *)(lStackX_18 + 8) + 0xf8) >> 2 & 1) == 0) &&
         (uVar6 = Function_5fe30009(lStackX_8), (int)uVar6 != 0)) {
        return uVar6;
      }
      plVar1 = (int64_t *)(lStackX_8 + 0x240);
      plVar7 = (int64_t *)(*plVar1 + -0x18);
      if (*plVar1 == 0) {
        plVar7 = plVar10;
      }
      plVar8 = plVar10;
      plVar2 = plVar10;
      plVar3 = plVar10;
      if (plVar7 != (int64_t *)0x0) {
        plVar8 = plVar7 + 3;
      }
      while( true ) {
        if (plVar8 == plVar1) {
          *(int64_t **)(lStackX_8 + 0x80) = plVar9;
          Function_651c5308(lStackX_8,plVar9);
          plVar9[2] = lStackX_8;
          uVar6 = NetworkProtocol_5ff30(lStackX_8);
          if ((int)uVar6 == 0) {
            return 0;
          }
          return uVar6;
        }
        if ((int)plVar9[5] <= (int)plVar3) {
          return 0x1c;
        }
        plVar7 = plVar8 + 4;
        if (plVar8 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x38;
        }
        *(int64_t *)(plVar9[4] + 8 + (int64_t)plVar2) = *plVar7;
        if (plVar8 == plVar1) break;
        plVar7 = (int64_t *)(*plVar8 + -0x18);
        if (*plVar8 == 0) {
          plVar7 = plVar10;
        }
        plVar8 = plVar10;
        if (plVar7 != (int64_t *)0x0) {
          plVar8 = plVar7 + 3;
        }
        plVar2 = plVar2 + 3;
        plVar3 = (int64_t *)(uint64_t)((int)plVar3 + 1);
      }
      return 0x1c;
    }
  }
  if (iVar4 == 0x1e) {
    return 0;
  }
  return uVar6;
}
uint64_t NetworkProtocol_90450(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t alStackX_8 [2];
  uVar3 = Function_85b738db(*(int32_t *)(param_1 + 0x10),alStackX_8);
  lVar1 = alStackX_8[0];
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  *(int *)(alStackX_8[0] + 0x4c) = *(int *)(alStackX_8[0] + 0x4c) + 1;
  if (*(int *)(alStackX_8[0] + 0x58) + *(int *)(alStackX_8[0] + 0x54) +
      *(int *)(alStackX_8[0] + 0x4c) == 1) {
    alStackX_8[0] = 0;
    iVar2 = SystemSecurityProcessor(alStackX_8);
    if (iVar2 == 0) {
      iVar2 = NetworkProtocol_c7b30(lVar1,*(uint64_t *)(lVar1 + 8),*(uint64_t *)(param_2 + 0x90),
                            *(uint64_t *)(param_2 + 800));
      if (iVar2 == 0) {
// WARNING: Subroutine does not return
        AdvancedSystemProcessor(alStackX_8);
      }
    }
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(alStackX_8);
  }
  return 0;
}
uint64_t NetworkProtocol_90490(int64_t param_1)
{
  uint *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t alStackX_8 [4];
  uVar3 = Function_85b738db(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar3 == 0) {
    plVar4 = *(int64_t **)(alStackX_8[0] + 0x20);
    while ((*(int64_t **)(alStackX_8[0] + 0x20) <= plVar4 &&
           (plVar4 < *(int64_t **)(alStackX_8[0] + 0x20) + *(int *)(alStackX_8[0] + 0x28)))) {
      lVar2 = *plVar4;
      plVar4 = plVar4 + 1;
      if ((*(int64_t *)(lVar2 + 0x18) == *(int64_t *)(alStackX_8[0] + 8)) &&
         (lVar2 = *(int64_t *)(lVar2 + 0x10), lVar2 != 0)) {
        puVar1 = (uint *)(lVar2 + 0x2d8);
        *puVar1 = *puVar1 | 4;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t NetworkProtocol_90500(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t alStackX_8 [2];
  uVar2 = Function_85b738db(*(int32_t *)(param_1 + 0x10),alStackX_8);
  lVar1 = alStackX_8[0];
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(alStackX_8[0] + 0x4c) < 1) {
    return 0x1c;
  }
  iVar3 = *(int *)(alStackX_8[0] + 0x4c) + -1;
  *(int *)(alStackX_8[0] + 0x4c) = iVar3;
  if (*(int *)(alStackX_8[0] + 0x58) + *(int *)(alStackX_8[0] + 0x54) + iVar3 != 0) {
    return 0;
  }
  alStackX_8[0] = 0;
  iVar3 = SystemSecurityProcessor(alStackX_8);
  if (iVar3 == 0) {
    iVar3 = NetworkProtocol_c7dc0(lVar1,0);
    if (iVar3 == 0) {
      iVar3 = NetworkProtocol_8ac50(param_2);
      if (iVar3 == 0) {
// WARNING: Subroutine does not return
        AdvancedSystemProcessor(alStackX_8);
      }
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStackX_8);
}
uint64_t NetworkProtocol_90540(int64_t param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t alStackX_8 [4];
  uVar2 = Function_85b738db(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (alStackX_8[0] != 0) {
    alStackX_8[0] = alStackX_8[0] + -8;
  }
  lVar1 = *(int64_t *)(alStackX_8[0] + 0x10);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 500) = *(int *)(lVar1 + 500) + 1;
    if ((*(char *)(lVar1 + 0x204) != '\0') && (uVar2 = NetworkProtocol_552c0(), (int)uVar2 != 0)) {
      return uVar2;
    }
    return 0;
  }
  return 0x1c;
}
uint64_t NetworkProtocol_90590(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lStackX_8;
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 == 0) {
    if (lStackX_8 == 0) {
      lStackX_8 = 0;
    }
    else {
      lStackX_8 = lStackX_8 + -8;
    }
    if (*(int64_t *)(lStackX_8 + 0x10) != 0) {
// WARNING: Subroutine does not return
      SystemCore_OperationHandler(*(int64_t *)(lStackX_8 + 0x10),1);
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t NetworkProtocol_905ae(void)
{
  int64_t in_RAX;
  int64_t lVar1;
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) != 0) {
// WARNING: Subroutine does not return
    SystemCore_OperationHandler(*(int64_t *)(lVar1 + 0x10),1);
  }
  return 0;
}
uint64_t NetworkProtocol_9062a(char param_1)
{
  if (param_1 != '\0') {
// WARNING: Subroutine does not return
    SystemCore_OperationHandler();
  }
  return 0;
}
// 函数: void NetworkProtocol_9064b(void)
void NetworkProtocol_9064b(void)
{
  return;
}
uint64_t NetworkProtocol_90650(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lStackX_8;
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lStackX_8 + 0x10),1);
}
int32_t NetworkProtocol_90673(void)
{
  int64_t in_RAX;
  int64_t lVar1;
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lVar1 + 0x10),1);
}
// 函数: void NetworkProtocol_9069c(void)
void NetworkProtocol_9069c(void)
{
// WARNING: Subroutine does not return
  SystemCore_OperationHandler();
}
// 函数: void NetworkProtocol_906f0(void)
void NetworkProtocol_906f0(void)
{
  return;
}
uint64_t NetworkProtocol_90700(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lStackX_8;
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lStackX_8 + 0x10),1);
}
int32_t NetworkProtocol_90723(void)
{
  int64_t in_RAX;
  int64_t lVar1;
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lVar1 + 0x10),1);
}
// 函数: void NetworkProtocol_9074c(void)
void NetworkProtocol_9074c(void)
{
// WARNING: Subroutine does not return
  SystemCore_OperationHandler();
}
// 函数: void NetworkProtocol_9079f(void)
void NetworkProtocol_9079f(void)
{
  return;
}
uint64_t NetworkProtocol_907b0(int64_t param_1)
{
  uint64_t uVar1;
  int64_t alStackX_8 [2];
  int64_t alStackX_18 [2];
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),alStackX_18);
  if ((int)uVar1 == 0) {
    if (alStackX_18[0] == 0) {
      alStackX_18[0] = 0;
    }
    else {
      alStackX_18[0] = alStackX_18[0] + -8;
    }
    alStackX_8[0] = 0;
    uVar1 = NetworkProtocol_681d0(alStackX_18[0],param_1 + 0x18,alStackX_8);
    if ((int)uVar1 == 0) {
      if (alStackX_8[0] != 0) {
        if (*(int64_t *)(alStackX_8[0] + 8) == 0) {
          return 0x1c;
        }
        uVar1 = UtilitiesSystem_StringProcessor(*(int64_t *)(alStackX_8[0] + 8),*(int32_t *)(param_1 + 0x20),
                              *(int8_t *)(param_1 + 0x24));
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
uint64_t NetworkProtocol_90830(int64_t param_1)
{
  uint64_t uVar1;
  int64_t alStackX_8 [2];
  int64_t alStackX_18 [2];
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),alStackX_18);
  if ((int)uVar1 == 0) {
    if (alStackX_18[0] == 0) {
      alStackX_18[0] = 0;
    }
    else {
      alStackX_18[0] = alStackX_18[0] + -8;
    }
    alStackX_8[0] = 0;
    uVar1 = NetworkProtocol_681d0(alStackX_18[0],param_1 + 0x20,alStackX_8);
    if ((int)uVar1 == 0) {
      if (alStackX_8[0] != 0) {
        if (*(int64_t *)(alStackX_8[0] + 8) == 0) {
          return 0x1c;
        }
        uVar1 = UtilitiesSystem_StringProcessor(*(int64_t *)(alStackX_8[0] + 8),*(int32_t *)(param_1 + 0x18),
                              *(int8_t *)(param_1 + 0x1c));
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}
// WARNING: Removing unreachable block (ram,0x0001808d7494)
// WARNING: Removing unreachable block (ram,0x0001808d74a4)
// WARNING: Removing unreachable block (ram,0x0001808d74b1)
uint64_t NetworkProtocol_908b0(int64_t param_1)
{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  float fVar7;
  int8_t auVar8 [16];
  int64_t lStackX_8;
  uVar4 = Function_85b738db(*(int32_t *)(param_1 + 0x1c),&lStackX_8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar1 = *(int64_t *)(lStackX_8 + 8);
  if (lVar1 != 0) {
    fVar7 = *(float *)(param_1 + 0x20);
    for (puVar5 = *(uint64_t **)(lVar1 + 0x48);
        (*(uint64_t **)(lVar1 + 0x48) <= puVar5 &&
        (puVar5 < *(uint64_t **)(lVar1 + 0x48) + *(int *)(lVar1 + 0x50))); puVar5 = puVar5 + 1) {
      uVar4 = UtilitiesSystem_StringProcessor(*puVar5,fVar7,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    if ((*(char *)(lVar1 + 0x34) == '\0') ||
       ((*(uint *)(*(int64_t *)(lVar1 + 0x18) + 0x34) >> 1 & 1) == 0)) {
      uVar3 = *(uint *)(*(int64_t *)(lVar1 + 0x18) + 0x34);
      uVar2 = uVar3 >> 4;
      if ((uVar2 & 1) == 0) {
        if ((((uVar3 >> 3 & 1) != 0) && (iVar6 = (int)fVar7, iVar6 != -0x80000000)) &&
           ((float)iVar6 != fVar7)) {
          auVar8._4_4_ = fVar7;
          auVar8._0_4_ = fVar7;
          auVar8._8_8_ = 0;
          uVar3 = movmskps(uVar2,auVar8);
          fVar7 = (float)(int)(iVar6 - (uVar3 & 1));
        }
        fVar7 = (float)Function_8140fdc0(*(int64_t *)(lVar1 + 0x18),fVar7);
        if (((*(char *)(lVar1 + 0x34) == '\0') ||
            ((*(uint *)(*(int64_t *)(lVar1 + 0x18) + 0x34) >> 1 & 1) == 0)) &&
           (fVar7 != *(float *)(lVar1 + 0x20))) {
          *(float *)(lVar1 + 0x20) = fVar7;
          NetworkProtocol_d7020(lVar1);
          *(int8_t *)(lVar1 + 0x35) = 0;
        }
      }
    }
    return 0;
  }
  return 0x1c;
}
uint64_t NetworkProtocol_90900(int64_t param_1)
{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lStackX_8;
  uVar3 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar3 == 0) {
    uVar7 = 0;
    uVar5 = lStackX_8 - 8;
    if (lStackX_8 == 0) {
      uVar5 = uVar7;
    }
    puVar4 = (int32_t *)(param_1 + 0x20 + (int64_t)*(int *)(param_1 + 0x18) * 4);
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar8 = (param_1 + 0x20) - (int64_t)puVar4;
      do {
        iVar2 = *(int *)(lVar8 + (int64_t)puVar4);
        if (iVar2 != -1) {
          lVar1 = *(int64_t *)(uVar5 + 0x20) + (int64_t)iVar2 * 0x18;
          if ((lVar1 == 0) || (lVar1 = *(int64_t *)(lVar1 + 8), lVar1 == 0)) {
            return 0x1c;
          }
          uVar3 = UtilitiesSystem_StringProcessor(lVar1,*puVar4,0);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (uint64_t)uVar6;
        puVar4 = puVar4 + 1;
      } while ((int)uVar6 < *(int *)(param_1 + 0x18));
    }
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t NetworkProtocol_90923(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  int64_t unaff_RSI;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uVar7 = 0;
  uVar5 = in_RAX - 8;
  if (in_RAX == 0) {
    uVar5 = uVar7;
  }
  puVar4 = (int32_t *)(unaff_RSI + 0x20 + (int64_t)*(int *)(unaff_RSI + 0x18) * 4);
  if (0 < *(int *)(unaff_RSI + 0x18)) {
    lVar8 = (unaff_RSI + 0x20) - (int64_t)puVar4;
    do {
      iVar2 = *(int *)(lVar8 + (int64_t)puVar4);
      if (iVar2 != -1) {
        lVar1 = *(int64_t *)(uVar5 + 0x20) + (int64_t)iVar2 * 0x18;
        if ((lVar1 == 0) || (lVar1 = *(int64_t *)(lVar1 + 8), lVar1 == 0)) {
          return 0x1c;
        }
        uVar3 = UtilitiesSystem_StringProcessor(lVar1,*puVar4,0);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      puVar4 = puVar4 + 1;
    } while ((int)uVar6 < *(int *)(unaff_RSI + 0x18));
  }
  return 0;
}
// 函数: void NetworkProtocol_909b4(void)
void NetworkProtocol_909b4(void)
{
  return;
}
uint64_t NetworkProtocol_909ba(void)
{
  return 0x1c;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_909d0(int64_t param_1)
{
  uint64_t uVar1;
  int *piVar2;
  int32_t *puVar3;
  uint uVar4;
  uint64_t uVar6;
  int64_t lStackX_8;
  uint64_t uVar5;
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 == 0) {
    uVar5 = 0;
    uVar6 = lStackX_8 - 8;
    if (lStackX_8 == 0) {
      uVar6 = uVar5;
    }
    puVar3 = (int32_t *)(param_1 + 0x20 + (int64_t)*(int *)(param_1 + 0x18) * 8);
    piVar2 = (int *)(param_1 + 0x20);
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        if ((*piVar2 != ui_system_memory) || (piVar2[1] != ui_system_memory)) {
          lStackX_8 = 0;
          uVar1 = NetworkProtocol_681d0(uVar6,(int *)(param_1 + 0x20) + (int64_t)(int)uVar5 * 2,&lStackX_8)
          ;
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          if (*(int64_t *)(lStackX_8 + 8) == 0) {
            return 0x1c;
          }
          uVar1 = UtilitiesSystem_StringProcessor(*(int64_t *)(lStackX_8 + 8),*puVar3,*(int8_t *)(param_1 + 0x1c)
                               );
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
        puVar3 = puVar3 + 1;
        piVar2 = piVar2 + 2;
      } while ((int)uVar4 < *(int *)(param_1 + 0x18));
    }
    uVar1 = 0;
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_909f3(void)
{
  int64_t in_RAX;
  uint64_t uVar1;
  int *piVar2;
  int64_t unaff_RBP;
  int32_t *puVar3;
  uint uVar4;
  uint64_t uVar6;
  int64_t lStack0000000000000050;
  uint64_t uVar5;
  uVar5 = 0;
  uVar6 = in_RAX - 8;
  if (in_RAX == 0) {
    uVar6 = uVar5;
  }
  puVar3 = (int32_t *)(unaff_RBP + 0x20 + (int64_t)*(int *)(unaff_RBP + 0x18) * 8);
  piVar2 = (int *)(unaff_RBP + 0x20);
  if (0 < *(int *)(unaff_RBP + 0x18)) {
    do {
      if ((*piVar2 != ui_system_memory) || (piVar2[1] != ui_system_memory)) {
        lStack0000000000000050 = 0;
        uVar1 = NetworkProtocol_681d0(uVar6,(int *)(unaff_RBP + 0x20) + (int64_t)(int)uVar5 * 2,
                              &local_buffer_00000050);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (*(int64_t *)(lStack0000000000000050 + 8) == 0) {
          return 0x1c;
        }
        uVar1 = UtilitiesSystem_StringProcessor(*(int64_t *)(lStack0000000000000050 + 8),*puVar3,
                              *(int8_t *)(unaff_RBP + 0x1c));
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      puVar3 = puVar3 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar4 < *(int *)(unaff_RBP + 0x18));
  }
  return 0;
}
// 函数: void NetworkProtocol_90ac1(void)
void NetworkProtocol_90ac1(void)
{
  return;
}
uint64_t NetworkProtocol_90ac7(void)
{
  return 0x1c;
}
uint64_t NetworkProtocol_90ad0(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lStackX_8;
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lStackX_8 + 0x10),1);
}
int32_t NetworkProtocol_90aef(void)
{
  int64_t in_RAX;
  int64_t lVar1;
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lVar1 + 0x10),1);
}
// 函数: void NetworkProtocol_90b18(void)
void NetworkProtocol_90b18(void)
{
// WARNING: Subroutine does not return
  SystemCore_OperationHandler();
}
// 函数: void NetworkProtocol_90b65(void)
void NetworkProtocol_90b65(void)
{
  return;
}
uint64_t NetworkProtocol_90b70(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lStackX_8;
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lStackX_8 + 0x10),1);
}
int32_t NetworkProtocol_90b8f(void)
{
  int64_t in_RAX;
  int64_t lVar1;
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lVar1 + 0x10),1);
}
// 函数: void NetworkProtocol_90bb8(void)
void NetworkProtocol_90bb8(void)
{
// WARNING: Subroutine does not return
  SystemCore_OperationHandler();
}
// 函数: void NetworkProtocol_90c06(void)
void NetworkProtocol_90c06(void)
{
  return;
}
uint64_t NetworkProtocol_90c10(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lStackX_8;
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  lVar2 = lStackX_8 + -8;
  if (lStackX_8 == 0) {
    lVar2 = 0;
  }
  if (*(int64_t *)(lVar2 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lVar2 + 0x10),1);
}
int32_t NetworkProtocol_90c33(void)
{
  int64_t in_RAX;
  int64_t lVar1;
  lVar1 = in_RAX + -8;
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lVar1 + 0x10),1);
}
// 函数: void NetworkProtocol_90c66(void)
void NetworkProtocol_90c66(void)
{
// WARNING: Subroutine does not return
  SystemCore_OperationHandler();
}
// 函数: void NetworkProtocol_90d39(void)
void NetworkProtocol_90d39(void)
{
  return;
}
uint64_t NetworkProtocol_90d60(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lStackX_8;
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lStackX_8 + 0x10),1);
}
int32_t NetworkProtocol_90d83(void)
{
  int64_t in_RAX;
  int64_t lVar1;
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lVar1 + 0x10),1);
}
// 函数: void NetworkProtocol_90dac(void)
void NetworkProtocol_90dac(void)
{
// WARNING: Subroutine does not return
  SystemCore_OperationHandler();
}
// 函数: void NetworkProtocol_90e03(void)
void NetworkProtocol_90e03(void)
{
  return;
}
uint64_t NetworkProtocol_90e10(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lStackX_8;
  uVar1 = Function_85b738db(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (lStackX_8 == 0) {
    lStackX_8 = 0;
  }
  else {
    lStackX_8 = lStackX_8 + -8;
  }
  if (*(int64_t *)(lStackX_8 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lStackX_8 + 0x10),1);
}
int32_t NetworkProtocol_90e33(void)
{
  int64_t in_RAX;
  int64_t lVar1;
  if (in_RAX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = in_RAX + -8;
  }
  if (*(int64_t *)(lVar1 + 0x10) == 0) {
    return 0x1c;
  }
// WARNING: Subroutine does not return
  SystemCore_OperationHandler(*(int64_t *)(lVar1 + 0x10),1);
}
// 函数: void NetworkProtocol_90e5c(void)
void NetworkProtocol_90e5c(void)
{
// WARNING: Subroutine does not return
  SystemCore_OperationHandler();
}
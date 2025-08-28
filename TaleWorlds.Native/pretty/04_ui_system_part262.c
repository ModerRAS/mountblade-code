#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part262.c - 2 个函数
// 函数: void NetworkProtocol_17d10(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void NetworkProtocol_17d10(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6)
{
  if ((param_2 != 0) && (*(code **)(param_6 + 8) != (code *)0x0)) {
    (**(code **)(param_6 + 8))(param_2,0,1);
  }
// WARNING: Subroutine does not return
  memset(param_3 + 8,0,0x328);
}
uint64_t NetworkProtocol_17f70(uint64_t param_1,uint64_t *param_2)
{
  int32_t uVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int32_t astack_special_x_10 [2];
  uint64_t astack_special_x_18 [2];
  if (*(int *)(param_2 + 0x10) != 1) {
    return 0xffffff7d;
  }
  *(int32_t *)(param_2 + 0x10) = 2;
  if (*(int *)(param_2 + 1) == 0) {
    *(int32_t *)(param_2 + 0x10) = 3;
    return 0;
  }
  lVar6 = -1;
  uVar1 = *(int32_t *)(param_2 + 0x3f);
  uVar2 = *(uint64_t *)param_2[10];
  astack_special_x_18[0] = 0xffffffffffffffff;
  astack_special_x_10[0] = uVar1;
  lVar5 = NetworkProtocol_1a430(param_1,param_2,param_2[0xd]);
  if (((code *)param_2[99] != (code *)0x0) && (param_2[0x65] != 0)) {
    (*(code *)param_2[99])(*param_2,0,2);
    iVar3 = (*(code *)param_2[0x65])(*param_2);
    lVar6 = (int64_t)iVar3;
  }
  param_2[3] = lVar6;
  param_2[2] = lVar6;
  if (param_2[3] == -1) {
    uVar7 = 0xffffff7d;
  }
  else {
    uVar7 = NetworkProtocol_1a260(param_1,param_2,param_2[0xb] + 8,*(int32_t *)(param_2[0xb] + 4),
                          astack_special_x_10,astack_special_x_18);
    if (-1 < (int64_t)uVar7) {
      iVar3 = NetworkProtocol_19460(param_1,param_2,0,uVar2,param_2[2],astack_special_x_18[0],astack_special_x_10[0],
                            param_2[0xb] + 8,*(int32_t *)(param_2[0xb] + 4),0);
      if (iVar3 < 0) {
        uVar7 = 0xffffff80;
        goto LAB_180818104;
      }
      *(uint64_t *)param_2[9] = 0;
      *(int32_t *)param_2[0xb] = uVar1;
      *(uint64_t *)param_2[10] = uVar2;
      *(int64_t *)param_2[0xc] = lVar5;
      *(int64_t *)(param_2[0xc] + 8) = *(int64_t *)(param_2[0xc] + 8) - lVar5;
      uVar4 = NetworkProtocol_18c50(param_1,param_2,uVar2);
      uVar7 = (uint64_t)uVar4;
    }
    if ((int)uVar7 == 0) goto LAB_180818116;
  }
LAB_180818104:
  *param_2 = 0;
  NetworkProtocol_17b30(param_1,param_2);
LAB_180818116:
  return uVar7 & 0xffffffff;
}
uint64_t NetworkProtocol_17fb7(uint64_t param_1,int64_t param_2)
{
  int32_t uVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  uint64_t *in_RAX;
  int64_t lVar5;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  uint64_t uVar6;
  int32_t local_buffer_88;
  uVar1 = *(int32_t *)(param_2 + 0x1f8);
  uVar2 = *in_RAX;
  local_buffer_88 = uVar1;
  lVar5 = NetworkProtocol_1a430();
  if (((code *)unaff_RBX[99] != (code *)0x0) && (unaff_RBX[0x65] != 0)) {
    (*(code *)unaff_RBX[99])(*unaff_RBX,0,(int)unaff_RDI + 3);
    iVar3 = (*(code *)unaff_RBX[0x65])(*unaff_RBX);
    unaff_RDI = (int64_t)iVar3;
  }
  unaff_RBX[3] = unaff_RDI;
  unaff_RBX[2] = unaff_RDI;
  if (unaff_RBX[3] == -1) {
    uVar6 = 0xffffff7d;
  }
  else {
    uVar6 = NetworkProtocol_1a260();
    if (-1 < (int64_t)uVar6) {
      iVar3 = NetworkProtocol_19460();
      if (iVar3 < 0) {
        uVar6 = 0xffffff80;
        goto LAB_180818104;
      }
      *(uint64_t *)unaff_RBX[9] = 0;
      *(int32_t *)unaff_RBX[0xb] = uVar1;
      *(uint64_t *)unaff_RBX[10] = uVar2;
      *(int64_t *)unaff_RBX[0xc] = lVar5;
      *(int64_t *)(unaff_RBX[0xc] + 8) = *(int64_t *)(unaff_RBX[0xc] + 8) - lVar5;
      uVar4 = NetworkProtocol_18c50();
      uVar6 = (uint64_t)uVar4;
    }
    if ((int)uVar6 == 0) goto LAB_180818116;
  }
LAB_180818104:
  *unaff_RBX = 0;
  NetworkProtocol_17b30();
LAB_180818116:
  return uVar6 & 0xffffffff;
}
uint64_t NetworkProtocol_18132(uint64_t param_1,int64_t param_2)
{
  *(int32_t *)(param_2 + 0x80) = 3;
  return 0;
}
// 函数: void NetworkProtocol_18150(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void NetworkProtocol_18150(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int iVar1;
  iVar1 = NetworkProtocol_17d10();
  if (iVar1 == 0) {
    NetworkProtocol_17f70(param_1,param_3);
  }
  return;
}
uint64_t NetworkProtocol_181b0(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int *piVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int8_t stack_array_78 [32];
  int8_t stack_array_58 [24];
  int64_t lStack_40;
  uVar12 = 0;
  uVar6 = NetworkProtocol_184f0();
  if (((int)uVar6 < 0) || (uVar6 = NetworkProtocol_1a600(param_1,param_2), uVar10 = uVar12, (int)uVar6 != 0)
     ) {
    return uVar6;
  }
  do {
    while (iVar2 = SystemFunction_00018082fa00(param_2 + 0x98,stack_array_58), 0 < iVar2) {
      uVar3 = NetworkProtocol_317a0(*(int64_t *)(param_2 + 0x68) +
                            (int64_t)*(int *)(param_2 + 0x88) * 0x28,stack_array_58);
      if ((int)uVar3 < 0) {
        SystemFunction_00018082f9e0(param_2 + 0x98,0);
      }
      else {
        if ((int)uVar10 != 0) {
          *(int64_t *)(param_2 + 0x78) =
               *(int64_t *)(param_2 + 0x78) + ((int64_t)(int)(uVar3 + (int)uVar10) >> 2);
        }
        iVar2 = Function_a9abc81f(*(uint64_t *)(param_2 + 0x68),1);
        if (param_3 <= ((int64_t)(int)(iVar2 + uVar3) >> 2) + *(int64_t *)(param_2 + 0x78)) {
LAB_18081843e:
          lVar11 = *(int64_t *)(param_2 + 0x78);
          *(uint64_t *)(param_2 + 0x8c) = 0;
          while (lVar11 < param_3) {
            lVar11 = param_3 - lVar11;
            iVar2 = NetworkProtocol_31150(param_2 + 0x210,0);
            if (lVar11 < iVar2) {
              iVar2 = (int)lVar11;
            }
            SystemFunction_0001808311d0(param_2 + 0x210);
            *(int64_t *)(param_2 + 0x78) = *(int64_t *)(param_2 + 0x78) + (int64_t)iVar2;
            if ((iVar2 < lVar11) && (iVar2 = NetworkProtocol_19980(param_1,param_2,0,1,1), iVar2 < 1)) {
              uVar6 = NetworkProtocol_18bd0(param_2);
              *(uint64_t *)(param_2 + 0x78) = uVar6;
            }
            lVar11 = *(int64_t *)(param_2 + 0x78);
          }
          return 0;
        }
        SystemFunction_00018082f9e0(param_2 + 0x98,0);
        uVar6 = NetworkProtocol_319c0(param_1,param_2 + 0x288);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        NetworkProtocol_30680(param_2 + 0x210,param_2 + 0x288);
        if (-1 < lStack_40) {
          uVar1 = *(uint *)(param_2 + 0x88);
          uVar8 = (uint64_t)uVar1;
          uVar10 = lStack_40 -
                   *(int64_t *)(*(int64_t *)(param_2 + 0x60) + (int64_t)(int)(uVar1 * 2) * 8);
          *(uint64_t *)(param_2 + 0x78) = uVar10;
          if ((int64_t)uVar10 < 0) {
            *(uint64_t *)(param_2 + 0x78) = 0;
            uVar10 = uVar12;
          }
          if (0 < (int)uVar1) {
            plVar7 = (int64_t *)(*(int64_t *)(param_2 + 0x60) + 8);
            do {
              uVar10 = uVar10 + *plVar7;
              plVar7 = plVar7 + 2;
              *(uint64_t *)(param_2 + 0x78) = uVar10;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
        uVar10 = (uint64_t)uVar3;
      }
    }
    if ((((iVar2 + 0x80000000U & 0x80000000) == 0) && (iVar2 != -3)) ||
       (lVar11 = NetworkProtocol_1a120(param_1,param_2,stack_array_78,0xffffffffffffffff), lVar11 < 0))
    goto LAB_18081843e;
    iVar2 = Function_1934ec8c(stack_array_78);
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 0x80) < 3) goto LAB_1808183a8;
      goto LAB_180818425;
    }
    NetworkProtocol_30440(param_1,param_2 + 0x210);
    NetworkProtocol_30310(param_1,param_2 + 0x288);
    *(int32_t *)(param_2 + 0x80) = 2;
LAB_1808183a8:
    iVar4 = Function_369cca0c(stack_array_78);
    iVar2 = *(int *)(param_2 + 0x40);
    uVar8 = uVar12;
    if (0 < iVar2) {
      piVar9 = *(int **)(param_2 + 0x58);
      do {
        if (*piVar9 == iVar4) break;
        uVar3 = (int)uVar8 + 1;
        uVar8 = (uint64_t)uVar3;
        piVar9 = piVar9 + 1;
      } while ((int)uVar3 < iVar2);
    }
    if ((int)uVar8 != iVar2) {
      *(int *)(param_2 + 0x88) = (int)uVar8;
      *(int32_t *)(param_2 + 0x80) = 3;
      uVar5 = Function_369cca0c(stack_array_78);
      *(int32_t *)(param_2 + 0x84) = uVar5;
      Function_50203894(param_2 + 0x98,iVar4);
      uVar6 = NetworkProtocol_1a600(param_1,param_2);
      uVar10 = uVar12;
      if ((int)uVar6 != 0) {
        return uVar6;
      }
LAB_180818425:
      NetworkProtocol_2fa20(param_1,param_2 + 0x98,stack_array_78);
    }
  } while( true );
}
uint64_t NetworkProtocol_181ef(void)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int *piVar8;
  uint uVar9;
  uint64_t uVar10;
  uint unaff_EBP;
  int64_t unaff_RSI;
  int64_t lVar11;
  int64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t local_var_68;
  do {
    while (iVar2 = SystemFunction_00018082fa00(unaff_RSI + 0x98,&local_buffer_00000050), 0 < iVar2) {
      uVar3 = NetworkProtocol_317a0(*(int64_t *)(unaff_RSI + 0x68) +
                            (int64_t)*(int *)(unaff_RSI + 0x88) * 0x28,&local_buffer_00000050);
      if ((int)uVar3 < 0) {
        SystemFunction_00018082f9e0(unaff_RSI + 0x98,0);
      }
      else {
        if (unaff_EBP != 0) {
          *(int64_t *)(unaff_RSI + 0x78) =
               *(int64_t *)(unaff_RSI + 0x78) + ((int64_t)(int)(uVar3 + unaff_EBP) >> 2);
        }
        iVar2 = Function_a9abc81f(*(uint64_t *)(unaff_RSI + 0x68),1);
        if (unaff_R12 <= ((int64_t)(int)(iVar2 + uVar3) >> 2) + *(int64_t *)(unaff_RSI + 0x78)) {
LAB_18081843e:
          lVar11 = *(int64_t *)(unaff_RSI + 0x78);
          *(uint64_t *)(unaff_RSI + 0x8c) = unaff_R13;
          while (lVar11 < unaff_R12) {
            lVar11 = unaff_R12 - lVar11;
            iVar2 = NetworkProtocol_31150(unaff_RSI + 0x210,0);
            if (lVar11 < iVar2) {
              iVar2 = (int)lVar11;
            }
            SystemFunction_0001808311d0(unaff_RSI + 0x210);
            *(int64_t *)(unaff_RSI + 0x78) = *(int64_t *)(unaff_RSI + 0x78) + (int64_t)iVar2;
            if ((iVar2 < lVar11) && (iVar2 = NetworkProtocol_19980(), iVar2 < 1)) {
              uVar5 = NetworkProtocol_18bd0();
              *(uint64_t *)(unaff_RSI + 0x78) = uVar5;
            }
            lVar11 = *(int64_t *)(unaff_RSI + 0x78);
          }
          return 0;
        }
        SystemFunction_00018082f9e0(unaff_RSI + 0x98,0);
        uVar5 = NetworkProtocol_319c0();
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        NetworkProtocol_30680(unaff_RSI + 0x210,unaff_RSI + 0x288);
        unaff_EBP = uVar3;
        if (-1 < local_var_68) {
          uVar3 = *(uint *)(unaff_RSI + 0x88);
          uVar7 = (uint64_t)uVar3;
          uVar10 = local_var_68 -
                   *(int64_t *)(*(int64_t *)(unaff_RSI + 0x60) + (int64_t)(int)(uVar3 * 2) * 8);
          *(uint64_t *)(unaff_RSI + 0x78) = uVar10;
          if ((int64_t)uVar10 < 0) {
            *(uint64_t *)(unaff_RSI + 0x78) = unaff_R13;
            uVar10 = unaff_R13;
          }
          if (0 < (int)uVar3) {
            plVar6 = (int64_t *)(*(int64_t *)(unaff_RSI + 0x60) + 8);
            do {
              uVar10 = uVar10 + *plVar6;
              plVar6 = plVar6 + 2;
              *(uint64_t *)(unaff_RSI + 0x78) = uVar10;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
        }
      }
    }
    if ((((iVar2 + 0x80000000U & 0x80000000) == 0) && (iVar2 != -3)) ||
       (lVar11 = NetworkProtocol_1a120(), lVar11 < 0)) goto LAB_18081843e;
    iVar2 = Function_1934ec8c(&local_buffer_00000030);
    if (iVar2 == 0) {
      uVar3 = unaff_EBP;
      if (*(int *)(unaff_RSI + 0x80) < 3) goto LAB_1808183a8;
      goto LAB_180818425;
    }
    NetworkProtocol_30440();
    NetworkProtocol_30310();
    *(int32_t *)(unaff_RSI + 0x80) = 2;
LAB_1808183a8:
    iVar2 = Function_369cca0c(&local_buffer_00000030);
    uVar1 = *(uint *)(unaff_RSI + 0x40);
    uVar3 = (uint)unaff_R13;
    uVar10 = unaff_R13 & 0xffffffff;
    uVar9 = uVar3;
    if (0 < (int)uVar1) {
      piVar8 = *(int **)(unaff_RSI + 0x58);
      do {
        uVar9 = (uint)uVar10;
        if (*piVar8 == iVar2) break;
        uVar9 = uVar9 + 1;
        uVar10 = (uint64_t)uVar9;
        piVar8 = piVar8 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    if (uVar9 != uVar1) {
      *(uint *)(unaff_RSI + 0x88) = uVar9;
      *(int32_t *)(unaff_RSI + 0x80) = 3;
      uVar4 = Function_369cca0c(&local_buffer_00000030);
      *(int32_t *)(unaff_RSI + 0x84) = uVar4;
      Function_50203894(unaff_RSI + 0x98,iVar2);
      uVar5 = NetworkProtocol_1a600();
      if ((int)uVar5 != 0) {
        return uVar5;
      }
LAB_180818425:
      NetworkProtocol_2fa20();
      unaff_EBP = uVar3;
    }
  } while( true );
}
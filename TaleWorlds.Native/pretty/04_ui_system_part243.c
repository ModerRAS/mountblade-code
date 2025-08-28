#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part243.c - 1 个函数
// 函数: void NetworkProtocol_072f0(void)
void NetworkProtocol_072f0(void)
{
  NetworkProtocol_07d00();
  return;
}
uint64_t NetworkProtocol_07360(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  plVar1 = (int64_t *)calloc(1);
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = calloc(1);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = calloc(1,0x1ad8);
      plVar1[1] = lVar2;
      if (lVar2 != 0) {
        uVar3 = SystemFunction_000180824bd0();
        *(uint64_t *)(plVar1[1] + 0x78) = uVar3;
        lVar2 = plVar1[1];
        if (*(int64_t *)(lVar2 + 0x78) != 0) {
          *(uint64_t *)(lVar2 + 0x550) = 0x10;
          lVar2 = malloc(*(int64_t *)(plVar1[1] + 0x550) * 4);
          *(int64_t *)(plVar1[1] + 0x540) = lVar2;
          if (lVar2 != 0) {
            lVar2 = 0;
            *(uint64_t *)(plVar1[1] + 0x80) = 0;
            lVar4 = 8;
            *(uint64_t *)(plVar1[1] + 0xc0) = 0;
            *(uint64_t *)(plVar1[1] + 0xfc8) = 0;
            *(uint64_t *)(plVar1[1] + 0x88) = 0;
            *(uint64_t *)(plVar1[1] + 200) = 0;
            *(uint64_t *)(plVar1[1] + 0xfd0) = 0;
            *(uint64_t *)(plVar1[1] + 0x90) = 0;
            *(uint64_t *)(plVar1[1] + 0xd0) = 0;
            *(uint64_t *)(plVar1[1] + 0xfd8) = 0;
            *(uint64_t *)(plVar1[1] + 0x98) = 0;
            *(uint64_t *)(plVar1[1] + 0xd8) = 0;
            *(uint64_t *)(plVar1[1] + 0xfe0) = 0;
            *(uint64_t *)(plVar1[1] + 0xa0) = 0;
            *(uint64_t *)(plVar1[1] + 0xe0) = 0;
            *(uint64_t *)(plVar1[1] + 0xfe8) = 0;
            *(uint64_t *)(plVar1[1] + 0xa8) = 0;
            *(uint64_t *)(plVar1[1] + 0xe8) = 0;
            *(uint64_t *)(plVar1[1] + 0xff0) = 0;
            *(uint64_t *)(plVar1[1] + 0xb0) = 0;
            *(uint64_t *)(plVar1[1] + 0xf0) = 0;
            *(uint64_t *)(plVar1[1] + 0xff8) = 0;
            *(uint64_t *)(plVar1[1] + 0xb8) = 0;
            *(uint64_t *)(plVar1[1] + 0xf8) = 0;
            *(uint64_t *)(plVar1[1] + 0x1000) = 0;
            *(int32_t *)(plVar1[1] + 0x1c0) = 0;
            *(int32_t *)(plVar1[1] + 0x1c4) = 0;
            *(int32_t *)(plVar1[1] + 0x1dc) = 0;
            do {
              SystemFunction_000180825ee0(plVar1[1] + 0x100 + lVar2);
              lVar2 = lVar2 + 0x18;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            *(uint64_t *)(plVar1[1] + 0x70) = 0;
            *(uint64_t *)plVar1[1] = 0;
            *(uint64_t *)(plVar1[1] + 8) = 0;
            *(uint64_t *)(plVar1[1] + 0x10) = 0;
            *(uint64_t *)(plVar1[1] + 0x18) = 0;
            *(uint64_t *)(plVar1[1] + 0x20) = 0;
            *(uint64_t *)(plVar1[1] + 0x28) = 0;
            *(uint64_t *)(plVar1[1] + 0x30) = 0;
            *(uint64_t *)(plVar1[1] + 0x38) = 0;
            *(uint64_t *)(plVar1[1] + 0x68) = 0;
// WARNING: Subroutine does not return
            memset(plVar1[1] + 0x340,0,0x200);
          }
          NetworkProtocol_249f0(*(uint64_t *)(plVar1[1] + 0x78));
          lVar2 = plVar1[1];
        }
        free(lVar2);
      }
      free(*plVar1);
    }
    free(plVar1);
  }
  return 0;
}
uint64_t NetworkProtocol_07640(uint64_t param_1,uint64_t *param_2)
{
  uint uVar1;
  int iVar2;
  int aiStackX_10 [2];
  uVar1 = *(uint *)*param_2;
  if (uVar1 < 8) {
    do {
      switch((uint64_t)*(uint *)(&memory_allocator_36_ptr + (int64_t)(int)uVar1 * 4) + 0x180000000) {
      case 0x18080767f:
        iVar2 = NetworkProtocol_07950(param_1,param_2);
        if (iVar2 == 0) {
          return 0;
        }
        break;
      case 0x18080768e:
        goto LAB_18080768e;
      case 0x1808076a0:
        iVar2 = NetworkProtocol_07b60(param_1,param_2);
        if (iVar2 == 0) {
          return 1;
        }
        break;
      case 0x1808076b1:
        iVar2 = NetworkProtocol_08170(param_1,param_2,aiStackX_10,1);
        if (iVar2 == 0) {
          return 0;
        }
        if (aiStackX_10[0] != 0) {
          return 1;
        }
        break;
      case 0x1808076f0:
        iVar2 = NetworkProtocol_08ec0(param_1,param_2);
        if (iVar2 == 0) {
          return 0;
        }
        return 1;
      case 0x1808076ff:
        return 1;
      }
      uVar1 = *(uint *)*param_2;
      if (7 < uVar1) {
        return 0;
      }
    } while( true );
  }
LAB_18080768e:
  return 0;
}
uint64_t NetworkProtocol_07740(uint64_t param_1,uint64_t *param_2)
{
  int iVar1;
  do {
    iVar1 = *(int *)*param_2;
    if (iVar1 == 0) {
      iVar1 = NetworkProtocol_07950(param_1,param_2);
    }
    else {
      if (iVar1 != 1) {
        if ((2 < iVar1 - 2U) && (iVar1 != 7)) {
          return 0;
        }
        return 1;
      }
      iVar1 = NetworkProtocol_08ec0(param_1,param_2);
    }
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}
uint64_t NetworkProtocol_077b0(uint64_t param_1,uint64_t *param_2,uint64_t param_3)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t stack_special_x_10;
  if (((4 < *(uint *)*param_2) || (lVar2 = param_2[1], *(int64_t *)(lVar2 + 8) == 0)) ||
     ((*(int *)(lVar2 + 0x1d8) != 0 &&
      ((*(uint64_t *)(lVar2 + 0x210) != 0 && (*(uint64_t *)(lVar2 + 0x210) <= param_3)))))) {
    return 0;
  }
  *(int32_t *)(lVar2 + 0x1010) = 1;
  *(int32_t *)(param_2[1] + 0x1008) = 0;
  iVar1 = (**(code **)(param_2[1] + 0x18))(param_2,&stack_special_x_10,*(uint64_t *)(param_2[1] + 0x68));
  if (iVar1 == 0) {
    if (1 < *(uint *)*param_2) {
LAB_1808078b5:
      uVar3 = NetworkProtocol_0ac80(param_1,param_2,stack_special_x_10,param_3);
      *(int32_t *)(param_2[1] + 0x1010) = 0;
      return uVar3;
    }
    do {
      iVar1 = *(int *)*param_2;
      if (iVar1 == 0) {
        iVar1 = NetworkProtocol_07950(param_1,param_2);
      }
      else {
        if (iVar1 != 1) {
          if ((iVar1 - 2U < 3) || (iVar1 == 7)) {
            lVar2 = param_2[1];
            if ((*(int *)(lVar2 + 0x1d8) == 0) ||
               ((*(uint64_t *)(lVar2 + 0x210) == 0 || (param_3 < *(uint64_t *)(lVar2 + 0x210)))))
            goto LAB_1808078b5;
            goto LAB_180807861;
          }
          break;
        }
        iVar1 = NetworkProtocol_08ec0(param_1,param_2);
      }
    } while (iVar1 != 0);
  }
  lVar2 = param_2[1];
LAB_180807861:
  *(int32_t *)(lVar2 + 0x1010) = 0;
  return 0;
}
uint64_t NetworkProtocol_07812(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  uint64_t unaff_RSI;
  uint64_t local_var_38;
  *(int32_t *)(in_RAX + 0x1008) = 0;
  iVar1 = (**(code **)(*(int64_t *)(param_2 + 8) + 0x18))
                    (param_1,&local_buffer_00000038,*(uint64_t *)(*(int64_t *)(param_2 + 8) + 0x68));
  if (iVar1 == 0) {
    if (1 < *(uint *)*unaff_RBX) {
LAB_1808078b5:
      uVar3 = NetworkProtocol_0ac80();
      *(int32_t *)(unaff_RBX[1] + 0x1010) = 0;
      return uVar3;
    }
    do {
      iVar1 = *(int *)*unaff_RBX;
      if (iVar1 == 0) {
        iVar1 = NetworkProtocol_07950();
      }
      else {
        if (iVar1 != 1) {
          if ((iVar1 - 2U < 3) || (iVar1 == 7)) {
            lVar2 = unaff_RBX[1];
            if ((*(int *)(lVar2 + 0x1d8) == 0) ||
               ((*(uint64_t *)(lVar2 + 0x210) == 0 || (unaff_RSI < *(uint64_t *)(lVar2 + 0x210))))
               ) goto LAB_1808078b5;
            goto LAB_180807861;
          }
          break;
        }
        iVar1 = NetworkProtocol_08ec0();
      }
    } while (iVar1 != 0);
  }
  lVar2 = unaff_RBX[1];
LAB_180807861:
  *(int32_t *)(lVar2 + 0x1010) = 0;
  return 0;
}
uint64_t NetworkProtocol_0787e(void)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  int unaff_EBP;
  uint64_t unaff_RSI;
code_r0x00018080787e:
  iVar1 = NetworkProtocol_07950();
  do {
    if (iVar1 == 0) {
LAB_18080785d:
      lVar2 = unaff_RBX[1];
LAB_180807861:
      *(int *)(lVar2 + 0x1010) = unaff_EBP;
      return 0;
    }
    iVar1 = *(int *)*unaff_RBX;
    if (iVar1 == 0) goto code_r0x00018080787e;
    if (iVar1 != 1) {
      if ((iVar1 - 2U < 3) || (iVar1 == 7)) {
        lVar2 = unaff_RBX[1];
        if (((*(int *)(lVar2 + 0x1d8) == unaff_EBP) || (*(uint64_t *)(lVar2 + 0x210) == 0)) ||
           (unaff_RSI < *(uint64_t *)(lVar2 + 0x210))) {
          uVar3 = NetworkProtocol_0ac80();
          *(int *)(unaff_RBX[1] + 0x1010) = unaff_EBP;
          return uVar3;
        }
        goto LAB_180807861;
      }
      goto LAB_18080785d;
    }
    iVar1 = NetworkProtocol_08ec0();
  } while( true );
}
uint64_t NetworkProtocol_078d4(void)
{
  return 0;
}
uint64_t NetworkProtocol_07950(uint64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint astack_special_x_18 [2];
  uint astack_special_x_20 [2];
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = 1;
  do {
    uVar4 = 0;
    do {
      while( true ) {
        while( true ) {
          uVar3 = uVar8;
          lVar1 = param_2[1];
          if (*(int *)(lVar1 + 0xf88) == 0) {
            iVar2 = SystemCore_NetworkConnectionManager(param_1,*(uint64_t *)(lVar1 + 0x78),astack_special_x_18,8);
            if (iVar2 == 0) {
              return 0;
            }
          }
          else {
            astack_special_x_18[0] = (uint)*(byte *)(lVar1 + 0xfc6);
            *(int32_t *)(lVar1 + 0xf88) = 0;
          }
          if (astack_special_x_18[0] != (byte)(&rendering_buffer_2448_ptr)[uVar4]) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar3;
          uVar8 = uVar7;
          uVar6 = 1;
          if (3 < uVar3) {
            *(int32_t *)*param_2 = 1;
            return 1;
          }
        }
        if (astack_special_x_18[0] == *(byte *)((uint64_t)uVar3 + 0x180be62f0)) break;
        uVar8 = 0;
        if (astack_special_x_18[0] == 0xff) {
          *(int8_t *)(param_2[1] + 0xfc4) = 0xff;
          iVar2 = SystemCore_NetworkConnectionManager(param_1,*(uint64_t *)(param_2[1] + 0x78),astack_special_x_18,8);
          if (iVar2 == 0) {
            return 0;
          }
          if (astack_special_x_18[0] == 0xff) {
            *(char *)(param_2[1] + 0xfc6) = (char)astack_special_x_18[0];
            *(int32_t *)(param_2[1] + 0xf88) = 1;
          }
          else if ((astack_special_x_18[0] & 0xfffffffc) == 0xf8) {
            *(char *)(param_2[1] + 0xfc5) = (char)astack_special_x_18[0];
            *(int32_t *)*param_2 = 3;
            return 1;
          }
        }
        uVar4 = 0;
        if ((uVar6 != 0) && (lVar1 = param_2[1], uVar6 = uVar7, *(int *)(lVar1 + 0x1010) == 0)) {
          (**(code **)(lVar1 + 0x38))(param_2,0,*(uint64_t *)(lVar1 + 0x68));
        }
      }
      uVar8 = uVar3 + 1;
      uVar4 = 0;
    } while (uVar8 != 3);
    iVar2 = SystemCore_NetworkConnectionManager(param_1,*(uint64_t *)(param_2[1] + 0x78),astack_special_x_20,uVar3 + 0x16);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
    uVar5 = 0;
    do {
      iVar2 = SystemCore_NetworkConnectionManager(param_1,*(uint64_t *)(param_2[1] + 0x78),astack_special_x_20,8);
      if (iVar2 == 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      uVar3 = astack_special_x_20[0] & 0x7f | uVar3 << 7;
    } while (uVar5 < 4);
    iVar2 = NetworkProtocol_25950(param_1,*(uint64_t *)(param_2[1] + 0x78),uVar3);
  } while (iVar2 != 0);
  return 0;
}
uint64_t NetworkProtocol_07b60(uint64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int32_t uVar4;
  uint astack_special_x_10 [2];
  lVar1 = param_2[1];
  if (((*(int *)(lVar1 + 0x1d8) != 0) && (*(uint64_t *)(lVar1 + 0x210) != 0)) &&
     (*(uint64_t *)(lVar1 + 0x210) <= *(uint64_t *)(lVar1 + 0x1d0))) {
    *(int32_t *)*param_2 = 4;
    return 1;
  }
  iVar3 = Function_fbc9a667(*(uint64_t *)(lVar1 + 0x78));
  if (iVar3 == 0) {
    uVar4 = Function_1fd17ca6(*(uint64_t *)(param_2[1] + 0x78));
    iVar3 = SystemCore_NetworkConnectionManager(param_1,*(uint64_t *)(param_2[1] + 0x78),astack_special_x_10,uVar4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  bVar2 = true;
  do {
    lVar1 = param_2[1];
    if (*(int *)(lVar1 + 0xf88) == 0) {
      iVar3 = SystemCore_NetworkConnectionManager(param_1,*(uint64_t *)(lVar1 + 0x78),astack_special_x_10,8);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      astack_special_x_10[0] = (uint)*(byte *)(lVar1 + 0xfc6);
      *(int32_t *)(lVar1 + 0xf88) = 0;
    }
    if (astack_special_x_10[0] == 0xff) {
      *(int8_t *)(param_2[1] + 0xfc4) = 0xff;
      iVar3 = SystemCore_NetworkConnectionManager(param_1,*(uint64_t *)(param_2[1] + 0x78),astack_special_x_10,8);
      if (iVar3 == 0) {
        return 0;
      }
      if (astack_special_x_10[0] == 0xff) {
        *(char *)(param_2[1] + 0xfc6) = (char)astack_special_x_10[0];
        *(int32_t *)(param_2[1] + 0xf88) = 1;
      }
      else if ((astack_special_x_10[0] & 0xfffffffc) == 0xf8) {
        *(char *)(param_2[1] + 0xfc5) = (char)astack_special_x_10[0];
        *(int32_t *)*param_2 = 3;
        return 1;
      }
    }
    if ((bVar2) && (lVar1 = param_2[1], bVar2 = false, *(int *)(lVar1 + 0x1010) == 0)) {
      (**(code **)(lVar1 + 0x38))(param_2,0,*(uint64_t *)(lVar1 + 0x68));
    }
  } while( true );
}
uint64_t
NetworkProtocol_07d00(uint64_t param_1,int64_t *param_2,int64_t param_3,int64_t param_4,
             int64_t param_5,int64_t param_6,int64_t param_7,int64_t param_8,uint64_t param_9,
             int64_t param_10,uint64_t param_11,int param_12)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  uint64_t local_var_38;
  if (*(int *)*param_2 != 9) {
    return 5;
  }
  if (param_12 != 0) {
    return 1;
  }
  if ((((param_3 == 0) || (param_8 == 0)) || (param_10 == 0)) ||
     ((param_4 != 0 && (((param_5 == 0 || (param_6 == 0)) || (param_7 == 0)))))) {
    return 2;
  }
  Function_79a154bb(param_2[1] + 0xf8c);
  *(code **)(param_2[1] + 0x40) = NetworkProtocol_25ef0;
  *(code **)(param_2[1] + 0x48) = NetworkProtocol_267d0;
  *(code **)(param_2[1] + 0x50) = NetworkProtocol_25ef0;
  *(code **)(param_2[1] + 0x58) = NetworkProtocol_25ef0;
  *(code **)(param_2[1] + 0x60) = NetworkProtocol_24f70;
  lVar3 = param_2[1];
  local_var_68 = *(uint64_t *)(lVar3 + 0xf8c);
  local_var_60 = *(uint64_t *)(lVar3 + 0xf94);
  local_var_58 = *(uint64_t *)(lVar3 + 0xf9c);
  local_var_50 = *(uint64_t *)(lVar3 + 0xfa4);
  local_var_48 = *(int32_t *)(lVar3 + 0xfac);
  local_var_44 = *(int32_t *)(lVar3 + 0xfb0);
  local_var_40 = *(int32_t *)(lVar3 + 0xfb4);
  local_var_3c = *(int32_t *)(lVar3 + 0xfb8);
  local_var_38 = *(uint64_t *)(lVar3 + 0xfbc);
  iVar1 = NetworkProtocol_24b30(param_1,*(uint64_t *)(lVar3 + 0x78),&local_var_68,NetworkProtocol_08090,param_2);
  if (iVar1 == 0) {
    *(int32_t *)*param_2 = 8;
    return 3;
  }
  *(int64_t *)param_2[1] = param_3;
  *(int64_t *)(param_2[1] + 8) = param_4;
  *(int64_t *)(param_2[1] + 0x10) = param_5;
  *(int64_t *)(param_2[1] + 0x18) = param_6;
  *(int64_t *)(param_2[1] + 0x20) = param_7;
  *(int64_t *)(param_2[1] + 0x28) = param_8;
  *(uint64_t *)(param_2[1] + 0x30) = param_9;
  *(int64_t *)(param_2[1] + 0x38) = param_10;
  *(uint64_t *)(param_2[1] + 0x68) = param_11;
  *(int32_t *)(param_2[1] + 0x1cc) = 0;
  *(int32_t *)(param_2[1] + 0x1c8) = 0;
  *(uint64_t *)(param_2[1] + 0x1d0) = 0;
  *(int32_t *)(param_2[1] + 0x1d8) = 0;
  *(int32_t *)(param_2[1] + 0xf88) = 0;
  *(int32_t *)(param_2[1] + 0x1008) = *(int32_t *)(*param_2 + 0x18);
  *(int32_t *)(param_2[1] + 0x1010) = 0;
  *(int32_t *)(param_2[1] + 0x100c) = 1;
  *(uint64_t *)(param_2[1] + 0x1d0) = 0;
  *(int32_t *)(param_2[1] + 0x1008) = 0;
  iVar1 = Function_98cda083(*(uint64_t *)(param_2[1] + 0x78));
  if (iVar1 != 0) {
    *(int32_t *)*param_2 = 2;
    lVar3 = param_2[1];
    if (*(int *)(lVar3 + 0x100c) == 0) {
      lVar2 = __acrt_iob_func(0);
      if ((*(int64_t *)(lVar3 + 0x70) == lVar2) ||
         ((*(code **)(lVar3 + 8) != (code *)0x0 &&
          (iVar1 = (**(code **)(lVar3 + 8))(param_2,0,*(uint64_t *)(lVar3 + 0x68)), iVar1 == 1))))
      {
        return 3;
      }
    }
    else {
      *(int32_t *)(lVar3 + 0x100c) = 0;
    }
    *(int32_t *)*param_2 = 0;
    *(int32_t *)(param_2[1] + 0x1d8) = 0;
    lVar3 = param_2[1];
    if ((*(int *)(lVar3 + 0x1dc) != 0) && (*(int64_t *)(lVar3 + 0x2a8) != 0)) {
      free();
      *(uint64_t *)(param_2[1] + 0x2a8) = 0;
      *(int32_t *)(param_2[1] + 0x1dc) = 0;
      lVar3 = param_2[1];
    }
    *(int32_t *)(lVar3 + 0x1008) = *(int32_t *)(*param_2 + 0x18);
    *(int32_t *)(param_2[1] + 0x1cc) = 0;
    *(int32_t *)(param_2[1] + 0x1c8) = 0;
    SystemFunction_000180827490(param_2[1] + 0x1018);
    *(uint64_t *)(param_2[1] + 0x1ac0) = 0;
    *(int32_t *)(param_2[1] + 0x1ad0) = 0;
    return 0;
  }
  *(int32_t *)*param_2 = 8;
  return 3;
}
uint64_t
NetworkProtocol_08090(uint64_t param_1,uint64_t param_2,int64_t *param_3,uint64_t *param_4)
{
  code *pcVar1;
  uint64_t *puVar2;
  int iVar3;
  pcVar1 = *(code **)(param_4[1] + 0x20);
  if (pcVar1 != (code *)0x0) {
    iVar3 = (*pcVar1)(param_4,*(uint64_t *)(param_4[1] + 0x68));
    if (iVar3 != 0) {
      *param_3 = 0;
      goto LAB_1808080c9;
    }
  }
  if ((*param_3 != 0) &&
     ((puVar2 = (uint64_t *)param_4[1], *(int *)(puVar2 + 0x202) == 0 ||
      (*(uint *)(puVar2 + 0x35a) < 0x15)))) {
    iVar3 = (*(code *)*puVar2)(param_4,param_2,param_3,puVar2[0xd]);
    if (iVar3 != 2) {
      if (*param_3 == 0) {
        if (iVar3 == 1) {
LAB_1808080c9:
          *(int32_t *)*param_4 = 4;
          return 0;
        }
        pcVar1 = *(code **)(param_4[1] + 0x20);
        if (pcVar1 != (code *)0x0) {
          iVar3 = (*pcVar1)(param_4,*(uint64_t *)(param_4[1] + 0x68));
          if (iVar3 != 0) goto LAB_1808080c9;
        }
      }
      return 1;
    }
  }
  *(int32_t *)*param_4 = 7;
  return 0;
}
uint64_t NetworkProtocol_08170(uint64_t param_1,int64_t *param_2,int32_t *param_3,int param_4)
{
  int iVar1;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  ushort uVar4;
  int iVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int *piVar9;
  int64_t lVar10;
  uint uVar11;
  int iVar12;
  int64_t lVar13;
  uint64_t uVar15;
  uint uVar16;
  uint uVar17;
  uint64_t uVar18;
  int iVar19;
  int64_t lVar20;
  uint astack_special_x_10 [2];
  int32_t *pstack_special_x_18;
  int iStackX_20;
  uint64_t uVar14;
  uVar18 = 0;
  *param_3 = 0;
  lVar10 = param_2[1];
  uVar17 = *(uint *)((uint64_t)*(byte *)(lVar10 + 0xfc4) * 4 + 0x180bebc70);
  pstack_special_x_18 = param_3;
  iStackX_20 = param_4;
  Function_e132b8b1(*(uint64_t *)(lVar10 + 0x78),
                      *(ushort *)
                       (((uint64_t)*(byte *)(lVar10 + 0xfc5) ^ (uint64_t)(uVar17 >> 8)) * 4 +
                       0x180bebc70) ^ (short)uVar17 << 8);
  iVar5 = NetworkProtocol_08700(param_1);
  if (iVar5 == 0) {
    return 0;
  }
  if (*(int *)*param_2 != 2) {
    lVar10 = param_2[1];
    uVar17 = *(uint *)(lVar10 + 0x558);
    uVar16 = *(uint *)(lVar10 + 0x560);
    if ((*(uint *)(lVar10 + 0x1c0) < uVar17) || (*(uint *)(lVar10 + 0x1c4) < uVar16)) {
      lVar20 = 0x80;
      lVar13 = 0x80;
      lVar10 = 8;
      do {
        lVar7 = param_2[1];
        if (*(int64_t *)(lVar7 + lVar13) != 0) {
          free(*(int64_t *)(lVar7 + lVar13) + -0x10);
          *(uint64_t *)(lVar13 + param_2[1]) = 0;
          lVar7 = param_2[1];
        }
        if (*(int64_t *)(lVar13 + 0xf48 + lVar7) != 0) {
          free();
          *(uint64_t *)(param_2[1] + 0x40 + lVar13) = 0;
          *(uint64_t *)(lVar13 + 0xf48 + param_2[1]) = 0;
        }
        lVar13 = lVar13 + 8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      if (uVar16 != 0) {
        uVar15 = (uint64_t)uVar17 + 4;
        uVar14 = uVar18;
        do {
          if (((uVar15 < 4) ||
              (auVar2._8_8_ = 0, auVar2._0_8_ = uVar15,
              auVar3 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff),
              SUB168(auVar3 / auVar2,0) < 4)) ||
             (puVar8 = (uint64_t *)malloc(uVar15 * 4,SUB168(auVar3 % auVar2,0)),
             puVar8 == (uint64_t *)0x0)) {
LAB_18080837b:
            *(int32_t *)*param_2 = 8;
            return 0;
          }
          *puVar8 = 0;
          puVar8[1] = 0;
          *(uint64_t **)(lVar20 + param_2[1]) = puVar8 + 2;
          iVar5 = NetworkProtocol_27f90(uVar17,param_2[1] + 0xfc8 + uVar14 * 8,
                                param_2[1] + 0xc0 + uVar14 * 8);
          if (iVar5 == 0) goto LAB_18080837b;
          uVar11 = (int)uVar14 + 1;
          uVar14 = (uint64_t)uVar11;
          lVar20 = lVar20 + 8;
        } while (uVar11 < uVar16);
      }
      *(uint *)(param_2[1] + 0x1c0) = uVar17;
      *(uint *)(param_2[1] + 0x1c4) = uVar16;
      param_3 = pstack_special_x_18;
      param_4 = iStackX_20;
    }
    lVar10 = param_2[1];
    uVar15 = uVar18;
    if (*(int *)(lVar10 + 0x560) != 0) {
      do {
        iVar5 = *(int *)(lVar10 + 0x568);
        iVar1 = *(int *)(lVar10 + 0x564);
        iVar12 = (int)uVar15;
        iVar19 = iVar5;
        if (iVar1 == 1) {
          if (iVar12 == 1) {
            iVar19 = iVar5 + 1;
          }
        }
        else if (iVar1 == 2) {
          iVar19 = iVar5 + 1;
          if (iVar12 != 0) {
            iVar19 = iVar5;
          }
        }
        else if ((iVar1 == 3) && (iVar19 = iVar5 + 1, iVar12 != 1)) {
          iVar19 = iVar5;
        }
        iVar5 = NetworkProtocol_0a240(param_1,param_2,uVar15,iVar19,param_4);
        if (iVar5 == 0) {
          return 0;
        }
        if (*(int *)*param_2 == 2) {
          return 1;
        }
        lVar10 = param_2[1];
        uVar15 = (uint64_t)(iVar12 + 1U);
      } while (iVar12 + 1U < *(uint *)(lVar10 + 0x560));
    }
    iVar5 = Function_fbc9a667(*(uint64_t *)(lVar10 + 0x78));
    if (iVar5 == 0) {
      pstack_special_x_18 = (int32_t *)((uint64_t)pstack_special_x_18 & 0xffffffff00000000);
      uVar6 = Function_1fd17ca6(*(uint64_t *)(param_2[1] + 0x78));
      iVar5 = SystemCore_NetworkConnectionManager(param_1,*(uint64_t *)(param_2[1] + 0x78),&pstack_special_x_18,uVar6);
      if (iVar5 == 0) {
        return 0;
      }
      if ((int)pstack_special_x_18 != 0) {
        lVar10 = param_2[1];
        if (*(int *)(lVar10 + 0x1010) == 0) {
          (**(code **)(lVar10 + 0x38))(param_2,0,*(uint64_t *)(lVar10 + 0x68));
        }
        *(int32_t *)*param_2 = 2;
      }
    }
    if (*(int *)*param_2 != 2) {
      uVar4 = NetworkProtocol_24a90(*(uint64_t *)(param_2[1] + 0x78));
      iVar5 = SystemCore_NetworkConnectionManager(param_1,*(uint64_t *)(param_2[1] + 0x78),astack_special_x_10,0x10);
      if (iVar5 != 0) {
        if (uVar4 == astack_special_x_10[0]) {
          if (param_4 != 0) {
            lVar10 = param_2[1];
            iVar5 = *(int *)(lVar10 + 0x564);
            if (iVar5 == 1) {
              if (*(int *)(lVar10 + 0x558) != 0) {
                do {
                  uVar17 = (int)uVar18 + 1;
                  lVar10 = uVar18 * 4;
                  lVar13 = *(int64_t *)(param_2[1] + 0x88);
                  *(int *)(lVar13 + lVar10) =
                       *(int *)(*(int64_t *)(param_2[1] + 0x80) + lVar10) -
                       *(int *)(lVar13 + lVar10);
                  uVar18 = (uint64_t)uVar17;
                } while (uVar17 < *(uint *)(param_2[1] + 0x558));
              }
            }
            else if (iVar5 == 2) {
              if (*(int *)(lVar10 + 0x558) != 0) {
                do {
                  uVar17 = (int)uVar18 + 1;
                  piVar9 = (int *)(*(int64_t *)(param_2[1] + 0x80) + uVar18 * 4);
                  *piVar9 = *piVar9 + *(int *)(*(int64_t *)(param_2[1] + 0x88) + uVar18 * 4);
                  uVar18 = (uint64_t)uVar17;
                } while (uVar17 < *(uint *)(param_2[1] + 0x558));
              }
            }
            else if ((iVar5 == 3) && (*(int *)(lVar10 + 0x558) != 0)) {
              do {
                uVar16 = (int)uVar18 + 1;
                lVar10 = uVar18 * 4;
                lVar13 = *(int64_t *)(param_2[1] + 0x80);
                uVar17 = *(uint *)(lVar10 + *(int64_t *)(param_2[1] + 0x88));
                uVar11 = *(int *)(lVar13 + lVar10) * 2 | uVar17 & 1;
                *(int *)(lVar13 + lVar10) = (int)(uVar17 + uVar11) >> 1;
                *(int *)(lVar10 + *(int64_t *)(param_2[1] + 0x88)) = (int)(uVar11 - uVar17) >> 1;
                uVar18 = (uint64_t)uVar16;
              } while (uVar16 < *(uint *)(param_2[1] + 0x558));
            }
          }
        }
        else {
          lVar10 = param_2[1];
          if (*(int *)(lVar10 + 0x1010) == 0) {
            (**(code **)(lVar10 + 0x38))(param_2,2,*(uint64_t *)(lVar10 + 0x68));
            lVar10 = param_2[1];
          }
          if ((param_4 != 0) && (*(int *)(lVar10 + 0x560) != 0)) {
// WARNING: Subroutine does not return
            memset(*(uint64_t *)(param_2[1] + 0x80),0,
                   (uint64_t)*(uint *)(param_2[1] + 0x558) << 2);
          }
        }
        *param_3 = 1;
        lVar10 = param_2[1];
        if (*(int *)(lVar10 + 0x1cc) != 0) {
          *(int *)(lVar10 + 0x1c8) = *(int *)(lVar10 + 0x1cc);
          lVar10 = param_2[1];
        }
        *(int32_t *)(*param_2 + 4) = *(int32_t *)(lVar10 + 0x560);
        *(int32_t *)(*param_2 + 8) = *(int32_t *)(param_2[1] + 0x564);
        *(int32_t *)(*param_2 + 0xc) = *(int32_t *)(param_2[1] + 0x568);
        *(int32_t *)(*param_2 + 0x10) = *(int32_t *)(param_2[1] + 0x55c);
        *(int32_t *)(*param_2 + 0x14) = *(int32_t *)(param_2[1] + 0x558);
        lVar10 = param_2[1];
        *(uint64_t *)(lVar10 + 0x1d0) =
             (uint64_t)*(uint *)(lVar10 + 0x558) + *(int64_t *)(lVar10 + 0x570);
        if ((param_4 == 0) ||
           (iVar5 = NetworkProtocol_0b1b0(param_2,param_2[1] + 0x558,param_2[1] + 0x80), iVar5 == 0)) {
          *(int32_t *)*param_2 = 2;
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
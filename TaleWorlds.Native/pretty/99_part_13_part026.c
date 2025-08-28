#include "SystemDataAdvancedController_definition.h"
/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part026.c - 8 个函数
// 函数: void NetworkProtocol_b59b0(int64_t param_1)
void NetworkProtocol_b59b0(int64_t param_1)
{
  int iVar1;
  int64_t *plVar2;
  for (plVar2 = *(int64_t **)(param_1 + 0x60);
      (*(int64_t **)(param_1 + 0x60) <= plVar2 &&
      (plVar2 < *(int64_t **)(param_1 + 0x60) + (int64_t)*(int *)(param_1 + 0x68) * 2));
      plVar2 = plVar2 + 2) {
    iVar1 = SystemCore_40190(*(uint64_t *)(*plVar2 + 0x30),*(uint64_t *)(param_1 + 0x30),plVar2[1])
    ;
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = NetworkProtocol_b41e0(param_1 + 0x60);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffff7;
  }
  return;
}
uint64_t NetworkProtocol_b5a30(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int iVar11;
  uint64_t *puVar12;
  cVar3 = (**(code **)(*param_2 + 0x38))(param_2);
  if ((cVar3 != '\0') || (*(short *)((int64_t)param_2 + 0xc) == 7)) {
    if (*(int64_t *)(param_1 + 0x48) == 0) {
      puVar12 = (uint64_t *)(*(int64_t *)(param_1 + 0x38) + 0x7a8);
    }
    else {
      puVar12 = (uint64_t *)(*(int64_t *)(param_1 + 0x48) + 0x4b0);
    }
    plVar10 = (int64_t *)*puVar12;
    while ((plVar9 = (int64_t *)*puVar12, plVar9 <= plVar10 &&
           (iVar8 = (int)puVar12[1], plVar10 < plVar9 + iVar8))) {
      lVar1 = *plVar10;
      if (lVar1 == param_1) {
        iVar4 = (int)((int64_t)plVar10 - (int64_t)plVar9 >> 3);
        if ((iVar4 < 0) || (iVar8 <= iVar4)) {
          return 0x1c;
        }
        iVar11 = (iVar8 - iVar4) + -1;
        if (0 < iVar11) {
// WARNING: Subroutine does not return
          memmove(plVar9 + iVar4,plVar9 + iVar4 + 1,(int64_t)iVar11 << 3);
        }
        *(int *)(puVar12 + 1) = iVar8 + -1;
      }
      else {
        plVar2 = *(int64_t **)(lVar1 + 0x60);
        plVar9 = plVar2;
        while( true ) {
          if ((plVar9 < plVar2) || (plVar2 + (int64_t)*(int *)(lVar1 + 0x68) * 2 <= plVar9))
          goto LAB_1808b5b9b;
          if (*plVar9 == param_1) break;
          plVar9 = plVar9 + 2;
        }
        uVar5 = SystemCore_40190(*(uint64_t *)(param_1 + 0x30),*(uint64_t *)(lVar1 + 0x30),
                              plVar9[1]);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        iVar8 = (int)((int64_t)plVar9 - *(int64_t *)(lVar1 + 0x60) >> 4);
        if (iVar8 < 0) {
          return 0x1c;
        }
        iVar4 = *(int *)(lVar1 + 0x68);
        if (iVar4 <= iVar8) {
          return 0x1c;
        }
        iVar11 = (iVar4 - iVar8) + -1;
        if (0 < iVar11) {
          lVar7 = (int64_t)iVar11;
          puVar6 = (int32_t *)((int64_t)iVar8 * 0x10 + *(int64_t *)(lVar1 + 0x60));
          if (0 < lVar7) {
            do {
              *puVar6 = puVar6[4];
              puVar6[1] = puVar6[5];
              puVar6[2] = puVar6[6];
              puVar6[3] = puVar6[7];
              lVar7 = lVar7 + -1;
              puVar6 = puVar6 + 4;
            } while (lVar7 != 0);
            iVar4 = *(int *)(lVar1 + 0x68);
          }
        }
        *(int *)(lVar1 + 0x68) = iVar4 + -1;
LAB_1808b5b9b:
        plVar10 = plVar10 + 1;
      }
    }
  }
  return 0;
}
uint64_t NetworkProtocol_b5bd0(int64_t param_1,byte param_2,byte param_3)
{
  uint uVar1;
  uint64_t uVar2;
  uVar1 = *(uint *)(param_1 + 0x88);
  if ((((byte)(uVar1 >> 5) & 1) != param_2) || (((byte)(uVar1 >> 6) & 1) != param_3)) {
    *(uint *)(param_1 + 0x88) =
         (((uint)param_2 << 5 | uVar1) & ~((param_2 ^ 1) << 5) | (uint)param_3 << 6) &
         ~((param_3 ^ 1) << 6);
    uVar2 = Function_eace9404(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_b5c40(int64_t param_1,byte param_2)
{
  uint64_t uVar1;
  if (((byte)(*(uint *)(param_1 + 0x88) >> 7) & 1) != param_2) {
    *(uint *)(param_1 + 0x88) =
         ((uint)param_2 << 7 | *(uint *)(param_1 + 0x88)) & ~((param_2 ^ 1) << 7);
    uVar1 = Function_eace9404();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_b5c90(int64_t param_1,int param_2)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t stack_special_x_8;
  int32_t astack_special_x_10 [6];
  uVar1 = *(uint64_t *)(param_1 + 0x30);
  if (param_2 == 0) {
    uVar2 = SystemCore_40b40(uVar1,&stack_special_x_8);
    if ((int)uVar2 == 0) {
      uVar2 = SystemCore_3a840(stack_special_x_8,0,astack_special_x_10,0);
      if ((int)uVar2 == 0) {
        SystemCore_411a0(uVar1,0,0,astack_special_x_10[0]);
        return 0;
      }
    }
  }
  else {
    SystemCore_411a0(uVar1,0,0,param_2);
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t NetworkProtocol_b5d00(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  if (param_2 != *(int64_t *)(param_1 + 0x48)) {
    if (*(int64_t *)(param_1 + 0x48) != 0) {
      lVar1 = *(int64_t *)(param_1 + 0x40);
      uVar2 = NetworkProtocol_b5a30(param_1,lVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (((*(short *)(lVar1 + 0xc) == 7) && ((*(uint *)(param_1 + 0x88) >> 3 & 1) != 0)) &&
         (uVar2 = NetworkProtocol_b59b0(param_1), (int)uVar2 != 0)) {
        return uVar2;
      }
      if (((*(int *)(param_1 + 0x70) != -1) || (*(int *)(param_1 + 0x74) != -1)) &&
         (uVar2 = NetworkProtocol_62910(*(uint64_t *)(param_1 + 0x48),param_1), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
    *(int64_t *)(param_1 + 0x48) = param_2;
    if (param_2 != 0) {
      if (((*(int *)(param_1 + 0x70) != -1) || (*(int *)(param_1 + 0x74) != -1)) &&
         (uVar2 = NetworkProtocol_5ec90(param_2,param_1), (int)uVar2 != 0)) {
        return uVar2;
      }
      lVar1 = *(int64_t *)(param_1 + 0x40);
      uVar2 = NetworkProtocol_b3d00(param_1,lVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((*(short *)(lVar1 + 0xc) == 7) && (uVar2 = NetworkProtocol_b3c20(param_1,lVar1), (int)uVar2 != 0))
      {
        return uVar2;
      }
    }
  }
  return 0;
}
// 函数: void NetworkProtocol_b5de0(int64_t param_1,byte param_2)
void NetworkProtocol_b5de0(int64_t param_1,byte param_2)
{
  void *plocal_var_18;
  int64_t lStack_10;
  *(uint *)(param_1 + 0x88) = ((uint)param_2 * 2 | *(uint *)(param_1 + 0x88)) & ~((param_2 ^ 1) * 2)
  ;
  plocal_var_18 = &ui_system_data_1424_ptr;
  lStack_10 = param_1;
  (**(code **)(**(int64_t **)(param_1 + 0x40) + 0x28))(*(int64_t **)(param_1 + 0x40),&plocal_var_18);
  return;
}
uint64_t NetworkProtocol_b5e30(int64_t param_1,byte param_2)
{
  uint64_t uVar1;
  if (((byte)(*(uint *)(param_1 + 0x88) >> 8) & 1) != param_2) {
    *(uint *)(param_1 + 0x88) =
         ((uint)param_2 << 8 | *(uint *)(param_1 + 0x88)) & ~((param_2 ^ 1) << 8);
    uVar1 = Function_eace9404();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_b5eb0(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  iVar3 = *(int *)(param_2 + 0x58);
  iVar9 = 0;
  if (0 < iVar3) {
    lVar10 = 0;
    do {
      lVar1 = *(int64_t *)(lVar10 + *(int64_t *)(param_2 + 0x48));
      if (lVar1 == 0) {
        return 0x1c;
      }
      iVar4 = *(int *)(lVar1 + 0x10);
      if (iVar4 == 0) {
        uVar6 = SystemDataFlowProcessor(param_1,iVar9 + 1000);
LAB_1808b6046:
        if (((int)uVar6 != 0x44) && ((int)uVar6 != 0)) {
          return uVar6;
        }
      }
      else {
        if (iVar4 == 1) {
          uVar6 = SystemCore_417b0(*(uint64_t *)(param_1 + 0x30),iVar9,*(int32_t *)(lVar1 + 0x18))
          ;
          goto LAB_1808b6046;
        }
        if (iVar4 == 2) {
          uVar6 = SystemCore_41460(*(uint64_t *)(param_1 + 0x30),iVar9,*(int8_t *)(lVar1 + 0x18))
          ;
          goto LAB_1808b6046;
        }
        if (iVar4 != 3) {
          return 0x1c;
        }
        if (param_3 == 0) {
LAB_1808b5fb7:
          uVar8 = *(uint64_t *)(lVar1 + 8);
          if (uVar8 != 0) {
            uVar8 = (uint64_t)*(uint *)(uVar8 + 0x30);
          }
          uVar7 = *(uint64_t *)(param_1 + 0x30);
          if (((int)uVar8 < 0) ||
             ((uVar6 = SystemCore_410d0(uVar7,NetworkProtocol_b4e90), (int)uVar6 == 0 &&
              (uVar6 = Function_46e87780(lVar1 + 0x18), (int)uVar6 == 0)))) {
            uVar5 = Function_866c64ff(lVar1 + 0x18);
            uVar6 = Function_2fa176b9(lVar1 + 0x18);
            uVar6 = SystemCore_41560(uVar7,iVar9,uVar6,uVar5);
            if ((int)uVar6 == 0) goto LAB_1808b604f;
          }
          goto LAB_1808b6046;
        }
        if (iVar3 != *(int *)(param_3 + 0x58)) {
          return 0x1c;
        }
        lVar2 = *(int64_t *)(lVar10 + *(int64_t *)(param_3 + 0x48));
        if (lVar2 == 0) {
          return 0x1c;
        }
        if (*(int *)(lVar2 + 0x10) != 3) {
          return 0x1c;
        }
        iVar3 = Function_866c64ff(lVar2 + 0x18);
        iVar4 = Function_866c64ff(lVar1 + 0x18);
        if (iVar3 != iVar4) goto LAB_1808b5fb7;
        iVar3 = Function_866c64ff(lVar1 + 0x18);
        if (0 < iVar3) {
          iVar3 = Function_866c64ff(lVar1 + 0x18);
          uVar6 = Function_2fa176b9(lVar1 + 0x18);
          uVar7 = Function_2fa176b9(lVar2 + 0x18);
          iVar3 = memcmp(uVar7,uVar6,(int64_t)iVar3);
          if (iVar3 != 0) goto LAB_1808b5fb7;
        }
      }
LAB_1808b604f:
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 8;
      iVar3 = *(int *)(param_2 + 0x58);
    } while (iVar9 < iVar3);
  }
  return 0;
}
uint64_t NetworkProtocol_b6090(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int iVar2;
  iVar2 = *(int *)(param_1 + 0x10) + -1000;
  if (iVar2 < 0) {
    return 0x1c;
  }
  if (iVar2 < *(int *)(param_2 + 0x58)) {
    uVar1 = SystemCore_416a0(*(uint64_t *)(*(int64_t *)(param_1 + 8) + 0x30),iVar2,
                          *(int32_t *)(param_1 + 0x14));
    if (((int)uVar1 != 0x44) && ((int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_b60e0(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int iVar2;
  if (*(int *)(param_2 + 0x80) != 0) {
    iVar2 = *(int *)(param_1 + 0x10) + -1000;
    if (iVar2 < 0) {
      return 0x1c;
    }
    if (iVar2 < *(int *)(param_2 + 0x58)) {
      uVar1 = SystemCore_416a0(*(uint64_t *)(*(int64_t *)(param_1 + 8) + 0x30),iVar2,
                            *(int32_t *)(param_1 + 0x14));
      if (((int)uVar1 != 0x44) && ((int)uVar1 != 0)) {
        return uVar1;
      }
    }
  }
  return 0;
}
uint64_t NetworkProtocol_b61b0(int64_t param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0x1c;
  }
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int32_t *)(lVar1 + 0x84) = *(int32_t *)(param_1 + 0x14);
  *(uint *)(lVar1 + 0x88) = *(uint *)(lVar1 + 0x88) | 1;
  if (-80.0 < *(float *)(lVar1 + 0x84)) {
    uVar4 = powf(0x41200000,*(float *)(lVar1 + 0x84) * 0.05);
  }
  else {
    uVar4 = 0;
  }
  for (uVar3 = *(uint64_t *)(lVar1 + 0x60);
      (*(uint64_t *)(lVar1 + 0x60) <= uVar3 &&
      (uVar3 < (int64_t)*(int *)(lVar1 + 0x68) * 0x10 + *(uint64_t *)(lVar1 + 0x60)));
      uVar3 = uVar3 + 0x10) {
    uVar2 = SystemCore_418b0(*(uint64_t *)(uVar3 + 8),uVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_b6270(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  byte bVar2;
  uint64_t uVar3;
  uVar1 = *(uint *)(*(int64_t *)(param_1 + 8) + 0x88);
  if ((*(char *)(param_2 + 0x6c) == '\0') || ((uVar1 >> 1 & 1) != 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  if (bVar2 != ((byte)(uVar1 >> 3) & 1)) {
    if (bVar2 == 0) {
      uVar3 = NetworkProtocol_b59b0(*(int64_t *)(param_1 + 8));
    }
    else {
      uVar3 = NetworkProtocol_b3c20();
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}
int64_t NetworkProtocol_b62e0(int64_t param_1,uint64_t param_2,uint64_t param_3,byte param_4)
{
  int64_t lVar1;
  int32_t uVar2;
  *(int64_t *)param_1 = param_1;
  lVar1 = param_1 + 0x10;
  *(int64_t *)(param_1 + 8) = param_1;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x18) = lVar1;
  *(uint64_t *)(param_1 + 0x20) = param_2;
  *(uint64_t *)(param_1 + 0x28) = param_3;
  lVar1 = param_1 + 0x38;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x40) = lVar1;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = Function_46cf8554(param_1);
  }
  *(uint *)(param_1 + 0x5c) = (uint)param_4;
  *(int32_t *)(param_1 + 0x58) = uVar2;
  return param_1;
}
uint64_t NetworkProtocol_b63b0(uint64_t param_1,uint64_t param_2)
{
  SystemFunction_0001808c9890();
  if ((param_2 & 1) != 0) {
    free(param_1,0x238);
  }
  return param_1;
}
uint64_t NetworkProtocol_b63f0(uint64_t param_1,uint64_t param_2)
{
  SystemFunction_0001808c9a30();
  if ((param_2 & 1) != 0) {
    free(param_1,0x238);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_b6430(uint64_t *param_1,int64_t *param_2,int param_3,int32_t *param_4)
void NetworkProtocol_b6430(uint64_t *param_1,int64_t *param_2,int param_3,int32_t *param_4)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int8_t stack_array_178 [32];
  uint local_var_158;
  uint local_var_150;
  uint local_var_148;
  uint local_var_140;
  uint local_var_138;
  uint local_var_130;
  uint local_var_128;
  uint local_var_120;
  uint local_var_118;
  uint local_var_110;
  int32_t local_var_108;
  ushort local_var_104;
  ushort local_var_102;
  byte bStack_100;
  byte bStack_ff;
  byte bStack_fe;
  byte bStack_fd;
  byte bStack_fc;
  byte bStack_fb;
  byte bStack_fa;
  byte bStack_f9;
  uint64_t **pplocal_var_f8;
  uint64_t **pplocal_var_f0;
  uint64_t **pplocal_var_e8;
  uint64_t **pplocal_var_e0;
  int64_t *plStack_d8;
  void **pplocal_var_d0;
  uint64_t local_var_c8;
  uint64_t **pplocal_var_c0;
  uint64_t **pplocal_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  int32_t local_var_a0;
  int32_t local_var_9c;
  uint64_t *plocal_var_98;
  void *plocal_var_90;
  int64_t *plStack_88;
  int iStack_80;
  int32_t local_var_7c;
  int8_t stack_array_78 [40];
  uint64_t local_var_50;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  plVar5 = (int64_t *)param_2[4];
  plVar4 = param_2 + 4;
  plocal_var_98 = param_1;
  if (plVar5 != plVar4) {
    while ((int)plVar5[8] != param_3) {
      if ((plVar5 == plVar4) || (plVar5 = (int64_t *)*plVar5, plVar5 == plVar4))
      goto LAB_1808b648f;
    }
    if (plVar5 != (int64_t *)0x0) {
      plocal_var_90 = &rendering_buffer_2416_ptr;
      pplocal_var_f8 = &pplocal_var_f8;
      pplocal_var_f0 = &pplocal_var_f8;
      pplocal_var_e8 = &pplocal_var_e8;
      pplocal_var_e0 = &pplocal_var_e8;
      pplocal_var_d0 = &plocal_var_90;
      local_var_c8 = 0;
      pplocal_var_c0 = &pplocal_var_c0;
      pplocal_var_b8 = &pplocal_var_c0;
      local_var_7c = 0;
      local_var_b0 = 0;
      local_var_a8 = 0;
      plStack_d8 = plVar5;
      plStack_88 = param_2;
      iStack_80 = param_3;
      local_var_a0 = Function_46cf8554(&pplocal_var_f8);
      local_var_9c = 1;
      if (((((int)plVar5[6] == 0) && (*(int *)((int64_t)plVar5 + 0x34) == 0)) &&
          ((int)plVar5[7] == 0)) && (*(int *)((int64_t)plVar5 + 0x3c) == 0)) {
LAB_1808b659b:
        if ((int)plVar5[3] != 0) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_var_108);
          local_var_110 = (uint)bStack_f9;
          local_var_118 = (uint)bStack_fa;
          local_var_120 = (uint)bStack_fb;
          local_var_128 = (uint)bStack_fc;
          local_var_130 = (uint)bStack_fd;
          local_var_138 = (uint)bStack_fe;
          local_var_140 = (uint)bStack_ff;
          local_var_148 = (uint)bStack_100;
          local_var_150 = (uint)local_var_102;
          local_var_158 = (uint)local_var_104;
// WARNING: Subroutine does not return
          SystemDataValidator(stack_array_78,0x27,&processed_var_8960_ptr,local_var_108);
        }
        if ((int)plVar5[5] != 0) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_var_108);
          uVar3 = NetworkProtocol_b8590(param_1 + 5,&local_var_108,param_3);
          iVar1 = NetworkProtocol_b3850(&pplocal_var_f8,uVar3);
          if (iVar1 != 0) goto LAB_1808b668f;
        }
        iVar1 = NetworkProtocol_b3060(&pplocal_var_f8,0);
        if (iVar1 == 0) {
          *param_4 = local_var_7c;
          NetworkProtocol_b1880(&pplocal_var_f8);
          goto LAB_1808b64a3;
        }
      }
      else {
        lVar2 = NetworkProtocol_69ab0(*param_1);
        if (lVar2 == 0) {
          NetworkProtocol_b1880(&pplocal_var_f8);
          goto LAB_1808b64a3;
        }
        iVar1 = Function_66cc9edc(&pplocal_var_f8,lVar2);
        if (iVar1 == 0) goto LAB_1808b659b;
      }
LAB_1808b668f:
      NetworkProtocol_b1880(&pplocal_var_f8);
      goto LAB_1808b64a3;
    }
  }
LAB_1808b648f:
  NetworkProtocol_b05f0(param_2,param_3,param_4);
LAB_1808b64a3:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_178);
}
// 函数: void NetworkProtocol_b65b2(void)
void NetworkProtocol_b65b2(void)
{
  int64_t in_RAX;
  (**(code **)(in_RAX + 0x20))();
// WARNING: Subroutine does not return
  SystemDataValidator();
}
// 函数: void NetworkProtocol_b6645(int32_t param_1)
void NetworkProtocol_b6645(int32_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t *unaff_R12;
  int32_t *unaff_R13;
  int64_t unaff_R14;
  int32_t unaff_R15D;
  if (*(int *)(unaff_R14 + 0x28) == 0) {
LAB_1808b667e:
    iVar1 = NetworkProtocol_b3060(unaff_RBP + -0x80,0);
    if (iVar1 == 0) {
      *unaff_R13 = *(int32_t *)(unaff_RBP + -4);
      NetworkProtocol_b1880(unaff_RBP + -0x80);
      goto LAB_1808b64a3;
    }
  }
  else {
    (**(code **)(*unaff_R12 + 0x20))(param_1,&local_buffer_00000070);
    uVar2 = NetworkProtocol_b8590(unaff_RDI + 0x28,&local_buffer_00000070,unaff_R15D);
    iVar1 = NetworkProtocol_b3850(unaff_RBP + -0x80,uVar2);
    if (iVar1 == 0) goto LAB_1808b667e;
  }
  NetworkProtocol_b1880(unaff_RBP + -0x80);
LAB_1808b64a3:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x28) ^ (uint64_t)&local_buffer_00000000);
}
uint64_t NetworkProtocol_b66c0(int8_t *param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  lVar1 = *(int64_t *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x60) < 1) {
    return 0x1c;
  }
  if ((*(int *)(lVar1 + 0x60) == 1) && (uVar2 = NetworkProtocol_501b0(lVar1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
  *param_1 = 1;
  lVar1 = *(int64_t *)(param_1 + 0x28);
  if (*(int *)(lVar1 + 0x60) < 1) {
    return 0x1c;
  }
  if ((*(int *)(lVar1 + 0x60) == 1) && (uVar2 = NetworkProtocol_4f7f0(lVar1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
  param_1[0x20] = 1;
  lVar1 = *(int64_t *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 0x60) < 1) {
    return 0x1c;
  }
  if ((*(int *)(lVar1 + 0x60) == 1) && (uVar2 = NetworkProtocol_4fcd0(lVar1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
  param_1[0x10] = 1;
  lVar1 = *(int64_t *)(param_1 + 0x38);
  if (*(int *)(lVar1 + 0x60) < 1) {
    return 0x1c;
  }
  if ((*(int *)(lVar1 + 0x60) == 1) && (uVar2 = NetworkProtocol_50690(lVar1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
  param_1[0x30] = 1;
  uVar2 = NetworkProtocol_bd690(*(uint64_t *)(param_1 + 0x40));
  return uVar2;
}
uint64_t
NetworkProtocol_b6780(int32_t *param_1,int64_t *param_2,uint64_t param_3,int64_t param_4,
             int64_t *param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lStackX_20;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  void *plocal_var_58;
  int64_t lStack_50;
  int32_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  int64_t lStack_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  int64_t lStack_18;
  lStackX_20 = 0;
  if (param_4 == 0) {
    if (((((int)param_2[8] == 0) && (*(int *)((int64_t)param_2 + 0x44) == 0)) &&
        ((int)param_2[9] == 0)) && (*(int *)((int64_t)param_2 + 0x4c) == 0)) {
      return 0x1c;
    }
    local_var_68 = (int32_t)param_2[8];
    local_var_64 = *(int32_t *)((int64_t)param_2 + 0x44);
    local_var_60 = (int32_t)param_2[9];
    local_var_5c = *(int32_t *)((int64_t)param_2 + 0x4c);
    uVar2 = NetworkProtocol_60650(*(uint64_t *)(param_1 + 6),&local_var_68,&lStackX_20);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (lStackX_20 == 0) {
      return 0x1c;
    }
  }
  else {
    if ((int)param_2[8] != 0) {
      return 0x1c;
    }
    if (*(int *)((int64_t)param_2 + 0x44) != 0) {
      return 0x1c;
    }
    if ((int)param_2[9] != 0) {
      return 0x1c;
    }
    if (*(int *)((int64_t)param_2 + 0x4c) != 0) {
      return 0x1c;
    }
  }
  plocal_var_58 = &rendering_buffer_2456_ptr;
  local_var_48 = *param_1;
  local_var_40 = *(uint64_t *)(param_1 + 2);
  local_var_38 = *(uint64_t *)(param_1 + 4);
  local_var_20 = *(uint64_t *)(param_1 + 6);
  lStack_50 = 0;
  lStack_30 = lStackX_20;
  local_var_28 = param_3;
  lStack_18 = param_4;
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2,&plocal_var_58);
  lVar1 = lStack_50;
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (lStack_50 == 0) {
    return 0x1c;
  }
  uVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 6) + 8) + 0x30))();
  uVar2 = NetworkProtocol_b89f0(uVar2,lVar1);
  if ((int)uVar2 == 0) {
    *param_5 = lVar1;
    return 0;
  }
  return uVar2;
}
int32_t NetworkProtocol_b68c0(uint64_t *param_1,int64_t param_2,uint64_t *param_3)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint astack_special_x_8 [2];
  int64_t lStackX_20;
  uint64_t stack_array_38 [2];
  lVar4 = (**(code **)(*(int64_t *)*param_1 + 0x18))();
  if (lVar4 == 0) {
    return 0x1c;
  }
  plVar10 = (int64_t *)0x0;
  stack_array_38[0] = 0;
  iVar3 = RenderingSystemOptimizer(stack_array_38,lVar4);
  if (iVar3 == 0) {
    lVar5 = (*(code *)**(uint64_t **)(param_2 + 8))(param_2 + 8);
    if (**(int **)(lVar5 + 0xd0) == 0) {
      lVar5 = (*(code *)**(uint64_t **)(param_2 + 8))(param_2 + 8);
      iVar3 = NetworkProtocol_8c060(*(int32_t *)(lVar4 + 0x18),*(uint64_t *)(lVar5 + 0xd0));
      if (iVar3 != 0) goto LAB_1808b6a7b;
    }
    if (*(int64_t *)(param_2 + 0x80) == 0) {
      lStackX_20 = 0;
      iVar3 = NetworkProtocol_67bc0(&lStackX_20);
      if (iVar3 == 0) {
        uVar6 = (*(code *)**(uint64_t **)(param_2 + 8))(param_2 + 8);
        NetworkProtocol_68490(lStackX_20,lVar4,uVar6);
        plVar8 = (int64_t *)(param_2 + 0x240);
        plVar7 = (int64_t *)(*plVar8 + -0x18);
        if (*plVar8 == 0) {
          plVar7 = plVar10;
        }
        plVar9 = plVar10;
        plVar1 = plVar10;
        plVar2 = plVar10;
        if (plVar7 != (int64_t *)0x0) {
          plVar9 = plVar7 + 3;
        }
        while (plVar9 != plVar8) {
          if (*(int *)(lStackX_20 + 0x28) <= (int)plVar2) goto LAB_1808b6a7b;
          plVar7 = plVar9 + 4;
          if (plVar9 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x38;
          }
          *(int64_t *)(*(int64_t *)(lStackX_20 + 0x20) + 8 + (int64_t)plVar1) = *plVar7;
          if (plVar9 == plVar8) goto LAB_1808b6a7b;
          plVar7 = (int64_t *)(*plVar9 + -0x18);
          if (*plVar9 == 0) {
            plVar7 = plVar10;
          }
          plVar9 = plVar10;
          if (plVar7 != (int64_t *)0x0) {
            plVar9 = plVar7 + 3;
          }
          plVar1 = plVar1 + 3;
          plVar2 = (int64_t *)(uint64_t)((int)plVar2 + 1);
        }
        *(int64_t *)(param_2 + 0x80) = lStackX_20;
        Function_651c5308(param_2);
        *(int64_t *)(lStackX_20 + 0x10) = param_2;
        NetworkProtocol_5ff30(param_2);
        astack_special_x_8[0] = 0;
        plVar8 = (int64_t *)(lStackX_20 + 8);
        if (lStackX_20 == 0) {
          plVar8 = plVar10;
        }
        iVar3 = Function_3359b5c0(plVar8,astack_special_x_8);
        if (iVar3 == 0) {
          *param_3 = (uint64_t)astack_special_x_8[0];
        }
      }
    }
  }
LAB_1808b6a7b:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(stack_array_38);
}
// 函数: void NetworkProtocol_b68ee(void)
void NetworkProtocol_b68ee(void)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t *unaff_R14;
  int64_t *plVar8;
  uint64_t stack_special_x_20;
  uint local_var_60;
  int64_t local_var_78;
  plVar8 = (int64_t *)0x0;
  stack_special_x_20 = 0;
  iVar3 = RenderingSystemOptimizer(&stack_special_x_20);
  if (iVar3 == 0) {
    lVar4 = (*(code *)**(uint64_t **)(unaff_RBP + 8))(unaff_RBP + 8);
    if (**(int **)(lVar4 + 0xd0) == 0) {
      lVar4 = (*(code *)**(uint64_t **)(unaff_RBP + 8))(unaff_RBP + 8);
      iVar3 = NetworkProtocol_8c060(*(int32_t *)(unaff_RSI + 0x18),*(uint64_t *)(lVar4 + 0xd0));
      if (iVar3 != 0) goto LAB_1808b6a7b;
    }
    if (*(int64_t *)(unaff_RBP + 0x80) == 0) {
      local_var_78 = 0;
      iVar3 = NetworkProtocol_67bc0(&local_buffer_00000078);
      if (iVar3 == 0) {
        (*(code *)**(uint64_t **)(unaff_RBP + 8))(unaff_RBP + 8);
        NetworkProtocol_68490(local_var_78);
        plVar6 = (int64_t *)(unaff_RBP + 0x240);
        plVar5 = (int64_t *)(*plVar6 + -0x18);
        if (*plVar6 == 0) {
          plVar5 = plVar8;
        }
        plVar7 = plVar8;
        plVar1 = plVar8;
        plVar2 = plVar8;
        if (plVar5 != (int64_t *)0x0) {
          plVar7 = plVar5 + 3;
        }
        while (plVar7 != plVar6) {
          if (*(int *)(local_var_78 + 0x28) <= (int)plVar2) goto LAB_1808b6a7b;
          plVar5 = plVar7 + 4;
          if (plVar7 == (int64_t *)0x0) {
            plVar5 = (int64_t *)0x38;
          }
          *(int64_t *)(*(int64_t *)(local_var_78 + 0x20) + 8 + (int64_t)plVar1) = *plVar5;
          if (plVar7 == plVar6) goto LAB_1808b6a7b;
          plVar5 = (int64_t *)(*plVar7 + -0x18);
          if (*plVar7 == 0) {
            plVar5 = plVar8;
          }
          plVar7 = plVar8;
          if (plVar5 != (int64_t *)0x0) {
            plVar7 = plVar5 + 3;
          }
          plVar1 = plVar1 + 3;
          plVar2 = (int64_t *)(uint64_t)((int)plVar2 + 1);
        }
        *(int64_t *)(unaff_RBP + 0x80) = local_var_78;
        Function_651c5308();
        *(int64_t *)(local_var_78 + 0x10) = unaff_RBP;
        NetworkProtocol_5ff30();
        local_var_60 = 0;
        plVar6 = (int64_t *)(local_var_78 + 8);
        if (local_var_78 == 0) {
          plVar6 = plVar8;
        }
        iVar3 = Function_3359b5c0(plVar6,&local_buffer_00000060);
        if (iVar3 == 0) {
          *unaff_R14 = (uint64_t)local_var_60;
        }
      }
    }
  }
LAB_1808b6a7b:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack_special_x_20);
}
// 函数: void NetworkProtocol_b6a9b(void)
void NetworkProtocol_b6a9b(void)
{
  int8_t astack_special_x_20 [8];
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(astack_special_x_20);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_b6ab0(uint64_t *param_1,uint64_t param_2,int32_t param_3,int64_t *param_4,
void NetworkProtocol_b6ab0(uint64_t *param_1,uint64_t param_2,int32_t param_3,int64_t *param_4,
                  uint64_t param_5)
{
  int iVar1;
  int64_t lVar2;
  int8_t stack_array_b8 [32];
  int64_t lStack_98;
  int64_t *plStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  lStack_80 = 0;
  lVar2 = (**(code **)(*(int64_t *)*param_1 + 0x288))((int64_t *)*param_1,param_2,1);
  if (lVar2 == 0) {
// WARNING: Subroutine does not return
    SystemController(param_2,stack_array_68);
  }
  lStack_88 = 0;
  if ((((*(int *)(lVar2 + 0x60) == 0) && (*(int *)(lVar2 + 100) == 0)) &&
      (*(int *)(lVar2 + 0x68) == 0)) && (*(int *)(lVar2 + 0x6c) == 0)) {
    if (((*(int *)(lVar2 + 0x40) == 0) && (*(int *)(lVar2 + 0x44) == 0)) &&
       ((*(int *)(lVar2 + 0x48) == 0 && (*(int *)(lVar2 + 0x4c) == 0)))) goto LAB_1808b6c0b;
    local_var_78 = *(int32_t *)(lVar2 + 0x40);
    local_var_74 = *(int32_t *)(lVar2 + 0x44);
    local_var_70 = *(int32_t *)(lVar2 + 0x48);
    local_var_6c = *(int32_t *)(lVar2 + 0x4c);
    iVar1 = NetworkProtocol_bc010(param_1[2],&local_var_78,0,&lStack_88);
    if (iVar1 != 0) goto LAB_1808b6c0b;
  }
  plStack_90 = &lStack_80;
  lStack_98 = param_1[2] + 0x290;
  iVar1 = NetworkProtocol_b6fd0(param_1,lVar2,param_3,lStack_88);
  lVar2 = lStack_80;
  if ((((iVar1 == 0) &&
       ((lStack_88 == 0 ||
        (iVar1 = SystemCore_3f130(*(uint64_t *)(lStack_88 + 0x78),
                               *(uint64_t *)(*(int64_t *)(lStack_80 + 0x2b0) + 0x78),1,0),
        iVar1 == 0)))) && (iVar1 = NetworkProtocol_624a0(lVar2), iVar1 == 0)) &&
     (iVar1 = NetworkProtocol_b68c0(param_1[2] + 0x3c8,lVar2,param_5), iVar1 == 0)) {
    *param_4 = lVar2;
  }
LAB_1808b6c0b:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
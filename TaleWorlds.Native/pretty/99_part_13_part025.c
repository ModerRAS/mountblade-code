#include "SystemDataAdvancedController_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part025.c - 1 个函数
// 函数: void NetworkProtocol_b51e6(void)
void NetworkProtocol_b51e6(void)
{
  short sVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int local_var_80;
  uint64_t local_buffer_b0;
  iVar4 = NetworkProtocol_b2950();
  if ((((((iVar4 != 0) || (cVar3 = Function_96032b68(), cVar3 == '\0')) ||
        (iVar4 = NetworkProtocol_b5a30(), iVar4 != 0)) ||
       (((*(short *)(unaff_R15 + 0xc) == 7 && ((*(uint *)(unaff_R14 + 0x88) >> 3 & 1) != 0)) &&
        (iVar4 = NetworkProtocol_b59b0(), iVar4 != 0)))) ||
      ((*(short *)(unaff_R15 + 0xc) == 6 &&
       ((((piVar5 = (int *)SystemFunction_0001808da6d0(), *piVar5 != 0 || (piVar5[1] != 0)) ||
         ((piVar5[2] != 0 || (piVar5[3] != 0)))) && (iVar4 = NetworkProtocol_b4e20(), iVar4 != 0)))))) ||
     ((*(short *)(unaff_R15 + 0xc) == 7 && (iVar4 = NetworkProtocol_b4d60(), iVar4 != 0))))
  goto LAB_1808b536d;
  lVar2 = *(int64_t *)(unaff_R14 + 0x40);
  sVar1 = *(short *)(lVar2 + 0xc);
  if ((ushort)(sVar1 - 4U) < 2) {
    iVar4 = NetworkProtocol_b5eb0();
  }
  else if (sVar1 == 6) {
    iVar4 = SystemCore_40c00(*(uint64_t *)(unaff_R14 + 0x30),&local_buffer_00000080);
    if (((iVar4 != 0) || (local_var_80 != 0x18)) || (iVar4 = SystemDataFlowProcessor(), iVar4 != 0))
    goto LAB_1808b536d;
    SystemFunction_0001808da6d0(lVar2,&local_buffer_00000070);
    iVar4 = NetworkProtocol_b4440();
  }
  else {
    if (sVar1 != 7) goto LAB_1808b536d;
    iVar4 = NetworkProtocol_b4320();
  }
  if (((iVar4 == 0) &&
      (iVar4 = SystemCore_40ff0(*(uint64_t *)(unaff_R14 + 0x30),*(int8_t *)(lVar2 + 0x40)),
      iVar4 == 0)) && ((iVar4 = NetworkProtocol_b3f80(), iVar4 == 0 && (sVar1 == 7)))) {
    SystemDataFlowProcessor();
  }
LAB_1808b536d:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_b0 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_b5390(int64_t *param_1,int32_t *param_2,uint64_t *param_3)
{
  uint uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  bool bVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int64_t lVar11;
  int iVar12;
  int *piVar13;
  uint64_t *puVar14;
  int32_t astack_special_x_8 [2];
  uint64_t *apstack_special_x_18 [2];
  uint local_var_48;
  uint local_var_44;
  uint local_var_40;
  uint local_var_3c;
  lVar2 = param_1[5];
  uVar1 = *(uint *)(param_3 + 0x10);
  apstack_special_x_18[0] = param_3;
  if (lVar2 != 0) {
    SystemMemoryAllocator(lVar2);
  }
  plVar7 = (int64_t *)Function_357ff8fd(param_1 + 6,param_2);
  if (plVar7 == (int64_t *)0x0) {
    plVar7 = (int64_t *)Function_357ff8fd(param_1,param_2);
  }
  puVar14 = (uint64_t *)0x0;
  if (plVar7 == (int64_t *)0x0) {
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar2);
    }
  }
  else {
    puVar8 = puVar14;
    if (((*(int *)((int64_t)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar12 = *(int *)(*plVar7 + (int64_t)(int)((int)plVar7[1] - 1U & uVar1) * 4), iVar12 != -1)
       ) {
      lVar11 = plVar7[2];
      do {
        lVar10 = (int64_t)iVar12;
        if (*(uint *)(lVar11 + lVar10 * 0x10) == uVar1) {
          puVar8 = *(uint64_t **)(lVar11 + 8 + lVar10 * 0x10);
          break;
        }
        iVar12 = *(int *)(lVar11 + 4 + lVar10 * 0x10);
      } while (iVar12 != -1);
    }
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar2);
    }
    if (puVar8 != (uint64_t *)0x0) {
      return 0x1f;
    }
  }
  plVar7 = param_1 + 6;
  if ((int)param_1[0xc] < 1) {
    plVar7 = param_1;
  }
  lVar2 = plVar7[5];
  if (lVar2 != 0) {
    SystemMemoryAllocator(lVar2);
  }
  puVar8 = (uint64_t *)Function_357ff8fd(plVar7,param_2);
  if (lVar2 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar2);
  }
  bVar6 = false;
  puVar9 = puVar14;
  if (puVar8 == (uint64_t *)0x0) {
    puVar9 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&rendering_buffer_2080_ptr,0x124,0,0,1);
    if (puVar9 == (uint64_t *)0x0) {
      iVar12 = 0x26;
      puVar9 = puVar14;
      goto LAB_1808b566f;
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    bVar6 = true;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *(int32_t *)(puVar9 + 4) = 0xffffffff;
    *(int32_t *)((int64_t)puVar9 + 0x24) = 0;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(int32_t *)(puVar9 + 5) = *param_2;
    *(int32_t *)((int64_t)puVar9 + 0x2c) = uVar3;
    *(int32_t *)(puVar9 + 6) = uVar4;
    *(int32_t *)((int64_t)puVar9 + 0x34) = uVar5;
    puVar8 = puVar9;
  }
  astack_special_x_8[0] = *(int32_t *)(param_3 + 0x10);
  iVar12 = RenderingSystem_Renderer(puVar8,astack_special_x_8,apstack_special_x_18);
  if (iVar12 != 0) goto LAB_1808b566f;
  if (!bVar6) {
    return 0;
  }
  local_var_48 = *(uint *)(puVar8 + 5);
  local_var_44 = *(uint *)((int64_t)puVar8 + 0x2c);
  local_var_40 = *(uint *)(puVar8 + 6);
  local_var_3c = *(uint *)((int64_t)puVar8 + 0x34);
  lVar2 = plVar7[5];
  apstack_special_x_18[0] = puVar8;
  if (lVar2 != 0) {
    SystemMemoryAllocator(lVar2);
  }
  iVar12 = NetworkSystem_PacketProcessor(plVar7);
  if (iVar12 == 0) {
    if ((int)plVar7[1] != 0) {
      lVar11 = (int64_t)
               (int)((local_var_48 ^ local_var_44 ^ local_var_3c ^ local_var_40) & (int)plVar7[1] - 1U);
      piVar13 = (int *)(*plVar7 + lVar11 * 4);
      iVar12 = *(int *)(*plVar7 + lVar11 * 4);
      if (iVar12 != -1) {
        lVar11 = plVar7[2];
        do {
          lVar10 = (int64_t)iVar12 * 0x20;
          if ((*(int64_t *)(lVar10 + lVar11) == CONCAT44(local_var_44,local_var_48)) &&
             (*(int64_t *)(lVar10 + 8 + lVar11) == CONCAT44(local_var_3c,local_var_40)))
          goto NetworkProtocol_b563b;
          piVar13 = (int *)(lVar11 + 0x10 + lVar10);
          iVar12 = *piVar13;
        } while (iVar12 != -1);
      }
      iVar12 = NetworkProtocol_4e8f0(plVar7,&local_var_48,apstack_special_x_18,piVar13);
      if (iVar12 == 0) goto LAB_1808b5611;
      goto LAB_1808b560d;
    }
NetworkProtocol_b563b:
    iVar12 = 0x1c;
  }
  else {
LAB_1808b560d:
    if (iVar12 == 0) {
LAB_1808b5611:
      if (lVar2 == 0) {
        return 0;
      }
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar2);
    }
  }
  if (lVar2 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar2);
  }
  if (iVar12 == 0) {
    return 0;
  }
  apstack_special_x_18[0] = (uint64_t *)CONCAT44(apstack_special_x_18[0]._4_4_,*(int32_t *)(param_3 + 0x10));
  Function_80f6898d(puVar8,apstack_special_x_18);
LAB_1808b566f:
  if (puVar9 == (uint64_t *)0x0) {
    return iVar12;
  }
  NetworkProtocol_bb9a0(puVar9);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar9,&rendering_buffer_2144_ptr,0xc6,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_b5408(void)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *unaff_RSI;
  int iVar10;
  int *piVar11;
  int iVar12;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R14;
  int32_t *unaff_R15;
  bool in_ZF;
  char in_SF;
  char in_OF;
  uint local_buffer_40;
  uint local_buffer_44;
  uint local_buffer_48;
  uint local_buffer_4c;
  int32_t local_var_90;
  int64_t *local_var_a0;
  if (in_ZF || in_OF != in_SF) {
    unaff_R14 = unaff_RSI;
  }
  lVar1 = unaff_R14[5];
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  plVar6 = (int64_t *)Function_357ff8fd(unaff_R14);
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  bVar5 = false;
  iVar12 = (int)unaff_R12;
  plVar7 = (int64_t *)unaff_R12;
  if (plVar6 == (int64_t *)0x0) {
    plVar7 = (int64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&rendering_buffer_2080_ptr,0x124);
    if (plVar7 == (int64_t *)0x0) {
      iVar10 = 0x26;
      plVar7 = (int64_t *)unaff_R12;
      goto LAB_1808b566f;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar5 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(int32_t *)(plVar7 + 4) = 0xffffffff;
    *(int *)((int64_t)plVar7 + 0x24) = iVar12;
    uVar2 = unaff_R15[1];
    uVar3 = unaff_R15[2];
    uVar4 = unaff_R15[3];
    *(int32_t *)(plVar7 + 5) = *unaff_R15;
    *(int32_t *)((int64_t)plVar7 + 0x2c) = uVar2;
    *(int32_t *)(plVar7 + 6) = uVar3;
    *(int32_t *)((int64_t)plVar7 + 0x34) = uVar4;
    plVar6 = plVar7;
  }
  local_var_90 = *(int32_t *)(unaff_R13 + 0x80);
  iVar10 = RenderingSystem_Renderer(plVar6,&local_buffer_00000090,&local_buffer_000000a0);
  if (iVar10 != 0) goto LAB_1808b566f;
  if (!bVar5) {
    return iVar12;
  }
  local_buffer_40 = *(uint *)(plVar6 + 5);
  local_buffer_44 = *(uint *)((int64_t)plVar6 + 0x2c);
  local_buffer_48 = *(uint *)(plVar6 + 6);
  local_buffer_4c = *(uint *)((int64_t)plVar6 + 0x34);
  lVar1 = unaff_R14[5];
  local_var_a0 = plVar6;
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  iVar10 = NetworkSystem_PacketProcessor(unaff_R14);
  if (iVar10 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar9 = (int64_t)
              (int)((local_buffer_40 ^ local_buffer_44 ^ local_buffer_4c ^
                    local_buffer_48) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar9 * 4);
      iVar10 = *(int *)(*unaff_R14 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = unaff_R14[2];
        do {
          lVar8 = (int64_t)iVar10 * 0x20;
          if ((*(int64_t *)(lVar8 + lVar9) ==
               CONCAT44(local_buffer_44,local_buffer_40)) &&
             (*(int64_t *)(lVar8 + 8 + lVar9) ==
              CONCAT44(local_buffer_4c,local_buffer_48))) goto NetworkProtocol_b563b;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = NetworkProtocol_4e8f0(unaff_R14,&local_buffer_00000040,&local_buffer_000000a0,piVar11);
      if (iVar10 == 0) goto LAB_1808b5611;
      goto LAB_1808b560d;
    }
NetworkProtocol_b563b:
    iVar10 = 0x1c;
  }
  else {
LAB_1808b560d:
    if (iVar10 == 0) {
LAB_1808b5611:
      if (lVar1 == 0) {
        return iVar12;
      }
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
  }
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  if (iVar10 == 0) {
    return iVar12;
  }
  local_var_a0 =
       (int64_t *)CONCAT44(local_var_a0._4_4_,*(int32_t *)(unaff_R13 + 0x80));
  Function_80f6898d(plVar6,&local_buffer_000000a0);
LAB_1808b566f:
  if (plVar7 == (int64_t *)0x0) {
    return iVar10;
  }
  NetworkProtocol_bb9a0(plVar7);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&rendering_buffer_2144_ptr,0xc6,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_b542a(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int64_t *unaff_RSI;
  uint unaff_EDI;
  int iVar9;
  int64_t lVar10;
  int *piVar11;
  int iVar12;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R14;
  int32_t *unaff_R15;
  uint local_buffer_40;
  uint local_buffer_44;
  uint local_buffer_48;
  uint local_buffer_4c;
  int32_t local_var_90;
  int64_t *local_var_a0;
  iVar12 = (int)unaff_R12;
  lVar10 = unaff_R12;
  if (((*(int *)((int64_t)param_3 + 0x24) != iVar12) && ((int)param_3[1] != 0)) &&
     (iVar9 = *(int *)(*param_3 + (int64_t)(int)((int)param_3[1] - 1U & unaff_EDI) * 4),
     iVar9 != -1)) {
    lVar8 = param_3[2];
    do {
      lVar5 = (int64_t)iVar9;
      if (*(uint *)(lVar8 + lVar5 * 0x10) == unaff_EDI) {
        lVar10 = *(int64_t *)(lVar8 + 8 + lVar5 * 0x10);
        break;
      }
      iVar9 = *(int *)(lVar8 + 4 + lVar5 * 0x10);
    } while (iVar9 != -1);
  }
  if (unaff_RBX != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  if (lVar10 != 0) {
    return 0x1f;
  }
  if ((int)unaff_RSI[0xc] <= iVar12) {
    unaff_R14 = unaff_RSI;
  }
  lVar10 = unaff_R14[5];
  if (lVar10 != 0) {
    SystemMemoryAllocator(lVar10);
  }
  plVar6 = (int64_t *)Function_357ff8fd(unaff_R14);
  if (lVar10 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar10);
  }
  bVar4 = false;
  plVar7 = (int64_t *)unaff_R12;
  if (plVar6 == (int64_t *)0x0) {
    plVar7 = (int64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&rendering_buffer_2080_ptr,0x124);
    if (plVar7 == (int64_t *)0x0) {
      iVar9 = 0x26;
      plVar7 = (int64_t *)unaff_R12;
      goto LAB_1808b566f;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar4 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(int32_t *)(plVar7 + 4) = 0xffffffff;
    *(int *)((int64_t)plVar7 + 0x24) = iVar12;
    uVar1 = unaff_R15[1];
    uVar2 = unaff_R15[2];
    uVar3 = unaff_R15[3];
    *(int32_t *)(plVar7 + 5) = *unaff_R15;
    *(int32_t *)((int64_t)plVar7 + 0x2c) = uVar1;
    *(int32_t *)(plVar7 + 6) = uVar2;
    *(int32_t *)((int64_t)plVar7 + 0x34) = uVar3;
    plVar6 = plVar7;
  }
  local_var_90 = *(int32_t *)(unaff_R13 + 0x80);
  iVar9 = RenderingSystem_Renderer(plVar6,&local_buffer_00000090,&local_buffer_000000a0);
  if (iVar9 != 0) goto LAB_1808b566f;
  if (!bVar4) {
    return iVar12;
  }
  local_buffer_40 = *(uint *)(plVar6 + 5);
  local_buffer_44 = *(uint *)((int64_t)plVar6 + 0x2c);
  local_buffer_48 = *(uint *)(plVar6 + 6);
  local_buffer_4c = *(uint *)((int64_t)plVar6 + 0x34);
  lVar10 = unaff_R14[5];
  local_var_a0 = plVar6;
  if (lVar10 != 0) {
    SystemMemoryAllocator(lVar10);
  }
  iVar9 = NetworkSystem_PacketProcessor(unaff_R14);
  if (iVar9 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar8 = (int64_t)
              (int)((local_buffer_40 ^ local_buffer_44 ^ local_buffer_4c ^
                    local_buffer_48) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar8 * 4);
      iVar9 = *(int *)(*unaff_R14 + lVar8 * 4);
      if (iVar9 != -1) {
        lVar8 = unaff_R14[2];
        do {
          lVar5 = (int64_t)iVar9 * 0x20;
          if ((*(int64_t *)(lVar5 + lVar8) ==
               CONCAT44(local_buffer_44,local_buffer_40)) &&
             (*(int64_t *)(lVar5 + 8 + lVar8) ==
              CONCAT44(local_buffer_4c,local_buffer_48))) goto NetworkProtocol_b563b;
          piVar11 = (int *)(lVar8 + 0x10 + lVar5);
          iVar9 = *piVar11;
        } while (iVar9 != -1);
      }
      iVar9 = NetworkProtocol_4e8f0(unaff_R14,&local_buffer_00000040,&local_buffer_000000a0,piVar11);
      if (iVar9 == 0) goto LAB_1808b5611;
      goto LAB_1808b560d;
    }
NetworkProtocol_b563b:
    iVar9 = 0x1c;
  }
  else {
LAB_1808b560d:
    if (iVar9 == 0) {
LAB_1808b5611:
      if (lVar10 == 0) {
        return iVar12;
      }
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar10);
    }
  }
  if (lVar10 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar10);
  }
  if (iVar9 == 0) {
    return iVar12;
  }
  local_var_a0 =
       (int64_t *)CONCAT44(local_var_a0._4_4_,*(int32_t *)(unaff_R13 + 0x80));
  Function_80f6898d(plVar6,&local_buffer_000000a0);
LAB_1808b566f:
  if (plVar7 == (int64_t *)0x0) {
    return iVar9;
  }
  NetworkProtocol_bb9a0(plVar7);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&rendering_buffer_2144_ptr,0xc6,1);
}
// WARNING: Removing unreachable block (ram,0x0001808b54ab)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_b5495(void)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R14;
  int32_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  uint local_buffer_40;
  uint local_buffer_44;
  uint local_buffer_48;
  uint local_buffer_4c;
  int32_t local_var_90;
  int64_t *local_var_a0;
  plVar6 = (int64_t *)Function_357ff8fd();
  bVar5 = false;
  iVar12 = (int)unaff_R12;
  plVar7 = (int64_t *)unaff_R12;
  if (plVar6 == (int64_t *)0x0) {
    plVar7 = (int64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&rendering_buffer_2080_ptr,0x124);
    if (plVar7 == (int64_t *)0x0) {
      iVar10 = 0x26;
      plVar7 = (int64_t *)unaff_R12;
      goto LAB_1808b566f;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar5 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(int32_t *)(plVar7 + 4) = 0xffffffff;
    *(int *)((int64_t)plVar7 + 0x24) = iVar12;
    uVar2 = unaff_R15[1];
    uVar3 = unaff_R15[2];
    uVar4 = unaff_R15[3];
    *(int32_t *)(plVar7 + 5) = *unaff_R15;
    *(int32_t *)((int64_t)plVar7 + 0x2c) = uVar2;
    *(int32_t *)(plVar7 + 6) = uVar3;
    *(int32_t *)((int64_t)plVar7 + 0x34) = uVar4;
    plVar6 = plVar7;
  }
  local_var_90 = *(int32_t *)(unaff_R13 + 0x80);
  iVar10 = RenderingSystem_Renderer(plVar6,&local_buffer_00000090,&local_buffer_000000a0);
  if (iVar10 != 0) goto LAB_1808b566f;
  if (!bVar5) {
    return iVar12;
  }
  local_buffer_40 = *(uint *)(plVar6 + 5);
  local_buffer_44 = *(uint *)((int64_t)plVar6 + 0x2c);
  local_buffer_48 = *(uint *)(plVar6 + 6);
  local_buffer_4c = *(uint *)((int64_t)plVar6 + 0x34);
  lVar1 = unaff_R14[5];
  local_var_a0 = plVar6;
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  iVar10 = NetworkSystem_PacketProcessor();
  if (iVar10 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar9 = (int64_t)
              (int)((local_buffer_40 ^ local_buffer_44 ^ local_buffer_4c ^
                    local_buffer_48) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar9 * 4);
      iVar10 = *(int *)(*unaff_R14 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = unaff_R14[2];
        do {
          lVar8 = (int64_t)iVar10 * 0x20;
          if ((*(int64_t *)(lVar8 + lVar9) ==
               CONCAT44(local_buffer_44,local_buffer_40)) &&
             (*(int64_t *)(lVar8 + 8 + lVar9) ==
              CONCAT44(local_buffer_4c,local_buffer_48))) goto NetworkProtocol_b563b;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = NetworkProtocol_4e8f0(extraout_XMM0_Da,&local_buffer_00000040,&local_buffer_000000a0,piVar11);
      if (iVar10 == 0) goto LAB_1808b5611;
      goto LAB_1808b560d;
    }
NetworkProtocol_b563b:
    iVar10 = 0x1c;
  }
  else {
LAB_1808b560d:
    if (iVar10 == 0) {
LAB_1808b5611:
      if (lVar1 == 0) {
        return iVar12;
      }
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
  }
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  if (iVar10 == 0) {
    return iVar12;
  }
  local_var_a0 =
       (int64_t *)CONCAT44(local_var_a0._4_4_,*(int32_t *)(unaff_R13 + 0x80));
  Function_80f6898d(plVar6,&local_buffer_000000a0);
LAB_1808b566f:
  if (plVar7 == (int64_t *)0x0) {
    return iVar10;
  }
  NetworkProtocol_bb9a0(plVar7);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&rendering_buffer_2144_ptr,0xc6,1);
}
// WARNING: Removing unreachable block (ram,0x0001808b561e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t NetworkProtocol_b563b(void)
{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  if (unaff_RBP != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  Function_80f6898d();
  if (unaff_RBX == 0) {
    return 0x1c;
  }
  NetworkProtocol_bb9a0();
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
uint64_t NetworkProtocol_b5720(int64_t param_1,int32_t param_2,int32_t param_3)
{
  uint64_t uVar1;
  void *plocal_var_28;
  int64_t lStack_20;
  int32_t local_var_18;
  int32_t local_var_14;
  plocal_var_28 = &ui_system_data_1456_ptr;
  lStack_20 = param_1;
  local_var_18 = param_2;
  local_var_14 = param_3;
  uVar1 = (**(code **)(**(int64_t **)(param_1 + 0x40) + 0x28))
                    (*(int64_t **)(param_1 + 0x40),&plocal_var_28);
  if ((int)uVar1 == 0) {
    if ((*(int64_t *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x78) != -1)) {
      Function_4a281744();
    }
    uVar1 = 0;
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * NetworkProtocol_b5780(int64_t *param_1,uint64_t *param_2)
{
  int64_t lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  int *piVar11;
  uint local_var_28;
  uint local_var_24;
  uint local_var_20;
  uint local_var_1c;
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  plVar5 = (int64_t *)(**(code **)*param_2)(param_2);
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_var_28);
  plVar5 = (int64_t *)0x0;
  if (((*(int *)((int64_t)param_1 + 0x54) != 0) && ((int)param_1[7] != 0)) &&
     (iVar9 = *(int *)(param_1[6] +
                      (int64_t)
                      (int)((local_var_28 ^ local_var_24 ^ local_var_20 ^ local_var_1c) & (int)param_1[7] - 1U)
                      * 4), iVar9 != -1)) {
    do {
      plVar6 = (int64_t *)((int64_t)iVar9 * 0x20 + param_1[8]);
      if ((*plVar6 == CONCAT44(local_var_24,local_var_28)) && (plVar6[1] == CONCAT44(local_var_1c,local_var_20))
         ) {
        plVar6 = (int64_t *)plVar6[3];
        if (plVar6 != (int64_t *)0x0) {
          bVar2 = false;
          goto LAB_1808b5883;
        }
        break;
      }
      iVar9 = (int)plVar6[2];
    } while (iVar9 != -1);
  }
  plVar6 = plVar5;
  if (((*(int *)((int64_t)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
     (iVar9 = *(int *)(*param_1 +
                      (int64_t)
                      (int)((local_var_28 ^ local_var_24 ^ local_var_20 ^ local_var_1c) & (int)param_1[1] - 1U)
                      * 4), iVar9 != -1)) {
    do {
      plVar7 = (int64_t *)((int64_t)iVar9 * 0x20 + param_1[2]);
      if ((*plVar7 == CONCAT44(local_var_24,local_var_28)) && (plVar7[1] == CONCAT44(local_var_1c,local_var_20))
         ) {
        plVar6 = (int64_t *)plVar7[3];
        break;
      }
      iVar9 = (int)plVar7[2];
    } while (iVar9 != -1);
  }
  bVar2 = true;
LAB_1808b5883:
  if (plVar6 == (int64_t *)0x0) {
    uVar3 = 0x1f;
  }
  else {
    iVar9 = *(int *)((int64_t)plVar6 + 0x24);
    if (iVar9 != 0) {
      if ((int)plVar6[1] == 0) {
        uVar3 = 0x1c;
        goto LAB_1808b5986;
      }
      lVar8 = (int64_t)(int)((int)plVar6[1] - 1U & *(uint *)(param_2 + 0x10));
      piVar11 = (int *)(*plVar6 + lVar8 * 4);
      iVar4 = *(int *)(*plVar6 + lVar8 * 4);
      if (iVar4 != -1) {
        lVar8 = plVar6[2];
        do {
          if (*(uint *)(lVar8 + (int64_t)iVar4 * 0x10) == *(uint *)(param_2 + 0x10)) {
            iVar9 = *piVar11;
            lVar10 = (int64_t)iVar9;
            *(uint64_t *)(lVar8 + 8 + lVar10 * 0x10) = 0;
            *piVar11 = *(int *)(lVar8 + 4 + lVar10 * 0x10);
            *(int *)(lVar8 + 4 + lVar10 * 0x10) = (int)plVar6[4];
            *(int *)((int64_t)plVar6 + 0x24) = *(int *)((int64_t)plVar6 + 0x24) + -1;
            *(int *)(plVar6 + 4) = iVar9;
            iVar9 = *(int *)((int64_t)plVar6 + 0x24);
            break;
          }
          piVar11 = (int *)((int64_t)iVar4 * 0x10 + 4 + lVar8);
          iVar4 = *piVar11;
        } while (iVar4 != -1);
      }
      if (iVar9 != 0) goto LAB_1808b5988;
    }
    if (bVar2) {
      uVar3 = NetworkProtocol_53840(param_1,plVar6 + 5);
    }
    else {
      uVar3 = NetworkProtocol_53840(param_1 + 6,plVar6 + 5);
    }
    if (uVar3 == 0) {
      NetworkProtocol_bb9a0(plVar6);
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&rendering_buffer_2080_ptr,0xe1,1);
    }
  }
LAB_1808b5986:
  plVar5 = (int64_t *)(uint64_t)uVar3;
LAB_1808b5988:
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return plVar5;
}
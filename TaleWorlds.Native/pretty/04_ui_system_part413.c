#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part413.c - 6 个函数
// 函数: void NetworkProtocol_96c60(uint64_t param_1,int64_t param_2,uint param_3,char param_4)
void NetworkProtocol_96c60(uint64_t param_1,int64_t param_2,uint param_3,char param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void **ppuVar6;
  int iVar7;
  int8_t stack_array_328 [32];
  int32_t local_var_308;
  float afStack_304 [3];
  void *plocal_var_2f8;
  int iStack_2f0;
  uint64_t local_var_2e8;
  uint64_t local_var_2e0;
  int64_t lStack_2d8;
  uint64_t local_var_2d0;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  uint64_t local_var_2b8;
  int32_t local_var_2b0;
  uint local_var_2ac;
  void *plocal_var_2a8;
  int iStack_2a0;
  uint local_var_298;
  int32_t local_var_294;
  int iStack_290;
  int32_t local_var_28c;
  uint local_var_288;
  int32_t local_var_284;
  int32_t local_var_280;
  int32_t local_var_27c;
  void *plocal_var_278;
  int32_t local_var_270;
  uint local_var_268;
  int32_t local_var_264;
  int8_t stack_array_260 [520];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_328;
  iVar5 = 0;
  if (param_3 != 0) {
    iVar3 = *(int *)(param_2 + 0x220);
    if (iVar3 == 0) {
      plocal_var_278 = &ui_system_data_1896_ptr;
      local_var_270 = 0;
      local_var_264 = 0;
      local_var_268 = param_3;
      SystemFunction_00018076b450(stack_array_260,*(uint64_t *)(param_2 + 0x228),0x200);
      ppuVar6 = &plocal_var_278;
LAB_180896ce3:
      iVar3 = SystemNetworkProcessor(param_1,ppuVar6);
    }
    else {
      iStack_2f0 = 0;
      if (1 < iVar3 - 1U) {
        plocal_var_2f8 = &rendering_buffer_2152_ptr;
        ppuVar6 = &plocal_var_2f8;
        local_var_2b0 = 0;
        local_var_2e8 = 0;
        local_var_2e0 = 0;
        lStack_2d8 = 0;
        local_var_2d0 = 0;
        local_var_2c8 = 0;
        local_var_2c0 = 0;
        local_var_2b8 = 0;
        local_var_2ac = param_3;
        goto LAB_180896ce3;
      }
      plocal_var_2f8 = &rendering_buffer_2024_ptr;
      lStack_2d8 = (uint64_t)param_3 << 0x20;
      local_var_2e8 = *(uint64_t *)(param_2 + 0x228);
      local_var_2e0 = (uint64_t)CONCAT14(iVar3 != 1,*(int32_t *)(param_2 + 0x230));
      iVar3 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
    }
    if (iVar3 != 0) goto NetworkPacketProcessor;
    local_var_298 = *(uint *)(param_2 + 0x10);
    local_var_294 = *(int32_t *)(param_2 + 0x14);
    iStack_290 = *(int *)(param_2 + 0x18);
    local_var_28c = *(int32_t *)(param_2 + 0x1c);
    iStack_2a0 = 0;
    plocal_var_2a8 = &processed_var_5584_ptr;
    local_var_284 = 0;
    local_var_288 = param_3;
    iVar3 = SystemNetworkProcessor(param_1,&plocal_var_2a8);
    if (iVar3 != 0) goto NetworkPacketProcessor;
    iVar7 = 0;
    iVar3 = *(int *)(*(int64_t *)(param_2 + 0x2e8) + 0x2c);
    if (0 < iVar3) {
      do {
        iStack_2f0 = 0;
        plocal_var_2f8 = &memory_allocator_3872_ptr;
        local_var_2e8 = CONCAT44(local_var_2e8._4_4_,param_3);
        iVar4 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
        if (iVar4 != 0) goto NetworkPacketProcessor;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
  }
  if (((param_4 != '\0') || (*(int *)(*(int64_t *)(param_2 + 0x2e8) + 0x34) == 0)) &&
     (iVar3 = NetworkProtocol_97b40(param_1,param_2,param_3), iVar3 == 0)) {
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_2 + 0x48))); iVar3 = iVar3 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_2 + 0x40) + (int64_t)iVar3 * 8);
      lVar2 = *(int64_t *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        local_var_308 = 0;
        iVar7 = SystemFunction_00018088c500(lVar2,&local_var_308);
        if (iVar7 != 0) goto NetworkPacketProcessor;
        local_var_28c = *(int32_t *)(lVar1 + 0x10);
        local_var_288 = *(uint *)(lVar1 + 0x14);
        local_var_284 = *(int32_t *)(lVar1 + 0x18);
        local_var_280 = *(int32_t *)(lVar1 + 0x1c);
        plocal_var_2a8 = &processed_var_4888_ptr;
        iVar4 = iVar5 + 1;
        local_var_27c = local_var_308;
        iStack_2a0 = iVar7;
        local_var_298 = param_3;
        iStack_290 = iVar5;
        iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2a8);
        if ((iVar5 != 0) || (iVar5 = NetworkProtocol_8c970(lVar2,afStack_304), iVar5 != 0))
        goto NetworkPacketProcessor;
        if (afStack_304[0] != 1.0) {
          local_var_2e0 = CONCAT44(local_var_2e0._4_4_,afStack_304[0]);
          plocal_var_2f8 = &processed_var_9536_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          iStack_2f0 = iVar5;
          iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar5 != 0) goto NetworkPacketProcessor;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          iStack_2f0 = 0;
          plocal_var_2f8 = &processed_var_9656_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          local_var_2e0 = CONCAT71(local_var_2e0._1_7_,1);
          iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar5 != 0) goto NetworkPacketProcessor;
        }
        iVar5 = iVar4;
        if (*(char *)(lVar2 + 0x29) != '\0') {
          iStack_2f0 = 0;
          plocal_var_2f8 = &system_string2_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          local_var_2e0 = CONCAT71(local_var_2e0._1_7_,1);
          iVar7 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar7 != 0) goto NetworkPacketProcessor;
        }
      }
    }
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_2 + 0x58))); iVar3 = iVar3 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_2 + 0x50) + (int64_t)iVar3 * 8);
      lVar2 = *(int64_t *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        local_var_308 = 0;
        iVar7 = SystemFunction_00018088c500(lVar2,&local_var_308);
        if (iVar7 != 0) goto NetworkPacketProcessor;
        local_var_28c = *(int32_t *)(lVar1 + 0x10);
        local_var_288 = *(uint *)(lVar1 + 0x14);
        local_var_284 = *(int32_t *)(lVar1 + 0x18);
        local_var_280 = *(int32_t *)(lVar1 + 0x1c);
        plocal_var_2a8 = &processed_var_4888_ptr;
        iVar4 = iVar5 + 1;
        local_var_27c = local_var_308;
        iStack_2a0 = iVar7;
        local_var_298 = param_3;
        iStack_290 = iVar5;
        iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2a8);
        if ((iVar5 != 0) || (iVar5 = NetworkProtocol_8c970(lVar2,afStack_304), iVar5 != 0))
        goto NetworkPacketProcessor;
        if (afStack_304[0] != 1.0) {
          local_var_2e0 = CONCAT44(local_var_2e0._4_4_,afStack_304[0]);
          plocal_var_2f8 = &processed_var_9536_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          iStack_2f0 = iVar5;
          iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar5 != 0) goto NetworkPacketProcessor;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          iStack_2f0 = 0;
          plocal_var_2f8 = &processed_var_9656_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          local_var_2e0 = CONCAT71(local_var_2e0._1_7_,1);
          iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar5 != 0) goto NetworkPacketProcessor;
        }
        iVar5 = iVar4;
        if (*(char *)(lVar2 + 0x29) != '\0') {
          iStack_2f0 = 0;
          plocal_var_2f8 = &system_string2_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          local_var_2e0 = CONCAT71(local_var_2e0._1_7_,1);
          iVar7 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar7 != 0) goto NetworkPacketProcessor;
        }
      }
    }
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_2 + 0x68))); iVar3 = iVar3 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_2 + 0x60) + (int64_t)iVar3 * 8);
      lVar2 = *(int64_t *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        local_var_308 = 0;
        iVar7 = SystemFunction_00018088c500(lVar2,&local_var_308);
        if (iVar7 != 0) goto NetworkPacketProcessor;
        local_var_28c = *(int32_t *)(lVar1 + 0x10);
        local_var_288 = *(uint *)(lVar1 + 0x14);
        local_var_284 = *(int32_t *)(lVar1 + 0x18);
        local_var_280 = *(int32_t *)(lVar1 + 0x1c);
        plocal_var_2a8 = &processed_var_4888_ptr;
        iVar4 = iVar5 + 1;
        local_var_27c = local_var_308;
        iStack_2a0 = iVar7;
        local_var_298 = param_3;
        iStack_290 = iVar5;
        iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2a8);
        if ((iVar5 != 0) || (iVar5 = NetworkProtocol_8c970(lVar2,afStack_304), iVar5 != 0))
        goto NetworkPacketProcessor;
        if (afStack_304[0] != 1.0) {
          local_var_2e0 = CONCAT44(local_var_2e0._4_4_,afStack_304[0]);
          plocal_var_2f8 = &processed_var_9536_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          iStack_2f0 = iVar5;
          iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar5 != 0) goto NetworkPacketProcessor;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          iStack_2f0 = 0;
          plocal_var_2f8 = &processed_var_9656_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          local_var_2e0 = CONCAT71(local_var_2e0._1_7_,1);
          iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar5 != 0) goto NetworkPacketProcessor;
        }
        iVar5 = iVar4;
        if (*(char *)(lVar2 + 0x29) != '\0') {
          iStack_2f0 = 0;
          plocal_var_2f8 = &system_string2_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          local_var_2e0 = CONCAT71(local_var_2e0._1_7_,1);
          iVar7 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar7 != 0) goto NetworkPacketProcessor;
        }
      }
    }
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_2 + 0x78))); iVar3 = iVar3 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_2 + 0x70) + (int64_t)iVar3 * 8);
      lVar2 = *(int64_t *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        local_var_308 = 0;
        iVar7 = SystemFunction_00018088c500(lVar2,&local_var_308);
        if (iVar7 != 0) goto NetworkPacketProcessor;
        local_var_28c = *(int32_t *)(lVar1 + 0x10);
        local_var_288 = *(uint *)(lVar1 + 0x14);
        local_var_284 = *(int32_t *)(lVar1 + 0x18);
        local_var_280 = *(int32_t *)(lVar1 + 0x1c);
        plocal_var_2a8 = &processed_var_4888_ptr;
        iVar4 = iVar5 + 1;
        local_var_27c = local_var_308;
        iStack_2a0 = iVar7;
        local_var_298 = param_3;
        iStack_290 = iVar5;
        iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2a8);
        if ((iVar5 != 0) || (iVar5 = NetworkProtocol_8c970(lVar2,afStack_304), iVar5 != 0))
        goto NetworkPacketProcessor;
        if (afStack_304[0] != 1.0) {
          local_var_2e0 = CONCAT44(local_var_2e0._4_4_,afStack_304[0]);
          plocal_var_2f8 = &processed_var_9536_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          iStack_2f0 = iVar5;
          iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar5 != 0) goto NetworkPacketProcessor;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          iStack_2f0 = 0;
          plocal_var_2f8 = &processed_var_9656_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          local_var_2e0 = CONCAT71(local_var_2e0._1_7_,1);
          iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar5 != 0) goto NetworkPacketProcessor;
        }
        iVar5 = iVar4;
        if (*(char *)(lVar2 + 0x29) != '\0') {
          iStack_2f0 = 0;
          plocal_var_2f8 = &system_string2_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          local_var_2e0 = CONCAT71(local_var_2e0._1_7_,1);
          iVar7 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar7 != 0) goto NetworkPacketProcessor;
        }
      }
    }
    iVar5 = 0;
    iVar3 = 0;
    do {
      if ((iVar3 < 0) || (*(int *)(param_2 + 200) <= iVar3)) break;
      lVar1 = *(int64_t *)(*(int64_t *)(param_2 + 0xc0) + (int64_t)iVar3 * 8);
      lVar2 = *(int64_t *)(lVar1 + 0x48);
      if (lVar2 != 0) {
        local_var_308 = 0;
        iVar7 = SystemFunction_00018088c500(lVar2,&local_var_308);
        if (iVar7 != 0) break;
        local_var_28c = *(int32_t *)(lVar1 + 0x10);
        local_var_288 = *(uint *)(lVar1 + 0x14);
        local_var_284 = *(int32_t *)(lVar1 + 0x18);
        local_var_280 = *(int32_t *)(lVar1 + 0x1c);
        plocal_var_2a8 = &processed_var_5272_ptr;
        iVar4 = iVar5 + 1;
        local_var_27c = local_var_308;
        iStack_2a0 = iVar7;
        local_var_298 = param_3;
        iStack_290 = iVar5;
        iVar5 = SystemNetworkProcessor(param_1,&plocal_var_2a8);
        if ((iVar5 != 0) || (iVar7 = NetworkProtocol_8cbb0(lVar2,afStack_304,0), iVar7 != 0)) break;
        iVar5 = iVar4;
        if (afStack_304[0] != 1.0) {
          local_var_2e0 = CONCAT44(local_var_2e0._4_4_,afStack_304[0]);
          plocal_var_2f8 = &rendering_buffer_24_ptr;
          local_var_2e8 = CONCAT44(local_var_2e8._4_4_,local_var_308);
          iStack_2f0 = iVar7;
          iVar7 = SystemNetworkProcessor(param_1,&plocal_var_2f8);
          if (iVar7 != 0) break;
        }
      }
      iVar3 = iVar3 + 1;
    } while( true );
  }
NetworkPacketProcessor:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_328);
}
// 函数: void NetworkProtocol_96e11(void)
void NetworkProtocol_96e11(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int32_t unaff_EBX;
  int64_t unaff_RBP;
  int unaff_R12D;
  int64_t unaff_R13;
  char unaff_R15B;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float fVar10;
  int32_t stack_special_x_20;
  float fStackX_24;
  void *local_var_30;
  int local_var_38;
  int32_t local_var_40;
  float local_var_48;
  if (((unaff_R15B != '\0') || (*(int *)(*(int64_t *)(unaff_R13 + 0x2e8) + 0x34) == unaff_R12D)) &&
     (iVar7 = NetworkProtocol_97b40(), iVar7 == 0)) {
    for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(unaff_R13 + 0x48))); iVar7 = iVar7 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_R13 + 0x40) + (int64_t)iVar7 * 8);
      lVar2 = *(int64_t *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        stack_special_x_20 = 0;
        iVar8 = SystemFunction_00018088c500(lVar2,&stack_special_x_20);
        if (iVar8 != 0) goto LAB_1808974ec;
        uVar3 = *(int32_t *)(lVar1 + 0x10);
        uVar4 = *(int32_t *)(lVar1 + 0x14);
        uVar5 = *(int32_t *)(lVar1 + 0x18);
        uVar6 = *(int32_t *)(lVar1 + 0x1c);
        *(int32_t *)(unaff_RBP + -0x78) = 0;
        *(int *)(unaff_RBP + -0x68) = unaff_R12D;
        *(void **)(unaff_RBP + -0x80) = &processed_var_4888_ptr;
        unaff_R12D = unaff_R12D + 1;
        *(int32_t *)(unaff_RBP + -0x54) = stack_special_x_20;
        *(int32_t *)(unaff_RBP + -0x70) = unaff_EBX;
        *(int32_t *)(unaff_RBP + -100) = uVar3;
        *(int32_t *)(unaff_RBP + -0x60) = uVar4;
        *(int32_t *)(unaff_RBP + -0x5c) = uVar5;
        *(int32_t *)(unaff_RBP + -0x58) = uVar6;
        iVar8 = SystemNetworkProcessor(uVar3,unaff_RBP + -0x80);
        if ((iVar8 != 0) || (iVar8 = NetworkProtocol_8c970(lVar2,&fStackX_24), iVar8 != 0))
        goto LAB_1808974ec;
        fVar10 = fStackX_24;
        if (fStackX_24 != 1.0) {
          local_var_48 = fStackX_24;
          local_var_30 = &processed_var_9536_ptr;
          local_var_40 = stack_special_x_20;
          local_var_38 = iVar8;
          iVar8 = SystemNetworkProcessor(fStackX_24,&local_buffer_00000030);
          fVar10 = extraout_XMM0_Da;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          local_var_38 = 0;
          local_var_30 = &processed_var_9656_ptr;
          local_var_40 = stack_special_x_20;
          local_var_48 = (float)CONCAT31(local_var_48._1_3_,1);
          iVar8 = SystemNetworkProcessor(fVar10,&local_buffer_00000030);
          fVar10 = extraout_XMM0_Da_00;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x29) != '\0') {
          local_var_38 = 0;
          local_var_30 = &system_string2_ptr;
          local_var_40 = stack_special_x_20;
          local_var_48 = (float)CONCAT31(local_var_48._1_3_,1);
          iVar8 = SystemNetworkProcessor(fVar10,&local_buffer_00000030);
          if (iVar8 != 0) goto LAB_1808974ec;
        }
      }
    }
    for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(unaff_R13 + 0x58))); iVar7 = iVar7 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_R13 + 0x50) + (int64_t)iVar7 * 8);
      lVar2 = *(int64_t *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        stack_special_x_20 = 0;
        iVar8 = SystemFunction_00018088c500(lVar2,&stack_special_x_20);
        if (iVar8 != 0) goto LAB_1808974ec;
        uVar3 = *(int32_t *)(lVar1 + 0x10);
        uVar4 = *(int32_t *)(lVar1 + 0x14);
        uVar5 = *(int32_t *)(lVar1 + 0x18);
        uVar6 = *(int32_t *)(lVar1 + 0x1c);
        *(int32_t *)(unaff_RBP + -0x78) = 0;
        *(int *)(unaff_RBP + -0x68) = unaff_R12D;
        *(void **)(unaff_RBP + -0x80) = &processed_var_4888_ptr;
        unaff_R12D = unaff_R12D + 1;
        *(int32_t *)(unaff_RBP + -0x54) = stack_special_x_20;
        *(int32_t *)(unaff_RBP + -0x70) = unaff_EBX;
        *(int32_t *)(unaff_RBP + -100) = uVar3;
        *(int32_t *)(unaff_RBP + -0x60) = uVar4;
        *(int32_t *)(unaff_RBP + -0x5c) = uVar5;
        *(int32_t *)(unaff_RBP + -0x58) = uVar6;
        iVar8 = SystemNetworkProcessor(uVar3,unaff_RBP + -0x80);
        if ((iVar8 != 0) || (iVar8 = NetworkProtocol_8c970(lVar2,&fStackX_24), iVar8 != 0))
        goto LAB_1808974ec;
        fVar10 = fStackX_24;
        if (fStackX_24 != 1.0) {
          local_var_48 = fStackX_24;
          local_var_30 = &processed_var_9536_ptr;
          local_var_40 = stack_special_x_20;
          local_var_38 = iVar8;
          iVar8 = SystemNetworkProcessor(fStackX_24,&local_buffer_00000030);
          fVar10 = extraout_XMM0_Da_01;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          local_var_38 = 0;
          local_var_30 = &processed_var_9656_ptr;
          local_var_40 = stack_special_x_20;
          local_var_48 = (float)CONCAT31(local_var_48._1_3_,1);
          iVar8 = SystemNetworkProcessor(fVar10,&local_buffer_00000030);
          fVar10 = extraout_XMM0_Da_02;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x29) != '\0') {
          local_var_38 = 0;
          local_var_30 = &system_string2_ptr;
          local_var_40 = stack_special_x_20;
          local_var_48 = (float)CONCAT31(local_var_48._1_3_,1);
          iVar8 = SystemNetworkProcessor(fVar10,&local_buffer_00000030);
          if (iVar8 != 0) goto LAB_1808974ec;
        }
      }
    }
    for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(unaff_R13 + 0x68))); iVar7 = iVar7 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_R13 + 0x60) + (int64_t)iVar7 * 8);
      lVar2 = *(int64_t *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        stack_special_x_20 = 0;
        iVar8 = SystemFunction_00018088c500(lVar2,&stack_special_x_20);
        if (iVar8 != 0) goto LAB_1808974ec;
        uVar3 = *(int32_t *)(lVar1 + 0x10);
        uVar4 = *(int32_t *)(lVar1 + 0x14);
        uVar5 = *(int32_t *)(lVar1 + 0x18);
        uVar6 = *(int32_t *)(lVar1 + 0x1c);
        *(int32_t *)(unaff_RBP + -0x78) = 0;
        *(int *)(unaff_RBP + -0x68) = unaff_R12D;
        *(void **)(unaff_RBP + -0x80) = &processed_var_4888_ptr;
        unaff_R12D = unaff_R12D + 1;
        *(int32_t *)(unaff_RBP + -0x54) = stack_special_x_20;
        *(int32_t *)(unaff_RBP + -0x70) = unaff_EBX;
        *(int32_t *)(unaff_RBP + -100) = uVar3;
        *(int32_t *)(unaff_RBP + -0x60) = uVar4;
        *(int32_t *)(unaff_RBP + -0x5c) = uVar5;
        *(int32_t *)(unaff_RBP + -0x58) = uVar6;
        iVar8 = SystemNetworkProcessor(uVar3,unaff_RBP + -0x80);
        if ((iVar8 != 0) || (iVar8 = NetworkProtocol_8c970(lVar2,&fStackX_24), iVar8 != 0))
        goto LAB_1808974ec;
        fVar10 = fStackX_24;
        if (fStackX_24 != 1.0) {
          local_var_48 = fStackX_24;
          local_var_30 = &processed_var_9536_ptr;
          local_var_40 = stack_special_x_20;
          local_var_38 = iVar8;
          iVar8 = SystemNetworkProcessor(fStackX_24,&local_buffer_00000030);
          fVar10 = extraout_XMM0_Da_03;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          local_var_38 = 0;
          local_var_30 = &processed_var_9656_ptr;
          local_var_40 = stack_special_x_20;
          local_var_48 = (float)CONCAT31(local_var_48._1_3_,1);
          iVar8 = SystemNetworkProcessor(fVar10,&local_buffer_00000030);
          fVar10 = extraout_XMM0_Da_04;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x29) != '\0') {
          local_var_38 = 0;
          local_var_30 = &system_string2_ptr;
          local_var_40 = stack_special_x_20;
          local_var_48 = (float)CONCAT31(local_var_48._1_3_,1);
          iVar8 = SystemNetworkProcessor(fVar10,&local_buffer_00000030);
          if (iVar8 != 0) goto LAB_1808974ec;
        }
      }
    }
    for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(unaff_R13 + 0x78))); iVar7 = iVar7 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_R13 + 0x70) + (int64_t)iVar7 * 8);
      lVar2 = *(int64_t *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        stack_special_x_20 = 0;
        iVar8 = SystemFunction_00018088c500(lVar2,&stack_special_x_20);
        if (iVar8 != 0) goto LAB_1808974ec;
        uVar3 = *(int32_t *)(lVar1 + 0x10);
        uVar4 = *(int32_t *)(lVar1 + 0x14);
        uVar5 = *(int32_t *)(lVar1 + 0x18);
        uVar6 = *(int32_t *)(lVar1 + 0x1c);
        *(int32_t *)(unaff_RBP + -0x78) = 0;
        *(int *)(unaff_RBP + -0x68) = unaff_R12D;
        *(void **)(unaff_RBP + -0x80) = &processed_var_4888_ptr;
        unaff_R12D = unaff_R12D + 1;
        *(int32_t *)(unaff_RBP + -0x54) = stack_special_x_20;
        *(int32_t *)(unaff_RBP + -0x70) = unaff_EBX;
        *(int32_t *)(unaff_RBP + -100) = uVar3;
        *(int32_t *)(unaff_RBP + -0x60) = uVar4;
        *(int32_t *)(unaff_RBP + -0x5c) = uVar5;
        *(int32_t *)(unaff_RBP + -0x58) = uVar6;
        iVar8 = SystemNetworkProcessor(uVar3,unaff_RBP + -0x80);
        if ((iVar8 != 0) || (iVar8 = NetworkProtocol_8c970(lVar2,&fStackX_24), iVar8 != 0))
        goto LAB_1808974ec;
        fVar10 = fStackX_24;
        if (fStackX_24 != 1.0) {
          local_var_48 = fStackX_24;
          local_var_30 = &processed_var_9536_ptr;
          local_var_40 = stack_special_x_20;
          local_var_38 = iVar8;
          iVar8 = SystemNetworkProcessor(fStackX_24,&local_buffer_00000030);
          fVar10 = extraout_XMM0_Da_05;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          local_var_38 = 0;
          local_var_30 = &processed_var_9656_ptr;
          local_var_40 = stack_special_x_20;
          local_var_48 = (float)CONCAT31(local_var_48._1_3_,1);
          iVar8 = SystemNetworkProcessor(fVar10,&local_buffer_00000030);
          fVar10 = extraout_XMM0_Da_06;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x29) != '\0') {
          local_var_38 = 0;
          local_var_30 = &system_string2_ptr;
          local_var_40 = stack_special_x_20;
          local_var_48 = (float)CONCAT31(local_var_48._1_3_,1);
          iVar8 = SystemNetworkProcessor(fVar10,&local_buffer_00000030);
          if (iVar8 != 0) goto LAB_1808974ec;
        }
      }
    }
    iVar8 = 0;
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(unaff_R13 + 200) <= iVar7)) break;
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_R13 + 0xc0) + (int64_t)iVar7 * 8);
      lVar2 = *(int64_t *)(lVar1 + 0x48);
      if (lVar2 != 0) {
        stack_special_x_20 = 0;
        iVar9 = SystemFunction_00018088c500(lVar2,&stack_special_x_20);
        if (iVar9 != 0) break;
        uVar3 = *(int32_t *)(lVar1 + 0x10);
        uVar4 = *(int32_t *)(lVar1 + 0x14);
        uVar5 = *(int32_t *)(lVar1 + 0x18);
        uVar6 = *(int32_t *)(lVar1 + 0x1c);
        *(int32_t *)(unaff_RBP + -0x78) = 0;
        *(int *)(unaff_RBP + -0x68) = iVar8;
        *(void **)(unaff_RBP + -0x80) = &processed_var_5272_ptr;
        iVar8 = iVar8 + 1;
        *(int32_t *)(unaff_RBP + -0x54) = stack_special_x_20;
        *(int32_t *)(unaff_RBP + -0x70) = unaff_EBX;
        *(int32_t *)(unaff_RBP + -100) = uVar3;
        *(int32_t *)(unaff_RBP + -0x60) = uVar4;
        *(int32_t *)(unaff_RBP + -0x5c) = uVar5;
        *(int32_t *)(unaff_RBP + -0x58) = uVar6;
        iVar9 = SystemNetworkProcessor(uVar3,unaff_RBP + -0x80);
        if ((iVar9 != 0) || (iVar9 = NetworkProtocol_8cbb0(lVar2,&fStackX_24,0), iVar9 != 0)) break;
        if (fStackX_24 != 1.0) {
          local_var_48 = fStackX_24;
          local_var_30 = &rendering_buffer_24_ptr;
          local_var_40 = stack_special_x_20;
          local_var_38 = iVar9;
          iVar9 = SystemNetworkProcessor(fStackX_24,&local_buffer_00000030);
          if (iVar9 != 0) break;
        }
      }
      iVar7 = iVar7 + 1;
    } while( true );
  }
LAB_1808974ec:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkPacketProcessor(void)
void NetworkPacketProcessor(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemNetworkProcessor(int64_t *param_1,int64_t *param_2)
void SystemNetworkProcessor(int64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  int iVar2;
  int8_t stack_array_248 [32];
  int8_t stack_array_228 [512];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_248;
  lVar1 = param_1[4];
  if (((char)lVar1 != '\0') || (iVar2 = NetworkProtocol_987e0(param_1,1), iVar2 == 0)) {
    iVar2 = (**(code **)(*param_2 + 0x10))(param_2,stack_array_228,0x200);
    SystemFunction_00018074b7b0(stack_array_228 + iVar2,0x200 - iVar2,10);
    iVar2 = (**(code **)(*param_1 + 8))(param_1,stack_array_228);
    if ((iVar2 == 0) &&
       (((char)lVar1 == '\0' && (iVar2 = (**(code **)(*param_1 + 0x18))(param_1), iVar2 == 0)))) {
      *(int8_t *)(param_1 + 4) = 0;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_248);
}
// 函数: void NetworkProtocol_97560(void)
void NetworkProtocol_97560(void)
{
  int iVar1;
  int64_t in_RAX;
  char unaff_SIL;
  int64_t *unaff_RDI;
  int8_t astack_special_x_20 [8];
  uint64_t local_var_220;
  iVar1 = (**(code **)(in_RAX + 0x10))();
  SystemFunction_00018074b7b0(astack_special_x_20 + iVar1,0x200 - iVar1,10);
  iVar1 = (**(code **)(*unaff_RDI + 8))();
  if (((iVar1 == 0) && (unaff_SIL == '\0')) &&
     (iVar1 = (**(code **)(*unaff_RDI + 0x18))(), iVar1 == 0)) {
    *(int8_t *)(unaff_RDI + 4) = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_220 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_975a6(void)
void NetworkProtocol_975a6(void)
{
  int iVar1;
  char unaff_SIL;
  int64_t *unaff_RDI;
  uint64_t local_var_220;
  if ((unaff_SIL == '\0') && (iVar1 = (**(code **)(*unaff_RDI + 0x18))(), iVar1 == 0)) {
    *(int8_t *)(unaff_RDI + 4) = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_220 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
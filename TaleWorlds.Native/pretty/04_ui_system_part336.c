#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
// 04_ui_system_part336.c - 3 个函数
// 函数: void NetworkProtocol_50b70(uint64_t *param_1,uint64_t param_2,int64_t param_3,uint64_t *param_4)
void NetworkProtocol_50b70(uint64_t *param_1,uint64_t param_2,int64_t param_3,uint64_t *param_4)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int8_t uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint uVar11;
  void *puVar12;
  int64_t lVar13;
  int32_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int64_t *plVar20;
  int8_t stack_array_148 [32];
  int64_t lStack_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  int64_t lStack_110;
  int64_t lStack_108;
  int iStack_100;
  uint local_var_fc;
  uint local_var_f8;
  uint local_var_f4;
  uint local_var_f0;
  int64_t lStack_e8;
  int64_t lStack_e0;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int iStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  uint64_t *plocal_var_a8;
  int64_t lStack_a0;
  uint64_t local_var_98;
  int32_t local_var_90;
  int32_t local_var_8c;
  int64_t *plStack_88;
  uint64_t *plocal_var_80;
  int8_t stack_array_78 [40];
  uint64_t local_var_50;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  lStack_c0 = param_3;
  plocal_var_a8 = param_1;
  plocal_var_80 = param_4;
  if (param_4 == (uint64_t *)0x0) goto LAB_180851437;
  *param_4 = 0;
  lVar8 = (**(code **)(*(int64_t *)*param_1 + 0x150))((int64_t *)*param_1,param_2,1);
  lStack_e8 = lVar8;
  if (lVar8 == 0) {
// WARNING: Subroutine does not return
    SystemStateProcessor(param_2,stack_array_78);
  }
  if ((*(byte *)(lVar8 + 0xc4) & 1) == 0) {
    if (param_3 == 0) goto LAB_180851437;
    uVar14 = *(int32_t *)(param_3 + 0x2dc);
  }
  else {
    uVar14 = 0xffffffff;
    lStack_c0 = 0;
    param_3 = 0;
  }
  lVar9 = NetworkProtocol_51c50(param_1[1],param_2,uVar14);
  if (lVar9 != 0) goto LAB_180851437;
  plStack_118 = (int64_t *)0x0;
  lStack_128 = param_3;
  iVar5 = NetworkProtocol_bc2e0(param_1[2],&plStack_118,lVar8,uVar14);
  if (iVar5 != 0) goto LAB_180851437;
  lStack_e0 = param_1[2];
  plStack_88 = plStack_118;
  lStack_b0 = lStack_e0 + 0x108;
  lVar9 = lStack_e0 + 0x38;
  *(int *)(lStack_e0 + 0x98) = *(int *)(lStack_e0 + 0x98) + 1;
  local_var_f0 = local_var_f0 & 0xffffff00;
  local_var_f4 = local_var_f4 & 0xffffff00;
  lVar16 = lStack_e0 + 0x170;
  *(int *)(lStack_e0 + 0x1d0) = *(int *)(lStack_e0 + 0x1d0) + 1;
  *(int *)(lStack_e0 + 0x168) = *(int *)(lStack_e0 + 0x168) + 1;
  lStack_d8 = lStack_e0 + 0x1d8;
  *(int *)(lStack_e0 + 0x238) = *(int *)(lStack_e0 + 0x238) + 1;
  uVar1 = param_1[3];
  lStack_108 = 0;
  lStack_d0 = 0;
  local_var_f8 = local_var_f8 & 0xffffff00;
  local_var_fc = local_var_fc & 0xffffff00;
  lStack_b8 = lVar9;
  lStack_a0 = lVar16;
  sVar4 = SystemFunction_00018084c3d0(lVar8);
  lVar18 = lStack_e0;
  lVar15 = lStack_d8;
  lVar13 = lStack_b0;
  lVar17 = lStack_b8;
  plVar20 = plStack_88;
  if (sVar4 == 0) {
    if ((*(byte *)(lVar8 + 0xc4) & 1) != 0) {
      puVar12 = &rendering_buffer_2016_ptr;
      goto LAB_180850d88;
    }
LAB_1808513ac:
    if (plVar20 != (int64_t *)0x0) {
      SystemFunction_0001808bde90(lVar18,plVar20);
    }
  }
  else {
    if (sVar4 == 1) {
      puVar12 = &rendering_buffer_2032_ptr;
LAB_180850d88:
      iVar5 = SystemCore_38d90(uVar1,puVar12,&lStack_108);
LAB_180850d95:
      if (iVar5 != 0) goto LAB_180850d9b;
    }
    else {
      if (sVar4 != 2) {
        if (sVar4 == 3) {
          puVar12 = &rendering_buffer_2048_ptr;
        }
        else {
          if (sVar4 != 4) goto LAB_1808513ac;
          puVar12 = &rendering_buffer_2064_ptr;
        }
        goto LAB_180850d88;
      }
      iVar5 = SystemCore_38d90(uVar1,&processed_var_664_ptr,&lStack_108);
      if (iVar5 == 0) {
        iVar5 = SystemCore_39140(uVar1,0x19,&lStack_d0);
        if ((iVar5 != 0) || (iVar5 = SystemCore_40f10(lStack_d0,1), iVar5 != 0)) goto LAB_180850d9b;
        iVar5 = SystemCore_3c020(lStack_108,0xfffffffd,lStack_d0);
        goto LAB_180850d95;
      }
LAB_180850d9b:
      lVar13 = lStack_b0;
      lVar15 = lStack_d8;
      lVar17 = lStack_b8;
      lVar18 = lStack_e0;
      plVar20 = plStack_88;
      if (iVar5 != 0) goto LAB_1808513ac;
    }
    plStack_118[0xd] = lStack_d0;
    plStack_118[0xf] = lStack_108;
    iVar5 = SystemCore_3dc80(lStack_108,0);
    lVar13 = lStack_b0;
    lVar15 = lStack_d8;
    lVar17 = lStack_b8;
    lVar18 = lStack_e0;
    plVar20 = plStack_88;
    if (iVar5 != 0) goto LAB_1808513ac;
    lVar8 = *(int64_t *)(lVar8 + 0x68);
    if (lVar8 != 0) {
      if (*(int64_t *)(lVar8 + 8) != 0) goto LAB_1808513ac;
      NetworkProtocol_8c9b0(lVar8,plStack_118);
      plStack_118[9] = lVar8;
    }
    if (param_3 == 0) {
      lVar8 = param_1[2] + 0x290;
    }
    else {
      lVar8 = (**(code **)(*(int64_t *)(param_3 + 8) + 0x30))(param_3 + 8);
    }
    iVar5 = NetworkProtocol_b89f0(lVar8,plStack_118);
    plVar2 = plStack_118;
    lVar13 = lStack_b0;
    lVar15 = lStack_d8;
    lVar17 = lStack_b8;
    lVar18 = lStack_e0;
    plVar20 = plStack_88;
    if (iVar5 != 0) goto LAB_1808513ac;
    lVar8 = (**(code **)*plStack_118)(plStack_118);
    uVar19 = *(uint64_t *)(lVar8 + 0x38);
    while( true ) {
      if ((uVar19 < *(uint64_t *)(lVar8 + 0x38)) ||
         ((int64_t)*(int *)(lVar8 + 0x40) * 0x10 + *(uint64_t *)(lVar8 + 0x38) <= uVar19))
      goto LAB_180850eb0;
      lStack_110 = 0;
      iVar5 = NetworkProtocol_bc240(param_1[2],uVar19,0xffffffff,&lStack_110);
      if ((iVar5 != 0) ||
         ((lStack_110 != 0 && (iVar5 = NetworkProtocol_c2ec0(lStack_110,plVar2,1), iVar5 != 0)))) break;
      uVar19 = uVar19 + 0x10;
    }
    lVar13 = lStack_b0;
    lVar15 = lStack_d8;
    lVar17 = lStack_b8;
    lVar18 = lStack_e0;
    plVar20 = plStack_88;
    if (iVar5 != 0) goto LAB_1808513ac;
LAB_180850eb0:
    lVar8 = (**(code **)*plStack_118)();
    local_var_98 = *(uint64_t *)(lVar8 + 0x10);
    local_var_90 = *(int32_t *)(lVar8 + 0x18);
    local_var_8c = *(int32_t *)(lVar8 + 0x1c);
    iVar5 = NetworkProtocol_52d40(param_1[1],&local_var_98,plStack_118);
    lVar13 = lStack_b0;
    lVar15 = lStack_d8;
    lVar17 = lStack_b8;
    lVar18 = lStack_e0;
    plVar20 = plStack_88;
    if ((((iVar5 != 0) ||
         (iVar5 = NetworkProtocol_c18c0(param_1[2],plStack_118), lVar13 = lStack_b0, lVar15 = lStack_d8,
         lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0)) ||
        (iVar5 = NetworkProtocol_4e4b0(plStack_118), lVar13 = lStack_b0, lVar15 = lStack_d8,
        lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0)) ||
       (iVar5 = NetworkProtocol_4ead0(plStack_118,0), lVar8 = lStack_e8, lVar13 = lStack_b0,
       lVar15 = lStack_d8, lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0)
       ) goto LAB_1808513ac;
    iVar5 = *(int *)(lStack_e8 + 0x88);
    iVar7 = *(int *)(lStack_e8 + 0x98);
    iStack_c8 = iVar7;
    if ((iVar5 != 0) || (iVar7 != 0)) {
      iStack_100 = 0;
      local_var_98 = 0;
      iVar6 = UltraHighFreq_PhysicsEngine1(plStack_118[0xf],0xfffffffe,&local_var_98);
      lVar13 = lStack_b0;
      lVar15 = lStack_d8;
      lVar17 = lStack_b8;
      lVar18 = lStack_e0;
      plVar20 = plStack_88;
      if (((iVar6 == 0) &&
          (iVar6 = SystemCore_3c5f0(plStack_118[0xf],local_var_98,&iStack_100), lVar13 = lStack_b0,
          lVar15 = lStack_d8, lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88,
          iVar6 == 0)) &&
         ((uVar11 = (int)*(uint *)((int64_t)plStack_118 + 0x8c) >> 0x1f,
          iVar5 <= (int)((*(uint *)((int64_t)plStack_118 + 0x8c) ^ uVar11) - uVar11) ||
          (iVar6 = RenderingTextureManager0(plStack_118 + 0x10,iVar5), lVar13 = lStack_b0, lVar15 = lStack_d8,
          lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar6 == 0)))) {
        uVar10 = 0;
        uVar19 = uVar10;
        if (0 < iVar5) {
          do {
            lStack_110 = 0;
            lVar8 = *(int64_t *)(lVar8 + 0xa0);
            lVar9 = *(int64_t *)(lStack_e8 + 0x80);
            lVar16 = plocal_var_a8[2];
            uVar3 = (**(code **)(*plStack_118 + 0x20))(plStack_118);
            plStack_120 = &lStack_110;
            lStack_128 = CONCAT44(lStack_128._4_4_,*(int32_t *)(lVar8 + uVar19 * 4));
            iVar7 = NetworkProtocol_b4570(lVar16 + 0x388,(int64_t)(int)uVar10 * 0x10 + lVar9,lStack_c0,
                                  uVar3);
            lVar13 = lStack_b0;
            lVar15 = lStack_d8;
            lVar17 = lStack_b8;
            lVar18 = lStack_e0;
            plVar20 = plStack_88;
            if (iVar7 != 0) goto LAB_1808513ac;
            NetworkProtocol_53260(plStack_118 + 0x10,&lStack_110);
            iVar7 = SystemCore_3c020(plStack_118[0xf],iStack_100 + 1,*(uint64_t *)(lStack_110 + 0x30)
                                 );
            lVar13 = lStack_b0;
            lVar15 = lStack_d8;
            lVar17 = lStack_b8;
            lVar18 = lStack_e0;
            plVar20 = plStack_88;
            if (iVar7 != 0) goto LAB_1808513ac;
            uVar10 = (uint64_t)((int)uVar10 + 1);
            uVar19 = uVar19 + 1;
            lVar8 = lStack_e8;
            iVar7 = iStack_c8;
          } while ((int64_t)uVar19 < (int64_t)iVar5);
        }
        uVar11 = (int)*(uint *)((int64_t)plStack_118 + 0x9c) >> 0x1f;
        if ((iVar7 <= (int)((*(uint *)((int64_t)plStack_118 + 0x9c) ^ uVar11) - uVar11)) ||
           (iVar5 = RenderingTextureManager0(plStack_118 + 0x12,iVar7), lVar13 = lStack_b0, lVar15 = lStack_d8,
           lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 == 0)) {
          uVar10 = 0;
          lVar16 = lStack_a0;
          lVar9 = lStack_b8;
          uVar19 = uVar10;
          if (0 < iVar7) {
            do {
              lVar8 = *(int64_t *)(lVar8 + 0xb0);
              lStack_110 = 0;
              lVar9 = *(int64_t *)(lStack_e8 + 0x90);
              lVar16 = plocal_var_a8[2];
              uVar3 = (**(code **)(*plStack_118 + 0x20))(plStack_118);
              plStack_120 = &lStack_110;
              lStack_128 = CONCAT44(lStack_128._4_4_,*(int32_t *)(lVar8 + uVar19 * 4));
              iVar5 = NetworkProtocol_b4570(lVar16 + 0x388,(int64_t)(int)uVar10 * 0x10 + lVar9,lStack_c0,
                                    uVar3);
              lVar13 = lStack_b0;
              lVar15 = lStack_d8;
              lVar17 = lStack_b8;
              lVar18 = lStack_e0;
              plVar20 = plStack_88;
              if (iVar5 != 0) goto LAB_1808513ac;
              NetworkProtocol_53260(plStack_118 + 0x12,&lStack_110);
              iVar5 = SystemCore_3c020(plStack_118[0xf],iStack_100,*(uint64_t *)(lStack_110 + 0x30));
              lVar13 = lStack_b0;
              lVar15 = lStack_d8;
              lVar17 = lStack_b8;
              lVar18 = lStack_e0;
              plVar20 = plStack_88;
              if (iVar5 != 0) goto LAB_1808513ac;
              uVar10 = (uint64_t)((int)uVar10 + 1);
              uVar19 = uVar19 + 1;
              lVar8 = lStack_e8;
              lVar16 = lStack_a0;
              lVar9 = lStack_b8;
            } while ((int64_t)uVar19 < (int64_t)iVar7);
          }
          goto LAB_1808511a4;
        }
      }
      goto LAB_1808513ac;
    }
LAB_1808511a4:
    plVar20 = plStack_118;
    iVar5 = NetworkProtocol_4e9e0(plStack_118);
    if ((((iVar5 != 0) ||
         (uVar11 = *(uint *)(plVar20 + 0x18),
         iVar5 = NetworkProtocol_4ead0(plVar20,CONCAT31((uint3)(uVar11 >> 9),(char)(uVar11 >> 1)) &
                                       0xffffff01), iVar5 != 0)) &&
        (lVar13 = lStack_b0, lVar15 = lStack_d8, lVar17 = lStack_b8, lVar18 = lStack_e0,
        plVar20 = plStack_88, iVar5 != 0)) ||
       (((iVar5 = SystemDataFlowProcessor(plStack_118,1), lVar13 = lStack_b0, lVar15 = lStack_d8,
         lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0 ||
         (iVar5 = SystemDataFlowProcessor(plStack_118,0), lVar13 = lStack_b0, lVar15 = lStack_d8,
         lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0)) ||
        ((iVar5 = NetworkProtocol_4ec10(plStack_118), lVar13 = lStack_b0, lVar15 = lStack_d8,
         lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0 ||
         (iVar5 = SystemCore_3dc80(plStack_118[0xf],1), lVar13 = lStack_b0, lVar15 = lStack_d8,
         lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0))))))
    goto LAB_1808513ac;
    iVar5 = 0x1c;
    *(int *)(plStack_118 + 0x1d) = (int)plStack_118[0x1d] + 1;
    if (*(int *)(lVar9 + 0x60) < 1) {
      iVar7 = 0x1c;
    }
    else {
      if ((*(int *)(lVar9 + 0x60) != 1) || (iVar7 = NetworkProtocol_501b0(lVar9), iVar7 == 0)) {
        *(int *)(lVar9 + 0x60) = *(int *)(lVar9 + 0x60) + -1;
        iVar7 = 0;
      }
      local_var_f0 = local_var_f0 & 0xff;
      if (iVar7 == 0) {
        local_var_f0 = 1;
      }
    }
    lVar13 = lStack_b0;
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    lVar15 = lStack_d8;
    lVar18 = lStack_e0;
    lVar17 = lVar9;
    plVar20 = (int64_t *)0x0;
    if (iVar7 == 0) {
      if (*(int *)(lStack_b0 + 0x60) < 1) {
        iVar7 = 0x1c;
      }
      else {
        if ((*(int *)(lStack_b0 + 0x60) != 1) || (iVar7 = NetworkProtocol_4f7f0(lStack_b0), iVar7 == 0)) {
          *(int *)(lVar13 + 0x60) = *(int *)(lVar13 + 0x60) + -1;
          iVar7 = 0;
        }
        local_var_f8 = local_var_f8 & 0xff;
        if (iVar7 == 0) {
          local_var_f8 = 1;
        }
      }
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      lVar15 = lStack_d8;
      lVar18 = lStack_e0;
      if (iVar7 != 0) goto LAB_1808513a8;
      if (*(int *)(lVar16 + 0x60) < 1) {
        iVar7 = 0x1c;
      }
      else {
        if ((*(int *)(lVar16 + 0x60) != 1) || (iVar7 = NetworkProtocol_4fcd0(lVar16), iVar7 == 0)) {
          *(int *)(lVar16 + 0x60) = *(int *)(lVar16 + 0x60) + -1;
          iVar7 = 0;
        }
        local_var_f4 = local_var_f4 & 0xff;
        if (iVar7 == 0) {
          local_var_f4 = 1;
        }
      }
      lVar15 = lStack_d8;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      lVar18 = lStack_e0;
      if (iVar7 != 0) goto LAB_1808513a8;
      if (0 < *(int *)(lStack_d8 + 0x60)) {
        if ((*(int *)(lStack_d8 + 0x60) != 1) || (iVar5 = NetworkProtocol_50690(lStack_d8), iVar5 == 0)) {
          *(int *)(lVar15 + 0x60) = *(int *)(lVar15 + 0x60) + -1;
          iVar5 = 0;
        }
        local_var_fc = local_var_fc & 0xff;
        if (iVar5 == 0) {
          local_var_fc = 1;
        }
      }
      lVar18 = lStack_e0;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      if (iVar5 != 0) goto LAB_1808513ac;
      iVar7 = NetworkProtocol_bd690(lStack_e0);
      if (iVar7 != 0) goto LAB_1808513a8;
    }
    else {
LAB_1808513a8:
      if (iVar7 != 0) goto LAB_1808513ac;
    }
    *plocal_var_80 = plStack_118;
  }
  if ((char)local_var_fc == '\0') {
    *(int32_t *)(lVar15 + 0x60) = 0;
    RenderingEngine_ShaderProcessor(lVar15 + 0x30);
  }
  if ((char)local_var_f8 == '\0') {
    *(int32_t *)(lVar13 + 0x60) = 0;
    SystemCore_CacheManager(lVar13 + 0x30);
  }
  if ((char)local_var_f4 == '\0') {
    *(int32_t *)(lVar18 + 0x1d0) = 0;
    SystemCore_CacheManager(lVar18 + 0x1a0);
  }
  if ((char)local_var_f0 == '\0') {
    *(int32_t *)(lVar17 + 0x60) = 0;
    SystemCore_NetworkProcessor(lVar17 + 0x30);
  }
LAB_180851437:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_148);
}
// 函数: void NetworkProtocol_50c67(int64_t param_1)
void NetworkProtocol_50c67(int64_t param_1)
{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int8_t uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int64_t in_RAX;
  int64_t lVar10;
  uint64_t uVar11;
  uint uVar12;
  void *puVar13;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar14;
  int8_t unaff_R12B;
  int64_t lVar15;
  int64_t lVar16;
  int64_t unaff_R14;
  int64_t lVar17;
  int64_t unaff_R15;
  uint64_t uVar18;
  int64_t lVar19;
  int64_t *local_var_30;
  int64_t local_var_38;
  int64_t lStack0000000000000040;
  int iStack0000000000000048;
  char cStack000000000000004c;
  char cStack0000000000000050;
  char cStack0000000000000054;
  uint32_t local_buffer_55;
  char cStack0000000000000058;
  uint32_t local_buffer_59;
  int64_t local_var_60;
  int64_t local_var_68;
  int64_t lStack0000000000000070;
  int64_t lStack0000000000000078;
  lVar16 = param_1 + 0x38;
  *(int64_t *)(unaff_RBP + -0x68) = in_RAX;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  _cStack0000000000000058 = CONCAT31(local_buffer_59,unaff_R12B);
  _cStack0000000000000054 = CONCAT31(local_buffer_55,unaff_R12B);
  lVar15 = param_1 + 0x170;
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  *(int *)(in_RAX + 0x60) = *(int *)(in_RAX + 0x60) + 1;
  lStack0000000000000070 = param_1 + 0x1d8;
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  uVar1 = *(uint64_t *)(unaff_R15 + 0x18);
  lStack0000000000000040 = 0;
  lStack0000000000000078 = 0;
  *(int64_t *)(unaff_RBP + -0x70) = lVar16;
  *(int64_t *)(unaff_RBP + -0x58) = lVar15;
  _cStack0000000000000050 = _cStack0000000000000050 & 0xffffff00;
  _cStack000000000000004c = _cStack000000000000004c & 0xffffff00;
  sVar6 = SystemFunction_00018084c3d0();
  if (sVar6 == 0) {
    if ((*(byte *)(unaff_RSI + 0xc4) & 1) != 0) {
      puVar13 = &rendering_buffer_2016_ptr;
      goto LAB_180850d88;
    }
LAB_180851223:
    lVar16 = *(int64_t *)(unaff_RBP + -0x70);
    lVar10 = *(int64_t *)(unaff_RBP + -0x68);
    lVar19 = *(int64_t *)(unaff_RBP + -0x40);
    lVar14 = lStack0000000000000070;
    lVar17 = local_var_68;
  }
  else {
    if (sVar6 == 1) {
      puVar13 = &rendering_buffer_2032_ptr;
LAB_180850d88:
      iVar7 = SystemCore_38d90(uVar1,puVar13,&local_buffer_00000040);
LAB_180850d95:
      if (iVar7 != 0) goto LAB_180850d9b;
    }
    else {
      if (sVar6 != 2) {
        if (sVar6 == 3) {
          puVar13 = &rendering_buffer_2048_ptr;
        }
        else {
          if (sVar6 != 4) goto LAB_180851223;
          puVar13 = &rendering_buffer_2064_ptr;
        }
        goto LAB_180850d88;
      }
      iVar7 = SystemCore_38d90(uVar1,&processed_var_664_ptr,&local_buffer_00000040);
      if (iVar7 == 0) {
        iVar7 = SystemCore_39140(uVar1,0x19,&local_buffer_00000078);
        if ((iVar7 != 0) || (iVar7 = SystemCore_40f10(lStack0000000000000078,1), iVar7 != 0))
        goto LAB_180850d9b;
        iVar7 = SystemCore_3c020(lStack0000000000000040,0xfffffffd,lStack0000000000000078);
        goto LAB_180850d95;
      }
LAB_180850d9b:
      if (iVar7 != 0) goto LAB_180851223;
    }
    local_var_30[0xd] = lStack0000000000000078;
    local_var_30[0xf] = lStack0000000000000040;
    iVar7 = SystemCore_3dc80(lStack0000000000000040,0);
    if (iVar7 != 0) goto LAB_180851223;
    lVar10 = *(int64_t *)(unaff_RSI + 0x68);
    if (lVar10 != 0) {
      if (*(int64_t *)(lVar10 + 8) != 0) goto LAB_180851223;
      NetworkProtocol_8c9b0(lVar10,local_var_30);
      local_var_30[9] = lVar10;
    }
    if (unaff_R14 == 0) {
      lVar10 = *(int64_t *)(unaff_R15 + 0x10) + 0x290;
    }
    else {
      lVar10 = (**(code **)(*(int64_t *)(unaff_R14 + 8) + 0x30))(unaff_R14 + 8);
    }
    iVar7 = NetworkProtocol_b89f0(lVar10,local_var_30);
    if (iVar7 != 0) goto LAB_180851223;
    lVar10 = (**(code **)*local_var_30)(local_var_30);
    uVar18 = *(uint64_t *)(lVar10 + 0x38);
    while( true ) {
      if ((uVar18 < *(uint64_t *)(lVar10 + 0x38)) ||
         ((int64_t)*(int *)(lVar10 + 0x40) * 0x10 + *(uint64_t *)(lVar10 + 0x38) <= uVar18))
      goto LAB_180850eb0;
      local_var_38 = 0;
      iVar7 = NetworkProtocol_bc240(*(uint64_t *)(unaff_R15 + 0x10),uVar18,0xffffffff,&local_buffer_00000038);
      if ((iVar7 != 0) ||
         ((local_var_38 != 0 &&
          (iVar7 = NetworkProtocol_c2ec0(local_var_38,local_var_30,1), iVar7 != 0)))) break;
      uVar18 = uVar18 + 0x10;
    }
    if (iVar7 != 0) goto LAB_180851223;
LAB_180850eb0:
    lVar10 = (**(code **)*local_var_30)();
    uVar1 = *(uint64_t *)(unaff_R15 + 8);
    uVar2 = *(int32_t *)(lVar10 + 0x14);
    uVar3 = *(int32_t *)(lVar10 + 0x18);
    uVar4 = *(int32_t *)(lVar10 + 0x1c);
    *(int32_t *)(unaff_RBP + -0x50) = *(int32_t *)(lVar10 + 0x10);
    *(int32_t *)(unaff_RBP + -0x4c) = uVar2;
    *(int32_t *)(unaff_RBP + -0x48) = uVar3;
    *(int32_t *)(unaff_RBP + -0x44) = uVar4;
    iVar7 = NetworkProtocol_52d40(uVar1,unaff_RBP + -0x50,local_var_30);
    if ((((iVar7 != 0) ||
         (iVar7 = NetworkProtocol_c18c0(*(uint64_t *)(unaff_R15 + 0x10),local_var_30), iVar7 != 0))
        || (iVar7 = NetworkProtocol_4e4b0(local_var_30), iVar7 != 0)) ||
       (iVar7 = NetworkProtocol_4ead0(local_var_30,0), lVar10 = local_var_60, iVar7 != 0))
    goto LAB_180851223;
    iVar7 = *(int *)(local_var_60 + 0x88);
    iVar9 = *(int *)(local_var_60 + 0x98);
    *(int *)(unaff_RBP + -0x80) = iVar9;
    if ((iVar7 != 0) || (iVar9 != 0)) {
      iStack0000000000000048 = 0;
      *(uint64_t *)(unaff_RBP + -0x50) = 0;
      iVar8 = UltraHighFreq_PhysicsEngine1(local_var_30[0xf],0xfffffffe,unaff_RBP + -0x50);
      if (((iVar8 == 0) &&
          (iVar8 = SystemCore_3c5f0(local_var_30[0xf],*(uint64_t *)(unaff_RBP + -0x50),
                                 &local_buffer_00000048), iVar8 == 0)) &&
         ((uVar12 = (int)*(uint *)((int64_t)local_var_30 + 0x8c) >> 0x1f,
          iVar7 <= (int)((*(uint *)((int64_t)local_var_30 + 0x8c) ^ uVar12) - uVar12) ||
          (iVar8 = RenderingTextureManager0(local_var_30 + 0x10,iVar7), iVar8 == 0)))) {
        uVar11 = 0;
        uVar18 = uVar11;
        if (0 < iVar7) {
          do {
            local_var_38 = 0;
            lVar16 = *(int64_t *)(lVar10 + 0xa0);
            lVar15 = *(int64_t *)(local_var_60 + 0x80);
            lVar10 = *(int64_t *)(*(int64_t *)(unaff_RBP + -0x60) + 0x10);
            uVar5 = (**(code **)(*local_var_30 + 0x20))(local_var_30);
            iVar9 = NetworkProtocol_b4570(lVar10 + 0x388,(int64_t)(int)uVar11 * 0x10 + lVar15,
                                  *(uint64_t *)(unaff_RBP + -0x78),uVar5,
                                  *(int32_t *)(lVar16 + uVar18 * 4));
            if (iVar9 != 0) goto LAB_180851223;
            NetworkProtocol_53260(local_var_30 + 0x10,&local_buffer_00000038);
            iVar9 = SystemCore_3c020(local_var_30[0xf],iStack0000000000000048 + 1,
                                  *(uint64_t *)(local_var_38 + 0x30));
            if (iVar9 != 0) goto LAB_180851223;
            uVar11 = (uint64_t)((int)uVar11 + 1);
            uVar18 = uVar18 + 1;
            lVar10 = local_var_60;
          } while ((int64_t)uVar18 < (int64_t)iVar7);
          iVar9 = *(int *)(unaff_RBP + -0x80);
        }
        uVar12 = (int)*(uint *)((int64_t)local_var_30 + 0x9c) >> 0x1f;
        if ((iVar9 <= (int)((*(uint *)((int64_t)local_var_30 + 0x9c) ^ uVar12) - uVar12)) ||
           (iVar7 = RenderingTextureManager0(local_var_30 + 0x12,iVar9), iVar7 == 0)) {
          uVar11 = 0;
          uVar18 = uVar11;
          if (0 < iVar9) {
            do {
              lVar16 = *(int64_t *)(lVar10 + 0xb0);
              local_var_38 = 0;
              lVar15 = *(int64_t *)(local_var_60 + 0x90);
              lVar10 = *(int64_t *)(*(int64_t *)(unaff_RBP + -0x60) + 0x10);
              uVar5 = (**(code **)(*local_var_30 + 0x20))(local_var_30);
              iVar7 = NetworkProtocol_b4570(lVar10 + 0x388,(int64_t)(int)uVar11 * 0x10 + lVar15,
                                    *(uint64_t *)(unaff_RBP + -0x78),uVar5,
                                    *(int32_t *)(lVar16 + uVar18 * 4));
              if (iVar7 != 0) goto LAB_180851223;
              NetworkProtocol_53260(local_var_30 + 0x12,&local_buffer_00000038);
              iVar7 = SystemCore_3c020(local_var_30[0xf],iStack0000000000000048,
                                    *(uint64_t *)(local_var_38 + 0x30));
              if (iVar7 != 0) goto LAB_180851223;
              uVar11 = (uint64_t)((int)uVar11 + 1);
              uVar18 = uVar18 + 1;
              lVar10 = local_var_60;
            } while ((int64_t)uVar18 < (int64_t)iVar9);
          }
          lVar15 = *(int64_t *)(unaff_RBP + -0x58);
          lVar16 = *(int64_t *)(unaff_RBP + -0x70);
          goto LAB_1808511a4;
        }
      }
      goto LAB_180851223;
    }
LAB_1808511a4:
    iVar7 = NetworkProtocol_4e9e0(local_var_30);
    if ((((iVar7 != 0) ||
         (iVar7 = NetworkProtocol_4ead0(local_var_30,
                                CONCAT31((uint3)(*(uint *)(local_var_30 + 0x18) >> 9),
                                         (char)(*(uint *)(local_var_30 + 0x18) >> 1)) &
                                0xffffff01), iVar7 != 0)) && (iVar7 != 0)) ||
       (((iVar7 = SystemDataFlowProcessor(local_var_30,1), iVar7 != 0 ||
         (iVar7 = SystemDataFlowProcessor(local_var_30,0), iVar7 != 0)) ||
        ((iVar7 = NetworkProtocol_4ec10(local_var_30), iVar7 != 0 ||
         (iVar7 = SystemCore_3dc80(local_var_30[0xf],1), iVar7 != 0)))))) goto LAB_180851223;
    lVar19 = 0;
    iVar7 = 0x1c;
    *(int *)(local_var_30 + 0x1d) = (int)local_var_30[0x1d] + 1;
    if (*(int *)(lVar16 + 0x60) < 1) {
      iVar9 = 0x1c;
    }
    else {
      if ((*(int *)(lVar16 + 0x60) != 1) || (iVar9 = NetworkProtocol_501b0(lVar16), iVar9 == 0)) {
        *(int *)(lVar16 + 0x60) = *(int *)(lVar16 + 0x60) + -1;
        iVar9 = 0;
      }
      _cStack0000000000000058 = _cStack0000000000000058 & 0xff;
      if (iVar9 == 0) {
        _cStack0000000000000058 = 1;
      }
    }
    lVar10 = *(int64_t *)(unaff_RBP + -0x68);
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    lVar14 = lStack0000000000000070;
    lVar17 = local_var_68;
    if (iVar9 == 0) {
      if (*(int *)(lVar10 + 0x60) < 1) {
        iVar9 = 0x1c;
      }
      else {
        if ((*(int *)(lVar10 + 0x60) != 1) || (iVar9 = NetworkProtocol_4f7f0(lVar10), iVar9 == 0)) {
          *(int *)(lVar10 + 0x60) = *(int *)(lVar10 + 0x60) + -1;
          iVar9 = 0;
        }
        _cStack0000000000000050 = _cStack0000000000000050 & 0xff;
        if (iVar9 == 0) {
          _cStack0000000000000050 = 1;
        }
      }
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      lVar14 = lStack0000000000000070;
      lVar17 = local_var_68;
      if (iVar9 != 0) goto LAB_1808513a8;
      if (*(int *)(lVar15 + 0x60) < 1) {
        iVar9 = 0x1c;
      }
      else {
        if ((*(int *)(lVar15 + 0x60) != 1) || (iVar9 = NetworkProtocol_4fcd0(lVar15), iVar9 == 0)) {
          *(int *)(lVar15 + 0x60) = *(int *)(lVar15 + 0x60) + -1;
          iVar9 = 0;
        }
        _cStack0000000000000054 = _cStack0000000000000054 & 0xff;
        if (iVar9 == 0) {
          _cStack0000000000000054 = 1;
        }
      }
      lVar14 = lStack0000000000000070;
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      lVar17 = local_var_68;
      if (iVar9 != 0) goto LAB_1808513a8;
      if (0 < *(int *)(lStack0000000000000070 + 0x60)) {
        if ((*(int *)(lStack0000000000000070 + 0x60) != 1) ||
           (iVar7 = NetworkProtocol_50690(lStack0000000000000070), iVar7 == 0)) {
          *(int *)(lVar14 + 0x60) = *(int *)(lVar14 + 0x60) + -1;
          iVar7 = 0;
        }
        _cStack000000000000004c = _cStack000000000000004c & 0xff;
        if (iVar7 == 0) {
          _cStack000000000000004c = 1;
        }
      }
      lVar17 = local_var_68;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      if (iVar7 == 0) {
        iVar9 = NetworkProtocol_bd690(local_var_68);
        if (iVar9 != 0) goto LAB_1808513a8;
        goto NetworkProtocol_51421;
      }
    }
    else {
LAB_1808513a8:
      if (iVar9 == 0) {
NetworkProtocol_51421:
        **(uint64_t **)(unaff_RBP + -0x38) = local_var_30;
        goto LAB_1808513bf;
      }
    }
  }
  if (lVar19 != 0) {
    SystemFunction_0001808bde90(lVar17,lVar19);
  }
LAB_1808513bf:
  if (cStack000000000000004c == '\0') {
    *(int32_t *)(lVar14 + 0x60) = 0;
    RenderingEngine_ShaderProcessor(lVar14 + 0x30);
  }
  if (cStack0000000000000050 == '\0') {
    *(int32_t *)(lVar10 + 0x60) = 0;
    SystemCore_CacheManager(lVar10 + 0x30);
  }
  if (cStack0000000000000054 == '\0') {
    *(int32_t *)(lVar17 + 0x1d0) = 0;
    SystemCore_CacheManager(lVar17 + 0x1a0);
  }
  if (cStack0000000000000058 == '\0') {
    *(int32_t *)(lVar16 + 0x60) = 0;
    SystemCore_NetworkProcessor(lVar16 + 0x30);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -8) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_51421(void)
void NetworkProtocol_51421(void)
{
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int32_t unaff_R12D;
  int64_t unaff_R13;
  int64_t unaff_R14;
  uint64_t local_var_30;
  uint64_t local_var_48;
  char cStack0000000000000050;
  char cStack0000000000000054;
  char local_buffer_58;
  **(uint64_t **)(unaff_RBP + -0x38) = local_var_30;
  if (local_var_48._4_1_ == '\0') {
    *(int32_t *)(unaff_RDI + 0x60) = unaff_R12D;
    RenderingEngine_ShaderProcessor(unaff_RDI + 0x30);
  }
  if (cStack0000000000000050 == '\0') {
    *(int32_t *)(unaff_RSI + 0x60) = unaff_R12D;
    SystemCore_CacheManager(unaff_RSI + 0x30);
  }
  if (cStack0000000000000054 == '\0') {
    *(int32_t *)(unaff_R14 + 0x1d0) = unaff_R12D;
    SystemCore_CacheManager(unaff_R14 + 0x1a0);
  }
  if (local_buffer_58 == '\0') {
    *(int32_t *)(unaff_R13 + 0x60) = unaff_R12D;
    SystemCore_NetworkProcessor(unaff_R13 + 0x30);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -8) ^ (uint64_t)&local_buffer_00000000);
}
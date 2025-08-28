#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 06_utilities_part011.c - 3 个函数
// 函数: void NetworkProtocol_975e0(int64_t param_1,int64_t param_2)
void NetworkProtocol_975e0(int64_t param_1,int64_t param_2)
{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  void *puVar12;
  float fVar13;
  int64_t lVar14;
  float *pfVar15;
  uint64_t *puVar16;
  int8_t stack_array_1e8 [32];
  int32_t local_var_1c8;
  char acStack_1c4 [4];
  void *plocal_var_1c0;
  int32_t local_var_1b8;
  int32_t local_var_1b0;
  float fStack_1a8;
  float fStack_1a4;
  int32_t local_var_1a0;
  float fStack_19c;
  float afStack_198 [2];
  uint64_t *plocal_var_190;
  int64_t lStack_188;
  int64_t lStack_180;
  void *plocal_var_178;
  int32_t local_var_170;
  int32_t local_var_168;
  int32_t local_var_160;
  void *plocal_var_158;
  int32_t local_var_150;
  int32_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  void *plocal_var_108;
  int32_t local_var_100;
  int32_t local_var_f8;
  int32_t local_var_f0;
  int8_t local_var_ec;
  uint64_t local_var_e8;
  int8_t stack_array_e0 [136];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1e8;
  lVar2 = *(int64_t *)(param_2 + 0x80);
  lVar14 = 0;
  local_var_1c8 = 0;
  lVar8 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar8 = lVar14;
  }
  lStack_180 = param_2;
  iVar6 = Function_3359b5c0(lVar8,&local_var_1c8);
  if (iVar6 == 0) {
    puVar16 = (uint64_t *)(param_2 + 8);
    local_var_1a0 = 0;
    plocal_var_190 = puVar16;
    lVar8 = (*(code *)**(uint64_t **)(param_2 + 8))(puVar16);
    iVar6 = Function_3359b5c0(*(uint64_t *)(lVar8 + 0xd0),&local_var_1a0);
    if (iVar6 == 0) {
      local_var_170 = 0;
      plocal_var_178 = &processed_var_5400_ptr;
      local_var_160 = local_var_1c8;
      local_var_168 = local_var_1a0;
      iVar6 = SystemNetworkProcessor(param_1,&plocal_var_178);
      if (iVar6 == 0) {
        lStack_188 = (int64_t)*(int *)(lVar2 + 0x28);
        lVar8 = lVar14;
        if (0 < lStack_188) {
          do {
            lVar9 = *(int64_t *)(lVar2 + 0x20);
            lVar3 = *(int64_t *)(lVar14 + 0x10 + lVar9);
            lVar4 = *(int64_t *)(lVar14 + 8 + lVar9);
            cVar5 = Function_43576953(lVar3,1);
            puVar16 = plocal_var_190;
            if ((cVar5 == '\0') && (*(float *)(lVar3 + 0x4c) != *(float *)(lVar4 + 0x28))) {
              local_var_f0 = *(int32_t *)(lVar14 + 4 + lVar9);
              plocal_var_108 = &processed_var_8856_ptr;
              local_var_f8 = local_var_1c8;
              local_var_100 = 0;
              lVar9 = (**(code **)*plocal_var_190)(plocal_var_190);
              local_var_e8 = *(uint64_t *)(*(int64_t *)(lVar9 + 0x90) + lVar8 * 8);
              local_var_ec = 0;
              if (*(int *)(lVar3 + 0x58) < 1) {
                puVar12 = &system_buffer_ptr;
              }
              else {
                puVar12 = *(void **)(lVar3 + 0x50);
              }
              Function_30e71e27(stack_array_e0,puVar12,0x80);
              iVar6 = SystemNetworkProcessor(param_1,&plocal_var_108);
              if (iVar6 != 0) goto CoreSystem_DataProcessor;
            }
            lVar8 = lVar8 + 1;
            lVar14 = lVar14 + 0x18;
            param_2 = lStack_180;
          } while (lVar8 < lStack_188);
        }
        uVar11 = *(uint64_t *)(*(int64_t *)(param_1 + 8) + 800);
        uVar10 = (**(code **)*puVar16)(puVar16);
        iVar6 = NetworkProtocol_479d0(uVar10,uVar11,acStack_1c4);
        if (iVar6 == 0) {
          if (acStack_1c4[0] != '\0') {
            uVar11 = Function_ac6e509f();
            iVar6 = memcmp(lVar2 + 0x38,uVar11,0x30);
            if (iVar6 != 0) {
              local_var_140 = *(uint64_t *)(lVar2 + 0x38);
              local_var_138 = *(uint64_t *)(lVar2 + 0x40);
              local_var_130 = *(int32_t *)(lVar2 + 0x48);
              local_var_12c = *(int32_t *)(lVar2 + 0x4c);
              local_var_128 = *(int32_t *)(lVar2 + 0x50);
              local_var_124 = *(int32_t *)(lVar2 + 0x54);
              plocal_var_158 = &processed_var_6816_ptr;
              local_var_150 = 0;
              local_var_120 = *(int32_t *)(lVar2 + 0x58);
              local_var_11c = *(int32_t *)(lVar2 + 0x5c);
              local_var_118 = *(int32_t *)(lVar2 + 0x60);
              local_var_114 = *(int32_t *)(lVar2 + 100);
              local_var_148 = local_var_1c8;
              iVar6 = SystemNetworkProcessor(param_1,&plocal_var_158);
              if (iVar6 != 0) goto CoreSystem_DataProcessor;
            }
          }
          iVar6 = NetworkProtocol_682e0(lVar2,&fStack_19c,0);
          if (iVar6 == 0) {
            if (fStack_19c != 1.0) {
              fStack_1a8 = fStack_19c;
              plocal_var_1c0 = &processed_var_6552_ptr;
              local_var_1b0 = local_var_1c8;
              local_var_1b8 = 0;
              iVar6 = SystemNetworkProcessor(param_1,&plocal_var_1c0);
              if (iVar6 != 0) goto CoreSystem_DataProcessor;
            }
            iVar6 = NetworkProtocol_68270(lVar2,afStack_198,0);
            if (iVar6 == 0) {
              if (afStack_198[0] != 1.0) {
                fStack_1a8 = afStack_198[0];
                plocal_var_1c0 = &processed_var_6688_ptr;
                local_var_1b0 = local_var_1c8;
                local_var_1b8 = 0;
                iVar6 = SystemNetworkProcessor(param_1,&plocal_var_1c0);
                if (iVar6 != 0) goto CoreSystem_DataProcessor;
              }
              fVar13 = 0.0;
              pfVar15 = (float *)(lVar2 + 0x94);
              do {
                if (*pfVar15 != 0.0) {
                  local_var_1b0 = local_var_1c8;
                  local_var_1b8 = 0;
                  plocal_var_1c0 = &processed_var_7224_ptr;
                  fStack_1a8 = fVar13;
                  fStack_1a4 = *pfVar15;
                  iVar6 = SystemNetworkProcessor(param_1,&plocal_var_1c0);
                  if (iVar6 != 0) goto CoreSystem_DataProcessor;
                }
                fVar13 = (float)((int)fVar13 + 1);
                pfVar15 = pfVar15 + 1;
              } while ((int)fVar13 < 4);
              pfVar15 = (float *)&memory_allocator_3144_ptr;
              fVar13 = 0.0;
              do {
                fVar1 = *(float *)(lVar2 + -0x180985054 + (int64_t)pfVar15);
                if (fVar1 != *pfVar15) {
                  local_var_1b0 = local_var_1c8;
                  local_var_1b8 = 0;
                  plocal_var_1c0 = &processed_var_7088_ptr;
                  fStack_1a8 = fVar13;
                  fStack_1a4 = fVar1;
                  iVar6 = SystemNetworkProcessor(param_1,&plocal_var_1c0);
                  if (iVar6 != 0) goto CoreSystem_DataProcessor;
                }
                fVar13 = (float)((int)fVar13 + 1);
                pfVar15 = pfVar15 + 1;
              } while ((int)fVar13 < 6);
              uVar7 = Function_e74f973d(param_2 + 200);
              if ((float)(uVar7 / 0x30) != 0.0) {
                plocal_var_1c0 = &processed_var_7752_ptr;
                local_var_1b0 = local_var_1c8;
                local_var_1b8 = 0;
                fStack_1a8 = (float)(uVar7 / 0x30);
                iVar6 = SystemNetworkProcessor(param_1,&plocal_var_1c0);
                if (iVar6 != 0) goto CoreSystem_DataProcessor;
              }
              if ((*(uint *)(param_2 + 0x2d8) >> 1 & 1) != 0) {
                local_var_1b8 = 0;
                plocal_var_1c0 = &processed_var_7360_ptr;
                local_var_1b0 = local_var_1c8;
                fStack_1a8 = (float)CONCAT31(fStack_1a8._1_3_,1);
                iVar6 = SystemNetworkProcessor(param_1,&plocal_var_1c0);
                if (iVar6 != 0) goto CoreSystem_DataProcessor;
              }
              iVar6 = SystemCore_StateController(param_2);
              if (iVar6 != 2) {
                local_var_1b8 = 0;
                plocal_var_1c0 = &processed_var_7496_ptr;
                local_var_1b0 = local_var_1c8;
                iVar6 = SystemNetworkProcessor(param_1,&plocal_var_1c0);
                if (iVar6 != 0) goto CoreSystem_DataProcessor;
              }
              iVar6 = SystemCore_StateController(param_2);
              if (iVar6 == 4) {
                local_var_1b8 = 0;
                plocal_var_1c0 = &processed_var_7624_ptr;
                local_var_1b0 = local_var_1c8;
                fStack_1a8 = 0.0;
                iVar6 = SystemNetworkProcessor(param_1,&plocal_var_1c0);
                if (iVar6 != 0) goto CoreSystem_DataProcessor;
              }
              if ((*(uint *)(param_2 + 0x2d8) >> 3 & 1) != 0) {
                local_var_1b8 = 0;
                plocal_var_1c0 = &processed_var_8024_ptr;
                local_var_1b0 = local_var_1c8;
                SystemNetworkProcessor(param_1,&plocal_var_1c0);
              }
            }
          }
        }
      }
    }
  }
CoreSystem_DataProcessor:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_1e8);
}
// 函数: void NetworkProtocol_97644(void)
void NetworkProtocol_97644(void)
{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  uint64_t *in_RAX;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  void *puVar18;
  float fVar19;
  uint64_t uVar20;
  float *pfVar21;
  uint64_t *unaff_RBP;
  int64_t unaff_RSI;
  uint64_t *puVar22;
  float unaff_R13D;
  int64_t unaff_R14;
  uint64_t uVar23;
  int64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t uVar24;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int32_t stack_special_x_20;
  char acStackX_24 [4];
  void *local_var_28;
  float local_var_30;
  int32_t local_var_38;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float local_buffer_50;
  uint64_t *plocal_buffer_58;
  int64_t local_var_60;
  int64_t local_var_68;
  void *local_var_70;
  float local_var_78;
  int32_t local_var_1a0;
  int32_t local_var_1a8;
  puVar22 = (uint64_t *)(unaff_R14 + 8);
  fStack0000000000000048 = unaff_R13D;
  plocal_buffer_58 = puVar22;
  lVar15 = (*(code *)*in_RAX)(puVar22);
  iVar13 = Function_3359b5c0(*(uint64_t *)(lVar15 + 0xd0),&local_buffer_00000048);
  if (iVar13 == 0) {
    local_var_70 = &processed_var_5400_ptr;
    *(int32_t *)(unaff_RBP + -0xf) = stack_special_x_20;
    *(float *)(unaff_RBP + -0x10) = fStack0000000000000048;
    local_var_78 = unaff_R13D;
    iVar13 = SystemNetworkProcessor(extraout_XMM0_Da,&local_buffer_00000070);
    if (iVar13 == 0) {
      local_var_60 = (int64_t)*(int *)(unaff_R15 + 0x28);
      if (0 < local_var_60) {
        uVar23 = (uint64_t)(uint)unaff_R13D;
        uVar20 = (uint64_t)(uint)unaff_R13D;
        do {
          lVar15 = *(int64_t *)(unaff_R15 + 0x20);
          lVar2 = *(int64_t *)(uVar20 + 0x10 + lVar15);
          lVar3 = *(int64_t *)(uVar20 + 8 + lVar15);
          cVar12 = Function_43576953(lVar2,1);
          puVar22 = plocal_buffer_58;
          if ((cVar12 == '\0') && (*(float *)(lVar2 + 0x4c) != *(float *)(lVar3 + 0x28))) {
            uVar24 = *(int32_t *)(uVar20 + 4 + lVar15);
            unaff_RBP[-4] = &processed_var_8856_ptr;
            *(int32_t *)(unaff_RBP + -2) = stack_special_x_20;
            puVar4 = (uint64_t *)*plocal_buffer_58;
            *(int32_t *)(unaff_RBP + -1) = uVar24;
            *(int32_t *)(unaff_RBP + -3) = 0;
            lVar15 = (*(code *)*puVar4)(plocal_buffer_58);
            *unaff_RBP = *(uint64_t *)(*(int64_t *)(lVar15 + 0x90) + uVar23 * 8);
            *(int8_t *)((int64_t)unaff_RBP + -4) = 0;
            if (*(int *)(lVar2 + 0x58) < 1) {
              puVar18 = &system_buffer_ptr;
            }
            else {
              puVar18 = *(void **)(lVar2 + 0x50);
            }
            uVar24 = Function_30e71e27(unaff_RBP + 1,puVar18,0x80);
            iVar13 = SystemNetworkProcessor(uVar24,unaff_RBP + -4);
            if (iVar13 != 0) goto CoreSystem_MemoryManager;
          }
          unaff_R13D = 0.0;
          uVar23 = uVar23 + 1;
          uVar20 = uVar20 + 0x18;
          unaff_R14 = local_var_68;
        } while ((int64_t)uVar23 < local_var_60);
      }
      uVar17 = *(uint64_t *)(*(int64_t *)(unaff_RSI + 8) + 800);
      uVar16 = (**(code **)*puVar22)(puVar22);
      iVar13 = NetworkProtocol_479d0(uVar16,uVar17,acStackX_24);
      if (iVar13 == 0) {
        uVar24 = extraout_XMM0_Da_00;
        if (acStackX_24[0] != '\0') {
          uVar17 = Function_ac6e509f();
          iVar13 = memcmp(unaff_R15 + 0x38,uVar17,0x30);
          uVar24 = extraout_XMM0_Da_01;
          if (iVar13 != 0) {
            uVar17 = *(uint64_t *)(unaff_R15 + 0x38);
            uVar16 = *(uint64_t *)(unaff_R15 + 0x40);
            uVar24 = *(int32_t *)(unaff_R15 + 0x48);
            uVar5 = *(int32_t *)(unaff_R15 + 0x4c);
            uVar6 = *(int32_t *)(unaff_R15 + 0x50);
            uVar7 = *(int32_t *)(unaff_R15 + 0x54);
            unaff_RBP[-0xe] = &processed_var_6816_ptr;
            unaff_RBP[-0xb] = uVar17;
            unaff_RBP[-10] = uVar16;
            *(float *)(unaff_RBP + -0xd) = unaff_R13D;
            uVar8 = *(int32_t *)(unaff_R15 + 0x58);
            uVar9 = *(int32_t *)(unaff_R15 + 0x5c);
            uVar10 = *(int32_t *)(unaff_R15 + 0x60);
            uVar11 = *(int32_t *)(unaff_R15 + 100);
            *(int32_t *)(unaff_RBP + -0xc) = stack_special_x_20;
            *(int32_t *)(unaff_RBP + -9) = uVar24;
            *(int32_t *)((int64_t)unaff_RBP + -0x44) = uVar5;
            *(int32_t *)(unaff_RBP + -8) = uVar6;
            *(int32_t *)((int64_t)unaff_RBP + -0x3c) = uVar7;
            *(int32_t *)(unaff_RBP + -7) = uVar8;
            *(int32_t *)((int64_t)unaff_RBP + -0x34) = uVar9;
            *(int32_t *)(unaff_RBP + -6) = uVar10;
            *(int32_t *)((int64_t)unaff_RBP + -0x2c) = uVar11;
            iVar13 = SystemNetworkProcessor(uVar8,unaff_RBP + -0xe);
            uVar24 = extraout_XMM0_Da_02;
            if (iVar13 != 0) goto CoreSystem_MemoryManager;
          }
        }
        iVar13 = NetworkProtocol_682e0(uVar24,(int64_t)&local_buffer_00000048 + 4,0);
        if (iVar13 == 0) {
          local_var_1a0 = unaff_XMM6_Da;
          local_var_1a8 = unaff_XMM6_Dc;
          if (fStack000000000000004c != 1.0) {
            fStack0000000000000040 = fStack000000000000004c;
            local_var_28 = &processed_var_6552_ptr;
            local_var_38 = stack_special_x_20;
            local_var_30 = unaff_R13D;
            iVar13 = SystemNetworkProcessor(fStack000000000000004c,&local_buffer_00000028);
            fStack000000000000004c = extraout_XMM0_Da_03;
            if (iVar13 != 0) goto CoreSystem_MemoryManager;
          }
          iVar13 = NetworkProtocol_68270(fStack000000000000004c,&local_buffer_00000050,0);
          if (iVar13 == 0) {
            if (local_buffer_50 != 1.0) {
              fStack0000000000000040 = local_buffer_50;
              local_var_28 = &processed_var_6688_ptr;
              local_var_38 = stack_special_x_20;
              local_var_30 = unaff_R13D;
              iVar13 = SystemNetworkProcessor(local_buffer_50,&local_buffer_00000028);
              if (iVar13 != 0) goto CoreSystem_MemoryManager;
            }
            pfVar21 = (float *)(unaff_R15 + 0x94);
            fVar19 = unaff_R13D;
            do {
              fVar1 = *pfVar21;
              if (fVar1 != 0.0) {
                local_var_38 = stack_special_x_20;
                local_var_28 = &processed_var_7224_ptr;
                local_var_30 = unaff_R13D;
                fStack0000000000000040 = fVar19;
                fStack0000000000000044 = fVar1;
                iVar13 = SystemNetworkProcessor(fVar1,&local_buffer_00000028);
                if (iVar13 != 0) goto CoreSystem_MemoryManager;
              }
              fVar19 = (float)((int)fVar19 + 1);
              pfVar21 = pfVar21 + 1;
            } while ((int)fVar19 < 4);
            pfVar21 = (float *)&memory_allocator_3144_ptr;
            fVar19 = unaff_R13D;
            do {
              fVar1 = *(float *)(unaff_R15 + -0x180985054 + (int64_t)pfVar21);
              if (fVar1 != *pfVar21) {
                local_var_38 = stack_special_x_20;
                local_var_28 = &processed_var_7088_ptr;
                local_var_30 = unaff_R13D;
                fStack0000000000000040 = fVar19;
                fStack0000000000000044 = fVar1;
                iVar13 = SystemNetworkProcessor(fVar1,&local_buffer_00000028);
                if (iVar13 != 0) goto CoreSystem_MemoryManager;
              }
              fVar19 = (float)((int)fVar19 + 1);
              pfVar21 = pfVar21 + 1;
            } while ((int)fVar19 < 6);
            uVar14 = Function_e74f973d(unaff_R14 + 200);
            uVar24 = extraout_XMM0_Da_04;
            if ((float)(uVar14 / 0x30) != 0.0) {
              local_var_28 = &processed_var_7752_ptr;
              local_var_38 = stack_special_x_20;
              local_var_30 = unaff_R13D;
              fStack0000000000000040 = (float)(uVar14 / 0x30);
              iVar13 = SystemNetworkProcessor(extraout_XMM0_Da_04,&local_buffer_00000028);
              uVar24 = extraout_XMM0_Da_05;
              if (iVar13 != 0) goto CoreSystem_MemoryManager;
            }
            if ((*(uint *)(unaff_R14 + 0x2d8) >> 1 & 1) != 0) {
              local_var_28 = &processed_var_7360_ptr;
              local_var_38 = stack_special_x_20;
              fStack0000000000000040 = (float)CONCAT31(fStack0000000000000040._1_3_,1);
              local_var_30 = unaff_R13D;
              iVar13 = SystemNetworkProcessor(uVar24,&local_buffer_00000028);
              if (iVar13 != 0) goto CoreSystem_MemoryManager;
            }
            iVar13 = SystemCore_StateController(unaff_R14);
            if (iVar13 != 2) {
              local_var_28 = &processed_var_7496_ptr;
              local_var_38 = stack_special_x_20;
              local_var_30 = unaff_R13D;
              iVar13 = SystemNetworkProcessor(extraout_XMM0_Da_06,&local_buffer_00000028);
              if (iVar13 != 0) goto CoreSystem_MemoryManager;
            }
            iVar13 = SystemCore_StateController(unaff_R14);
            uVar24 = extraout_XMM0_Da_07;
            if (iVar13 == 4) {
              local_var_28 = &processed_var_7624_ptr;
              local_var_38 = stack_special_x_20;
              local_var_30 = unaff_R13D;
              fStack0000000000000040 = unaff_R13D;
              iVar13 = SystemNetworkProcessor(extraout_XMM0_Da_07,&local_buffer_00000028);
              uVar24 = extraout_XMM0_Da_08;
              if (iVar13 != 0) goto CoreSystem_MemoryManager;
            }
            if ((*(uint *)(unaff_R14 + 0x2d8) >> 3 & 1) != 0) {
              local_var_28 = &processed_var_8024_ptr;
              local_var_38 = stack_special_x_20;
              local_var_30 = unaff_R13D;
              SystemNetworkProcessor(uVar24,&local_buffer_00000028);
            }
          }
        }
      }
    }
  }
CoreSystem_MemoryManager:
// WARNING: Subroutine does not return
  SystemSecurityChecker(unaff_RBP[0x12] ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_976b0(void)
void NetworkProtocol_976b0(void)
{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  int64_t in_RAX;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  void *puVar18;
  float fVar19;
  uint64_t uVar20;
  float *pfVar21;
  uint64_t *unaff_RBP;
  int64_t unaff_RSI;
  uint64_t *unaff_R12;
  float unaff_R13D;
  int64_t unaff_R14;
  uint64_t uVar22;
  int64_t unaff_R15;
  int32_t uVar23;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int32_t stack_special_x_20;
  char acStackX_24 [4];
  void *local_var_28;
  float local_var_30;
  int32_t local_var_38;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint64_t local_var_48;
  float local_buffer_50;
  uint64_t *local_var_58;
  int64_t lStack0000000000000060;
  int64_t local_var_68;
  int32_t local_var_1a0;
  int32_t local_var_1a8;
  if (0 < in_RAX) {
    uVar22 = (uint64_t)(uint)unaff_R13D;
    uVar20 = (uint64_t)(uint)unaff_R13D;
    lStack0000000000000060 = in_RAX;
    do {
      lVar15 = *(int64_t *)(unaff_R15 + 0x20);
      lVar2 = *(int64_t *)(uVar20 + 0x10 + lVar15);
      lVar3 = *(int64_t *)(uVar20 + 8 + lVar15);
      cVar12 = Function_43576953(lVar2,1);
      unaff_R12 = local_var_58;
      if ((cVar12 == '\0') && (*(float *)(lVar2 + 0x4c) != *(float *)(lVar3 + 0x28))) {
        uVar23 = *(int32_t *)(uVar20 + 4 + lVar15);
        unaff_RBP[-4] = &processed_var_8856_ptr;
        *(int32_t *)(unaff_RBP + -2) = stack_special_x_20;
        puVar4 = (uint64_t *)*local_var_58;
        *(int32_t *)(unaff_RBP + -1) = uVar23;
        *(int32_t *)(unaff_RBP + -3) = 0;
        lVar15 = (*(code *)*puVar4)(local_var_58);
        *unaff_RBP = *(uint64_t *)(*(int64_t *)(lVar15 + 0x90) + uVar22 * 8);
        *(int8_t *)((int64_t)unaff_RBP + -4) = 0;
        if (*(int *)(lVar2 + 0x58) < 1) {
          puVar18 = &system_buffer_ptr;
        }
        else {
          puVar18 = *(void **)(lVar2 + 0x50);
        }
        uVar23 = Function_30e71e27(unaff_RBP + 1,puVar18,0x80);
        iVar13 = SystemNetworkProcessor(uVar23,unaff_RBP + -4);
        if (iVar13 != 0) goto CoreSystem_ConfigurationHandler;
      }
      unaff_R13D = 0.0;
      uVar22 = uVar22 + 1;
      uVar20 = uVar20 + 0x18;
      unaff_R14 = local_var_68;
    } while ((int64_t)uVar22 < lStack0000000000000060);
  }
  uVar17 = *(uint64_t *)(*(int64_t *)(unaff_RSI + 8) + 800);
  uVar16 = (**(code **)*unaff_R12)(unaff_R12);
  iVar13 = NetworkProtocol_479d0(uVar16,uVar17,acStackX_24);
  if (iVar13 == 0) {
    uVar23 = extraout_XMM0_Da;
    if (acStackX_24[0] != '\0') {
      uVar17 = Function_ac6e509f();
      iVar13 = memcmp(unaff_R15 + 0x38,uVar17,0x30);
      uVar23 = extraout_XMM0_Da_00;
      if (iVar13 != 0) {
        uVar17 = *(uint64_t *)(unaff_R15 + 0x38);
        uVar16 = *(uint64_t *)(unaff_R15 + 0x40);
        uVar23 = *(int32_t *)(unaff_R15 + 0x48);
        uVar5 = *(int32_t *)(unaff_R15 + 0x4c);
        uVar6 = *(int32_t *)(unaff_R15 + 0x50);
        uVar7 = *(int32_t *)(unaff_R15 + 0x54);
        unaff_RBP[-0xe] = &processed_var_6816_ptr;
        unaff_RBP[-0xb] = uVar17;
        unaff_RBP[-10] = uVar16;
        *(float *)(unaff_RBP + -0xd) = unaff_R13D;
        uVar8 = *(int32_t *)(unaff_R15 + 0x58);
        uVar9 = *(int32_t *)(unaff_R15 + 0x5c);
        uVar10 = *(int32_t *)(unaff_R15 + 0x60);
        uVar11 = *(int32_t *)(unaff_R15 + 100);
        *(int32_t *)(unaff_RBP + -0xc) = stack_special_x_20;
        *(int32_t *)(unaff_RBP + -9) = uVar23;
        *(int32_t *)((int64_t)unaff_RBP + -0x44) = uVar5;
        *(int32_t *)(unaff_RBP + -8) = uVar6;
        *(int32_t *)((int64_t)unaff_RBP + -0x3c) = uVar7;
        *(int32_t *)(unaff_RBP + -7) = uVar8;
        *(int32_t *)((int64_t)unaff_RBP + -0x34) = uVar9;
        *(int32_t *)(unaff_RBP + -6) = uVar10;
        *(int32_t *)((int64_t)unaff_RBP + -0x2c) = uVar11;
        iVar13 = SystemNetworkProcessor(uVar8,unaff_RBP + -0xe);
        uVar23 = extraout_XMM0_Da_01;
        if (iVar13 != 0) goto CoreSystem_ConfigurationHandler;
      }
    }
    iVar13 = NetworkProtocol_682e0(uVar23,(int64_t)&local_buffer_00000048 + 4,0);
    if (iVar13 == 0) {
      local_var_1a0 = unaff_XMM6_Da;
      local_var_1a8 = unaff_XMM6_Dc;
      if (local_var_48._4_4_ != 1.0) {
        fStack0000000000000040 = local_var_48._4_4_;
        local_var_28 = &processed_var_6552_ptr;
        local_var_38 = stack_special_x_20;
        local_var_30 = unaff_R13D;
        iVar13 = SystemNetworkProcessor(local_var_48._4_4_,&local_buffer_00000028);
        local_var_48._4_4_ = extraout_XMM0_Da_02;
        if (iVar13 != 0) goto CoreSystem_ConfigurationHandler;
      }
      iVar13 = NetworkProtocol_68270(local_var_48._4_4_,&local_buffer_00000050,0);
      if (iVar13 == 0) {
        if (local_buffer_50 != 1.0) {
          fStack0000000000000040 = local_buffer_50;
          local_var_28 = &processed_var_6688_ptr;
          local_var_38 = stack_special_x_20;
          local_var_30 = unaff_R13D;
          iVar13 = SystemNetworkProcessor(local_buffer_50,&local_buffer_00000028);
          if (iVar13 != 0) goto CoreSystem_ConfigurationHandler;
        }
        pfVar21 = (float *)(unaff_R15 + 0x94);
        fVar19 = unaff_R13D;
        do {
          fVar1 = *pfVar21;
          if (fVar1 != 0.0) {
            local_var_38 = stack_special_x_20;
            local_var_28 = &processed_var_7224_ptr;
            local_var_30 = unaff_R13D;
            fStack0000000000000040 = fVar19;
            fStack0000000000000044 = fVar1;
            iVar13 = SystemNetworkProcessor(fVar1,&local_buffer_00000028);
            if (iVar13 != 0) goto CoreSystem_ConfigurationHandler;
          }
          fVar19 = (float)((int)fVar19 + 1);
          pfVar21 = pfVar21 + 1;
        } while ((int)fVar19 < 4);
        pfVar21 = (float *)&memory_allocator_3144_ptr;
        fVar19 = unaff_R13D;
        do {
          fVar1 = *(float *)(unaff_R15 + -0x180985054 + (int64_t)pfVar21);
          if (fVar1 != *pfVar21) {
            local_var_38 = stack_special_x_20;
            local_var_28 = &processed_var_7088_ptr;
            local_var_30 = unaff_R13D;
            fStack0000000000000040 = fVar19;
            fStack0000000000000044 = fVar1;
            iVar13 = SystemNetworkProcessor(fVar1,&local_buffer_00000028);
            if (iVar13 != 0) goto CoreSystem_ConfigurationHandler;
          }
          fVar19 = (float)((int)fVar19 + 1);
          pfVar21 = pfVar21 + 1;
        } while ((int)fVar19 < 6);
        uVar14 = Function_e74f973d(unaff_R14 + 200);
        uVar23 = extraout_XMM0_Da_03;
        if ((float)(uVar14 / 0x30) != 0.0) {
          local_var_28 = &processed_var_7752_ptr;
          local_var_38 = stack_special_x_20;
          local_var_30 = unaff_R13D;
          fStack0000000000000040 = (float)(uVar14 / 0x30);
          iVar13 = SystemNetworkProcessor(extraout_XMM0_Da_03,&local_buffer_00000028);
          uVar23 = extraout_XMM0_Da_04;
          if (iVar13 != 0) goto CoreSystem_ConfigurationHandler;
        }
        if ((*(uint *)(unaff_R14 + 0x2d8) >> 1 & 1) != 0) {
          local_var_28 = &processed_var_7360_ptr;
          local_var_38 = stack_special_x_20;
          fStack0000000000000040 = (float)CONCAT31(fStack0000000000000040._1_3_,1);
          local_var_30 = unaff_R13D;
          iVar13 = SystemNetworkProcessor(uVar23,&local_buffer_00000028);
          if (iVar13 != 0) goto CoreSystem_ConfigurationHandler;
        }
        iVar13 = SystemCore_StateController(unaff_R14);
        if (iVar13 != 2) {
          local_var_28 = &processed_var_7496_ptr;
          local_var_38 = stack_special_x_20;
          local_var_30 = unaff_R13D;
          iVar13 = SystemNetworkProcessor(extraout_XMM0_Da_05,&local_buffer_00000028);
          if (iVar13 != 0) goto CoreSystem_ConfigurationHandler;
        }
        iVar13 = SystemCore_StateController(unaff_R14);
        uVar23 = extraout_XMM0_Da_06;
        if (iVar13 == 4) {
          local_var_28 = &processed_var_7624_ptr;
          local_var_38 = stack_special_x_20;
          local_var_30 = unaff_R13D;
          fStack0000000000000040 = unaff_R13D;
          iVar13 = SystemNetworkProcessor(extraout_XMM0_Da_06,&local_buffer_00000028);
          uVar23 = extraout_XMM0_Da_07;
          if (iVar13 != 0) goto CoreSystem_ConfigurationHandler;
        }
        if ((*(uint *)(unaff_R14 + 0x2d8) >> 3 & 1) != 0) {
          local_var_28 = &processed_var_8024_ptr;
          local_var_38 = stack_special_x_20;
          local_var_30 = unaff_R13D;
          SystemNetworkProcessor(uVar23,&local_buffer_00000028);
        }
      }
    }
  }
CoreSystem_ConfigurationHandler:
// WARNING: Subroutine does not return
  SystemSecurityChecker(unaff_RBP[0x12] ^ (uint64_t)&local_buffer_00000000);
}
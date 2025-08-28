#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_08_part014.c - 2 个函数
// 函数: void UISystem_eced9(void)
void UISystem_eced9(void)
{
  int64_t lVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int8_t uVar10;
  int iVar11;
  int64_t in_RAX;
  int64_t lVar12;
  uint64_t *puVar13;
  uint uVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint uVar17;
  uint64_t unaff_RBX;
  uint64_t *puVar18;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint uVar19;
  int64_t lVar20;
  int64_t in_R11;
  uint64_t unaff_R13;
  char in_SF;
  char in_OF;
  int32_t uVar21;
  uint64_t local_var_40;
  int64_t local_var_48;
  uint local_buffer_50;
  int32_t local_buffer_54;
  int64_t local_var_58;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  if (in_OF == in_SF) {
    lVar12 = in_RAX * 0xa60;
    lVar15 = *(int64_t *)(lVar12 + 0x3778 + unaff_RDI);
    if (((lVar15 != 0) && (*(char *)(lVar15 + 0x8be) != '\0')) &&
       (*(int64_t *)(lVar12 + 0x3630 + unaff_RDI) != 0)) {
      *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
      lVar7 = system_system_ui;
      *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
      lVar12 = unaff_RDI + 0x30a0 + lVar12;
      lVar15 = *(int64_t *)(lVar7 + 0x4c4d0);
      *(int32_t *)(lVar12 + 0x200) = *(int32_t *)(lVar7 + 0x4c4dc);
      *(int32_t *)(lVar12 + 0x204) = *(int32_t *)(lVar7 + 0x4c4e0);
      if (*(int *)(lVar12 + 0x5f8) == 0) {
        iVar11 = Function_99f7ec47();
        if (iVar11 < *(int *)(unaff_RDI + 0x52ed94)) {
          do {
            puVar2 = (uint *)((int64_t)iVar11 * 0x240 + 0x74eb98 + unaff_RDI);
            *puVar2 = *puVar2 & 0xfffffffe;
            iVar11 = (int)*(short *)(unaff_RDI + 0x52dda0 + (int64_t)iVar11 * 2);
          } while (iVar11 < *(int *)(unaff_RDI + 0x52ed94));
        }
        if (*(int *)(unaff_RDI + 0x8fd224) != 0) {
          lVar1 = unaff_RDI + 0x87d220;
          uVar19 = *(int *)(unaff_RDI + 0x8fd224) + *(uint *)(unaff_RDI + 0x8fd220) & 0x800003ff;
          if ((int)uVar19 < 0) {
            uVar19 = (uVar19 - 1 | 0xfffffc00) + 1;
          }
          uVar17 = uVar19 + 0x3ff & 0x800003ff;
          if ((int)uVar17 < 0) {
            uVar17 = (uVar17 - 1 | 0xfffffc00) + 1;
          }
          uVar14 = *(int *)(unaff_RDI + 0x98d22c) + *(int *)(unaff_RDI + 0x98d228) & 0x800003ff;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
          }
          uVar14 = uVar14 + 0x3ff & 0x800003ff;
          local_buffer_50 = uVar17;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
          }
          while ((local_buffer_50 != *(uint *)(unaff_RDI + 0x8fd220) &&
                 (lVar15 < *(int64_t *)
                            ((int64_t)(int)local_buffer_50 * 0x200 + 0x10 + lVar1)))) {
            local_buffer_50 = local_buffer_50 + 0x3ff & 0x800003ff;
            if ((int)local_buffer_50 < 0) {
              local_buffer_50 = (local_buffer_50 - 1 | 0xfffffc00) + 1;
            }
            uVar14 = uVar14 + 0x3ff & 0x800003ff;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
            }
          }
          if ((*(int *)(lVar12 + 0x10) ==
               *(int *)((int64_t)(int)local_buffer_50 * 0x200 + 0x1c + lVar1)) &&
             (*(int64_t *)((int64_t)(int)local_buffer_50 * 0x200 + 0x10 + lVar1) == lVar15)
             ) {
            while ((local_buffer_50 != uVar19 &&
                   (*(int *)((int64_t)(int)local_buffer_50 * 0x200 + 0x28 + lVar1) != 0))) {
              local_buffer_50 = local_buffer_50 + 1 & 0x800003ff;
              if ((int)local_buffer_50 < 0) {
                local_buffer_50 = (local_buffer_50 - 1 | 0xfffffc00) + 1;
              }
              uVar14 = uVar14 + 1 & 0x800003ff;
              if ((int)uVar14 < 0) {
                uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
              }
            }
            if (local_buffer_50 != uVar19) {
              lVar20 = 4;
              lVar15 = 4;
              puVar8 = (uint64_t *)&local_buffer_00000060;
              puVar9 = (uint64_t *)((int64_t)(int)uVar14 * 0x240 + unaff_RDI + 0x8fd228);
              do {
                puVar13 = puVar9;
                puVar18 = puVar8;
                uVar3 = puVar13[1];
                uVar4 = puVar13[2];
                uVar5 = puVar13[3];
                *puVar18 = *puVar13;
                puVar18[1] = uVar3;
                uVar3 = puVar13[4];
                uVar6 = puVar13[5];
                puVar18[2] = uVar4;
                puVar18[3] = uVar5;
                uVar4 = puVar13[6];
                uVar5 = puVar13[7];
                puVar18[4] = uVar3;
                puVar18[5] = uVar6;
                uVar3 = puVar13[8];
                uVar6 = puVar13[9];
                puVar18[6] = uVar4;
                puVar18[7] = uVar5;
                uVar4 = puVar13[10];
                uVar5 = puVar13[0xb];
                puVar18[8] = uVar3;
                puVar18[9] = uVar6;
                uVar3 = puVar13[0xc];
                uVar6 = puVar13[0xd];
                puVar18[10] = uVar4;
                puVar18[0xb] = uVar5;
                uVar4 = puVar13[0xe];
                uVar5 = puVar13[0xf];
                puVar18[0xc] = uVar3;
                puVar18[0xd] = uVar6;
                puVar18[0xe] = uVar4;
                puVar18[0xf] = uVar5;
                lVar15 = lVar15 + -1;
                puVar8 = puVar18 + 0x10;
                puVar9 = puVar13 + 0x10;
              } while (lVar15 != 0);
              uVar3 = puVar13[0x11];
              uVar4 = puVar13[0x12];
              uVar5 = puVar13[0x13];
              puVar18[0x10] = puVar13[0x10];
              puVar18[0x11] = uVar3;
              uVar3 = puVar13[0x14];
              uVar6 = puVar13[0x15];
              puVar18[0x12] = uVar4;
              puVar18[0x13] = uVar5;
              uVar4 = puVar13[0x16];
              uVar5 = puVar13[0x17];
              puVar18[0x14] = uVar3;
              puVar18[0x15] = uVar6;
              puVar18[0x16] = uVar4;
              puVar18[0x17] = uVar5;
              puVar18 = (uint64_t *)(unaff_RDI + 0x74eb90 + in_RAX * 0x240);
              puVar8 = puVar18;
              puVar9 = (uint64_t *)&local_buffer_00000060;
              do {
                puVar16 = puVar9;
                puVar13 = puVar8;
                uVar3 = puVar16[1];
                uVar4 = puVar16[2];
                uVar5 = puVar16[3];
                *puVar13 = *puVar16;
                puVar13[1] = uVar3;
                uVar3 = puVar16[4];
                uVar6 = puVar16[5];
                puVar13[2] = uVar4;
                puVar13[3] = uVar5;
                uVar4 = puVar16[6];
                uVar5 = puVar16[7];
                puVar13[4] = uVar3;
                puVar13[5] = uVar6;
                uVar3 = puVar16[8];
                uVar6 = puVar16[9];
                puVar13[6] = uVar4;
                puVar13[7] = uVar5;
                uVar4 = puVar16[10];
                uVar5 = puVar16[0xb];
                puVar13[8] = uVar3;
                puVar13[9] = uVar6;
                uVar3 = puVar16[0xc];
                uVar6 = puVar16[0xd];
                puVar13[10] = uVar4;
                puVar13[0xb] = uVar5;
                uVar4 = puVar16[0xe];
                uVar5 = puVar16[0xf];
                puVar13[0xc] = uVar3;
                puVar13[0xd] = uVar6;
                puVar13[0xe] = uVar4;
                puVar13[0xf] = uVar5;
                lVar20 = lVar20 + -1;
                puVar8 = puVar13 + 0x10;
                puVar9 = puVar16 + 0x10;
              } while (lVar20 != 0);
              uVar3 = puVar16[0x11];
              uVar4 = puVar16[0x12];
              uVar5 = puVar16[0x13];
              puVar13[0x10] = puVar16[0x10];
              puVar13[0x11] = uVar3;
              uVar3 = puVar16[0x14];
              uVar6 = puVar16[0x15];
              puVar13[0x12] = uVar4;
              puVar13[0x13] = uVar5;
              uVar4 = puVar16[0x16];
              uVar5 = puVar16[0x17];
              puVar13[0x14] = uVar3;
              puVar13[0x15] = uVar6;
              puVar13[0x16] = uVar4;
              puVar13[0x17] = uVar5;
              uVar3 = *(uint64_t *)(lVar7 + 0x4c4b0);
              uVar19 = *(uint *)((int64_t)(int)local_buffer_50 * 0x200 + 0x24 + lVar1);
              *(uint64_t *)((int64_t)puVar18 + 0xc) = *(uint64_t *)(lVar7 + 0x4c4a8);
              *(uint64_t *)((int64_t)puVar18 + 0x14) = uVar3;
              *(uint64_t *)((int64_t)puVar18 + 0x1c) = *(uint64_t *)(lVar7 + 0x4c4c8);
              if ((uVar19 >> 0xb & 1) == 0) {
                *(int32_t *)((int64_t)puVar18 + 0x34) = *(int32_t *)(lVar7 + 0x4c4d8);
              }
              local_var_40 = CONCAT44(local_buffer_54,local_buffer_50);
              uVar19 = local_buffer_50;
              local_var_48 = lVar1;
              local_var_58 = lVar1;
              while( true ) {
                uVar17 = *(int *)(unaff_RDI + 0x8fd220) + *(int *)(unaff_RDI + 0x8fd224) &
                         0x800003ff;
                if ((int)uVar17 < 0) {
                  uVar17 = (uVar17 - 1 | 0xfffffc00) + 1;
                }
                if (uVar19 == uVar17) break;
                lVar15 = (int64_t)(int)uVar19 * 0x200 + lVar1;
                uVar21 = Function_4803a7aa(puVar18,*(int32_t *)(lVar15 + 0x18));
                if ((*(uint *)(lVar15 + 0x24) & 0x800) != 0) {
                  NetworkSystem_984e0(uVar21,*(int32_t *)(lVar15 + 0x18),lVar15);
                }
                NetworkSystem_98f80(puVar18);
                NetworkSystem_90fc0(puVar18);
                NetworkSystem_93ce0(puVar18,*(int32_t *)(lVar15 + 0x18));
                uVar21 = *(int32_t *)(lVar15 + 0x18);
                if ((system_status_flag == 0) || (system_status_flag == 5)) {
                  uVar10 = 1;
                }
                else {
                  uVar10 = 0;
                }
                *(int8_t *)(unaff_RDI + 0x87d208) = uVar10;
                if ((system_status_flag == 1) || (system_status_flag == 4)) {
                  uVar10 = 1;
                }
                else {
                  uVar10 = 0;
                }
                *(int8_t *)(unaff_RDI + 0x87d209) = uVar10;
                NetworkSystem_a7cb0(unaff_RDI + 0x87bd80,uVar21);
                NetworkSystem_a9bc0(unaff_RDI + 0x87bd80);
                NetworkSystem_92060(puVar18,*(int32_t *)(lVar15 + 0x18));
                uVar19 = uVar19 + 1 & 0x800003ff;
                if ((int)uVar19 < 0) {
                  uVar19 = (uVar19 - 1 | 0xfffffc00) + 1;
                }
              }
              local_var_40 = *(uint64_t *)((int64_t)puVar18 + 0xc);
              local_var_48 = *(uint64_t *)((int64_t)puVar18 + 0x14);
              NetworkSystem_1f1e0(lVar12,&local_buffer_00000040);
              uVar19 = uVar19 + 0x3ff & 0x800003ff;
              if ((int)uVar19 < 0) {
                uVar19 = (uVar19 - 1 | 0xfffffc00) + 1;
              }
              if (*(int *)((int64_t)(int)uVar19 * 0x200 + 0x28 + lVar1) == 0) {
                *(uint64_t *)(*(int64_t *)(lVar12 + 0x20) + 0x1c) =
                     *(uint64_t *)((int64_t)puVar18 + 0x1c);
              }
              if ((*(uint *)((int64_t)(int)uVar19 * 0x200 + 0x24 + lVar1) & 0x800) == 0) {
                Function_e36c6b2f(*(uint64_t *)(lVar12 + 0x20),
                                    *(int32_t *)((int64_t)puVar18 + 0x34));
              }
              if (-1 < *(int *)(lVar12 + 0x560)) {
                Function_a930d364((int64_t)*(int *)(lVar12 + 0x560) * 0xa60 + 0x30a0 + unaff_RDI)
                ;
              }
            }
          }
        }
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_ecf1a(void)
void UISystem_ecf1a(void)
{
  int64_t lVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int8_t uVar10;
  int iVar11;
  int64_t in_RAX;
  uint64_t *puVar12;
  uint uVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  uint uVar16;
  uint64_t unaff_RBX;
  uint64_t *puVar17;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint uVar18;
  int64_t lVar19;
  int64_t in_R11;
  uint64_t unaff_R13;
  int64_t lVar20;
  int32_t uVar21;
  uint64_t local_var_40;
  int64_t local_var_48;
  uint local_buffer_50;
  int32_t local_buffer_54;
  int64_t local_var_58;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  lVar7 = system_system_ui;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  lVar20 = unaff_RDI + 0x30a0 + in_RAX;
  lVar14 = *(int64_t *)(lVar7 + 0x4c4d0);
  *(int32_t *)(lVar20 + 0x200) = *(int32_t *)(lVar7 + 0x4c4dc);
  *(int32_t *)(lVar20 + 0x204) = *(int32_t *)(lVar7 + 0x4c4e0);
  if (*(int *)(lVar20 + 0x5f8) == 0) {
    iVar11 = Function_99f7ec47();
    if (iVar11 < *(int *)(unaff_RDI + 0x52ed94)) {
      do {
        puVar2 = (uint *)((int64_t)iVar11 * 0x240 + 0x74eb98 + unaff_RDI);
        *puVar2 = *puVar2 & 0xfffffffe;
        iVar11 = (int)*(short *)(unaff_RDI + 0x52dda0 + (int64_t)iVar11 * 2);
      } while (iVar11 < *(int *)(unaff_RDI + 0x52ed94));
    }
    if (*(int *)(unaff_RDI + 0x8fd224) != 0) {
      lVar1 = unaff_RDI + 0x87d220;
      uVar18 = *(int *)(unaff_RDI + 0x8fd224) + *(uint *)(unaff_RDI + 0x8fd220) & 0x800003ff;
      if ((int)uVar18 < 0) {
        uVar18 = (uVar18 - 1 | 0xfffffc00) + 1;
      }
      uVar16 = uVar18 + 0x3ff & 0x800003ff;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar16 - 1 | 0xfffffc00) + 1;
      }
      uVar13 = *(int *)(unaff_RDI + 0x98d22c) + *(int *)(unaff_RDI + 0x98d228) & 0x800003ff;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
      }
      uVar13 = uVar13 + 0x3ff & 0x800003ff;
      local_buffer_50 = uVar16;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
      }
      while ((local_buffer_50 != *(uint *)(unaff_RDI + 0x8fd220) &&
             (lVar14 < *(int64_t *)((int64_t)(int)local_buffer_50 * 0x200 + 0x10 + lVar1)))
            ) {
        local_buffer_50 = local_buffer_50 + 0x3ff & 0x800003ff;
        if ((int)local_buffer_50 < 0) {
          local_buffer_50 = (local_buffer_50 - 1 | 0xfffffc00) + 1;
        }
        uVar13 = uVar13 + 0x3ff & 0x800003ff;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
        }
      }
      if ((*(int *)(lVar20 + 0x10) ==
           *(int *)((int64_t)(int)local_buffer_50 * 0x200 + 0x1c + lVar1)) &&
         (*(int64_t *)((int64_t)(int)local_buffer_50 * 0x200 + 0x10 + lVar1) == lVar14)) {
        while ((local_buffer_50 != uVar18 &&
               (*(int *)((int64_t)(int)local_buffer_50 * 0x200 + 0x28 + lVar1) != 0))) {
          local_buffer_50 = local_buffer_50 + 1 & 0x800003ff;
          if ((int)local_buffer_50 < 0) {
            local_buffer_50 = (local_buffer_50 - 1 | 0xfffffc00) + 1;
          }
          uVar13 = uVar13 + 1 & 0x800003ff;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
          }
        }
        if (local_buffer_50 != uVar18) {
          lVar19 = 4;
          lVar14 = 4;
          puVar8 = (uint64_t *)&local_buffer_00000060;
          puVar9 = (uint64_t *)((int64_t)(int)uVar13 * 0x240 + unaff_RDI + 0x8fd228);
          do {
            puVar12 = puVar9;
            puVar17 = puVar8;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            *puVar17 = *puVar12;
            puVar17[1] = uVar3;
            uVar3 = puVar12[4];
            uVar6 = puVar12[5];
            puVar17[2] = uVar4;
            puVar17[3] = uVar5;
            uVar4 = puVar12[6];
            uVar5 = puVar12[7];
            puVar17[4] = uVar3;
            puVar17[5] = uVar6;
            uVar3 = puVar12[8];
            uVar6 = puVar12[9];
            puVar17[6] = uVar4;
            puVar17[7] = uVar5;
            uVar4 = puVar12[10];
            uVar5 = puVar12[0xb];
            puVar17[8] = uVar3;
            puVar17[9] = uVar6;
            uVar3 = puVar12[0xc];
            uVar6 = puVar12[0xd];
            puVar17[10] = uVar4;
            puVar17[0xb] = uVar5;
            uVar4 = puVar12[0xe];
            uVar5 = puVar12[0xf];
            puVar17[0xc] = uVar3;
            puVar17[0xd] = uVar6;
            puVar17[0xe] = uVar4;
            puVar17[0xf] = uVar5;
            lVar14 = lVar14 + -1;
            puVar8 = puVar17 + 0x10;
            puVar9 = puVar12 + 0x10;
          } while (lVar14 != 0);
          uVar3 = puVar12[0x11];
          uVar4 = puVar12[0x12];
          uVar5 = puVar12[0x13];
          puVar17[0x10] = puVar12[0x10];
          puVar17[0x11] = uVar3;
          uVar3 = puVar12[0x14];
          uVar6 = puVar12[0x15];
          puVar17[0x12] = uVar4;
          puVar17[0x13] = uVar5;
          uVar4 = puVar12[0x16];
          uVar5 = puVar12[0x17];
          puVar17[0x14] = uVar3;
          puVar17[0x15] = uVar6;
          puVar17[0x16] = uVar4;
          puVar17[0x17] = uVar5;
          puVar17 = (uint64_t *)(unaff_RDI + 0x74eb90 + unaff_RSI * 0x240);
          puVar8 = puVar17;
          puVar9 = (uint64_t *)&local_buffer_00000060;
          do {
            puVar15 = puVar9;
            puVar12 = puVar8;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            *puVar12 = *puVar15;
            puVar12[1] = uVar3;
            uVar3 = puVar15[4];
            uVar6 = puVar15[5];
            puVar12[2] = uVar4;
            puVar12[3] = uVar5;
            uVar4 = puVar15[6];
            uVar5 = puVar15[7];
            puVar12[4] = uVar3;
            puVar12[5] = uVar6;
            uVar3 = puVar15[8];
            uVar6 = puVar15[9];
            puVar12[6] = uVar4;
            puVar12[7] = uVar5;
            uVar4 = puVar15[10];
            uVar5 = puVar15[0xb];
            puVar12[8] = uVar3;
            puVar12[9] = uVar6;
            uVar3 = puVar15[0xc];
            uVar6 = puVar15[0xd];
            puVar12[10] = uVar4;
            puVar12[0xb] = uVar5;
            uVar4 = puVar15[0xe];
            uVar5 = puVar15[0xf];
            puVar12[0xc] = uVar3;
            puVar12[0xd] = uVar6;
            puVar12[0xe] = uVar4;
            puVar12[0xf] = uVar5;
            lVar19 = lVar19 + -1;
            puVar8 = puVar12 + 0x10;
            puVar9 = puVar15 + 0x10;
          } while (lVar19 != 0);
          uVar3 = puVar15[0x11];
          uVar4 = puVar15[0x12];
          uVar5 = puVar15[0x13];
          puVar12[0x10] = puVar15[0x10];
          puVar12[0x11] = uVar3;
          uVar3 = puVar15[0x14];
          uVar6 = puVar15[0x15];
          puVar12[0x12] = uVar4;
          puVar12[0x13] = uVar5;
          uVar4 = puVar15[0x16];
          uVar5 = puVar15[0x17];
          puVar12[0x14] = uVar3;
          puVar12[0x15] = uVar6;
          puVar12[0x16] = uVar4;
          puVar12[0x17] = uVar5;
          uVar3 = *(uint64_t *)(lVar7 + 0x4c4b0);
          uVar18 = *(uint *)((int64_t)(int)local_buffer_50 * 0x200 + 0x24 + lVar1);
          *(uint64_t *)((int64_t)puVar17 + 0xc) = *(uint64_t *)(lVar7 + 0x4c4a8);
          *(uint64_t *)((int64_t)puVar17 + 0x14) = uVar3;
          *(uint64_t *)((int64_t)puVar17 + 0x1c) = *(uint64_t *)(lVar7 + 0x4c4c8);
          if ((uVar18 >> 0xb & 1) == 0) {
            *(int32_t *)((int64_t)puVar17 + 0x34) = *(int32_t *)(lVar7 + 0x4c4d8);
          }
          local_var_40 = CONCAT44(local_buffer_54,local_buffer_50);
          uVar18 = local_buffer_50;
          local_var_48 = lVar1;
          local_var_58 = lVar1;
          while( true ) {
            uVar16 = *(int *)(unaff_RDI + 0x8fd220) + *(int *)(unaff_RDI + 0x8fd224) & 0x800003ff;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar16 - 1 | 0xfffffc00) + 1;
            }
            if (uVar18 == uVar16) break;
            lVar14 = (int64_t)(int)uVar18 * 0x200 + lVar1;
            uVar21 = Function_4803a7aa(puVar17,*(int32_t *)(lVar14 + 0x18));
            if ((*(uint *)(lVar14 + 0x24) & 0x800) != 0) {
              NetworkSystem_984e0(uVar21,*(int32_t *)(lVar14 + 0x18),lVar14);
            }
            NetworkSystem_98f80(puVar17);
            NetworkSystem_90fc0(puVar17);
            NetworkSystem_93ce0(puVar17,*(int32_t *)(lVar14 + 0x18));
            uVar21 = *(int32_t *)(lVar14 + 0x18);
            if ((system_status_flag == 0) || (system_status_flag == 5)) {
              uVar10 = 1;
            }
            else {
              uVar10 = 0;
            }
            *(int8_t *)(unaff_RDI + 0x87d208) = uVar10;
            if ((system_status_flag == 1) || (system_status_flag == 4)) {
              uVar10 = 1;
            }
            else {
              uVar10 = 0;
            }
            *(int8_t *)(unaff_RDI + 0x87d209) = uVar10;
            NetworkSystem_a7cb0(unaff_RDI + 0x87bd80,uVar21);
            NetworkSystem_a9bc0(unaff_RDI + 0x87bd80);
            NetworkSystem_92060(puVar17,*(int32_t *)(lVar14 + 0x18));
            uVar18 = uVar18 + 1 & 0x800003ff;
            if ((int)uVar18 < 0) {
              uVar18 = (uVar18 - 1 | 0xfffffc00) + 1;
            }
          }
          local_var_40 = *(uint64_t *)((int64_t)puVar17 + 0xc);
          local_var_48 = *(uint64_t *)((int64_t)puVar17 + 0x14);
          NetworkSystem_1f1e0(lVar20,&local_buffer_00000040);
          uVar18 = uVar18 + 0x3ff & 0x800003ff;
          if ((int)uVar18 < 0) {
            uVar18 = (uVar18 - 1 | 0xfffffc00) + 1;
          }
          if (*(int *)((int64_t)(int)uVar18 * 0x200 + 0x28 + lVar1) == 0) {
            *(uint64_t *)(*(int64_t *)(lVar20 + 0x20) + 0x1c) =
                 *(uint64_t *)((int64_t)puVar17 + 0x1c);
          }
          if ((*(uint *)((int64_t)(int)uVar18 * 0x200 + 0x24 + lVar1) & 0x800) == 0) {
            Function_e36c6b2f(*(uint64_t *)(lVar20 + 0x20),
                                *(int32_t *)((int64_t)puVar17 + 0x34));
          }
          if (-1 < *(int *)(lVar20 + 0x560)) {
            Function_a930d364((int64_t)*(int *)(lVar20 + 0x560) * 0xa60 + 0x30a0 + unaff_RDI);
          }
        }
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
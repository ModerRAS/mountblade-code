#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part027.c - 3 个函数

// 函数: void FUN_180280600(uint64_t *param_1,int64_t *param_2)
void FUN_180280600(uint64_t *param_1,int64_t *param_2)

{
  uint *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint *puVar17;
  int iVar18;
  int64_t lVar19;
  uint *puVar20;
  int64_t lVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint uVar24;
  uint64_t *puVar25;
  int iVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  int iVar30;
  int64_t lVar31;
  uint uVar32;
  uint64_t uVar33;
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  int iStack_a8;
  uint uStack_a4;
  char acStack_a0 [4];
  uint uStack_9c;
  int64_t *plStack_98;
  int64_t *plStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t *puStack_78;
  int64_t lStack_70;
  uint64_t *puStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  lVar23 = param_2[7];
  iStack_a8 = 0;
  plStack_90 = param_2;
  if (param_2[8] - lVar23 >> 4 != 0) {
    lStack_88 = 0;
    do {
      uVar24 = *(uint *)(lVar23 + 8 + lStack_88);
      lVar23 = *(int64_t *)(lVar23 + lStack_88);
      uStack_a4 = uVar24;
      lStack_80 = lVar23;
      if (*(code **)(*param_2 + 0x158) == (code *)&unknown_var_2528_ptr) {
        plStack_98 = param_2 + 0x66;
      }
      else {
        plStack_98 = (int64_t *)(**(code **)(*param_2 + 0x158))(param_2);
        param_2 = plStack_90;
      }
      iVar30 = 0;
      iVar26 = *(int *)*param_1;
      if (0 < iVar26) {
        uVar32 = 1;
        lVar31 = 0;
        do {
          if ((uVar24 & uVar32) != 0) {
            lVar19 = param_1[1];
            lVar2 = *(int64_t *)(*(int64_t *)(lVar23 + 0x1b8) + 0xa8);
            lVar3 = *(int64_t *)(lVar19 + 8);
            uVar16 = *(uint64_t *)(lVar2 + 0xc);
            uVar6 = *(uint64_t *)(lVar2 + 0x14);
            uVar33 = uVar16 ^ uVar6;
            for (puVar25 = *(uint64_t **)
                            (lVar3 + (uVar33 % (uint64_t)*(uint *)(lVar19 + 0x10)) * 8);
                puVar25 != (uint64_t *)0x0; puVar25 = (uint64_t *)puVar25[3]) {
              if ((uVar16 == *puVar25) && (uVar6 == puVar25[1])) {
                if (puVar25 != (uint64_t *)0x0) {
                  lVar19 = *(int64_t *)(lVar19 + 0x10);
                  goto LAB_180280743;
                }
                break;
              }
            }
            lVar19 = *(int64_t *)(lVar19 + 0x10);
            puVar25 = *(uint64_t **)(lVar3 + lVar19 * 8);
LAB_180280743:
            if (puVar25 == *(uint64_t **)(lVar3 + lVar19 * 8)) {
              plVar4 = (int64_t *)param_1[2];
              iVar18 = 0;
              uStack_50 = (int64_t)((int)plVar4[2] + 0xf) & 0xfffffffffffffff0;
              *(int *)(plVar4 + 2) = iVar26 * 0x20 + (int)uStack_50;
              uStack_50 = *plVar4 + uStack_50;
              if (0 < *(int *)*param_1) {
                puVar13 = (uint64_t *)(uStack_50 + 8);
                do {
                  puVar5 = (uint64_t *)param_1[3];
                  iVar18 = iVar18 + 1;
                  puVar13[-1] = 0;
                  *puVar13 = 0;
                  puVar13[1] = 0;
                  puVar13[2] = *puVar5;
                  puVar13 = puVar13 + 4;
                } while (iVar18 < *(int *)*param_1);
              }
              lVar23 = param_1[1];
              uVar22 = uVar33 % (uint64_t)*(uint *)(lVar23 + 0x10);
              for (puVar25 = *(uint64_t **)(*(int64_t *)(lVar23 + 8) + uVar22 * 8);
                  puVar25 != (uint64_t *)0x0; puVar25 = (uint64_t *)puVar25[3]) {
                if ((uVar16 == *puVar25) && (uVar6 == puVar25[1])) {
                  lVar19 = *(int64_t *)(lVar23 + 8) + uVar22 * 8;
                  if (puVar25 != (uint64_t *)0x0) goto LAB_180280894;
                  break;
                }
              }
              plVar4 = *(int64_t **)(lVar23 + 0x30);
              uStack_b8 = 1;
              uVar15 = (int64_t)(int)plVar4[2] + 0xfU & 0xfffffffffffffff0;
              puVar25 = (uint64_t *)(*plVar4 + uVar15);
              *(int *)(plVar4 + 2) = (int)uVar15 + 0x20;
              *puVar25 = uVar16;
              puVar25[1] = uVar6;
              puVar25[2] = uStack_50;
              puVar25[3] = 0;
              puStack_60 = (uint64_t *)uVar16;
              uStack_58 = uVar6;
              FUN_18066c220(lVar23 + 0x20,acStack_a0,*(int32_t *)(lVar23 + 0x10),
                            *(int32_t *)(lVar23 + 0x18));
              if (acStack_a0[0] != '\0') {
                uVar22 = uVar33 % (uint64_t)uStack_9c;
                FUN_180285760(lVar23,uStack_9c);
              }
              puVar25[3] = *(uint64_t *)(*(int64_t *)(lVar23 + 8) + uVar22 * 8);
              *(uint64_t **)(*(int64_t *)(lVar23 + 8) + uVar22 * 8) = puVar25;
              *(int64_t *)(lVar23 + 0x18) = *(int64_t *)(lVar23 + 0x18) + 1;
              uVar24 = uStack_a4;
              lVar19 = *(int64_t *)(lVar23 + 8) + uVar22 * 8;
LAB_180280894:
              lStack_70 = lVar19;
              puStack_78 = puVar25;
              puStack_60 = puStack_78;
              uStack_58 = lStack_70;
              puVar25 = puStack_78;
              lVar23 = lStack_80;
            }
            puVar25 = (uint64_t *)(puVar25[2] + lVar31);
            lVar19 = *plStack_98;
            lVar2 = plStack_98[1];
            puVar27 = (uint *)puVar25[1];
            lVar3 = plStack_98[2];
            lVar7 = plStack_98[3];
            lVar8 = plStack_98[4];
            lVar9 = plStack_98[5];
            lVar10 = plStack_98[6];
            lVar11 = plStack_98[7];
            if (puVar27 < (uint *)puVar25[2]) {
              puVar25[1] = (uint64_t)(puVar27 + 0x14);
              *puVar27 = uVar24;
              *(int64_t *)(puVar27 + 1) = lVar19;
              *(int64_t *)(puVar27 + 3) = lVar2;
              *(int64_t *)(puVar27 + 5) = lVar3;
              *(int64_t *)(puVar27 + 7) = lVar7;
              *(int64_t *)(puVar27 + 9) = lVar8;
              *(int64_t *)(puVar27 + 0xb) = lVar9;
              *(int64_t *)(puVar27 + 0xd) = lVar10;
              *(int64_t *)(puVar27 + 0xf) = lVar11;
              *(int64_t *)(puVar27 + 0x12) = lVar23;
            }
            else {
              puVar28 = (uint *)*puVar25;
              lVar21 = ((int64_t)puVar27 - (int64_t)puVar28) / 0x50;
              if (lVar21 == 0) {
                lVar21 = 1;
LAB_180280958:
                plVar4 = (int64_t *)puVar25[3];
                uVar16 = (int64_t)((int)plVar4[2] + 0xf) & 0xfffffffffffffff0;
                *(int *)(plVar4 + 2) = (int)lVar21 * 0x50 + (int)uVar16;
                puVar29 = (uint *)(*plVar4 + uVar16);
                puVar27 = (uint *)puVar25[1];
                puVar28 = (uint *)*puVar25;
              }
              else {
                lVar21 = lVar21 * 2;
                if (lVar21 != 0) goto LAB_180280958;
                puVar29 = (uint *)0x0;
              }
              puVar14 = puVar29;
              if (puVar28 != puVar27) {
                puVar20 = puVar29 + 1;
                do {
                  puVar1 = puVar20 + 0x14;
                  *puVar14 = *(uint *)((int64_t)puVar28 + (-4 - (int64_t)puVar29) +
                                      (int64_t)puVar20);
                  puVar14 = puVar14 + 0x14;
                  puVar13 = (uint64_t *)
                            ((int64_t)puVar28 + (-0x50 - (int64_t)puVar29) + (int64_t)puVar1);
                  uVar12 = puVar13[1];
                  *(uint64_t *)puVar20 = *puVar13;
                  *(uint64_t *)(puVar20 + 2) = uVar12;
                  puVar13 = (uint64_t *)
                            ((int64_t)puVar28 + (-0x40 - (int64_t)puVar29) + (int64_t)puVar1);
                  uVar12 = puVar13[1];
                  *(uint64_t *)(puVar20 + 4) = *puVar13;
                  *(uint64_t *)(puVar20 + 6) = uVar12;
                  puVar13 = (uint64_t *)
                            ((int64_t)puVar28 + (-0x30 - (int64_t)puVar29) + (int64_t)puVar1);
                  uVar12 = puVar13[1];
                  *(uint64_t *)(puVar20 + 8) = *puVar13;
                  *(uint64_t *)(puVar20 + 10) = uVar12;
                  puVar13 = (uint64_t *)
                            ((int64_t)puVar28 + (-0x20 - (int64_t)puVar29) + (int64_t)puVar1);
                  uVar12 = puVar13[1];
                  *(uint64_t *)(puVar20 + 0xc) = *puVar13;
                  *(uint64_t *)(puVar20 + 0xe) = uVar12;
                  *(uint64_t *)(puVar20 + 0x11) =
                       *(uint64_t *)
                        ((int64_t)puVar28 + (-0xc - (int64_t)puVar29) + (int64_t)puVar1);
                  puVar17 = (uint *)((int64_t)puVar20 +
                                    (int64_t)puVar28 + (0x4c - (int64_t)puVar29));
                  puVar20 = puVar1;
                } while (puVar17 != puVar27);
              }
              *puVar14 = uVar24;
              *(int64_t *)(puVar14 + 1) = lVar19;
              *(int64_t *)(puVar14 + 3) = lVar2;
              *(int64_t *)(puVar14 + 5) = lVar3;
              *(int64_t *)(puVar14 + 7) = lVar7;
              *(int64_t *)(puVar14 + 9) = lVar8;
              *(int64_t *)(puVar14 + 0xb) = lVar9;
              *(int64_t *)(puVar14 + 0xd) = lVar10;
              *(int64_t *)(puVar14 + 0xf) = lVar11;
              *(int64_t *)(puVar14 + 0x12) = lVar23;
              puVar25[1] = (uint64_t)(puVar14 + 0x14);
              *puVar25 = (uint64_t)puVar29;
              puVar25[2] = (uint64_t)(puVar29 + lVar21 * 0x14);
            }
          }
          iVar30 = iVar30 + 1;
          uVar32 = uVar32 << 1 | (uint)((int)uVar32 < 0);
          lVar31 = lVar31 + 0x20;
          iVar26 = *(int *)*param_1;
          param_2 = plStack_90;
        } while (iVar30 < iVar26);
      }
      iStack_a8 = iStack_a8 + 1;
      lVar23 = param_2[7];
      lStack_88 = lStack_88 + 0x10;
    } while ((uint64_t)(int64_t)iStack_a8 < (uint64_t)(param_2[8] - lVar23 >> 4));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_d8);
}





// 函数: void FUN_180280648(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4,
void FUN_180280648(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4,
                  uint64_t param_5,int param_6,uint64_t param_7,int64_t *param_8,
                  int64_t *param_9,uint64_t param_10,uint64_t param_11,uint64_t *param_12,
                  int64_t param_13,uint64_t param_14,uint64_t *param_15,uint64_t param_16,
                  uint64_t param_17,uint64_t param_18)

{
  uint *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint *puVar17;
  int iVar18;
  int64_t lVar19;
  uint *puVar20;
  uint64_t unaff_RBX;
  int64_t lVar21;
  uint64_t unaff_RBP;
  uint64_t uVar22;
  int64_t lVar23;
  uint64_t *unaff_RSI;
  uint uVar24;
  uint64_t unaff_RDI;
  uint64_t *puVar25;
  int iVar26;
  uint *puVar27;
  uint *puVar28;
  int in_R10D;
  int64_t in_R11;
  uint *puVar29;
  int iVar30;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t lVar31;
  uint uVar32;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t uVar33;
  uint uStack0000000000000034;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  param_10 = 0;
  do {
    uVar24 = *(uint *)(param_3 + 8 + param_10);
    lVar23 = *(int64_t *)(param_3 + param_10);
    uStack0000000000000034 = uVar24;
    param_11 = lVar23;
    if (*(code **)(*param_4 + 0x158) == (code *)&unknown_var_2528_ptr) {
      param_8 = param_4 + 0x66;
    }
    else {
      param_8 = (int64_t *)(**(code **)(*param_4 + 0x158))(param_4);
      param_4 = param_9;
      in_R10D = param_6;
    }
    iVar30 = 0;
    iVar26 = *(int *)*unaff_RSI;
    if (0 < iVar26) {
      uVar32 = 1;
      lVar31 = 0;
      do {
        if ((uVar24 & uVar32) != 0) {
          lVar19 = unaff_RSI[1];
          lVar2 = *(int64_t *)(*(int64_t *)(lVar23 + 0x1b8) + 0xa8);
          lVar3 = *(int64_t *)(lVar19 + 8);
          uVar16 = *(uint64_t *)(lVar2 + 0xc);
          uVar6 = *(uint64_t *)(lVar2 + 0x14);
          uVar33 = uVar16 ^ uVar6;
          for (puVar25 = *(uint64_t **)(lVar3 + (uVar33 % (uint64_t)*(uint *)(lVar19 + 0x10)) * 8)
              ; puVar25 != (uint64_t *)0x0; puVar25 = (uint64_t *)puVar25[3]) {
            if ((uVar16 == *puVar25) && (uVar6 == puVar25[1])) {
              if (puVar25 != (uint64_t *)0x0) {
                lVar19 = *(int64_t *)(lVar19 + 0x10);
                goto LAB_180280743;
              }
              break;
            }
          }
          lVar19 = *(int64_t *)(lVar19 + 0x10);
          puVar25 = *(uint64_t **)(lVar3 + lVar19 * 8);
LAB_180280743:
          if (puVar25 == *(uint64_t **)(lVar3 + lVar19 * 8)) {
            plVar4 = (int64_t *)unaff_RSI[2];
            iVar18 = 0;
            param_17 = (int64_t)((int)plVar4[2] + 0xf) & 0xfffffffffffffff0;
            *(int *)(plVar4 + 2) = iVar26 * 0x20 + (int)param_17;
            param_17 = *plVar4 + param_17;
            if (0 < *(int *)*unaff_RSI) {
              puVar13 = (uint64_t *)(param_17 + 8);
              do {
                puVar5 = (uint64_t *)unaff_RSI[3];
                iVar18 = iVar18 + 1;
                puVar13[-1] = 0;
                *puVar13 = 0;
                puVar13[1] = 0;
                puVar13[2] = *puVar5;
                puVar13 = puVar13 + 4;
              } while (iVar18 < *(int *)*unaff_RSI);
            }
            lVar23 = unaff_RSI[1];
            uVar22 = uVar33 % (uint64_t)*(uint *)(lVar23 + 0x10);
            for (puVar25 = *(uint64_t **)(*(int64_t *)(lVar23 + 8) + uVar22 * 8);
                puVar25 != (uint64_t *)0x0; puVar25 = (uint64_t *)puVar25[3]) {
              if ((uVar16 == *puVar25) && (uVar6 == puVar25[1])) {
                lVar19 = *(int64_t *)(lVar23 + 8) + uVar22 * 8;
                if (puVar25 != (uint64_t *)0x0) goto LAB_180280894;
                break;
              }
            }
            plVar4 = *(int64_t **)(lVar23 + 0x30);
            uVar15 = (int64_t)(int)plVar4[2] + 0xfU & 0xfffffffffffffff0;
            puVar25 = (uint64_t *)(*plVar4 + uVar15);
            *(int *)(plVar4 + 2) = (int)uVar15 + 0x20;
            *puVar25 = uVar16;
            puVar25[1] = uVar6;
            puVar25[2] = param_17;
            puVar25[3] = 0;
            param_15 = (uint64_t *)uVar16;
            param_16 = uVar6;
            FUN_18066c220(lVar23 + 0x20,&param_7,*(int32_t *)(lVar23 + 0x10),
                          *(int32_t *)(lVar23 + 0x18),1);
            if ((char)param_7 != '\0') {
              uVar22 = uVar33 % (uint64_t)param_7._4_4_;
              FUN_180285760(lVar23,param_7._4_4_);
            }
            puVar25[3] = *(uint64_t *)(*(int64_t *)(lVar23 + 8) + uVar22 * 8);
            *(uint64_t **)(*(int64_t *)(lVar23 + 8) + uVar22 * 8) = puVar25;
            *(int64_t *)(lVar23 + 0x18) = *(int64_t *)(lVar23 + 0x18) + 1;
            uVar24 = uStack0000000000000034;
            lVar19 = *(int64_t *)(lVar23 + 8) + uVar22 * 8;
LAB_180280894:
            param_13 = lVar19;
            param_12 = puVar25;
            param_15 = param_12;
            param_16 = param_13;
            puVar25 = param_12;
            lVar23 = param_11;
          }
          puVar25 = (uint64_t *)(puVar25[2] + lVar31);
          lVar19 = *param_8;
          lVar2 = param_8[1];
          puVar27 = (uint *)puVar25[1];
          lVar3 = param_8[2];
          lVar7 = param_8[3];
          lVar8 = param_8[4];
          lVar9 = param_8[5];
          lVar10 = param_8[6];
          lVar11 = param_8[7];
          if (puVar27 < (uint *)puVar25[2]) {
            puVar25[1] = (uint64_t)(puVar27 + 0x14);
            *puVar27 = uVar24;
            *(int64_t *)(puVar27 + 1) = lVar19;
            *(int64_t *)(puVar27 + 3) = lVar2;
            *(int64_t *)(puVar27 + 5) = lVar3;
            *(int64_t *)(puVar27 + 7) = lVar7;
            *(int64_t *)(puVar27 + 9) = lVar8;
            *(int64_t *)(puVar27 + 0xb) = lVar9;
            *(int64_t *)(puVar27 + 0xd) = lVar10;
            *(int64_t *)(puVar27 + 0xf) = lVar11;
            *(int64_t *)(puVar27 + 0x12) = lVar23;
          }
          else {
            puVar28 = (uint *)*puVar25;
            lVar21 = ((int64_t)puVar27 - (int64_t)puVar28) / 0x50;
            if (lVar21 == 0) {
              lVar21 = 1;
LAB_180280958:
              plVar4 = (int64_t *)puVar25[3];
              uVar16 = (int64_t)((int)plVar4[2] + 0xf) & 0xfffffffffffffff0;
              *(int *)(plVar4 + 2) = (int)lVar21 * 0x50 + (int)uVar16;
              puVar29 = (uint *)(*plVar4 + uVar16);
              puVar27 = (uint *)puVar25[1];
              puVar28 = (uint *)*puVar25;
            }
            else {
              lVar21 = lVar21 * 2;
              if (lVar21 != 0) goto LAB_180280958;
              puVar29 = (uint *)0x0;
            }
            puVar14 = puVar29;
            if (puVar28 != puVar27) {
              puVar20 = puVar29 + 1;
              do {
                puVar1 = puVar20 + 0x14;
                *puVar14 = *(uint *)((int64_t)puVar28 + (-4 - (int64_t)puVar29) +
                                    (int64_t)puVar20);
                puVar14 = puVar14 + 0x14;
                puVar13 = (uint64_t *)
                          ((int64_t)puVar28 + (-0x50 - (int64_t)puVar29) + (int64_t)puVar1);
                uVar12 = puVar13[1];
                *(uint64_t *)puVar20 = *puVar13;
                *(uint64_t *)(puVar20 + 2) = uVar12;
                puVar13 = (uint64_t *)
                          ((int64_t)puVar28 + (-0x40 - (int64_t)puVar29) + (int64_t)puVar1);
                uVar12 = puVar13[1];
                *(uint64_t *)(puVar20 + 4) = *puVar13;
                *(uint64_t *)(puVar20 + 6) = uVar12;
                puVar13 = (uint64_t *)
                          ((int64_t)puVar28 + (-0x30 - (int64_t)puVar29) + (int64_t)puVar1);
                uVar12 = puVar13[1];
                *(uint64_t *)(puVar20 + 8) = *puVar13;
                *(uint64_t *)(puVar20 + 10) = uVar12;
                puVar13 = (uint64_t *)
                          ((int64_t)puVar28 + (-0x20 - (int64_t)puVar29) + (int64_t)puVar1);
                uVar12 = puVar13[1];
                *(uint64_t *)(puVar20 + 0xc) = *puVar13;
                *(uint64_t *)(puVar20 + 0xe) = uVar12;
                *(uint64_t *)(puVar20 + 0x11) =
                     *(uint64_t *)
                      ((int64_t)puVar28 + (-0xc - (int64_t)puVar29) + (int64_t)puVar1);
                puVar17 = (uint *)((int64_t)puVar20 +
                                  (int64_t)puVar28 + (0x4c - (int64_t)puVar29));
                puVar20 = puVar1;
              } while (puVar17 != puVar27);
            }
            *puVar14 = uVar24;
            *(int64_t *)(puVar14 + 1) = lVar19;
            *(int64_t *)(puVar14 + 3) = lVar2;
            *(int64_t *)(puVar14 + 5) = lVar3;
            *(int64_t *)(puVar14 + 7) = lVar7;
            *(int64_t *)(puVar14 + 9) = lVar8;
            *(int64_t *)(puVar14 + 0xb) = lVar9;
            *(int64_t *)(puVar14 + 0xd) = lVar10;
            *(int64_t *)(puVar14 + 0xf) = lVar11;
            *(int64_t *)(puVar14 + 0x12) = lVar23;
            puVar25[1] = (uint64_t)(puVar14 + 0x14);
            *puVar25 = (uint64_t)puVar29;
            puVar25[2] = (uint64_t)(puVar29 + lVar21 * 0x14);
          }
        }
        iVar30 = iVar30 + 1;
        uVar32 = uVar32 << 1 | (uint)((int)uVar32 < 0);
        lVar31 = lVar31 + 0x20;
        iVar26 = *(int *)*unaff_RSI;
        param_4 = param_9;
        in_R10D = param_6;
      } while (iVar30 < iVar26);
    }
    in_R10D = in_R10D + 1;
    param_3 = param_4[7];
    param_10 = param_10 + 0x10;
    param_6 = in_R10D;
    if ((uint64_t)(param_4[8] - param_3 >> 4) <= (uint64_t)(int64_t)in_R10D) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(param_18 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_180280a9f(void)
void FUN_180280a9f(void)

{
  uint64_t in_stack_00000090;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}






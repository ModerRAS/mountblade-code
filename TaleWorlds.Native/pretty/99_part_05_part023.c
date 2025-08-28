#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part023.c - 2 个函数

// 函数: void FUN_1802e7e20(int64_t param_1)
void FUN_1802e7e20(int64_t param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char cVar23;
  int iVar24;
  int iVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  float *pfVar28;
  int64_t lVar29;
  int64_t lVar30;
  uint *puVar31;
  int64_t lVar32;
  int64_t lVar33;
  int iVar34;
  int64_t *plVar35;
  int32_t uVar36;
  int8_t auStack_178 [32];
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint64_t uStack_70;
  
  uStack_70 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  lVar29 = *(int64_t *)(param_1 + 0x28);
  *(uint64_t *)(lVar29 + 0xf8) = 0x4cbebc204cbebc20;
  *(uint64_t *)(lVar29 + 0x100) = 0x7f7fffff4cbebc20;
  *(int32_t *)(lVar29 + 0x118) = 0;
  *(int32_t *)(lVar29 + 0x11c) = 0;
  *(int32_t *)(lVar29 + 0x120) = 0;
  *(int32_t *)(lVar29 + 0x124) = 0x7f7fffff;
  *(int32_t *)(lVar29 + 0x128) = 0;
  *(int32_t *)(lVar29 + 0x108) = 0xccbebc20;
  *(int32_t *)(lVar29 + 0x10c) = 0xccbebc20;
  *(int32_t *)(lVar29 + 0x110) = 0xccbebc20;
  *(int32_t *)(lVar29 + 0x114) = 0x7f7fffff;
  plVar35 = *(int64_t **)(param_1 + 0x1c0);
  if (plVar35 < *(int64_t **)(param_1 + 0x1c8)) {
    do {
      lVar29 = *plVar35;
      if ((*(uint *)(lVar29 + 0x2ac) & 0x1000) == 0) {
        lVar33 = *(int64_t *)(param_1 + 0x28);
        FUN_1802e7dc0(lVar29);
        FUN_18063a240(lVar33 + 0xf8,*(int64_t *)(lVar29 + 0x28) + 0xf8,lVar29 + 0x30);
      }
      plVar35 = plVar35 + 1;
    } while (plVar35 < *(int64_t **)(param_1 + 0x1c8));
  }
  lVar29 = *(int64_t *)(param_1 + 0xf0);
  iVar34 = 0;
  if (*(int64_t *)(param_1 + 0xf8) - lVar29 >> 3 != 0) {
    lVar33 = 0;
    do {
      cVar23 = (**(code **)(**(int64_t **)(lVar33 + lVar29) + 0xc0))();
      if (cVar23 == '\0') {
        iVar24 = (**(code **)(*(int64_t *)**(uint64_t **)(param_1 + 0xf0) + 0x98))();
        if (iVar24 == 1) {
          FUN_1803e0e00((int64_t *)**(uint64_t **)(param_1 + 0xf0),param_1 + 0x70);
        }
        else {
          iVar24 = (**(code **)(*(int64_t *)**(uint64_t **)(param_1 + 0xf0) + 0x98))();
          if (iVar24 == 2) {
            iVar24 = 0;
            lVar29 = **(int64_t **)(param_1 + 0xf0);
            lVar30 = *(int64_t *)(lVar29 + 0x30);
            if (*(int64_t *)(lVar29 + 0x38) - lVar30 >> 3 != 0) {
              lVar32 = 0;
              do {
                plVar35 = *(int64_t **)(lVar32 + lVar30);
                iVar25 = (**(code **)(*plVar35 + 0x98))(plVar35);
                if (iVar25 == 1) {
                  FUN_1803e0e00(plVar35,param_1 + 0x70);
                }
                lVar30 = *(int64_t *)(lVar29 + 0x30);
                iVar24 = iVar24 + 1;
                lVar32 = lVar32 + 8;
              } while ((uint64_t)(int64_t)iVar24 <
                       (uint64_t)(*(int64_t *)(lVar29 + 0x38) - lVar30 >> 3));
            }
          }
        }
        lVar29 = *(int64_t *)(param_1 + 0x28);
        uVar26 = (**(code **)(**(int64_t **)(lVar33 + *(int64_t *)(param_1 + 0xf0)) + 0x158))();
        uVar27 = (**(code **)(**(int64_t **)(lVar33 + *(int64_t *)(param_1 + 0xf0)) + 0x198))();
        FUN_18063a240(lVar29 + 0xf8,uVar27,uVar26);
      }
      lVar29 = *(int64_t *)(param_1 + 0xf0);
      iVar34 = iVar34 + 1;
      lVar33 = lVar33 + 8;
    } while ((uint64_t)(int64_t)iVar34 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar29 >> 3))
    ;
  }
  lVar29 = *(int64_t *)(param_1 + 0x260);
  if (lVar29 != 0) {
    if ((*(byte *)(lVar29 + 0xa8) >> 2 & 1) == 0) {
      lVar29 = *(int64_t *)(lVar29 + 0x208);
      lVar33 = *(int64_t *)(param_1 + 0x28);
      fVar2 = *(float *)(lVar29 + 0x178);
      if (fVar2 < *(float *)(lVar29 + 0x188) || fVar2 == *(float *)(lVar29 + 0x188)) {
        if (fVar2 < *(float *)(lVar33 + 0xf8)) {
          *(float *)(lVar33 + 0xf8) = fVar2;
        }
        if (*(float *)(lVar29 + 0x17c) < *(float *)(lVar33 + 0xfc)) {
          *(float *)(lVar33 + 0xfc) = *(float *)(lVar29 + 0x17c);
        }
        if (*(float *)(lVar29 + 0x180) < *(float *)(lVar33 + 0x100)) {
          *(float *)(lVar33 + 0x100) = *(float *)(lVar29 + 0x180);
        }
        fVar2 = *(float *)(lVar29 + 0x188);
        if (*(float *)(lVar33 + 0x108) <= fVar2 && fVar2 != *(float *)(lVar33 + 0x108)) {
          *(float *)(lVar33 + 0x108) = fVar2;
        }
        fVar2 = *(float *)(lVar29 + 0x18c);
        if (*(float *)(lVar33 + 0x10c) <= fVar2 && fVar2 != *(float *)(lVar33 + 0x10c)) {
          *(float *)(lVar33 + 0x10c) = fVar2;
        }
        fVar2 = *(float *)(lVar29 + 400);
        if (*(float *)(lVar33 + 0x110) <= fVar2 && fVar2 != *(float *)(lVar33 + 0x110)) {
          *(float *)(lVar33 + 0x110) = fVar2;
        }
      }
    }
    else {
      uStack_108 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      FUN_1802fe910(lVar29,&uStack_138);
      lVar29 = *(int64_t *)(param_1 + 0x28);
      if ((float)uStack_138 <= (float)uStack_128) {
        if ((float)uStack_138 < *(float *)(lVar29 + 0xf8)) {
          *(float *)(lVar29 + 0xf8) = (float)uStack_138;
        }
        if (uStack_138._4_4_ < *(float *)(lVar29 + 0xfc)) {
          *(float *)(lVar29 + 0xfc) = uStack_138._4_4_;
        }
        if ((float)uStack_130 < *(float *)(lVar29 + 0x100)) {
          *(float *)(lVar29 + 0x100) = (float)uStack_130;
        }
        if (*(float *)(lVar29 + 0x108) <= (float)uStack_128 &&
            (float)uStack_128 != *(float *)(lVar29 + 0x108)) {
          *(float *)(lVar29 + 0x108) = (float)uStack_128;
        }
        if (*(float *)(lVar29 + 0x10c) <= uStack_128._4_4_ &&
            uStack_128._4_4_ != *(float *)(lVar29 + 0x10c)) {
          *(float *)(lVar29 + 0x10c) = uStack_128._4_4_;
        }
        if (*(float *)(lVar29 + 0x110) <= (float)uStack_120 &&
            (float)uStack_120 != *(float *)(lVar29 + 0x110)) {
          *(float *)(lVar29 + 0x110) = (float)uStack_120;
        }
      }
    }
    lVar29 = *(int64_t *)(param_1 + 0x260);
    cVar23 = '\0';
    if ('\0' < *(char *)(lVar29 + 0x20)) {
      do {
        iVar34 = 0;
        puVar31 = (uint *)((int64_t)cVar23 * 0x100 + *(int64_t *)(lVar29 + 0x18));
        lVar29 = *(int64_t *)(puVar31 + 0x2c);
        if (*(int64_t *)(puVar31 + 0x2e) - lVar29 >> 3 != 0) {
          lVar33 = 0;
          do {
            plVar35 = *(int64_t **)(lVar33 + lVar29);
            lVar29 = *(int64_t *)(param_1 + 0x28);
            do {
              LOCK();
              uVar1 = *puVar31;
              *puVar31 = *puVar31 | 1;
              UNLOCK();
            } while ((uVar1 & 1) != 0);
            uStack_158 = puVar31[1];
            uStack_154 = puVar31[2];
            uStack_150 = puVar31[3];
            uStack_14c = puVar31[4];
            fVar7 = (float)puVar31[5];
            fVar8 = (float)puVar31[6];
            fVar9 = (float)puVar31[7];
            fVar10 = (float)puVar31[8];
            *puVar31 = 0;
            fStack_148 = fVar7;
            fStack_144 = fVar8;
            fStack_140 = fVar9;
            fStack_13c = fVar10;
            uStack_90 = uStack_158;
            uStack_8c = uStack_154;
            uStack_88 = uStack_150;
            uStack_84 = uStack_14c;
            fStack_80 = fVar7;
            fStack_7c = fVar8;
            fStack_78 = fVar9;
            fStack_74 = fVar10;
            FUN_18063b5f0(&fStack_100,&uStack_158);
            fVar22 = fStack_d4;
            fVar21 = fStack_d8;
            fVar20 = fStack_dc;
            fVar19 = fStack_e0;
            fVar18 = fStack_e4;
            fVar17 = fStack_e8;
            fVar16 = fStack_ec;
            fVar15 = fStack_f0;
            fVar14 = fStack_f4;
            fVar13 = fStack_f8;
            fVar12 = fStack_fc;
            fVar11 = fStack_100;
            pfVar28 = (float *)(**(code **)(*plVar35 + 0x158))(plVar35);
            fVar2 = pfVar28[1];
            fVar3 = *pfVar28;
            fVar4 = pfVar28[2];
            fVar5 = pfVar28[5];
            fVar6 = pfVar28[4];
            fStack_d0 = fVar2 * fVar15 + fVar3 * fVar11 + fVar4 * fVar19;
            fStack_cc = fVar2 * fVar16 + fVar3 * fVar12 + fVar4 * fVar20;
            fStack_c8 = fVar2 * fVar17 + fVar3 * fVar13 + fVar4 * fVar21;
            fStack_c4 = fVar2 * fVar18 + fVar3 * fVar14 + fVar4 * fVar22;
            fVar2 = pfVar28[6];
            fVar3 = pfVar28[8];
            fVar4 = pfVar28[9];
            fStack_c0 = fVar5 * fVar15 + fVar6 * fVar11 + fVar2 * fVar19;
            fStack_bc = fVar5 * fVar16 + fVar6 * fVar12 + fVar2 * fVar20;
            fStack_b8 = fVar5 * fVar17 + fVar6 * fVar13 + fVar2 * fVar21;
            fStack_b4 = fVar5 * fVar18 + fVar6 * fVar14 + fVar2 * fVar22;
            fVar2 = pfVar28[10];
            fVar5 = pfVar28[0xd];
            fVar6 = pfVar28[0xc];
            fStack_b0 = fVar4 * fVar15 + fVar3 * fVar11 + fVar2 * fVar19;
            fStack_ac = fVar4 * fVar16 + fVar3 * fVar12 + fVar2 * fVar20;
            fStack_a8 = fVar4 * fVar17 + fVar3 * fVar13 + fVar2 * fVar21;
            fStack_a4 = fVar4 * fVar18 + fVar3 * fVar14 + fVar2 * fVar22;
            fVar2 = pfVar28[0xe];
            fStack_a0 = fVar5 * fVar15 + fVar6 * fVar11 + fVar2 * fVar19 + fVar7;
            fStack_9c = fVar5 * fVar16 + fVar6 * fVar12 + fVar2 * fVar20 + fVar8;
            fStack_98 = fVar5 * fVar17 + fVar6 * fVar13 + fVar2 * fVar21 + fVar9;
            fStack_94 = fVar5 * fVar18 + fVar6 * fVar14 + fVar2 * fVar22 + fVar10;
            uVar26 = (**(code **)(*plVar35 + 0x198))(plVar35);
            FUN_18063a240(lVar29 + 0xf8,uVar26,&fStack_d0);
            lVar29 = *(int64_t *)(puVar31 + 0x2c);
            iVar34 = iVar34 + 1;
            lVar33 = lVar33 + 8;
          } while ((uint64_t)(int64_t)iVar34 <
                   (uint64_t)(*(int64_t *)(puVar31 + 0x2e) - lVar29 >> 3));
        }
        lVar29 = *(int64_t *)(param_1 + 0x260);
        cVar23 = cVar23 + '\x01';
      } while (cVar23 < *(char *)(lVar29 + 0x20));
    }
  }
  if (((*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) & 0xfffffffffffffff8U) == 0)
     && (lVar29 == 0)) {
    lVar33 = *(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3;
    if (lVar33 != 0) {
      lVar29 = *(int64_t *)(param_1 + 0x28);
      if (*(float *)(lVar29 + 0xf8) <= *(float *)(lVar29 + 0x108)) {
        if (lVar33 == 1) {
          *(float *)(lVar29 + 0x118) =
               (*(float *)(lVar29 + 0x108) + *(float *)(lVar29 + 0xf8)) * 0.5;
          *(float *)(lVar29 + 0x11c) =
               (*(float *)(lVar29 + 0x10c) + *(float *)(lVar29 + 0xfc)) * 0.5;
          *(float *)(lVar29 + 0x120) =
               (*(float *)(lVar29 + 0x110) + *(float *)(lVar29 + 0x100)) * 0.5;
          *(int32_t *)(lVar29 + 0x124) = 0x7f7fffff;
          iVar34 = (**(code **)(*(int64_t *)**(uint64_t **)(param_1 + 0xf0) + 0x98))();
          plVar35 = (int64_t *)**(int64_t **)(param_1 + 0xf0);
          if (iVar34 == 1) {
            *(int *)(*(int64_t *)(param_1 + 0x28) + 0x128) = (int)plVar35[6];
          }
          else {
            lVar29 = (**(code **)(*plVar35 + 0x198))(plVar35);
            uVar36 = *(int32_t *)(lVar29 + 0x30);
            uVar26 = (**(code **)(*(int64_t *)**(uint64_t **)(param_1 + 0xf0) + 0x158))();
            uVar36 = func_0x000180285a90(uVar26,uVar36);
            *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x128) = uVar36;
          }
          goto LAB_1802e8530;
        }
        goto LAB_1802e8524;
      }
    }
    lVar29 = *(int64_t *)(param_1 + 0x28);
    *(int32_t *)(lVar29 + 0x128) = 0;
    *(uint64_t *)(lVar29 + 0xf8) = 0;
    *(uint64_t *)(lVar29 + 0x100) = 0;
    *(uint64_t *)(lVar29 + 0x108) = 0;
    *(uint64_t *)(lVar29 + 0x110) = 0;
    *(uint64_t *)(lVar29 + 0x118) = 0;
    *(uint64_t *)(lVar29 + 0x120) = 0;
  }
  else {
    lVar29 = *(int64_t *)(param_1 + 0x28);
LAB_1802e8524:
    FUN_1800b9f60(lVar29 + 0xf8);
  }
LAB_1802e8530:
  *(int16_t *)(param_1 + 0x2b4) = *(int16_t *)(param_1 + 0x2b0);
  FUN_18063ad30(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0xf8,param_1 + 0x70);
  *(int16_t *)(param_1 + 0x2b6) = *(int16_t *)(param_1 + 0x2b2);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_70 ^ (uint64_t)auStack_178);
}






// 函数: void FUN_1802e7e53(int64_t param_1,uint64_t param_2)
void FUN_1802e7e53(int64_t param_1,uint64_t param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  int32_t uVar26;
  int32_t uVar27;
  char cVar28;
  int iVar29;
  int iVar30;
  int64_t in_RAX;
  uint64_t uVar31;
  uint64_t uVar32;
  float *pfVar33;
  int64_t lVar34;
  int64_t lVar35;
  uint64_t unaff_RBX;
  uint *puVar36;
  float *unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar37;
  int64_t in_R11;
  int64_t lVar38;
  int iVar39;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  int64_t *plVar40;
  int32_t uVar41;
  uint64_t in_XMM0_Qa;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  float fVar42;
  float fVar43;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Dc;
  float fVar44;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  int32_t in_stack_00000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  int32_t in_stack_00000110;
  int32_t in_stack_00000118;
  int32_t in_stack_00000120;
  int32_t in_stack_00000128;
  int32_t in_stack_00000130;
  int32_t in_stack_00000138;
  int32_t in_stack_00000140;
  int32_t in_stack_00000148;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(int *)(in_RAX + 0xf8) = (int)in_XMM0_Qa;
  *(int *)(in_RAX + 0xfc) = (int)((uint64_t)in_XMM0_Qa >> 0x20);
  *(int32_t *)(in_RAX + 0x100) = in_XMM0_Dc;
  *(int32_t *)(in_RAX + 0x104) = in_XMM0_Dd;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(int32_t *)(in_RAX + 0x118) = 0;
  *(int32_t *)(in_RAX + 0x11c) = 0;
  *(int32_t *)(in_RAX + 0x120) = 0;
  *(int32_t *)(in_RAX + 0x124) = 0x7f7fffff;
  *(int32_t *)(in_RAX + 0x128) = 0;
  *(int *)(in_RAX + 0x108) = (int)param_2;
  *(int *)(in_RAX + 0x10c) = (int)((uint64_t)param_2 >> 0x20);
  *(int32_t *)(in_RAX + 0x110) = in_XMM1_Dc;
  *(int32_t *)(in_RAX + 0x114) = in_XMM1_Dd;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  plVar40 = *(int64_t **)(param_1 + 0x1c0);
  if (plVar40 < *(int64_t **)(param_1 + 0x1c8)) {
    do {
      lVar34 = *plVar40;
      if ((*(uint *)(lVar34 + 0x2ac) & 0x1000) == 0) {
        lVar38 = *(int64_t *)(unaff_RSI + 0x28);
        FUN_1802e7dc0(lVar34);
        FUN_18063a240(lVar38 + 0xf8,*(int64_t *)(lVar34 + 0x28) + 0xf8,lVar34 + 0x30);
      }
      plVar40 = plVar40 + 1;
    } while (plVar40 < *(int64_t **)(unaff_RSI + 0x1c8));
  }
  lVar34 = *(int64_t *)(unaff_RSI + 0xf0);
  iVar39 = 0;
  if (*(int64_t *)(unaff_RSI + 0xf8) - lVar34 >> 3 != 0) {
    lVar38 = 0;
    do {
      cVar28 = (**(code **)(**(int64_t **)(lVar38 + lVar34) + 0xc0))();
      if (cVar28 == '\0') {
        iVar29 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x98))();
        if (iVar29 == 1) {
          FUN_1803e0e00((int64_t *)**(uint64_t **)(unaff_RSI + 0xf0),unaff_RSI + 0x70);
        }
        else {
          iVar29 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x98))();
          if (iVar29 == 2) {
            iVar29 = 0;
            lVar34 = **(int64_t **)(unaff_RSI + 0xf0);
            lVar35 = *(int64_t *)(lVar34 + 0x30);
            if (*(int64_t *)(lVar34 + 0x38) - lVar35 >> 3 != 0) {
              lVar37 = 0;
              do {
                plVar40 = *(int64_t **)(lVar37 + lVar35);
                iVar30 = (**(code **)(*plVar40 + 0x98))(plVar40);
                if (iVar30 == 1) {
                  FUN_1803e0e00(plVar40,unaff_RSI + 0x70);
                }
                lVar35 = *(int64_t *)(lVar34 + 0x30);
                iVar29 = iVar29 + 1;
                lVar37 = lVar37 + 8;
              } while ((uint64_t)(int64_t)iVar29 <
                       (uint64_t)(*(int64_t *)(lVar34 + 0x38) - lVar35 >> 3));
            }
          }
        }
        lVar34 = *(int64_t *)(unaff_RSI + 0x28);
        uVar31 = (**(code **)(**(int64_t **)(lVar38 + *(int64_t *)(unaff_RSI + 0xf0)) + 0x158))();
        uVar32 = (**(code **)(**(int64_t **)(lVar38 + *(int64_t *)(unaff_RSI + 0xf0)) + 0x198))();
        FUN_18063a240(lVar34 + 0xf8,uVar32,uVar31);
      }
      lVar34 = *(int64_t *)(unaff_RSI + 0xf0);
      iVar39 = iVar39 + 1;
      lVar38 = lVar38 + 8;
    } while ((uint64_t)(int64_t)iVar39 <
             (uint64_t)(*(int64_t *)(unaff_RSI + 0xf8) - lVar34 >> 3));
  }
  lVar34 = *(int64_t *)(unaff_RSI + 0x260);
  if (lVar34 != 0) {
    if ((*(byte *)(lVar34 + 0xa8) >> 2 & 1) == 0) {
      lVar34 = *(int64_t *)(lVar34 + 0x208);
      lVar38 = *(int64_t *)(unaff_RSI + 0x28);
      fVar2 = *(float *)(lVar34 + 0x178);
      if (fVar2 < *(float *)(lVar34 + 0x188) || fVar2 == *(float *)(lVar34 + 0x188)) {
        if (fVar2 < *(float *)(lVar38 + 0xf8)) {
          *(float *)(lVar38 + 0xf8) = fVar2;
        }
        if (*(float *)(lVar34 + 0x17c) < *(float *)(lVar38 + 0xfc)) {
          *(float *)(lVar38 + 0xfc) = *(float *)(lVar34 + 0x17c);
        }
        if (*(float *)(lVar34 + 0x180) < *(float *)(lVar38 + 0x100)) {
          *(float *)(lVar38 + 0x100) = *(float *)(lVar34 + 0x180);
        }
        fVar2 = *(float *)(lVar34 + 0x188);
        if (*(float *)(lVar38 + 0x108) <= fVar2 && fVar2 != *(float *)(lVar38 + 0x108)) {
          *(float *)(lVar38 + 0x108) = fVar2;
        }
        fVar2 = *(float *)(lVar34 + 0x18c);
        if (*(float *)(lVar38 + 0x10c) <= fVar2 && fVar2 != *(float *)(lVar38 + 0x10c)) {
          *(float *)(lVar38 + 0x10c) = fVar2;
        }
        fVar2 = *(float *)(lVar34 + 400);
        if (*(float *)(lVar38 + 0x110) <= fVar2 && fVar2 != *(float *)(lVar38 + 0x110)) {
          *(float *)(lVar38 + 0x110) = fVar2;
        }
      }
    }
    else {
      in_stack_00000070 = 0;
      _fStack0000000000000040 = 0;
      _fStack0000000000000048 = 0;
      _fStack0000000000000050 = 0;
      _fStack0000000000000058 = 0;
      in_stack_00000060 = 0;
      in_stack_00000068 = 0;
      FUN_1802fe910(lVar34,&stack0x00000040);
      lVar34 = *(int64_t *)(unaff_RSI + 0x28);
      if (fStack0000000000000040 <= fStack0000000000000050) {
        if (fStack0000000000000040 < *(float *)(lVar34 + 0xf8)) {
          *(float *)(lVar34 + 0xf8) = fStack0000000000000040;
        }
        if (fStack0000000000000044 < *(float *)(lVar34 + 0xfc)) {
          *(float *)(lVar34 + 0xfc) = fStack0000000000000044;
        }
        if (fStack0000000000000048 < *(float *)(lVar34 + 0x100)) {
          *(float *)(lVar34 + 0x100) = fStack0000000000000048;
        }
        if (*(float *)(lVar34 + 0x108) <= fStack0000000000000050 &&
            fStack0000000000000050 != *(float *)(lVar34 + 0x108)) {
          *(float *)(lVar34 + 0x108) = fStack0000000000000050;
        }
        if (*(float *)(lVar34 + 0x10c) <= fStack0000000000000054 &&
            fStack0000000000000054 != *(float *)(lVar34 + 0x10c)) {
          *(float *)(lVar34 + 0x10c) = fStack0000000000000054;
        }
        if (*(float *)(lVar34 + 0x110) <= fStack0000000000000058 &&
            fStack0000000000000058 != *(float *)(lVar34 + 0x110)) {
          *(float *)(lVar34 + 0x110) = fStack0000000000000058;
        }
      }
    }
    lVar34 = *(int64_t *)(unaff_RSI + 0x260);
    cVar28 = '\0';
    uVar41 = unaff_XMM9_Da;
    uVar23 = unaff_XMM9_Dc;
    uVar24 = unaff_XMM8_Da;
    uVar25 = unaff_XMM8_Dc;
    uVar26 = unaff_XMM7_Da;
    uVar27 = unaff_XMM7_Dc;
    if ('\0' < *(char *)(lVar34 + 0x20)) {
      do {
        in_stack_00000138 = uVar27;
        in_stack_00000130 = uVar26;
        in_stack_00000128 = uVar25;
        in_stack_00000120 = uVar24;
        in_stack_00000118 = uVar23;
        in_stack_00000110 = uVar41;
        iVar39 = 0;
        puVar36 = (uint *)((int64_t)cVar28 * 0x100 + *(int64_t *)(lVar34 + 0x18));
        lVar34 = *(int64_t *)(puVar36 + 0x2c);
        if (*(int64_t *)(puVar36 + 0x2e) - lVar34 >> 3 != 0) {
          lVar38 = 0;
          do {
            plVar40 = *(int64_t **)(lVar38 + lVar34);
            lVar34 = *(int64_t *)(unaff_RSI + 0x28);
            do {
              LOCK();
              uVar1 = *puVar36;
              *puVar36 = *puVar36 | 1;
              UNLOCK();
            } while ((uVar1 & 1) != 0);
            fVar44 = (float)puVar36[1];
            fVar2 = (float)puVar36[2];
            fVar3 = (float)puVar36[3];
            fVar4 = (float)puVar36[4];
            fVar43 = (float)puVar36[5];
            fVar8 = (float)puVar36[6];
            fVar9 = (float)puVar36[7];
            fVar10 = (float)puVar36[8];
            unaff_RBP[-6] = fVar44;
            unaff_RBP[-5] = fVar2;
            unaff_RBP[-4] = fVar3;
            unaff_RBP[-3] = fVar4;
            unaff_RBP[-2] = fVar43;
            unaff_RBP[-1] = fVar8;
            *unaff_RBP = fVar9;
            unaff_RBP[1] = fVar10;
            *puVar36 = 0;
            FUN_18063b5f0(&stack0x00000078,&stack0x00000020);
            fVar22 = fStack0000000000000084;
            fVar21 = fStack0000000000000080;
            fVar20 = fStack000000000000007c;
            fVar19 = fStack0000000000000078;
            fVar11 = unaff_RBP[-0x1e];
            fVar12 = unaff_RBP[-0x1d];
            fVar13 = unaff_RBP[-0x1c];
            fVar14 = unaff_RBP[-0x1b];
            fVar15 = unaff_RBP[-0x1a];
            fVar16 = unaff_RBP[-0x19];
            fVar17 = unaff_RBP[-0x18];
            fVar18 = unaff_RBP[-0x17];
            pfVar33 = (float *)(**(code **)(*plVar40 + 0x158))(plVar40);
            fVar2 = pfVar33[1];
            fVar3 = *pfVar33;
            fVar4 = pfVar33[2];
            fVar5 = pfVar33[5];
            fVar6 = pfVar33[4];
            fVar42 = pfVar33[6];
            fVar7 = pfVar33[8];
            unaff_RBP[-0x16] = fVar2 * fVar11 + fVar3 * fVar19 + fVar4 * fVar15;
            unaff_RBP[-0x15] = fVar2 * fVar12 + fVar3 * fVar20 + fVar4 * fVar16;
            unaff_RBP[-0x14] = fVar2 * fVar13 + fVar3 * fVar21 + fVar4 * fVar17;
            unaff_RBP[-0x13] = fVar2 * fVar14 + fVar3 * fVar22 + fVar4 * fVar18;
            fVar2 = pfVar33[9];
            fVar3 = pfVar33[10];
            unaff_RBP[-0x12] = fVar5 * fVar11 + fVar6 * fVar19 + fVar42 * fVar15;
            unaff_RBP[-0x11] = fVar5 * fVar12 + fVar6 * fVar20 + fVar42 * fVar16;
            unaff_RBP[-0x10] = fVar5 * fVar13 + fVar6 * fVar21 + fVar42 * fVar17;
            unaff_RBP[-0xf] = fVar5 * fVar14 + fVar6 * fVar22 + fVar42 * fVar18;
            fVar4 = pfVar33[0xd];
            fVar5 = pfVar33[0xc];
            fVar42 = fVar2 * fVar11 + fVar7 * fVar19 + fVar3 * fVar15;
            fVar6 = pfVar33[0xe];
            lVar35 = *plVar40;
            unaff_RBP[-0xe] = fVar42;
            unaff_RBP[-0xd] = fVar2 * fVar12 + fVar7 * fVar20 + fVar3 * fVar16;
            unaff_RBP[-0xc] = fVar2 * fVar13 + fVar7 * fVar21 + fVar3 * fVar17;
            unaff_RBP[-0xb] = fVar2 * fVar14 + fVar7 * fVar22 + fVar3 * fVar18;
            fVar43 = fVar4 * fVar11 + fVar5 * fVar19 + fVar6 * fVar15 + fVar43;
            unaff_RBP[-10] = fVar43;
            unaff_RBP[-9] = fVar4 * fVar12 + fVar5 * fVar20 + fVar6 * fVar16 + fVar8;
            unaff_RBP[-8] = fVar4 * fVar13 + fVar5 * fVar21 + fVar6 * fVar17 + fVar9;
            unaff_RBP[-7] = fVar4 * fVar14 + fVar5 * fVar22 + fVar6 * fVar18 + fVar10;
            uVar31 = (**(code **)(lVar35 + 0x198))(plVar40,fVar6 * fVar15,fVar42,fVar43,fVar44);
            FUN_18063a240(lVar34 + 0xf8,uVar31,unaff_RBP + -0x16);
            lVar34 = *(int64_t *)(puVar36 + 0x2c);
            iVar39 = iVar39 + 1;
            lVar38 = lVar38 + 8;
          } while ((uint64_t)(int64_t)iVar39 <
                   (uint64_t)(*(int64_t *)(puVar36 + 0x2e) - lVar34 >> 3));
        }
        lVar34 = *(int64_t *)(unaff_RSI + 0x260);
        cVar28 = cVar28 + '\x01';
        uVar41 = in_stack_00000110;
        uVar23 = in_stack_00000118;
        uVar24 = in_stack_00000120;
        uVar25 = in_stack_00000128;
        uVar26 = in_stack_00000130;
        uVar27 = in_stack_00000138;
      } while (cVar28 < *(char *)(lVar34 + 0x20));
    }
  }
  if (((*(int64_t *)(unaff_RSI + 0x1c8) - *(int64_t *)(unaff_RSI + 0x1c0) & 0xfffffffffffffff8U)
       == 0) && (lVar34 == 0)) {
    lVar38 = *(int64_t *)(unaff_RSI + 0xf8) - *(int64_t *)(unaff_RSI + 0xf0) >> 3;
    if (lVar38 != 0) {
      lVar34 = *(int64_t *)(unaff_RSI + 0x28);
      if (*(float *)(lVar34 + 0xf8) <= *(float *)(lVar34 + 0x108)) {
        if (lVar38 == 1) {
          *(float *)(lVar34 + 0x118) =
               (*(float *)(lVar34 + 0x108) + *(float *)(lVar34 + 0xf8)) * 0.5;
          *(float *)(lVar34 + 0x11c) =
               (*(float *)(lVar34 + 0x10c) + *(float *)(lVar34 + 0xfc)) * 0.5;
          *(float *)(lVar34 + 0x120) =
               (*(float *)(lVar34 + 0x110) + *(float *)(lVar34 + 0x100)) * 0.5;
          *(int32_t *)(lVar34 + 0x124) = 0x7f7fffff;
          iVar39 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x98))();
          plVar40 = (int64_t *)**(int64_t **)(unaff_RSI + 0xf0);
          if (iVar39 == 1) {
            *(int *)(*(int64_t *)(unaff_RSI + 0x28) + 0x128) = (int)plVar40[6];
          }
          else {
            lVar34 = (**(code **)(*plVar40 + 0x198))(plVar40);
            uVar41 = *(int32_t *)(lVar34 + 0x30);
            uVar31 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x158))();
            uVar41 = func_0x000180285a90(uVar31,uVar41);
            *(int32_t *)(*(int64_t *)(unaff_RSI + 0x28) + 0x128) = uVar41;
          }
          goto LAB_1802e8530;
        }
        goto LAB_1802e8524;
      }
    }
    lVar34 = *(int64_t *)(unaff_RSI + 0x28);
    *(int32_t *)(lVar34 + 0x128) = 0;
    *(uint64_t *)(lVar34 + 0xf8) = 0;
    *(uint64_t *)(lVar34 + 0x100) = 0;
    *(uint64_t *)(lVar34 + 0x108) = 0;
    *(uint64_t *)(lVar34 + 0x110) = 0;
    *(uint64_t *)(lVar34 + 0x118) = 0;
    *(uint64_t *)(lVar34 + 0x120) = 0;
  }
  else {
    lVar34 = *(int64_t *)(unaff_RSI + 0x28);
LAB_1802e8524:
    FUN_1800b9f60(lVar34 + 0xf8);
  }
LAB_1802e8530:
  *(int16_t *)(unaff_RSI + 0x2b4) = *(int16_t *)(unaff_RSI + 0x2b0);
  FUN_18063ad30(*(int64_t *)(unaff_RSI + 0x28),*(int64_t *)(unaff_RSI + 0x28) + 0xf8,
                unaff_RSI + 0x70);
  *(int16_t *)(unaff_RSI + 0x2b6) = *(int16_t *)(unaff_RSI + 0x2b2);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 2) ^ (uint64_t)&stack0x00000000);
}







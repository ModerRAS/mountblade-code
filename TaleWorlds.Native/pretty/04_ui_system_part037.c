#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part037.c - 3 个函数
// 函数: void UtilitiesSystem_755af(int64_t param_1,int64_t param_2)
void UtilitiesSystem_755af(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int8_t auVar12 [12];
  int8_t auVar13 [12];
  int16_t uVar14;
  uint8_t uVar15;
  int8_t auVar16 [12];
  int in_EAX;
  uint64_t *puVar17;
  uint64_t uVar18;
  int64_t lVar19;
  int64_t unaff_RBX;
  int64_t lVar20;
  uint uVar21;
  int64_t in_R10;
  int64_t in_R11;
  int32_t *puVar22;
  int64_t unaff_R12;
  short sVar23;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  int8_t auVar24 [16];
  short sVar31;
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int16_t uVar34;
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int64_t unaff_retaddr;
  int32_t stack_special_x_10;
  int32_t stack_special_x_14;
  int32_t stack_special_x_18;
  int32_t stack_special_x_1c;
  uint64_t stack_special_x_20;
  int64_t local_var_90;
  uint local_var_98;
  int local_var_a0;
  int local_var_a8;
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  param_2 = param_2 * 4;
  uVar18 = (uint64_t)((in_EAX - 1U >> 2) + 1);
  do {
    if (0 < param_1) {
      puVar22 = (int32_t *)(in_R11 + unaff_R12 * 2);
      lVar20 = (param_1 - 1U >> 2) + 1;
      uVar21 = local_var_98;
      do {
        lVar19 = 0;
        do {
          puVar17 = (uint64_t *)(((int64_t)(int)uVar21 >> 4) + unaff_RBX);
          if ((uVar21 & 0xf) == 0) {
            *(int8_t *)(&stack_special_x_10 + lVar19) = *(int8_t *)((int64_t)puVar17 + 3);
            *(int8_t *)((int64_t)&stack_special_x_10 + lVar19 * 4 + 1) =
                 *(int8_t *)((int64_t)puVar17 + in_R10 + 3);
            *(int8_t *)((int64_t)&stack_special_x_10 + lVar19 * 4 + 2) =
                 *(int8_t *)((int64_t)puVar17 + in_R10 * 2 + 3);
            *(int8_t *)((int64_t)&stack_special_x_10 + lVar19 * 4 + 3) =
                 *(int8_t *)(in_R10 * 3 + 3 + (int64_t)puVar17);
          }
          else {
            uVar1 = *(uint64_t *)((int64_t)puVar17 + in_R10);
            uVar2 = *puVar17;
            uVar3 = *(uint64_t *)((int64_t)puVar17 + in_R10 * 2);
            auVar45._8_4_ = 0;
            auVar45._0_8_ = uVar2;
            auVar45._12_2_ = (short)(uVar2 >> 0x30);
            auVar45._14_2_ = (short)((uint64_t)uVar1 >> 0x30);
            auVar44._12_4_ = auVar45._12_4_;
            auVar44._8_2_ = 0;
            auVar44._0_8_ = uVar2;
            auVar44._10_2_ = (short)((uint64_t)uVar1 >> 0x20);
            auVar43._10_6_ = auVar44._10_6_;
            auVar43._8_2_ = (short)(uVar2 >> 0x20);
            auVar43._0_8_ = uVar2;
            auVar12._4_8_ = auVar43._8_8_;
            auVar12._2_2_ = (short)((uint64_t)uVar1 >> 0x10);
            auVar12._0_2_ = (short)(uVar2 >> 0x10);
            auVar42._0_4_ = CONCAT22((short)uVar1,(short)uVar2);
            auVar42._4_12_ = auVar12;
            uVar1 = *(uint64_t *)(in_R10 * 3 + (int64_t)puVar17);
            auVar41 = *(int8_t (*) [16])(local_var_90 + (uint64_t)(uVar21 & 0xf) * 0x10);
            auVar24._8_4_ = 0;
            auVar24._0_8_ = uVar3;
            auVar24._12_2_ = (short)(uVar3 >> 0x30);
            auVar24._14_2_ = (short)((uint64_t)uVar1 >> 0x30);
            auVar40._12_4_ = auVar24._12_4_;
            auVar40._8_2_ = 0;
            auVar40._0_8_ = uVar3;
            auVar40._10_2_ = (short)((uint64_t)uVar1 >> 0x20);
            auVar32._10_6_ = auVar40._10_6_;
            auVar32._8_2_ = (short)(uVar3 >> 0x20);
            auVar32._0_8_ = uVar3;
            auVar13._4_8_ = auVar32._8_8_;
            auVar13._2_2_ = (short)((uint64_t)uVar1 >> 0x10);
            auVar13._0_2_ = (short)(uVar3 >> 0x10);
            auVar35._6_2_ = (short)uVar1;
            auVar35._4_2_ = (short)uVar3;
            auVar24 = pshufb(auVar41,ui_system_memory);
            auVar46._4_4_ = auVar32._8_4_;
            auVar46._0_4_ = auVar43._8_4_;
            auVar46._8_4_ = auVar44._12_4_;
            auVar46._12_4_ = auVar40._12_4_;
            auVar47._0_8_ = auVar42._0_8_;
            auVar47._8_4_ = auVar12._0_4_;
            auVar47._12_4_ = auVar13._0_4_;
            auVar35._8_8_ = auVar47._8_8_;
            auVar35._0_4_ = auVar42._0_4_;
            auVar39._8_8_ = 0;
            auVar39._0_8_ = auVar35._8_8_;
            auVar40 = pmaddubsw(auVar39,auVar24);
            auVar24 = pshufb(auVar41,ui_system_memory);
            auVar32 = pmaddubsw(auVar46,auVar24);
            auVar24 = pshufb(auVar41,ui_system_memory);
            auVar41 = pshufb(auVar41,ui_system_memory);
            auVar47 = pmaddubsw(auVar46 >> 0x40,auVar24);
            auVar24 = pmaddubsw(auVar35,auVar41);
            sVar4 = auVar40._0_2_;
            sVar23 = auVar32._0_2_;
            auVar41._0_2_ = (ushort)(sVar4 < sVar23) * sVar4 | (ushort)(sVar4 >= sVar23) * sVar23;
            sVar5 = auVar40._2_2_;
            sVar25 = auVar32._2_2_;
            auVar41._2_2_ = (ushort)(sVar5 < sVar25) * sVar5 | (ushort)(sVar5 >= sVar25) * sVar25;
            sVar6 = auVar40._4_2_;
            sVar26 = auVar32._4_2_;
            auVar41._4_2_ = (ushort)(sVar6 < sVar26) * sVar6 | (ushort)(sVar6 >= sVar26) * sVar26;
            sVar7 = auVar40._6_2_;
            sVar27 = auVar32._6_2_;
            auVar41._6_2_ = (ushort)(sVar7 < sVar27) * sVar7 | (ushort)(sVar7 >= sVar27) * sVar27;
            sVar8 = auVar40._8_2_;
            sVar28 = auVar32._8_2_;
            auVar41._8_2_ = (ushort)(sVar8 < sVar28) * sVar8 | (ushort)(sVar8 >= sVar28) * sVar28;
            sVar9 = auVar40._10_2_;
            sVar29 = auVar32._10_2_;
            auVar41._10_2_ = (ushort)(sVar9 < sVar29) * sVar9 | (ushort)(sVar9 >= sVar29) * sVar29;
            sVar10 = auVar40._12_2_;
            sVar30 = auVar32._12_2_;
            sVar31 = auVar32._14_2_;
            auVar41._12_2_ =
                 (ushort)(sVar10 < sVar30) * sVar10 | (ushort)(sVar10 >= sVar30) * sVar30;
            sVar11 = auVar40._14_2_;
            auVar41._14_2_ =
                 (ushort)(sVar11 < sVar31) * sVar11 | (ushort)(sVar11 >= sVar31) * sVar31;
            auVar33._0_2_ = (ushort)(sVar23 < sVar4) * sVar4 | (ushort)(sVar23 >= sVar4) * sVar23;
            auVar33._2_2_ = (ushort)(sVar25 < sVar5) * sVar5 | (ushort)(sVar25 >= sVar5) * sVar25;
            auVar33._4_2_ = (ushort)(sVar26 < sVar6) * sVar6 | (ushort)(sVar26 >= sVar6) * sVar26;
            auVar33._6_2_ = (ushort)(sVar27 < sVar7) * sVar7 | (ushort)(sVar27 >= sVar7) * sVar27;
            auVar33._8_2_ = (ushort)(sVar28 < sVar8) * sVar8 | (ushort)(sVar28 >= sVar8) * sVar28;
            auVar33._10_2_ = (ushort)(sVar29 < sVar9) * sVar9 | (ushort)(sVar29 >= sVar9) * sVar29;
            auVar33._12_2_ =
                 (ushort)(sVar30 < sVar10) * sVar10 | (ushort)(sVar30 >= sVar10) * sVar30;
            auVar33._14_2_ =
                 (ushort)(sVar31 < sVar11) * sVar11 | (ushort)(sVar31 >= sVar11) * sVar31;
            auVar24 = paddsw(auVar47,auVar24);
            auVar41 = paddsw(auVar24,auVar41);
            auVar41 = paddsw(auVar41,auVar33);
            auVar41 = pmulhrsw(auVar41,ui_system_memory);
            sVar4 = auVar41._0_2_;
            sVar5 = auVar41._2_2_;
            sVar6 = auVar41._4_2_;
            sVar7 = auVar41._6_2_;
            (&stack_special_x_10)[lVar19] =
                 CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar41[6] - (0xff < sVar7),
                          CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar41[4] - (0xff < sVar6),
                                   CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar41[2] -
                                            (0xff < sVar5),
                                            (0 < sVar4) * (sVar4 < 0x100) * auVar41[0] -
                                            (0xff < sVar4))));
          }
          uVar21 = uVar21 + local_var_a0;
          lVar19 = lVar19 + 1;
        } while (lVar19 < 4);
        uVar14 = CONCAT11((char)((uint)stack_special_x_14 >> 0x18),(char)((uint)stack_special_x_10 >> 0x18));
        uVar1 = CONCAT35(CONCAT21(uVar14,(char)((uint)stack_special_x_14 >> 0x10)),
                         CONCAT14((char)((uint)stack_special_x_10 >> 0x10),stack_special_x_10));
        uVar15 = CONCAT51(CONCAT41((int)((uint64_t)uVar1 >> 0x20),(char)((uint)stack_special_x_14 >> 8)),
                          (char)((uint)stack_special_x_10 >> 8));
        uVar34 = CONCAT11((char)stack_special_x_14,(char)stack_special_x_10);
        uVar2 = CONCAT62(uVar15,uVar34);
        auVar38[0xf] = (char)((uint)stack_special_x_1c >> 0x18);
        auVar38[0xe] = (char)((uint)stack_special_x_18 >> 0x18);
        auVar16[3] = (char)((uint)stack_special_x_1c >> 8);
        auVar16[2] = (char)((uint)stack_special_x_18 >> 8);
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar2;
        auVar38._12_2_ = uVar14;
        auVar37._12_4_ = auVar38._12_4_;
        auVar37._8_2_ = 0;
        auVar37._0_8_ = uVar2;
        auVar37._10_2_ =
             (short)(CONCAT15((char)((uint)stack_special_x_1c >> 0x10),
                              CONCAT14((char)((uint)stack_special_x_18 >> 0x10),stack_special_x_18)) >> 0x20);
        auVar36._10_6_ = auVar37._10_6_;
        auVar36._8_2_ = (short)((uint64_t)uVar1 >> 0x20);
        auVar36._0_8_ = uVar2;
        auVar16._4_8_ = auVar36._8_8_;
        auVar16._0_2_ = (short)uVar15;
        *(uint *)(unaff_R12 * -2 + (int64_t)puVar22) =
             CONCAT22(CONCAT11((char)stack_special_x_1c,(char)stack_special_x_18),uVar34);
        *(int *)((int64_t)puVar22 - unaff_R12) = auVar16._0_4_;
        *puVar22 = auVar36._8_4_;
        *(int32_t *)(unaff_R12 + (int64_t)puVar22) = auVar37._12_4_;
        puVar22 = puVar22 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      param_2 = in_R10 * 4;
      param_1 = (int64_t)local_var_a8;
      in_R11 = unaff_retaddr;
    }
    unaff_RBX = unaff_RBX + param_2;
    in_R11 = in_R11 + unaff_R12 * 4;
    uVar18 = uVar18 - 1;
    unaff_retaddr = in_R11;
  } while (uVar18 != 0);
// WARNING: Subroutine does not return
  SystemSecurityChecker(stack_special_x_20 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UtilitiesSystem_757f1(void)
void UtilitiesSystem_757f1(void)
{
  uint64_t stack_special_x_20;
// WARNING: Subroutine does not return
  SystemSecurityChecker(stack_special_x_20 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_75810(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void UtilitiesSystem_75810(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  int64_t param_5,uint param_6,int param_7,int param_8,uint param_9)
{
  int8_t uVar1;
  int8_t auVar2 [14];
  int8_t auVar3 [12];
  unkbyte10 Var4;
  int8_t auVar5 [14];
  int8_t auVar6 [12];
  unkbyte10 Var7;
  int8_t auVar8 [14];
  int8_t auVar9 [12];
  unkbyte10 Var10;
  int8_t auVar11 [14];
  int8_t auVar12 [12];
  unkbyte10 Var13;
  int8_t auVar14 [12];
  int8_t auVar15 [12];
  int iVar16;
  int64_t lVar17;
  uint uVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  int8_t *puVar21;
  int8_t auVar22 [16];
  int8_t auVar25 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar40 [16];
  int32_t uVar41;
  int8_t auVar43 [16];
  int8_t auVar52 [16];
  int32_t uVar56;
  int8_t auVar58 [16];
  int8_t stack_array_108 [32];
  int32_t *plocal_var_e8;
  uint64_t local_var_e0;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t auVar49 [16];
  int8_t auVar50 [16];
  int8_t auVar42 [12];
  int8_t auVar51 [16];
  int8_t auVar53 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  int8_t auVar59 [16];
  int8_t auVar60 [16];
  int8_t auVar61 [16];
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  int8_t auVar57 [12];
  int8_t auVar66 [16];
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  param_1 = param_1 + -3;
  lVar17 = param_2 * 8;
  iVar16 = (param_9 - (param_9 & 7)) + 8;
  lStack_a0 = param_4 * 8;
  lVar19 = param_4 * 8;
  lStack_d8 = param_3;
  lStack_a8 = param_4;
  do {
    if (0 < param_8) {
      plocal_var_e8 = (int32_t *)(param_4 * 2 + lStack_d8);
      lStack_c0 = param_4 * 2;
      lStack_b8 = param_4 * 3;
      lStack_b0 = param_4 * 5;
      local_var_e0 = (uint64_t)((param_8 - 1U >> 3) + 1);
      uVar18 = param_6;
      lStack_d0 = -param_4;
      lStack_c8 = param_4;
      do {
        puVar21 = (int8_t *)((int64_t)&local_var_98 + 1);
        lVar19 = 8;
        puVar20 = &local_var_98;
        do {
          lVar17 = ((int64_t)(int)uVar18 >> 4) + param_1;
          if ((uVar18 & 0xf) == 0) {
            puVar21[-1] = *(int8_t *)(lVar17 + 3);
            *puVar21 = *(int8_t *)(param_2 + 3 + lVar17);
            puVar21[1] = *(int8_t *)(lVar17 + 3 + param_2 * 2);
            uVar1 = *(int8_t *)(param_2 * 3 + 3 + lVar17);
            puVar21[3] = *(int8_t *)(lVar17 + 3 + param_2 * 4);
            puVar21[2] = uVar1;
            puVar21[4] = *(int8_t *)(param_2 * 5 + 3 + lVar17);
            puVar21[5] = *(int8_t *)(lVar17 + 3 + param_2 * 6);
            puVar21[6] = *(int8_t *)(param_2 * 7 + 3 + lVar17);
          }
          else {
            UtilitiesSystem_75320(lVar17,param_2,puVar20,(uint64_t)(uVar18 & 0xf) * 0x10 + param_5);
          }
          uVar18 = uVar18 + param_7;
          puVar20 = puVar20 + 1;
          puVar21 = puVar21 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        auVar65._8_6_ = 0;
        auVar65._0_8_ = local_var_98;
        auVar65[0xe] = (char)(local_var_98 >> 0x38);
        auVar65[0xf] = (char)((uint64_t)local_var_90 >> 0x38);
        auVar64._14_2_ = auVar65._14_2_;
        auVar64._8_5_ = 0;
        auVar64._0_8_ = local_var_98;
        auVar64[0xd] = (char)((uint64_t)local_var_90 >> 0x30);
        auVar63._13_3_ = auVar64._13_3_;
        auVar63._8_4_ = 0;
        auVar63._0_8_ = local_var_98;
        auVar63[0xc] = (char)(local_var_98 >> 0x30);
        auVar62._12_4_ = auVar63._12_4_;
        auVar62._8_3_ = 0;
        auVar62._0_8_ = local_var_98;
        auVar62[0xb] = (char)((uint64_t)local_var_90 >> 0x28);
        auVar61._11_5_ = auVar62._11_5_;
        auVar61._8_2_ = 0;
        auVar61._0_8_ = local_var_98;
        auVar61[10] = (char)(local_var_98 >> 0x28);
        auVar60._10_6_ = auVar61._10_6_;
        auVar60[8] = 0;
        auVar60._0_8_ = local_var_98;
        auVar60[9] = (char)((uint64_t)local_var_90 >> 0x20);
        auVar59._9_7_ = auVar60._9_7_;
        auVar59[8] = (char)(local_var_98 >> 0x20);
        auVar59._0_8_ = local_var_98;
        Var4 = CONCAT91(CONCAT81(auVar59._8_8_,(char)((uint64_t)local_var_90 >> 0x18)),
                        (char)(local_var_98 >> 0x18));
        auVar3._2_10_ = Var4;
        auVar3[1] = (char)((uint64_t)local_var_90 >> 0x10);
        auVar3[0] = (char)(local_var_98 >> 0x10);
        auVar2._2_12_ = auVar3;
        auVar2[1] = (char)((uint64_t)local_var_90 >> 8);
        auVar2[0] = (char)(local_var_98 >> 8);
        auVar58._0_2_ = CONCAT11((char)local_var_90,(char)local_var_98);
        auVar58._2_14_ = auVar2;
        auVar39._8_6_ = 0;
        auVar39._0_8_ = local_var_88;
        auVar39[0xe] = (char)(local_var_88 >> 0x38);
        auVar39[0xf] = (char)((uint64_t)local_var_80 >> 0x38);
        auVar38._14_2_ = auVar39._14_2_;
        auVar38._8_5_ = 0;
        auVar38._0_8_ = local_var_88;
        auVar38[0xd] = (char)((uint64_t)local_var_80 >> 0x30);
        auVar37._13_3_ = auVar38._13_3_;
        auVar37._8_4_ = 0;
        auVar37._0_8_ = local_var_88;
        auVar37[0xc] = (char)(local_var_88 >> 0x30);
        auVar36._12_4_ = auVar37._12_4_;
        auVar36._8_3_ = 0;
        auVar36._0_8_ = local_var_88;
        auVar36[0xb] = (char)((uint64_t)local_var_80 >> 0x28);
        auVar35._11_5_ = auVar36._11_5_;
        auVar35._8_2_ = 0;
        auVar35._0_8_ = local_var_88;
        auVar35[10] = (char)(local_var_88 >> 0x28);
        auVar34._10_6_ = auVar35._10_6_;
        auVar34[8] = 0;
        auVar34._0_8_ = local_var_88;
        auVar34[9] = (char)((uint64_t)local_var_80 >> 0x20);
        auVar33._9_7_ = auVar34._9_7_;
        auVar33[8] = (char)(local_var_88 >> 0x20);
        auVar33._0_8_ = local_var_88;
        Var7 = CONCAT91(CONCAT81(auVar33._8_8_,(char)((uint64_t)local_var_80 >> 0x18)),
                        (char)(local_var_88 >> 0x18));
        auVar6._2_10_ = Var7;
        auVar6[1] = (char)((uint64_t)local_var_80 >> 0x10);
        auVar6[0] = (char)(local_var_88 >> 0x10);
        auVar5._2_12_ = auVar6;
        auVar5[1] = (char)((uint64_t)local_var_80 >> 8);
        auVar5[0] = (char)(local_var_88 >> 8);
        auVar50._8_6_ = 0;
        auVar50._0_8_ = local_var_78;
        auVar50[0xe] = (char)(local_var_78 >> 0x38);
        auVar50[0xf] = (char)((uint64_t)local_var_70 >> 0x38);
        auVar49._14_2_ = auVar50._14_2_;
        auVar49._8_5_ = 0;
        auVar49._0_8_ = local_var_78;
        auVar49[0xd] = (char)((uint64_t)local_var_70 >> 0x30);
        auVar48._13_3_ = auVar49._13_3_;
        auVar48._8_4_ = 0;
        auVar48._0_8_ = local_var_78;
        auVar48[0xc] = (char)(local_var_78 >> 0x30);
        auVar47._12_4_ = auVar48._12_4_;
        auVar47._8_3_ = 0;
        auVar47._0_8_ = local_var_78;
        auVar47[0xb] = (char)((uint64_t)local_var_70 >> 0x28);
        auVar46._11_5_ = auVar47._11_5_;
        auVar46._8_2_ = 0;
        auVar46._0_8_ = local_var_78;
        auVar46[10] = (char)(local_var_78 >> 0x28);
        auVar45._10_6_ = auVar46._10_6_;
        auVar45[8] = 0;
        auVar45._0_8_ = local_var_78;
        auVar45[9] = (char)((uint64_t)local_var_70 >> 0x20);
        auVar44._9_7_ = auVar45._9_7_;
        auVar44[8] = (char)(local_var_78 >> 0x20);
        auVar44._0_8_ = local_var_78;
        Var10 = CONCAT91(CONCAT81(auVar44._8_8_,(char)((uint64_t)local_var_70 >> 0x18)),
                         (char)(local_var_78 >> 0x18));
        auVar9._2_10_ = Var10;
        auVar9[1] = (char)((uint64_t)local_var_70 >> 0x10);
        auVar9[0] = (char)(local_var_78 >> 0x10);
        auVar8._2_12_ = auVar9;
        auVar8[1] = (char)((uint64_t)local_var_70 >> 8);
        auVar8[0] = (char)(local_var_78 >> 8);
        auVar43._0_2_ = CONCAT11((char)local_var_70,(char)local_var_78);
        auVar43._2_14_ = auVar8;
        auVar31._8_6_ = 0;
        auVar31._0_8_ = local_var_68;
        auVar31[0xe] = (char)(local_var_68 >> 0x38);
        auVar31[0xf] = (char)((uint64_t)local_var_60 >> 0x38);
        auVar30._14_2_ = auVar31._14_2_;
        auVar30._8_5_ = 0;
        auVar30._0_8_ = local_var_68;
        auVar30[0xd] = (char)((uint64_t)local_var_60 >> 0x30);
        auVar29._13_3_ = auVar30._13_3_;
        auVar29._8_4_ = 0;
        auVar29._0_8_ = local_var_68;
        auVar29[0xc] = (char)(local_var_68 >> 0x30);
        auVar28._12_4_ = auVar29._12_4_;
        auVar28._8_3_ = 0;
        auVar28._0_8_ = local_var_68;
        auVar28[0xb] = (char)((uint64_t)local_var_60 >> 0x28);
        auVar27._11_5_ = auVar28._11_5_;
        auVar27._8_2_ = 0;
        auVar27._0_8_ = local_var_68;
        auVar27[10] = (char)(local_var_68 >> 0x28);
        auVar26._10_6_ = auVar27._10_6_;
        auVar26[8] = 0;
        auVar26._0_8_ = local_var_68;
        auVar26[9] = (char)((uint64_t)local_var_60 >> 0x20);
        auVar25._9_7_ = auVar26._9_7_;
        auVar25[8] = (char)(local_var_68 >> 0x20);
        auVar25._0_8_ = local_var_68;
        Var13 = CONCAT91(CONCAT81(auVar25._8_8_,(char)((uint64_t)local_var_60 >> 0x18)),
                         (char)(local_var_68 >> 0x18));
        auVar12._2_10_ = Var13;
        auVar12[1] = (char)((uint64_t)local_var_60 >> 0x10);
        auVar12[0] = (char)(local_var_68 >> 0x10);
        auVar11._2_12_ = auVar12;
        auVar11[1] = (char)((uint64_t)local_var_60 >> 8);
        auVar11[0] = (char)(local_var_68 >> 8);
        auVar24._0_12_ = auVar43._0_12_;
        auVar24._12_2_ = (short)Var10;
        auVar24._14_2_ = (short)Var13;
        auVar23._12_4_ = auVar24._12_4_;
        auVar23._0_10_ = auVar43._0_10_;
        auVar23._10_2_ = auVar12._0_2_;
        auVar22._10_6_ = auVar23._10_6_;
        auVar22._0_8_ = auVar43._0_8_;
        auVar22._8_2_ = auVar9._0_2_;
        auVar14._4_8_ = auVar22._8_8_;
        auVar14._2_2_ = auVar11._0_2_;
        auVar14._0_2_ = auVar8._0_2_;
        auVar55._0_12_ = auVar58._0_12_;
        auVar55._12_2_ = (short)Var4;
        auVar55._14_2_ = (short)Var7;
        auVar54._12_4_ = auVar55._12_4_;
        auVar54._0_10_ = auVar58._0_10_;
        auVar54._10_2_ = auVar6._0_2_;
        auVar53._10_6_ = auVar54._10_6_;
        auVar53._0_8_ = auVar58._0_8_;
        auVar53._8_2_ = auVar3._0_2_;
        auVar15._4_8_ = auVar53._8_8_;
        auVar15._2_2_ = auVar5._0_2_;
        auVar15._0_2_ = auVar2._0_2_;
        auVar52._0_4_ = CONCAT22(CONCAT11((char)local_var_80,(char)local_var_88),auVar58._0_2_);
        auVar52._4_12_ = auVar15;
        uVar41 = CONCAT22(auVar25._8_2_,auVar44._8_2_);
        auVar42._0_8_ = CONCAT26(auVar27._10_2_,CONCAT24(auVar46._10_2_,uVar41));
        auVar42._8_2_ = auVar48._12_2_;
        auVar42._10_2_ = auVar29._12_2_;
        auVar51._12_2_ = auVar49._14_2_;
        auVar51._0_12_ = auVar42;
        auVar51._14_2_ = auVar30._14_2_;
        auVar32._0_8_ = auVar52._0_8_;
        auVar32._8_4_ = auVar15._0_4_;
        auVar32._12_4_ = auVar14._0_4_;
        *(uint64_t *)((int64_t)plocal_var_e8 + param_4 * -2) =
             CONCAT44(CONCAT22(CONCAT11((char)local_var_60,(char)local_var_68),auVar43._0_2_),
                      auVar52._0_4_);
        uVar56 = CONCAT22(auVar33._8_2_,auVar59._8_2_);
        auVar57._0_8_ = CONCAT26(auVar35._10_2_,CONCAT24(auVar61._10_2_,uVar56));
        auVar57._8_2_ = auVar63._12_2_;
        auVar57._10_2_ = auVar37._12_2_;
        auVar66._12_2_ = auVar64._14_2_;
        auVar66._0_12_ = auVar57;
        auVar66._14_2_ = auVar38._14_2_;
        *(int64_t *)(-param_4 + (int64_t)plocal_var_e8) = auVar32._8_8_;
        *plocal_var_e8 = auVar53._8_4_;
        plocal_var_e8[1] = auVar22._8_4_;
        auVar40._8_4_ = (int)((uint64_t)auVar57._0_8_ >> 0x20);
        auVar40._0_8_ = auVar57._0_8_;
        auVar40._12_4_ = (int)((uint64_t)auVar42._0_8_ >> 0x20);
        *(int32_t *)((int64_t)plocal_var_e8 + lStack_c8 + 8) = auVar54._12_4_;
        *(int32_t *)((int64_t)plocal_var_e8 + lStack_c8 + 0xc) = auVar23._12_4_;
        *(uint64_t *)(lStack_c0 + (int64_t)plocal_var_e8) = CONCAT44(uVar41,uVar56);
        *(int64_t *)(lStack_b8 + (int64_t)plocal_var_e8) = auVar40._8_8_;
        plocal_var_e8[param_4] = auVar57._8_4_;
        (plocal_var_e8 + param_4)[1] = auVar42._8_4_;
        *(int *)((int64_t)plocal_var_e8 + lStack_b0 + 8) = auVar66._12_4_;
        *(int *)((int64_t)plocal_var_e8 + lStack_b0 + 0xc) = auVar51._12_4_;
        plocal_var_e8 = plocal_var_e8 + 2;
        local_var_e0 = local_var_e0 - 1;
      } while (local_var_e0 != 0);
      lVar17 = param_2 * 8;
      local_var_e0 = 0;
      lVar19 = lStack_a0;
      param_4 = lStack_a8;
    }
    lStack_d8 = lStack_d8 + lVar19;
    param_1 = param_1 + lVar17;
    iVar16 = iVar16 + -8;
  } while (iVar16 != 0);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_108);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
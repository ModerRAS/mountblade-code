#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part034.c - 3 个函数

// 函数: void FUN_180672da0(int64_t param_1,int64_t param_2,int64_t param_3,short *param_4,int param_5,
void FUN_180672da0(int64_t param_1,int64_t param_2,int64_t param_3,short *param_4,int param_5,
                  int param_6,uint64_t *param_7,uint64_t param_8,short *param_9)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  uint64_t uVar11;
  int iVar12;
  int64_t lVar13;
  uint64_t uVar14;
  short *psVar15;
  int64_t lVar16;
  int8_t auStack_118 [32];
  uint *puStack_f8;
  int iStack_e8;
  int32_t uStack_e4;
  int iStack_e0;
  uint uStack_dc;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  uint64_t *puStack_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  short *psStack_98;
  short asStack_90 [8];
  uint auStack_80 [4];
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  uint64_t uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  iVar7 = *(int *)(param_1 + 0x1e70);
  lVar16 = *(int64_t *)(param_1 + 0x2398);
  uStack_e4 = *(int32_t *)(param_2 + 0x54);
  lVar13 = (int64_t)*(int *)(param_2 + 0x50) + **(int64_t **)(param_2 + 0x48);
  psStack_98 = param_9;
  puStack_c0 = param_7;
  asStack_90[0] = -1;
  asStack_90[1] = 0;
  asStack_90[2] = 0;
  asStack_90[3] = -1;
  asStack_90[4] = 0;
  asStack_90[5] = 1;
  asStack_90[6] = 1;
  asStack_90[7] = 0;
  lStack_d0 = *(int64_t *)(param_1 + 0x23a0);
  lVar9 = (int64_t)(*param_4 * iVar7) + (int64_t)*(int *)(param_3 + 0x20) +
          *(int64_t *)(param_1 + 0x1e98) + (int64_t)param_4[1];
  lStack_b0 = (int64_t)(param_9[1] >> 3);
  lStack_b8 = (int64_t)(*param_9 >> 3);
  iVar12 = *(int *)(lVar16 + (*param_4 - lStack_b8) * 4);
  iVar1 = *(int *)(lStack_d0 + (param_4[1] - lStack_b0) * 4);
  iStack_e8 = iVar7;
  lStack_d8 = lVar9;
  lStack_c8 = lVar13;
  lStack_a8 = lVar16;
  lStack_a0 = param_1;
  iVar2 = (*(code *)*param_7)(lVar13,uStack_e4,lVar9,iVar7);
  uVar10 = ((iVar12 + iVar1) * param_5 + 0x80 >> 8) + iVar2;
  iStack_e0 = 0;
  lVar8 = lStack_d0;
  if (0 < param_6) {
    do {
      uVar3 = 0;
      uVar14 = 0xffffffff;
      if (((*(int *)(param_1 + 0x23d0) < param_4[1] + -1 &&
           *(int *)(param_1 + 0x23d8) < *param_4 + -1) && *param_4 + 1 < *(int *)(param_1 + 0x23dc))
          && param_4[1] + 1 < *(int *)(param_1 + 0x23d4)) {
        lStack_70 = lVar9 - iVar7;
        lStack_68 = lVar9 + -1;
        lStack_60 = lVar9 + 1;
        lStack_58 = iVar7 + lVar9;
        puStack_f8 = auStack_80;
        (*(code *)puStack_c0[8])(lStack_c8,uStack_e4,&lStack_70,iVar7);
        uVar11 = uVar3;
        do {
          if (*(uint *)((int64_t)auStack_80 + uVar11) < uVar10) {
            uVar4 = ((*(int *)(lVar16 + ((short)(*(short *)((int64_t)asStack_90 + uVar11) +
                                                *param_4) - lStack_b8) * 4) +
                     *(int *)(lVar8 + ((short)(param_4[1] +
                                              *(short *)((int64_t)asStack_90 + uVar11 + 2)) -
                                      lStack_b0) * 4)) * param_5 + 0x80 >> 8) +
                    *(uint *)((int64_t)auStack_80 + uVar11);
            *(uint *)((int64_t)auStack_80 + uVar11) = uVar4;
            if (uVar4 < uVar10) {
              uVar14 = uVar3;
              uVar10 = uVar4;
            }
          }
          iVar12 = (int)uVar14;
          uVar4 = (int)uVar3 + 1;
          uVar3 = (uint64_t)uVar4;
          uVar11 = uVar11 + 4;
          param_1 = lStack_a0;
        } while ((int)uVar4 < 4);
      }
      else {
        psVar15 = asStack_90 + 1;
        do {
          sVar6 = param_4[1] + *psVar15;
          sVar5 = *param_4 + psVar15[-1];
          if ((((*(int *)(param_1 + 0x23d0) < (int)sVar6) &&
               ((int)sVar6 < *(int *)(param_1 + 0x23d4))) &&
              (*(int *)(param_1 + 0x23d8) < (int)sVar5)) &&
             ((((int)sVar5 < *(int *)(param_1 + 0x23dc) &&
               (uStack_dc = (*(code *)*puStack_c0)
                                      (lStack_c8,uStack_e4,
                                       (psVar15[-1] * iVar7 + (int)*psVar15) + lStack_d8,iVar7),
               uStack_dc < uVar10)) &&
              (uStack_dc = uStack_dc +
                           ((*(int *)(lStack_a8 + (sVar5 - lStack_b8) * 4) +
                            *(int *)(lStack_d0 + (sVar6 - lStack_b0) * 4)) * param_5 + 0x80 >> 8),
              uStack_dc < uVar10)))) {
            uVar14 = uVar3;
            uVar10 = uStack_dc;
          }
          iVar12 = (int)uVar14;
          uVar4 = (int)uVar3 + 1;
          uVar3 = (uint64_t)uVar4;
          psVar15 = psVar15 + 2;
          lVar8 = lStack_d0;
          lVar16 = lStack_a8;
          iVar7 = iStack_e8;
        } while ((int)uVar4 < 4);
      }
      lVar9 = lStack_d8;
      lVar13 = lStack_c8;
      iVar7 = iStack_e8;
      if (iVar12 == -1) break;
      iStack_e0 = iStack_e0 + 1;
      sVar5 = asStack_90[(int64_t)iVar12 * 2];
      sVar6 = asStack_90[(int64_t)iVar12 * 2 + 1];
      *param_4 = *param_4 + sVar5;
      param_4[1] = param_4[1] + sVar6;
      lVar9 = lStack_d8 + (sVar5 * iStack_e8 + (int)sVar6);
      lStack_d8 = lVar9;
    } while (iStack_e0 < param_6);
  }
  puStack_f8 = &uStack_dc;
  (*(code *)puStack_c0[1])(lVar13,uStack_e4,lVar9,iVar7);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (uint64_t)auStack_118);
}





// 函数: void FUN_180673220(int64_t param_1,int64_t *param_2)
void FUN_180673220(int64_t param_1,int64_t *param_2)

{
  short *psVar1;
  int64_t lVar2;
  short sVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  uint8_t uVar20;
  int8_t auVar21 [16];
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  int8_t auVar38 [16];
  short sVar39;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  short sVar48;
  short sVar49;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  short sVar58;
  
  auVar50 = **(int8_t (**) [16])(param_1 + 8);
  auVar40 = (*(int8_t (**) [16])(param_1 + 8))[1];
  psVar1 = (short *)param_2[3];
  auVar21 = psraw(auVar50,0xf);
  sVar3 = *psVar1;
  sVar5 = psVar1[1];
  sVar6 = psVar1[2];
  sVar7 = psVar1[3];
  sVar8 = psVar1[4];
  sVar9 = psVar1[5];
  sVar10 = psVar1[6];
  sVar11 = psVar1[7];
  sVar12 = psVar1[8];
  sVar13 = psVar1[9];
  sVar14 = psVar1[10];
  sVar15 = psVar1[0xb];
  sVar16 = psVar1[0xc];
  sVar17 = psVar1[0xd];
  sVar18 = psVar1[0xe];
  sVar19 = psVar1[0xf];
  auVar50 = auVar21 ^ auVar50;
  psVar1 = *(short **)(param_1 + 0x38);
  auVar38 = psraw(auVar40,0xf);
  auVar51._0_2_ = (auVar50._0_2_ - auVar21._0_2_) + *psVar1;
  auVar51._2_2_ = (auVar50._2_2_ - auVar21._2_2_) + psVar1[1];
  auVar51._4_2_ = (auVar50._4_2_ - auVar21._4_2_) + psVar1[2];
  auVar51._6_2_ = (auVar50._6_2_ - auVar21._6_2_) + psVar1[3];
  auVar51._8_2_ = (auVar50._8_2_ - auVar21._8_2_) + psVar1[4];
  auVar51._10_2_ = (auVar50._10_2_ - auVar21._10_2_) + psVar1[5];
  auVar51._12_2_ = (auVar50._12_2_ - auVar21._12_2_) + psVar1[6];
  auVar51._14_2_ = (auVar50._14_2_ - auVar21._14_2_) + psVar1[7];
  auVar51 = pmulhw(auVar51,**(int8_t (**) [16])(param_1 + 0x18));
  auVar40 = auVar38 ^ auVar40;
  auVar41._0_2_ = (auVar40._0_2_ - auVar38._0_2_) + psVar1[8];
  auVar41._2_2_ = (auVar40._2_2_ - auVar38._2_2_) + psVar1[9];
  auVar41._4_2_ = (auVar40._4_2_ - auVar38._4_2_) + psVar1[10];
  auVar41._6_2_ = (auVar40._6_2_ - auVar38._6_2_) + psVar1[0xb];
  auVar41._8_2_ = (auVar40._8_2_ - auVar38._8_2_) + psVar1[0xc];
  auVar41._10_2_ = (auVar40._10_2_ - auVar38._10_2_) + psVar1[0xd];
  auVar41._12_2_ = (auVar40._12_2_ - auVar38._12_2_) + psVar1[0xe];
  auVar41._14_2_ = (auVar40._14_2_ - auVar38._14_2_) + psVar1[0xf];
  auVar50 = pmulhw(auVar41,(*(int8_t (**) [16])(param_1 + 0x18))[1]);
  psVar1 = (short *)*param_2;
  auVar51 = auVar51 ^ auVar21;
  sVar49 = auVar51._0_2_ - auVar21._0_2_;
  sVar52 = auVar51._2_2_ - auVar21._2_2_;
  sVar53 = auVar51._4_2_ - auVar21._4_2_;
  sVar54 = auVar51._6_2_ - auVar21._6_2_;
  sVar55 = auVar51._8_2_ - auVar21._8_2_;
  sVar56 = auVar51._10_2_ - auVar21._10_2_;
  sVar57 = auVar51._12_2_ - auVar21._12_2_;
  sVar58 = auVar51._14_2_ - auVar21._14_2_;
  auVar50 = auVar50 ^ auVar38;
  *psVar1 = sVar49;
  psVar1[1] = sVar52;
  psVar1[2] = sVar53;
  psVar1[3] = sVar54;
  psVar1[4] = sVar55;
  psVar1[5] = sVar56;
  psVar1[6] = sVar57;
  psVar1[7] = sVar58;
  sVar39 = auVar50._0_2_ - auVar38._0_2_;
  sVar42 = auVar50._2_2_ - auVar38._2_2_;
  sVar43 = auVar50._4_2_ - auVar38._4_2_;
  sVar44 = auVar50._6_2_ - auVar38._6_2_;
  sVar45 = auVar50._8_2_ - auVar38._8_2_;
  sVar46 = auVar50._10_2_ - auVar38._10_2_;
  sVar47 = auVar50._12_2_ - auVar38._12_2_;
  sVar48 = auVar50._14_2_ - auVar38._14_2_;
  lVar2 = *param_2;
  *(short *)(lVar2 + 0x10) = sVar39;
  *(short *)(lVar2 + 0x12) = sVar42;
  *(short *)(lVar2 + 0x14) = sVar43;
  *(short *)(lVar2 + 0x16) = sVar44;
  *(short *)(lVar2 + 0x18) = sVar45;
  *(short *)(lVar2 + 0x1a) = sVar46;
  *(short *)(lVar2 + 0x1c) = sVar47;
  *(short *)(lVar2 + 0x1e) = sVar48;
  psVar1 = (short *)param_2[1];
  *psVar1 = sVar49 * sVar3;
  psVar1[1] = sVar52 * sVar5;
  psVar1[2] = sVar53 * sVar6;
  psVar1[3] = sVar54 * sVar7;
  psVar1[4] = sVar55 * sVar8;
  psVar1[5] = sVar56 * sVar9;
  psVar1[6] = sVar57 * sVar10;
  psVar1[7] = sVar58 * sVar11;
  lVar2 = param_2[1];
  *(short *)(lVar2 + 0x10) = sVar39 * sVar12;
  *(short *)(lVar2 + 0x12) = sVar42 * sVar13;
  *(short *)(lVar2 + 0x14) = sVar43 * sVar14;
  *(short *)(lVar2 + 0x16) = sVar44 * sVar15;
  *(short *)(lVar2 + 0x18) = sVar45 * sVar16;
  *(short *)(lVar2 + 0x1a) = sVar46 * sVar17;
  *(short *)(lVar2 + 0x1c) = sVar47 * sVar18;
  *(short *)(lVar2 + 0x1e) = sVar48 * sVar19;
  uVar22 = (-(ushort)(sVar49 == 0) ^ 0xffff) & 1;
  uVar24 = (-(ushort)(sVar52 == 0) ^ 0xffff) & 2;
  uVar26 = (-(ushort)(sVar53 == 0) ^ 0xffff) & 6;
  uVar28 = (-(ushort)(sVar54 == 0) ^ 0xffff) & 7;
  uVar30 = (-(ushort)(sVar55 == 0) ^ 0xffff) & 3;
  uVar32 = (-(ushort)(sVar56 == 0) ^ 0xffff) & 5;
  uVar34 = (-(ushort)(sVar57 == 0) ^ 0xffff) & 8;
  uVar36 = (-(ushort)(sVar58 == 0) ^ 0xffff) & 0xd;
  uVar23 = (-(ushort)(sVar39 == 0) ^ 0xffff) & 4;
  uVar25 = (-(ushort)(sVar42 == 0) ^ 0xffff) & 9;
  uVar27 = (-(ushort)(sVar43 == 0) ^ 0xffff) & 0xc;
  uVar29 = (-(ushort)(sVar44 == 0) ^ 0xffff) & 0xe;
  uVar31 = (-(ushort)(sVar45 == 0) ^ 0xffff) & 10;
  uVar33 = (-(ushort)(sVar46 == 0) ^ 0xffff) & 0xb;
  uVar35 = (-(ushort)(sVar47 == 0) ^ 0xffff) & 0xf;
  uVar37 = (-(ushort)(sVar48 == 0) ^ 0xffff) & 0x10;
  uVar23 = (uVar22 < uVar23) * uVar23 | (uVar22 >= uVar23) * uVar22;
  uVar25 = (uVar24 < uVar25) * uVar25 | (uVar24 >= uVar25) * uVar24;
  uVar27 = (uVar26 < uVar27) * uVar27 | (uVar26 >= uVar27) * uVar26;
  uVar29 = (uVar28 < uVar29) * uVar29 | (uVar28 >= uVar29) * uVar28;
  uVar31 = (uVar30 < uVar31) * uVar31 | (uVar30 >= uVar31) * uVar30;
  uVar33 = (uVar32 < uVar33) * uVar33 | (uVar32 >= uVar33) * uVar32;
  uVar20 = CONCAT24(uVar33,CONCAT22(uVar31,uVar29));
  uVar35 = (uVar34 < uVar35) * uVar35 | (uVar34 >= uVar35) * uVar34;
  uVar37 = (uVar36 < uVar37) * uVar37 | (uVar36 >= uVar37) * uVar36;
  auVar50._4_4_ = (int)(CONCAT28(uVar37,CONCAT26(uVar35,uVar20)) >> 0x30);
  auVar50._0_4_ = (int)((uint6)uVar20 >> 0x10);
  auVar50._8_4_ = CONCAT22(uVar25,uVar23);
  auVar50._12_4_ = CONCAT22(uVar25,uVar23);
  auVar40._0_2_ = (uVar23 < uVar31) * uVar31 | (uVar23 >= uVar31) * uVar23;
  auVar40._2_2_ = (uVar25 < uVar33) * uVar33 | (uVar25 >= uVar33) * uVar25;
  auVar40._4_2_ = (uVar27 < uVar35) * uVar35 | (uVar27 >= uVar35) * uVar27;
  auVar40._6_2_ = (uVar29 < uVar37) * uVar37 | (uVar29 >= uVar37) * uVar29;
  auVar40._8_2_ = (uVar31 < uVar23) * uVar23 | (uVar31 >= uVar23) * uVar31;
  auVar40._10_2_ = (uVar33 < uVar25) * uVar25 | (uVar33 >= uVar25) * uVar33;
  auVar40._12_2_ = (uVar35 < uVar23) * uVar23 | (uVar35 >= uVar23) * uVar35;
  auVar40._14_2_ = (uVar37 < uVar25) * uVar25 | (uVar37 >= uVar25) * uVar37;
  auVar50 = pshuflw(auVar50,auVar40,0xe);
  sVar3 = auVar50._0_2_;
  auVar21._0_2_ =
       (ushort)((short)auVar40._0_2_ < sVar3) * sVar3 |
       ((short)auVar40._0_2_ >= sVar3) * auVar40._0_2_;
  sVar3 = auVar50._2_2_;
  auVar21._2_2_ =
       (ushort)((short)auVar40._2_2_ < sVar3) * sVar3 |
       ((short)auVar40._2_2_ >= sVar3) * auVar40._2_2_;
  sVar3 = auVar50._4_2_;
  auVar21._4_2_ =
       (ushort)((short)auVar40._4_2_ < sVar3) * sVar3 |
       ((short)auVar40._4_2_ >= sVar3) * auVar40._4_2_;
  sVar3 = auVar50._6_2_;
  auVar21._6_2_ =
       (ushort)((short)auVar40._6_2_ < sVar3) * sVar3 |
       ((short)auVar40._6_2_ >= sVar3) * auVar40._6_2_;
  sVar3 = auVar50._8_2_;
  auVar21._8_2_ =
       (ushort)((short)auVar40._8_2_ < sVar3) * sVar3 |
       ((short)auVar40._8_2_ >= sVar3) * auVar40._8_2_;
  sVar3 = auVar50._10_2_;
  auVar21._10_2_ =
       (ushort)((short)auVar40._10_2_ < sVar3) * sVar3 |
       ((short)auVar40._10_2_ >= sVar3) * auVar40._10_2_;
  sVar3 = auVar50._12_2_;
  auVar21._12_2_ =
       (ushort)((short)auVar40._12_2_ < sVar3) * sVar3 |
       ((short)auVar40._12_2_ >= sVar3) * auVar40._12_2_;
  sVar3 = auVar50._14_2_;
  auVar21._14_2_ =
       (ushort)((short)auVar40._14_2_ < sVar3) * sVar3 |
       ((short)auVar40._14_2_ >= sVar3) * auVar40._14_2_;
  auVar50 = pshuflw(auVar50,auVar21,1);
  bVar4 = (short)auVar21._0_2_ < auVar50._0_2_;
  *(char *)param_2[5] = bVar4 * auVar50[0] | !bVar4 * (char)auVar21._0_2_;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180673360(int64_t param_1,int64_t *param_2)
void FUN_180673360(int64_t param_1,int64_t *param_2)

{
  int8_t auVar1 [16];
  short *psVar2;
  int64_t lVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short *psVar29;
  short *psVar30;
  int8_t uVar31;
  int8_t auVar32 [16];
  short sVar33;
  short sVar36;
  short sVar37;
  short sVar38;
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auStack_108 [16];
  short sStack_f8;
  short sStack_f6;
  short sStack_f4;
  short sStack_f2;
  short sStack_f0;
  short sStack_ee;
  short sStack_ec;
  short sStack_ea;
  short sStack_e8;
  short sStack_e6;
  short sStack_e4;
  short sStack_e2;
  short sStack_e0;
  short sStack_de;
  short sStack_dc;
  short sStack_da;
  short sStack_d8;
  short sStack_d6;
  short sStack_d4;
  short sStack_d2;
  short sStack_d0;
  short sStack_ce;
  short sStack_cc;
  short sStack_ca;
  short sStack_c8;
  short sStack_c6;
  short sStack_c4;
  short sStack_c2;
  short sStack_c0;
  short sStack_be;
  short sStack_bc;
  short sStack_ba;
  uint64_t uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  psVar2 = (short *)*param_2;
  auVar32 = **(int8_t (**) [16])(param_1 + 0x20);
  auVar1 = (*(int8_t (**) [16])(param_1 + 0x20))[1];
  auVar39 = **(int8_t (**) [16])(param_1 + 8);
  auVar41 = (*(int8_t (**) [16])(param_1 + 8))[1];
  auVar43 = psraw(auVar39,0xf);
  auVar44 = psraw(auVar41,0xf);
  auVar39 = auVar43 ^ auVar39;
  auVar41 = auVar44 ^ auVar41;
  psVar30 = *(short **)(param_1 + 0x28);
  sStack_f8 = auVar39._0_2_ - auVar43._0_2_;
  sStack_f6 = auVar39._2_2_ - auVar43._2_2_;
  sStack_f4 = auVar39._4_2_ - auVar43._4_2_;
  sStack_f2 = auVar39._6_2_ - auVar43._6_2_;
  sStack_f0 = auVar39._8_2_ - auVar43._8_2_;
  sStack_ee = auVar39._10_2_ - auVar43._10_2_;
  sStack_ec = auVar39._12_2_ - auVar43._12_2_;
  sStack_ea = auVar39._14_2_ - auVar43._14_2_;
  sStack_e8 = auVar41._0_2_ - auVar44._0_2_;
  sStack_e6 = auVar41._2_2_ - auVar44._2_2_;
  sStack_e4 = auVar41._4_2_ - auVar44._4_2_;
  sStack_e2 = auVar41._6_2_ - auVar44._6_2_;
  sStack_e0 = auVar41._8_2_ - auVar44._8_2_;
  sStack_de = auVar41._10_2_ - auVar44._10_2_;
  sStack_dc = auVar41._12_2_ - auVar44._12_2_;
  sStack_da = auVar41._14_2_ - auVar44._14_2_;
  sVar5 = *psVar30;
  sVar6 = psVar30[1];
  sVar7 = psVar30[2];
  sVar8 = psVar30[3];
  sVar9 = psVar30[4];
  sVar10 = psVar30[5];
  sVar11 = psVar30[6];
  sVar12 = psVar30[7];
  sVar13 = psVar30[8];
  sVar14 = psVar30[9];
  sVar15 = psVar30[10];
  sVar16 = psVar30[0xb];
  sVar17 = psVar30[0xc];
  sVar18 = psVar30[0xd];
  sVar19 = psVar30[0xe];
  sVar20 = psVar30[0xf];
  psVar30 = *(short **)(param_1 + 0x38);
  auVar40._0_2_ = sStack_f8 + *psVar30;
  auVar40._2_2_ = sStack_f6 + psVar30[1];
  auVar40._4_2_ = sStack_f4 + psVar30[2];
  auVar40._6_2_ = sStack_f2 + psVar30[3];
  auVar40._8_2_ = sStack_f0 + psVar30[4];
  auVar40._10_2_ = sStack_ee + psVar30[5];
  auVar40._12_2_ = sStack_ec + psVar30[6];
  auVar40._14_2_ = sStack_ea + psVar30[7];
  auVar39 = **(int8_t (**) [16])(param_1 + 0x10);
  auVar41 = (*(int8_t (**) [16])(param_1 + 0x10))[1];
  psVar29 = (short *)param_2[3];
  auStack_108 = *(int8_t (*) [16])(psVar29 + 8);
  sVar21 = *psVar29;
  sVar22 = psVar29[1];
  sVar23 = psVar29[2];
  sVar24 = psVar29[3];
  sVar25 = psVar29[4];
  sVar26 = psVar29[5];
  sVar27 = psVar29[6];
  sVar28 = psVar29[7];
  auVar34 = pshuflw(auStack_108,ZEXT416((uint)(int)*(short *)(param_1 + 0x40)),0);
  sVar38 = auVar34._6_2_;
  sVar37 = auVar34._4_2_;
  sVar36 = auVar34._2_2_;
  sVar33 = auVar34._0_2_;
  auVar42._0_2_ = sStack_e8 + psVar30[8];
  auVar42._2_2_ = sStack_e6 + psVar30[9];
  auVar42._4_2_ = sStack_e4 + psVar30[10];
  auVar42._6_2_ = sStack_e2 + psVar30[0xb];
  auVar42._8_2_ = sStack_e0 + psVar30[0xc];
  auVar42._10_2_ = sStack_de + psVar30[0xd];
  auVar42._12_2_ = sStack_dc + psVar30[0xe];
  auVar42._14_2_ = sStack_da + psVar30[0xf];
  psVar2[0] = 0;
  psVar2[1] = 0;
  psVar2[2] = 0;
  psVar2[3] = 0;
  psVar2[4] = 0;
  psVar2[5] = 0;
  psVar2[6] = 0;
  psVar2[7] = 0;
  sStack_e8 = sStack_e8 - (sVar13 + sVar33);
  sStack_e6 = sStack_e6 - (sVar14 + sVar33);
  sStack_e4 = sStack_e4 - (sVar15 + sVar36);
  sStack_e2 = sStack_e2 - (sVar16 + sVar36);
  sStack_e0 = sStack_e0 - (sVar17 + sVar37);
  sStack_de = sStack_de - (sVar18 + sVar37);
  sStack_dc = sStack_dc - (sVar19 + sVar38);
  sStack_da = sStack_da - (sVar20 + sVar38);
  psVar2[8] = 0;
  psVar2[9] = 0;
  psVar2[10] = 0;
  psVar2[0xb] = 0;
  sStack_f8 = sStack_f8 - (sVar5 + sVar33);
  sStack_f6 = sStack_f6 - (sVar6 + sVar33);
  sStack_f4 = sStack_f4 - (sVar7 + sVar36);
  sStack_f2 = sStack_f2 - (sVar8 + sVar36);
  sStack_f0 = sStack_f0 - (sVar9 + sVar37);
  sStack_ee = sStack_ee - (sVar10 + sVar37);
  sStack_ec = sStack_ec - (sVar11 + sVar38);
  sStack_ea = sStack_ea - (sVar12 + sVar38);
  psVar2[0xc] = 0;
  psVar2[0xd] = 0;
  psVar2[0xe] = 0;
  psVar2[0xf] = 0;
  auVar34 = pmulhw(auVar40,auVar39);
  auVar39 = pmulhw(auVar42,auVar41);
  auVar35._0_2_ = auVar34._0_2_ + auVar40._0_2_;
  auVar35._2_2_ = auVar34._2_2_ + auVar40._2_2_;
  auVar35._4_2_ = auVar34._4_2_ + auVar40._4_2_;
  auVar35._6_2_ = auVar34._6_2_ + auVar40._6_2_;
  auVar35._8_2_ = auVar34._8_2_ + auVar40._8_2_;
  auVar35._10_2_ = auVar34._10_2_ + auVar40._10_2_;
  auVar35._12_2_ = auVar34._12_2_ + auVar40._12_2_;
  auVar35._14_2_ = auVar34._14_2_ + auVar40._14_2_;
  auVar41._0_2_ = auVar39._0_2_ + auVar42._0_2_;
  auVar41._2_2_ = auVar39._2_2_ + auVar42._2_2_;
  auVar41._4_2_ = auVar39._4_2_ + auVar42._4_2_;
  auVar41._6_2_ = auVar39._6_2_ + auVar42._6_2_;
  auVar41._8_2_ = auVar39._8_2_ + auVar42._8_2_;
  auVar41._10_2_ = auVar39._10_2_ + auVar42._10_2_;
  auVar41._12_2_ = auVar39._12_2_ + auVar42._12_2_;
  auVar41._14_2_ = auVar39._14_2_ + auVar42._14_2_;
  auVar39 = pmulhw(auVar35,auVar32);
  bVar4 = **(short **)(param_1 + 0x30) <= sStack_f8;
  auVar32 = pmulhw(auVar41,auVar1);
  auVar39 = auVar39 ^ auVar43;
  sStack_d8 = auVar39._0_2_ - auVar43._0_2_;
  sStack_d6 = auVar39._2_2_ - auVar43._2_2_;
  sStack_d4 = auVar39._4_2_ - auVar43._4_2_;
  sStack_d2 = auVar39._6_2_ - auVar43._6_2_;
  sStack_d0 = auVar39._8_2_ - auVar43._8_2_;
  sStack_ce = auVar39._10_2_ - auVar43._10_2_;
  sStack_cc = auVar39._12_2_ - auVar43._12_2_;
  sStack_ca = auVar39._14_2_ - auVar43._14_2_;
  auVar32 = auVar32 ^ auVar44;
  sStack_c8 = auVar32._0_2_ - auVar44._0_2_;
  sStack_c6 = auVar32._2_2_ - auVar44._2_2_;
  sStack_c4 = auVar32._4_2_ - auVar44._4_2_;
  sStack_c2 = auVar32._6_2_ - auVar44._6_2_;
  sStack_c0 = auVar32._8_2_ - auVar44._8_2_;
  sStack_be = auVar32._10_2_ - auVar44._10_2_;
  sStack_bc = auVar32._12_2_ - auVar44._12_2_;
  sStack_ba = auVar32._14_2_ - auVar44._14_2_;
  psVar30 = *(short **)(param_1 + 0x30) + 1;
  if (bVar4 && sStack_d8 != 0) {
    *psVar2 = sStack_d8;
    psVar30 = *(short **)(param_1 + 0x30);
  }
  uVar31 = bVar4 && sStack_d8 != 0;
  psVar29 = psVar30 + 1;
  if (*psVar30 <= sStack_f6 && sStack_d6 != 0) {
    psVar2[1] = sStack_d6;
    uVar31 = 2;
    psVar29 = *(short **)(param_1 + 0x30);
  }
  psVar30 = psVar29 + 1;
  if (*psVar29 <= sStack_f0 && sStack_d0 != 0) {
    psVar2[4] = sStack_d0;
    uVar31 = 3;
    psVar30 = *(short **)(param_1 + 0x30);
  }
  psVar29 = psVar30 + 1;
  if (*psVar30 <= sStack_e8 && sStack_c8 != 0) {
    psVar2[8] = sStack_c8;
    uVar31 = 4;
    psVar29 = *(short **)(param_1 + 0x30);
  }
  psVar30 = psVar29 + 1;
  if (*psVar29 <= sStack_ee && sStack_ce != 0) {
    psVar2[5] = sStack_ce;
    uVar31 = 5;
    psVar30 = *(short **)(param_1 + 0x30);
  }
  psVar29 = psVar30 + 1;
  if (*psVar30 <= sStack_f4 && sStack_d4 != 0) {
    psVar2[2] = sStack_d4;
    uVar31 = 6;
    psVar29 = *(short **)(param_1 + 0x30);
  }
  psVar30 = psVar29 + 1;
  if (*psVar29 <= sStack_f2 && sStack_d2 != 0) {
    psVar2[3] = sStack_d2;
    uVar31 = 7;
    psVar30 = *(short **)(param_1 + 0x30);
  }
  psVar29 = psVar30 + 1;
  if (*psVar30 <= sStack_ec && sStack_cc != 0) {
    psVar2[6] = sStack_cc;
    uVar31 = 8;
    psVar29 = *(short **)(param_1 + 0x30);
  }
  psVar30 = psVar29 + 1;
  if (*psVar29 <= sStack_e6 && sStack_c6 != 0) {
    psVar2[9] = sStack_c6;
    uVar31 = 9;
    psVar30 = *(short **)(param_1 + 0x30);
  }
  psVar29 = psVar30 + 1;
  if (*psVar30 <= sStack_e0 && sStack_c0 != 0) {
    psVar2[0xc] = sStack_c0;
    uVar31 = 10;
    psVar29 = *(short **)(param_1 + 0x30);
  }
  psVar30 = psVar29 + 1;
  if (*psVar29 <= sStack_de && sStack_be != 0) {
    psVar2[0xd] = sStack_be;
    uVar31 = 0xb;
    psVar30 = *(short **)(param_1 + 0x30);
  }
  psVar29 = psVar30 + 1;
  if (*psVar30 <= sStack_e4 && sStack_c4 != 0) {
    psVar2[10] = sStack_c4;
    uVar31 = 0xc;
    psVar29 = *(short **)(param_1 + 0x30);
  }
  psVar30 = psVar29 + 1;
  if (*psVar29 <= sStack_ea && sStack_ca != 0) {
    psVar2[7] = sStack_ca;
    uVar31 = 0xd;
    psVar30 = *(short **)(param_1 + 0x30);
  }
  psVar29 = psVar30 + 1;
  if (*psVar30 <= sStack_e2 && sStack_c2 != 0) {
    psVar2[0xb] = sStack_c2;
    uVar31 = 0xe;
    psVar29 = *(short **)(param_1 + 0x30);
  }
  psVar30 = psVar29 + 1;
  if (*psVar29 <= sStack_dc && sStack_bc != 0) {
    psVar2[0xe] = sStack_bc;
    uVar31 = 0xf;
    psVar30 = *(short **)(param_1 + 0x30);
  }
  if (*psVar30 <= sStack_da && sStack_ba != 0) {
    psVar2[0xf] = sStack_ba;
    uVar31 = 0x10;
  }
  psVar2 = (short *)*param_2;
  sVar5 = psVar2[1];
  sVar6 = psVar2[2];
  sVar7 = psVar2[3];
  sVar8 = psVar2[4];
  sVar9 = psVar2[5];
  sVar10 = psVar2[6];
  sVar11 = psVar2[7];
  sVar12 = psVar2[8];
  sVar13 = psVar2[9];
  sVar14 = psVar2[10];
  sVar15 = psVar2[0xb];
  sVar16 = psVar2[0xc];
  sVar17 = psVar2[0xd];
  sVar18 = psVar2[0xe];
  sVar19 = psVar2[0xf];
  psVar30 = (short *)param_2[1];
  *psVar30 = *psVar2 * sVar21;
  psVar30[1] = sVar5 * sVar22;
  psVar30[2] = sVar6 * sVar23;
  psVar30[3] = sVar7 * sVar24;
  psVar30[4] = sVar8 * sVar25;
  psVar30[5] = sVar9 * sVar26;
  psVar30[6] = sVar10 * sVar27;
  psVar30[7] = sVar11 * sVar28;
  lVar3 = param_2[1];
  *(short *)(lVar3 + 0x10) = sVar12 * auStack_108._0_2_;
  *(short *)(lVar3 + 0x12) = sVar13 * auStack_108._2_2_;
  *(short *)(lVar3 + 0x14) = sVar14 * auStack_108._4_2_;
  *(short *)(lVar3 + 0x16) = sVar15 * auStack_108._6_2_;
  *(short *)(lVar3 + 0x18) = sVar16 * auStack_108._8_2_;
  *(short *)(lVar3 + 0x1a) = sVar17 * auStack_108._10_2_;
  *(short *)(lVar3 + 0x1c) = sVar18 * auStack_108._12_2_;
  *(short *)(lVar3 + 0x1e) = sVar19 * auStack_108._14_2_;
  *(int8_t *)param_2[5] = uVar31;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (uint64_t)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




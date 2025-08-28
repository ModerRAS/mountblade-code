#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part368_sub002_sub002.c - 1 个函数

// 函数: void FUN_18046a6f0(longlong param_1,longlong *param_2)
void FUN_18046a6f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lStackX_8;
  longlong *plStack_18;
  int32_t uStack_10;
  
  lStackX_8 = *(longlong *)(param_1 + 0x18);
  plVar1 = (longlong *)param_2[0xb93];
  iVar2 = 0;
  uVar3 = param_2[0xb94] - (longlong)plVar1 >> 3;
  if (uVar3 != 0) {
    do {
      if (*plVar1 == lStackX_8) goto LAB_18046a744;
      iVar2 = iVar2 + 1;
      plVar1 = plVar1 + 1;
    } while ((ulonglong)(longlong)iVar2 < uVar3);
  }
  FUN_18005ea90(param_2 + 0xb93,&lStackX_8);
LAB_18046a744:
  uStack_10 = (**(code **)(*param_2 + 8))(param_2);
  plStack_18 = param_2;
  (**(code **)(_DAT_180c8a9c0 + 0x210))(*(int32_t *)(param_1 + 0x50),&plStack_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong *
FUN_18046a8c0(uint64_t param_1,ulonglong *param_2,float *param_3,float *param_4,
             uint64_t *param_5,uint64_t *param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint *puVar4;
  uint64_t *puVar5;
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [12];
  int8_t auVar11 [12];
  int8_t auVar12 [12];
  int8_t auVar13 [12];
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  uint64_t uVar17;
  char cVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  longlong *plVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  uint *puVar27;
  int32_t *puVar28;
  int iVar29;
  longlong lVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  ulonglong uVar34;
  uint8_t uVar35;
  int32_t *puVar36;
  int32_t *puVar37;
  float *pfVar38;
  uint64_t *puVar39;
  float fVar40;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  int8_t auVar47 [16];
  int8_t auVar49 [16];
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int8_t auVar52 [16];
  int8_t auVar53 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  float fVar56;
  int8_t auVar57 [16];
  int8_t auVar58 [16];
  int8_t auVar59 [16];
  float fVar60;
  int8_t auVar61 [16];
  float fVar62;
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  int8_t auVar66 [16];
  int8_t auVar67 [16];
  int8_t auVar68 [16];
  int8_t auVar69 [16];
  int8_t auVar70 [16];
  int8_t auVar71 [16];
  int8_t auVar72 [16];
  uint64_t uStackX_8;
  float *pfStackX_18;
  float *pfStackX_20;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  longlong lStack_190;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  float fStack_160;
  float *pfStack_158;
  float *pfStack_150;
  float *pfStack_148;
  int32_t uStack_140;
  float *pfStack_138;
  float *pfStack_130;
  float *pfStack_128;
  int32_t uStack_120;
  int32_t uStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float *pfStack_f8;
  uint64_t uStack_f0;
  int8_t auVar46 [16];
  int8_t auVar48 [16];
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar4 = *(uint **)param_3;
  uVar1 = *puVar4;
  auVar64 = ZEXT416(uVar1);
  uVar2 = puVar4[1];
  auVar67 = ZEXT416(uVar2);
  auVar69 = ZEXT416(uVar1);
  auVar55 = ZEXT416(uVar2);
  uVar34 = *(longlong *)(param_3 + 2) - (longlong)puVar4 >> 3;
  iVar29 = 0;
  if (7 < uVar34) {
    auVar61._0_8_ = CONCAT44(uVar1,uVar1);
    auVar61._8_4_ = uVar1;
    auVar61._12_4_ = uVar1;
    auVar70._8_4_ = uVar1;
    auVar70._0_8_ = auVar61._0_8_;
    auVar70._12_4_ = uVar1;
    auVar57._0_8_ = CONCAT44(uVar2,uVar2);
    auVar57._8_4_ = uVar2;
    auVar57._12_4_ = uVar2;
    auVar71._8_4_ = uVar2;
    auVar71._0_8_ = auVar57._0_8_;
    auVar71._12_4_ = uVar2;
    auVar72._8_4_ = uVar1;
    auVar72._0_8_ = auVar61._0_8_;
    auVar72._12_4_ = uVar1;
    auVar52._8_4_ = uVar2;
    auVar52._0_8_ = auVar57._0_8_;
    auVar52._12_4_ = uVar2;
    auVar68._8_4_ = uVar1;
    auVar68._0_8_ = auVar61._0_8_;
    auVar68._12_4_ = uVar1;
    auVar63._8_4_ = uVar2;
    auVar63._0_8_ = auVar57._0_8_;
    auVar63._12_4_ = uVar2;
    puVar27 = puVar4 + 4;
    do {
      auVar47._4_4_ = *puVar27;
      auVar47._0_4_ = puVar27[-4];
      auVar47._8_4_ = *puVar27;
      auVar47._12_4_ = puVar27[2];
      auVar46._8_8_ = auVar47._8_8_;
      auVar46._4_4_ = puVar27[-2];
      auVar46._0_4_ = puVar27[-4];
      auVar61 = minps(auVar61,auVar46);
      auVar6._4_4_ = puVar27[-1];
      auVar6._0_4_ = puVar27[-3];
      auVar6._8_4_ = puVar27[1];
      auVar6._12_4_ = puVar27[3];
      auVar57 = minps(auVar57,auVar6);
      auVar68 = maxps(auVar68,auVar46);
      auVar7._4_4_ = puVar27[-1];
      auVar7._0_4_ = puVar27[-3];
      auVar7._8_4_ = puVar27[1];
      auVar7._12_4_ = puVar27[3];
      auVar63 = maxps(auVar63,auVar7);
      auVar49._4_4_ = puVar27[8];
      auVar49._0_4_ = puVar27[4];
      auVar49._8_4_ = puVar27[8];
      auVar49._12_4_ = puVar27[10];
      auVar48._8_8_ = auVar49._8_8_;
      auVar48._4_4_ = puVar27[6];
      auVar48._0_4_ = puVar27[4];
      auVar70 = minps(auVar70,auVar48);
      auVar8._4_4_ = puVar27[7];
      auVar8._0_4_ = puVar27[5];
      auVar8._8_4_ = puVar27[9];
      auVar8._12_4_ = puVar27[0xb];
      auVar71 = minps(auVar71,auVar8);
      auVar72 = maxps(auVar72,auVar48);
      auVar9._4_4_ = puVar27[7];
      auVar9._0_4_ = puVar27[5];
      auVar9._8_4_ = puVar27[9];
      auVar9._12_4_ = puVar27[0xb];
      auVar52 = maxps(auVar52,auVar9);
      iVar29 = iVar29 + 8;
      puVar27 = puVar27 + 0x10;
    } while ((ulonglong)(longlong)iVar29 < uVar34 - ((uint)uVar34 & 7));
    auVar64 = maxps(auVar63,auVar52);
    auVar10._4_8_ = auVar52._8_8_;
    auVar10._0_4_ = auVar64._4_4_;
    auVar53._0_8_ = auVar10._0_8_ << 0x20;
    auVar53._8_4_ = auVar64._8_4_;
    auVar53._12_4_ = auVar64._12_4_;
    auVar54._8_8_ = auVar53._8_8_;
    auVar54._0_8_ = auVar64._8_8_;
    auVar55 = maxps(auVar54,auVar64);
    if (auVar55._0_4_ <= auVar55._4_4_) {
      auVar55._0_4_ = auVar55._4_4_;
    }
    auVar69 = maxps(auVar68,auVar72);
    auVar11._4_8_ = auVar48._8_8_;
    auVar11._0_4_ = auVar69._4_4_;
    auVar50._0_8_ = auVar11._0_8_ << 0x20;
    auVar50._8_4_ = auVar69._8_4_;
    auVar50._12_4_ = auVar69._12_4_;
    auVar51._8_8_ = auVar50._8_8_;
    auVar51._0_8_ = auVar69._8_8_;
    auVar69 = maxps(auVar51,auVar69);
    if (auVar69._0_4_ <= auVar69._4_4_) {
      auVar69._0_4_ = auVar69._4_4_;
    }
    auVar52 = minps(auVar57,auVar71);
    auVar12._4_8_ = auVar64._8_8_;
    auVar12._0_4_ = auVar52._4_4_;
    auVar65._0_8_ = auVar12._0_8_ << 0x20;
    auVar65._8_4_ = auVar52._8_4_;
    auVar65._12_4_ = auVar52._12_4_;
    auVar66._8_8_ = auVar65._8_8_;
    auVar66._0_8_ = auVar52._8_8_;
    auVar67 = minps(auVar66,auVar52);
    if (auVar67._4_4_ <= auVar67._0_4_) {
      auVar67._0_4_ = auVar67._4_4_;
    }
    auVar64 = minps(auVar61,auVar70);
    auVar13._4_8_ = auVar52._8_8_;
    auVar13._0_4_ = auVar64._4_4_;
    auVar58._0_8_ = auVar13._0_8_ << 0x20;
    auVar58._8_4_ = auVar64._8_4_;
    auVar58._12_4_ = auVar64._12_4_;
    auVar59._8_8_ = auVar58._8_8_;
    auVar59._0_8_ = auVar64._8_8_;
    auVar64 = minps(auVar59,auVar64);
    if (auVar64._4_4_ <= auVar64._0_4_) {
      auVar64._0_4_ = auVar64._4_4_;
    }
  }
  fVar42 = auVar55._0_4_;
  fVar41 = auVar69._0_4_;
  fVar45 = auVar67._0_4_;
  fVar40 = auVar64._0_4_;
  if ((ulonglong)(longlong)iVar29 < uVar34) {
    pfVar19 = (float *)(puVar4 + (longlong)iVar29 * 2);
    do {
      fVar41 = *pfVar19;
      fVar40 = fVar41;
      if (auVar64._0_4_ <= fVar41) {
        fVar40 = auVar64._0_4_;
      }
      auVar64 = ZEXT416((uint)fVar40);
      fVar42 = pfVar19[1];
      fVar45 = fVar42;
      if (auVar67._0_4_ <= fVar42) {
        fVar45 = auVar67._0_4_;
      }
      auVar67 = ZEXT416((uint)fVar45);
      if (fVar41 <= auVar69._0_4_) {
        fVar41 = auVar69._0_4_;
      }
      auVar69 = ZEXT416((uint)fVar41);
      if (fVar42 <= auVar55._0_4_) {
        fVar42 = auVar55._0_4_;
      }
      auVar55 = ZEXT416((uint)fVar42);
      iVar29 = iVar29 + 1;
      pfVar19 = pfVar19 + 2;
    } while ((ulonglong)(longlong)iVar29 < uVar34);
  }
  uStackX_8 = CONCAT44(fVar45,fVar40);
  *param_5 = uStackX_8;
  uStackX_8 = CONCAT44(fVar42,fVar41);
  *param_6 = uStackX_8;
  fStack_10c = fVar42 - fVar45;
  if (fVar42 - fVar45 <= fVar41 - fVar40) {
    fStack_10c = fVar41 - fVar40;
  }
  fStack_108 = (fVar41 + fVar40) * 0.5;
  fStack_104 = (fVar42 + fVar45) * 0.5;
  fStack_100 = fStack_10c + fStack_10c;
  fStack_110 = fStack_108 - fStack_100;
  fStack_10c = fStack_104 - fStack_10c;
  fStack_104 = fStack_100 + fStack_104;
  fStack_100 = fStack_100 + fStack_108;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(int32_t *)(param_2 + 3) = 3;
  uStack_118 = 1;
  pfStack_138 = (float *)0x0;
  pfStack_130 = (float *)0x0;
  pfStack_128 = (float *)0x0;
  uStack_120 = 3;
  uVar31 = CONCAT44(fStack_10c,fStack_110);
  uVar33 = CONCAT44(fStack_104,fStack_108);
  uVar32 = CONCAT44(fStack_10c,fStack_100);
  fStack_160 = (float)((uint)fStack_160 & 0xffffff00);
  *param_4 = fStack_110;
  param_4[1] = fStack_10c;
  param_4[2] = fStack_108;
  param_4[3] = fStack_104;
  *(uint64_t *)(param_4 + 4) = uVar32;
  param_4[6] = fStack_160;
  puVar39 = (uint64_t *)param_2[1];
  pfStackX_18 = param_3;
  uStack_178 = uVar31;
  uStack_170 = uVar33;
  uStack_168 = uVar32;
  fStack_fc = fStack_10c;
  if (puVar39 < (uint64_t *)param_2[2]) {
    param_2[1] = (longlong)puVar39 + 0x1c;
    uVar17 = *(uint64_t *)(param_4 + 2);
    *puVar39 = *(uint64_t *)param_4;
    puVar39[1] = uVar17;
    puVar39[2] = *(uint64_t *)(param_4 + 4);
    *(float *)(puVar39 + 3) = param_4[6];
    goto LAB_18046ad5e;
  }
  uStackX_8 = (longlong)((longlong)puVar39 - *param_2) / 0x1c;
  if (uStackX_8 == 0) {
    uStackX_8 = 1;
LAB_18046acb1:
    pfVar19 = (float *)FUN_18062b420(_DAT_180c8ed18,uStackX_8 * 0x1c,(char)param_2[3]);
    puVar39 = (uint64_t *)param_2[1];
  }
  else {
    uStackX_8 = uStackX_8 * 2;
    if (uStackX_8 != 0) goto LAB_18046acb1;
    pfVar19 = (float *)0x0;
  }
  puVar5 = (uint64_t *)*param_2;
  if (puVar5 != puVar39) {
                    // WARNING: Subroutine does not return
    memmove(pfVar19,puVar5,(longlong)puVar39 - (longlong)puVar5);
  }
  fVar41 = param_4[1];
  fVar42 = param_4[2];
  fVar45 = param_4[3];
  *pfVar19 = *param_4;
  pfVar19[1] = fVar41;
  pfVar19[2] = fVar42;
  pfVar19[3] = fVar45;
  *(uint64_t *)(pfVar19 + 4) = *(uint64_t *)(param_4 + 4);
  pfVar19[6] = param_4[6];
  if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_2 = (ulonglong)pfVar19;
  param_2[1] = (ulonglong)(pfVar19 + 7);
  param_2[2] = (ulonglong)(pfVar19 + uStackX_8 * 7);
LAB_18046ad5e:
  pfVar19 = *(float **)pfStackX_18;
  pfStack_f8 = *(float **)(pfStackX_18 + 2);
  if (pfVar19 != pfStack_f8) {
    do {
      pfStack_158 = (float *)0x0;
      pfStack_150 = (float *)0x0;
      pfVar25 = (float *)0x0;
      pfStack_148 = (float *)0x0;
      uStack_140 = 3;
      pfVar26 = (float *)*param_2;
      pfVar24 = (float *)param_2[1];
      pfVar21 = (float *)0x0;
      pfVar22 = (float *)0x0;
      if (pfVar26 != pfVar24) {
        pfStackX_20 = pfVar26 + 5;
        do {
          fVar41 = pfStackX_20[-4];
          fVar42 = *pfVar26;
          fVar62 = fVar42 * fVar42 + fVar41 * fVar41;
          fVar45 = pfStackX_20[-2];
          fVar40 = pfStackX_20[-3];
          fVar60 = fVar40 * fVar40 + fVar45 * fVar45;
          fVar44 = *pfStackX_20;
          fVar3 = pfStackX_20[-1];
          fVar56 = fVar3 * fVar3 + fVar44 * fVar44;
          fVar43 = (fVar44 - fVar45) * fVar62 + fVar60 * (fVar41 - fVar44) +
                   (fVar45 - fVar41) * fVar56;
          pfStackX_18 = (float *)CONCAT44(pfStackX_18._4_4_,fVar43);
          fVar43 = (fVar43 / (fVar42 * (fVar44 - fVar45) + fVar40 * (fVar41 - fVar44) +
                             fVar3 * (fVar45 - fVar41))) * 0.5;
          fVar56 = (((fVar3 - fVar40) * fVar62 + fVar60 * (fVar42 - fVar3) +
                    (fVar40 - fVar42) * fVar56) /
                   (fVar41 * (fVar3 - fVar40) + fVar45 * (fVar42 - fVar3) +
                   fVar44 * (fVar40 - fVar42))) * 0.5;
          fVar44 = (fVar43 - fVar3) * (fVar43 - fVar3) + (fVar56 - fVar44) * (fVar56 - fVar44);
          fVar45 = (fVar43 - fVar40) * (fVar43 - fVar40) + (fVar56 - fVar45) * (fVar56 - fVar45);
          fVar41 = (fVar43 - fVar42) * (fVar43 - fVar42) + (fVar56 - fVar41) * (fVar56 - fVar41);
          if (fVar45 <= fVar41) {
            if (fVar45 <= fVar44) {
              fVar44 = fVar45;
            }
          }
          else if (fVar41 <= fVar44) {
            fVar44 = fVar41;
          }
          if ((fVar43 - *pfVar19) * (fVar43 - *pfVar19) +
              (fVar56 - pfVar19[1]) * (fVar56 - pfVar19[1]) <= fVar44 + 0.001) {
            *(int8_t *)(pfStackX_20 + 1) = 1;
            fStack_1a8 = (float)*(uint64_t *)pfVar26;
            fStack_1a4 = (float)((ulonglong)*(uint64_t *)pfVar26 >> 0x20);
            fStack_1a0 = (float)*(uint64_t *)(pfStackX_20 + -3);
            fStack_19c = (float)((ulonglong)*(uint64_t *)(pfStackX_20 + -3) >> 0x20);
            uVar35 = (uint8_t)((ulonglong)pfVar26 >> 8);
            if (pfVar21 < pfVar25) {
              *pfVar21 = fStack_1a8;
              pfVar21[1] = fStack_1a4;
              pfVar21[2] = fStack_1a0;
              pfVar21[3] = fStack_19c;
              pfVar21[4] = 0.0;
              pfVar20 = pfVar22;
            }
            else {
              lStack_190 = ((longlong)pfVar21 - (longlong)pfVar22) / 0x14;
              if (lStack_190 == 0) {
                lStack_190 = 1;
LAB_18046b05b:
                pfVar20 = (float *)FUN_18062b420(_DAT_180c8ed18,lStack_190 * 0x14,CONCAT71(uVar35,3)
                                                );
              }
              else {
                lStack_190 = lStack_190 * 2;
                if (lStack_190 != 0) goto LAB_18046b05b;
                pfVar20 = (float *)0x0;
              }
              pfStackX_18 = pfVar20;
              if (pfVar22 != pfVar21) {
                    // WARNING: Subroutine does not return
                memmove(pfVar20,pfVar22,(longlong)pfVar21 - (longlong)pfVar22);
              }
              *pfVar20 = fStack_1a8;
              pfVar20[1] = fStack_1a4;
              pfVar20[2] = fStack_1a0;
              pfVar20[3] = fStack_19c;
              pfVar20[4] = 0.0;
              if (pfVar22 != (float *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(pfVar22);
              }
              pfVar25 = pfVar20 + lStack_190 * 5;
              pfStack_158 = pfVar20;
              pfStack_148 = pfVar25;
              pfVar21 = pfVar20;
            }
            pfVar22 = pfVar21 + 5;
            fStack_1a8 = (float)*(uint64_t *)(pfStackX_20 + -3);
            fStack_1a4 = (float)((ulonglong)*(uint64_t *)(pfStackX_20 + -3) >> 0x20);
            fStack_1a0 = (float)*(uint64_t *)(pfStackX_20 + -1);
            fStack_19c = (float)((ulonglong)*(uint64_t *)(pfStackX_20 + -1) >> 0x20);
            if (pfVar22 < pfVar25) {
              pfVar38 = pfVar21 + 10;
              *pfVar22 = fStack_1a8;
              pfVar21[6] = fStack_1a4;
              pfVar21[7] = fStack_1a0;
              pfVar21[8] = fStack_19c;
              pfVar21[9] = 0.0;
              pfVar21 = pfVar20;
            }
            else {
              lStack_190 = ((longlong)pfVar22 - (longlong)pfVar20) / 0x14;
              pfStack_150 = pfVar22;
              if (lStack_190 == 0) {
                lStack_190 = 1;
LAB_18046b163:
                pfVar21 = (float *)FUN_18062b420(_DAT_180c8ed18,lStack_190 * 0x14,CONCAT71(uVar35,3)
                                                );
              }
              else {
                lStack_190 = lStack_190 * 2;
                if (lStack_190 != 0) goto LAB_18046b163;
                pfVar21 = (float *)0x0;
              }
              pfStackX_18 = pfVar21;
              if (pfVar20 != pfVar22) {
                    // WARNING: Subroutine does not return
                memmove(pfVar21,pfVar20,(longlong)pfVar22 - (longlong)pfVar20);
              }
              *pfVar21 = fStack_1a8;
              pfVar21[1] = fStack_1a4;
              pfVar21[2] = fStack_1a0;
              pfVar21[3] = fStack_19c;
              pfVar21[4] = 0.0;
              pfVar38 = pfVar21 + 5;
              if (pfVar20 != (float *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(pfVar20);
              }
              pfVar25 = pfVar21 + lStack_190 * 5;
              pfStack_158 = pfVar21;
              pfStack_148 = pfVar25;
            }
            fStack_1a8 = (float)*(uint64_t *)(pfStackX_20 + -1);
            fStack_1a4 = (float)((ulonglong)*(uint64_t *)(pfStackX_20 + -1) >> 0x20);
            fStack_1a0 = (float)*(uint64_t *)pfVar26;
            fStack_19c = (float)((ulonglong)*(uint64_t *)pfVar26 >> 0x20);
            if (pfVar38 < pfVar25) {
              *pfVar38 = fStack_1a8;
              pfVar38[1] = fStack_1a4;
              pfVar38[2] = fStack_1a0;
              pfVar38[3] = fStack_19c;
              pfVar38[4] = 0.0;
              pfVar22 = pfVar21;
            }
            else {
              lStack_190 = ((longlong)pfVar38 - (longlong)pfVar21) / 0x14;
              pfStack_150 = pfVar38;
              if (lStack_190 == 0) {
                lStack_190 = 1;
LAB_18046b267:
                pfVar22 = (float *)FUN_18062b420(_DAT_180c8ed18,lStack_190 * 0x14,CONCAT71(uVar35,3)
                                                );
              }
              else {
                lStack_190 = lStack_190 * 2;
                if (lStack_190 != 0) goto LAB_18046b267;
                pfVar22 = (float *)0x0;
              }
              pfStackX_18 = pfVar22;
              if (pfVar21 != pfVar38) {
                    // WARNING: Subroutine does not return
                memmove(pfVar22,pfVar21,(longlong)pfVar38 - (longlong)pfVar21);
              }
              *pfVar22 = fStack_1a8;
              pfVar22[1] = fStack_1a4;
              pfVar22[2] = fStack_1a0;
              pfVar22[3] = fStack_19c;
              pfVar22[4] = 0.0;
              if (pfVar21 != (float *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(pfVar21);
              }
              pfVar25 = pfVar22 + lStack_190 * 5;
              pfStack_158 = pfVar22;
              pfStack_148 = pfVar25;
              pfVar38 = pfVar22;
            }
            pfVar21 = pfVar38 + 5;
            pfStack_150 = pfVar21;
          }
          pfVar26 = pfVar26 + 7;
          pfStackX_20 = pfStackX_20 + 7;
        } while (pfVar26 != pfVar24);
        pfVar24 = (float *)param_2[1];
      }
      pfVar25 = (float *)*param_2;
      pfVar26 = pfVar22;
      if (pfVar25 != pfVar24) {
        do {
          if (*(char *)(pfVar25 + 6) != '\0') break;
          pfVar25 = pfVar25 + 7;
        } while (pfVar25 != pfVar24);
        pfVar20 = pfVar25;
        if (pfVar25 != pfVar24) {
          while (pfVar38 = pfVar20, pfVar20 = pfVar38 + 7, pfVar20 != pfVar24) {
            if (*(char *)(pfVar38 + 0xd) == '\0') {
              fVar41 = pfVar38[8];
              fVar42 = pfVar38[9];
              fVar45 = pfVar38[10];
              *pfVar25 = *pfVar20;
              pfVar25[1] = fVar41;
              pfVar25[2] = fVar42;
              pfVar25[3] = fVar45;
              *(uint64_t *)(pfVar25 + 4) = *(uint64_t *)(pfVar38 + 0xb);
              pfVar25[6] = pfVar38[0xd];
              pfVar25 = pfVar25 + 7;
            }
          }
          if (pfVar25 != pfVar24) {
            pfVar20 = (float *)param_2[1];
            if (pfVar24 != pfVar20) {
                    // WARNING: Subroutine does not return
              memmove(pfVar25,pfVar24,(longlong)pfVar20 - (longlong)pfVar24);
            }
            param_2[1] = (ulonglong)
                         (pfVar20 + (((longlong)pfVar24 - (longlong)pfVar25) / 0x1c) * -7);
          }
        }
      }
      while (pfVar24 = pfVar26, pfVar25 = pfVar22, pfVar24 != pfVar21) {
        for (pfVar25 = pfVar24 + 5; pfVar26 = pfVar24 + 5, pfVar25 != pfVar21; pfVar25 = pfVar25 + 5
            ) {
          if ((0.001 <= ABS(*pfVar24 - *pfVar25)) || (0.001 <= ABS(pfVar24[1] - pfVar25[1]))) {
            fVar41 = pfVar25[2];
LAB_18046b46d:
            if ((ABS(*pfVar24 - fVar41) < 0.001) &&
               (((ABS(pfVar24[1] - pfVar25[3]) < 0.001 && (ABS(pfVar24[2] - *pfVar25) < 0.001)) &&
                (ABS(pfVar24[3] - pfVar25[1]) < 0.001)))) goto LAB_18046b4b2;
          }
          else {
            fVar41 = pfVar25[2];
            if ((0.001 <= ABS(pfVar24[2] - fVar41)) || (0.001 <= ABS(pfVar24[3] - pfVar25[3])))
            goto LAB_18046b46d;
LAB_18046b4b2:
            *(int8_t *)(pfVar24 + 4) = 1;
            *(int8_t *)(pfVar25 + 4) = 1;
          }
        }
      }
      for (; (pfVar25 != pfVar21 && (*(char *)(pfVar25 + 4) == '\0')); pfVar25 = pfVar25 + 5) {
      }
      pfVar26 = pfVar25;
      pfVar24 = pfVar22;
      if (pfVar25 != pfVar21) {
        while (pfVar20 = pfVar26, pfVar26 = pfVar20 + 5, pfVar26 != pfVar21) {
          if (*(char *)(pfVar20 + 9) == '\0') {
            fVar41 = pfVar20[6];
            fVar42 = pfVar20[7];
            fVar45 = pfVar20[8];
            *pfVar25 = *pfVar26;
            pfVar25[1] = fVar41;
            pfVar25[2] = fVar42;
            pfVar25[3] = fVar45;
            pfVar25[4] = pfVar20[9];
            pfVar25 = pfVar25 + 5;
          }
        }
        if (pfVar25 != pfVar21) {
          lVar30 = SUB168(SEXT816(-0x6666666666666667) *
                          SEXT816((longlong)pfVar21 - (longlong)pfVar25),8);
          pfStack_150 = pfVar21 + ((lVar30 >> 3) - (lVar30 >> 0x3f)) * 5;
          pfVar21 = pfStack_150;
        }
      }
      for (; pfVar24 != pfVar21; pfVar24 = pfVar24 + 5) {
        uStack_178 = *(uint64_t *)pfVar24;
        uStack_170 = *(uint64_t *)(pfVar24 + 2);
        uStack_168 = *(uint64_t *)pfVar19;
        pfStackX_20 = (float *)0x0;
        puVar37 = (int32_t *)param_2[1];
        if (puVar37 < (int32_t *)param_2[2]) {
          param_2[1] = (ulonglong)(puVar37 + 7);
          uStack_178._4_4_ = (float)((ulonglong)uStack_178 >> 0x20);
          uStack_170._4_4_ = (float)((ulonglong)uStack_170 >> 0x20);
          *puVar37 = (float)uStack_178;
          puVar37[1] = uStack_178._4_4_;
          puVar37[2] = (float)uStack_170;
          puVar37[3] = uStack_170._4_4_;
          *(uint64_t *)(puVar37 + 4) = uStack_168;
          puVar37[6] = 0;
        }
        else {
          uStackX_8 = (longlong)((longlong)puVar37 - *param_2) / 0x1c;
          if (uStackX_8 == 0) {
            uStackX_8 = 1;
LAB_18046b601:
            pfStackX_18 = (float *)FUN_18062b420(_DAT_180c8ed18,uStackX_8 * 0x1c,(char)param_2[3]);
            puVar37 = (int32_t *)param_2[1];
          }
          else {
            uStackX_8 = uStackX_8 * 2;
            if (uStackX_8 != 0) goto LAB_18046b601;
            pfStackX_18 = (float *)0x0;
          }
          puVar36 = (int32_t *)*param_2;
          if (puVar36 != puVar37) {
                    // WARNING: Subroutine does not return
            memmove(pfStackX_18,puVar36,(longlong)puVar37 - (longlong)puVar36);
          }
          *pfStackX_18 = (float)uStack_178;
          pfStackX_18[1] = uStack_178._4_4_;
          pfStackX_18[2] = (float)uStack_170;
          pfStackX_18[3] = uStack_170._4_4_;
          *(uint64_t *)(pfStackX_18 + 4) = uStack_168;
          pfStackX_18[6] = SUB84(pfStackX_20,0);
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_2 = (ulonglong)pfStackX_18;
          param_2[1] = (ulonglong)(pfStackX_18 + 7);
          param_2[2] = (ulonglong)(pfStackX_18 + uStackX_8 * 7);
        }
      }
      if (pfVar22 != (float *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(pfVar22);
      }
      pfVar19 = pfVar19 + 2;
    } while (pfVar19 != pfStack_f8);
    uVar31 = CONCAT44(fStack_10c,fStack_110);
    uVar33 = CONCAT44(fStack_104,fStack_108);
    uVar32 = CONCAT44(fStack_fc,fStack_100);
  }
  puVar37 = (int32_t *)param_2[1];
  puVar36 = (int32_t *)*param_2;
  uStack_178 = uVar31;
  uStack_170 = uVar33;
  uStack_168 = uVar32;
  plVar23 = (longlong *)func_0x00018046bc20(&pfStackX_18,&uStack_178);
  lVar30 = *plVar23;
  if (puVar36 != puVar37) {
    while ((cVar18 = func_0x00018046a830(puVar36,lVar30), cVar18 == '\0' &&
           (cVar18 = func_0x00018046a830(extraout_XMM0_Da,lVar30 + 8), cVar18 == '\0'))) {
      cVar18 = func_0x00018046a830(extraout_XMM0_Da_00,lVar30 + 0x10);
      if ((cVar18 != '\0') || (puVar36 = puVar36 + 7, puVar36 == puVar37)) break;
    }
    if ((puVar36 != puVar37) && (puVar28 = puVar36 + 7, puVar28 != puVar37)) {
      do {
        cVar18 = func_0x00018046a830(puVar28,&uStack_178);
        if ((cVar18 == '\0') &&
           ((cVar18 = func_0x00018046a830(extraout_XMM0_Da_01,&uStack_170), cVar18 == '\0' &&
            (cVar18 = func_0x00018046a830(extraout_XMM0_Da_02,&uStack_168), cVar18 == '\0')))) {
          uVar14 = puVar28[1];
          uVar15 = puVar28[2];
          uVar16 = puVar28[3];
          *puVar36 = *puVar28;
          puVar36[1] = uVar14;
          puVar36[2] = uVar15;
          puVar36[3] = uVar16;
          *(uint64_t *)(puVar36 + 4) = *(uint64_t *)(puVar28 + 4);
          puVar36[6] = puVar28[6];
          puVar36 = puVar36 + 7;
        }
        puVar28 = puVar28 + 7;
      } while (puVar28 != puVar37);
    }
  }
  FUN_18046bba0(param_2,puVar36,puVar37);
  puVar39 = (uint64_t *)*param_2;
  puVar5 = (uint64_t *)param_2[1];
  pfVar26 = pfStack_138;
  pfVar25 = pfStack_130;
  pfVar19 = pfStack_128;
  do {
    pfStack_130 = pfVar25;
    if (puVar39 == puVar5) {
      if (pfVar26 != (float *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(pfVar26);
      }
      return param_2;
    }
    fStack_1a8 = (float)*puVar39;
    fStack_1a4 = (float)((ulonglong)*puVar39 >> 0x20);
    fStack_1a0 = (float)puVar39[1];
    fStack_19c = (float)((ulonglong)puVar39[1] >> 0x20);
    if (pfVar25 < pfVar19) {
      *pfVar25 = fStack_1a8;
      pfVar25[1] = fStack_1a4;
      pfVar25[2] = fStack_1a0;
      pfVar25[3] = fStack_19c;
      pfVar25[4] = 0.0;
      pfVar24 = pfVar26;
    }
    else {
      lVar30 = ((longlong)pfVar25 - (longlong)pfVar26) / 0x14;
      if (lVar30 == 0) {
        lVar30 = 1;
LAB_18046b89a:
        pfVar24 = (float *)FUN_18062b420(_DAT_180c8ed18,lVar30 * 0x14,3);
      }
      else {
        lVar30 = lVar30 * 2;
        if (lVar30 != 0) goto LAB_18046b89a;
        pfVar24 = (float *)0x0;
      }
      pfStackX_18 = pfVar24;
      if (pfVar26 != pfVar25) {
                    // WARNING: Subroutine does not return
        memmove(pfVar24,pfVar26,(longlong)pfVar25 - (longlong)pfVar26);
      }
      *pfVar24 = fStack_1a8;
      pfVar24[1] = fStack_1a4;
      pfVar24[2] = fStack_1a0;
      pfVar24[3] = fStack_19c;
      pfVar24[4] = 0.0;
      if (pfVar26 != (float *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(pfVar26);
      }
      pfVar19 = pfVar24 + lVar30 * 5;
      pfStack_138 = pfVar24;
      pfStack_128 = pfVar19;
      pfVar25 = pfVar24;
    }
    pfVar26 = pfVar25 + 5;
    fStack_1a8 = (float)puVar39[1];
    fStack_1a4 = (float)((ulonglong)puVar39[1] >> 0x20);
    fStack_1a0 = (float)puVar39[2];
    fStack_19c = (float)((ulonglong)puVar39[2] >> 0x20);
    if (pfVar26 < pfVar19) {
      pfVar21 = pfVar25 + 10;
      *pfVar26 = fStack_1a8;
      pfVar25[6] = fStack_1a4;
      pfVar25[7] = fStack_1a0;
      pfVar25[8] = fStack_19c;
      pfVar25[9] = 0.0;
      pfVar25 = pfVar24;
    }
    else {
      lVar30 = ((longlong)pfVar26 - (longlong)pfVar24) / 0x14;
      pfStack_130 = pfVar26;
      if (lVar30 == 0) {
        lVar30 = 1;
LAB_18046b995:
        pfVar25 = (float *)FUN_18062b420(_DAT_180c8ed18,lVar30 * 0x14,3);
      }
      else {
        lVar30 = lVar30 * 2;
        if (lVar30 != 0) goto LAB_18046b995;
        pfVar25 = (float *)0x0;
      }
      pfStackX_18 = pfVar25;
      if (pfVar24 != pfVar26) {
                    // WARNING: Subroutine does not return
        memmove(pfVar25,pfVar24,(longlong)pfVar26 - (longlong)pfVar24);
      }
      *pfVar25 = fStack_1a8;
      pfVar25[1] = fStack_1a4;
      pfVar25[2] = fStack_1a0;
      pfVar25[3] = fStack_19c;
      pfVar25[4] = 0.0;
      pfVar21 = pfVar25 + 5;
      if (pfVar24 != (float *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(pfVar24);
      }
      pfVar19 = pfVar25 + lVar30 * 5;
      pfStack_138 = pfVar25;
      pfStack_128 = pfVar19;
    }
    fStack_1a8 = (float)puVar39[2];
    fStack_1a4 = (float)((ulonglong)puVar39[2] >> 0x20);
    fStack_1a0 = (float)*puVar39;
    fStack_19c = (float)((ulonglong)*puVar39 >> 0x20);
    if (pfVar21 < pfVar19) {
      *pfVar21 = fStack_1a8;
      pfVar21[1] = fStack_1a4;
      pfVar21[2] = fStack_1a0;
      pfVar21[3] = fStack_19c;
      pfVar21[4] = 0.0;
      pfVar26 = pfVar25;
    }
    else {
      pfStackX_18 = (float *)((longlong)pfVar21 - (longlong)pfVar25);
      pfStack_130 = pfVar21;
      if ((longlong)pfStackX_18 / 0x14 == 0) {
        lVar30 = 1;
LAB_18046ba95:
        pfVar26 = (float *)FUN_18062b420(_DAT_180c8ed18,lVar30 * 0x14,3);
      }
      else {
        lVar30 = ((longlong)pfStackX_18 / 0x14) * 2;
        if (lVar30 != 0) goto LAB_18046ba95;
        pfVar26 = (float *)0x0;
      }
      if (pfVar25 != pfVar21) {
                    // WARNING: Subroutine does not return
        memmove(pfVar26,pfVar25,pfStackX_18);
      }
      *pfVar26 = fStack_1a8;
      pfVar26[1] = fStack_1a4;
      pfVar26[2] = fStack_1a0;
      pfVar26[3] = fStack_19c;
      pfVar26[4] = 0.0;
      if (pfVar25 != (float *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(pfVar25);
      }
      pfVar19 = pfVar26 + lVar30 * 5;
      pfStack_138 = pfVar26;
      pfStack_128 = pfVar19;
      pfVar21 = pfVar26;
    }
    pfVar25 = pfVar21 + 5;
    puVar39 = (uint64_t *)((longlong)puVar39 + 0x1c);
  } while( true );
}



longlong FUN_18046bba0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (param_3 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(param_2,param_3,lVar1 - param_3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + ((param_3 - param_2) / 0x1c) * -0x1c;
  }
  return param_2;
}








#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part092_sub002_sub002.c - 1 个函数

// 函数: void FUN_180116470(int64_t param_1,int32_t param_2,int32_t param_3)
void FUN_180116470(int64_t param_1,int32_t param_2,int32_t param_3)

{
  int64_t lVar1;
  short sVar2;
  int iVar3;
  int32_t *puVar4;
  
  lVar1 = param_1 + 0x18;
  *(int16_t *)(param_1 + 0xe18) = 99;
  *(int32_t *)(param_1 + 0xe20) = 999;
  if (*(short *)(param_1 + 0xe16) == 99) {
    FUN_180116060(lVar1);
  }
  iVar3 = *(int *)(param_1 + 0xe1c);
  while (999 < iVar3) {
    FUN_180116060(lVar1);
    iVar3 = *(int *)(param_1 + 0xe1c);
  }
  sVar2 = *(short *)(param_1 + 0xe16);
  *(short *)(param_1 + 0xe16) = sVar2 + 1;
  puVar4 = (int32_t *)((int64_t)sVar2 * 0x10 + lVar1);
  if (puVar4 != (int32_t *)0x0) {
    *puVar4 = param_2;
    puVar4[1] = 0;
    puVar4[2] = param_3;
    puVar4[3] = 0xffffffff;
  }
  return;
}



uint64_t FUN_180116560(uint *param_1,uint param_2,code *param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint uVar2;
  int32_t uStack_48;
  uint uStack_44;
  uint64_t uStack_40;
  ushort uStack_38;
  uint64_t uStack_36;
  uint64_t uStack_2e;
  uint64_t uStack_26;
  uint64_t uStack_1e;
  int32_t uStack_16;
  int16_t uStack_12;
  
  uVar2 = *param_1;
  if ((((uVar2 & 0xffffff80) == 0) && (uVar2 != 0x20)) &&
     (uVar1 = isprint(uVar2 & 0xff), (int)uVar1 == 0)) {
    if (((uVar2 == 10) && ((param_2 >> 0x14 & 1) != 0)) ||
       ((uVar1 = uVar1 & 0xffffffffffffff00, uVar2 == 9 && ((param_2 >> 10 & 1) != 0)))) {
      uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
    }
    if ((char)uVar1 == '\0') goto LAB_1801166cb;
  }
  uVar1 = (uint64_t)(uVar2 - 0xe000);
  if (uVar2 - 0xe000 < 0x1900) goto LAB_1801166cb;
  if ((param_2 & 0x2000f) != 0) {
    if (((((param_2 & 1) != 0) &&
         ((uVar1 = (uint64_t)(uVar2 - 0x2a), (uVar2 - 0x2a & 0xfffffff0) != 0 || (uVar2 == 0x2c))))
        || (((param_2 >> 0x11 & 1) != 0 &&
            ((uVar1 = (uint64_t)(uVar2 - 0x2a), 0x3b < uVar2 - 0x2a ||
             ((0x80000000800fffbU >> (uVar1 & 0x3f) & 1) == 0)))))) ||
       (((param_2 & 2) != 0 &&
        ((uVar1 = (uint64_t)(uVar2 - 0x30), 0x36 < uVar2 - 0x30 ||
         ((0x7e0000007e03ffU >> (uVar1 & 0x3f) & 1) == 0)))))) goto LAB_1801166cb;
    if (((param_2 & 4) != 0) && (uVar1 = (uint64_t)(uVar2 - 0x61), uVar2 - 0x61 < 0x1a)) {
      uVar2 = uVar2 - 0x20;
      *param_1 = uVar2;
    }
    if (((param_2 & 8) != 0) && (((uVar2 == 0x20 || (uVar2 == 9)) || (uVar2 == 0x3000))))
    goto LAB_1801166cb;
  }
  if ((param_2 >> 9 & 1) != 0) {
    uStack_48 = 0x200;
    uStack_16 = 0;
    uStack_12 = 0;
    uStack_38 = (ushort)uVar2;
    uStack_36 = 0;
    uStack_2e = 0;
    uStack_26 = 0;
    uStack_1e = 0;
    uStack_44 = param_2;
    uStack_40 = param_4;
    uVar1 = (*param_3)(&uStack_48);
    if ((int)uVar1 == 0) {
      *param_1 = (uint)uStack_38;
      uVar1 = (uint64_t)(uint)uStack_38;
      if (uStack_38 != 0) goto LAB_1801166c7;
    }
LAB_1801166cb:
    return uVar1 & 0xffffffffffffff00;
  }
LAB_1801166c7:
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801166f0(uint64_t param_1,char *param_2,int param_3,uint64_t *param_4,
                       uint param_5,code *param_6,uint64_t param_7)

{
  int *piVar1;
  float *pfVar2;
  uint *puVar3;
  short sVar4;
  short *psVar5;
  char *pcVar6;
  short *psVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  short *psVar13;
  bool bVar14;
  int64_t lVar15;
  float fVar16;
  char cVar17;
  char cVar18;
  float fVar19;
  int iVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  float fVar24;
  int32_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  int64_t lVar28;
  char *pcVar29;
  int16_t *puVar30;
  char *pcVar31;
  int64_t *plVar32;
  short *psVar33;
  float *pfVar34;
  int iVar35;
  uint uVar36;
  short *psVar38;
  int64_t lVar39;
  byte bVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  int iVar44;
  byte bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  char *pcStackX_10;
  uint64_t in_stack_fffffffffffffd68;
  uint64_t *puVar53;
  uint64_t uVar54;
  uint64_t in_stack_fffffffffffffd70;
  uint64_t in_stack_fffffffffffffd78;
  char cStack_268;
  byte bStack_260;
  byte bStack_25a;
  byte bStack_259;
  uint auStack_258 [2];
  float fStack_250;
  float fStack_24c;
  char cStack_248;
  float fStack_244;
  float fStack_240;
  short *psStack_238;
  float fStack_230;
  float fStack_22c;
  uint64_t uStack_228;
  uint uStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  uint64_t uStack_200;
  char *pcStack_1f8;
  int32_t uStack_1f0;
  float fStack_1ec;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  uint64_t uStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  uint64_t uStack_1b0;
  int64_t lStack_1a8;
  float afStack_1a0 [2];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  int32_t uStack_188;
  uint uStack_184;
  uint64_t uStack_180;
  int32_t uStack_178;
  int32_t uStack_174;
  uint64_t uStack_170;
  int iStack_168;
  int32_t uStack_164;
  char cStack_160;
  uint32_t uStack_15f;
  int iStack_15c;
  int iStack_158;
  int8_t uStack_154;
  int16_t uStack_153;
  int8_t uStack_151;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  int32_t uStack_140;
  uint uStack_13c;
  uint64_t uStack_138;
  uint64_t uStack_130;
  char *pcStack_128;
  float fStack_120;
  int iStack_11c;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  float fStack_fc;
  int8_t auStack_f8 [16];
  int8_t auStack_e8 [176];
  uint64_t uVar37;
  
  lVar39 = SYSTEM_DATA_MANAGER_A;
  uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd68 >> 0x20);
  uVar27 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  lStack_1a8 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(uVar27 + 0xb1) = 1;
  psVar5 = *(short **)(lVar39 + 0x1af8);
  if ((char)psVar5[0x5a] != '\0') {
LAB_1801168eb:
    return uVar27 & 0xffffffffffffff00;
  }
  uVar41 = param_5 >> 0x14;
  bStack_260 = ~(byte)(param_5 >> 0xe) & 1;
  uStack_220 = param_5 >> 0xf & 0x1ff01;
  uStack_200 = (int16_t *)
               (CONCAT44(uStack_200._4_4_,
                         (uint)CONCAT11((char)(param_5 >> 0x18),~(byte)(param_5 >> 0x10))) &
               0xffffffffffffff01);
  fStack_230 = (float)(param_5 >> 0x12 & 0xffffff01);
  uStack_1c8 = psVar5;
  if ((uVar41 & 1) != 0) {
    FUN_18012e3b0();
  }
  fVar19 = (float)FUN_180123c00(psVar5,param_1,0);
  pcStack_1f8 = (char *)CONCAT44(pcStack_1f8._4_4_,0xbf800000);
  puVar53 = (uint64_t *)CONCAT44(uVar21,0xbf800000);
  fStack_244 = fVar19;
  FUN_180127c60(afStack_1a0,param_1,0,1,puVar53);
  func_0x00018012d6a0();
  FUN_180124550(&fStack_208,*param_4);
  fStack_218 = *(float *)(psVar5 + 0x80);
  fStack_20c = fStack_204 + *(float *)(psVar5 + 0x82);
  fStack_210 = fStack_218 + fStack_208;
  fStack_214 = *(float *)(psVar5 + 0x82);
  if (afStack_1a0[0] <= 0.0) {
    fStack_148 = 0.0;
  }
  else {
    fStack_148 = afStack_1a0[0] + *(float *)(lVar39 + 0x1674);
  }
  fStack_148 = fStack_210 + fStack_148;
  psStack_238 = psVar5;
  fStack_150 = fStack_218;
  fStack_14c = fStack_214;
  fStack_144 = fStack_20c;
  if ((uVar41 & 1) == 0) {
    uVar21 = *(int32_t *)(lVar39 + 0x1660);
    uVar26 = func_0x00018010e570(&fStack_150,&uStack_1b0);
    func_0x000180124080(uVar26,uVar21);
    uVar27 = FUN_180124190(&fStack_150,fVar19,&fStack_218);
    if ((char)uVar27 == '\0') goto LAB_1801168eb;
  }
  else {
    FUN_180124190(&fStack_150,fVar19,&fStack_218);
    uVar26 = func_0x00018010e570(&fStack_218,&uStack_1b0);
    cVar17 = FUN_180128850(fVar19,uVar26,0);
    lVar28 = SYSTEM_DATA_MANAGER_A;
    if (cVar17 == '\0') {
      FUN_1801285e0();
      uVar27 = FUN_18012e4e0();
      goto LAB_1801168eb;
    }
    *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
    psStack_238 = *(short **)(lVar28 + 0x1af8);
    *(uint *)(psStack_238 + 0xbc) = *(uint *)(psStack_238 + 0xbc) | *(uint *)(psStack_238 + 0xb8);
    fStack_208 = fStack_208 - *(float *)(psStack_238 + 0x52);
  }
  cVar17 = FUN_1801243a0(&fStack_218,fVar19);
  if (cVar17 != '\0') {
    *(int32_t *)(lVar39 + 0x1dcc) = 1;
  }
  if ((char)uStack_220 != '\0') {
    lVar28 = func_0x000180297170(*(uint64_t *)(lVar39 + 0x19f0),0x2a);
    *(int32_t *)(lVar39 + 0x2d30) = **(int32_t **)(lVar39 + 0x19f0);
    *(int32_t *)(lVar39 + 0x2d34) = *(int32_t *)(*(int64_t *)(lVar39 + 0x19f0) + 4);
    *(uint64_t *)(lVar39 + 0x2d38) = *(uint64_t *)(*(int64_t *)(lVar39 + 0x19f0) + 8);
    *(int32_t *)(lVar39 + 0x2d90) = *(int32_t *)(*(int64_t *)(lVar39 + 0x19f0) + 0x60);
    *(int32_t *)(lVar39 + 0x2d94) = *(int32_t *)(*(int64_t *)(lVar39 + 0x19f0) + 100);
    *(uint64_t *)(lVar39 + 0x2d88) = *(uint64_t *)(*(int64_t *)(lVar39 + 0x19f0) + 0x58);
    *(int64_t *)(lVar39 + 0x2d70) = lVar28;
    *(int32_t *)(lVar39 + 0x2d78) = *(int32_t *)(lVar28 + 4);
    FUN_18012d7c0((int32_t *)(lVar39 + 0x2d30));
  }
  cVar18 = FUN_180124460(psVar5,fVar19,(param_5 & 0x440) == 0);
  if ((cVar17 == '\0') || (*(char *)(lVar39 + 0x410) == '\0')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (((((uVar41 & 1) == 0) || (*(int *)(lVar39 + 0x1b2c) != 0)) ||
      (*(float *)(lVar39 + 0x1ea8) != fStack_244)) ||
     (iVar20 = func_0x000180123d50(psStack_238,&unknown_var_2064_ptr,0),
     *(int *)(lVar39 + 0x1b30) != iVar20)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  psVar5 = uStack_1c8;
  fVar51 = fStack_244;
  fVar19 = *(float *)(lVar39 + 0x1b2c);
  if ((fVar19 == fStack_244) ||
     ((*(float *)(lVar39 + 0x1cb0) != fStack_244 &&
      ((*(float *)(lVar39 + 0x1ca4) != fStack_244 || (*(int *)(lVar39 + 0x1cc0) != 3)))))) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  bVar14 = false;
  if (((fVar19 == fStack_244) || (((param_5 & 0x10) == 0 && (!bVar11)))) || ((uVar41 & 1) != 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((((cVar18 != '\0') || (bVar8)) || (bVar9)) || (bVar11)) {
    if (fVar19 != fStack_244) {
      lVar28 = -1;
      do {
        lVar28 = lVar28 + 1;
      } while (param_2[lVar28] != '\0');
      FUN_18011dae0(lVar39 + 0x1eb0,param_3 + 1);
      iVar20 = (int)lVar28 + 1;
      FUN_18011da90(lVar39 + 0x1ec0,iVar20);
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(lVar39 + 0x1ec8),param_2,(int64_t)iVar20);
    }
    func_0x000180123e90(fStack_244,uStack_1c8);
    FUN_180123f30(fVar51,psVar5);
    FUN_18012d2e0();
    if (((uVar41 & 1) == 0) && (-1 < (char)param_5)) {
      *(uint *)(lVar39 + 0x1b44) = *(uint *)(lVar39 + 0x1b44) | 0xc;
    }
  }
  else if (*(char *)(lVar39 + 0x410) != '\0') {
    bVar14 = true;
  }
  bStack_25a = 0;
  bStack_259 = 0;
  fStack_250 = 0.0;
  if (*(float *)(lVar39 + 0x1b2c) == fVar51) {
    if ((bStack_260 == 0) && (*(char *)(lVar39 + 0x1b3c) == '\0')) {
      FUN_18011dae0((int32_t *)(lVar39 + 0x1eb0),param_3 + 1);
      puVar53 = &uStack_1b0;
      uStack_1b0 = 0;
      uVar21 = FUN_180121740(*(uint64_t *)(lVar39 + 0x1eb8),*(int32_t *)(lVar39 + 0x1eb0),
                             param_2,0,puVar53);
      *(int32_t *)(lVar39 + 0x1ee4) = uVar21;
      *(int *)(lVar39 + 0x1ee0) = (int)uStack_1b0 - (int)param_2;
      func_0x00018010e6d0(lVar39 + 0x1ea8);
    }
    lVar28 = lVar39 + 0x1ea8;
    fStack_250 = *(float *)(lVar39 + 0x1ee0);
    *(uint *)(lVar39 + 0x2d1c) = param_5;
    *(code **)(lVar39 + 0x2d20) = param_6;
    *(int *)(lVar39 + 0x1ee8) = param_3;
    *(uint64_t *)(lVar39 + 0x2d28) = param_7;
    *(int32_t *)(lVar39 + 0x3050) = 1;
    *(bool *)(lVar39 + 0x1b3d) = *(char *)(lVar39 + 0x120) == '\0';
    if ((uVar41 & 1) == 0) {
      fVar19 = *(float *)(lVar39 + 0x19f8) * 0.5;
    }
    else {
      fVar19 = (*(float *)(lVar39 + 0x11c) - *(float *)(psStack_238 + 0x82)) -
               *(float *)(lVar39 + 0x1660);
    }
    cVar18 = *(char *)(lVar39 + 0xc9);
    if (bVar10) {
LAB_180116f3b:
      func_0x00018010e700();
      *(int8_t *)(lVar39 + 0x2d19) = 1;
    }
    else {
      if (cVar17 != '\0') {
        if (cVar18 == '\0') {
          if (*(char *)(lVar39 + 0x415) != '\0') goto LAB_180116f3b;
        }
        else if (*(char *)(lVar39 + 0x415) != '\0') {
          FUN_180115640(lVar28,lVar39 + 0x1ef0,0x1000c,fVar19);
          *(int8_t *)(lVar39 + 0x2d18) = 1;
          *(int32_t *)(lVar39 + 0x2d14) = 0xbe99999a;
          FUN_180115640(lVar28,lVar39 + 0x1ef0,0x3000d);
          *(int8_t *)(lVar39 + 0x2d18) = 1;
          *(int32_t *)(lVar39 + 0x2d14) = 0xbe99999a;
          goto LAB_180116f58;
        }
      }
      if ((*(char *)(lVar39 + 0x410) == '\0') || (*(char *)(lVar39 + 0x2d19) != '\0')) {
        if (((*(char *)(lVar39 + 0x120) != '\0') && (*(char *)(lVar39 + 0x2d19) == '\0')) &&
           ((*(float *)(lVar39 + 0x3ac) != 0.0 || (*(float *)(lVar39 + 0x3b0) != 0.0)))) {
          FUN_180115190(lVar28,lVar39 + 0x1ef0);
          *(int32_t *)(lVar39 + 0x2d14) = 0xbe99999a;
          *(int8_t *)(lVar39 + 0x2d18) = 1;
        }
      }
      else if (cVar17 != '\0') {
        FUN_180115130(lVar28,lVar39 + 0x1ef0);
        *(int32_t *)(lVar39 + 0x2d14) = 0xbe99999a;
      }
    }
LAB_180116f58:
    if ((*(char *)(lVar39 + 0x2d19) != '\0') && (*(char *)(lVar39 + 0x120) == '\0')) {
      *(int8_t *)(lVar39 + 0x2d19) = 0;
    }
    piVar1 = (int *)(lVar39 + 0x1530);
    if (0 < *piVar1) {
      if ((((*(char *)(lVar39 + 0x134) == '\0') || (*(char *)(lVar39 + 0x136) != '\0')) &&
          ((cVar18 == '\0' || (*(char *)(lVar39 + 0x137) == '\0')))) &&
         (((bStack_260 != 0 && (!bVar11)) && (uVar37 = 0, uVar27 = uVar37, 0 < *piVar1)))) {
        do {
          auStack_258[0] = (uint)*(ushort *)(uVar27 + *(int64_t *)(lVar39 + 0x1538));
          cVar17 = FUN_180116560(auStack_258,param_5,param_6,param_7);
          if (cVar17 != '\0') {
            FUN_180115640(lVar28,lVar39 + 0x1ef0,auStack_258[0]);
            *(int8_t *)(lVar39 + 0x2d18) = 1;
            *(int32_t *)(lVar39 + 0x2d14) = 0xbe99999a;
          }
          uVar36 = (int)uVar37 + 1;
          uVar37 = (uint64_t)uVar36;
          uVar27 = uVar27 + 2;
          fVar51 = fStack_244;
        } while ((int)uVar36 < *piVar1);
      }
      FUN_18011dae0(piVar1,0);
    }
  }
  uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
  uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
  bVar8 = false;
  if (((*(float *)(lVar39 + 0x1b2c) != fVar51) || (*(char *)(lVar39 + 0x1b3c) != '\0')) || (bVar14))
  {
LAB_18011788f:
    pfVar34 = (float *)(lVar39 + 0x1ea8);
LAB_180117445:
    bVar9 = false;
  }
  else {
    cStack_248 = *(char *)(lVar39 + 0xc9);
    cVar17 = *(char *)(lVar39 + 0x135);
    cVar18 = *(char *)(lVar39 + 0x134);
    uVar36 = -(uint)(cVar17 != '\0') & 0x20000;
    if (cStack_248 == '\0') {
      if ((cVar18 != '\0') && (*(char *)(lVar39 + 0x137) == '\0')) goto LAB_180117102;
LAB_1801170c0:
      bVar8 = false;
    }
    else {
      if ((*(char *)(lVar39 + 0x137) == '\0') || (cVar18 != '\0')) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) goto LAB_1801170c0;
LAB_180117102:
      if ((*(char *)(lVar39 + 0x136) != '\0') || (cVar17 != '\0')) goto LAB_1801170c0;
      bVar8 = true;
    }
    if ((((cStack_248 == '\0') || (*(char *)(lVar39 + 0x137) == '\0')) || (cVar17 == '\0')) ||
       ((cVar18 = *(char *)(lVar39 + 0x134), cVar18 != '\0' || (*(char *)(lVar39 + 0x136) != '\0')))
       ) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    cStack_268 = cVar18;
    if (((cStack_248 == '\0') ||
        (cStack_268 = *(char *)(lVar39 + 0x136), *(char *)(lVar39 + 0x137) == '\0')) ||
       ((cVar18 != '\0' || (cStack_268 != '\0')))) {
      bVar45 = 0;
      if ((((cVar18 == '\0') || (cVar17 != '\0')) || (*(char *)(lVar39 + 0x136) != '\0')) ||
         (*(char *)(lVar39 + 0x137) != '\0')) goto LAB_18011713b;
      bVar11 = true;
LAB_18011717f:
      bVar10 = false;
    }
    else {
      bVar45 = 1;
LAB_18011713b:
      bVar11 = false;
      if (((*(char *)(lVar39 + 0x135) == '\0') || (cVar18 != '\0')) ||
         ((*(char *)(lVar39 + 0x136) != '\0' || (*(char *)(lVar39 + 0x137) != '\0'))))
      goto LAB_18011717f;
      bVar10 = true;
    }
    if ((((((bVar8) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x84))) &&
          (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x84),1), cVar17 != '\0')) ||
         (((bVar10 && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 100))) &&
          (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 100),1), cVar17 != '\0')))) &&
        ((bStack_260 != 0 && ((char)uStack_220 == '\0')))) &&
       (((uVar41 & 1) == 0 || (*(int *)(lVar39 + 0x1ef4) != *(int *)(lVar39 + 0x1ef8))))) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (((((bVar8) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x7c))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x7c),1), cVar17 != '\0')) ||
        (((bVar11 && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x60))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x60),1), cVar17 != '\0')))) &&
       (((char)uStack_220 == '\0' &&
        (((uVar41 & 1) == 0 || (*(int *)(lVar39 + 0x1ef4) != *(int *)(lVar39 + 0x1ef8))))))) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (((((bVar8) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x80))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x80),1), cVar17 != '\0')) ||
        (((bVar10 && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x60))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x60),1), cVar17 != '\0')))) &&
       (bStack_260 != 0)) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if (((bVar8) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x8c))) &&
       ((cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x8c),1), cVar17 != '\0' &&
        ((bStack_260 != 0 && ((char)uStack_200 != '\0')))))) {
      bVar40 = 1;
    }
    else {
      bVar40 = 0;
    }
    if (((((bVar8) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x88))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x88),1), cVar17 != '\0')) ||
        (((bVar9 && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x8c))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x8c),1), cVar17 != '\0')))) &&
       ((bStack_260 != 0 && ((char)uStack_200 != '\0')))) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x40)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x40),1);
      uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
      uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
      if (cVar17 == '\0') goto LAB_18011739a;
      if (bVar45 == 0) {
        uVar42 = 0x10000;
        if (cStack_268 != '\0') {
          uVar42 = 0x1000c;
        }
      }
      else {
        uVar42 = 0x10004;
      }
      uVar36 = uVar42 | uVar36;
LAB_180117375:
      pfVar34 = (float *)(lVar39 + 0x1ea8);
      FUN_180115640(pfVar34,lVar39 + 0x1ef0,uVar36);
      *(int8_t *)(lVar39 + 0x2d18) = 1;
      *(int32_t *)(lVar39 + 0x2d14) = 0xbe99999a;
      goto LAB_180117443;
    }
LAB_18011739a:
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x44)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x44),1);
      uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
      uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
      if (cVar17 != '\0') {
        if (bVar45 == 0) {
          uVar42 = 0x10001;
          if (cStack_268 != '\0') {
            uVar42 = 0x1000d;
          }
          uVar36 = uVar42 | uVar36;
        }
        else {
          uVar36 = uVar36 | 0x10005;
        }
        goto LAB_180117375;
      }
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x48)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x48),1);
      uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
      uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
      if ((cVar17 == '\0') || ((uVar41 & 1) == 0)) goto LAB_180117593;
      if (*(char *)(lVar39 + 0x134) == '\0') {
        uVar36 = (uint)bVar45 * 4 + 0x10002 | uVar36;
        goto LAB_180117375;
      }
      fVar19 = *(float *)(psStack_238 + 0x48) - *(float *)(lVar39 + 0x19f8);
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
LAB_180117437:
      func_0x00018012dd90(psStack_238,fVar19);
      goto LAB_18011743c;
    }
LAB_180117593:
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x4c)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x4c),1);
      uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
      uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
      if ((cVar17 != '\0') && ((uVar41 & 1) != 0)) {
        if (*(char *)(lVar39 + 0x134) == '\0') {
          uVar36 = (uint)bVar45 * 4 + 0x10003 | uVar36;
          goto LAB_180117375;
        }
        fVar51 = (float)func_0x00018012e030();
        fVar19 = *(float *)(lVar39 + 0x19f8) + *(float *)(psStack_238 + 0x48);
        if (fVar51 <= fVar19) {
          fVar19 = fVar51;
        }
        goto LAB_180117437;
      }
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x58)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x58),1);
      uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
      uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
      if (cVar17 != '\0') {
        uVar42 = 0x10006;
        if (*(char *)(lVar39 + 0x134) == '\0') {
          uVar42 = 0x10004;
        }
        uVar36 = uVar42 | uVar36;
        goto LAB_180117375;
      }
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x5c)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x5c),1);
      uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
      uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
      if (cVar17 != '\0') {
        uVar42 = 0x10007;
        if (*(char *)(lVar39 + 0x134) == '\0') {
          uVar42 = 0x10005;
        }
        uVar36 = uVar42 | uVar36;
        goto LAB_180117375;
      }
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 100)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 100),1);
      uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
      uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
      if ((cVar17 != '\0') && (bStack_260 != 0)) {
        uVar36 = uVar36 | 0x10008;
        goto LAB_180117375;
      }
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x68)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x68),1);
      uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
      uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
      if ((cVar17 != '\0') && (bStack_260 != 0)) {
        if (*(int *)(lVar39 + 0x1ef4) == *(int *)(lVar39 + 0x1ef8)) {
          if (cStack_268 == '\0') {
            if ((((cStack_248 == '\0') || (*(char *)(lVar39 + 0x137) == '\0')) ||
                (*(char *)(lVar39 + 0x136) != '\0')) || (*(char *)(lVar39 + 0x134) != '\0'))
            goto LAB_18011774b;
            uVar26 = 0x30004;
          }
          else {
            uVar26 = 0x3000c;
          }
          FUN_180115640(lVar39 + 0x1ea8,lVar39 + 0x1ef0,uVar26);
          *(int8_t *)(lVar39 + 0x2d18) = 1;
          *(int32_t *)(lVar39 + 0x2d14) = 0xbe99999a;
          uVar36 = uVar36 | 0x10009;
        }
        else {
LAB_18011774b:
          uVar36 = uVar36 | 0x10009;
        }
        goto LAB_180117375;
      }
    }
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x70) < 0) {
LAB_1801177f4:
      if (((param_5 >> 10 & 1) != 0) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x3c))) {
        cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x3c),1);
        uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
        uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
        if ((((cVar17 != '\0') &&
             ((*(char *)(lVar39 + 0x134) == '\0' && (*(char *)(lVar39 + 0x135) == '\0')))) &&
            (*(char *)(lVar39 + 0x136) == '\0')) && (bStack_260 != 0)) {
          auStack_258[0] = 9;
          cVar17 = FUN_180116560(auStack_258,param_5,param_6,param_7);
          uVar36 = auStack_258[0];
          if (cVar17 != '\0') goto LAB_180117375;
          goto LAB_18011743c;
        }
      }
      if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x74)) {
        cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x74),1);
        uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
        uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
        if (cVar17 != '\0') {
          bVar8 = true;
          bVar14 = true;
          goto LAB_18011788f;
        }
      }
      uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
      uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
      if ((bVar40 != 0) || (bVar9)) {
        pfVar34 = (float *)(lVar39 + 0x1ea8);
        FUN_180115640(pfVar34,lVar39 + 0x1ef0,(bVar40 ^ 1) + 0x1000a);
        *(int32_t *)(lVar39 + 0x1ef8) = *(int32_t *)(lVar39 + 0x1ef0);
        *(int32_t *)(lVar39 + 0x1ef4) = *(int32_t *)(lVar39 + 0x1ef0);
        *(int8_t *)(lVar39 + 0x2d18) = 1;
        *(int32_t *)(lVar39 + 0x2d14) = 0xbe99999a;
      }
      else {
        if ((bVar8) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x78))) {
          cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x78),1);
          uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
          uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
          if (cVar17 != '\0') {
            pfVar34 = (float *)(lVar39 + 0x1ea8);
            func_0x00018010e700();
            *(int8_t *)(lVar39 + 0x2d18) = 1;
            goto LAB_180117443;
          }
        }
        uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
        uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
        if ((bVar12) || (bVar11)) {
          if (*(int64_t *)(lVar39 + 0x100) != 0) {
            iVar20 = *(int *)(lVar39 + 0x1ef8);
            iVar44 = *(int *)(lVar39 + 0x1ef4);
            if (iVar44 == iVar20) {
              iVar35 = 0;
            }
            else {
              iVar35 = iVar20;
              if (iVar44 < iVar20) {
                iVar35 = iVar44;
              }
            }
            iVar43 = iVar20;
            if (iVar20 <= iVar44) {
              iVar43 = iVar44;
            }
            if (iVar44 == iVar20) {
              iVar43 = *(int *)(lVar39 + 0x1ee4);
            }
            FUN_18011da90(lVar39 + 0x1ed0,(iVar43 - iVar35) * 4 + 1);
            FUN_180121c40(*(uint64_t *)(lVar39 + 0x1ed8),*(int32_t *)(lVar39 + 0x1ed0),
                          *(int64_t *)(lVar39 + 0x1eb8) + (int64_t)iVar35 * 2,
                          *(int64_t *)(lVar39 + 0x1eb8) + (int64_t)iVar43 * 2);
            if (*(code **)(SYSTEM_DATA_MANAGER_A + 0x100) != (code *)0x0) {
              (**(code **)(SYSTEM_DATA_MANAGER_A + 0x100))
                        (*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x108),*(uint64_t *)(lVar39 + 0x1ed8));
            }
          }
          pfVar34 = (float *)(lVar39 + 0x1ea8);
          if (bVar12) {
            if (*(int *)(lVar39 + 0x1ef4) == *(int *)(lVar39 + 0x1ef8)) {
              func_0x00018010e700();
            }
            *(int8_t *)(lVar39 + 0x2d18) = 1;
            if (*(int *)(lVar39 + 0x1ef4) != *(int *)(lVar39 + 0x1ef8)) {
              FUN_180115490(pfVar34,lVar39 + 0x1ef0);
              *(int8_t *)(lVar39 + 0x1eff) = 0;
            }
          }
        }
        else {
          if (bVar10) {
            pcVar29 = (char *)func_0x000180124700();
            uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
            uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
            if (pcVar29 != (char *)0x0) {
              lVar28 = -1;
              do {
                lVar28 = lVar28 + 1;
              } while (pcVar29[lVar28] != '\0');
              puVar30 = (int16_t *)func_0x0001801246b0();
              uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
              uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
              iVar20 = 0;
              cVar17 = *pcVar29;
              uStack_200 = puVar30;
              while (cVar17 != '\0') {
                iVar44 = FUN_180121550(auStack_258,pcVar29,0);
                uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
                uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
                pcVar29 = pcVar29 + iVar44;
                lVar39 = lStack_1a8;
                if (auStack_258[0] == 0) break;
                if ((auStack_258[0] < 0x10000) &&
                   (cVar17 = FUN_180116560(auStack_258,param_5,param_6,param_7), cVar17 != '\0')) {
                  iVar20 = iVar20 + 1;
                  *puVar30 = (int16_t)auStack_258[0];
                  puVar30 = puVar30 + 1;
                }
                uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
                uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
                lVar39 = lStack_1a8;
                cVar17 = *pcVar29;
              }
              pfVar34 = (float *)(lVar39 + 0x1ea8);
              uStack_200[iVar20] = 0;
              if (0 < iVar20) {
                FUN_180115580(pfVar34,lVar39 + 0x1ef0,uStack_200,iVar20);
                *(int8_t *)(lVar39 + 0x2d18) = 1;
              }
              func_0x0001801246d0();
              goto LAB_180117443;
            }
          }
LAB_18011743c:
          pfVar34 = (float *)(lVar39 + 0x1ea8);
        }
      }
LAB_180117443:
      bVar8 = false;
      goto LAB_180117445;
    }
    cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x70),1);
    uVar25 = (int32_t)((uint64_t)puVar53 >> 0x20);
    uVar21 = (int32_t)((uint64_t)in_stack_fffffffffffffd78 >> 0x20);
    if (cVar17 == '\0') goto LAB_1801177f4;
    if ((uVar41 & 1) != 0) {
      if ((param_5 >> 0xb & 1) == 0) {
        if (*(char *)(lVar39 + 0x134) == '\0') goto LAB_1801177b9;
      }
      else if (*(char *)(lVar39 + 0x134) != '\0') {
LAB_1801177b9:
        if (bStack_260 != 0) {
          uStack_200 = (int16_t *)CONCAT44(uStack_200._4_4_,10);
          cVar17 = FUN_180116560(&uStack_200,param_5,param_6,param_7);
          if (cVar17 != '\0') {
            uVar36 = (uint)uStack_200;
            goto LAB_180117375;
          }
        }
        goto LAB_18011743c;
      }
    }
    bVar14 = true;
    bVar9 = true;
    bStack_259 = 1;
    pfVar34 = (float *)(lVar39 + 0x1ea8);
    bVar8 = false;
  }
  fVar19 = *(float *)(lVar39 + 0x1b2c);
  pcStackX_10 = param_2;
  if (fVar19 == fStack_244) {
    pcVar29 = (char *)0x0;
    fVar19 = 0.0;
    if (bVar8) {
      fVar19 = 0.0;
      if (bStack_260 != 0) {
        pcVar29 = param_2;
        do {
          cVar17 = *pcVar29;
          cVar18 = pcVar29[(int64_t)*(char **)(lVar39 + 0x1ec8) - (int64_t)param_2];
          if (cVar17 != cVar18) break;
          pcVar29 = pcVar29 + 1;
        } while (cVar18 != '\0');
        pcVar29 = (char *)0x0;
        fVar19 = 0.0;
        if (cVar17 != cVar18) {
          fVar19 = (float)(*(int *)(lVar39 + 0x1ec0) + -1);
          pcVar29 = *(char **)(lVar39 + 0x1ec8);
        }
      }
      fVar51 = fStack_230;
      if ((bVar9) && ((param_5 & 0x20) != 0)) goto LAB_180117b4d;
    }
    else {
LAB_180117b4d:
      if (bStack_260 != 0) {
        FUN_18011da90(lVar39 + 0x1ed0,*(int *)(lVar39 + 0x1eb0) * 4 + 1);
        FUN_180121c40(*(uint64_t *)(lVar39 + 0x1ed8),*(int32_t *)(lVar39 + 0x1ed0),
                      *(uint64_t *)(lVar39 + 0x1eb8),0);
      }
      fVar51 = fStack_230;
      if ((param_5 & 0x1c0) != 0) {
        uVar23 = 0x15;
        if ((((param_5 & 0x40) == 0) || (*(int *)(SYSTEM_DATA_MANAGER_A + 0x3c) < 0)) ||
           (cVar17 = func_0x0001801281d0(), cVar17 == '\0')) {
          if ((char)param_5 < '\0') {
            if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x48) < 0) ||
               (cVar17 = func_0x0001801281d0(), cVar17 == '\0')) {
              if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x4c) < 0) ||
                 (cVar17 = func_0x0001801281d0(), cVar17 == '\0')) goto LAB_180117c0c;
              uVar22 = 0x80;
              uVar23 = 4;
            }
            else {
              uVar22 = 0x80;
              uVar23 = 3;
            }
          }
          else {
LAB_180117c0c:
            uVar22 = 0x100;
            fVar51 = fStack_230;
            if ((param_5 & 0x100) == 0) goto LAB_180117d84;
          }
        }
        else {
          uVar22 = 0x40;
          uVar23 = 0;
        }
        uStack_180 = param_7;
        uStack_170 = *(uint64_t *)(lVar39 + 0x1ed8);
        iStack_168 = *(int *)(lVar39 + 0x1ee0);
        uStack_164 = *(int32_t *)(lVar39 + 0x1ee8);
        lVar28 = *(int64_t *)(lVar39 + 0x1eb8);
        uStack_178 = 0;
        uStack_15f = 0;
        iStack_15c = 0;
        iStack_158 = 0;
        uStack_154 = 0;
        uStack_153 = 0;
        uStack_151 = 0;
        uStack_184 = param_5;
        cStack_160 = '\0';
        uStack_188 = uVar22;
        uStack_174 = uVar23;
        iVar20 = FUN_180121d80(lVar28,lVar28 + (int64_t)*(int *)(lVar39 + 0x1ef0) * 2);
        iStack_15c = iVar20;
        iVar44 = FUN_180121d80(lVar28,lVar28 + (int64_t)*(int *)(lVar39 + 0x1ef4) * 2);
        iStack_158 = iVar44;
        iVar35 = FUN_180121d80(lVar28);
        uStack_154 = (int8_t)iVar35;
        uStack_153 = (int16_t)((uint)iVar35 >> 8);
        uStack_151 = (int8_t)((uint)iVar35 >> 0x18);
        (*param_6)(&uStack_188);
        if (iStack_15c != iVar20) {
          uVar23 = FUN_1801219c0();
          *(int32_t *)(lVar39 + 0x1ef0) = uVar23;
          *(int8_t *)(lVar39 + 0x2d18) = 1;
        }
        if (iStack_158 != iVar44) {
          uVar23 = FUN_1801219c0();
          *(int32_t *)(lVar39 + 0x1ef4) = uVar23;
        }
        if (CONCAT13(uStack_151,CONCAT21(uStack_153,uStack_154)) != iVar35) {
          uVar23 = FUN_1801219c0();
          *(int32_t *)(lVar39 + 0x1ef8) = uVar23;
        }
        fVar51 = fStack_230;
        if (cStack_160 != '\0') {
          if (((int)fStack_250 < iStack_168) && (SUB41(fStack_230,0) != '\0')) {
            FUN_18011dae0((int *)(lVar39 + 0x1eb0),
                          (iStack_168 - (int)fStack_250) + *(int *)(lVar39 + 0x1eb0));
          }
          uVar25 = 0;
          uVar23 = FUN_180121740(*(uint64_t *)(lVar39 + 0x1eb8),*(int32_t *)(lVar39 + 0x1eb0),
                                 uStack_170,0,0);
          *(int32_t *)(lVar39 + 0x1ee4) = uVar23;
          *(int *)(lVar39 + 0x1ee0) = iStack_168;
          *(int32_t *)(lVar39 + 0x2d14) = 0xbe99999a;
        }
      }
LAB_180117d84:
      if (bStack_260 != 0) {
        pcVar6 = *(char **)(lVar39 + 0x1ed8);
        pcVar31 = pcVar6;
        do {
          cVar17 = *pcVar31;
          cVar18 = pcVar31[(int64_t)param_2 - (int64_t)pcVar6];
          if (cVar17 != cVar18) break;
          pcVar31 = pcVar31 + 1;
        } while (cVar18 != '\0');
        if (cVar17 != cVar18) {
          fVar19 = *(float *)(lVar39 + 0x1ee0);
          pcVar29 = pcVar6;
        }
      }
    }
    if (pcVar29 != (char *)0x0) {
      if ((fStack_250 != fVar19) && (SUB41(fVar51,0) != '\0')) {
        uStack_13c = param_5;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        iStack_11c = (int)fVar19 + 1;
        if ((int)fVar19 + 1 <= param_3) {
          iStack_11c = param_3;
        }
        uStack_138 = param_7;
        uStack_140 = 0x40000;
        pcStack_128 = param_2;
        fStack_120 = fVar19;
        (*param_6)(&uStack_140);
        pcStackX_10 = pcStack_128;
        param_3 = iStack_11c;
        fVar19 = (float)(iStack_11c + -1);
        if ((int)fStack_120 < iStack_11c + -1) {
          fVar19 = fStack_120;
        }
      }
      if ((int)fVar19 + 1 < param_3) {
        param_3 = (int)fVar19 + 1;
      }
      lVar28 = (int64_t)param_3;
      if (lVar28 != 0) {
        strncpy(pcStackX_10,*(uint64_t *)(lVar39 + 0x1ed8),lVar28);
        pcStackX_10[lVar28 + -1] = '\0';
      }
      bStack_25a = 1;
    }
    *(int32_t *)(lVar39 + 0x2d1c) = 0;
    *(uint64_t *)(lVar39 + 0x2d20) = 0;
    *(uint64_t *)(lVar39 + 0x2d28) = 0;
    fVar19 = *(float *)(lVar39 + 0x1b2c);
  }
  if (bVar14) {
    if (fVar19 == fStack_244) {
      func_0x000180123e90(0);
      fVar19 = *(float *)(lVar39 + 0x1b2c);
      goto LAB_180117e4a;
    }
  }
  else {
LAB_180117e4a:
    if ((fVar19 == fStack_244) && (bStack_260 != 0)) {
      pcStackX_10 = *(char **)(lVar39 + 0x1ed8);
    }
  }
  fVar51 = 2.0;
  if ((uVar41 & 1) == 0) {
    if (((fStack_244 == *(float *)(SYSTEM_DATA_MANAGER_A + 0x1ca0)) &&
        (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d06) == '\0')) &&
       (lVar28 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8), *(char *)(lVar28 + 0x17c) == '\0')) {
      uStack_1e8 = CONCAT44(fStack_214,fStack_218);
      uStack_1e0 = CONCAT44(fStack_20c,fStack_210);
      pfVar2 = (float *)(lVar28 + 0x228);
      uVar23 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1664);
      func_0x00018010e690(&uStack_1e8,pfVar2);
      fStack_250 = 4.0;
      fStack_24c = 4.0;
      func_0x00018010e650(&uStack_1e8,&fStack_250);
      if ((float)uStack_1e8 < *pfVar2) {
        cVar17 = '\0';
LAB_180117f26:
        FUN_180291b40(*(uint64_t *)(lVar28 + 0x2e8),uStack_1e8,uStack_1e0,0);
      }
      else {
        cVar17 = func_0x00018010e5b0(pfVar2,&uStack_1e8);
        if (cVar17 == '\0') goto LAB_180117f26;
      }
      uVar26 = *(uint64_t *)(lVar28 + 0x2e8);
      uVar36 = FUN_180121ed0(0x2e,0x3f800000);
      fStack_250 = (float)uStack_1e0 - 1.0;
      fStack_24c = uStack_1e0._4_4_ - 1.0;
      fStack_230 = (float)uStack_1e8 + 1.0;
      fStack_22c = uStack_1e8._4_4_ + 1.0;
      if ((uVar36 & 0xff000000) != 0) {
        in_stack_fffffffffffffd70 = CONCAT44((int)(in_stack_fffffffffffffd70 >> 0x20),0xf);
        uVar54 = CONCAT44(uVar25,uVar23);
        FUN_180293e80(uVar26,&fStack_230,&fStack_250,uVar36,uVar54,in_stack_fffffffffffffd70,
                      CONCAT44(uVar21,0x40000000));
        uVar25 = (int32_t)((uint64_t)uVar54 >> 0x20);
      }
      if (cVar17 == '\0') {
        piVar1 = (int *)(*(int64_t *)(lVar28 + 0x2e8) + 0x60);
        *piVar1 = *piVar1 + -1;
        FUN_180291950();
      }
    }
    uVar21 = *(int32_t *)(lVar39 + 0x1664);
    fStack_1d8 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1738);
    fStack_1d4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x173c);
    fStack_1d0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1740);
    fStack_1cc = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1744) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    uVar23 = func_0x000180121e20(&fStack_1d8);
    FUN_180122960(CONCAT44(fStack_214,fStack_218),CONCAT44(fStack_20c,fStack_210),uVar23,1,
                  CONCAT44(uVar25,uVar21));
    fVar19 = *(float *)(lVar39 + 0x1b2c);
  }
  psVar5 = psStack_238;
  fVar48 = fStack_244;
  fStack_1c0 = fStack_218;
  fStack_1bc = fStack_214;
  fStack_1b8 = fStack_218 + fStack_208;
  fStack_1b4 = fStack_204 + fStack_214;
  if ((uVar41 & 1) == 0) {
    plVar32 = &uStack_228;
    uStack_228 = CONCAT44(fStack_214 + *(float *)(lVar39 + 0x1660),
                          fStack_218 + *(float *)(lVar39 + 0x165c));
  }
  else {
    plVar32 = &lStack_1a8;
    lStack_1a8 = *(int64_t *)(psStack_238 + 0x80);
  }
  uStack_228 = *plVar32;
  fVar52 = 0.0;
  fVar50 = 0.0;
  if ((*pfVar34 == fStack_244) && ((uVar41 & 1) != 0)) {
    fVar19 = *(float *)(lVar39 + 0x1b2c);
    fVar24 = (float)func_0x000180123d50(psStack_238,&unknown_var_2064_ptr,0);
    if (fVar19 != fVar24) goto LAB_1801180e1;
    bVar8 = true;
  }
  else {
LAB_1801180e1:
    bVar8 = false;
  }
  if ((fVar19 == fVar48) || (bVar8)) {
    fVar19 = 0.0;
    psVar7 = *(short **)(lVar39 + 0x1eb8);
    psVar38 = (short *)0x0;
    iVar44 = *(int *)(lVar39 + 0x1ef4);
    iVar20 = -1;
    iVar43 = -999;
    psVar5 = psVar7 + *(int *)(lVar39 + 0x1ef0);
    iVar35 = *(int *)(lVar39 + 0x1ef8);
    fVar48 = 0.0;
    *(float *)(lVar39 + 0x2d14) = *(float *)(lVar39 + 0x18) + *(float *)(lVar39 + 0x2d14);
    if (iVar44 == iVar35) {
      iVar44 = 1;
    }
    else {
      if (iVar44 < iVar35) {
        iVar35 = iVar44;
      }
      iVar44 = 2;
      iVar43 = -1;
      psVar38 = psVar7 + iVar35;
    }
    iVar35 = 0;
    sVar4 = *psVar7;
    iVar44 = iVar44 + (uVar41 & 1);
    psVar33 = psVar7;
    while ((sVar4 != 0 &&
           ((sVar4 != 10 ||
            ((((iVar35 = iVar35 + 1, iVar20 != -1 || (psVar33 < psVar5)) ||
              (iVar44 = iVar44 + -1, iVar20 = iVar35, 0 < iVar44)) &&
             (((iVar43 != -1 || (psVar33 < psVar38)) ||
              (iVar44 = iVar44 + -1, iVar43 = iVar35, 0 < iVar44))))))))) {
      sVar4 = psVar33[1];
      psVar33 = psVar33 + 1;
    }
    iVar35 = iVar35 + 1;
    iVar44 = iVar35;
    if (iVar20 != -1) {
      iVar44 = iVar20;
    }
    psVar33 = psVar5;
    iVar20 = iVar35;
    if (iVar43 != -1) {
      iVar20 = iVar43;
    }
    do {
      psVar13 = psVar33;
      if (psVar13 <= psVar7) break;
      psVar33 = psVar13 + -1;
    } while (psVar13[-1] != 10);
    in_stack_fffffffffffffd70 = in_stack_fffffffffffffd70 & 0xffffffffffffff00;
    uVar27 = 0;
    pfVar34 = (float *)FUN_180114a70(&lStack_1a8,psVar13,psVar5,0,0,in_stack_fffffffffffffd70);
    fVar46 = *(float *)(lVar39 + 0x19f8);
    fVar24 = *pfVar34;
    fVar49 = (float)iVar44 * fVar46;
    fStack_250 = fVar24;
    psVar5 = psVar38;
    if (-1 < iVar20) {
      do {
        psVar33 = psVar5;
        if (psVar33 <= psVar7) break;
        psVar5 = psVar33 + -1;
      } while (psVar33[-1] != 10);
      uVar27 = 0;
      pfVar34 = (float *)FUN_180114a70(&uStack_1e8,psVar33,psVar38,0,0,
                                       in_stack_fffffffffffffd70 & 0xffffffffffffff00);
      fVar46 = *(float *)(lVar39 + 0x19f8);
      fVar19 = *pfVar34;
      fVar48 = (float)iVar20 * fVar46;
    }
    psVar5 = psStack_238;
    uVar21 = (int32_t)(uVar27 >> 0x20);
    if ((uVar41 & 1) != 0) {
      fVar50 = (float)iVar35 * fVar46;
      fVar52 = fStack_208;
    }
    if (*(char *)(lVar39 + 0x2d18) != '\0') {
      if ((param_5 & 0x1000) == 0) {
        if (*(float *)(lVar39 + 0x1eec) <= fVar24) {
          if (*(float *)(lVar39 + 0x1eec) <= fVar24 - fStack_208) {
            *(float *)(lVar39 + 0x1eec) = (float)(int)(fStack_208 * 0.25 + (fVar24 - fStack_208));
          }
        }
        else {
          fVar46 = fVar24 - fStack_208 * 0.25;
          if (fVar46 <= 0.0) {
            fVar46 = 0.0;
          }
          *(float *)(lVar39 + 0x1eec) = (float)(int)fVar46;
        }
      }
      else {
        *(int32_t *)(lVar39 + 0x1eec) = 0;
      }
      if ((uVar41 & 1) != 0) {
        fVar46 = *(float *)(psStack_238 + 0x48);
        fVar47 = fVar49 - *(float *)(lVar39 + 0x19f8);
        if (fVar46 <= fVar47) {
          fVar47 = fVar49 - fStack_204;
          if (fVar49 - fStack_204 <= fVar46) {
            fVar47 = fVar46;
          }
        }
        else if (fVar47 <= 0.0) {
          fVar47 = 0.0;
        }
        *(float *)(psStack_238 + 0x48) = fVar47;
        fVar46 = (fVar46 - fVar47) + *(float *)(psStack_238 + 0x82);
        *(float *)(psStack_238 + 0x82) = fVar46;
        uStack_228 = CONCAT44(fVar46,(float)uStack_228);
      }
    }
    iVar20 = *(int *)(lVar39 + 0x1ef8);
    iVar44 = *(int *)(lVar39 + 0x1ef4);
    fVar46 = *(float *)(lVar39 + 0x1eec);
    *(int8_t *)(lVar39 + 0x2d18) = 0;
    if (iVar44 != iVar20) {
      iVar35 = iVar20;
      if (iVar44 < iVar20) {
        iVar35 = iVar44;
        iVar44 = iVar20;
      }
      psVar38 = psVar7 + iVar35;
      psVar7 = psVar7 + iVar44;
      if ((uVar41 & 1) != 0) {
        fVar51 = 0.0;
        pcStack_1f8 = (char *)((uint64_t)pcStack_1f8 & 0xffffffff00000000);
      }
      uStack_108 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1988);
      uStack_104 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x198c);
      uStack_100 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1990);
      fStack_fc = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1994) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar25 = func_0x000180121e20(&uStack_108);
      uVar21 = (int32_t)(uVar27 >> 0x20);
      fVar48 = uStack_228._4_4_ + fVar48;
      psStack_238 = psVar38;
      if (psVar38 < psVar7) {
        fVar47 = *(float *)(lVar39 + 0x19f8);
        fVar16 = pcStack_1f8._0_4_;
        fVar19 = (float)uStack_228 + fVar19;
        do {
          uVar21 = (int32_t)(uVar27 >> 0x20);
          fVar24 = fStack_250;
          if (fStack_1b4 + fVar47 < fVar48) break;
          if (fStack_1bc <= fVar48) {
            uVar27 = 0;
            FUN_180114a70(&fStack_230,psVar38,psVar7,&psStack_238,0,1);
            if (fStack_230 <= 0.0) {
              lVar28 = *(int64_t *)(lVar39 + 0x19f0);
              if (*(int *)(lVar28 + 0x20) < 0x21) {
                fVar24 = *(float *)(lVar28 + 0x48);
              }
              else {
                fVar24 = *(float *)(*(int64_t *)(lVar28 + 0x28) + 0x80);
              }
              fStack_230 = (float)(int)(fVar24 * 0.5);
            }
            fStack_190 = fStack_230 + (fVar19 - fVar46);
            fStack_18c = fVar51 + fVar48;
            fStack_194 = (fVar16 - *(float *)(lVar39 + 0x19f8)) + fVar48;
            fStack_198 = fVar19 - fVar46;
            func_0x00018010e540(&pcStack_1f8,&fStack_1c0);
            func_0x00018010e690(&fStack_198,&pcStack_1f8);
            func_0x00018010e540(auStack_f8,&fStack_1c0);
            cVar17 = func_0x00018010e5e0(&fStack_198,auStack_f8);
            psVar38 = psStack_238;
            if (cVar17 != '\0') {
              uVar27 = uVar27 & 0xffffffff00000000;
              FUN_180293f50(*(uint64_t *)(psVar5 + 0x174),&fStack_198,&fStack_190,uVar25,uVar27,
                            0xf);
              psVar38 = psStack_238;
            }
          }
          else {
            do {
              if (psVar7 <= psVar38) break;
              sVar4 = *psVar38;
              psStack_238 = psVar38 + 1;
              psVar38 = psStack_238;
            } while (sVar4 != 10);
          }
          uVar21 = (int32_t)(uVar27 >> 0x20);
          fVar47 = *(float *)(lVar39 + 0x19f8);
          fVar48 = fVar48 + fVar47;
          fVar24 = fStack_250;
          fVar19 = (float)uStack_228;
        } while (psVar38 < psVar7);
      }
    }
    iVar20 = *(int *)(lVar39 + 0x1ee0);
    if (((uVar41 & 1) != 0) || (iVar20 < 0x200000)) {
      uVar26 = *(uint64_t *)(psVar5 + 0x174);
      pcStack_1f8 = *(char **)(SYSTEM_DATA_MANAGER_A + 0x16c8);
      uStack_1f0 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
      fStack_1ec = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar25 = func_0x000180121e20(&pcStack_1f8);
      pfVar34 = &fStack_1c0;
      fStack_250 = (float)uStack_228 - fVar46;
      if ((uVar41 & 1) != 0) {
        pfVar34 = (float *)0x0;
      }
      fStack_24c = uStack_228._4_4_;
      uVar54 = CONCAT44(uVar21,uVar25);
      FUN_180294200(uVar26,*(uint64_t *)(lVar39 + 0x19f0),pfVar34,&fStack_250,uVar54,pcStackX_10,
                    pcStackX_10 + iVar20,0,pfVar34);
      uVar21 = (int32_t)((uint64_t)uVar54 >> 0x20);
    }
    if (((*(char *)(lVar39 + 0xca) == '\0') || (*(float *)(lVar39 + 0x2d14) <= 0.0)) ||
       (fVar19 = (float)fmodf(), fVar19 <= 0.8)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    fVar49 = uStack_228._4_4_ + fVar49;
    fVar46 = ((float)uStack_228 + fVar24) - fVar46;
    fStack_1cc = fVar49 - 1.5;
    fStack_1d4 = (fVar49 - *(float *)(lVar39 + 0x19f8)) + 0.5;
    fStack_1d0 = fVar46 + 1.0;
    fStack_1d8 = fVar46;
    if (bVar8) {
      func_0x00018010e540(auStack_e8,&fStack_1c0);
      cVar17 = func_0x00018010e5e0(&fStack_1d8,auStack_e8);
      if (cVar17 != '\0') {
        uVar26 = *(uint64_t *)(psVar5 + 0x174);
        pcStack_1f8 = *(char **)(SYSTEM_DATA_MANAGER_A + 0x16c8);
        uStack_1f0 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
        fStack_1ec = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        uVar25 = func_0x000180121e20(&pcStack_1f8);
        fStack_244 = fStack_1d8;
        fStack_240 = fStack_1cc;
        FUN_180293d20(uVar26,&fStack_1d8,&fStack_244,uVar25,CONCAT44(uVar21,0x3f800000));
      }
    }
    if (bStack_260 != 0) {
      *(float *)(lVar39 + 0x2de4) = fVar49 - *(float *)(lVar39 + 0x19f8);
      *(float *)(lVar39 + 0x2de0) = fVar46 - 1.0;
      *(uint64_t *)(lVar39 + 0x2df0) = *(uint64_t *)(uStack_1c8 + 0x14);
    }
  }
  else {
    pcStack_1f8 = (char *)0x0;
    if ((uVar41 & 1) == 0) {
      lVar28 = -1;
      do {
        lVar15 = lVar28 + 1;
        lVar28 = lVar28 + 1;
      } while (pcStackX_10[lVar15] != '\0');
      pcStack_1f8 = pcStackX_10 + lVar28;
      if (0x1fffff < (int64_t)pcStack_1f8 - (int64_t)pcStackX_10) goto LAB_18011890c;
    }
    else {
      iVar20 = func_0x000180114a30(pcStackX_10,&pcStack_1f8);
      fVar50 = (float)iVar20 * *(float *)(lVar39 + 0x19f8);
      fVar52 = fStack_208;
    }
    uVar26 = *(uint64_t *)(psVar5 + 0x174);
    fStack_1d8 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
    fStack_1d4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
    fStack_1d0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
    fStack_1cc = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    func_0x000180121e20(&fStack_1d8);
    FUN_180294200(uVar26,*(uint64_t *)(lVar39 + 0x19f0));
  }
  if ((uVar41 & 1) != 0) {
    uStack_1c8 = (short *)CONCAT44(fVar50 + *(float *)(lVar39 + 0x19f8),fVar52);
    FUN_1801120e0(&uStack_1c8);
    FUN_1801285e0();
    FUN_18012e4e0();
  }
LAB_18011890c:
  cVar17 = (char)uStack_220;
  if (cVar17 != '\0') {
    FUN_18012d840();
    cVar17 = (char)uStack_220;
  }
  if ((*(char *)(lVar39 + 0x2e38) != '\0') && (cVar17 == '\0')) {
    FUN_18013c800(&uStack_228,pcStackX_10,0);
  }
  if (0.0 < afStack_1a0[0]) {
    FUN_180122320(CONCAT44(fStack_214 + *(float *)(lVar39 + 0x1660),
                           fStack_210 + *(float *)(lVar39 + 0x1674)),param_1,0,1);
  }
  if (bStack_25a != 0) {
    plVar32 = (int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1b3e) = 1;
    puVar3 = (uint *)(*plVar32 + 0x148);
    *puVar3 = *puVar3 | 4;
  }
  if ((param_5 & 0x20) != 0) {
    bStack_25a = bStack_259;
  }
  return (uint64_t)bStack_25a;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_18011698b(void)

{
  int *piVar1;
  int64_t *plVar2;
  uint *puVar3;
  float fVar4;
  char cVar5;
  short sVar6;
  char *pcVar7;
  short *psVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  short *psVar15;
  bool bVar16;
  char cVar17;
  char cVar18;
  int iVar19;
  int32_t uVar20;
  int32_t uVar21;
  float fVar22;
  int32_t uVar23;
  int64_t lVar24;
  char *pcVar25;
  int16_t *puVar26;
  char *pcVar27;
  float *pfVar28;
  int64_t lVar29;
  short *psVar30;
  float *pfVar31;
  int iVar32;
  uint uVar33;
  int64_t lVar34;
  short *psVar35;
  short *psVar36;
  float *unaff_RBP;
  int64_t unaff_RSI;
  byte bVar37;
  uint uVar38;
  uint64_t uVar39;
  int iVar40;
  int iVar41;
  byte bVar42;
  uint64_t unaff_R12;
  float fVar43;
  int32_t unaff_R15D;
  float fVar44;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float unaff_XMM8_Da;
  float fVar49;
  float fVar50;
  float fVar51;
  float *in_stack_00000020;
  uint64_t uVar52;
  uint64_t uVar53;
  char cStack0000000000000050;
  byte bStack0000000000000054;
  char in_stack_00000058;
  char cStack000000000000005e;
  char cStack000000000000005f;
  int16_t uStack0000000000000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  char cStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  cVar17 = FUN_1801243a0(unaff_RBP + -0x18,unaff_R15D);
  if (cVar17 != '\0') {
    *(int32_t *)(unaff_RSI + 0x1dcc) = 1;
  }
  uVar45 = extraout_XMM0_Qa;
  if (*(char *)(unaff_RBP + -0x1a) != '\0') {
    lVar24 = func_0x000180297170(*(uint64_t *)(unaff_RSI + 0x19f0),0x2a);
    *(int32_t *)(unaff_RSI + 0x2d30) = **(int32_t **)(unaff_RSI + 0x19f0);
    *(int32_t *)(unaff_RSI + 0x2d34) = *(int32_t *)(*(int64_t *)(unaff_RSI + 0x19f0) + 4);
    *(uint64_t *)(unaff_RSI + 0x2d38) = *(uint64_t *)(*(int64_t *)(unaff_RSI + 0x19f0) + 8);
    *(int32_t *)(unaff_RSI + 0x2d90) = *(int32_t *)(*(int64_t *)(unaff_RSI + 0x19f0) + 0x60);
    *(int32_t *)(unaff_RSI + 0x2d94) = *(int32_t *)(*(int64_t *)(unaff_RSI + 0x19f0) + 100);
    *(uint64_t *)(unaff_RSI + 0x2d88) = *(uint64_t *)(*(int64_t *)(unaff_RSI + 0x19f0) + 0x58);
    *(int64_t *)(unaff_RSI + 0x2d70) = lVar24;
    *(int32_t *)(unaff_RSI + 0x2d78) = *(int32_t *)(lVar24 + 4);
    uVar45 = FUN_18012d7c0((int32_t *)(unaff_RSI + 0x2d30));
  }
  cVar18 = FUN_180124460(uVar45,unaff_R15D,(unaff_R12 & 0x440) == 0);
  if ((cVar17 == '\0') || (*(char *)(unaff_RSI + 0x410) == '\0')) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((((bStack0000000000000054 == 0) || (*(int *)(unaff_RSI + 0x1b2c) != 0)) ||
      (*(float *)(unaff_RSI + 0x1ea8) != fStack0000000000000074)) ||
     (iVar19 = func_0x000180123d50(*(uint64_t *)(unaff_RBP + -0x20),&unknown_var_2064_ptr,0),
     *(int *)(unaff_RSI + 0x1b30) != iVar19)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  fVar51 = fStack0000000000000074;
  fVar43 = *(float *)(unaff_RSI + 0x1b2c);
  if ((fVar43 == fStack0000000000000074) ||
     ((*(float *)(unaff_RSI + 0x1cb0) != fStack0000000000000074 &&
      ((*(float *)(unaff_RSI + 0x1ca4) != fStack0000000000000074 ||
       (*(int *)(unaff_RSI + 0x1cc0) != 3)))))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  bVar16 = false;
  if (((fVar43 == fStack0000000000000074) || ((((uint)unaff_RBP[0x78] & 0x10) == 0 && (!bVar13))))
     || (bStack0000000000000054 != 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if ((((cVar18 != '\0') || (bVar10)) || (bVar11)) || (bVar13)) {
    if (fVar43 != fStack0000000000000074) {
      lVar24 = -1;
      do {
        lVar24 = lVar24 + 1;
      } while (*(char *)(*(int64_t *)(unaff_RBP + 0x72) + lVar24) != '\0');
      FUN_18011dae0(unaff_RSI + 0x1eb0,(int)unaff_RBP[0x74] + 1);
      iVar19 = (int)lVar24 + 1;
      FUN_18011da90(unaff_RSI + 0x1ec0,iVar19);
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(unaff_RSI + 0x1ec8),*(uint64_t *)(unaff_RBP + 0x72),(int64_t)iVar19)
      ;
    }
    fVar43 = unaff_RBP[0x78];
    uVar45 = *(uint64_t *)(unaff_RBP + -4);
    func_0x000180123e90(fStack0000000000000074,uVar45);
    FUN_180123f30(fVar51,uVar45);
    FUN_18012d2e0();
    if ((bStack0000000000000054 == 0) && (-1 < SUB41(fVar43,0))) {
      *(uint *)(unaff_RSI + 0x1b44) = *(uint *)(unaff_RSI + 0x1b44) | 0xc;
    }
  }
  else if (*(char *)(unaff_RSI + 0x410) != '\0') {
    bVar16 = true;
  }
  cStack000000000000005e = '\0';
  cStack000000000000005f = '\0';
  fStack0000000000000068 = 0.0;
  if (*(float *)(unaff_RSI + 0x1b2c) == fVar51) {
    if ((in_stack_00000058 == '\0') && (*(char *)(unaff_RSI + 0x1b3c) == '\0')) {
      FUN_18011dae0((int32_t *)(unaff_RSI + 0x1eb0),(int)unaff_RBP[0x74] + 1);
      uVar20 = *(int32_t *)(unaff_RSI + 0x1eb0);
      in_stack_00000020 = unaff_RBP + 2;
      uVar45 = *(uint64_t *)(unaff_RSI + 0x1eb8);
      unaff_RBP[2] = 0.0;
      unaff_RBP[3] = 0.0;
      uVar52 = *(uint64_t *)(unaff_RBP + 0x72);
      uVar20 = FUN_180121740(uVar45,uVar20,uVar52,0,in_stack_00000020);
      *(int32_t *)(unaff_RSI + 0x1ee4) = uVar20;
      *(int *)(unaff_RSI + 0x1ee0) = (int)unaff_RBP[2] - (int)uVar52;
      func_0x00018010e6d0(unaff_RSI + 0x1ea8);
    }
    lVar24 = unaff_RSI + 0x1ea8;
    fStack0000000000000068 = *(float *)(unaff_RSI + 0x1ee0);
    uVar45 = *(uint64_t *)(unaff_RBP + 0x7a);
    fVar43 = unaff_RBP[0x78];
    *(float *)(unaff_RSI + 0x2d1c) = fVar43;
    *(uint64_t *)(unaff_RSI + 0x2d20) = uVar45;
    *(float *)(unaff_RSI + 0x1ee8) = unaff_RBP[0x74];
    *(uint64_t *)(unaff_RSI + 0x2d28) = *(uint64_t *)(unaff_RBP + 0x7c);
    *(int32_t *)(unaff_RSI + 0x3050) = 1;
    *(bool *)(unaff_RSI + 0x1b3d) = *(char *)(unaff_RSI + 0x120) == '\0';
    if (bStack0000000000000054 == 0) {
      fVar46 = *(float *)(unaff_RSI + 0x19f8) * 0.5;
    }
    else {
      fVar46 = (*(float *)(unaff_RSI + 0x11c) - *(float *)(*(int64_t *)(unaff_RBP + -0x20) + 0x104)
               ) - *(float *)(unaff_RSI + 0x1660);
    }
    cVar18 = *(char *)(unaff_RSI + 0xc9);
    if (bVar12) {
LAB_180116f3b:
      func_0x00018010e700();
      *(int8_t *)(unaff_RSI + 0x2d19) = 1;
LAB_180116f4a:
      fVar43 = unaff_RBP[0x78];
      uVar45 = *(uint64_t *)(unaff_RBP + 0x7a);
    }
    else {
      if (cVar17 != '\0') {
        if (cVar18 == '\0') {
          if (*(char *)(unaff_RSI + 0x415) != '\0') goto LAB_180116f3b;
        }
        else if (*(char *)(unaff_RSI + 0x415) != '\0') {
          FUN_180115640(lVar24,unaff_RSI + 0x1ef0,0x1000c,fVar46);
          *(int8_t *)(unaff_RSI + 0x2d18) = 1;
          *(int32_t *)(unaff_RSI + 0x2d14) = 0xbe99999a;
          FUN_180115640(lVar24,unaff_RSI + 0x1ef0,0x3000d);
          *(int8_t *)(unaff_RSI + 0x2d18) = 1;
          *(int32_t *)(unaff_RSI + 0x2d14) = 0xbe99999a;
          goto LAB_180116f4a;
        }
      }
      if ((*(char *)(unaff_RSI + 0x410) == '\0') || (*(char *)(unaff_RSI + 0x2d19) != '\0')) {
        if (((*(char *)(unaff_RSI + 0x120) != '\0') && (*(char *)(unaff_RSI + 0x2d19) == '\0')) &&
           ((unaff_XMM8_Da != *(float *)(unaff_RSI + 0x3ac) ||
            (unaff_XMM8_Da != *(float *)(unaff_RSI + 0x3b0))))) {
          FUN_180115190(lVar24,unaff_RSI + 0x1ef0);
          *(int32_t *)(unaff_RSI + 0x2d14) = 0xbe99999a;
          *(int8_t *)(unaff_RSI + 0x2d18) = 1;
          goto LAB_180116f4a;
        }
      }
      else if (cVar17 != '\0') {
        FUN_180115130(lVar24,unaff_RSI + 0x1ef0);
        *(int32_t *)(unaff_RSI + 0x2d14) = 0xbe99999a;
        goto LAB_180116f4a;
      }
    }
    if ((*(char *)(unaff_RSI + 0x2d19) != '\0') && (*(char *)(unaff_RSI + 0x120) == '\0')) {
      *(int8_t *)(unaff_RSI + 0x2d19) = 0;
    }
    piVar1 = (int *)(unaff_RSI + 0x1530);
    if (0 < *piVar1) {
      if ((((*(char *)(unaff_RSI + 0x134) == '\0') || (*(char *)(unaff_RSI + 0x136) != '\0')) &&
          ((cVar18 == '\0' || (*(char *)(unaff_RSI + 0x137) == '\0')))) &&
         (((in_stack_00000058 != '\0' && (!bVar13)) && (uVar53 = 0, 0 < *piVar1)))) {
        uVar52 = *(uint64_t *)(unaff_RBP + 0x7c);
        uVar39 = uVar53;
        do {
          _uStack0000000000000060 =
               (float)(uint)*(ushort *)(uVar39 + *(int64_t *)(unaff_RSI + 0x1538));
          cVar17 = FUN_180116560(&stack0x00000060,fVar43,uVar45,uVar52);
          if (cVar17 != '\0') {
            FUN_180115640(lVar24,unaff_RSI + 0x1ef0,_uStack0000000000000060);
            *(int8_t *)(unaff_RSI + 0x2d18) = 1;
            *(int32_t *)(unaff_RSI + 0x2d14) = 0xbe99999a;
          }
          uVar45 = *(uint64_t *)(unaff_RBP + 0x7a);
          uVar33 = (int)uVar53 + 1;
          uVar53 = (uint64_t)uVar33;
          fVar43 = unaff_RBP[0x78];
          uVar39 = uVar39 + 2;
          fVar51 = fStack0000000000000074;
        } while ((int)uVar33 < *piVar1);
      }
      FUN_18011dae0(piVar1,0);
    }
  }
  uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  bVar10 = false;
  if (((*(float *)(unaff_RSI + 0x1b2c) != fVar51) || (*(char *)(unaff_RSI + 0x1b3c) != '\0')) ||
     (bVar16)) {
LAB_18011788f:
    pfVar31 = (float *)(unaff_RSI + 0x1ea8);
LAB_180117445:
    bVar11 = false;
  }
  else {
    cStack0000000000000070 = *(char *)(unaff_RSI + 0xc9);
    cVar17 = *(char *)(unaff_RSI + 0x135);
    cVar18 = *(char *)(unaff_RSI + 0x134);
    uVar33 = -(uint)(cVar17 != '\0') & 0x20000;
    if (cStack0000000000000070 == '\0') {
      if ((cVar18 != '\0') && (*(char *)(unaff_RSI + 0x137) == '\0')) goto LAB_180117102;
LAB_1801170c0:
      bVar10 = false;
    }
    else {
      if ((*(char *)(unaff_RSI + 0x137) == '\0') || (cVar18 != '\0')) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) goto LAB_1801170c0;
LAB_180117102:
      if ((*(char *)(unaff_RSI + 0x136) != '\0') || (cVar17 != '\0')) goto LAB_1801170c0;
      bVar10 = true;
    }
    if ((((cStack0000000000000070 == '\0') || (*(char *)(unaff_RSI + 0x137) == '\0')) ||
        (cVar17 == '\0')) ||
       ((cVar18 = *(char *)(unaff_RSI + 0x134), cVar18 != '\0' ||
        (*(char *)(unaff_RSI + 0x136) != '\0')))) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    cStack0000000000000050 = cVar18;
    if (((cStack0000000000000070 == '\0') ||
        (cStack0000000000000050 = *(char *)(unaff_RSI + 0x136), *(char *)(unaff_RSI + 0x137) == '\0'
        )) || ((cVar18 != '\0' || (cStack0000000000000050 != '\0')))) {
      bVar42 = 0;
      if ((((cVar18 == '\0') || (cVar17 != '\0')) || (*(char *)(unaff_RSI + 0x136) != '\0')) ||
         (*(char *)(unaff_RSI + 0x137) != '\0')) goto LAB_18011713b;
      bVar13 = true;
LAB_18011717f:
      bVar12 = false;
    }
    else {
      bVar42 = 1;
LAB_18011713b:
      bVar13 = false;
      if (((*(char *)(unaff_RSI + 0x135) == '\0') || (cVar18 != '\0')) ||
         ((*(char *)(unaff_RSI + 0x136) != '\0' || (*(char *)(unaff_RSI + 0x137) != '\0'))))
      goto LAB_18011717f;
      bVar12 = true;
    }
    if ((((((bVar10) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x84))) &&
          (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x84),1), cVar17 != '\0')) ||
         (((bVar12 && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 100))) &&
          (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 100),1), cVar17 != '\0')))) &&
        ((in_stack_00000058 != '\0' && (*(char *)(unaff_RBP + -0x1a) == '\0')))) &&
       ((bStack0000000000000054 == 0 ||
        (*(int *)(unaff_RSI + 0x1ef4) != *(int *)(unaff_RSI + 0x1ef8))))) {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    if (((((bVar10) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x7c))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x7c),1), cVar17 != '\0')) ||
        (((bVar13 && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x60))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x60),1), cVar17 != '\0')))) &&
       ((*(char *)(unaff_RBP + -0x1a) == '\0' &&
        ((bStack0000000000000054 == 0 ||
         (*(int *)(unaff_RSI + 0x1ef4) != *(int *)(unaff_RSI + 0x1ef8))))))) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if (((((bVar10) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x80))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x80),1), cVar17 != '\0')) ||
        (((bVar12 && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x60))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x60),1), cVar17 != '\0')))) &&
       (in_stack_00000058 != '\0')) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (((bVar10) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x8c))) &&
       ((cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x8c),1), cVar17 != '\0' &&
        ((in_stack_00000058 != '\0' && (*(char *)(unaff_RBP + -0x12) != '\0')))))) {
      bVar37 = 1;
    }
    else {
      bVar37 = 0;
    }
    if (((((bVar10) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x88))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x88),1), cVar17 != '\0')) ||
        (((bVar11 && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x8c))) &&
         (cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x8c),1), cVar17 != '\0')))) &&
       ((in_stack_00000058 != '\0' && (*(char *)(unaff_RBP + -0x12) != '\0')))) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x40)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x40),1);
      uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if (cVar17 == '\0') goto LAB_18011739a;
      if (bVar42 == 0) {
        uVar38 = 0x10000;
        if (cStack0000000000000050 != '\0') {
          uVar38 = 0x1000c;
        }
      }
      else {
        uVar38 = 0x10004;
      }
      fVar43 = (float)(uVar38 | uVar33);
LAB_180117375:
      pfVar31 = (float *)(unaff_RSI + 0x1ea8);
      FUN_180115640(pfVar31,unaff_RSI + 0x1ef0,fVar43);
      *(int8_t *)(unaff_RSI + 0x2d18) = 1;
      *(int32_t *)(unaff_RSI + 0x2d14) = 0xbe99999a;
      goto LAB_180117443;
    }
LAB_18011739a:
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x44)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x44),1);
      uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if (cVar17 != '\0') {
        if (bVar42 == 0) {
          uVar38 = 0x10001;
          if (cStack0000000000000050 != '\0') {
            uVar38 = 0x1000d;
          }
          fVar43 = (float)(uVar38 | uVar33);
        }
        else {
          fVar43 = (float)(uVar33 | 0x10005);
        }
        goto LAB_180117375;
      }
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x48)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x48),1);
      uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if ((cVar17 == '\0') || (bStack0000000000000054 == 0)) goto LAB_180117593;
      if (*(char *)(unaff_RSI + 0x134) == '\0') {
        fVar43 = (float)((uint)bVar42 * 4 + 0x10002 | uVar33);
        goto LAB_180117375;
      }
LAB_180117437:
      func_0x00018012dd90();
      goto LAB_18011743c;
    }
LAB_180117593:
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x4c)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x4c),1);
      uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if ((cVar17 != '\0') && (bStack0000000000000054 != 0)) {
        if (*(char *)(unaff_RSI + 0x134) == '\0') {
          fVar43 = (float)((uint)bVar42 * 4 + 0x10003 | uVar33);
          goto LAB_180117375;
        }
        func_0x00018012e030();
        goto LAB_180117437;
      }
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x58)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x58),1);
      uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if (cVar17 != '\0') {
        uVar38 = 0x10006;
        if (*(char *)(unaff_RSI + 0x134) == '\0') {
          uVar38 = 0x10004;
        }
        fVar43 = (float)(uVar38 | uVar33);
        goto LAB_180117375;
      }
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x5c)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x5c),1);
      uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if (cVar17 != '\0') {
        uVar38 = 0x10007;
        if (*(char *)(unaff_RSI + 0x134) == '\0') {
          uVar38 = 0x10005;
        }
        fVar43 = (float)(uVar38 | uVar33);
        goto LAB_180117375;
      }
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 100)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 100),1);
      uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if ((cVar17 != '\0') && (in_stack_00000058 != '\0')) {
        fVar43 = (float)(uVar33 | 0x10008);
        goto LAB_180117375;
      }
    }
    if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x68)) {
      cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x68),1);
      uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if ((cVar17 != '\0') && (in_stack_00000058 != '\0')) {
        if (*(int *)(unaff_RSI + 0x1ef4) == *(int *)(unaff_RSI + 0x1ef8)) {
          if (cStack0000000000000050 == '\0') {
            if ((((cStack0000000000000070 == '\0') || (*(char *)(unaff_RSI + 0x137) == '\0')) ||
                (*(char *)(unaff_RSI + 0x136) != '\0')) || (*(char *)(unaff_RSI + 0x134) != '\0'))
            goto LAB_18011774b;
            uVar45 = 0x30004;
          }
          else {
            uVar45 = 0x3000c;
          }
          FUN_180115640(unaff_RSI + 0x1ea8,unaff_RSI + 0x1ef0,uVar45);
          *(int8_t *)(unaff_RSI + 0x2d18) = 1;
          *(int32_t *)(unaff_RSI + 0x2d14) = 0xbe99999a;
          fVar43 = (float)(uVar33 | 0x10009);
        }
        else {
LAB_18011774b:
          fVar43 = (float)(uVar33 | 0x10009);
        }
        goto LAB_180117375;
      }
    }
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x70) < 0) {
LAB_1801177f4:
      fVar43 = unaff_RBP[0x78];
      if ((((uint)fVar43 >> 10 & 1) != 0) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x3c))) {
        cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x3c),1);
        uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
        if ((((cVar17 != '\0') &&
             ((*(char *)(unaff_RSI + 0x134) == '\0' && (*(char *)(unaff_RSI + 0x135) == '\0')))) &&
            (*(char *)(unaff_RSI + 0x136) == '\0')) && (in_stack_00000058 != '\0')) {
          _uStack0000000000000060 = 1.26117e-44;
          cVar17 = FUN_180116560(&stack0x00000060,fVar43,*(uint64_t *)(unaff_RBP + 0x7a),
                                 *(uint64_t *)(unaff_RBP + 0x7c));
          fVar43 = _uStack0000000000000060;
          if (cVar17 != '\0') goto LAB_180117375;
          goto LAB_18011743c;
        }
      }
      if (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x74)) {
        cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x74),1);
        uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
        if (cVar17 != '\0') {
          bVar10 = true;
          bVar16 = true;
          goto LAB_18011788f;
        }
      }
      uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if ((bVar37 != 0) || (bVar11)) {
        pfVar31 = (float *)(unaff_RSI + 0x1ea8);
        FUN_180115640(pfVar31,unaff_RSI + 0x1ef0,(bVar37 ^ 1) + 0x1000a);
        *(int32_t *)(unaff_RSI + 0x1ef8) = *(int32_t *)(unaff_RSI + 0x1ef0);
        *(int32_t *)(unaff_RSI + 0x1ef4) = *(int32_t *)(unaff_RSI + 0x1ef0);
        *(int8_t *)(unaff_RSI + 0x2d18) = 1;
        *(int32_t *)(unaff_RSI + 0x2d14) = 0xbe99999a;
      }
      else {
        if ((bVar10) && (-1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x78))) {
          cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x78),1);
          uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
          if (cVar17 != '\0') {
            pfVar31 = (float *)(unaff_RSI + 0x1ea8);
            func_0x00018010e700();
            *(int8_t *)(unaff_RSI + 0x2d18) = 1;
            goto LAB_180117443;
          }
        }
        uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
        if ((bVar14) || (bVar13)) {
          if (*(int64_t *)(unaff_RSI + 0x100) != 0) {
            iVar19 = *(int *)(unaff_RSI + 0x1ef8);
            iVar41 = *(int *)(unaff_RSI + 0x1ef4);
            if (iVar41 == iVar19) {
              iVar32 = 0;
            }
            else {
              iVar32 = iVar19;
              if (iVar41 < iVar19) {
                iVar32 = iVar41;
              }
            }
            iVar40 = iVar19;
            if (iVar19 <= iVar41) {
              iVar40 = iVar41;
            }
            if (iVar41 == iVar19) {
              iVar40 = *(int *)(unaff_RSI + 0x1ee4);
            }
            FUN_18011da90(unaff_RSI + 0x1ed0,(iVar40 - iVar32) * 4 + 1);
            FUN_180121c40(*(uint64_t *)(unaff_RSI + 0x1ed8),*(int32_t *)(unaff_RSI + 0x1ed0),
                          *(int64_t *)(unaff_RSI + 0x1eb8) + (int64_t)iVar32 * 2,
                          *(int64_t *)(unaff_RSI + 0x1eb8) + (int64_t)iVar40 * 2);
            if (*(code **)(SYSTEM_DATA_MANAGER_A + 0x100) != (code *)0x0) {
              (**(code **)(SYSTEM_DATA_MANAGER_A + 0x100))
                        (*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x108),*(uint64_t *)(unaff_RSI + 0x1ed8)
                        );
            }
          }
          pfVar31 = (float *)(unaff_RSI + 0x1ea8);
          if (bVar14) {
            if (*(int *)(unaff_RSI + 0x1ef4) == *(int *)(unaff_RSI + 0x1ef8)) {
              func_0x00018010e700();
            }
            *(int8_t *)(unaff_RSI + 0x2d18) = 1;
            if (*(int *)(unaff_RSI + 0x1ef4) != *(int *)(unaff_RSI + 0x1ef8)) {
              FUN_180115490(pfVar31,unaff_RSI + 0x1ef0);
              *(int8_t *)(unaff_RSI + 0x1eff) = 0;
            }
          }
        }
        else {
          if (bVar12) {
            pcVar25 = (char *)func_0x000180124700();
            uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
            if (pcVar25 != (char *)0x0) {
              lVar24 = -1;
              do {
                lVar24 = lVar24 + 1;
              } while (pcVar25[lVar24] != '\0');
              puVar26 = (int16_t *)func_0x0001801246b0();
              uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
              *(int16_t **)(unaff_RBP + -0x12) = puVar26;
              iVar19 = 0;
              if (*pcVar25 != '\0') {
                uVar45 = *(uint64_t *)(unaff_RBP + 0x7c);
                fVar43 = unaff_RBP[0x78];
                uVar52 = *(uint64_t *)(unaff_RBP + 0x7a);
                do {
                  iVar41 = FUN_180121550(&stack0x00000060,pcVar25,0);
                  uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
                  pcVar25 = pcVar25 + iVar41;
                  if (_uStack0000000000000060 == 0.0) break;
                  if (((uint)_uStack0000000000000060 < 0x10000) &&
                     (cVar17 = FUN_180116560(&stack0x00000060,fVar43,uVar52,uVar45), cVar17 != '\0')
                     ) {
                    iVar19 = iVar19 + 1;
                    *puVar26 = uStack0000000000000060;
                    puVar26 = puVar26 + 1;
                  }
                  uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
                } while (*pcVar25 != '\0');
                unaff_RSI = *(int64_t *)(unaff_RBP + 4);
                puVar26 = *(int16_t **)(unaff_RBP + -0x12);
              }
              pfVar31 = (float *)(unaff_RSI + 0x1ea8);
              puVar26[iVar19] = 0;
              if (0 < iVar19) {
                FUN_180115580(pfVar31,unaff_RSI + 0x1ef0,puVar26,iVar19);
                *(int8_t *)(unaff_RSI + 0x2d18) = 1;
              }
              func_0x0001801246d0();
              goto LAB_180117443;
            }
          }
LAB_18011743c:
          pfVar31 = (float *)(unaff_RSI + 0x1ea8);
        }
      }
LAB_180117443:
      bVar10 = false;
      goto LAB_180117445;
    }
    cVar17 = func_0x0001801281d0(*(int *)(SYSTEM_DATA_MANAGER_A + 0x70),1);
    uVar20 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
    if (cVar17 == '\0') goto LAB_1801177f4;
    if (bStack0000000000000054 != 0) {
      if (((uint)unaff_RBP[0x78] >> 0xb & 1) == 0) {
        if (*(char *)(unaff_RSI + 0x134) == '\0') goto LAB_1801177b9;
      }
      else if (*(char *)(unaff_RSI + 0x134) != '\0') {
LAB_1801177b9:
        if (in_stack_00000058 != '\0') {
          unaff_RBP[-0x12] = 1.4013e-44;
          cVar17 = FUN_180116560(unaff_RBP + -0x12,unaff_RBP[0x78],*(uint64_t *)(unaff_RBP + 0x7a)
                                 ,*(uint64_t *)(unaff_RBP + 0x7c));
          if (cVar17 != '\0') {
            fVar43 = unaff_RBP[-0x12];
            goto LAB_180117375;
          }
        }
        goto LAB_18011743c;
      }
    }
    bVar16 = true;
    bVar11 = true;
    cStack000000000000005f = '\x01';
    pfVar31 = (float *)(unaff_RSI + 0x1ea8);
    bVar10 = false;
  }
  fVar43 = *(float *)(unaff_RSI + 0x1b2c);
  if (fVar43 == fStack0000000000000074) {
    pcVar25 = (char *)0x0;
    fVar43 = 0.0;
    if (bVar10) {
      fVar43 = 0.0;
      if (in_stack_00000058 != '\0') {
        pcVar25 = *(char **)(unaff_RBP + 0x72);
        lVar24 = (int64_t)*(char **)(unaff_RSI + 0x1ec8) - (int64_t)pcVar25;
        do {
          cVar17 = *pcVar25;
          cVar18 = pcVar25[lVar24];
          if (cVar17 != cVar18) break;
          pcVar25 = pcVar25 + 1;
        } while (cVar18 != '\0');
        pcVar25 = (char *)0x0;
        fVar43 = 0.0;
        if (cVar17 != cVar18) {
          fVar43 = (float)(*(int *)(unaff_RSI + 0x1ec0) + -1);
          pcVar25 = *(char **)(unaff_RSI + 0x1ec8);
        }
      }
      if ((bVar11) && (fVar51 = unaff_RBP[0x78], ((uint)fVar51 & 0x20) != 0)) goto LAB_180117b4d;
      lVar24 = *(int64_t *)(unaff_RBP + 0x72);
      cVar17 = SUB41(unaff_RBP[-0x1e],0);
    }
    else {
      fVar51 = unaff_RBP[0x78];
LAB_180117b4d:
      if (in_stack_00000058 != '\0') {
        FUN_18011da90(unaff_RSI + 0x1ed0,*(int *)(unaff_RSI + 0x1eb0) * 4 + 1);
        FUN_180121c40(*(uint64_t *)(unaff_RSI + 0x1ed8),*(int32_t *)(unaff_RSI + 0x1ed0),
                      *(uint64_t *)(unaff_RSI + 0x1eb8),0);
      }
      if (((uint)fVar51 & 0x1c0) == 0) {
LAB_180117d7c:
        cVar17 = SUB41(unaff_RBP[-0x1e],0);
      }
      else {
        fVar46 = 2.94273e-44;
        if (((((uint)fVar51 & 0x40) == 0) || (*(int *)(SYSTEM_DATA_MANAGER_A + 0x3c) < 0)) ||
           (cVar17 = func_0x0001801281d0(), cVar17 == '\0')) {
          if (SUB41(fVar51,0) < '\0') {
            if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x48) < 0) ||
               (cVar17 = func_0x0001801281d0(), cVar17 == '\0')) {
              if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x4c) < 0) ||
                 (cVar17 = func_0x0001801281d0(), cVar17 == '\0')) goto LAB_180117c0c;
              fVar22 = 1.79366e-43;
              fVar46 = 5.60519e-45;
            }
            else {
              fVar22 = 1.79366e-43;
              fVar46 = 4.2039e-45;
            }
          }
          else {
LAB_180117c0c:
            fVar22 = 3.58732e-43;
            if (((uint)fVar51 & 0x100) == 0) goto LAB_180117d7c;
          }
        }
        else {
          fVar22 = 8.96831e-44;
          fVar46 = 0.0;
        }
        unaff_RBP[0xc] = fVar22;
        *(uint64_t *)(unaff_RBP + 0xe) = *(uint64_t *)(unaff_RBP + 0x7c);
        *(uint64_t *)(unaff_RBP + 0x12) = *(uint64_t *)(unaff_RSI + 0x1ed8);
        unaff_RBP[0x14] = *(float *)(unaff_RSI + 0x1ee0);
        unaff_RBP[0x15] = *(float *)(unaff_RSI + 0x1ee8);
        iVar19 = *(int *)(unaff_RSI + 0x1ef0);
        unaff_RBP[0x11] = fVar46;
        lVar24 = *(int64_t *)(unaff_RSI + 0x1eb8);
        unaff_RBP[0x10] = 0.0;
        *(uint64_t *)((int64_t)unaff_RBP + 0x59) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x61) = 0;
        *(int16_t *)((int64_t)unaff_RBP + 0x65) = 0;
        *(int8_t *)((int64_t)unaff_RBP + 0x67) = 0;
        unaff_RBP[0xd] = fVar51;
        *(int8_t *)(unaff_RBP + 0x16) = 0;
        fVar51 = (float)FUN_180121d80(lVar24,lVar24 + (int64_t)iVar19 * 2);
        iVar19 = *(int *)(unaff_RSI + 0x1ef4);
        unaff_RBP[0x17] = fVar51;
        fVar46 = (float)FUN_180121d80(lVar24,lVar24 + (int64_t)iVar19 * 2);
        unaff_RBP[0x18] = fVar46;
        fVar22 = (float)FUN_180121d80(lVar24);
        unaff_RBP[0x19] = fVar22;
        (**(code **)(unaff_RBP + 0x7a))(unaff_RBP + 0xc);
        if (unaff_RBP[0x17] != fVar51) {
          uVar23 = FUN_1801219c0();
          *(int32_t *)(unaff_RSI + 0x1ef0) = uVar23;
          *(int8_t *)(unaff_RSI + 0x2d18) = 1;
        }
        if (unaff_RBP[0x18] != fVar46) {
          uVar23 = FUN_1801219c0();
          *(int32_t *)(unaff_RSI + 0x1ef4) = uVar23;
        }
        if (unaff_RBP[0x19] != fVar22) {
          uVar23 = FUN_1801219c0();
          *(int32_t *)(unaff_RSI + 0x1ef8) = uVar23;
        }
        cVar17 = SUB41(unaff_RBP[-0x1e],0);
        if (*(char *)(unaff_RBP + 0x16) != '\0') {
          if (((int)fStack0000000000000068 < (int)unaff_RBP[0x14]) && (cVar17 != '\0')) {
            FUN_18011dae0((int *)(unaff_RSI + 0x1eb0),
                          ((int)unaff_RBP[0x14] - (int)fStack0000000000000068) +
                          *(int *)(unaff_RSI + 0x1eb0));
          }
          uVar20 = 0;
          uVar23 = FUN_180121740(*(uint64_t *)(unaff_RSI + 0x1eb8),
                                 *(int32_t *)(unaff_RSI + 0x1eb0),
                                 *(uint64_t *)(unaff_RBP + 0x12),0,0);
          *(int32_t *)(unaff_RSI + 0x1ee4) = uVar23;
          *(float *)(unaff_RSI + 0x1ee0) = unaff_RBP[0x14];
          *(int32_t *)(unaff_RSI + 0x2d14) = 0xbe99999a;
        }
      }
      lVar24 = *(int64_t *)(unaff_RBP + 0x72);
      if (in_stack_00000058 != '\0') {
        pcVar7 = *(char **)(unaff_RSI + 0x1ed8);
        pcVar27 = pcVar7;
        do {
          cVar18 = *pcVar27;
          cVar5 = pcVar27[lVar24 - (int64_t)pcVar7];
          if (cVar18 != cVar5) break;
          pcVar27 = pcVar27 + 1;
        } while (cVar5 != '\0');
        if (cVar18 != cVar5) {
          fVar43 = *(float *)(unaff_RSI + 0x1ee0);
          pcVar25 = pcVar7;
        }
      }
    }
    if (pcVar25 != (char *)0x0) {
      if ((fStack0000000000000068 == fVar43) || (cVar17 == '\0')) {
        fVar51 = unaff_RBP[0x74];
      }
      else {
        unaff_RBP[0x1f] = unaff_RBP[0x78];
        unaff_RBP[0x22] = 0.0;
        unaff_RBP[0x23] = 0.0;
        unaff_RBP[0x28] = 0.0;
        unaff_RBP[0x29] = 0.0;
        unaff_RBP[0x2a] = 0.0;
        unaff_RBP[0x2b] = 0.0;
        fVar51 = (float)((int)fVar43 + 1);
        if ((int)fVar43 + 1 <= (int)unaff_RBP[0x74]) {
          fVar51 = unaff_RBP[0x74];
        }
        unaff_RBP[0x27] = fVar51;
        *(uint64_t *)(unaff_RBP + 0x20) = *(uint64_t *)(unaff_RBP + 0x7c);
        unaff_RBP[0x1e] = 3.67342e-40;
        *(int64_t *)(unaff_RBP + 0x24) = lVar24;
        unaff_RBP[0x26] = fVar43;
        (**(code **)(unaff_RBP + 0x7a))(unaff_RBP + 0x1e);
        fVar51 = unaff_RBP[0x27];
        lVar24 = *(int64_t *)(unaff_RBP + 0x24);
        *(int64_t *)(unaff_RBP + 0x72) = lVar24;
        fVar43 = (float)((int)fVar51 + -1);
        if ((int)unaff_RBP[0x26] < (int)fVar51 + -1) {
          fVar43 = unaff_RBP[0x26];
        }
      }
      if ((int)fVar43 + 1 < (int)fVar51) {
        fVar51 = (float)((int)fVar43 + 1);
      }
      lVar34 = (int64_t)(int)fVar51;
      if (lVar34 != 0) {
        strncpy(lVar24,*(uint64_t *)(unaff_RSI + 0x1ed8),lVar34);
        *(int8_t *)(lVar34 + -1 + lVar24) = 0;
      }
      cStack000000000000005e = '\x01';
    }
    *(int32_t *)(unaff_RSI + 0x2d1c) = 0;
    *(uint64_t *)(unaff_RSI + 0x2d20) = 0;
    *(uint64_t *)(unaff_RSI + 0x2d28) = 0;
    fVar43 = *(float *)(unaff_RSI + 0x1b2c);
  }
  if (bVar16) {
    if (fVar43 == fStack0000000000000074) {
      func_0x000180123e90(0);
      fVar43 = *(float *)(unaff_RSI + 0x1b2c);
      goto LAB_180117e4a;
    }
LAB_180117e69:
    lVar24 = *(int64_t *)(unaff_RBP + 0x72);
  }
  else {
LAB_180117e4a:
    if ((fVar43 != fStack0000000000000074) || (in_stack_00000058 == '\0')) goto LAB_180117e69;
    lVar24 = *(int64_t *)(unaff_RSI + 0x1ed8);
    *(int64_t *)(unaff_RBP + 0x72) = lVar24;
  }
  fVar51 = 2.0;
  if (bStack0000000000000054 == 0) {
    if (((fStack0000000000000074 == *(float *)(SYSTEM_DATA_MANAGER_A + 0x1ca0)) &&
        (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d06) == '\0')) &&
       (lVar34 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8), *(char *)(lVar34 + 0x17c) == '\0')) {
      pfVar28 = (float *)(lVar34 + 0x228);
      uVar23 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1664);
      *(uint64_t *)(unaff_RBP + -0xc) = *(uint64_t *)(unaff_RBP + -0x18);
      *(uint64_t *)(unaff_RBP + -10) = *(uint64_t *)(unaff_RBP + -0x16);
      func_0x00018010e690(unaff_RBP + -0xc,pfVar28);
      fStack0000000000000068 = 4.0;
      fStack000000000000006c = 4.0;
      func_0x00018010e650(unaff_RBP + -0xc,&stack0x00000068);
      if (unaff_RBP[-0xc] < *pfVar28) {
        cVar17 = '\0';
LAB_180117f26:
        FUN_180291b40(*(uint64_t *)(lVar34 + 0x2e8),*(uint64_t *)(unaff_RBP + -0xc),
                      *(uint64_t *)(unaff_RBP + -10),0);
      }
      else {
        cVar17 = func_0x00018010e5b0(pfVar28,unaff_RBP + -0xc);
        if (cVar17 == '\0') goto LAB_180117f26;
      }
      uVar45 = *(uint64_t *)(lVar34 + 0x2e8);
      uVar33 = FUN_180121ed0(0x2e,0x3f800000);
      fStack0000000000000068 = unaff_RBP[-10] - 1.0;
      fStack000000000000006c = unaff_RBP[-9] - 1.0;
      unaff_RBP[-0x1e] = unaff_RBP[-0xc] + 1.0;
      unaff_RBP[-0x1d] = unaff_RBP[-0xb] + 1.0;
      if ((uVar33 & 0xff000000) != 0) {
        uVar52 = CONCAT44(uVar20,uVar23);
        FUN_180293e80(uVar45,unaff_RBP + -0x1e,&stack0x00000068,uVar33,uVar52);
        uVar20 = (int32_t)((uint64_t)uVar52 >> 0x20);
      }
      if (cVar17 == '\0') {
        piVar1 = (int *)(*(int64_t *)(lVar34 + 0x2e8) + 0x60);
        *piVar1 = *piVar1 + -1;
        FUN_180291950();
      }
    }
    lVar34 = SYSTEM_DATA_MANAGER_A;
    uVar23 = *(int32_t *)(unaff_RSI + 0x1664);
    fVar43 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x173c);
    fVar46 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1740);
    fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1744);
    unaff_RBP[-8] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1738);
    unaff_RBP[-7] = fVar43;
    unaff_RBP[-6] = fVar46;
    unaff_RBP[-5] = fVar22;
    unaff_RBP[-5] = fVar22 * *(float *)(lVar34 + 0x1628);
    uVar21 = func_0x000180121e20(unaff_RBP + -8);
    FUN_180122960(*(uint64_t *)(unaff_RBP + -0x18),*(uint64_t *)(unaff_RBP + -0x16),uVar21,1,
                  CONCAT44(uVar20,uVar23));
    fVar43 = *(float *)(unaff_RSI + 0x1b2c);
  }
  fVar46 = fStack0000000000000074;
  lVar34 = *(int64_t *)(unaff_RBP + -0x20);
  unaff_RBP[-2] = unaff_RBP[-0x18];
  unaff_RBP[-1] = unaff_RBP[-0x17];
  *unaff_RBP = unaff_RBP[-0x18] + unaff_RBP[-0x14];
  unaff_RBP[1] = unaff_RBP[-0x13] + unaff_RBP[-0x17];
  if (bStack0000000000000054 == 0) {
    pfVar28 = unaff_RBP + -0x1c;
    fVar22 = *(float *)(unaff_RSI + 0x1660);
    unaff_RBP[-0x1c] = unaff_RBP[-0x18] + *(float *)(unaff_RSI + 0x165c);
    unaff_RBP[-0x1b] = unaff_RBP[-0x17] + fVar22;
  }
  else {
    pfVar28 = unaff_RBP + 4;
    *(uint64_t *)(unaff_RBP + 4) = *(uint64_t *)(lVar34 + 0x100);
  }
  fVar22 = *pfVar31;
  *(uint64_t *)(unaff_RBP + -0x1c) = *(uint64_t *)pfVar28;
  if ((fVar22 == fStack0000000000000074) && (bStack0000000000000054 != 0)) {
    fVar43 = *(float *)(unaff_RSI + 0x1b2c);
    fVar22 = (float)func_0x000180123d50(lVar34,&unknown_var_2064_ptr,0);
    if (fVar43 != fVar22) goto LAB_1801180e1;
    bVar10 = true;
  }
  else {
LAB_1801180e1:
    bVar10 = false;
  }
  fVar22 = unaff_XMM8_Da;
  fVar50 = unaff_XMM8_Da;
  if ((fVar43 == fVar46) || (bVar10)) {
    psVar8 = *(short **)(unaff_RSI + 0x1eb8);
    psVar35 = (short *)0x0;
    iVar41 = *(int *)(unaff_RSI + 0x1ef4);
    iVar19 = -1;
    iVar40 = -999;
    psVar36 = psVar8 + *(int *)(unaff_RSI + 0x1ef0);
    iVar32 = *(int *)(unaff_RSI + 0x1ef8);
    *(float *)(unaff_RSI + 0x2d14) = *(float *)(unaff_RSI + 0x18) + *(float *)(unaff_RSI + 0x2d14);
    if (iVar41 == iVar32) {
      iVar41 = 1;
    }
    else {
      if (iVar41 < iVar32) {
        iVar32 = iVar41;
      }
      iVar41 = 2;
      iVar40 = -1;
      psVar35 = psVar8 + iVar32;
    }
    iVar32 = 0;
    sVar6 = *psVar8;
    iVar41 = iVar41 + (uint)bStack0000000000000054;
    psVar30 = psVar8;
    while ((sVar6 != 0 &&
           ((sVar6 != 10 ||
            ((((iVar32 = iVar32 + 1, iVar19 != -1 || (psVar30 < psVar36)) ||
              (iVar41 = iVar41 + -1, iVar19 = iVar32, 0 < iVar41)) &&
             (((iVar40 != -1 || (psVar30 < psVar35)) ||
              (iVar41 = iVar41 + -1, iVar40 = iVar32, 0 < iVar41))))))))) {
      sVar6 = psVar30[1];
      psVar30 = psVar30 + 1;
    }
    iVar32 = iVar32 + 1;
    iVar41 = iVar32;
    if (iVar19 != -1) {
      iVar41 = iVar19;
    }
    psVar30 = psVar36;
    iVar19 = iVar32;
    if (iVar40 != -1) {
      iVar19 = iVar40;
    }
    do {
      psVar15 = psVar30;
      if (psVar15 <= psVar8) break;
      psVar30 = psVar15 + -1;
    } while (psVar15[-1] != 10);
    uVar53 = 0;
    pfVar31 = (float *)FUN_180114a70(unaff_RBP + 4,psVar15,psVar36,0,0);
    fVar46 = *(float *)(unaff_RSI + 0x19f8);
    fVar43 = *pfVar31;
    fVar49 = (float)iVar41 * fVar46;
    fVar47 = unaff_XMM8_Da;
    fVar48 = unaff_XMM8_Da;
    fStack0000000000000068 = fVar43;
    psVar36 = psVar35;
    if (-1 < iVar19) {
      do {
        psVar30 = psVar36;
        if (psVar30 <= psVar8) break;
        psVar36 = psVar30 + -1;
      } while (psVar30[-1] != 10);
      uVar53 = 0;
      pfVar31 = (float *)FUN_180114a70(unaff_RBP + -0xc,psVar30,psVar35,0,0);
      fVar46 = *(float *)(unaff_RSI + 0x19f8);
      fVar47 = *pfVar31;
      fVar48 = (float)iVar19 * fVar46;
    }
    uVar20 = (int32_t)(uVar53 >> 0x20);
    fVar44 = unaff_RBP[-0x14];
    if (bStack0000000000000054 != 0) {
      fVar50 = (float)iVar32 * fVar46;
      fVar22 = fVar44;
    }
    if (*(char *)(unaff_RSI + 0x2d18) == '\0') {
      lVar34 = *(int64_t *)(unaff_RBP + -0x20);
    }
    else {
      if (((uint)unaff_RBP[0x78] & 0x1000) == 0) {
        if (*(float *)(unaff_RSI + 0x1eec) <= fVar43) {
          if (*(float *)(unaff_RSI + 0x1eec) <= fVar43 - fVar44) {
            *(float *)(unaff_RSI + 0x1eec) = (float)(int)(fVar44 * 0.25 + (fVar43 - fVar44));
          }
        }
        else {
          fVar46 = fVar43 - fVar44 * 0.25;
          if (fVar46 <= unaff_XMM8_Da) {
            fVar46 = unaff_XMM8_Da;
          }
          *(float *)(unaff_RSI + 0x1eec) = (float)(int)fVar46;
        }
      }
      else {
        *(int32_t *)(unaff_RSI + 0x1eec) = 0;
      }
      lVar34 = *(int64_t *)(unaff_RBP + -0x20);
      if (bStack0000000000000054 != 0) {
        fVar46 = *(float *)(lVar34 + 0x90);
        fVar44 = fVar49 - *(float *)(unaff_RSI + 0x19f8);
        if (fVar46 <= fVar44) {
          fVar44 = fVar49 - unaff_RBP[-0x13];
          if (fVar49 - unaff_RBP[-0x13] <= fVar46) {
            fVar44 = fVar46;
          }
        }
        else if (fVar44 <= unaff_XMM8_Da) {
          fVar44 = unaff_XMM8_Da;
        }
        *(float *)(lVar34 + 0x90) = fVar44;
        fVar46 = (fVar46 - fVar44) + *(float *)(lVar34 + 0x104);
        *(float *)(lVar34 + 0x104) = fVar46;
        unaff_RBP[-0x1b] = fVar46;
      }
    }
    iVar19 = *(int *)(unaff_RSI + 0x1ef8);
    iVar41 = *(int *)(unaff_RSI + 0x1ef4);
    fVar46 = *(float *)(unaff_RSI + 0x1eec);
    *(int8_t *)(unaff_RSI + 0x2d18) = 0;
    if (iVar41 != iVar19) {
      iVar32 = iVar19;
      if (iVar41 < iVar19) {
        iVar32 = iVar41;
        iVar41 = iVar19;
      }
      psVar36 = psVar8 + iVar32;
      psVar8 = psVar8 + iVar41;
      if (bStack0000000000000054 != 0) {
        fVar51 = 0.0;
        unaff_RBP[-0x10] = 0.0;
      }
      lVar24 = SYSTEM_DATA_MANAGER_A;
      fVar44 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x198c);
      fVar4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1990);
      fVar9 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1994);
      unaff_RBP[0x2c] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1988);
      unaff_RBP[0x2d] = fVar44;
      unaff_RBP[0x2e] = fVar4;
      unaff_RBP[0x2f] = fVar9;
      unaff_RBP[0x2f] = fVar9 * *(float *)(lVar24 + 0x1628);
      uVar23 = func_0x000180121e20(unaff_RBP + 0x2c);
      uVar20 = (int32_t)(uVar53 >> 0x20);
      *(short **)(unaff_RBP + -0x20) = psVar36;
      fVar47 = unaff_RBP[-0x1c] + fVar47;
      fVar48 = unaff_RBP[-0x1b] + fVar48;
      if (psVar36 < psVar8) {
        fVar44 = *(float *)(unaff_RSI + 0x19f8);
        fVar4 = unaff_RBP[-0x10];
        do {
          uVar20 = (int32_t)(uVar53 >> 0x20);
          fVar43 = fStack0000000000000068;
          if (unaff_RBP[1] + fVar44 < fVar48) break;
          if (unaff_RBP[-1] <= fVar48) {
            uVar53 = 0;
            FUN_180114a70(unaff_RBP + -0x1e,psVar36,psVar8,unaff_RBP + -0x20,0);
            fVar43 = unaff_RBP[-0x1e];
            if (fVar43 <= 0.0) {
              lVar24 = *(int64_t *)(unaff_RSI + 0x19f0);
              if (*(int *)(lVar24 + 0x20) < 0x21) {
                fVar43 = *(float *)(lVar24 + 0x48);
              }
              else {
                fVar43 = *(float *)(*(int64_t *)(lVar24 + 0x28) + 0x80);
              }
              fVar43 = (float)(int)(fVar43 * 0.5);
              unaff_RBP[-0x1e] = fVar43;
            }
            unaff_RBP[8] = fVar47 - fVar46;
            fVar44 = *(float *)(unaff_RSI + 0x19f8);
            unaff_RBP[10] = fVar43 + (fVar47 - fVar46);
            unaff_RBP[0xb] = fVar51 + fVar48;
            unaff_RBP[9] = (fVar4 - fVar44) + fVar48;
            func_0x00018010e540(unaff_RBP + -0x10,unaff_RBP + -2);
            func_0x00018010e690(unaff_RBP + 8,unaff_RBP + -0x10);
            func_0x00018010e540(unaff_RBP + 0x30,unaff_RBP + -2);
            cVar17 = func_0x00018010e5e0(unaff_RBP + 8,unaff_RBP + 0x30);
            if (cVar17 != '\0') {
              uVar53 = uVar53 & 0xffffffff00000000;
              FUN_180293f50(*(uint64_t *)(lVar34 + 0x2e8),unaff_RBP + 8,unaff_RBP + 10,uVar23,
                            uVar53);
            }
            psVar36 = *(short **)(unaff_RBP + -0x20);
          }
          else {
            do {
              if (psVar8 <= psVar36) break;
              sVar6 = *psVar36;
              psVar36 = psVar36 + 1;
              *(short **)(unaff_RBP + -0x20) = psVar36;
            } while (sVar6 != 10);
          }
          uVar20 = (int32_t)(uVar53 >> 0x20);
          fVar44 = *(float *)(unaff_RSI + 0x19f8);
          fVar47 = unaff_RBP[-0x1c];
          fVar48 = fVar48 + fVar44;
          fVar43 = fStack0000000000000068;
        } while (psVar36 < psVar8);
      }
    }
    lVar24 = SYSTEM_DATA_MANAGER_A;
    if ((bStack0000000000000054 == 0) && (0x1fffff < *(int *)(unaff_RSI + 0x1ee0))) {
      lVar24 = *(int64_t *)(unaff_RBP + 0x72);
    }
    else {
      uVar45 = *(uint64_t *)(lVar34 + 0x2e8);
      fVar51 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
      fVar47 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
      fVar48 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
      unaff_RBP[-0x10] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
      unaff_RBP[-0xf] = fVar51;
      unaff_RBP[-0xe] = fVar47;
      unaff_RBP[-0xd] = fVar48;
      unaff_RBP[-0xd] = fVar48 * *(float *)(lVar24 + 0x1628);
      uVar23 = func_0x000180121e20(unaff_RBP + -0x10);
      pfVar31 = unaff_RBP + -2;
      lVar24 = *(int64_t *)(unaff_RBP + 0x72);
      fStack0000000000000068 = unaff_RBP[-0x1c] - fVar46;
      if (bStack0000000000000054 != 0) {
        pfVar31 = (float *)0x0;
      }
      fStack000000000000006c = unaff_RBP[-0x1b];
      uVar52 = CONCAT44(uVar20,uVar23);
      FUN_180294200(uVar45,*(uint64_t *)(unaff_RSI + 0x19f0),pfVar31,&stack0x00000068,uVar52);
      uVar20 = (int32_t)((uint64_t)uVar52 >> 0x20);
    }
    if (((*(char *)(unaff_RSI + 0xca) == '\0') || (*(float *)(unaff_RSI + 0x2d14) <= 0.0)) ||
       (fVar51 = (float)fmodf(), fVar51 <= 0.8)) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    fVar49 = unaff_RBP[-0x1b] + fVar49;
    fVar46 = (unaff_RBP[-0x1c] + fVar43) - fVar46;
    fVar43 = *(float *)(unaff_RSI + 0x19f8);
    unaff_RBP[-8] = fVar46;
    unaff_RBP[-5] = fVar49 - 1.5;
    unaff_RBP[-7] = (fVar49 - fVar43) + 0.5;
    unaff_RBP[-6] = fVar46 + 1.0;
    if (bVar10) {
      func_0x00018010e540(unaff_RBP + 0x34,unaff_RBP + -2);
      cVar17 = func_0x00018010e5e0(unaff_RBP + -8,unaff_RBP + 0x34);
      lVar29 = SYSTEM_DATA_MANAGER_A;
      if (cVar17 != '\0') {
        uVar45 = *(uint64_t *)(lVar34 + 0x2e8);
        fVar43 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
        fVar51 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
        fVar47 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
        unaff_RBP[-0x10] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
        unaff_RBP[-0xf] = fVar43;
        unaff_RBP[-0xe] = fVar51;
        unaff_RBP[-0xd] = fVar47;
        unaff_RBP[-0xd] = fVar47 * *(float *)(lVar29 + 0x1628);
        uVar23 = func_0x000180121e20(unaff_RBP + -0x10);
        fStack0000000000000074 = unaff_RBP[-8];
        in_stack_00000078 = unaff_RBP[-5];
        FUN_180293d20(uVar45,unaff_RBP + -8,(int64_t)&stack0x00000070 + 4,uVar23,
                      CONCAT44(uVar20,0x3f800000));
      }
    }
    unaff_XMM8_Da = 0.0;
    if (in_stack_00000058 != '\0') {
      lVar34 = *(int64_t *)(unaff_RBP + -4);
      *(float *)(unaff_RSI + 0x2de4) = fVar49 - *(float *)(unaff_RSI + 0x19f8);
      *(float *)(unaff_RSI + 0x2de0) = fVar46 - 1.0;
      *(uint64_t *)(unaff_RSI + 0x2df0) = *(uint64_t *)(lVar34 + 0x28);
    }
  }
  else {
    unaff_RBP[-0x10] = 0.0;
    unaff_RBP[-0xf] = 0.0;
    if (bStack0000000000000054 == 0) {
      lVar29 = -1;
      do {
        pcVar25 = (char *)(lVar24 + 1 + lVar29);
        lVar29 = lVar29 + 1;
      } while (*pcVar25 != '\0');
      *(int64_t *)(unaff_RBP + -0x10) = lVar29 + lVar24;
      if (0x1fffff < (lVar29 + lVar24) - lVar24) goto LAB_18011890c;
    }
    else {
      iVar19 = func_0x000180114a30(lVar24,unaff_RBP + -0x10);
      fVar22 = unaff_RBP[-0x14];
      fVar50 = (float)iVar19 * *(float *)(unaff_RSI + 0x19f8);
    }
    lVar29 = SYSTEM_DATA_MANAGER_A;
    uVar45 = *(uint64_t *)(lVar34 + 0x2e8);
    fVar43 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
    fVar51 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
    fVar46 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
    unaff_RBP[-8] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
    unaff_RBP[-7] = fVar43;
    unaff_RBP[-6] = fVar51;
    unaff_RBP[-5] = fVar46;
    unaff_RBP[-5] = fVar46 * *(float *)(lVar29 + 0x1628);
    func_0x000180121e20(unaff_RBP + -8);
    FUN_180294200(uVar45,*(uint64_t *)(unaff_RSI + 0x19f0));
  }
  if (bStack0000000000000054 != 0) {
    fVar43 = *(float *)(unaff_RSI + 0x19f8);
    unaff_RBP[-4] = fVar22;
    unaff_RBP[-3] = fVar50 + fVar43;
    FUN_1801120e0(unaff_RBP + -4);
    FUN_1801285e0();
    FUN_18012e4e0();
  }
LAB_18011890c:
  cVar17 = SUB41(unaff_RBP[-0x1a],0);
  if (cVar17 != '\0') {
    FUN_18012d840();
    cVar17 = SUB41(unaff_RBP[-0x1a],0);
  }
  if ((*(char *)(unaff_RSI + 0x2e38) != '\0') && (cVar17 == '\0')) {
    FUN_18013c800(unaff_RBP + -0x1c,lVar24,0);
  }
  if (unaff_XMM8_Da < unaff_RBP[6]) {
    FUN_180122320(CONCAT44(unaff_RBP[-0x17] + *(float *)(unaff_RSI + 0x1660),
                           unaff_RBP[-0x16] + *(float *)(unaff_RSI + 0x1674)),
                  *(uint64_t *)(unaff_RBP + 0x70),0,1);
  }
  if (cStack000000000000005e != '\0') {
    plVar2 = (int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1b3e) = 1;
    puVar3 = (uint *)(*plVar2 + 0x148);
    *puVar3 = *puVar3 | 4;
  }
  if (((uint)unaff_RBP[0x78] & 0x20) != 0) {
    cStack000000000000005e = cStack000000000000005f;
  }
  return cStack000000000000005e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_1801181fa(int32_t param_1,int param_2,uint64_t param_3,int param_4)

{
  int64_t *plVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  uint64_t uVar6;
  int32_t uVar7;
  bool bVar8;
  short *psVar9;
  char cVar10;
  int iVar11;
  int32_t uVar12;
  int64_t in_RAX;
  short *psVar13;
  float *pfVar14;
  int in_ECX;
  short *unaff_RBX;
  short *psVar15;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  short *unaff_RDI;
  int iVar16;
  int64_t lVar17;
  int iVar18;
  int64_t lVar19;
  byte unaff_R13B;
  uint64_t uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM7_Da;
  float fVar24;
  float unaff_XMM8_Da;
  float fVar25;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t uVar26;
  int32_t uVar28;
  uint64_t uVar27;
  uint64_t in_stack_00000050;
  char cStack0000000000000058;
  char cStack000000000000005e;
  char cStack000000000000005f;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000070;
  int32_t in_stack_00000078;
  
  iVar16 = -999;
  psVar15 = unaff_RDI + in_RAX;
  iVar11 = *(int *)(unaff_RSI + 0x1ef8);
  *(int32_t *)(unaff_RSI + 0x2d14) = param_1;
  if (in_ECX == iVar11) {
    iVar18 = 1;
  }
  else {
    if (in_ECX < iVar11) {
      iVar11 = in_ECX;
    }
    iVar18 = param_2 + 2;
    unaff_RBX = unaff_RDI + iVar11;
    iVar16 = param_4;
  }
  sVar5 = *unaff_RDI;
  iVar18 = iVar18 + (uint)unaff_R13B;
  psVar13 = unaff_RDI;
  while ((sVar5 != 0 &&
         ((sVar5 != 10 ||
          ((((param_2 = param_2 + 1, param_4 != -1 || (psVar13 < psVar15)) ||
            (iVar18 = iVar18 + -1, param_4 = param_2, 0 < iVar18)) &&
           (((iVar16 != -1 || (psVar13 < unaff_RBX)) ||
            (iVar18 = iVar18 + -1, iVar16 = param_2, 0 < iVar18))))))))) {
    sVar5 = psVar13[1];
    psVar13 = psVar13 + 1;
  }
  param_2 = param_2 + 1;
  iVar11 = param_2;
  if (param_4 != -1) {
    iVar11 = param_4;
  }
  psVar13 = psVar15;
  iVar18 = param_2;
  if (iVar16 != -1) {
    iVar18 = iVar16;
  }
  do {
    psVar9 = psVar13;
    if (psVar9 <= unaff_RDI) break;
    psVar13 = psVar9 + -1;
  } while (psVar9[-1] != 10);
  uVar26 = 0;
  pfVar14 = (float *)FUN_180114a70(unaff_RBP + 0x10,psVar9,psVar15,0,0);
  fVar21 = *(float *)(unaff_RSI + 0x19f8);
  fVar23 = *pfVar14;
  fVar25 = (float)iVar11 * fVar21;
  fVar24 = unaff_XMM8_Da;
  fStack0000000000000068 = fVar23;
  psVar15 = unaff_RBX;
  if (-1 < iVar18) {
    do {
      psVar13 = psVar15;
      if (psVar13 <= unaff_RDI) break;
      psVar15 = psVar13 + -1;
    } while (psVar13[-1] != 10);
    uVar26 = 0;
    pfVar14 = (float *)FUN_180114a70(unaff_RBP + -0x30,psVar13,unaff_RBX,0,0);
    fVar21 = *(float *)(unaff_RSI + 0x19f8);
    unaff_XMM7_Da = *pfVar14;
    fVar24 = (float)iVar18 * fVar21;
  }
  uVar28 = (int32_t)(uVar26 >> 0x20);
  fVar22 = *(float *)(unaff_RBP + -0x50);
  if (unaff_R13B != 0) {
    unaff_XMM12_Da = (float)param_2 * fVar21;
    unaff_XMM15_Da = fVar22;
  }
  if (*(char *)(unaff_RSI + 0x2d18) == '\0') {
    lVar19 = *(int64_t *)(unaff_RBP + -0x80);
  }
  else {
    if ((*(uint *)(unaff_RBP + 0x1e0) & 0x1000) == 0) {
      if (*(float *)(unaff_RSI + 0x1eec) <= fVar23) {
        if (*(float *)(unaff_RSI + 0x1eec) <= fVar23 - fVar22) {
          *(float *)(unaff_RSI + 0x1eec) = (float)(int)(fVar22 * 0.25 + (fVar23 - fVar22));
        }
      }
      else {
        fVar21 = fVar23 - fVar22 * 0.25;
        if (fVar21 <= unaff_XMM8_Da) {
          fVar21 = unaff_XMM8_Da;
        }
        *(float *)(unaff_RSI + 0x1eec) = (float)(int)fVar21;
      }
    }
    else {
      *(int32_t *)(unaff_RSI + 0x1eec) = 0;
    }
    lVar19 = *(int64_t *)(unaff_RBP + -0x80);
    if (unaff_R13B != 0) {
      fVar21 = *(float *)(lVar19 + 0x90);
      fVar22 = fVar25 - *(float *)(unaff_RSI + 0x19f8);
      if (fVar21 <= fVar22) {
        fVar22 = fVar25 - *(float *)(unaff_RBP + -0x4c);
        if (fVar22 <= fVar21) {
          fVar22 = fVar21;
        }
      }
      else if (fVar22 <= unaff_XMM8_Da) {
        fVar22 = unaff_XMM8_Da;
      }
      *(float *)(lVar19 + 0x90) = fVar22;
      fVar21 = (fVar21 - fVar22) + *(float *)(lVar19 + 0x104);
      *(float *)(lVar19 + 0x104) = fVar21;
      *(float *)(unaff_RBP + -0x6c) = fVar21;
    }
  }
  iVar11 = *(int *)(unaff_RSI + 0x1ef8);
  iVar16 = *(int *)(unaff_RSI + 0x1ef4);
  fVar21 = *(float *)(unaff_RSI + 0x1eec);
  *(int8_t *)(unaff_RSI + 0x2d18) = 0;
  if (iVar16 != iVar11) {
    iVar18 = iVar11;
    if (iVar16 < iVar11) {
      iVar18 = iVar16;
      iVar16 = iVar11;
    }
    psVar15 = unaff_RDI + iVar18;
    psVar13 = unaff_RDI + iVar16;
    if (unaff_R13B != 0) {
      unaff_XMM14_Da = 0.0;
      *(int32_t *)(unaff_RBP + -0x40) = 0;
    }
    lVar17 = SYSTEM_DATA_MANAGER_A;
    uVar28 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x198c);
    uVar12 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1990);
    fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1994);
    *(int32_t *)(unaff_RBP + 0xb0) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1988);
    *(int32_t *)(unaff_RBP + 0xb4) = uVar28;
    *(int32_t *)(unaff_RBP + 0xb8) = uVar12;
    *(float *)(unaff_RBP + 0xbc) = fVar22;
    *(float *)(unaff_RBP + 0xbc) = fVar22 * *(float *)(lVar17 + 0x1628);
    uVar12 = func_0x000180121e20(unaff_RBP + 0xb0);
    uVar28 = (int32_t)(uVar26 >> 0x20);
    *(short **)(unaff_RBP + -0x80) = psVar15;
    fVar22 = *(float *)(unaff_RBP + -0x70) + unaff_XMM7_Da;
    fVar24 = *(float *)(unaff_RBP + -0x6c) + fVar24;
    if (psVar15 < psVar13) {
      fVar23 = *(float *)(unaff_RSI + 0x19f8);
      fVar3 = *(float *)(unaff_RBP + -0x40);
      do {
        uVar28 = (int32_t)(uVar26 >> 0x20);
        if (*(float *)(unaff_RBP + 4) + fVar23 < fVar24) break;
        if (*(float *)(unaff_RBP + -4) <= fVar24) {
          uVar26 = 0;
          FUN_180114a70(unaff_RBP + -0x78,psVar15,psVar13,unaff_RBP + -0x80,0);
          fVar23 = *(float *)(unaff_RBP + -0x78);
          if (fVar23 <= 0.0) {
            lVar17 = *(int64_t *)(unaff_RSI + 0x19f0);
            if (*(int *)(lVar17 + 0x20) < 0x21) {
              fVar23 = *(float *)(lVar17 + 0x48);
            }
            else {
              fVar23 = *(float *)(*(int64_t *)(lVar17 + 0x28) + 0x80);
            }
            fVar23 = (float)(int)(fVar23 * 0.5);
            *(float *)(unaff_RBP + -0x78) = fVar23;
          }
          *(float *)(unaff_RBP + 0x20) = fVar22 - fVar21;
          fVar4 = *(float *)(unaff_RSI + 0x19f8);
          *(float *)(unaff_RBP + 0x28) = fVar23 + (fVar22 - fVar21);
          *(float *)(unaff_RBP + 0x2c) = unaff_XMM14_Da + fVar24;
          *(float *)(unaff_RBP + 0x24) = (fVar3 - fVar4) + fVar24;
          func_0x00018010e540(unaff_RBP + -0x40,unaff_RBP + -8);
          func_0x00018010e690(unaff_RBP + 0x20,unaff_RBP + -0x40);
          func_0x00018010e540(unaff_RBP + 0xc0,unaff_RBP + -8);
          cVar10 = func_0x00018010e5e0(unaff_RBP + 0x20,unaff_RBP + 0xc0);
          if (cVar10 != '\0') {
            uVar26 = uVar26 & 0xffffffff00000000;
            FUN_180293f50(*(uint64_t *)(lVar19 + 0x2e8),unaff_RBP + 0x20,unaff_RBP + 0x28,uVar12,
                          uVar26);
          }
          psVar15 = *(short **)(unaff_RBP + -0x80);
        }
        else {
          do {
            if (psVar13 <= psVar15) break;
            sVar5 = *psVar15;
            psVar15 = psVar15 + 1;
            *(short **)(unaff_RBP + -0x80) = psVar15;
          } while (sVar5 != 10);
        }
        uVar28 = (int32_t)(uVar26 >> 0x20);
        fVar23 = *(float *)(unaff_RSI + 0x19f8);
        fVar22 = *(float *)(unaff_RBP + -0x70);
        fVar24 = fVar24 + fVar23;
      } while (psVar15 < psVar13);
      unaff_XMM13_Da = 1.0;
      fVar23 = fStack0000000000000068;
      unaff_R13B = in_stack_00000050._4_1_;
    }
  }
  lVar17 = SYSTEM_DATA_MANAGER_A;
  if ((unaff_R13B == 0) && (0x1fffff < *(int *)(unaff_RSI + 0x1ee0))) {
    uVar20 = *(uint64_t *)(unaff_RBP + 0x1c8);
  }
  else {
    uVar6 = *(uint64_t *)(lVar19 + 0x2e8);
    uVar12 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
    uVar7 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
    fVar24 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
    *(int32_t *)(unaff_RBP + -0x40) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
    *(int32_t *)(unaff_RBP + -0x3c) = uVar12;
    *(int32_t *)(unaff_RBP + -0x38) = uVar7;
    *(float *)(unaff_RBP + -0x34) = fVar24;
    *(float *)(unaff_RBP + -0x34) = fVar24 * *(float *)(lVar17 + 0x1628);
    uVar12 = func_0x000180121e20(unaff_RBP + -0x40);
    lVar17 = unaff_RBP + -8;
    uVar20 = *(uint64_t *)(unaff_RBP + 0x1c8);
    fStack0000000000000068 = *(float *)(unaff_RBP + -0x70) - fVar21;
    if (unaff_R13B != 0) {
      lVar17 = 0;
    }
    uStack000000000000006c = *(int32_t *)(unaff_RBP + -0x6c);
    uVar27 = CONCAT44(uVar28,uVar12);
    FUN_180294200(uVar6,*(uint64_t *)(unaff_RSI + 0x19f0),lVar17,&stack0x00000068,uVar27);
    uVar28 = (int32_t)((uint64_t)uVar27 >> 0x20);
  }
  if (((*(char *)(unaff_RSI + 0xca) == '\0') || (*(float *)(unaff_RSI + 0x2d14) <= 0.0)) ||
     (fVar24 = (float)fmodf(), fVar24 <= 0.8)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  fVar25 = *(float *)(unaff_RBP + -0x6c) + fVar25;
  fVar21 = (*(float *)(unaff_RBP + -0x70) + fVar23) - fVar21;
  fVar23 = *(float *)(unaff_RSI + 0x19f8);
  *(float *)(unaff_RBP + -0x20) = fVar21;
  *(float *)(unaff_RBP + -0x14) = fVar25 - 1.5;
  *(float *)(unaff_RBP + -0x1c) = (fVar25 - fVar23) + 0.5;
  *(float *)(unaff_RBP + -0x18) = fVar21 + unaff_XMM13_Da;
  if (bVar8) {
    func_0x00018010e540(unaff_RBP + 0xd0,unaff_RBP + -8);
    cVar10 = func_0x00018010e5e0(unaff_RBP + -0x20,unaff_RBP + 0xd0);
    lVar17 = SYSTEM_DATA_MANAGER_A;
    if (cVar10 != '\0') {
      uVar6 = *(uint64_t *)(lVar19 + 0x2e8);
      uVar12 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
      uVar7 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
      fVar23 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
      *(int32_t *)(unaff_RBP + -0x40) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
      *(int32_t *)(unaff_RBP + -0x3c) = uVar12;
      *(int32_t *)(unaff_RBP + -0x38) = uVar7;
      *(float *)(unaff_RBP + -0x34) = fVar23;
      *(float *)(unaff_RBP + -0x34) = fVar23 * *(float *)(lVar17 + 0x1628);
      uVar12 = func_0x000180121e20(unaff_RBP + -0x40);
      in_stack_00000070._4_4_ = *(int32_t *)(unaff_RBP + -0x20);
      in_stack_00000078 = *(int32_t *)(unaff_RBP + -0x14);
      FUN_180293d20(uVar6,unaff_RBP + -0x20,(int64_t)&stack0x00000070 + 4,uVar12,
                    CONCAT44(uVar28,unaff_XMM13_Da));
    }
  }
  if (cStack0000000000000058 != '\0') {
    lVar19 = *(int64_t *)(unaff_RBP + -0x10);
    *(float *)(unaff_RSI + 0x2de4) = fVar25 - *(float *)(unaff_RSI + 0x19f8);
    *(float *)(unaff_RSI + 0x2de0) = fVar21 - unaff_XMM13_Da;
    *(uint64_t *)(unaff_RSI + 0x2df0) = *(uint64_t *)(lVar19 + 0x28);
  }
  if (unaff_R13B != 0) {
    fVar23 = *(float *)(unaff_RSI + 0x19f8);
    *(float *)(unaff_RBP + -0x10) = unaff_XMM15_Da;
    *(float *)(unaff_RBP + -0xc) = unaff_XMM12_Da + fVar23;
    FUN_1801120e0(unaff_RBP + -0x10);
    FUN_1801285e0();
    FUN_18012e4e0();
  }
  cVar10 = (char)*(int32_t *)(unaff_RBP + -0x68);
  if (cVar10 != '\0') {
    FUN_18012d840();
    cVar10 = (char)*(int32_t *)(unaff_RBP + -0x68);
  }
  if ((*(char *)(unaff_RSI + 0x2e38) != '\0') && (cVar10 == '\0')) {
    FUN_18013c800(unaff_RBP + -0x70,uVar20,0);
  }
  if (0.0 < *(float *)(unaff_RBP + 0x18)) {
    FUN_180122320(CONCAT44(*(float *)(unaff_RBP + -0x5c) + *(float *)(unaff_RSI + 0x1660),
                           *(float *)(unaff_RBP + -0x58) + *(float *)(unaff_RSI + 0x1674)),
                  *(uint64_t *)(unaff_RBP + 0x1c0),0,1);
  }
  if (cStack000000000000005e != '\0') {
    plVar1 = (int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1b3e) = 1;
    puVar2 = (uint *)(*plVar1 + 0x148);
    *puVar2 = *puVar2 | 4;
  }
  if ((*(byte *)(unaff_RBP + 0x1e0) & 0x20) != 0) {
    cStack000000000000005e = cStack000000000000005f;
  }
  return cStack000000000000005e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_18011881f(void)

{
  int64_t *plVar1;
  uint *puVar2;
  float fVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int32_t uVar6;
  char cVar7;
  int32_t uVar8;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R12;
  char unaff_R13B;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  int32_t unaff_XMM15_Da;
  char cStack0000000000000058;
  char cStack000000000000005e;
  char cStack000000000000005f;
  uint64_t in_stack_00000070;
  int32_t in_stack_00000078;
  
  func_0x00018010e540(unaff_RBP + 0xd0,unaff_RBP + -8);
  cVar7 = func_0x00018010e5e0(unaff_RBP + -0x20,unaff_RBP + 0xd0);
  lVar5 = SYSTEM_DATA_MANAGER_A;
  if (cVar7 != '\0') {
    uVar4 = *(uint64_t *)(unaff_R12 + 0x2e8);
    uVar8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
    uVar6 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
    fVar3 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
    *(int32_t *)(unaff_RBP + -0x40) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
    *(int32_t *)(unaff_RBP + -0x3c) = uVar8;
    *(int32_t *)(unaff_RBP + -0x38) = uVar6;
    *(float *)(unaff_RBP + -0x34) = fVar3;
    *(float *)(unaff_RBP + -0x34) = fVar3 * *(float *)(lVar5 + 0x1628);
    uVar8 = func_0x000180121e20(unaff_RBP + -0x40);
    in_stack_00000070._4_4_ = *(int32_t *)(unaff_RBP + -0x20);
    in_stack_00000078 = *(int32_t *)(unaff_RBP + -0x14);
    FUN_180293d20(uVar4,unaff_RBP + -0x20,(int64_t)&stack0x00000070 + 4,uVar8);
  }
  if (cStack0000000000000058 != '\0') {
    lVar5 = *(int64_t *)(unaff_RBP + -0x10);
    *(float *)(unaff_RSI + 0x2de4) = unaff_XMM7_Da - *(float *)(unaff_RSI + 0x19f8);
    *(float *)(unaff_RSI + 0x2de0) = unaff_XMM6_Da - unaff_XMM13_Da;
    *(uint64_t *)(unaff_RSI + 0x2df0) = *(uint64_t *)(lVar5 + 0x28);
  }
  if (unaff_R13B != '\0') {
    fVar3 = *(float *)(unaff_RSI + 0x19f8);
    *(int32_t *)(unaff_RBP + -0x10) = unaff_XMM15_Da;
    *(float *)(unaff_RBP + -0xc) = unaff_XMM12_Da + fVar3;
    FUN_1801120e0(unaff_RBP + -0x10);
    FUN_1801285e0();
    FUN_18012e4e0();
  }
  cVar7 = (char)*(int32_t *)(unaff_RBP + -0x68);
  if (cVar7 != '\0') {
    FUN_18012d840();
    cVar7 = (char)*(int32_t *)(unaff_RBP + -0x68);
  }
  if ((*(char *)(unaff_RSI + 0x2e38) != '\0') && (cVar7 == '\0')) {
    FUN_18013c800(unaff_RBP + -0x70);
  }
  if (0.0 < *(float *)(unaff_RBP + 0x18)) {
    FUN_180122320(CONCAT44(*(float *)(unaff_RBP + -0x5c) + *(float *)(unaff_RSI + 0x1660),
                           *(float *)(unaff_RBP + -0x58) + *(float *)(unaff_RSI + 0x1674)),
                  *(uint64_t *)(unaff_RBP + 0x1c0),0,1);
  }
  if (cStack000000000000005e != '\0') {
    plVar1 = (int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1b3e) = 1;
    puVar2 = (uint *)(*plVar1 + 0x148);
    *puVar2 = *puVar2 | 4;
  }
  if ((*(byte *)(unaff_RBP + 0x1e0) & 0x20) != 0) {
    cStack000000000000005e = cStack000000000000005f;
  }
  return cStack000000000000005e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_180118937(void)

{
  int64_t *plVar1;
  uint *puVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  float unaff_XMM8_Da;
  uint64_t in_stack_00000058;
  
  FUN_18012d840();
  if ((*(char *)(unaff_RSI + 0x2e38) != '\0') && ((char)*(int32_t *)(unaff_RBP + -0x68) == '\0'))
  {
    FUN_18013c800(unaff_RBP + -0x70);
  }
  if (unaff_XMM8_Da < *(float *)(unaff_RBP + 0x18)) {
    FUN_180122320(CONCAT44(*(float *)(unaff_RBP + -0x5c) + *(float *)(unaff_RSI + 0x1660),
                           *(float *)(unaff_RBP + -0x58) + *(float *)(unaff_RSI + 0x1674)),
                  *(uint64_t *)(unaff_RBP + 0x1c0),0,1);
  }
  if (in_stack_00000058._6_1_ != '\0') {
    plVar1 = (int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1b3e) = 1;
    puVar2 = (uint *)(*plVar1 + 0x148);
    *puVar2 = *puVar2 | 4;
  }
  if ((*(byte *)(unaff_RBP + 0x1e0) & 0x20) != 0) {
    in_stack_00000058._6_1_ = in_stack_00000058._7_1_;
  }
  return in_stack_00000058._6_1_;
}



// WARNING: Removing unreachable block (ram,0x000180118ca3)
// WARNING: Removing unreachable block (ram,0x000180118f40)
// WARNING: Removing unreachable block (ram,0x00018011913b)
// WARNING: Removing unreachable block (ram,0x00018011916e)
// WARNING: Removing unreachable block (ram,0x00018011917d)
// WARNING: Removing unreachable block (ram,0x000180119177)
// WARNING: Removing unreachable block (ram,0x00018011917f)
// WARNING: Removing unreachable block (ram,0x0001801190e0)
// WARNING: Removing unreachable block (ram,0x000180119064)
// WARNING: Removing unreachable block (ram,0x000180119128)
// WARNING: Removing unreachable block (ram,0x000180119187)
// WARNING: Removing unreachable block (ram,0x00018011958b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

uint64_t FUN_1801189e0(char *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int8_t uVar7;
  uint uVar8;
  int iVar9;
  int32_t uVar10;
  int64_t lVar11;
  int iVar12;
  uint uVar13;
  uint64_t uVar14;
  char *pcVar15;
  char cVar16;
  uint64_t uVar17;
  char *pcVar18;
  uint64_t uVar19;
  int64_t lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint64_t in_stack_fffffffffffffec8;
  uint uVar29;
  uint64_t in_stack_fffffffffffffed0;
  int32_t uVar30;
  float fStack_118;
  float fStack_114;
  char cStack_110;
  char acStack_10f [7];
  uint64_t uStack_108;
  int32_t uStack_100;
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint64_t uStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  lVar5 = SYSTEM_DATA_MANAGER_A;
  uVar30 = (int32_t)((uint64_t)in_stack_fffffffffffffed0 >> 0x20);
  uVar10 = (int32_t)((uint64_t)in_stack_fffffffffffffec8 >> 0x20);
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  uVar19 = *(uint64_t *)(lVar5 + 0x1af8);
  if (*(char *)(uVar19 + 0xb4) != '\0') {
    return uVar19 & 0xffffffffffffff00;
  }
  uVar8 = FUN_180121250(param_1,0,
                        *(int32_t *)
                         (*(int64_t *)(uVar19 + 0x220) + -4 +
                         (int64_t)*(int *)(uVar19 + 0x218) * 4));
  if (*(uint *)(lVar5 + 0x1b2c) == uVar8) {
    *(uint *)(lVar5 + 0x1b34) = uVar8;
  }
  if (*(uint *)(lVar5 + 0x1b30) == uVar8) {
    *(int8_t *)(lVar5 + 0x1b3f) = 1;
  }
  lVar5 = SYSTEM_DATA_MANAGER_A;
  uVar19 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  *(int8_t *)(uVar19 + 0xb1) = 1;
  uStack_e0 = *(int64_t *)(lVar5 + 0x1af8);
  if (*(char *)(uStack_e0 + 0xb4) != '\0') {
    return uVar19 & 0xffffffffffffff00;
  }
  cVar6 = '\0';
  uStack_100 = 0;
  fVar1 = *(float *)(lVar5 + 0x165c);
  fStack_e4 = 0.0;
  pcVar15 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar15 != '\0') {
      if (((*pcVar15 == '#') && (pcVar15[1] == '#')) ||
         (pcVar15 = pcVar15 + 1, pcVar15 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar3 = *(float **)(lVar5 + 0x19f0);
  fVar24 = *(float *)(lVar5 + 0x19f8);
  if (param_1 == pcVar15) {
    fStack_e8 = 0.0;
    fStack_114 = fVar24;
  }
  else {
    uVar14 = CONCAT44(uVar10,0xbf800000);
    pcVar18 = param_1;
    fStack_e8 = fVar1;
    FUN_180297340(pfVar3,&fStack_118,fVar24,uStack_e0,uVar14,param_1,pcVar15,0);
    uVar30 = (int32_t)((uint64_t)pcVar18 >> 0x20);
    uVar10 = (int32_t)((uint64_t)uVar14 >> 0x20);
    if (0.0 < fStack_118) {
      fStack_118 = fStack_118 - fVar24 / *pfVar3;
    }
    fVar24 = *(float *)(lVar5 + 0x19f8);
    cVar6 = (char)uStack_100;
    fStack_e8 = (float)(int)(fStack_118 + 0.95);
  }
  uVar19 = (uint64_t)uVar8;
  lVar20 = *(int64_t *)(lVar5 + 0x1af8);
  fVar28 = *(float *)(uStack_e0 + 0x128);
  if (*(float *)(uStack_e0 + 0x128) <= 0.0) {
    fVar28 = 0.0;
  }
  lVar11 = *(int64_t *)(lVar20 + 0x210);
  fVar23 = *(float *)(lVar5 + 0x1660) + *(float *)(lVar5 + 0x1660) + fVar24;
  fVar26 = *(float *)(lVar20 + 0x278) - *(float *)(lVar20 + 0x40);
  if (*(float *)(uStack_e0 + 0x124) <= fVar23) {
    fVar23 = *(float *)(uStack_e0 + 0x124);
  }
  if (fVar23 <= fStack_114 + 0.0) {
    fVar23 = fStack_114 + 0.0;
  }
  fVar27 = fVar23 + *(float *)(uStack_e0 + 0x104);
  if (lVar11 != 0) {
    iVar9 = *(int *)(lVar11 + 0xc) + 1;
    iVar12 = *(int *)(lVar11 + 0xc);
    if (-1 < iVar9) {
      iVar12 = iVar9;
    }
    fVar26 = ((*(float *)(lVar11 + 0x18) - *(float *)(lVar11 + 0x14)) *
              *(float *)((int64_t)iVar12 * 0x1c + *(int64_t *)(lVar11 + 0x38)) +
             *(float *)(lVar11 + 0x14)) - *(float *)(lVar20 + 0x70);
  }
  fVar25 = *(float *)(uStack_e0 + 0x100);
  fVar2 = *(float *)(uStack_e0 + 0x104);
  fVar26 = fVar26 + *(float *)(uStack_e0 + 0x40);
  fVar21 = fVar1 + fVar1;
  if (cVar6 != '\0') {
    fVar21 = (float)(int)(*(float *)(uStack_e0 + 0x70) * 0.5) - 1.0;
    fVar25 = fVar25 - fVar21;
    fVar26 = fVar21 + fVar26;
    fVar21 = fVar1 * 3.0;
  }
  if (fStack_e8 <= 0.0) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = fVar1 + fVar1 + fStack_e8;
  }
  fVar22 = fVar24 + fVar22;
  fStack_118 = fVar22;
  fStack_e4 = fStack_114;
  fStack_114 = fVar23;
  fStack_d8 = fVar25;
  fStack_d4 = fVar2;
  fStack_d0 = fVar26;
  fStack_cc = fVar27;
  func_0x000180124080(&fStack_118);
  fStack_f0 = fVar26;
  if (cVar6 == '\0') {
    fStack_f0 = *(float *)(lVar5 + 0x166c) + *(float *)(lVar5 + 0x166c) + fVar25 + fVar22;
  }
  uStack_108 = *(int64_t *)(lVar5 + 0x1af8);
  uVar14 = *(uint64_t *)(uStack_108 + 0x198);
  lVar20 = lVar5;
  fStack_f8 = fVar25;
  fStack_f4 = fVar2;
  fStack_ec = fVar27;
  if (*(uint *)(lVar5 + 0x1c64) == 0) {
    iVar9 = FUN_180121f20(uVar14,uVar19 & 0xffffffff,0);
    uVar17 = (uint64_t)(iVar9 != 0);
  }
  else if ((*(uint *)(lVar5 + 0x1c64) & 1) == 0) {
    iVar12 = -1;
    iVar9 = FUN_180121f20(uVar14,uVar19 & 0xffffffff);
    if (iVar9 == iVar12) {
      uVar17 = (uint64_t)*(byte *)(lVar5 + 0x1c60);
      FUN_1801220b0(uVar14,uVar8,*(byte *)(lVar5 + 0x1c60));
      lVar20 = SYSTEM_DATA_MANAGER_A;
      *(int32_t *)(lVar5 + 0x1c64) = 0;
    }
    else {
      *(int32_t *)(lVar5 + 0x1c64) = 0;
      uVar17 = (uint64_t)(iVar9 != 0);
    }
  }
  else {
    uVar17 = (uint64_t)*(byte *)(lVar5 + 0x1c60);
    FUN_1801220b0(uVar14,uVar19 & 0xffffffff,*(byte *)(lVar5 + 0x1c60));
    lVar20 = SYSTEM_DATA_MANAGER_A;
    *(int32_t *)(lVar5 + 0x1c64) = 0;
  }
  if ((*(char *)(lVar5 + 0x2e38) != '\0') &&
     (*(int *)(uStack_108 + 0x13c) < *(int *)(lVar5 + 0x2e5c))) {
    uVar17 = 1;
  }
  uStack_fc = 0;
  cVar16 = (char)uVar17;
  cVar6 = FUN_180124190(&fStack_f8,uVar8,0);
  *(uint *)(uStack_e0 + 0x148) = *(uint *)(uStack_e0 + 0x148) | 2;
  *(float *)(uStack_e0 + 0x15c) = fStack_d8;
  *(float *)(uStack_e0 + 0x160) = fStack_d4;
  *(float *)(uStack_e0 + 0x164) = fStack_d0;
  *(float *)(uStack_e0 + 0x168) = fStack_cc;
  if (cVar6 == '\0') goto joined_r0x000180119648;
  fStack_118 = 0.0;
  uVar14 = CONCAT44(uVar10,0x1400);
  cVar6 = FUN_18010f170(&fStack_f8,uVar8,&cStack_110,acStack_10f,uVar14);
  uVar29 = (uint)((uint64_t)uVar14 >> 0x20);
  if ((char)uStack_fc == '\0') {
    bVar4 = false;
    if (((cVar6 != '\0') && (bVar4 = true, *(char *)(lVar5 + 0x1dd0) != '\0')) && (cVar16 != '\0'))
    {
      bVar4 = false;
    }
    uVar13 = *(uint *)(lVar5 + 0x1ca0);
    if ((((uVar13 == uVar8) && (*(char *)(lVar5 + 0x1d21) != '\0')) &&
        (*(int *)(lVar5 + 0x1d2c) == 0)) && (cVar16 != '\0')) {
      *(int8_t *)(lVar20 + 0x1d21) = 0;
      bVar4 = true;
      if ((*(char *)(lVar20 + 0x1d21) == '\0') && (*(char *)(lVar20 + 0x1d09) == '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(int8_t *)(lVar20 + 0x1d08) = uVar7;
      uVar13 = *(uint *)(lVar5 + 0x1ca0);
    }
    if (((uVar13 == uVar8) && (*(char *)(lVar5 + 0x1d21) != '\0')) &&
       ((*(int *)(lVar5 + 0x1d2c) == 1 && (cVar16 == '\0')))) {
      *(int8_t *)(lVar20 + 0x1d21) = 0;
      if (*(char *)(lVar20 + 0x1d09) == '\0') {
        *(int8_t *)(lVar20 + 0x1d08) = 0;
      }
      else {
        *(int8_t *)(lVar20 + 0x1d08) = 1;
      }
    }
    else if (!bVar4) goto LAB_180119279;
    uVar17 = (uint64_t)(cVar16 == '\0');
    FUN_1801220b0(*(uint64_t *)(uStack_e0 + 0x198),uVar8,cVar16 == '\0');
    lVar20 = SYSTEM_DATA_MANAGER_A;
  }
LAB_180119279:
  if (fStack_118 != 0.0) {
    func_0x0001801283b0();
  }
  if ((acStack_10f[0] == '\0') || (cStack_110 == '\0')) {
    lVar11 = (uint64_t)(cStack_110 != '\0') + 0x18;
  }
  else {
    lVar11 = 0x1a;
  }
  pfVar3 = (float *)(lVar20 + 0x1628 + (lVar11 + 10) * 0x10);
  fStack_f8 = *pfVar3;
  fStack_f4 = pfVar3[1];
  fStack_f0 = pfVar3[2];
  fStack_ec = pfVar3[3] * *(float *)(lVar20 + 0x1628);
  uVar10 = func_0x000180121e20(&fStack_f8);
  fStack_118 = fVar24 + fVar21 + fVar25;
  fVar24 = fVar2 + fVar28;
  cVar16 = (char)uVar17;
  fStack_114 = fVar24;
  if ((char)uStack_100 == '\0') {
    if (cStack_110 != '\0') {
      uStack_108 = CONCAT44(fVar27,fVar26);
      uStack_e0 = CONCAT44(fVar2,fVar25);
      FUN_180293f50(*(uint64_t *)(*(int64_t *)(lVar20 + 0x1af8) + 0x2e8),&uStack_e0,&uStack_108,
                    uVar10,(uint64_t)uVar29 << 0x20,CONCAT44(uVar30,0xf));
      if (uVar8 == *(uint *)(SYSTEM_DATA_MANAGER_A + 0x1ca0)) {
        FUN_1801230e0(&fStack_d8,2);
      }
    }
    if ((char)uStack_fc == '\0') {
      uVar14 = 1;
      if (cVar16 != '\0') {
        uVar14 = 3;
      }
      FUN_180122c80(CONCAT44(*(float *)(lVar5 + 0x19f8) * 0.15 + fVar28 + fVar2,fVar1 + fVar25),
                    uVar14,0x3f333333);
    }
    if (*(char *)(lVar5 + 0x2e38) != '\0') {
      FUN_18013c800(&fStack_118,&unknown_var_2252_ptr,0);
    }
    FUN_180122320(CONCAT44(fStack_114,fStack_118),param_1,pcVar15,0);
  }
  else {
    FUN_180122960(CONCAT44(fStack_d4,fStack_d8),CONCAT44(fStack_cc,fStack_d0),uVar10,1,
                  CONCAT44(uVar29,*(int32_t *)(lVar5 + 0x1664)));
    if (uVar8 == *(uint *)(SYSTEM_DATA_MANAGER_A + 0x1ca0)) {
      FUN_1801230e0(&fStack_d8,2);
    }
    uVar14 = 1;
    if (cVar16 != '\0') {
      uVar14 = 3;
    }
    FUN_180122c80(CONCAT44(fVar24,fVar1 + fVar25),uVar14,0x3f800000);
    lVar20 = SYSTEM_DATA_MANAGER_A;
    if (*(char *)(lVar5 + 0x2e38) == '\0') {
      uStack_108 = 0;
      if (pcVar15 == (char *)0x0) {
        pcVar15 = (char *)0xffffffffffffffff;
      }
      pcVar18 = param_1;
      if (param_1 < pcVar15) {
        while (*pcVar18 != '\0') {
          if (((*pcVar18 == '#') && (pcVar18[1] == '#')) ||
             (pcVar18 = pcVar18 + 1, pcVar15 <= pcVar18)) break;
        }
      }
      if (((int)pcVar18 != (int)param_1) &&
         (FUN_1801224c0(*(uint64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),&fStack_118,
                        &fStack_d0,param_1,pcVar18,&fStack_e8,&uStack_108,0),
         *(char *)(lVar20 + 0x2e38) != '\0')) {
        FUN_18013c800(&fStack_118,param_1,pcVar18);
      }
    }
    else {
      uStack_100 = CONCAT13(uStack_100._3_1_,0x2323);
      uStack_fc = 0x23230a;
      FUN_18013c800(&fStack_118,&uStack_fc,(int64_t)&uStack_fc + 3);
      lVar5 = SYSTEM_DATA_MANAGER_A;
      uStack_108 = 0;
      if (pcVar15 == (char *)0x0) {
        pcVar15 = (char *)0xffffffffffffffff;
      }
      pcVar18 = param_1;
      if (param_1 < pcVar15) {
        do {
          if ((*pcVar18 == '\0') || ((*pcVar18 == '#' && (pcVar18[1] == '#')))) break;
          pcVar18 = pcVar18 + 1;
        } while (pcVar18 < pcVar15);
      }
      if (((int)pcVar18 != (int)param_1) &&
         (FUN_1801224c0(*(uint64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),&fStack_118,
                        &fStack_d0,param_1,pcVar18,&fStack_e8,&uStack_108,0),
         *(char *)(lVar5 + 0x2e38) != '\0')) {
        FUN_18013c800(&fStack_118,param_1,pcVar18);
      }
      FUN_18013c800(&fStack_118,(int64_t)&uStack_100 + 1,(int64_t)&uStack_100 + 3);
    }
  }
joined_r0x000180119648:
  if (cVar16 != '\0') {
    FUN_1801196d0(uVar8);
  }
  return uVar17;
}








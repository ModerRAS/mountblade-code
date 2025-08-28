#include "TaleWorlds.Native.Split.h"

// 99_part_08_part021.c - 7 个函数

// 函数: void FUN_1804f4a40(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_1804f4a40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar5;
  float fVar6;
  uint uStackX_10;
  undefined4 uStackX_14;
  int aiStackX_20 [2];
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iStack_68;
  undefined4 uStack_64;
  float afStack_60 [2];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  uStackX_10._0_1_ = (char)param_2;
  _uStackX_10 = CONCAT44((int)((ulonglong)param_2 >> 0x20),(uint)((char)uStackX_10 != '\0'));
  cVar2 = FUN_18055f260(param_3,&uStackX_10,&UNK_1809fa560);
  bVar4 = uStackX_10 != 0;
  _uStackX_10 = CONCAT71(stack0x00000011,bVar4);
  uVar5 = extraout_XMM0_Da;
  if (cVar2 != '\0') {
    cVar2 = FUN_18055f260(param_3,&iStack_68,&UNK_1809fa510);
    uVar5 = extraout_XMM0_Da_00;
    if (cVar2 != '\0') {
      cVar2 = FUN_18055f260(param_3,aiStackX_20,&UNK_1809fa510);
      uVar5 = extraout_XMM0_Da_01;
      if (cVar2 != '\0') {
        cVar2 = FUN_18055f260(param_3,&uStack_64,&DAT_180bfbc90);
        uVar5 = extraout_XMM0_Da_02;
        if (cVar2 != '\0') {
          cVar2 = FUN_180646700(param_3,afStack_60,&UNK_1809fa450);
          uVar5 = extraout_XMM0_Da_03;
          if (cVar2 != '\0') {
            cVar2 = '\x01';
            goto LAB_1804f4aed;
          }
        }
      }
    }
  }
  cVar2 = '\0';
LAB_1804f4aed:
  pfVar10 = afStack_60;
  puVar9 = &uStack_64;
  piVar8 = aiStackX_20;
  piVar7 = &iStack_68;
  FUN_1804fec00(uVar5,cVar2);
  if (cVar2 != '\0') {
    if (((-1 < iStack_68) && (iStack_68 < *(int *)(param_1 + 0x52ed94))) &&
       (-1 < *(short *)(param_1 + 0x52dda0 + (longlong)iStack_68 * 2))) {
      lVar3 = param_1 + 0x30a0 + (longlong)iStack_68 * 0xa60;
      if ((char)uStackX_10 == '\0') {
        FUN_18052e130(lVar3,aiStackX_20[0],1);
      }
      else {
        iVar1 = *(int *)(lVar3 + 0x564);
        if (iVar1 != aiStackX_20[0]) {
          if (-1 < iVar1) {
            *(undefined4 *)((longlong)iVar1 * 0xa60 + 0x3568 + *(longlong *)(lVar3 + 0x8d8)) = 0;
            *(undefined8 *)
             ((longlong)*(int *)(lVar3 + 0x564) * 0xa60 + 0x356c + *(longlong *)(lVar3 + 0x8d8)) = 0
            ;
          }
          if ((*(uint *)(lVar3 + 0x56c) & 0x800) != 0) {
            if (*(int *)(lVar3 + 0x570) == 2) {
              *(undefined8 *)(*(longlong *)(lVar3 + 0x8d8) + 0x8fd220) = 0;
              *(undefined8 *)(*(longlong *)(lVar3 + 0x8d8) + 0x98d228) = 0;
            }
            FUN_1805a3a20(lVar3 + 0x28);
            if (*(int *)(lVar3 + 0x568) == 1) {
              uStack_48 = 0;
              uStack_44 = 0;
              uStack_40 = 0x3f800000;
              uStack_3c = 0xbe4ccccd;
              uStack_38 = 0xbe4ccccd;
              uStack_30 = 0x1000000;
              uStack_34 = 0x3ecccccd;
              uStack_2c = 0;
              uStack_58 = 1;
              uStack_54 = 0xffffffff;
              uStack_50 = 0x21;
              FUN_18051ec50(lVar3,&uStack_58);
              uStack_54 = uStack_64;
              uStack_50 = 0x80000000;
              uStack_48 = 0;
              uStack_30 = 0x1000000;
              uStack_44 = 0;
              uStack_40 = 0x3f800000;
              uStack_3c = 0xbe4ccccd;
              uStack_38 = 0xbe4ccccd;
              uStack_34 = 0x3ecccccd;
              uStack_2c = 0;
              uStack_58 = 0;
              FUN_18051ec50(lVar3,&uStack_58);
            }
          }
          fVar6 = 0.0;
          if (0.05 <= afStack_60[0]) {
            fVar6 = afStack_60[0];
          }
          FUN_18052e450(lVar3,aiStackX_20[0],1,fVar6,piVar7,piVar8,puVar9,pfVar10);
        }
      }
    }
  }
  return;
}






// 函数: void FUN_1804f4b7b(void)
void FUN_1804f4b7b(void)

{
  float fVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 uVar2;
  undefined8 unaff_RSI;
  undefined4 unaff_EDI;
  float fVar3;
  
  uVar2 = (undefined4)unaff_RSI;
  if (-1 < (int)in_RAX) {
    *(undefined4 *)(in_RAX * 0xa60 + 0x3568 + *(longlong *)(unaff_RBX + 0x8d8)) = uVar2;
    *(undefined8 *)
     ((longlong)*(int *)(unaff_RBX + 0x564) * 0xa60 + 0x356c + *(longlong *)(unaff_RBX + 0x8d8)) = 0
    ;
  }
  if ((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) {
    if (*(int *)(unaff_RBX + 0x570) == 2) {
      *(undefined8 *)(*(longlong *)(unaff_RBX + 0x8d8) + 0x8fd220) = unaff_RSI;
      *(undefined8 *)(*(longlong *)(unaff_RBX + 0x8d8) + 0x98d228) = unaff_RSI;
    }
    FUN_1805a3a20(unaff_RBX + 0x28);
    if (*(int *)(unaff_RBX + 0x568) == 1) {
      *(undefined4 *)(unaff_RBP + 0x17) = uVar2;
      *(undefined4 *)(unaff_RBP + 0x1b) = 0;
      *(undefined4 *)(unaff_RBP + 0x1f) = 0x3f800000;
      *(undefined4 *)(unaff_RBP + 0x23) = 0xbe4ccccd;
      *(undefined4 *)(unaff_RBP + 0x27) = 0xbe4ccccd;
      *(undefined4 *)(unaff_RBP + 0x2f) = 0x1000000;
      *(undefined4 *)(unaff_RBP + 0x2b) = 0x3ecccccd;
      *(char *)(unaff_RBP + 0x33) = (char)unaff_RSI;
      *(undefined4 *)(unaff_RBP + 7) = 1;
      *(undefined4 *)(unaff_RBP + 0xb) = 0xffffffff;
      *(undefined8 *)(unaff_RBP + 0xf) = 0x21;
      FUN_18051ec50(0,unaff_RBP + 7);
      *(undefined4 *)(unaff_RBP + 0xb) = *(undefined4 *)(unaff_RBP + -5);
      *(undefined8 *)(unaff_RBP + 0xf) = 0x80000000;
      *(undefined4 *)(unaff_RBP + 0x17) = uVar2;
      *(undefined4 *)(unaff_RBP + 0x2f) = 0x1000000;
      *(undefined4 *)(unaff_RBP + 0x1b) = 0;
      *(undefined4 *)(unaff_RBP + 0x1f) = 0x3f800000;
      *(undefined4 *)(unaff_RBP + 0x23) = 0xbe4ccccd;
      *(undefined4 *)(unaff_RBP + 0x27) = 0xbe4ccccd;
      *(undefined4 *)(unaff_RBP + 0x2b) = 0x3ecccccd;
      *(char *)(unaff_RBP + 0x33) = (char)unaff_RSI;
      *(undefined4 *)(unaff_RBP + 7) = uVar2;
      FUN_18051ec50(0,unaff_RBP + 7);
    }
  }
  fVar1 = *(float *)(unaff_RBP + -1);
  fVar3 = 0.0;
  if (0.05 <= fVar1) {
    fVar3 = fVar1;
  }
  FUN_18052e450(fVar1,unaff_EDI,1,fVar3);
  return;
}






// 函数: void FUN_1804f4cb9(void)
void FUN_1804f4cb9(void)

{
  FUN_18052e130();
  return;
}






// 函数: void FUN_1804f4ce0(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_1804f4ce0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uStackX_10;
  int aiStackX_20 [2];
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [16];
  
  uStack_40 = 0xffffffffffffffff;
  auStack_38[0] = 0xffffffff;
  uStackX_10 = param_2;
  cVar1 = FUN_18055f260(param_3,&iStack_48,&UNK_1809fa510);
  if ((cVar1 != '\0') && (cVar1 = FUN_18055f260(param_3,&iStack_44,&UNK_1809fa510), cVar1 != '\0'))
  {
    aiStackX_20[0] = (int)(char)uStackX_10;
    cVar1 = FUN_18055f260(param_3,aiStackX_20,&UNK_1809fa460);
    if (((cVar1 != '\0') &&
        (((cVar1 = FUN_180646700(param_3,auStack_30,&UNK_1809fa4d0), cVar1 != '\0' &&
          (cVar1 = FUN_180646700(param_3,auStack_2c,&UNK_1809fa4d0), cVar1 != '\0')) &&
         (cVar1 = FUN_180646700(param_3,auStack_28,&UNK_1809fa4e0), cVar1 != '\0')))) &&
       (((cVar1 = FUN_18055f260(param_3,&uStack_40,&DAT_180bfbca0), cVar1 != '\0' &&
         (cVar1 = FUN_18055f260(param_3,(longlong)&uStack_40 + 4,&DAT_180bfbca0), cVar1 != '\0')) &&
        (cVar1 = FUN_18055f260(param_3,auStack_38,&DAT_180bfbca0), cVar1 != '\0')))) {
      uStackX_10 = CONCAT44(uStackX_10._4_4_,(uint)((char)uStackX_10 != '\0'));
      cVar1 = FUN_18055f260(param_3,&uStackX_10,&UNK_1809fa560);
      bVar2 = (int)uStackX_10 != 0;
      if (cVar1 != '\0') {
        uStackX_10 = CONCAT44(uStackX_10._4_4_,(uint)((char)uStackX_10 != '\0'));
        cVar1 = FUN_18055f260(param_3,&uStackX_10,&UNK_1809fa560);
        if (((cVar1 != '\0') && (-1 < iStack_48)) &&
           (((iStack_48 < *(int *)(param_1 + 0x52ed94) &&
             (((-1 < *(short *)(param_1 + 0x52dda0 + (longlong)iStack_48 * 2) && (-1 < iStack_44))
              && (iStack_44 < *(int *)(param_1 + 0x52ed94))))) &&
            (-1 < *(short *)(param_1 + 0x52dda0 + (longlong)iStack_44 * 2))))) {
          FUN_1805ab940(*(undefined8 *)(param_1 + 0x98d920),
                        param_1 + 0x30a0 + (longlong)iStack_48 * 0xa60,
                        param_1 + 0x30a0 + (longlong)iStack_44 * 0xa60,(undefined1)aiStackX_20[0],
                        auStack_30,&uStack_40,bVar2,(int)uStackX_10 != 0);
        }
      }
    }
  }
  return;
}






// 函数: void FUN_1804f4dfe(void)
void FUN_1804f4dfe(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(uint *)(unaff_RBP + 0x28) = (uint)(*(char *)(unaff_RBP + 0x28) != '\0');
  cVar3 = FUN_18055f260();
  if (cVar3 != '\0') {
    *(uint *)(unaff_RBP + 0x28) = (uint)(*(char *)(unaff_RBP + 0x28) != '\0');
    cVar3 = FUN_18055f260();
    if (cVar3 != '\0') {
      iVar1 = *(int *)(unaff_RBP + -0x30);
      if (((-1 < iVar1) && (iVar1 < *(int *)(unaff_RSI + 0x52ed94))) &&
         (-1 < *(short *)(unaff_RSI + 0x52dda0 + (longlong)iVar1 * 2))) {
        iVar2 = *(int *)(unaff_RBP + -0x2c);
        if (((-1 < iVar2) && (iVar2 < *(int *)(unaff_RSI + 0x52ed94))) &&
           (-1 < *(short *)(unaff_RSI + 0x52dda0 + (longlong)iVar2 * 2))) {
          FUN_1805ab940(*(undefined8 *)(unaff_RSI + 0x98d920),
                        unaff_RSI + 0x30a0 + (longlong)iVar1 * 0xa60,
                        unaff_RSI + 0x30a0 + (longlong)iVar2 * 0xa60,
                        *(undefined1 *)(unaff_RBP + 0x38),unaff_RBP + -0x18);
        }
      }
    }
  }
  return;
}






// 函数: void FUN_1804f4f09(void)
void FUN_1804f4f09(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1804f4f20(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             int param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
             float param_11,float param_12,float param_13,float param_14,float param_15,
             float param_16)

{
  undefined8 uVar1;
  float fVar2;
  char cVar3;
  undefined8 *puVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iStackX_20;
  float fStack_208;
  undefined8 uStack_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  int iStack_1a8;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  uStack_f0 = param_3[5];
  uStack_e8 = param_3[6];
  iVar7 = *(int *)(param_3 + 8);
  fVar13 = (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 3)) * param_6;
  uVar1 = param_3[7];
  param_6 = (*(float *)(param_4 + 0x1c) - *(float *)((longlong)param_3 + 0x1c)) * param_6;
  fVar21 = *(float *)(param_3 + 3);
  auStack_158._4_4_ = *(float *)((longlong)param_3 + 0x1c);
  uStack_130 = param_3[3];
  uStack_128 = param_3[4];
  uStack_188 = *param_3;
  lStack_180 = param_3[1];
  fVar11 = fVar21 + fVar13;
  uStack_178 = param_3[2];
  fVar16 = (float)auStack_158._4_4_ + param_6;
  auStack_158._0_4_ = auStack_158._4_4_;
  fStack_150 = (float)auStack_158._4_4_;
  fStack_14c = (float)auStack_158._4_4_;
  if ((fVar21 != fVar11) || (fVar20 = (float)auStack_158._4_4_, (float)auStack_158._4_4_ != fVar16))
  {
    uStack_130 = CONCAT44(fVar16,fVar11);
    if (iVar7 != 0) {
      iVar7 = 0;
    }
    _auStack_158 = ZEXT416((uint)fVar16);
    fVar20 = fVar16;
    fVar21 = fVar11;
  }
  uStack_168 = param_3[4];
  param_2[7] = 0;
  *param_2 = 0;
  fVar16 = (float)param_5;
  fVar11 = 1.0 / fVar16;
  param_6 = fVar11 * param_6;
  param_2[3] = 0x7fc000007fc00000;
  param_2[4] = 0x7fc000007fc00000;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_170 = uStack_130;
  puVar4 = (undefined8 *)FUN_1803975b0();
  param_2[7] = *puVar4;
  *(undefined4 *)(param_2 + 8) = 0;
  fStack_208 = 1.1754944e-38;
  iStackX_20 = 0;
  if (0 < param_5) {
    uVar6 = -param_5;
    iVar9 = param_5;
    do {
      uStack_130 = uStack_170;
      uStack_128 = uStack_168;
      fStack_194 = (float)iStackX_20 * param_6 + fVar20;
      fStack_198 = (float)iStackX_20 * fVar11 * fVar13 + fVar21;
      iVar10 = iVar7;
      if (((fVar21 != fStack_198) || (fVar20 != fStack_194)) &&
         (uStack_130 = CONCAT44(fStack_194,fStack_198), iVar7 != 0)) {
        iVar10 = 0;
      }
      if ((int)uVar6 <= iVar9) {
        fVar2 = uStack_130._4_4_;
        fVar20 = (float)uStack_130;
        uVar8 = uVar6;
        do {
          uStack_1e8 = uStack_188;
          uStack_1c0 = uStack_f0;
          uStack_1b8 = uStack_e8;
          lStack_1e0 = lStack_180;
          uStack_1d8 = uStack_178;
          fStack_18c = (float)(int)uVar8 * fVar11 * -fVar13 + fVar2;
          fStack_190 = (float)(int)uVar8 * param_6 + fVar20;
          iStack_1a8 = iVar10;
          if ((fVar20 != fStack_190) || (uStack_1d0 = uStack_130, fVar2 != fStack_18c)) {
            if (iVar10 != 0) {
              iStack_1a8 = 0;
            }
            uStack_1d0 = CONCAT44(fStack_18c,fStack_190);
          }
          uStack_1c8 = uStack_128;
          uStack_1b0 = uVar1;
          cVar3 = FUN_1804f6190(param_1,&uStack_1d0);
          if (cVar3 != '\0') {
            pfVar5 = (float *)FUN_1804f6240(param_1,auStack_f8,&uStack_1d0);
            if (((param_7 <=
                  ((float)uStack_1d0 - *pfVar5) * ((float)uStack_1d0 - *pfVar5) +
                  (uStack_1d0._4_4_ - pfVar5[1]) * (uStack_1d0._4_4_ - pfVar5[1])) &&
                (FUN_180487c70(&uStack_1e8,2), 1 < iStack_1a8)) && (lStack_1e0 != 0)) {
              FUN_180487c70(&uStack_1e8,3);
              pfVar5 = (float *)&uStack_1c0;
              fVar17 = *(float *)(param_3 + 3) - (float)uStack_1d0;
              fVar19 = *(float *)((longlong)param_3 + 0x1c) - uStack_1d0._4_4_;
              fVar18 = -param_8;
              if (iStack_1a8 < 3) {
                pfVar5 = (float *)&DAT_180a1ad20;
              }
              fVar14 = fVar19 * fVar19 + fVar17 * fVar17;
              auVar15 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
              fVar12 = auVar15._0_4_;
              fVar14 = fVar12 * 0.5 * ((float)DAT_180a401f0 - fVar14 * fVar12 * fVar12);
              fVar17 = fVar19 * fVar14 * pfVar5[1] + fVar17 * fVar14 * *pfVar5;
              if (fVar18 <= fVar17) {
                if (param_8 <= fVar17) {
                  if (param_9 <= fVar17) goto LAB_1804f553d;
                  fVar18 = ((fVar17 - param_8) / (param_9 - param_8)) * (param_12 - param_11) +
                           param_11;
                }
                else {
                  if ((fVar18 <= fVar17) && (fVar18 = fVar17, param_8 <= fVar17)) {
                    fVar18 = param_8;
                  }
                  fVar18 = (fVar18 + param_8) * (param_11 - param_10) + param_10;
                }
                fVar17 = fVar16 * param_13;
                fVar19 = (float)(int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f));
                if (fVar19 <= fVar17) {
                  fVar18 = fVar18 * param_14;
                }
                FUN_180487c70(&uStack_1e8,2);
                if (iStack_1a8 < 2) {
                  fVar14 = -NAN;
                }
                else {
                  fVar14 = (float)uStack_1c8;
                }
                FUN_180487c70(param_3,2);
                if (*(int *)(param_3 + 8) < 2) {
                  fVar12 = -NAN;
                }
                else {
                  fVar12 = *(float *)(param_3 + 4);
                }
                fVar14 = fVar14 - fVar12;
                fVar12 = -param_15;
                if ((-param_15 <= fVar14) && (fVar12 = fVar14, param_15 <= fVar14)) {
                  fVar12 = param_15;
                }
                fVar14 = fVar17;
                if ((fVar17 <= fVar19) && (fVar14 = fVar16, fVar19 <= fVar16)) {
                  fVar14 = fVar19;
                }
                fVar18 = fVar18 * ((fVar12 * 0.20000002 + param_15 * 0.20000002) / param_15 + 0.8) *
                         (((fVar14 - fVar17) / fVar17) * (param_16 - 1.0) + 1.0);
                if (fStack_208 < fVar18) {
                  *param_2 = uStack_1e8;
                  param_2[1] = lStack_1e0;
                  param_2[2] = uStack_1d8;
                  param_2[7] = uStack_1b0;
                  *(int *)(param_2 + 8) = iStack_1a8;
                  param_2[3] = uStack_1d0;
                  param_2[4] = uStack_1c8;
                  param_2[5] = uStack_1c0;
                  param_2[6] = uStack_1b8;
                  fStack_208 = fVar18;
                }
              }
            }
          }
LAB_1804f553d:
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 <= iVar9);
        fVar20 = (float)auStack_158._0_4_;
      }
      uVar6 = uVar6 + 1;
      iStackX_20 = iStackX_20 + 1;
      iVar9 = iVar9 + -1;
    } while (iStackX_20 < param_5);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f511b(uint param_1,int param_2,int param_3,float param_4,float param_5,int param_6)
void FUN_1804f511b(uint param_1,int param_2,int param_3,float param_4,float param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int in_EAX;
  int iVar6;
  float *pfVar7;
  undefined8 unaff_RBX;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  uint uVar8;
  undefined8 *unaff_RDI;
  int unaff_R12D;
  longlong unaff_R15;
  float fVar9;
  float fVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float in_XMM4_Da;
  float unaff_XMM7_Da;
  float fVar17;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float fStackX_20;
  float fStackX_24;
  uint uStack000000000000002c;
  undefined8 uStack0000000000000040;
  longlong lStack0000000000000048;
  undefined8 uStack0000000000000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  fVar1 = *(float *)(unaff_RBP + 0x2d);
  fVar2 = *(float *)(unaff_RBP + 0x34);
  fVar3 = *(float *)(unaff_RBP + 0x30);
  fVar4 = *(float *)(unaff_RBP + 0x2e);
  uStack000000000000002c = param_1;
  do {
    _fStack0000000000000058 = unaff_RBP[-9];
    _fStack0000000000000060 = unaff_RBP[-8];
    unaff_RBP[-1] = _fStack0000000000000058;
    *unaff_RBP = _fStack0000000000000060;
    fVar13 = (float)in_EAX * param_4 + unaff_XMM13_Da;
    fVar9 = (float)in_EAX * in_XMM4_Da + unaff_XMM14_Da;
    *(float *)((longlong)unaff_RBP + -0x6c) = fVar13;
    *(float *)(unaff_RBP + -0xe) = fVar9;
    if ((unaff_XMM14_Da != fVar9) || (unaff_XMM13_Da != fVar13)) {
      unaff_RBP[-1] = unaff_RBP[-0xe];
      _fStack0000000000000058 = unaff_RBP[-1];
      _fStack0000000000000060 = *unaff_RBP;
      in_EAX = *(int *)(unaff_RBP + 0x29);
      if (unaff_ESI != 0) {
        unaff_ESI = param_3;
      }
    }
    if ((int)uStack000000000000002c <= unaff_R12D) {
      fVar9 = *(float *)((longlong)unaff_RBP + -4);
      fVar13 = *(float *)(unaff_RBP + -1);
      uVar8 = uStack000000000000002c;
      do {
        uStack0000000000000068 = unaff_RBP[7];
        uStack0000000000000070 = unaff_RBP[8];
        uStack0000000000000040 = unaff_RBP[-0xc];
        lStack0000000000000048 = unaff_RBP[-0xb];
        uStack0000000000000050 = unaff_RBP[-10];
        *(int *)(unaff_RBP + -0x10) = unaff_ESI;
        fVar14 = (float)(int)uVar8 * unaff_XMM7_Da + fVar9;
        fVar10 = (float)(int)uVar8 * param_4 + fVar13;
        *(float *)((longlong)unaff_RBP + -100) = fVar14;
        *(float *)(unaff_RBP + -0xd) = fVar10;
        if ((fVar13 != fVar10) || (fVar9 != fVar14)) {
          iVar6 = unaff_ESI;
          if (unaff_ESI != 0) {
            iVar6 = param_3;
          }
          *(int *)(unaff_RBP + -0x10) = iVar6;
          _fStack0000000000000058 = unaff_RBP[-0xd];
        }
        cVar5 = FUN_1804f6190(fVar10,&stack0x00000058);
        if (cVar5 != '\0') {
          pfVar7 = (float *)FUN_1804f6240(extraout_XMM0_Da,unaff_RBP + 6,&stack0x00000058);
          if (((*(float *)(unaff_RBP + 0x2c) <=
                (fStack0000000000000058 - *pfVar7) * (fStack0000000000000058 - *pfVar7) +
                (fStack000000000000005c - pfVar7[1]) * (fStack000000000000005c - pfVar7[1])) &&
              (FUN_180487c70(&stack0x00000040,2), 1 < *(int *)(unaff_RBP + -0x10))) &&
             (lStack0000000000000048 != 0)) {
            FUN_180487c70(&stack0x00000040,3);
            pfVar7 = (float *)&stack0x00000068;
            fVar14 = *(float *)(unaff_R15 + 0x18) - fStack0000000000000058;
            fVar17 = *(float *)(unaff_R15 + 0x1c) - fStack000000000000005c;
            fVar10 = -fVar1;
            if (*(int *)(unaff_RBP + -0x10) < 3) {
              pfVar7 = (float *)&DAT_180a1ad20;
            }
            fVar15 = fVar17 * fVar17 + fVar14 * fVar14;
            auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
            fVar12 = auVar16._0_4_;
            fVar15 = fVar12 * 0.5 * ((float)DAT_180a401f0 - fVar15 * fVar12 * fVar12);
            fVar14 = fVar17 * fVar15 * pfVar7[1] + fVar14 * fVar15 * *pfVar7;
            if (fVar14 < fVar10) {
LAB_1804f5535:
              unaff_XMM7_Da = *(float *)(unaff_RBP + 0x2b);
            }
            else {
              if (fVar1 <= fVar14) {
                if (fVar4 <= fVar14) goto LAB_1804f5535;
                fVar10 = ((fVar14 - fVar1) / (fVar4 - fVar1)) *
                         (*(float *)(unaff_RBP + 0x31) - fVar3) + fVar3;
              }
              else {
                if ((fVar10 <= fVar14) && (fVar10 = fVar14, fVar1 <= fVar14)) {
                  fVar10 = fVar1;
                }
                fVar10 = (fVar10 + fVar1) * (fVar3 - unaff_XMM9_Da) + unaff_XMM9_Da;
              }
              fVar14 = unaff_XMM8_Da * *(float *)(unaff_RBP + 0x32);
              fVar17 = (float)(int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f));
              if (fVar17 <= fVar14) {
                fVar10 = fVar10 * *(float *)(unaff_RBP + 0x33);
              }
              uVar11 = FUN_180487c70(&stack0x00000040,2);
              if (*(int *)(unaff_RBP + -0x10) < 2) {
                fVar15 = -NAN;
              }
              else {
                fVar15 = fStack0000000000000060;
              }
              FUN_180487c70(uVar11,2);
              if (*(int *)(unaff_R15 + 0x40) < 2) {
                fVar12 = -NAN;
              }
              else {
                fVar12 = *(float *)(unaff_R15 + 0x20);
              }
              fVar15 = fVar15 - fVar12;
              fVar12 = -fVar2;
              if ((-fVar2 <= fVar15) && (fVar12 = fVar15, fVar2 <= fVar15)) {
                fVar12 = fVar2;
              }
              fVar15 = fVar14;
              if ((fVar14 <= fVar17) &&
                 (fVar15 = *(float *)(unaff_RBP + 0x27), fVar17 <= *(float *)(unaff_RBP + 0x27))) {
                fVar15 = fVar17;
              }
              unaff_XMM9_Da = *(float *)(unaff_RBP + 0x2f);
              unaff_XMM7_Da = *(float *)(unaff_RBP + 0x2b);
              unaff_XMM8_Da = *(float *)(unaff_RBP + 0x27);
              fVar10 = fVar10 * ((fVar12 * 0.20000002 + fVar2 * 0.20000002) / fVar2 + 0.8) *
                       (((fVar15 - fVar14) / fVar14) * (*(float *)(unaff_RBP + 0x35) - 1.0) + 1.0);
              if (fStackX_20 < fVar10) {
                *unaff_RDI = uStack0000000000000040;
                unaff_RDI[1] = lStack0000000000000048;
                unaff_RDI[2] = uStack0000000000000050;
                unaff_RDI[7] = unaff_RBX;
                *(undefined4 *)(unaff_RDI + 8) = *(undefined4 *)(unaff_RBP + -0x10);
                unaff_RDI[3] = _fStack0000000000000058;
                unaff_RDI[4] = _fStack0000000000000060;
                unaff_RDI[5] = uStack0000000000000068;
                unaff_RDI[6] = uStack0000000000000070;
                fStackX_20 = fVar10;
              }
            }
          }
        }
        _fStack0000000000000058 = unaff_RBP[-1];
        _fStack0000000000000060 = *unaff_RBP;
        uVar8 = uVar8 + 1;
        param_3 = 0;
        param_4 = *(float *)(unaff_RBP + 0x28);
      } while ((int)uVar8 <= unaff_R12D);
      unaff_XMM13_Da = *(float *)(unaff_RBP + -6);
      in_EAX = *(int *)(unaff_RBP + 0x29);
      param_2 = *(int *)(unaff_RBP + 0x2a);
      in_XMM4_Da = param_5;
      unaff_XMM14_Da = fStackX_24;
    }
    uStack000000000000002c = uStack000000000000002c + 1;
    in_EAX = in_EAX + 1;
    unaff_R12D = unaff_R12D + -1;
    *(int *)(unaff_RBP + 0x29) = in_EAX;
    unaff_ESI = param_6;
    if (param_2 <= in_EAX) {
      return;
    }
  } while( true );
}







#include "TaleWorlds.Native.Split.h"

// 99_part_05_part035.c - 10 个函数

// 函数: void FUN_1802edfe0(longlong param_1,uint64_t param_2,int32_t *param_3,uint64_t *param_4,
void FUN_1802edfe0(longlong param_1,uint64_t param_2,int32_t *param_3,uint64_t *param_4,
                  char *param_5)

{
  uint64_t *puVar1;
  float *pfVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint64_t uVar15;
  char cVar16;
  longlong lVar17;
  uint *puVar18;
  int iVar19;
  longlong lVar20;
  int32_t uVar21;
  uint64_t uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int8_t auStack_2a8 [32];
  float *pfStack_288;
  float afStack_278 [2];
  uint64_t uStack_270;
  uint64_t uStack_268;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  int32_t uStack_250;
  char *pcStack_248;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  float fStack_1f8;
  uint64_t uStack_1f4;
  uint64_t uStack_1ec;
  uint64_t uStack_1e4;
  int32_t uStack_1dc;
  int32_t uStack_1d8;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint64_t auStack_138 [2];
  float afStack_128 [4];
  int32_t auStack_118 [3];
  int8_t auStack_10c [8];
  int8_t auStack_104 [12];
  int iStack_f8;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  ulonglong uStack_c8;
  
  uStack_1c8 = 0xfffffffffffffffe;
  uStack_c8 = _DAT_180bf00a8 ^ (ulonglong)auStack_2a8;
  uVar22 = 0;
  uVar21 = 0;
  iStack_f8 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x208);
  cVar4 = *(char *)(lVar5 + 0x148);
  pcStack_248 = param_5;
  do {
    cVar4 = cVar4 + -1;
    if (cVar4 < '\0') {
LAB_1802ee368:
      iStack_f8 = uVar21;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_c8 ^ (ulonglong)auStack_2a8);
    }
    lVar17 = (longlong)cVar4 * 0x1b0;
    lVar20 = *(longlong *)(lVar5 + 0x140);
    if (0.0 < *(float *)(lVar17 + 0x158 + lVar20)) {
      uVar21 = *(int32_t *)(lVar17 + 0x17c + lVar20);
      puVar1 = (uint64_t *)(lVar17 + 0x15c + lVar20);
      uStack_270 = *puVar1;
      uStack_268 = puVar1[1];
      pfVar2 = (float *)(lVar17 + 0x16c + lVar20);
      fStack_260 = *pfVar2;
      fStack_25c = pfVar2[1];
      fStack_258 = pfVar2[2];
      fStack_254 = pfVar2[3];
      puVar18 = (uint *)((longlong)cVar4 * 0x100 +
                        *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x18));
      do {
        LOCK();
        uVar3 = *puVar18;
        *puVar18 = *puVar18 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      uStack_208 = puVar18[1];
      uStack_204 = puVar18[2];
      uStack_200 = puVar18[3];
      uStack_1fc = puVar18[4];
      fVar23 = (float)puVar18[5];
      fVar24 = (float)puVar18[6];
      fVar25 = (float)puVar18[7];
      uStack_1f4 = *(uint64_t *)(puVar18 + 6);
      uStack_cc = puVar18[8];
      *puVar18 = (uint)uVar22;
      uStack_1ec._4_4_ = (int32_t)((ulonglong)uStack_1ec >> 0x20);
      uStack_1ec = CONCAT44(uStack_1ec._4_4_,uStack_cc);
      uStack_250 = uVar21;
      fStack_1f8 = fVar23;
      uStack_e8 = uStack_208;
      uStack_e4 = uStack_204;
      uStack_e0 = uStack_200;
      uStack_dc = uStack_1fc;
      fStack_d8 = fVar23;
      fStack_d4 = fVar24;
      fStack_d0 = fVar25;
      FUN_18063b5f0(&fStack_240,&uStack_208);
      fVar26 = *(float *)(param_1 + 0x30);
      fVar27 = *(float *)(param_1 + 0x34);
      fVar28 = *(float *)(param_1 + 0x38);
      fVar6 = *(float *)(param_1 + 0x3c);
      fVar7 = *(float *)(param_1 + 0x40);
      fVar8 = *(float *)(param_1 + 0x44);
      fVar9 = *(float *)(param_1 + 0x48);
      fVar10 = *(float *)(param_1 + 0x4c);
      fVar11 = *(float *)(param_1 + 0x50);
      fVar12 = *(float *)(param_1 + 0x54);
      fVar13 = *(float *)(param_1 + 0x58);
      fVar14 = *(float *)(param_1 + 0x5c);
      fStack_1a0 = fStack_240 * fVar26 + fStack_23c * fVar7 + fStack_238 * fVar11;
      fStack_19c = fStack_240 * fVar27 + fStack_23c * fVar8 + fStack_238 * fVar12;
      fStack_198 = fStack_240 * fVar28 + fStack_23c * fVar9 + fStack_238 * fVar13;
      fStack_194 = fStack_240 * fVar6 + fStack_23c * fVar10 + fStack_238 * fVar14;
      fStack_190 = fStack_230 * fVar26 + fStack_22c * fVar7 + fStack_228 * fVar11;
      fStack_18c = fStack_230 * fVar27 + fStack_22c * fVar8 + fStack_228 * fVar12;
      fStack_188 = fStack_230 * fVar28 + fStack_22c * fVar9 + fStack_228 * fVar13;
      fStack_184 = fStack_230 * fVar6 + fStack_22c * fVar10 + fStack_228 * fVar14;
      fStack_180 = fStack_220 * fVar26 + fStack_21c * fVar7 + fStack_218 * fVar11;
      fStack_17c = fStack_220 * fVar27 + fStack_21c * fVar8 + fStack_218 * fVar12;
      fStack_178 = fStack_220 * fVar28 + fStack_21c * fVar9 + fStack_218 * fVar13;
      fStack_174 = fStack_220 * fVar6 + fStack_21c * fVar10 + fStack_218 * fVar14;
      fStack_170 = fVar23 * fVar26 + fVar24 * fVar7 + fVar25 * fVar11 + *(float *)(param_1 + 0x60);
      fStack_16c = fVar23 * fVar27 + fVar24 * fVar8 + fVar25 * fVar12 + *(float *)(param_1 + 100);
      fStack_168 = fVar23 * fVar28 + fVar24 * fVar9 + fVar25 * fVar13 + *(float *)(param_1 + 0x68);
      fStack_164 = fVar23 * fVar6 + fVar24 * fVar10 + fVar25 * fVar14 + *(float *)(param_1 + 0x6c);
      fStack_160 = (float)uStack_270 * fStack_1a0 + uStack_270._4_4_ * fStack_190 +
                   (float)uStack_268 * fStack_180 + fStack_170;
      fStack_15c = (float)uStack_270 * fStack_19c + uStack_270._4_4_ * fStack_18c +
                   (float)uStack_268 * fStack_17c + fStack_16c;
      fStack_158 = (float)uStack_270 * fStack_198 + uStack_270._4_4_ * fStack_188 +
                   (float)uStack_268 * fStack_178 + fStack_168;
      fStack_154 = (float)uStack_270 * fStack_194 + uStack_270._4_4_ * fStack_184 +
                   (float)uStack_268 * fStack_174 + fStack_164;
      uStack_270 = CONCAT44(fStack_15c,fStack_160);
      uStack_268 = CONCAT44(fStack_154,fStack_158);
      fVar24 = fStack_25c * fStack_188;
      fVar25 = fStack_25c * fStack_184;
      fVar23 = fStack_258 * fStack_174;
      fVar26 = fStack_260 * fStack_19c;
      fVar27 = fStack_260 * fStack_198;
      fVar28 = fStack_260 * fStack_194;
      fStack_260 = fStack_260 * fStack_1a0 + fStack_25c * fStack_190 + fStack_258 * fStack_180 +
                   fStack_170;
      fStack_25c = fVar26 + fStack_25c * fStack_18c + fStack_258 * fStack_17c + fStack_16c;
      fStack_258 = fVar27 + fVar24 + fStack_258 * fStack_178 + fStack_168;
      fStack_254 = fVar28 + fVar25 + fVar23 + fStack_164;
      fStack_150 = fStack_260;
      fStack_14c = fStack_25c;
      fStack_148 = fStack_258;
      fStack_144 = fStack_254;
      uStack_250 = func_0x000180285a90(&fStack_1a0,uVar21);
      iVar19 = iStack_f8;
      lVar20 = (longlong)iStack_f8;
      if (iStack_f8 < 1) {
        pfStack_288 = afStack_278;
        cVar16 = FUN_1802f4f50(&uStack_270,param_2,&uStack_1c0,&uStack_1b0);
        uVar22 = 0;
        if (cVar16 != '\0') {
          uStack_1e4 = uStack_1b8;
          uVar15 = uStack_1e4;
          uStack_1dc = (int32_t)uStack_1b0;
          uStack_1d8 = (int32_t)((ulonglong)uStack_1b0 >> 0x20);
          uStack_1d4 = (int32_t)uStack_1a8;
          uStack_1d0 = (int32_t)((ulonglong)uStack_1a8 >> 0x20);
          lVar17 = lVar20 * 0x40;
          auStack_138[lVar20 * 8] = 0;
          auStack_138[lVar20 * 8 + 1] = 0;
          uStack_1ec._0_4_ = (float)uStack_1c0;
          fVar23 = (float)uStack_1ec;
          fStack_1f8 = afStack_278[0];
          uStack_1f4 = 0;
          uStack_1ec._4_4_ = (int32_t)((ulonglong)uStack_1c0 >> 0x20);
          uVar21 = uStack_1ec._4_4_;
          uStack_1ec = uStack_1c0;
          afStack_128[lVar20 * 0x10] = afStack_278[0];
          afStack_128[lVar20 * 0x10 + 1] = 0.0;
          afStack_128[lVar20 * 0x10 + 2] = 0.0;
          afStack_128[lVar20 * 0x10 + 3] = fVar23;
          uStack_1e4._0_4_ = (int32_t)uStack_1b8;
          uStack_1e4._4_4_ = (int32_t)((ulonglong)uStack_1b8 >> 0x20);
          *(int32_t *)(auStack_10c + lVar17 + -0xc) = uVar21;
          *(int32_t *)(auStack_10c + lVar17 + -8) = (int32_t)uStack_1e4;
          *(int32_t *)(auStack_10c + lVar17 + -4) = uStack_1e4._4_4_;
          *(int32_t *)(auStack_10c + lVar17) = uStack_1dc;
          *(ulonglong *)(auStack_10c + lVar17 + 4) = CONCAT44(uStack_1d4,uStack_1d8);
          *(ulonglong *)(auStack_104 + lVar17 + 4) = CONCAT44(uStack_1cc,uStack_1d0);
          iVar19 = iStack_f8 + 1;
          uStack_1e4 = uVar15;
          iStack_f8 = iVar19;
        }
      }
      uVar21 = (int32_t)uVar22;
      if (0 < iVar19) {
        *param_3 = afStack_128[3];
        param_3[1] = auStack_118[0];
        param_3[2] = auStack_118[1];
        param_3[3] = auStack_118[2];
        *param_4 = auStack_10c;
        param_4[1] = auStack_104._0_8_;
        *pcStack_248 = cVar4;
        goto LAB_1802ee368;
      }
    }
    uVar21 = (int32_t)uVar22;
  } while( true );
}






// 函数: void FUN_1802ee3e0(longlong param_1,uint64_t param_2)
void FUN_1802ee3e0(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  
  lVar3 = *(longlong *)(param_1 + 0xf0);
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0xf8) - lVar3 >> 3 != 0) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + lVar3);
      iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar2 == 0) {
        (**(code **)(*plVar1 + 400))(plVar1,param_2);
      }
      iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar2 == 7) {
        (**(code **)(*plVar1 + 400))(plVar1,param_2);
      }
      lVar3 = *(longlong *)(param_1 + 0xf0);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((ulonglong)(longlong)iVar4 < (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar3 >> 3));
  }
  lVar3 = *(longlong *)(param_1 + 0x260);
  if (lVar3 != 0) {
    iVar4 = 0;
    if (*(longlong *)(lVar3 + 0x1b0) - *(longlong *)(lVar3 + 0x1a8) >> 3 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar5 + *(longlong *)(lVar3 + 0x1a8));
        iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
        if (iVar2 == 0) {
          (**(code **)(*plVar1 + 400))(plVar1,param_2);
        }
        iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
        if (iVar2 == 7) {
          (**(code **)(*plVar1 + 400))(plVar1,param_2);
        }
        lVar3 = *(longlong *)(param_1 + 0x260);
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      } while ((ulonglong)(longlong)iVar4 <
               (ulonglong)(*(longlong *)(lVar3 + 0x1b0) - *(longlong *)(lVar3 + 0x1a8) >> 3));
    }
    cVar7 = '\0';
    if ('\0' < *(char *)(lVar3 + 0x20)) {
      do {
        lVar5 = 0;
        lVar6 = (longlong)cVar7 * 0x100 + *(longlong *)(lVar3 + 0x18);
        iVar4 = (int)(*(longlong *)(lVar6 + 0xb8) - *(longlong *)(lVar6 + 0xb0) >> 3);
        if (0 < iVar4) {
          do {
            plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0xb0) + lVar5 * 8);
            iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
            if (iVar2 == 0) {
              (**(code **)(*plVar1 + 400))(plVar1,param_2);
            }
            iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
            if (iVar2 == 7) {
              (**(code **)(*plVar1 + 400))(plVar1,param_2);
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 < iVar4);
          lVar3 = *(longlong *)(param_1 + 0x260);
        }
        cVar7 = cVar7 + '\x01';
      } while (cVar7 < *(char *)(lVar3 + 0x20));
    }
  }
  return;
}






// 函数: void FUN_1802ee4aa(uint64_t param_1,longlong param_2)
void FUN_1802ee4aa(uint64_t param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong in_RAX;
  int unaff_EBP;
  longlong lVar4;
  longlong unaff_R13;
  longlong lVar5;
  char cVar6;
  
  if (in_RAX != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_2 + 0x1a8));
      iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar2 == 0) {
        (**(code **)(*plVar1 + 400))(plVar1);
      }
      iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar2 == 7) {
        (**(code **)(*plVar1 + 400))(plVar1);
      }
      param_2 = *(longlong *)(unaff_R13 + 0x260);
      unaff_EBP = unaff_EBP + 1;
      lVar4 = lVar4 + 8;
    } while ((ulonglong)(longlong)unaff_EBP <
             (ulonglong)(*(longlong *)(param_2 + 0x1b0) - *(longlong *)(param_2 + 0x1a8) >> 3));
  }
  cVar6 = '\0';
  if ('\0' < *(char *)(param_2 + 0x20)) {
    do {
      lVar4 = 0;
      lVar5 = (longlong)cVar6 * 0x100 + *(longlong *)(param_2 + 0x18);
      iVar2 = (int)(*(longlong *)(lVar5 + 0xb8) - *(longlong *)(lVar5 + 0xb0) >> 3);
      if (0 < iVar2) {
        do {
          plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0xb0) + lVar4 * 8);
          iVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
          if (iVar3 == 0) {
            (**(code **)(*plVar1 + 400))(plVar1);
          }
          iVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
          if (iVar3 == 7) {
            (**(code **)(*plVar1 + 400))(plVar1);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar2);
        param_2 = *(longlong *)(unaff_R13 + 0x260);
      }
      cVar6 = cVar6 + '\x01';
    } while (cVar6 < *(char *)(param_2 + 0x20));
  }
  return;
}






// 函数: void FUN_1802ee53e(uint64_t param_1,longlong param_2)
void FUN_1802ee53e(uint64_t param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_R13;
  longlong lVar5;
  char unaff_R15B;
  
  do {
    lVar4 = 0;
    lVar5 = (longlong)unaff_R15B * 0x100 + *(longlong *)(param_2 + 0x18);
    iVar2 = (int)(*(longlong *)(lVar5 + 0xb8) - *(longlong *)(lVar5 + 0xb0) >> 3);
    if (0 < iVar2) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0xb0) + lVar4 * 8);
        iVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
        if (iVar3 == 0) {
          (**(code **)(*plVar1 + 400))(plVar1);
        }
        iVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
        if (iVar3 == 7) {
          (**(code **)(*plVar1 + 400))(plVar1);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
      param_2 = *(longlong *)(unaff_R13 + 0x260);
    }
    unaff_R15B = unaff_R15B + '\x01';
  } while (unaff_R15B < *(char *)(param_2 + 0x20));
  return;
}






// 函数: void FUN_1802ee5eb(void)
void FUN_1802ee5eb(void)

{
  return;
}






// 函数: void FUN_1802ee5f0(void)
void FUN_1802ee5f0(void)

{
  return;
}



uint64_t FUN_1802ee610(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  longlong lVar3;
  int32_t uStack_24;
  
  puVar1 = (uint64_t *)
           FUN_1802f4600(*(uint64_t *)(param_1 + 0xf0),*(uint64_t *)(param_1 + 0xf8),param_2);
  if (puVar1 == *(uint64_t **)(param_1 + 0xf8)) {
    uVar2 = 0;
  }
  else {
    if ((*(longlong *)(param_2 + 0x28) != 0) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x20) != 0)) {
      FUN_1802549d0(param_2);
    }
    (**(code **)(*(longlong *)*puVar1 + 0x1e0))((longlong *)*puVar1,0);
    *(int32_t *)(param_2 + 0x10) = 4;
    *(int32_t *)(param_2 + 0x14) = uStack_24;
    *(int32_t *)(param_2 + 0x18) = 0;
    *(int32_t *)(param_2 + 0x1c) = 0;
    *(uint64_t *)(param_2 + 0x20) = 0;
    FUN_1800ba050(param_1 + 0xf0,puVar1);
    lVar3 = FUN_1802f4600(*(uint64_t *)(param_1 + 0x1e0),*(uint64_t *)(param_1 + 0x1e8),param_2)
    ;
    if (lVar3 != *(longlong *)(param_1 + 0x1e8)) {
      FUN_1800ba050(param_1 + 0x1e0,lVar3);
    }
    *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
    FUN_1802ed990(param_1,1);
    uVar2 = 1;
  }
  return uVar2;
}






// 函数: void FUN_1802ee720(longlong param_1,byte param_2)
void FUN_1802ee720(longlong param_1,byte param_2)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint64_t uStackX_10;
  
  *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) & 0xfe;
  *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) | param_2;
  lVar5 = *(longlong *)(param_1 + 0xf0);
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0xf8) - lVar5 >> 3 != 0) {
    lVar10 = 0;
    do {
      plVar2 = *(longlong **)(lVar10 + lVar5);
      iVar3 = (**(code **)(*plVar2 + 0x98))(plVar2);
      if (iVar3 == 7) {
        uStackX_10 = CONCAT44(uStackX_10._4_4_,-(uint)((*(byte *)(param_1 + 0x2e8) & 1) != 0)) &
                     0xffffffff00000031;
        (**(code **)(*plVar2 + 0x128))(plVar2,&uStackX_10);
      }
      lVar5 = *(longlong *)(param_1 + 0xf0);
      iVar6 = iVar6 + 1;
      lVar10 = lVar10 + 8;
    } while ((ulonglong)(longlong)iVar6 < (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar5 >> 3));
  }
  lVar5 = *(longlong *)(param_1 + 0x168);
  while (lVar10 = lVar5, lVar10 != 0) {
    param_1 = lVar10;
    lVar5 = *(longlong *)(lVar10 + 0x168);
  }
  bVar1 = *(byte *)(param_1 + 0x2e8);
  *(byte *)(param_1 + 0x2e8) = bVar1 & 0xf7 | 8;
  lVar5 = *(longlong *)(param_1 + 0x20);
  uVar8 = 0;
  if (lVar5 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x28);
    if ((bVar1 & 3 | 8) == 0xb) {
      if ((*(longlong *)(lVar10 + 0x170) == 0) &&
         (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
        uVar4 = FUN_180389a90(lVar5 + 0x29a0,&stack0x00000008);
        *(uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x170) = uVar4;
        lVar5 = *(longlong *)(param_1 + 0x20);
        plVar2 = *(longlong **)(lVar5 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x18))
                    (plVar2,*(uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x170),param_1 + 0x70);
          lVar5 = *(longlong *)(param_1 + 0x20);
        }
        plVar2 = *(longlong **)(lVar5 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))
                    (plVar2,*(uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x170),
                     *(int32_t *)(param_1 + 0x18));
        }
      }
    }
    else if (*(longlong *)(lVar10 + 0x170) != 0) {
      plVar2 = *(longlong **)(lVar5 + 0x29a8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,*(longlong *)(lVar10 + 0x170));
        lVar10 = *(longlong *)(param_1 + 0x28);
      }
      *(uint64_t *)(lVar10 + 0x170) = 0;
    }
  }
  uVar9 = uVar8;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f2700(*(uint64_t *)(uVar9 + *(longlong *)(param_1 + 0x1c0)),(bVar1 & 1) != 0);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar9 = uVar9 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802ee747(uint64_t param_1,longlong param_2)
void FUN_1802ee747(uint64_t param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  longlong in_RAX;
  uint64_t uVar4;
  longlong lVar5;
  longlong unaff_RBX;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong in_stack_00000038;
  
  iVar6 = 0;
  if (in_RAX >> 3 != 0) {
    lVar10 = 0;
    do {
      plVar2 = *(longlong **)(lVar10 + param_2);
      iVar3 = (**(code **)(*plVar2 + 0x98))(plVar2);
      if (iVar3 == 7) {
        in_stack_00000038 =
             CONCAT44(in_stack_00000038._4_4_,-(uint)((*(byte *)(unaff_RBX + 0x2e8) & 1) != 0)) &
             0xffffffff00000031;
        (**(code **)(*plVar2 + 0x128))(plVar2,&stack0x00000038);
      }
      param_2 = *(longlong *)(unaff_RBX + 0xf0);
      iVar6 = iVar6 + 1;
      lVar10 = lVar10 + 8;
    } while ((ulonglong)(longlong)iVar6 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0xf8) - param_2 >> 3));
  }
  lVar10 = *(longlong *)(unaff_RBX + 0x168);
  while (lVar5 = lVar10, lVar5 != 0) {
    unaff_RBX = lVar5;
    lVar10 = *(longlong *)(lVar5 + 0x168);
  }
  bVar1 = *(byte *)(unaff_RBX + 0x2e8);
  *(byte *)(unaff_RBX + 0x2e8) = bVar1 & 0xf7 | 8;
  lVar10 = *(longlong *)(unaff_RBX + 0x20);
  uVar8 = 0;
  if (lVar10 != 0) {
    lVar5 = *(longlong *)(unaff_RBX + 0x28);
    if ((bVar1 & 3 | 8) == 0xb) {
      if ((*(longlong *)(lVar5 + 0x170) == 0) &&
         (*(longlong **)(unaff_RBX + 0x10) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(unaff_RBX + 0x10) + 0x28))();
        uVar4 = FUN_180389a90(lVar10 + 0x29a0,&stack0x00000030);
        *(uint64_t *)(*(longlong *)(unaff_RBX + 0x28) + 0x170) = uVar4;
        lVar10 = *(longlong *)(unaff_RBX + 0x20);
        plVar2 = *(longlong **)(lVar10 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x18))
                    (plVar2,*(uint64_t *)(*(longlong *)(unaff_RBX + 0x28) + 0x170),
                     unaff_RBX + 0x70);
          lVar10 = *(longlong *)(unaff_RBX + 0x20);
        }
        plVar2 = *(longlong **)(lVar10 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))
                    (plVar2,*(uint64_t *)(*(longlong *)(unaff_RBX + 0x28) + 0x170),
                     *(int32_t *)(unaff_RBX + 0x18));
        }
      }
    }
    else if (*(longlong *)(lVar5 + 0x170) != 0) {
      plVar2 = *(longlong **)(lVar10 + 0x29a8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,*(longlong *)(lVar5 + 0x170));
        lVar5 = *(longlong *)(unaff_RBX + 0x28);
      }
      *(uint64_t *)(lVar5 + 0x170) = 0;
    }
  }
  uVar9 = uVar8;
  if (*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f2700(*(uint64_t *)(uVar9 + *(longlong *)(unaff_RBX + 0x1c0)),(bVar1 & 1) != 0);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar9 = uVar9 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802ee75b(uint64_t param_1,longlong param_2)
void FUN_1802ee75b(uint64_t param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RBX;
  uint unaff_ESI;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *in_stack_00000030;
  ulonglong in_stack_00000038;
  
  uVar9 = (ulonglong)unaff_ESI;
  do {
    plVar2 = *(longlong **)(uVar9 + param_2);
    iVar3 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if (iVar3 == 7) {
      in_stack_00000038 =
           CONCAT44(in_stack_00000038._4_4_,-(uint)((*(byte *)(unaff_RBX + 0x2e8) & 1) != 0)) &
           0xffffffff00000031;
      (**(code **)(*plVar2 + 0x128))(plVar2,&stack0x00000038);
    }
    param_2 = *(longlong *)(unaff_RBX + 0xf0);
    unaff_ESI = unaff_ESI + 1;
    uVar9 = uVar9 + 8;
  } while ((ulonglong)(longlong)(int)unaff_ESI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0xf8) - param_2 >> 3));
  lVar6 = *(longlong *)(unaff_RBX + 0x168);
  while (lVar5 = lVar6, lVar5 != 0) {
    unaff_RBX = lVar5;
    lVar6 = *(longlong *)(lVar5 + 0x168);
  }
  bVar1 = *(byte *)(unaff_RBX + 0x2e8);
  *(byte *)(unaff_RBX + 0x2e8) = bVar1 & 0xf7 | 8;
  lVar6 = *(longlong *)(unaff_RBX + 0x20);
  uVar9 = 0;
  if (lVar6 != 0) {
    lVar5 = *(longlong *)(unaff_RBX + 0x28);
    if ((bVar1 & 3 | 8) == 0xb) {
      if ((*(longlong *)(lVar5 + 0x170) == 0) &&
         (plVar2 = *(longlong **)(unaff_RBX + 0x10), plVar2 != (longlong *)0x0)) {
        in_stack_00000030 = plVar2;
        (**(code **)(*plVar2 + 0x28))();
        uVar4 = FUN_180389a90(lVar6 + 0x29a0,&stack0x00000030);
        *(uint64_t *)(*(longlong *)(unaff_RBX + 0x28) + 0x170) = uVar4;
        lVar6 = *(longlong *)(unaff_RBX + 0x20);
        plVar2 = *(longlong **)(lVar6 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x18))
                    (plVar2,*(uint64_t *)(*(longlong *)(unaff_RBX + 0x28) + 0x170),
                     unaff_RBX + 0x70);
          lVar6 = *(longlong *)(unaff_RBX + 0x20);
        }
        plVar2 = *(longlong **)(lVar6 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))
                    (plVar2,*(uint64_t *)(*(longlong *)(unaff_RBX + 0x28) + 0x170),
                     *(int32_t *)(unaff_RBX + 0x18));
        }
      }
    }
    else if (*(longlong *)(lVar5 + 0x170) != 0) {
      plVar2 = *(longlong **)(lVar6 + 0x29a8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,*(longlong *)(lVar5 + 0x170));
        lVar5 = *(longlong *)(unaff_RBX + 0x28);
      }
      *(uint64_t *)(lVar5 + 0x170) = 0;
    }
  }
  uVar8 = uVar9;
  if (*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f2700(*(uint64_t *)(uVar8 + *(longlong *)(unaff_RBX + 0x1c0)),(bVar1 & 1) != 0);
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
      uVar8 = uVar8 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802ee7d7(void)
void FUN_1802ee7d7(void)

{
  byte bVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBX;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *in_stack_00000030;
  uint64_t *in_stack_00000040;
  
  lVar5 = *(longlong *)(unaff_RBX + 0x168);
  while (lVar4 = lVar5, lVar4 != 0) {
    unaff_RBX = lVar4;
    lVar5 = *(longlong *)(lVar4 + 0x168);
  }
  bVar1 = *(byte *)(unaff_RBX + 0x2e8);
  *(byte *)(unaff_RBX + 0x2e8) = bVar1 & 0xf7 | 8;
  lVar5 = *(longlong *)(unaff_RBX + 0x20);
  uVar7 = 0;
  if (lVar5 != 0) {
    lVar4 = *(longlong *)(unaff_RBX + 0x28);
    if ((bVar1 & 3 | 8) == 0xb) {
      if ((*(longlong *)(lVar4 + 0x170) == 0) &&
         (plVar2 = *(longlong **)(unaff_RBX + 0x10), plVar2 != (longlong *)0x0)) {
        in_stack_00000040 = &stack0x00000030;
        in_stack_00000030 = plVar2;
        (**(code **)(*plVar2 + 0x28))();
        uVar3 = FUN_180389a90(lVar5 + 0x29a0,&stack0x00000030);
        *(uint64_t *)(*(longlong *)(unaff_RBX + 0x28) + 0x170) = uVar3;
        lVar5 = *(longlong *)(unaff_RBX + 0x20);
        plVar2 = *(longlong **)(lVar5 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x18))
                    (plVar2,*(uint64_t *)(*(longlong *)(unaff_RBX + 0x28) + 0x170),
                     unaff_RBX + 0x70);
          lVar5 = *(longlong *)(unaff_RBX + 0x20);
        }
        plVar2 = *(longlong **)(lVar5 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))
                    (plVar2,*(uint64_t *)(*(longlong *)(unaff_RBX + 0x28) + 0x170),
                     *(int32_t *)(unaff_RBX + 0x18));
        }
      }
    }
    else if (*(longlong *)(lVar4 + 0x170) != 0) {
      plVar2 = *(longlong **)(lVar5 + 0x29a8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,*(longlong *)(lVar4 + 0x170));
        lVar4 = *(longlong *)(unaff_RBX + 0x28);
      }
      *(uint64_t *)(lVar4 + 0x170) = 0;
    }
  }
  uVar8 = uVar7;
  if (*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f2700(*(uint64_t *)(uVar8 + *(longlong *)(unaff_RBX + 0x1c0)),(bVar1 & 1) != 0);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 8;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  }
  return;
}







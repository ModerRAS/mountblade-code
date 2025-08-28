#include "TaleWorlds.Native.Split.h"

// 03_rendering_part591.c - 3 个函数

// 函数: void FUN_1805912f0(longlong param_1,float param_2,longlong param_3)
void FUN_1805912f0(longlong param_1,float param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  
  if ((*(float *)(param_1 + 0x154) <= 0.0 && *(float *)(param_1 + 0x154) != 0.0) &&
     ((*(byte *)(param_1 + 0x40) & 3) == 1)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfc;
  }
  bVar1 = *(byte *)(param_1 + 0x40);
  if ((((bVar1 & 3) == 0) || ((bVar1 & 4) != 0)) ||
     (*(float *)(param_1 + 0x44) <= 0.0 && *(float *)(param_1 + 0x44) != 0.0)) {
    fVar4 = *(float *)(param_3 + 0x1e4);
    fVar5 = *(float *)(param_3 + 0x1e8);
    *(float *)(param_1 + 0x24) =
         *(float *)(param_3 + 0x1e0) + *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fVar4 + *(float *)(param_1 + 0x114) + *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x2c) = fVar5 + *(float *)(param_1 + 0x118) + *(float *)(param_1 + 0x2c);
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((*(char *)(param_3 + 0x1f5) == '\0') || ((bVar1 & 3) == 0)) {
    if (((bVar1 & 3) != 0) &&
       ((0.0 < *(float *)(param_1 + 0x44) || *(float *)(param_1 + 0x44) == 0.0 && (0.0 < param_2))))
    {
      if (1 < *(int *)(param_3 + 0x194) - 3U) {
        *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x1c);
                    // WARNING: Subroutine does not return
        uStack_60 = 0x180591402;
        FUN_1808fd400(*(undefined4 *)(param_1 + 0x34));
      }
      pfVar3 = (float *)(param_1 + 0x24);
      uStack_60 = 0x180591446;
      fVar4 = (float)FUN_1801be430();
      fVar4 = fVar4 - param_2 * 8.0;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      pfVar3[1] = fVar4 * pfVar3[1];
      *pfVar3 = fVar4 * *pfVar3;
      bVar1 = *(byte *)(param_1 + 0x40);
      if ((bVar1 & 4) == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x24) = 0;
  }
  *(float *)(param_1 + 0x160) = (1.0 - param_2 * 3.0) * *(float *)(param_1 + 0x160);
  if ((bVar1 & 3) == 0) {
    fVar4 = *(float *)(param_1 + 0x24);
    fVar5 = 1.0 - SQRT(fVar4 * fVar4 + *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
                       *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c)) * 0.002 * param_2;
    *(float *)(param_1 + 0x28) = fVar5 * *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x24) = fVar4 * fVar5;
    *(float *)(param_1 + 0x2c) = fVar5 * *(float *)(param_1 + 0x2c);
  }
  *(float *)(param_1 + 0x168) = param_2 * *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x16c) = param_2 * *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x170) = param_2 * *(float *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x174) = 0x7f7fffff;
  if (*(int *)(param_3 + 0x194) == 1) {
    fVar4 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
            *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
            *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c);
    if ((*(uint *)(param_3 + 0x24) & 0x800) == 0) {
      fVar5 = _DAT_180c964a8;
      fVar6 = _DAT_180c964a4;
      if (4 < _DAT_180c92514 - 1U) {
        fVar5 = _DAT_180c96498;
        fVar6 = _DAT_180c96494;
      }
      fVar5 = (fVar4 * 1.04 - fVar4 * fVar4 * 1.0816) * fVar5 + 0.8;
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      *(float *)(param_1 + 0x188) = fVar5;
      if (*(char *)(param_3 + 0x99) == '\0') {
        fVar5 = fVar5 * 0.75;
      }
      else {
        fVar5 = fVar5 * 1.6;
      }
      *(float *)(param_1 + 0x188) = fVar5;
      if ((1.0 <= fVar4) ||
         ((-0.01 < *(float *)(param_1 + 0x138) && (*(float *)(param_1 + 0x138) < 0.01))))
      goto LAB_180591691;
      fVar4 = fVar5 * 0.75;
    }
    else {
      fVar5 = _DAT_180c964a0;
      fVar6 = _DAT_180c9649c;
      if (4 < _DAT_180c92514 - 1U) {
        fVar5 = _DAT_180c96490;
        fVar6 = _DAT_180c9648c;
      }
      fVar4 = (fVar4 * 1.04 - fVar4 * fVar4 * 1.0816) * fVar5 + 1.0;
      if (fVar4 <= fVar6) {
        fVar4 = fVar6;
      }
    }
    *(float *)(param_1 + 0x188) = fVar4;
  }
  else {
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
LAB_180591691:
  if (((*(ulonglong *)(param_3 + 0x68) | *(ulonglong *)(param_3 + 0x60)) & 0x400000000000) != 0) {
    *(float *)(param_1 + 0x168) = *(float *)(param_1 + 0x168) + *(float *)(param_3 + 0x184);
    *(float *)(param_1 + 0x16c) = *(float *)(param_3 + 0x188) + *(float *)(param_1 + 0x16c);
    *(float *)(param_1 + 0x170) = *(float *)(param_3 + 0x18c) + *(float *)(param_1 + 0x170);
  }
  if (((0.0 < *(float *)(param_1 + 0x154) || *(float *)(param_1 + 0x154) == 0.0) &&
      ((*(byte *)(param_1 + 0x40) & 3) == 0)) &&
     (*(float *)(param_1 + 0x170) <= 0.0 && *(float *)(param_1 + 0x170) != 0.0)) {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 4;
  }
  uStack_88 = 0x3f800000;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  uStack_74 = 0x3f800000;
  uStack_70 = 0;
  uStack_6c = 0;
  if ((*(uint *)(param_3 + 0x24) & 0x800) != 0) {
    fStack_58 = *(float *)(param_1 + 0x168) + *(float *)(param_1 + 0xc);
    fStack_54 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x16c);
    fStack_50 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x170);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x1b0);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x1b4);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1d0);
    uStack_4c = 0x7f7fffff;
    cVar2 = FUN_180591740(param_1,&uStack_88,param_3);
    if (cVar2 == '\0') {
      if (*(char *)(param_3 + 0x98) == '\0') {
        *(float *)(param_1 + 0x1f8) =
             param_2 * 8.2 * (1.0 - *(float *)(param_1 + 0x1f8)) + *(float *)(param_1 + 0x1f8);
      }
      else {
        *(undefined4 *)(param_1 + 0x1f8) = 0x3f800000;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1f8) = _DAT_180c9646c;
    }
    if ((*(float *)(param_1 + 0x1ac) <= 0.0) ||
       (fVar7 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x18c),
       fVar6 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 400),
       fVar4 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x194),
       fVar5 = *(float *)(param_1 + 0x1d0) * *(float *)(param_1 + 0x1d0), fVar5 = fVar5 + fVar5,
       fVar5 + fVar5 < fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4)) {
      *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 0x194) = *(undefined8 *)(param_1 + 0x1b8);
      *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(param_1 + 0x1c0);
      *(undefined8 *)(param_1 + 0x1a4) = *(undefined8 *)(param_1 + 0x1c8);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1d0);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(param_1 + 0x34));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180591740(undefined4 *param_1,float *param_2,longlong param_3,float param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
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
  char cVar16;
  int iVar17;
  undefined4 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte bVar21;
  ulonglong uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  
  uVar22 = 0;
  if ((*(uint *)(param_3 + 0x24) & 0x800) == 0) {
    puVar18 = *(undefined4 **)(param_3 + 0x1a8);
    fVar33 = (float)puVar18[8];
    if (fVar33 <= 0.0) {
      uVar24 = 0;
      fVar23 = 0.0;
      fVar25 = 1.0;
      uVar30 = 0x7f7fffff;
      uVar31 = 0;
      fVar26 = 0.0;
      fVar28 = 0.0;
      uVar32 = 0x7f7fffff;
      fVar33 = 1.0;
    }
    else {
      uVar24 = *puVar18;
      fVar23 = (float)puVar18[1];
      fVar25 = (float)puVar18[2];
      uVar30 = puVar18[3];
      uVar31 = puVar18[4];
      fVar26 = (float)puVar18[5];
      fVar28 = (float)puVar18[6];
      uVar32 = puVar18[7];
    }
  }
  else {
    uVar1 = param_1[2];
    if ((uVar1 >> 4 & 1) == 0) {
      puVar18 = *(undefined4 **)(param_3 + 0x1a8);
    }
    else {
      puVar18 = *(undefined4 **)(param_3 + 0x1b0);
    }
    fVar33 = (float)puVar18[8];
    if (fVar33 <= 0.0) {
      uVar24 = 0;
      fVar23 = 0.0;
      fVar25 = 1.0;
      uVar30 = 0x7f7fffff;
      uVar31 = 0;
      fVar26 = 0.0;
      fVar28 = 0.0;
      uVar32 = 0x7f7fffff;
      fVar33 = 1.0;
    }
    else {
      uVar24 = *puVar18;
      fVar23 = (float)puVar18[1];
      fVar25 = (float)puVar18[2];
      uVar30 = puVar18[3];
      uVar31 = puVar18[4];
      fVar26 = (float)puVar18[5];
      fVar28 = (float)puVar18[6];
      uVar32 = puVar18[7];
    }
    if (*(char *)(param_3 + 0x98) != '\0') {
      param_4 = *(float *)(param_3 + 0x160) * *(float *)(param_3 + 0x168);
      fVar23 = fVar23 + param_4;
      fVar26 = fVar26 + param_4;
      fVar29 = ((*(float *)(*(longlong *)(param_3 + 0x1b8) + 0x20) +
                *(float *)(*(longlong *)(param_3 + 0x1b8) + 8)) * *(float *)(param_3 + 0x160) +
               *(float *)(param_3 + 0x164)) - *(float *)(param_3 + 0x20);
      fVar25 = fVar25 + fVar29;
      fVar28 = fVar28 + fVar29;
    }
    bVar21 = (byte)(uVar1 >> 7) & 1;
    uVar22 = (ulonglong)bVar21;
    if ((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) {
      uVar20 = 0;
      if (((*(int *)(param_3 + 0x178) == 1) && (*(char *)(param_3 + 0x180) == '\0')) ||
         (*(int *)(param_3 + 0x28) != 0)) {
        uVar22 = 1;
      }
      else {
        uVar22 = (ulonglong)bVar21;
        if (*(int *)(param_3 + 0x178) == 2) {
          uVar22 = uVar20;
        }
      }
      if (bVar21 != (byte)uVar22) {
        uVar3 = uVar1 | 0x80;
        if ((byte)uVar22 == 0) {
          uVar3 = uVar1 & 0xffffff7f;
        }
        param_1[2] = uVar3;
        if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
          iVar17 = _Mtx_lock(0x180c95528);
          if (iVar17 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar17);
          }
          uVar24 = *param_1;
          cVar16 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
          if (((cVar16 != '\0') &&
              (cVar16 = FUN_180645c10(0x180c95578,8,&UNK_1809fa540), cVar16 != '\0')) &&
             (cVar16 = FUN_180645c10(0x180c95578,uVar24,&UNK_1809fa510), cVar16 != '\0')) {
            FUN_180645c10(0x180c95578,uVar22,&UNK_1809fa560);
          }
          _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
          iVar17 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
          lVar19 = _DAT_180c92cd8;
          if (0 < iVar17) {
            do {
              lVar2 = *(longlong *)(lVar19 + uVar20 * 8);
              if ((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
                FUN_1805b59d0(lVar2,0x180c95578);
                lVar19 = _DAT_180c92cd8;
              }
              uVar20 = uVar20 + 1;
            } while ((longlong)uVar20 < (longlong)iVar17);
          }
          if (_DAT_180c96070 != 0) {
            FUN_180567f30(_DAT_180c92580,0x180c95578);
          }
          _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
          memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
        }
      }
    }
  }
  if (((*(uint *)(param_3 + 0x24) & 0x800) == 0) &&
     ((fVar29 = *(float *)(param_3 + 0x1c0), fVar29 <= -0.01 || (0.01 <= fVar29)))) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(-fVar29);
  }
  param_1[0x74] = fVar33;
  param_1[0x6c] = uVar24;
  param_1[0x6d] = fVar23;
  param_1[0x6e] = fVar25;
  param_1[0x6f] = uVar30;
  param_1[0x70] = uVar31;
  param_1[0x71] = fVar26;
  param_1[0x72] = fVar28;
  param_1[0x73] = uVar32;
  param_1[0x7d] = fVar33;
  param_1[0x75] = uVar24;
  param_1[0x76] = fVar23;
  param_1[0x77] = fVar25;
  param_1[0x78] = uVar30;
  param_1[0x79] = uVar31;
  param_1[0x7a] = fVar26;
  param_1[0x7b] = fVar28;
  param_1[0x7c] = uVar32;
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar23 = (float)param_1[0x76];
  fVar26 = (float)param_1[0x75];
  fVar29 = (float)param_1[0x77];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar13 = param_2[0xd];
  fVar14 = param_2[0xe];
  fVar15 = param_2[0xf];
  param_1[0x6c] = param_2[4] * fVar23 + *param_2 * fVar26 + param_2[8] * fVar29 + param_2[0xc];
  param_1[0x6d] = fVar4 * fVar23 + fVar7 * fVar26 + fVar10 * fVar29 + fVar13;
  param_1[0x6e] = fVar5 * fVar23 + fVar8 * fVar26 + fVar11 * fVar29 + fVar14;
  param_1[0x6f] = fVar6 * fVar23 + fVar9 * fVar26 + fVar12 * fVar29 + fVar15;
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar23 = (float)param_1[0x7a];
  fVar26 = (float)param_1[0x79];
  fVar29 = (float)param_1[0x7b];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar13 = param_2[0xd];
  fVar14 = param_2[0xe];
  fVar15 = param_2[0xf];
  fVar27 = param_2[4] * fVar23 + *param_2 * fVar26 + param_2[8] * fVar29 + param_2[0xc];
  param_1[0x70] = fVar27;
  param_1[0x71] = fVar4 * fVar23 + fVar7 * fVar26 + fVar10 * fVar29 + fVar13;
  param_1[0x72] = fVar5 * fVar23 + fVar8 * fVar26 + fVar11 * fVar29 + fVar14;
  param_1[0x73] = fVar6 * fVar23 + fVar9 * fVar26 + fVar12 * fVar29 + fVar15;
  uVar24 = func_0x000180285a90(param_2,fVar33,fVar27,param_4,uVar24,fVar25,uVar31,fVar28);
  param_1[0x74] = uVar24;
  return uVar22;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180591777(longlong param_1,undefined8 param_2,longlong param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
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
  char cVar17;
  int iVar18;
  longlong in_RAX;
  undefined4 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong unaff_RBP;
  byte bVar22;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  float *unaff_R12;
  undefined8 unaff_R13;
  undefined4 *unaff_R15;
  bool in_ZF;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_R13;
  if (in_ZF) {
    puVar19 = *(undefined4 **)(param_3 + 0x1a8);
    fVar30 = (float)puVar19[8];
    if (fVar30 <= 0.0) {
      uVar24 = 0;
      fVar23 = 0.0;
      fStack0000000000000028 = 1.0;
      uStack000000000000002c = 0x7f7fffff;
      uVar28 = 0;
      fVar25 = 0.0;
      fVar27 = 0.0;
      uVar29 = 0x7f7fffff;
      fVar30 = 1.0;
    }
    else {
      uVar24 = *puVar19;
      fVar23 = (float)puVar19[1];
      fStack0000000000000028 = (float)puVar19[2];
      uStack000000000000002c = puVar19[3];
      uVar28 = puVar19[4];
      fVar25 = (float)puVar19[5];
      fVar27 = (float)puVar19[6];
      uVar29 = puVar19[7];
    }
    *(undefined4 *)(unaff_RBP + -0x79) = uVar28;
    *(float *)(unaff_RBP + -0x75) = fVar25;
    *(float *)(unaff_RBP + -0x71) = fVar27;
    *(undefined4 *)(unaff_RBP + -0x6d) = uVar29;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    if ((uVar2 >> 4 & 1) == 0) {
      puVar19 = *(undefined4 **)(unaff_RDI + 0x1a8);
    }
    else {
      puVar19 = *(undefined4 **)(unaff_RDI + 0x1b0);
    }
    fVar30 = (float)puVar19[8];
    if (fVar30 <= 0.0) {
      uVar24 = 0;
      fVar23 = 0.0;
      fStack0000000000000028 = 1.0;
      uStack000000000000002c = 0x7f7fffff;
      uVar28 = 0;
      fVar25 = 0.0;
      fVar27 = 0.0;
      uVar29 = 0x7f7fffff;
      fVar30 = 1.0;
    }
    else {
      uVar24 = *puVar19;
      fVar23 = (float)puVar19[1];
      fStack0000000000000028 = (float)puVar19[2];
      uStack000000000000002c = puVar19[3];
      uVar28 = puVar19[4];
      fVar25 = (float)puVar19[5];
      fVar27 = (float)puVar19[6];
      uVar29 = puVar19[7];
    }
    cVar17 = *(char *)(unaff_RDI + 0x98);
    *(undefined4 *)(unaff_RBP + -0x79) = uVar28;
    *(float *)(unaff_RBP + -0x75) = fVar25;
    *(float *)(unaff_RBP + -0x71) = fVar27;
    *(undefined4 *)(unaff_RBP + -0x6d) = uVar29;
    if (cVar17 != '\0') {
      param_4 = *(float *)(unaff_RDI + 0x160) * *(float *)(unaff_RDI + 0x168);
      fVar23 = fVar23 + param_4;
      fVar25 = *(float *)(unaff_RBP + -0x75) + param_4;
      fVar27 = ((*(float *)(*(longlong *)(unaff_RDI + 0x1b8) + 0x20) +
                *(float *)(*(longlong *)(unaff_RDI + 0x1b8) + 8)) * *(float *)(unaff_RDI + 0x160) +
               *(float *)(unaff_RDI + 0x164)) - *(float *)(unaff_RDI + 0x20);
      fStack0000000000000028 = fStack0000000000000028 + fVar27;
      fVar27 = *(float *)(unaff_RBP + -0x71) + fVar27;
      *(undefined4 *)(unaff_RBP + -0x79) = uVar28;
      *(float *)(unaff_RBP + -0x75) = fVar25;
      *(float *)(unaff_RBP + -0x71) = fVar27;
      *(undefined4 *)(unaff_RBP + -0x6d) = uVar29;
    }
    bVar22 = (byte)(uVar2 >> 7) & 1;
    unaff_RSI = (ulonglong)bVar22;
    if ((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) {
      uVar21 = 0;
      if (((*(int *)(unaff_RDI + 0x178) == 1) && (*(char *)(unaff_RDI + 0x180) == '\0')) ||
         (*(int *)(unaff_RDI + 0x28) != 0)) {
        unaff_RSI = 1;
      }
      else {
        unaff_RSI = (ulonglong)bVar22;
        if (*(int *)(unaff_RDI + 0x178) == 2) {
          unaff_RSI = uVar21;
        }
      }
      if (bVar22 != (byte)unaff_RSI) {
        uVar4 = uVar2 | 0x80;
        if ((byte)unaff_RSI == 0) {
          uVar4 = uVar2 & 0xffffff7f;
        }
        unaff_R15[2] = uVar4;
        if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
          iVar18 = _Mtx_lock(0x180c95528);
          if (iVar18 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar18);
          }
          uVar24 = *unaff_R15;
          cVar17 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
          if (((cVar17 != '\0') &&
              (cVar17 = FUN_180645c10(0x180c95578,8,&UNK_1809fa540), cVar17 != '\0')) &&
             (cVar17 = FUN_180645c10(0x180c95578,uVar24,&UNK_1809fa510), cVar17 != '\0')) {
            FUN_180645c10(0x180c95578,unaff_RSI,&UNK_1809fa560);
          }
          _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
          iVar18 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
          lVar20 = _DAT_180c92cd8;
          if (0 < iVar18) {
            do {
              lVar3 = *(longlong *)(lVar20 + uVar21 * 8);
              if ((lVar3 != 0) && (*(char *)(*(longlong *)(lVar3 + 0x58f8) + 0x1c) != '\0')) {
                FUN_1805b59d0(lVar3,0x180c95578);
                lVar20 = _DAT_180c92cd8;
              }
              uVar21 = uVar21 + 1;
            } while ((longlong)uVar21 < (longlong)iVar18);
          }
          if (_DAT_180c96070 != 0) {
            FUN_180567f30(_DAT_180c92580,0x180c95578);
          }
          _DAT_180c95b3c = 0;
                    // WARNING: Subroutine does not return
          memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
        }
      }
    }
  }
  if (((*(uint *)(unaff_RDI + 0x24) & 0x800) == 0) &&
     ((fVar1 = *(float *)(unaff_RDI + 0x1c0), fVar1 <= -0.01 || (0.01 <= fVar1)))) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(-fVar1);
  }
  unaff_R15[0x74] = fVar30;
  unaff_R15[0x6c] = uVar24;
  unaff_R15[0x6d] = fVar23;
  unaff_R15[0x6e] = fStack0000000000000028;
  unaff_R15[0x6f] = uStack000000000000002c;
  unaff_R15[0x70] = uVar28;
  unaff_R15[0x71] = fVar25;
  unaff_R15[0x72] = fVar27;
  unaff_R15[0x73] = uVar29;
  unaff_R15[0x7d] = fVar30;
  unaff_R15[0x75] = uVar24;
  unaff_R15[0x76] = fVar23;
  unaff_R15[0x77] = fStack0000000000000028;
  unaff_R15[0x78] = uStack000000000000002c;
  unaff_R15[0x79] = uVar28;
  unaff_R15[0x7a] = fVar25;
  unaff_R15[0x7b] = fVar27;
  unaff_R15[0x7c] = uVar29;
  fVar1 = unaff_R12[5];
  fVar5 = unaff_R12[6];
  fVar6 = unaff_R12[7];
  fVar7 = unaff_R12[1];
  fVar8 = unaff_R12[2];
  fVar9 = unaff_R12[3];
  fVar23 = (float)unaff_R15[0x76];
  fVar25 = (float)unaff_R15[0x75];
  fVar27 = (float)unaff_R15[0x77];
  fVar10 = unaff_R12[9];
  fVar11 = unaff_R12[10];
  fVar12 = unaff_R12[0xb];
  fVar13 = unaff_R12[0xd];
  fVar14 = unaff_R12[0xe];
  fVar15 = unaff_R12[0xf];
  unaff_R15[0x6c] =
       unaff_R12[4] * fVar23 + *unaff_R12 * fVar25 + unaff_R12[8] * fVar27 + unaff_R12[0xc];
  unaff_R15[0x6d] = fVar1 * fVar23 + fVar7 * fVar25 + fVar10 * fVar27 + fVar13;
  unaff_R15[0x6e] = fVar5 * fVar23 + fVar8 * fVar25 + fVar11 * fVar27 + fVar14;
  unaff_R15[0x6f] = fVar6 * fVar23 + fVar9 * fVar25 + fVar12 * fVar27 + fVar15;
  fVar1 = unaff_R12[5];
  fVar5 = unaff_R12[6];
  fVar6 = unaff_R12[7];
  fVar7 = unaff_R12[1];
  fVar8 = unaff_R12[2];
  fVar9 = unaff_R12[3];
  fVar23 = (float)unaff_R15[0x7a];
  fVar25 = (float)unaff_R15[0x79];
  fVar27 = (float)unaff_R15[0x7b];
  fVar10 = unaff_R12[9];
  fVar11 = unaff_R12[10];
  fVar12 = unaff_R12[0xb];
  fVar13 = unaff_R12[0xc];
  fVar14 = unaff_R12[0xd];
  fVar15 = unaff_R12[0xe];
  fVar16 = unaff_R12[0xf];
  fVar26 = unaff_R12[4] * fVar23 + *unaff_R12 * fVar25 + unaff_R12[8] * fVar27 + fVar13;
  unaff_R15[0x70] = fVar26;
  unaff_R15[0x71] = fVar1 * fVar23 + fVar7 * fVar25 + fVar10 * fVar27 + fVar14;
  unaff_R15[0x72] = fVar5 * fVar23 + fVar8 * fVar25 + fVar11 * fVar27 + fVar15;
  unaff_R15[0x73] = fVar6 * fVar23 + fVar9 * fVar25 + fVar12 * fVar27 + fVar16;
  uVar24 = func_0x000180285a90(fVar13,fVar30,fVar26,param_4,uVar24);
  unaff_R15[0x74] = uVar24;
  return unaff_RSI & 0xff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180591906(void)
void FUN_180591906(void)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 unaff_SIL;
  undefined4 unaff_R13D;
  undefined4 unaff_000000ac;
  undefined4 *unaff_R15;
  
  iVar4 = _Mtx_lock(0x180c95528);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uVar1 = *unaff_R15;
  cVar3 = FUN_180645c10(0x180c95578,0,&UNK_1809fa560);
  if (cVar3 != '\0') {
    cVar3 = FUN_180645c10(0x180c95578,8,&UNK_1809fa540);
    if (cVar3 != '\0') {
      cVar3 = FUN_180645c10(0x180c95578,uVar1,&UNK_1809fa510);
      if (cVar3 != '\0') {
        FUN_180645c10(0x180c95578,unaff_SIL,&UNK_1809fa560);
      }
    }
  }
  _DAT_180c95b3c = CONCAT44(_DAT_180c95b40,unaff_R13D);
  iVar4 = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
  if (0 < iVar4) {
    lVar6 = CONCAT44(unaff_000000ac,unaff_R13D);
    lVar5 = _DAT_180c92cd8;
    do {
      lVar2 = *(longlong *)(lVar5 + lVar6 * 8);
      if ((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x58f8) + 0x1c) != (char)unaff_R13D)) {
        FUN_1805b59d0(lVar2,0x180c95578);
        lVar5 = _DAT_180c92cd8;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  if (_DAT_180c96070 != CONCAT44(unaff_000000ac,unaff_R13D)) {
    FUN_180567f30(_DAT_180c92580,0x180c95578);
  }
  _DAT_180c95b3c = CONCAT44(unaff_000000ac,unaff_R13D);
                    // WARNING: Subroutine does not return
  memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180591a0a(void)
void FUN_180591a0a(void)

{
  undefined8 unaff_R13;
  
  FUN_180567f30(_DAT_180c92580,0x180c95578);
  _DAT_180c95b3c = unaff_R13;
                    // WARNING: Subroutine does not return
  memset(_DAT_180c95b10,0,(longlong)(_DAT_180c95b08 >> 3));
}



undefined1 FUN_180591ab5(void)

{
  float fVar1;
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
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  float *unaff_R12;
  longlong unaff_R15;
  undefined4 uVar16;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM15_Da;
  
  fVar1 = *(float *)(unaff_RDI + 0x1c0);
  if ((-0.01 < fVar1) && (fVar1 < 0.01)) {
    *(undefined4 *)(unaff_R15 + 0x1d0) = unaff_XMM15_Da;
    *(undefined4 *)(unaff_R15 + 0x1b0) = unaff_XMM6_Da;
    *(undefined4 *)(unaff_R15 + 0x1b4) = unaff_XMM6_Db;
    *(undefined4 *)(unaff_R15 + 0x1b8) = unaff_XMM6_Dc;
    *(undefined4 *)(unaff_R15 + 0x1bc) = unaff_XMM6_Dd;
    *(undefined4 *)(unaff_R15 + 0x1c0) = unaff_XMM7_Da;
    *(undefined4 *)(unaff_R15 + 0x1c4) = unaff_XMM7_Db;
    *(undefined4 *)(unaff_R15 + 0x1c8) = unaff_XMM7_Dc;
    *(undefined4 *)(unaff_R15 + 0x1cc) = unaff_XMM7_Dd;
    *(undefined4 *)(unaff_R15 + 500) = unaff_XMM15_Da;
    *(undefined4 *)(unaff_R15 + 0x1d4) = unaff_XMM6_Da;
    *(undefined4 *)(unaff_R15 + 0x1d8) = unaff_XMM6_Db;
    *(undefined4 *)(unaff_R15 + 0x1dc) = unaff_XMM6_Dc;
    *(undefined4 *)(unaff_R15 + 0x1e0) = unaff_XMM6_Dd;
    *(undefined4 *)(unaff_R15 + 0x1e4) = unaff_XMM7_Da;
    *(undefined4 *)(unaff_R15 + 0x1e8) = unaff_XMM7_Db;
    *(undefined4 *)(unaff_R15 + 0x1ec) = unaff_XMM7_Dc;
    *(undefined4 *)(unaff_R15 + 0x1f0) = unaff_XMM7_Dd;
    fVar4 = unaff_R12[5];
    fVar5 = unaff_R12[6];
    fVar6 = unaff_R12[7];
    fVar7 = unaff_R12[1];
    fVar8 = unaff_R12[2];
    fVar9 = unaff_R12[3];
    fVar1 = *(float *)(unaff_R15 + 0x1d8);
    fVar2 = *(float *)(unaff_R15 + 0x1d4);
    fVar3 = *(float *)(unaff_R15 + 0x1dc);
    fVar10 = unaff_R12[9];
    fVar11 = unaff_R12[10];
    fVar12 = unaff_R12[0xb];
    fVar13 = unaff_R12[0xd];
    fVar14 = unaff_R12[0xe];
    fVar15 = unaff_R12[0xf];
    *(float *)(unaff_R15 + 0x1b0) =
         unaff_R12[4] * fVar1 + *unaff_R12 * fVar2 + unaff_R12[8] * fVar3 + unaff_R12[0xc];
    *(float *)(unaff_R15 + 0x1b4) = fVar4 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar13;
    *(float *)(unaff_R15 + 0x1b8) = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
    *(float *)(unaff_R15 + 0x1bc) = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
    fVar4 = unaff_R12[5];
    fVar5 = unaff_R12[6];
    fVar6 = unaff_R12[7];
    fVar7 = unaff_R12[1];
    fVar8 = unaff_R12[2];
    fVar9 = unaff_R12[3];
    fVar1 = *(float *)(unaff_R15 + 0x1e8);
    fVar2 = *(float *)(unaff_R15 + 0x1e4);
    fVar3 = *(float *)(unaff_R15 + 0x1ec);
    fVar10 = unaff_R12[9];
    fVar11 = unaff_R12[10];
    fVar12 = unaff_R12[0xb];
    fVar13 = unaff_R12[0xd];
    fVar14 = unaff_R12[0xe];
    fVar15 = unaff_R12[0xf];
    *(float *)(unaff_R15 + 0x1c0) =
         unaff_R12[4] * fVar1 + *unaff_R12 * fVar2 + unaff_R12[8] * fVar3 + unaff_R12[0xc];
    *(float *)(unaff_R15 + 0x1c4) = fVar4 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar13;
    *(float *)(unaff_R15 + 0x1c8) = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
    *(float *)(unaff_R15 + 0x1cc) = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
    uVar16 = func_0x000180285a90();
    *(undefined4 *)(unaff_R15 + 0x1d0) = uVar16;
    return unaff_SIL;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(-fVar1);
}






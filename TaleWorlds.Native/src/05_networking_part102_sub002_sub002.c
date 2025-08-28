#include "TaleWorlds.Native.Split.h"

// 05_networking_part102_sub002_sub002.c - 1 个函数

// 函数: void FUN_18089c019(void)
void FUN_18089c019(void)

{
  return;
}



ulonglong FUN_18089c030(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int aiStackX_10 [2];
  
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1808aed00(*param_2,param_1,4);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  aiStackX_10[0] = 0;
  uVar4 = FUN_1808afe30(*param_2,aiStackX_10);
  iVar2 = aiStackX_10[0];
  uVar3 = 0x1c;
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar7 = (longlong)aiStackX_10[0];
  uVar5 = (int)*(uint *)(param_1 + 0x14) >> 0x1f;
  if (((int)((*(uint *)(param_1 + 0x14) ^ uVar5) - uVar5) < aiStackX_10[0]) &&
     (uVar4 = FUN_180882f00(param_1 + 8,aiStackX_10[0]), (int)uVar4 != 0)) {
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < iVar2) {
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8);
    if (0 < iVar2 - iVar1) {
      uVar4 = (ulonglong)(uint)(iVar2 - iVar1);
      do {
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
        }
        puVar6 = puVar6 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar4 = FUN_1808aed00(*param_2,*(undefined8 *)(param_1 + 8),lVar7 << 3);
      if ((int)uVar4 == 0) goto LAB_18089c131;
    }
    else {
      uVar4 = 0x1c;
    }
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
LAB_18089c131:
  uVar4 = FUN_1808ad600(param_2,param_1 + 0x18);
  if ((int)uVar4 == 0) {
    if (*(uint *)(param_2 + 8) < 0x7c) {
      uVar3 = 0;
    }
    else if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar3 = FUN_1808aed00(*param_2,param_1 + 4,4);
    }
    if (uVar3 == 0) {
      uVar4 = func_0x000180069ee0(param_1);
    }
    else {
      uVar4 = (ulonglong)uVar3;
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18089c190(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puStackX_18;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  
  uVar7 = FUN_1808ddc20(param_2,auStack_48,1,0x4f4c4d50);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uVar7 = FUN_1808ddc20(param_2,auStack_68,0,0x424c4d50);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uVar7 = FUN_180899360(param_2,param_1 + 0x10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar7 = FUN_180899090(*param_2,param_1 + 0x38);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  puVar8 = (undefined4 *)FUN_180847820();
  uVar7 = 0;
  uStack_78 = *puVar8;
  uStack_74 = puVar8[1];
  uStack_70 = puVar8[2];
  uStack_6c = puVar8[3];
  uVar5 = 0;
  if (*(uint *)(param_2 + 8) < 0x6d) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar1 = *param_2;
      uVar7 = FUN_1808aed00(uVar1,&uStack_78,4);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      uVar7 = FUN_1808aed00(uVar1,&uStack_74,2);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      uVar7 = FUN_1808aed00(uVar1,(longlong)&uStack_74 + 2,2);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      uVar7 = FUN_1808aed00(uVar1,&uStack_70,8);
    }
    else {
      uVar7 = 0x1c;
    }
  }
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if (0x81 < *(uint *)(param_2 + 8)) {
    uVar7 = FUN_1808a79f0(param_2,param_1 + 0x58);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    goto LAB_18089c300;
  }
  if (*(uint *)(param_2 + 8) < 0x6a) {
    puStack_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    uVar6 = FUN_1808a54c0(param_2,&puStack_88,0);
    uVar7 = (ulonglong)uVar6;
    if (uVar6 != 0) {
LAB_18089c40a:
      uVar6 = uStack_80._4_4_;
      if ((longlong)uStack_80 < 0) {
        uVar6 = -uStack_80._4_4_;
      }
      iVar13 = (int)uStack_80;
      uVar9 = uStack_80._4_4_;
      if ((int)uVar6 < 0) {
        if (0 < (int)uStack_80) {
          return uVar7;
        }
        if ((0 < (int)uStack_80._4_4_) && (puStack_88 != (undefined8 *)0x0)) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puStack_88,&UNK_180957f70,0x100,1);
        }
        puStack_88 = (undefined8 *)0x0;
        uStack_80 = uStack_80 & 0xffffffff;
        uVar9 = uVar5;
      }
      if (iVar13 < 0) {
        lVar12 = (longlong)-iVar13;
        if (iVar13 < 0) {
          lVar11 = (longlong)iVar13 * 0x18 + 0x14 + (longlong)puStack_88;
          do {
            puVar8 = (undefined4 *)FUN_180847820();
            uVar2 = puVar8[1];
            uVar3 = puVar8[2];
            uVar4 = puVar8[3];
            *(undefined4 *)(lVar11 + -0x14) = *puVar8;
            *(undefined4 *)(lVar11 + -0x10) = uVar2;
            *(undefined4 *)(lVar11 + -0xc) = uVar3;
            *(undefined4 *)(lVar11 + -8) = uVar4;
            *(undefined8 *)(lVar11 + -4) = 0;
            lVar12 = lVar12 + -1;
            lVar11 = lVar11 + 0x18;
          } while (lVar12 != 0);
          uVar9 = uStack_80._4_4_;
        }
      }
      uStack_80 = uStack_80 & 0xffffffff00000000;
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      if (uVar9 == 0) {
        return uVar7;
      }
      FUN_1808aef40(&puStack_88,0);
      return uVar7;
    }
    if ((int)uStack_80 == 0) {
      iVar13 = 0;
    }
    else {
      uVar6 = (int)*(uint *)(param_1 + 0x54) >> 0x1f;
      puVar10 = puStack_88;
      if ((int)((*(uint *)(param_1 + 0x54) ^ uVar6) - uVar6) < (int)uStack_80) {
        uVar6 = FUN_180883750(param_1 + 0x48,uStack_80 & 0xffffffff);
        uVar7 = (ulonglong)uVar6;
        puVar10 = puStack_88;
        if (uVar6 != 0) goto LAB_18089c40a;
      }
      for (; (iVar13 = (int)uStack_80, puStack_88 <= puVar10 &&
             (puVar10 < puStack_88 + (longlong)iVar13 * 3)); puVar10 = puVar10 + 3) {
        puStackX_18 = (undefined8 *)0x0;
        uVar6 = FUN_1808aec50(param_1 + 0x48,&puStackX_18);
        uVar7 = (ulonglong)uVar6;
        if (uVar6 != 0) goto LAB_18089c40a;
        uVar1 = puVar10[1];
        *puStackX_18 = *puVar10;
        puStackX_18[1] = uVar1;
        *(undefined4 *)(puStackX_18 + 2) = *(undefined4 *)(puVar10 + 2);
        *(float *)((longlong)puStackX_18 + 0x14) =
             *(float *)((longlong)puVar10 + 0x14) + *(float *)(puVar10 + 2);
        *(undefined1 *)(puStackX_18 + 3) = 1;
      }
    }
    uVar6 = uStack_80._4_4_;
    if ((longlong)uStack_80 < 0) {
      uVar6 = -uStack_80._4_4_;
    }
    uVar9 = uStack_80._4_4_;
    if ((int)uVar6 < 0) {
      if (0 < iVar13) goto LAB_18089c586;
      if ((0 < (int)uStack_80._4_4_) && (puStack_88 != (undefined8 *)0x0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puStack_88,&UNK_180957f70,0x100,1);
      }
      puStack_88 = (undefined8 *)0x0;
      uStack_80 = uStack_80 & 0xffffffff;
      uVar9 = uVar5;
    }
    if (iVar13 < 0) {
      lVar12 = (longlong)-iVar13;
      if (iVar13 < 0) {
        lVar11 = (longlong)iVar13 * 0x18 + 0x14 + (longlong)puStack_88;
        do {
          puVar8 = (undefined4 *)FUN_180847820();
          uVar2 = puVar8[1];
          uVar3 = puVar8[2];
          uVar4 = puVar8[3];
          *(undefined4 *)(lVar11 + -0x14) = *puVar8;
          *(undefined4 *)(lVar11 + -0x10) = uVar2;
          *(undefined4 *)(lVar11 + -0xc) = uVar3;
          *(undefined4 *)(lVar11 + -8) = uVar4;
          *(undefined8 *)(lVar11 + -4) = 0;
          lVar12 = lVar12 + -1;
          lVar11 = lVar11 + 0x18;
        } while (lVar12 != 0);
        uVar9 = uStack_80._4_4_;
      }
    }
    uStack_80 = uStack_80 & 0xffffffff00000000;
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
    }
    if (uVar9 != 0) {
      FUN_1808aef40(&puStack_88,0);
    }
  }
  else {
    uVar7 = FUN_1808a5780(param_2,param_1 + 0x48);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
LAB_18089c586:
  for (uVar7 = *(ulonglong *)(param_1 + 0x48);
      (*(ulonglong *)(param_1 + 0x48) <= uVar7 &&
      (uVar7 < (longlong)*(int *)(param_1 + 0x50) * 0x1c + *(ulonglong *)(param_1 + 0x48)));
      uVar7 = uVar7 + 0x1c) {
    FUN_1807d3e20(param_1 + 0x58);
  }
LAB_18089c300:
  if ((0x70 < *(uint *)(param_2 + 8)) && (uVar5 = 0x1c, *(int *)(param_2[1] + 0x18) == 0)) {
    uVar5 = FUN_1808aed00(*param_2,param_1 + 0x68,4);
  }
  if (uVar5 != 0) {
    return (ulonglong)uVar5;
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80(param_2,auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18089c1fb(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong in_RAX;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  float *pfVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar18;
  int iVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar20;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float fVar21;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return (undefined8 *)0x1c;
  }
  puVar11 = (undefined8 *)FUN_180899090(*unaff_RDI,unaff_RSI + 0x38);
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  puVar12 = (undefined4 *)FUN_180847820();
  puVar11 = (undefined8 *)0x0;
  uVar9 = *(uint *)(unaff_RDI + 8);
  uVar20 = *puVar12;
  uVar2 = puVar12[1];
  uVar3 = puVar12[2];
  uVar4 = puVar12[3];
  *(undefined4 *)(unaff_RBP + -0x19) = uVar20;
  *(undefined4 *)(unaff_RBP + -0x15) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x11) = uVar3;
  *(undefined4 *)(unaff_RBP + -0xd) = uVar4;
  uVar8 = 0;
  puVar13 = puVar11;
  if (uVar9 < 0x6d) {
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      uVar1 = *unaff_RDI;
      puVar13 = (undefined8 *)FUN_1808aed00(uVar1,unaff_RBP + -0x19,4);
      if ((int)puVar13 != 0) {
        return puVar13;
      }
      puVar13 = (undefined8 *)FUN_1808aed00(uVar1,unaff_RBP + -0x15,2);
      if ((int)puVar13 != 0) {
        return puVar13;
      }
      puVar13 = (undefined8 *)FUN_1808aed00(uVar1,unaff_RBP + -0x13,2);
      if ((int)puVar13 != 0) {
        return puVar13;
      }
      puVar13 = (undefined8 *)FUN_1808aed00(uVar1,unaff_RBP + -0x11,8);
      uVar20 = extraout_XMM0_Da;
    }
    else {
      puVar13 = (undefined8 *)0x1c;
    }
  }
  if ((int)puVar13 != 0) {
    return puVar13;
  }
  if (0x81 < *(uint *)(unaff_RDI + 8)) {
    puVar11 = (undefined8 *)FUN_1808a79f0(uVar20,unaff_RSI + 0x58);
    fVar21 = extraout_XMM0_Da_00;
    if ((int)puVar11 != 0) {
      return puVar11;
    }
    goto LAB_18089c300;
  }
  if (*(uint *)(unaff_RDI + 8) < 0x6a) {
    *(undefined8 *)(unaff_RBP + -0x29) = 0;
    *(undefined8 *)(unaff_RBP + -0x21) = 0;
    uVar9 = FUN_1808a54c0(uVar20,unaff_RBP + -0x29,0);
    puVar13 = (undefined8 *)(ulonglong)uVar9;
    if (uVar9 != 0) {
LAB_18089c40a:
      uVar9 = *(uint *)(unaff_RBP + -0x1d);
      uVar10 = uVar9;
      if ((int)uVar9 < 0) {
        uVar10 = -uVar9;
      }
      iVar19 = *(int *)(unaff_RBP + -0x21);
      if ((int)uVar10 < 0) {
        if (0 < iVar19) {
          return puVar13;
        }
        if ((0 < (int)uVar9) && (*(longlong *)(unaff_RBP + -0x29) != 0)) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBP + -0x29),
                        &UNK_180957f70,0x100,1);
        }
        *(undefined8 *)(unaff_RBP + -0x29) = 0;
        *(undefined4 *)(unaff_RBP + -0x1d) = 0;
        uVar9 = uVar8;
      }
      else {
        puVar11 = *(undefined8 **)(unaff_RBP + -0x29);
      }
      if (iVar19 < 0) {
        lVar18 = (longlong)-iVar19;
        if (iVar19 < 0) {
          lVar17 = (longlong)iVar19 * 0x18 + 0x14 + (longlong)puVar11;
          do {
            puVar12 = (undefined4 *)FUN_180847820();
            uVar20 = puVar12[1];
            uVar2 = puVar12[2];
            uVar3 = puVar12[3];
            *(undefined4 *)(lVar17 + -0x14) = *puVar12;
            *(undefined4 *)(lVar17 + -0x10) = uVar20;
            *(undefined4 *)(lVar17 + -0xc) = uVar2;
            *(undefined4 *)(lVar17 + -8) = uVar3;
            *(undefined8 *)(lVar17 + -4) = 0;
            lVar18 = lVar18 + -1;
            lVar17 = lVar17 + 0x18;
          } while (lVar18 != 0);
          uVar9 = *(uint *)(unaff_RBP + -0x1d);
        }
      }
      *(undefined4 *)(unaff_RBP + -0x21) = 0;
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      if (uVar9 == 0) {
        return puVar13;
      }
      FUN_1808aef40(unaff_RBP + -0x29,0);
      return puVar13;
    }
    iVar19 = *(int *)(unaff_RBP + -0x21);
    fVar21 = extraout_XMM0_Da_03;
    if (iVar19 == 0) {
      puVar13 = *(undefined8 **)(unaff_RBP + -0x29);
    }
    else {
      uVar9 = (int)*(uint *)(unaff_RSI + 0x54) >> 0x1f;
      if ((int)((*(uint *)(unaff_RSI + 0x54) ^ uVar9) - uVar9) < iVar19) {
        uVar9 = FUN_180883750(unaff_RSI + 0x48,iVar19);
        puVar13 = (undefined8 *)(ulonglong)uVar9;
        if (uVar9 != 0) goto LAB_18089c40a;
        iVar19 = *(int *)(unaff_RBP + -0x21);
        fVar21 = extraout_XMM0_Da_04;
      }
      puVar13 = *(undefined8 **)(unaff_RBP + -0x29);
      for (puVar16 = puVar13; (puVar13 <= puVar16 && (puVar16 < puVar13 + (longlong)iVar19 * 3));
          puVar16 = puVar16 + 3) {
        *(undefined8 *)(unaff_RBP + 0x77) = 0;
        uVar9 = FUN_1808aec50(unaff_RSI + 0x48,unaff_RBP + 0x77);
        puVar13 = (undefined8 *)(ulonglong)uVar9;
        if (uVar9 != 0) goto LAB_18089c40a;
        uVar1 = puVar16[1];
        puVar13 = *(undefined8 **)(unaff_RBP + 0x77);
        *puVar13 = *puVar16;
        puVar13[1] = uVar1;
        *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(puVar16 + 2);
        fVar21 = *(float *)((longlong)puVar16 + 0x14) + *(float *)(puVar16 + 2);
        *(float *)((longlong)puVar13 + 0x14) = fVar21;
        *(undefined1 *)(puVar13 + 3) = 1;
        iVar19 = *(int *)(unaff_RBP + -0x21);
        puVar13 = *(undefined8 **)(unaff_RBP + -0x29);
      }
    }
    uVar9 = *(uint *)(unaff_RBP + -0x1d);
    uVar10 = uVar9;
    if ((int)uVar9 < 0) {
      uVar10 = -uVar9;
    }
    if ((int)uVar10 < 0) {
      if (0 < iVar19) goto LAB_18089c586;
      if ((0 < (int)uVar9) && (puVar13 != (undefined8 *)0x0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar13,&UNK_180957f70,0x100,1);
      }
      *(undefined8 *)(unaff_RBP + -0x29) = 0;
      *(undefined4 *)(unaff_RBP + -0x1d) = 0;
      puVar13 = puVar11;
      uVar9 = uVar8;
    }
    if (iVar19 < 0) {
      lVar18 = (longlong)-iVar19;
      if (iVar19 < 0) {
        lVar17 = (longlong)iVar19 * 0x18 + 0x14 + (longlong)puVar13;
        do {
          pfVar14 = (float *)FUN_180847820();
          fVar21 = *pfVar14;
          fVar5 = pfVar14[1];
          fVar6 = pfVar14[2];
          fVar7 = pfVar14[3];
          *(float *)(lVar17 + -0x14) = fVar21;
          *(float *)(lVar17 + -0x10) = fVar5;
          *(float *)(lVar17 + -0xc) = fVar6;
          *(float *)(lVar17 + -8) = fVar7;
          *(undefined8 *)(lVar17 + -4) = 0;
          lVar18 = lVar18 + -1;
          lVar17 = lVar17 + 0x18;
        } while (lVar18 != 0);
        uVar9 = *(uint *)(unaff_RBP + -0x1d);
      }
    }
    *(undefined4 *)(unaff_RBP + -0x21) = 0;
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
    }
    if (uVar9 != 0) {
      fVar21 = (float)FUN_1808aef40(unaff_RBP + -0x29,0);
    }
  }
  else {
    puVar11 = (undefined8 *)FUN_1808a5780(uVar20,unaff_RSI + 0x48);
    fVar21 = extraout_XMM0_Da_02;
    if ((int)puVar11 != 0) {
      return puVar11;
    }
  }
LAB_18089c586:
  for (uVar15 = *(ulonglong *)(unaff_RSI + 0x48);
      (*(ulonglong *)(unaff_RSI + 0x48) <= uVar15 &&
      (uVar15 < (longlong)*(int *)(unaff_RSI + 0x50) * 0x1c + *(ulonglong *)(unaff_RSI + 0x48)));
      uVar15 = uVar15 + 0x1c) {
    fVar21 = (float)FUN_1807d3e20(unaff_RSI + 0x58);
  }
LAB_18089c300:
  if ((0x70 < *(uint *)(unaff_RDI + 8)) && (uVar8 = 0x1c, *(int *)(unaff_RDI[1] + 0x18) == 0)) {
    uVar8 = FUN_1808aed00(*unaff_RDI,unaff_RSI + 0x68,4);
    fVar21 = extraout_XMM0_Da_01;
  }
  if (uVar8 != 0) {
    return (undefined8 *)(ulonglong)uVar8;
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80(fVar21,unaff_RBP + -9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18089c22e(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float *pfVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar18;
  int iVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar20;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float fVar21;
  
  puVar11 = (undefined4 *)FUN_180847820();
  puVar13 = (undefined8 *)0x0;
  uVar9 = *(uint *)(unaff_RDI + 8);
  uVar20 = *puVar11;
  uVar2 = puVar11[1];
  uVar3 = puVar11[2];
  uVar4 = puVar11[3];
  *(undefined4 *)(unaff_RBP + -0x19) = uVar20;
  *(undefined4 *)(unaff_RBP + -0x15) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x11) = uVar3;
  *(undefined4 *)(unaff_RBP + -0xd) = uVar4;
  uVar8 = 0;
  puVar12 = puVar13;
  if (uVar9 < 0x6d) {
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      uVar1 = *unaff_RDI;
      puVar12 = (undefined8 *)FUN_1808aed00(uVar1,unaff_RBP + -0x19,4);
      if ((int)puVar12 != 0) {
        return puVar12;
      }
      puVar12 = (undefined8 *)FUN_1808aed00(uVar1,unaff_RBP + -0x15,2);
      if ((int)puVar12 != 0) {
        return puVar12;
      }
      puVar12 = (undefined8 *)FUN_1808aed00(uVar1,unaff_RBP + -0x13,2);
      if ((int)puVar12 != 0) {
        return puVar12;
      }
      puVar12 = (undefined8 *)FUN_1808aed00(uVar1,unaff_RBP + -0x11,8);
      uVar20 = extraout_XMM0_Da;
    }
    else {
      puVar12 = (undefined8 *)0x1c;
    }
  }
  if ((int)puVar12 != 0) {
    return puVar12;
  }
  if (0x81 < *(uint *)(unaff_RDI + 8)) {
    puVar13 = (undefined8 *)FUN_1808a79f0(uVar20,unaff_RSI + 0x58);
    fVar21 = extraout_XMM0_Da_00;
    if ((int)puVar13 != 0) {
      return puVar13;
    }
    goto LAB_18089c300;
  }
  if (*(uint *)(unaff_RDI + 8) < 0x6a) {
    *(undefined8 *)(unaff_RBP + -0x29) = 0;
    *(undefined8 *)(unaff_RBP + -0x21) = 0;
    uVar9 = FUN_1808a54c0(uVar20,unaff_RBP + -0x29,0);
    puVar12 = (undefined8 *)(ulonglong)uVar9;
    if (uVar9 != 0) {
LAB_18089c40a:
      uVar9 = *(uint *)(unaff_RBP + -0x1d);
      uVar10 = uVar9;
      if ((int)uVar9 < 0) {
        uVar10 = -uVar9;
      }
      iVar19 = *(int *)(unaff_RBP + -0x21);
      if ((int)uVar10 < 0) {
        if (0 < iVar19) {
          return puVar12;
        }
        if ((0 < (int)uVar9) && (*(longlong *)(unaff_RBP + -0x29) != 0)) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBP + -0x29),
                        &UNK_180957f70,0x100,1);
        }
        *(undefined8 *)(unaff_RBP + -0x29) = 0;
        *(undefined4 *)(unaff_RBP + -0x1d) = 0;
        uVar9 = uVar8;
      }
      else {
        puVar13 = *(undefined8 **)(unaff_RBP + -0x29);
      }
      if (iVar19 < 0) {
        lVar18 = (longlong)-iVar19;
        if (iVar19 < 0) {
          lVar17 = (longlong)iVar19 * 0x18 + 0x14 + (longlong)puVar13;
          do {
            puVar11 = (undefined4 *)FUN_180847820();
            uVar20 = puVar11[1];
            uVar2 = puVar11[2];
            uVar3 = puVar11[3];
            *(undefined4 *)(lVar17 + -0x14) = *puVar11;
            *(undefined4 *)(lVar17 + -0x10) = uVar20;
            *(undefined4 *)(lVar17 + -0xc) = uVar2;
            *(undefined4 *)(lVar17 + -8) = uVar3;
            *(undefined8 *)(lVar17 + -4) = 0;
            lVar18 = lVar18 + -1;
            lVar17 = lVar17 + 0x18;
          } while (lVar18 != 0);
          uVar9 = *(uint *)(unaff_RBP + -0x1d);
        }
      }
      *(undefined4 *)(unaff_RBP + -0x21) = 0;
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      if (uVar9 == 0) {
        return puVar12;
      }
      FUN_1808aef40(unaff_RBP + -0x29,0);
      return puVar12;
    }
    iVar19 = *(int *)(unaff_RBP + -0x21);
    fVar21 = extraout_XMM0_Da_03;
    if (iVar19 == 0) {
      puVar12 = *(undefined8 **)(unaff_RBP + -0x29);
    }
    else {
      uVar9 = (int)*(uint *)(unaff_RSI + 0x54) >> 0x1f;
      if ((int)((*(uint *)(unaff_RSI + 0x54) ^ uVar9) - uVar9) < iVar19) {
        uVar9 = FUN_180883750(unaff_RSI + 0x48,iVar19);
        puVar12 = (undefined8 *)(ulonglong)uVar9;
        if (uVar9 != 0) goto LAB_18089c40a;
        iVar19 = *(int *)(unaff_RBP + -0x21);
        fVar21 = extraout_XMM0_Da_04;
      }
      puVar12 = *(undefined8 **)(unaff_RBP + -0x29);
      for (puVar16 = puVar12; (puVar12 <= puVar16 && (puVar16 < puVar12 + (longlong)iVar19 * 3));
          puVar16 = puVar16 + 3) {
        *(undefined8 *)(unaff_RBP + 0x77) = 0;
        uVar9 = FUN_1808aec50(unaff_RSI + 0x48,unaff_RBP + 0x77);
        puVar12 = (undefined8 *)(ulonglong)uVar9;
        if (uVar9 != 0) goto LAB_18089c40a;
        uVar1 = puVar16[1];
        puVar12 = *(undefined8 **)(unaff_RBP + 0x77);
        *puVar12 = *puVar16;
        puVar12[1] = uVar1;
        *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar16 + 2);
        fVar21 = *(float *)((longlong)puVar16 + 0x14) + *(float *)(puVar16 + 2);
        *(float *)((longlong)puVar12 + 0x14) = fVar21;
        *(undefined1 *)(puVar12 + 3) = 1;
        iVar19 = *(int *)(unaff_RBP + -0x21);
        puVar12 = *(undefined8 **)(unaff_RBP + -0x29);
      }
    }
    uVar9 = *(uint *)(unaff_RBP + -0x1d);
    uVar10 = uVar9;
    if ((int)uVar9 < 0) {
      uVar10 = -uVar9;
    }
    if ((int)uVar10 < 0) {
      if (0 < iVar19) goto LAB_18089c586;
      if ((0 < (int)uVar9) && (puVar12 != (undefined8 *)0x0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar12,&UNK_180957f70,0x100,1);
      }
      *(undefined8 *)(unaff_RBP + -0x29) = 0;
      *(undefined4 *)(unaff_RBP + -0x1d) = 0;
      puVar12 = puVar13;
      uVar9 = uVar8;
    }
    if (iVar19 < 0) {
      lVar18 = (longlong)-iVar19;
      if (iVar19 < 0) {
        lVar17 = (longlong)iVar19 * 0x18 + 0x14 + (longlong)puVar12;
        do {
          pfVar14 = (float *)FUN_180847820();
          fVar21 = *pfVar14;
          fVar5 = pfVar14[1];
          fVar6 = pfVar14[2];
          fVar7 = pfVar14[3];
          *(float *)(lVar17 + -0x14) = fVar21;
          *(float *)(lVar17 + -0x10) = fVar5;
          *(float *)(lVar17 + -0xc) = fVar6;
          *(float *)(lVar17 + -8) = fVar7;
          *(undefined8 *)(lVar17 + -4) = 0;
          lVar18 = lVar18 + -1;
          lVar17 = lVar17 + 0x18;
        } while (lVar18 != 0);
        uVar9 = *(uint *)(unaff_RBP + -0x1d);
      }
    }
    *(undefined4 *)(unaff_RBP + -0x21) = 0;
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
    }
    if (uVar9 != 0) {
      fVar21 = (float)FUN_1808aef40(unaff_RBP + -0x29,0);
    }
  }
  else {
    puVar13 = (undefined8 *)FUN_1808a5780(uVar20,unaff_RSI + 0x48);
    fVar21 = extraout_XMM0_Da_02;
    if ((int)puVar13 != 0) {
      return puVar13;
    }
  }
LAB_18089c586:
  for (uVar15 = *(ulonglong *)(unaff_RSI + 0x48);
      (*(ulonglong *)(unaff_RSI + 0x48) <= uVar15 &&
      (uVar15 < (longlong)*(int *)(unaff_RSI + 0x50) * 0x1c + *(ulonglong *)(unaff_RSI + 0x48)));
      uVar15 = uVar15 + 0x1c) {
    fVar21 = (float)FUN_1807d3e20(unaff_RSI + 0x58);
  }
LAB_18089c300:
  if ((0x70 < *(uint *)(unaff_RDI + 8)) && (uVar8 = 0x1c, *(int *)(unaff_RDI[1] + 0x18) == 0)) {
    uVar8 = FUN_1808aed00(*unaff_RDI,unaff_RSI + 0x68,4);
    fVar21 = extraout_XMM0_Da_01;
  }
  if (uVar8 != 0) {
    return (undefined8 *)(ulonglong)uVar8;
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80(fVar21,unaff_RBP + -9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18089c2d8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  uint in_EAX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar17;
  int iVar18;
  undefined8 *unaff_R12;
  uint unaff_R15D;
  bool bVar19;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float fVar20;
  
  uVar8 = (uint)unaff_R12;
  if (0x81 < in_EAX) {
    uVar11 = FUN_1808a79f0(param_1,unaff_RSI + 0x58);
    fVar20 = extraout_XMM0_Da;
    if ((int)uVar11 != 0) {
      return uVar11;
    }
    goto LAB_18089c300;
  }
  if (in_EAX < 0x6a) {
    *(undefined8 **)(unaff_RBP + -0x29) = unaff_R12;
    *(undefined8 **)(unaff_RBP + -0x21) = unaff_R12;
    uVar9 = FUN_1808a54c0(param_1,unaff_RBP + -0x29,0);
    uVar11 = (ulonglong)uVar9;
    if (uVar9 != 0) {
LAB_18089c40a:
      uVar9 = *(uint *)(unaff_RBP + -0x1d);
      uVar10 = uVar9;
      if ((int)uVar9 < 0) {
        uVar10 = -uVar9;
      }
      iVar18 = *(int *)(unaff_RBP + -0x21);
      if ((int)uVar10 < 0) {
        if (0 < iVar18) {
          return uVar11;
        }
        if ((0 < (int)uVar9) && (*(longlong *)(unaff_RBP + -0x29) != 0)) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBP + -0x29),
                        &UNK_180957f70,0x100,1);
        }
        *(undefined8 **)(unaff_RBP + -0x29) = unaff_R12;
        *(uint *)(unaff_RBP + -0x1d) = uVar8;
        puVar14 = unaff_R12;
        uVar9 = uVar8;
      }
      else {
        puVar14 = *(undefined8 **)(unaff_RBP + -0x29);
      }
      if (iVar18 < 0) {
        lVar17 = (longlong)-iVar18;
        if (iVar18 < 0) {
          lVar16 = (longlong)iVar18 * 0x18 + 0x14 + (longlong)puVar14;
          do {
            puVar12 = (undefined4 *)FUN_180847820();
            uVar1 = puVar12[1];
            uVar2 = puVar12[2];
            uVar3 = puVar12[3];
            *(undefined4 *)(lVar16 + -0x14) = *puVar12;
            *(undefined4 *)(lVar16 + -0x10) = uVar1;
            *(undefined4 *)(lVar16 + -0xc) = uVar2;
            *(undefined4 *)(lVar16 + -8) = uVar3;
            *(undefined8 **)(lVar16 + -4) = unaff_R12;
            lVar17 = lVar17 + -1;
            lVar16 = lVar16 + 0x18;
          } while (lVar17 != 0);
          uVar9 = *(uint *)(unaff_RBP + -0x1d);
        }
      }
      *(uint *)(unaff_RBP + -0x21) = uVar8;
      if ((int)uVar9 < 0) {
        uVar9 = -uVar9;
      }
      if (uVar9 == 0) {
        return uVar11;
      }
      FUN_1808aef40(unaff_RBP + -0x29,0);
      return uVar11;
    }
    iVar18 = *(int *)(unaff_RBP + -0x21);
    fVar20 = extraout_XMM0_Da_02;
    if (iVar18 == 0) {
      puVar14 = *(undefined8 **)(unaff_RBP + -0x29);
    }
    else {
      uVar9 = (int)*(uint *)(unaff_RSI + 0x54) >> 0x1f;
      if ((int)((*(uint *)(unaff_RSI + 0x54) ^ uVar9) - uVar9) < iVar18) {
        uVar9 = FUN_180883750(unaff_RSI + 0x48,iVar18);
        uVar11 = (ulonglong)uVar9;
        if (uVar9 != 0) goto LAB_18089c40a;
        iVar18 = *(int *)(unaff_RBP + -0x21);
        fVar20 = extraout_XMM0_Da_03;
      }
      puVar14 = *(undefined8 **)(unaff_RBP + -0x29);
      for (puVar15 = puVar14; (puVar14 <= puVar15 && (puVar15 < puVar14 + (longlong)iVar18 * 3));
          puVar15 = puVar15 + 3) {
        *(undefined8 **)(unaff_RBP + 0x77) = unaff_R12;
        uVar9 = FUN_1808aec50(unaff_RSI + 0x48,unaff_RBP + 0x77);
        uVar11 = (ulonglong)uVar9;
        if (uVar9 != 0) goto LAB_18089c40a;
        uVar7 = puVar15[1];
        puVar14 = *(undefined8 **)(unaff_RBP + 0x77);
        *puVar14 = *puVar15;
        puVar14[1] = uVar7;
        *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar15 + 2);
        fVar20 = *(float *)((longlong)puVar15 + 0x14) + *(float *)(puVar15 + 2);
        *(float *)((longlong)puVar14 + 0x14) = fVar20;
        *(undefined1 *)(puVar14 + 3) = 1;
        iVar18 = *(int *)(unaff_RBP + -0x21);
        puVar14 = *(undefined8 **)(unaff_RBP + -0x29);
      }
    }
    uVar9 = *(uint *)(unaff_RBP + -0x1d);
    uVar10 = uVar9;
    if ((int)uVar9 < 0) {
      uVar10 = -uVar9;
    }
    if ((int)uVar10 < 0) {
      if (0 < iVar18) goto LAB_18089c586;
      if ((0 < (int)uVar9) && (puVar14 != (undefined8 *)0x0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar14,&UNK_180957f70,0x100,1);
      }
      *(undefined8 **)(unaff_RBP + -0x29) = unaff_R12;
      *(uint *)(unaff_RBP + -0x1d) = uVar8;
      puVar14 = unaff_R12;
      uVar9 = uVar8;
    }
    if (iVar18 < 0) {
      lVar17 = (longlong)-iVar18;
      if (iVar18 < 0) {
        lVar16 = (longlong)iVar18 * 0x18 + 0x14 + (longlong)puVar14;
        do {
          pfVar13 = (float *)FUN_180847820();
          fVar20 = *pfVar13;
          fVar4 = pfVar13[1];
          fVar5 = pfVar13[2];
          fVar6 = pfVar13[3];
          *(float *)(lVar16 + -0x14) = fVar20;
          *(float *)(lVar16 + -0x10) = fVar4;
          *(float *)(lVar16 + -0xc) = fVar5;
          *(float *)(lVar16 + -8) = fVar6;
          *(undefined8 **)(lVar16 + -4) = unaff_R12;
          lVar17 = lVar17 + -1;
          lVar16 = lVar16 + 0x18;
        } while (lVar17 != 0);
        uVar9 = *(uint *)(unaff_RBP + -0x1d);
      }
    }
    *(uint *)(unaff_RBP + -0x21) = uVar8;
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
    }
    if (uVar9 != 0) {
      fVar20 = (float)FUN_1808aef40(unaff_RBP + -0x29,0);
    }
  }
  else {
    uVar11 = FUN_1808a5780(param_1,unaff_RSI + 0x48);
    fVar20 = extraout_XMM0_Da_01;
    if ((int)uVar11 != 0) {
      return uVar11;
    }
  }
LAB_18089c586:
  for (uVar11 = *(ulonglong *)(unaff_RSI + 0x48);
      (*(ulonglong *)(unaff_RSI + 0x48) <= uVar11 &&
      (uVar11 < (longlong)*(int *)(unaff_RSI + 0x50) * 0x1c + *(ulonglong *)(unaff_RSI + 0x48)));
      uVar11 = uVar11 + 0x1c) {
    fVar20 = (float)FUN_1807d3e20(unaff_RSI + 0x58);
  }
LAB_18089c300:
  if ((0x70 < *(uint *)(unaff_RDI + 8)) &&
     (bVar19 = *(uint *)(unaff_RDI[1] + 0x18) == uVar8, uVar8 = unaff_R15D, bVar19)) {
    uVar8 = FUN_1808aed00(*unaff_RDI,unaff_RSI + 0x68,4);
    fVar20 = extraout_XMM0_Da_00;
  }
  if (uVar8 != 0) {
    return (ulonglong)uVar8;
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80(fVar20,unaff_RBP + -9);
}








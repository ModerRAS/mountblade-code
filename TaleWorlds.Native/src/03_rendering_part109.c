#include "TaleWorlds.Native.Split.h"

// 03_rendering_part109.c - 5 个函数

// 函数: void FUN_180332560(longlong param_1,longlong param_2,undefined4 param_3)
void FUN_180332560(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 **ppuVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lStackX_10;
  undefined4 auStackX_18 [2];
  uint auStackX_20 [2];
  longlong lStack_138;
  undefined4 *puStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  uint uStack_118;
  ulonglong uStack_110;
  undefined4 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined4 **ppuStack_e0;
  char acStack_d8 [4];
  uint uStack_d4;
  char acStack_d0 [4];
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 *puStack_b8;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined4 *puStack_98;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  longlong lStack_60;
  undefined4 uStack_50;
  
  uStack_a0 = 0xfffffffffffffffe;
  auStackX_20[0] = 0;
  lStackX_10 = param_2;
  auStackX_18[0] = param_3;
  fread(auStackX_20,4,1,*(undefined8 *)(param_2 + 8));
  if (auStackX_20[0] != 0) {
    ppuStack_e0 = &puStack_108;
    uStack_c0 = &lStackX_10;
    puStack_b8 = auStackX_18;
    pcStack_f8 = FUN_18033cc90;
    puStack_f0 = &UNK_18033cc80;
    uStack_c8 = (undefined *)param_1;
    puStack_108 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc);
    *puStack_108 = (undefined4)uStack_c8;
    puStack_108[1] = uStack_c8._4_4_;
    puStack_108[2] = (undefined4)uStack_c0;
    puStack_108[3] = uStack_c0._4_4_;
    *(undefined4 **)(puStack_108 + 4) = puStack_b8;
    FUN_18015b810((undefined4)uStack_c8,0,auStackX_20[0],1,0xffffffffffffffff,&puStack_108);
  }
  auStackX_20[0] = 0;
  fread(auStackX_20,4,1,*(undefined8 *)(lStackX_10 + 8));
  if (auStackX_20[0] != 0) {
    puVar2 = (uint *)FUN_18062b420(_DAT_180c8ed18,(ulonglong)auStackX_20[0] * 4,3);
    ppuStack_e0 = (undefined4 **)puVar2;
    fread(puVar2,4,auStackX_20[0],*(undefined8 *)(lStackX_10 + 8));
    uStack_110 = 0;
    uStack_e8 = 0;
    fread(&uStack_e8,8,1,*(undefined8 *)(lStackX_10 + 8));
    fread(&uStack_110,8,1,*(undefined8 *)(lStackX_10 + 8));
    puStack_108 = (undefined4 *)0x0;
    uStack_100 = 0;
    pcStack_f8 = (code *)0x0;
    puStack_f0 = (undefined *)CONCAT53(puStack_f0._3_5_,0x30000);
    FUN_180639bf0(&puStack_108,uStack_110);
    puVar6 = puStack_108;
    fread(puStack_108,uStack_110,1,*(undefined8 *)(lStackX_10 + 8));
    lStack_138 = 0;
    puStack_130 = (undefined4 *)0x0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_11e = 3;
    FUN_180639bf0(&lStack_138,uStack_e8);
    lVar9 = lStack_138;
    uStack_c8 = &UNK_1809ff4e0;
    uStack_c0 = (longlong *)CONCAT71(uStack_c0._1_7_,1);
    FUN_18021f710(&uStack_c8,auStack_88,puVar6,uStack_110,lStack_138,uStack_e8);
    uStack_118 = 0;
    ppuVar8 = (undefined4 **)puVar2;
    if (auStackX_20[0] != 0) {
      puVar11 = puStack_130;
      do {
        uVar1 = *puVar2;
        uVar12 = (ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 0x6c8);
        lVar9 = *(longlong *)(param_1 + 0x6c0);
        puVar5 = *(uint **)(lVar9 + uVar12 * 8);
        for (puVar4 = puVar5; puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
          if (uVar1 == *puVar4) {
            lVar7 = *(longlong *)(param_1 + 0x6c8);
            goto LAB_180332829;
          }
        }
        lVar7 = *(longlong *)(param_1 + 0x6c8);
        puVar4 = *(uint **)(lVar9 + lVar7 * 8);
LAB_180332829:
        if (puVar4 == *(uint **)(lVar9 + lVar7 * 8)) {
          uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x80,8,3);
          uVar3 = FUN_18033ac00(uVar3);
          uVar1 = *puVar2;
          uVar12 = (ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 0x6c8);
          for (puVar4 = *(uint **)(*(longlong *)(param_1 + 0x6c0) + uVar12 * 8);
              puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
            if (uVar1 == *puVar4) {
              if (puVar4 != (uint *)0x0) goto LAB_18033290a;
              break;
            }
          }
          FUN_18066c220(param_1 + 0x6d8,acStack_d8,(ulonglong)*(uint *)(param_1 + 0x6c8),
                        *(undefined4 *)(param_1 + 0x6d0),1);
          puVar4 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0x6e4));
          *puVar4 = *puVar2;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          if (acStack_d8[0] != '\0') {
            uVar12 = (ulonglong)uVar1 % (ulonglong)uStack_d4;
            FUN_18033bf30(param_1 + 0x6b8,uStack_d4);
          }
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + uVar12 * 8)
          ;
          *(uint **)(*(longlong *)(param_1 + 0x6c0) + uVar12 * 8) = puVar4;
          *(longlong *)(param_1 + 0x6d0) = *(longlong *)(param_1 + 0x6d0) + 1;
LAB_18033290a:
          *(undefined8 *)(puVar4 + 2) = uVar3;
        }
        else {
          for (; puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
            if (uVar1 == *puVar5) {
              if (puVar5 != (uint *)0x0) goto LAB_1803329a3;
              break;
            }
          }
          FUN_18066c220(param_1 + 0x6d8,acStack_d0,(ulonglong)*(uint *)(param_1 + 0x6c8),
                        *(undefined4 *)(param_1 + 0x6d0),1);
          puVar5 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0x6e4));
          *puVar5 = *puVar2;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          if (acStack_d0[0] != '\0') {
            uVar12 = (ulonglong)uVar1 % (ulonglong)uStack_cc;
            FUN_18033bf30(param_1 + 0x6b8,uStack_cc);
          }
          *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + uVar12 * 8)
          ;
          *(uint **)(*(longlong *)(param_1 + 0x6c0) + uVar12 * 8) = puVar5;
          *(longlong *)(param_1 + 0x6d0) = *(longlong *)(param_1 + 0x6d0) + 1;
LAB_1803329a3:
          uVar3 = *(undefined8 *)(puVar5 + 2);
        }
        puVar6 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3);
        plVar10 = (longlong *)(puVar6 + 0x14);
        *plVar10 = (longlong)&UNK_18098bcb0;
        *(undefined8 *)(puVar6 + 0x16) = 0;
        puVar6[0x18] = 0;
        *plVar10 = (longlong)&UNK_1809fcc58;
        *(undefined4 **)(puVar6 + 0x16) = puVar6 + 0x1a;
        puVar6[0x18] = 0;
        *(undefined1 *)(puVar6 + 0x1a) = 0;
        ppuStack_a8 = (undefined **)plVar10;
        puStack_98 = puVar6;
        FUN_180327540(puVar6);
        *puVar6 = *puVar11;
        puVar6[2] = puVar11[1];
        puVar6[3] = puVar11[2];
        puVar6[4] = puVar11[3];
        puVar6[5] = puVar11[4];
        puVar6[6] = puVar11[5];
        puVar6[7] = puVar11[6];
        puVar6[8] = puVar11[7];
        puVar6[9] = puVar11[8];
        puVar6[10] = puVar11[9];
        puVar6[0xb] = puVar11[10];
        puVar6[0xc] = puVar11[0xb];
        puVar6[0xd] = puVar11[0xc];
        puVar6[0xe] = puVar11[0xd];
        puVar6[0xf] = puVar11[0xe];
        puVar6[0x10] = puVar11[0xf];
        puVar6[0x11] = puVar11[0x10];
        puVar6[0x12] = puVar11[0x11];
        uVar1 = puVar11[0x12];
        puVar11 = puVar11 + 0x13;
        if (uVar1 != 0) {
          puStack_130 = puVar11;
          (**(code **)(*plVar10 + 0x18))(plVar10,puVar11,uVar1);
          puVar11 = (undefined4 *)((longlong)puVar11 + (ulonglong)uVar1);
        }
        puStack_130 = puVar11;
        FUN_18033ac70(uVar3,puVar6,auStackX_18[0]);
        uStack_118 = uStack_118 + 1;
        puVar2 = puVar2 + 1;
        ppuVar8 = ppuStack_e0;
        lVar9 = lStack_138;
        puVar6 = puStack_108;
      } while (uStack_118 < auStackX_20[0]);
    }
    if (ppuVar8 != (undefined4 **)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(ppuVar8);
    }
    puStack_68 = &UNK_180a3c3e0;
    ppuStack_a8 = &puStack_68;
    if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_60 = 0;
    uStack_50 = 0;
    puStack_68 = &UNK_18098bcb0;
    if (((char)uStack_120 == '\0') && (lVar9 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar9);
    }
    if (((char)puStack_f0 == '\0') && (puVar6 != (undefined4 *)0x0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180332c20(longlong *param_1,int param_2,int param_3)
void FUN_180332c20(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *puVar4;
  uint *puVar5;
  undefined **ppuVar6;
  uint *puVar7;
  undefined **ppuVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  undefined1 auStack_248 [32];
  longlong lStack_228;
  undefined8 uStack_220;
  uint uStack_218;
  uint uStack_214;
  ulonglong uStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  char cStack_1f0;
  undefined1 uStack_1ef;
  undefined1 uStack_1ee;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  undefined2 uStack_1d0;
  undefined1 uStack_1ce;
  undefined8 uStack_1c8;
  longlong alStack_1c0 [3];
  undefined2 uStack_1a8;
  undefined1 uStack_1a6;
  char acStack_1a0 [4];
  uint uStack_19c;
  char acStack_198 [4];
  uint uStack_194;
  longlong *plStack_190;
  uint *puStack_188;
  ulonglong *puStack_180;
  uint *puStack_178;
  ulonglong *puStack_170;
  ulonglong uStack_168;
  undefined **ppuStack_160;
  ulonglong uStack_150;
  ulonglong uStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined1 uStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined1 *puStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined **ppuStack_d8;
  undefined1 auStack_c8 [32];
  undefined *puStack_a8;
  longlong lStack_a0;
  undefined4 uStack_90;
  undefined1 auStack_88 [80];
  ulonglong uStack_38;
  
  if (param_3 <= param_2) {
    return;
  }
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  uVar13 = (ulonglong)(uint)(param_3 - param_2);
  plStack_190 = param_1;
  do {
    alStack_1c0[0] = 0;
    alStack_1c0[1] = 0;
    alStack_1c0[2] = 0;
    uStack_1a8 = 0;
    uStack_1a6 = 3;
    uStack_210 = 0;
    uStack_1c8 = 0;
    uStack_218 = 0;
    lVar10 = *param_1 + 0xa70;
    uStack_168 = uVar13;
    lStack_e0 = lVar10;
    iVar3 = _Mtx_lock(lVar10);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    fread(&uStack_218,4,1,*(undefined8 *)(*(longlong *)param_1[1] + 8));
    if (uStack_218 == 0) {
      puStack_178 = (uint *)0x0;
    }
    else {
      puStack_178 = (uint *)FUN_18062b420(_DAT_180c8ed18,(ulonglong)uStack_218 * 4,3);
    }
    puVar7 = puStack_178;
    fread(puStack_178,4,uStack_218,*(undefined8 *)(*(longlong *)param_1[1] + 8));
    if (uStack_218 == 0) {
      puStack_170 = (ulonglong *)0x0;
    }
    else {
      puStack_170 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,(ulonglong)uStack_218 * 8,3);
    }
    puVar4 = puStack_170;
    fread(puStack_170,8,uStack_218,*(undefined8 *)(*(longlong *)param_1[1] + 8));
    fread(&uStack_1c8,8,1,*(undefined8 *)(*(longlong *)param_1[1] + 8));
    fread(&uStack_210,8,1,*(undefined8 *)(*(longlong *)param_1[1] + 8));
    FUN_180639bf0(alStack_1c0,uStack_210);
    lVar12 = alStack_1c0[0];
    fread(alStack_1c0[0],uStack_210,1,*(undefined8 *)(*(longlong *)param_1[1] + 8));
    iVar3 = _Mtx_unlock(lVar10);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    _Mtx_init_in_situ(auStack_88,2);
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1ce = 3;
    FUN_180639bf0(&lStack_1e8,uStack_1c8);
    lVar10 = lStack_1e8;
    puStack_138 = &UNK_1809ff4e0;
    uStack_130 = 1;
    uStack_220 = uStack_1c8;
    lStack_228 = lStack_1e8;
    FUN_18021f710(&puStack_138,auStack_c8,lVar12,uStack_210);
    uStack_214 = 0;
    puVar5 = puVar7;
    puVar15 = puVar4;
    if (uStack_218 != 0) {
      uStack_148 = (lStack_1d8 - lStack_1e0) + lVar10;
      do {
        uVar1 = *puVar7;
        uVar11 = (ulonglong)uVar1;
        uVar13 = *puVar4;
        lVar10 = *param_1 + 0xa20;
        puStack_188 = puVar7;
        puStack_180 = puVar4;
        uStack_150 = uVar13;
        lStack_f0 = lVar10;
        iVar3 = _Mtx_lock(lVar10);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        lVar12 = *param_1;
        uVar14 = uVar11 % (ulonglong)*(uint *)(lVar12 + 0xa00);
        lVar2 = *(longlong *)(lVar12 + 0x9f8);
        puVar7 = *(uint **)(lVar2 + uVar14 * 8);
        for (puVar5 = puVar7; puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
          if (uVar1 == *puVar5) {
            lVar9 = *(longlong *)(lVar12 + 0xa00);
            goto LAB_180332f24;
          }
        }
        lVar9 = *(longlong *)(lVar12 + 0xa00);
        puVar5 = *(uint **)(lVar2 + lVar9 * 8);
LAB_180332f24:
        if (puVar5 == *(uint **)(lVar2 + lVar9 * 8)) {
          ppuVar6 = (undefined **)FUN_18062b1e0(_DAT_180c8ed18,0x80,8,3);
          *(undefined4 *)(ppuVar6 + 4) = 0x3f800000;
          *(undefined4 *)((longlong)ppuVar6 + 0x24) = 0x40000000;
          *(undefined4 *)((longlong)ppuVar6 + 0x2c) = 3;
          ppuVar6[2] = (undefined *)0x1;
          ppuVar6[1] = &DAT_180be0000;
          ppuVar6[3] = (undefined *)0x0;
          *(undefined4 *)(ppuVar6 + 5) = 0;
          ppuStack_140 = ppuVar6 + 6;
          ppuStack_160 = ppuVar6;
          _Mtx_init_in_situ();
          lVar12 = *plStack_190;
          uVar13 = uVar11 % (ulonglong)*(uint *)(lVar12 + 0xa00);
          for (puVar7 = *(uint **)(*(longlong *)(lVar12 + 0x9f8) + uVar13 * 8);
              puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
            if (uVar1 == *puVar7) {
              if (puVar7 != (uint *)0x0) goto LAB_180333054;
              break;
            }
          }
          lStack_228 = CONCAT44(lStack_228._4_4_,1);
          FUN_18066c220(lVar12 + 0xa10,acStack_1a0,(ulonglong)*(uint *)(lVar12 + 0xa00),
                        *(undefined4 *)(lVar12 + 0xa08));
          puVar7 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(lVar12 + 0xa1c));
          *puVar7 = uVar1;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          if (acStack_1a0[0] != '\0') {
            uVar13 = uVar11 % (ulonglong)uStack_19c;
            FUN_18033bf30(lVar12 + 0x9f0,uStack_19c);
          }
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(*(longlong *)(lVar12 + 0x9f8) + uVar13 * 8);
          *(uint **)(*(longlong *)(lVar12 + 0x9f8) + uVar13 * 8) = puVar7;
          *(longlong *)(lVar12 + 0xa08) = *(longlong *)(lVar12 + 0xa08) + 1;
LAB_180333054:
          *(undefined ***)(puVar7 + 2) = ppuVar6;
          uVar13 = uStack_150;
        }
        else {
          for (; puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
            if (uVar1 == *puVar7) {
              if (puVar7 != (uint *)0x0) goto LAB_1803330f8;
              break;
            }
          }
          lStack_228 = CONCAT44(lStack_228._4_4_,1);
          FUN_18066c220(lVar12 + 0xa10,acStack_198,(ulonglong)*(uint *)(lVar12 + 0xa00),
                        *(undefined4 *)(lVar12 + 0xa08));
          puVar7 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(lVar12 + 0xa1c));
          *puVar7 = uVar1;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          if (acStack_198[0] != '\0') {
            uVar14 = uVar11 % (ulonglong)uStack_194;
            FUN_18033bf30(lVar12 + 0x9f0,uStack_194);
          }
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(*(longlong *)(lVar12 + 0x9f8) + uVar14 * 8);
          *(uint **)(*(longlong *)(lVar12 + 0x9f8) + uVar14 * 8) = puVar7;
          *(longlong *)(lVar12 + 0xa08) = *(longlong *)(lVar12 + 0xa08) + 1;
LAB_1803330f8:
          ppuVar6 = *(undefined ***)(puVar7 + 2);
        }
        iVar3 = _Mtx_unlock(lVar10);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        ppuVar8 = (undefined **)FUN_18062b1e0(_DAT_180c8ed18,0x1b0,8,3);
        ppuStack_d8 = ppuVar8 + 10;
        *ppuStack_d8 = &UNK_18098bcb0;
        ppuVar8[0xb] = (undefined *)0x0;
        *(undefined4 *)(ppuVar8 + 0xc) = 0;
        *ppuStack_d8 = &UNK_1809fcc58;
        ppuVar8[0xb] = (undefined *)(ppuVar8 + 0xd);
        *(undefined4 *)(ppuVar8 + 0xc) = 0;
        *(undefined1 *)(ppuVar8 + 0xd) = 0;
        ppuStack_128 = ppuVar8 + 0x18;
        ppuStack_120 = ppuVar8 + 0x1a;
        *ppuStack_120 = &UNK_18098bcb0;
        ppuVar8[0x1b] = (undefined *)0x0;
        *(undefined4 *)(ppuVar8 + 0x1c) = 0;
        *ppuStack_120 = &UNK_1809fcc58;
        ppuVar8[0x1b] = (undefined *)(ppuVar8 + 0x1d);
        *(undefined4 *)(ppuVar8 + 0x1c) = 0;
        *(undefined1 *)(ppuVar8 + 0x1d) = 0;
        ppuStack_118 = ppuVar8 + 0x25;
        *ppuStack_118 = (undefined *)0x0;
        ppuVar8[0x26] = (undefined *)0x0;
        ppuVar8[0x27] = (undefined *)0x0;
        *(undefined4 *)(ppuVar8 + 0x28) = 3;
        ppuStack_110 = ppuVar8 + 0x29;
        *ppuStack_110 = (undefined *)0x0;
        ppuVar8[0x2a] = (undefined *)0x0;
        ppuVar8[0x2b] = (undefined *)0x0;
        *(undefined4 *)(ppuVar8 + 0x2c) = 3;
        *ppuStack_128 = (undefined *)0x0;
        *(undefined4 *)(ppuVar8 + 0x19) = 0;
        ppuStack_108 = ppuVar8 + 0x2e;
        *ppuStack_108 = (undefined *)0x0;
        ppuVar8[0x2f] = (undefined *)0x0;
        ppuVar8[0x30] = (undefined *)0x0;
        *(undefined4 *)(ppuVar8 + 0x31) = 3;
        ppuStack_100 = ppuVar8 + 0x32;
        *ppuStack_100 = (undefined *)0x0;
        ppuVar8[0x33] = (undefined *)0x0;
        ppuVar8[0x34] = (undefined *)0x0;
        *(undefined4 *)(ppuVar8 + 0x35) = 3;
        *(undefined4 *)ppuVar8 = 0;
        *(undefined4 *)(ppuVar8 + 0x15) = 0;
        *(undefined8 *)((longlong)ppuVar8 + 0x44) = 0;
        *(undefined1 *)(ppuVar8 + 0x16) = 0;
        *(undefined1 *)((longlong)ppuVar8 + 0x4c) = 0;
        puStack_f8 = auStack_88;
        ppuStack_160 = ppuVar8;
        iVar3 = _Mtx_lock(auStack_88);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        lVar10 = lStack_1e8;
        uStack_1ee = 3;
        lStack_208 = lStack_1e8;
        lStack_200 = lStack_1e0;
        lStack_1f8 = lStack_1d8;
        _cStack_1f0 = CONCAT11((char)((ushort)uStack_1d0 >> 8),1);
        if (uStack_148 <= uVar13) {
          FUN_180639bf0(&lStack_208,(lStack_1e0 - lStack_1e8) + uVar13);
        }
        lStack_200 = lStack_200 + uVar13;
        FUN_180336d40(ppuVar8,&lStack_208);
        if ((cStack_1f0 == '\0') && (lStack_208 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        iVar3 = _Mtx_unlock(auStack_88);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        param_1 = plStack_190;
        FUN_18033ac70(ppuVar6,ppuVar8,*(undefined4 *)plStack_190[2]);
        uStack_214 = uStack_214 + 1;
        puVar7 = puStack_188 + 1;
        puVar4 = puStack_180 + 1;
        lVar12 = alStack_1c0[0];
        uVar13 = uStack_168;
        puVar5 = puStack_178;
        puVar15 = puStack_170;
        puStack_188 = puVar7;
        puStack_180 = puVar4;
      } while (uStack_214 < uStack_218);
    }
    if (puVar5 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
    if (puVar15 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar15);
    }
    ppuStack_160 = &puStack_a8;
    puStack_a8 = &UNK_180a3c3e0;
    if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_a0 = 0;
    uStack_90 = 0;
    puStack_a8 = &UNK_18098bcb0;
    if (((char)uStack_1d0 == '\0') && (lVar10 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar10);
    }
    _Mtx_destroy_in_situ(auStack_88);
    if (((char)uStack_1a8 == '\0') && (lVar12 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar12);
    }
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) {
      uStack_168 = uVar13;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_248);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180333460(longlong param_1)
void FUN_180333460(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar12;
  double dVar13;
  double dVar14;
  uint uStackX_8;
  longlong lStackX_20;
  undefined8 uVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  undefined4 uVar19;
  int *piVar11;
  
  uVar15 = 0xfffffffffffffffe;
  dVar14 = (double)*(longlong *)(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x150) < 0) {
    dVar14 = dVar14 + 1.8446744073709552e+19;
  }
  dVar13 = dVar14 - 2.0;
  if (dVar13 <= 0.0) {
    dVar13 = 0.0;
  }
  lVar2 = *(longlong *)(param_1 + 0x160) + -1;
  dVar1 = (double)lVar2;
  if (lVar2 < 0) {
    dVar1 = dVar1 + 1.8446744073709552e+19;
  }
  if (dVar14 + 2.0 <= dVar1) {
    dVar1 = dVar14 + 2.0;
  }
  piVar16 = (int *)0x0;
  piVar17 = (int *)0x0;
  piVar4 = (int *)0x0;
  piVar18 = (int *)0x0;
  uVar19 = 3;
  uStackX_8 = 0;
  lVar2 = *(longlong *)(param_1 + 0x230);
  piVar6 = (int *)0x0;
  piVar3 = (int *)0x0;
  if (*(longlong *)(param_1 + 0x238) - lVar2 >> 2 != 0) {
    lStackX_20 = 0;
    piVar5 = piVar6;
    piVar9 = piVar3;
    piVar11 = piVar4;
    do {
      iVar8 = *(int *)(lStackX_20 + lVar2);
      piVar3 = piVar9;
      uVar10 = (uint)piVar11;
      if ((iVar8 < (int)dVar13) || (piVar6 = piVar5, (int)dVar1 <= iVar8)) {
        if (piVar5 < piVar4) {
          piVar6 = piVar5 + 1;
          *piVar5 = iVar8;
          piVar17 = piVar6;
        }
        else {
          lVar12 = (longlong)piVar5 - (longlong)piVar9 >> 2;
          if (lVar12 == 0) {
            lVar12 = 1;
LAB_180333594:
            piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 4,
                                          CONCAT71((int7)((ulonglong)lStackX_20 >> 8),3),piVar11,
                                          uVar15,piVar16,piVar17,piVar18,uVar19);
          }
          else {
            lVar12 = lVar12 * 2;
            if (lVar12 != 0) goto LAB_180333594;
            piVar3 = (int *)0x0;
          }
          if (piVar9 != piVar5) {
                    // WARNING: Subroutine does not return
            memmove(piVar3,piVar9,(longlong)piVar5 - (longlong)piVar9);
          }
          *piVar3 = *(int *)(lStackX_20 + lVar2);
          piVar6 = piVar3 + 1;
          if (piVar9 != (int *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(piVar9);
          }
          piVar4 = piVar3 + lVar12;
          piVar16 = piVar3;
          piVar17 = piVar6;
          piVar18 = piVar4;
          uVar10 = uStackX_8;
        }
      }
      uStackX_8 = uVar10 + 1;
      piVar11 = (int *)(ulonglong)uStackX_8;
      lStackX_20 = lStackX_20 + 4;
      lVar2 = *(longlong *)(param_1 + 0x230);
      piVar5 = piVar6;
      piVar9 = piVar3;
    } while ((ulonglong)(longlong)(int)uStackX_8 <
             (ulonglong)(*(longlong *)(param_1 + 0x238) - lVar2 >> 2));
  }
  iVar8 = 0;
  uVar7 = (longlong)piVar6 - (longlong)piVar3 >> 2;
  piVar4 = piVar3;
  if (uVar7 != 0) {
    do {
      FUN_180333a00(param_1,*piVar4);
      piVar6 = *(int **)(param_1 + 0x238);
      for (piVar16 = *(int **)(param_1 + 0x230); (piVar16 != piVar6 && (*piVar16 != *piVar4));
          piVar16 = piVar16 + 1) {
      }
      piVar17 = piVar16 + 1;
      if (piVar17 < piVar6) {
                    // WARNING: Subroutine does not return
        memmove(piVar16,piVar17,(longlong)piVar6 - (longlong)piVar17);
      }
      *(int **)(param_1 + 0x238) = piVar6 + -1;
      iVar8 = iVar8 + 1;
      piVar4 = piVar4 + 1;
    } while ((ulonglong)(longlong)iVar8 < uVar7);
  }
  if (piVar3 != (int *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(piVar3);
  }
  return;
}





// 函数: void FUN_1803336f0(longlong param_1)
void FUN_1803336f0(longlong param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  dVar1 = (double)*(longlong *)(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x150) < 0) {
    dVar1 = dVar1 + 1.8446744073709552e+19;
  }
  lVar3 = *(longlong *)(param_1 + 0x160) + -1;
  dVar2 = (double)lVar3;
  if (lVar3 < 0) {
    dVar2 = dVar2 + 1.8446744073709552e+19;
  }
  if (dVar1 + 2.0 <= dVar2) {
    dVar2 = dVar1 + 2.0;
  }
  FUN_180333460();
  dVar1 = dVar1 - 2.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  iVar6 = (int)dVar1;
  lVar3 = (longlong)iVar6;
  do {
    if ((int)dVar2 <= lVar3) {
      return;
    }
    piVar4 = *(int **)(param_1 + 0x230);
    iVar5 = 0;
    uVar7 = *(longlong *)(param_1 + 0x238) - (longlong)piVar4 >> 2;
    if (uVar7 != 0) {
      do {
        if (*piVar4 == iVar6) goto LAB_1803337df;
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
      } while ((ulonglong)(longlong)iVar5 < uVar7);
    }
    FUN_18032cf30(param_1,*(undefined8 *)(param_1 + 0x200),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x260) + lVar3 * 8),iVar6);
LAB_1803337df:
    iVar6 = iVar6 + 1;
    lVar3 = lVar3 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180333810(longlong param_1,char param_2)
void FUN_180333810(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  ulonglong uVar9;
  char cVar10;
  longlong *plStackX_8;
  longlong *plStackX_18;
  longlong *plStackX_20;
  undefined8 uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  uVar9 = 10;
  if (param_2 != '\0') {
    uVar9 = 0;
  }
  piVar8 = *(int **)(param_1 + 0x230);
  lVar6 = *(longlong *)(param_1 + 0x238) - (longlong)piVar8;
  while( true ) {
    if ((ulonglong)(lVar6 >> 2) <= uVar9) {
      return;
    }
    iVar2 = *piVar8;
    puVar3 = *(undefined8 **)(param_1 + 0x148);
    if (puVar3 != (undefined8 *)0x0) {
      if ((undefined *)*puVar3 == &UNK_180a1b2d8) {
        cVar10 = *(char *)(puVar3 + 2) != '\0';
      }
      else {
        cVar10 = (**(code **)((undefined *)*puVar3 + 0x68))();
      }
      uVar5 = _DAT_180c82868;
      if (cVar10 == '\0') {
        plStackX_8 = *(longlong **)(param_1 + 0x148);
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_18005e6a0(uVar5,&plStackX_8,0);
      }
    }
    if (param_2 == '\0') {
      plVar7 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3,uVar11);
      plStackX_18 = plVar7;
      FUN_180049830(plVar7);
      *plVar7 = (longlong)&UNK_180a1b2d8;
      *(int *)(plVar7 + 0x18) = iVar2;
      plVar7[0x19] = param_1;
      plStackX_20 = plVar7;
      (**(code **)(*plVar7 + 0x28))(plVar7);
      plStackX_20 = *(longlong **)(param_1 + 0x148);
      *(longlong **)(param_1 + 0x148) = plVar7;
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      uVar5 = _DAT_180c82868;
      plStackX_18 = *(longlong **)(param_1 + 0x148);
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x28))();
      }
      FUN_18005e110(uVar5,&plStackX_18);
    }
    else {
      FUN_1803368b0(param_1,iVar2);
    }
    piVar4 = *(int **)(param_1 + 0x238);
    for (piVar8 = *(int **)(param_1 + 0x230); (piVar8 != piVar4 && (*piVar8 != iVar2));
        piVar8 = piVar8 + 1) {
    }
    piVar1 = piVar8 + 1;
    if (piVar1 < piVar4) break;
    *(int **)(param_1 + 0x238) = piVar4 + -1;
    piVar8 = *(int **)(param_1 + 0x230);
    lVar6 = (longlong)(piVar4 + -1) - (longlong)piVar8;
  }
                    // WARNING: Subroutine does not return
  memmove(piVar8,piVar1,(longlong)piVar4 - (longlong)piVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




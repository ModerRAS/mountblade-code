#include "TaleWorlds.Native.Split.h"

// 99_part_10_part015.c - 1 个函数

// 函数: void FUN_1806ab905(void)
void FUN_1806ab905(void)

{
  undefined8 *unaff_RBX;
  
  *unaff_RBX = &UNK_18094a9a8;
  unaff_RBX[1] = &DAT_18098bc73;
  unaff_RBX[2] = &DAT_18098bc73;
  *(undefined4 *)(unaff_RBX + 3) = 0xffffffff;
  unaff_RBX[4] = &DAT_18098bc73;
  unaff_RBX[5] = &DAT_18098bc73;
  *(undefined4 *)(unaff_RBX + 6) = 0xffffffff;
  unaff_RBX[8] = &DAT_18098bc73;
  unaff_RBX[7] = &DAT_18098bc73;
  *(undefined4 *)(unaff_RBX + 9) = 0;
  *(undefined4 *)((longlong)unaff_RBX + 0x4c) = 0xffffffff;
  unaff_RBX[10] = 0;
  *(undefined1 *)(unaff_RBX + 0xb) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1806ab920(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5,uint param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  uint uVar16;
  char *pcVar17;
  ulonglong uVar18;
  longlong lVar19;
  char cStack_208;
  undefined1 uStack_207;
  undefined1 uStack_206;
  undefined1 uStack_205;
  undefined4 uStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  undefined8 *puStack_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int iStack_140;
  int iStack_13c;
  uint uStack_138;
  uint uStack_134;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  uint uStack_10c;
  undefined1 auStack_108 [8];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  char cStack_b0;
  undefined1 auStack_a8 [112];
  char cStack_38;
  
  lVar10 = FUN_1806aca90(param_1,param_4);
  if ((lVar10 == 0) && (lStack_1e8 = FUN_1806ac530(param_1,param_3), lStack_1e8 != 0)) {
    lVar10 = param_1[0x1c];
    puVar11 = (undefined8 *)
              (**(code **)(*_DAT_180be0050 + 8))
                        (_DAT_180be0050,0x90,&UNK_18094b0e0,&UNK_18094b020,0x45c);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      puStack_1f0 = (undefined8 *)0x0;
    }
    else {
      plVar6 = (longlong *)param_1[0x13];
      puStack_1f0 = puVar11;
      uVar12 = (**(code **)(*plVar6 + 0x18))(plVar6,param_4[1],&cStack_208);
      uStack_1d8 = (**(code **)(*plVar6 + 0x18))(plVar6,*param_4,&uStack_207);
      plVar6 = (longlong *)param_1[0x13];
      uStack_1d0 = uVar12;
      uVar12 = (**(code **)(*plVar6 + 0x18))(plVar6,param_3[1],&uStack_206);
      uVar13 = (**(code **)(*plVar6 + 0x18))(plVar6,*param_3,&uStack_205);
      *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(lStack_1e8 + 0x18);
      puVar11[1] = uVar13;
      puVar11[2] = uVar12;
      *(int *)(puVar11 + 6) = (int)lVar10;
      *(undefined4 *)(puVar11 + 4) = (undefined4)uStack_1d8;
      *(undefined4 *)((longlong)puVar11 + 0x24) = uStack_1d8._4_4_;
      *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_1d0;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_1d0._4_4_;
      puVar11[7] = 0;
      puVar11[8] = 0;
      *(uint *)(puVar11 + 9) = param_6;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      *puVar11 = &UNK_18094af30;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      uStack_1b0 = uVar12;
    }
    uVar18 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    lVar10 = *param_5;
    puStack_1b8 = puVar11;
    if ((int)(param_5[1] - lVar10 >> 5) != 0) {
LAB_1806abb30:
      puVar15 = (undefined8 *)(uVar18 * 0x20 + lVar10);
      uStack_128 = *(undefined4 *)puVar15;
      uStack_124 = *(undefined4 *)((longlong)puVar15 + 4);
      uStack_120 = *(undefined4 *)(puVar15 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar15 + 0xc);
      pbVar8 = (byte *)puVar15[1];
      puVar2 = (undefined8 *)(uVar18 * 0x20 + 0x10 + lVar10);
      uStack_118 = *(undefined4 *)puVar2;
      uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
      pbVar9 = (byte *)*puVar2;
      iVar7 = *(int *)(puVar2 + 1);
      uStack_10c = *(uint *)((longlong)puVar2 + 0xc);
      iStack_110 = iVar7;
      if (*(int *)((longlong)param_1 + 0x3c) != 0) {
        uVar16 = 0x1505;
        bVar3 = *pbVar8;
        pbVar1 = pbVar8;
        while (bVar3 != 0) {
          pbVar1 = pbVar1 + 1;
          uVar16 = uVar16 * 0x21 ^ (uint)bVar3;
          bVar3 = *pbVar1;
        }
        uVar18 = 0x1505;
        bVar3 = *pbVar9;
        pbVar1 = pbVar9;
        while (bVar3 != 0) {
          pbVar1 = pbVar1 + 1;
          uVar18 = (ulonglong)((int)uVar18 * 0x21 ^ (uint)bVar3);
          bVar3 = *pbVar1;
        }
        uVar16 = *(uint *)(param_1[4] +
                          ((uVar18 ^ uVar16) & (ulonglong)(*(int *)((longlong)param_1 + 0x2c) - 1))
                          * 4);
        if (uVar16 != 0xffffffff) {
          do {
            uVar18 = (ulonglong)uVar16;
            lVar10 = param_1[2] + uVar18 * 0x18;
            pcVar14 = *(char **)(param_1[2] + uVar18 * 0x18);
            pcVar17 = "";
            if (pcVar14 != (char *)0x0) {
              pcVar17 = pcVar14;
            }
            lVar19 = (longlong)pbVar8 - (longlong)pcVar17;
            do {
              cVar4 = *pcVar17;
              cVar5 = pcVar17[lVar19];
              if (cVar4 != cVar5) break;
              pcVar17 = pcVar17 + 1;
            } while (cVar5 != '\0');
            if (cVar4 == cVar5) {
              pcVar14 = "";
              if (*(char **)(lVar10 + 8) != (char *)0x0) {
                pcVar14 = *(char **)(lVar10 + 8);
              }
              lVar19 = (longlong)pbVar9 - (longlong)pcVar14;
              do {
                cVar4 = *pcVar14;
                cVar5 = pcVar14[lVar19];
                if (cVar4 != cVar5) break;
                pcVar14 = pcVar14 + 1;
              } while (cVar5 != '\0');
              if (cVar4 == cVar5) goto LAB_1806abc5a;
            }
            uVar16 = *(uint *)(param_1[3] + uVar18 * 4);
            if (uVar16 == 0xffffffff) break;
          } while( true );
        }
      }
      goto LAB_1806abfac;
    }
LAB_1806abf5a:
    if (puVar11 == (undefined8 *)0x0) {
LAB_1806abfce:
      *param_2 = &UNK_18094a9b0;
      param_2[1] = &DAT_18098bc73;
      param_2[2] = &DAT_18098bc73;
      *(undefined4 *)(param_2 + 3) = 0xffffffff;
      param_2[4] = &DAT_18098bc73;
      param_2[5] = &DAT_18098bc73;
      *(undefined4 *)(param_2 + 6) = 0xffffffff;
      param_2[7] = 0;
      param_2[8] = 0;
      *(undefined4 *)(param_2 + 9) = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(undefined1 *)(param_2 + 0xc) = 0;
    }
    else {
      puVar11[10] = puVar11[0x10];
      puVar11[0xb] = puVar11[0x10] + (ulonglong)*(uint *)(puVar11 + 0x11) * 4;
      if (*(uint *)(param_1 + 0x1c) < (*(uint *)((longlong)param_1 + 0xe4) & 0x7fffffff)) {
        *(undefined8 **)(param_1[0x1b] + (ulonglong)*(uint *)(param_1 + 0x1c) * 8) = puVar11;
        *(int *)(param_1 + 0x1c) = (int)param_1[0x1c] + 1;
      }
      else {
        FUN_1806ae030(param_1 + 0x1b,&puStack_1b8);
      }
      uStack_1d8 = *param_4;
      uStack_1d0 = param_4[1];
      puVar15 = (undefined8 *)FUN_1806ab040(param_1 + 0x14,&uStack_1d8,&cStack_208);
      if (cStack_208 == '\0') {
        *puVar15 = uStack_1d8;
        puVar15[1] = uStack_1d0;
        puVar15[2] = puVar11;
      }
      *param_2 = &UNK_18094a9b0;
      uVar12 = puVar11[2];
      param_2[1] = puVar11[1];
      param_2[2] = uVar12;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar11 + 3);
      uVar12 = puVar11[5];
      param_2[4] = puVar11[4];
      param_2[5] = uVar12;
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar11 + 6);
      param_2[7] = puVar11[7];
      param_2[8] = puVar11[8];
      *(undefined4 *)(param_2 + 9) = *(undefined4 *)(puVar11 + 9);
      param_2[10] = puVar11[10];
      param_2[0xb] = puVar11[0xb];
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
  }
  else {
    *param_2 = &UNK_18094a9b0;
    param_2[1] = &DAT_18098bc73;
    param_2[2] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    param_2[4] = &DAT_18098bc73;
    param_2[5] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    param_2[7] = 0;
    param_2[8] = 0;
    *(undefined4 *)(param_2 + 9) = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return param_2;
LAB_1806abc5a:
  if ((((uVar16 != 0xffffffff) && (lVar10 != 0)) &&
      (lVar10 = *(longlong *)(lVar10 + 0x10), lVar10 != 0)) &&
     (uVar16 = *(uint *)(lVar10 + 0x28), uVar16 <= uStack_10c)) {
    if (uStack_1fc < uStack_10c + iVar7) {
      uStack_1fc = uStack_10c + iVar7;
    }
    if (((uStack_1fc <= param_6) &&
        ((**(code **)(*param_1 + 0x58))
                   (param_1,auStack_108,*(undefined4 *)(lStack_1e8 + 0x18),*puVar15),
        cStack_b0 != '\0')) &&
       ((**(code **)(*param_1 + 0x20))(param_1,auStack_a8,uStack_d8), cStack_38 != '\0')) {
      uStack_150 = *(undefined4 *)(lVar10 + 8);
      uStack_14c = *(undefined4 *)(lVar10 + 0xc);
      uStack_148 = *(undefined4 *)(lVar10 + 0x10);
      uStack_144 = *(undefined4 *)(lVar10 + 0x14);
      iStack_140 = *(int *)(lVar10 + 0x18);
      uStack_1f8 = uStack_bc;
      uStack_15c = uStack_bc;
      uStack_200 = uStack_b4;
      uStack_154 = uStack_b4;
      uStack_204 = uStack_b8;
      uStack_158 = uStack_b8;
      puStack_1a8 = &UNK_18094a9a8;
      uStack_190 = uStack_f0;
      uStack_188 = uStack_e8;
      uStack_180 = uStack_e0;
      uStack_178 = uStack_d8;
      uStack_160 = uStack_c0;
      uStack_1a0 = uStack_100;
      uStack_19c = uStack_fc;
      uStack_198 = uStack_f8;
      uStack_194 = uStack_f4;
      uStack_170 = uStack_d0;
      uStack_16c = uStack_cc;
      uStack_168 = uStack_c8;
      uStack_164 = uStack_c4;
      iStack_13c = iVar7;
      uStack_138 = uVar16;
      uStack_134 = uVar16;
      if (*(uint *)(puStack_1f0 + 0xd) < (*(uint *)((longlong)puStack_1f0 + 0x6c) & 0x7fffffff)) {
        puVar11 = (undefined8 *)((ulonglong)*(uint *)(puStack_1f0 + 0xd) * 0x78 + puStack_1f0[0xc]);
        *puVar11 = &UNK_18094a9a8;
        *(undefined4 *)((longlong)puVar11 + 0x4c) = uStack_bc;
        *(undefined4 *)(puVar11 + 10) = uStack_b8;
        *(undefined4 *)((longlong)puVar11 + 0x54) = uStack_b4;
        *(undefined4 *)(puVar11 + 1) = uStack_100;
        *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_fc;
        *(undefined4 *)(puVar11 + 2) = uStack_f8;
        *(undefined4 *)((longlong)puVar11 + 0x14) = uStack_f4;
        *(undefined4 *)(puVar11 + 3) = uStack_f0;
        puVar11[4] = uStack_e8;
        puVar11[5] = uStack_e0;
        *(undefined4 *)(puVar11 + 6) = uStack_d8;
        *(undefined4 *)(puVar11 + 7) = uStack_d0;
        *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_cc;
        *(undefined4 *)(puVar11 + 8) = uStack_c8;
        *(undefined4 *)((longlong)puVar11 + 0x44) = uStack_c4;
        *(undefined4 *)(puVar11 + 9) = uStack_c0;
        *(undefined4 *)(puVar11 + 0xb) = uStack_150;
        *(undefined4 *)((longlong)puVar11 + 0x5c) = uStack_14c;
        *(undefined4 *)(puVar11 + 0xc) = uStack_148;
        *(undefined4 *)((longlong)puVar11 + 100) = uStack_144;
        *(int *)(puVar11 + 0xd) = iStack_140;
        *(int *)((longlong)puVar11 + 0x6c) = iVar7;
        *(uint *)(puVar11 + 0xe) = uVar16;
        *(uint *)((longlong)puVar11 + 0x74) = uVar16;
        *(int *)(puStack_1f0 + 0xd) = *(int *)(puStack_1f0 + 0xd) + 1;
      }
      else {
        FUN_1806ae340(puStack_1f0 + 0xc,&puStack_1a8);
      }
      puVar11 = puStack_1f0;
      uStack_204 = uStack_158;
      uStack_200 = uStack_154;
      if (*(uint *)(puStack_1f0 + 0xf) < (*(uint *)((longlong)puStack_1f0 + 0x7c) & 0x7fffffff)) {
        puVar15 = (undefined8 *)((ulonglong)*(uint *)(puStack_1f0 + 0xf) * 0x78 + puStack_1f0[0xe]);
        *puVar15 = &UNK_18094a9a8;
        *(undefined4 *)(puVar15 + 10) = uStack_158;
        *(undefined4 *)((longlong)puVar15 + 0x54) = uStack_154;
        *(undefined4 *)(puVar15 + 1) = uStack_1a0;
        *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_19c;
        *(undefined4 *)(puVar15 + 2) = uStack_198;
        *(undefined4 *)((longlong)puVar15 + 0x14) = uStack_194;
        *(undefined4 *)(puVar15 + 3) = uStack_190;
        puVar15[4] = uStack_188;
        puVar15[5] = uStack_180;
        *(undefined4 *)(puVar15 + 6) = uStack_178;
        *(undefined4 *)(puVar15 + 7) = uStack_170;
        *(undefined4 *)((longlong)puVar15 + 0x3c) = uStack_16c;
        *(undefined4 *)(puVar15 + 8) = uStack_168;
        *(undefined4 *)((longlong)puVar15 + 0x44) = uStack_164;
        *(undefined4 *)(puVar15 + 9) = uStack_160;
        *(undefined4 *)((longlong)puVar15 + 0x4c) = uStack_15c;
        *(int *)((longlong)puVar15 + 0x6c) = iStack_13c;
        *(uint *)((longlong)puVar15 + 0x74) = uStack_134;
        *(undefined4 *)(puVar15 + 0xb) = uStack_150;
        *(undefined4 *)((longlong)puVar15 + 0x5c) = uStack_14c;
        *(undefined4 *)(puVar15 + 0xc) = uStack_148;
        *(undefined4 *)((longlong)puVar15 + 100) = uStack_144;
        *(int *)(puVar15 + 0xd) = iStack_140;
        *(uint *)(puVar15 + 0xe) = uStack_138;
        *(int *)(puStack_1f0 + 0xf) = *(int *)(puStack_1f0 + 0xf) + 1;
      }
      else {
        FUN_1806ae100(puStack_1f0 + 0xe,&puStack_1a8);
      }
      puVar11[7] = puVar11[0xe];
      puVar11[8] = (ulonglong)*(uint *)(puVar11 + 0xf) * 0x78 + puVar11[0xe];
      if (iStack_140 == 0x4d) {
        if (*(uint *)(puVar11 + 0x11) < (*(uint *)((longlong)puVar11 + 0x8c) & 0x7fffffff)) {
          *(int *)(puVar11[0x10] + (ulonglong)*(uint *)(puVar11 + 0x11) * 4) = iVar7;
          *(int *)(puVar11 + 0x11) = *(int *)(puVar11 + 0x11) + 1;
        }
        else {
          FUN_1806a5620(puVar11 + 0x10,&iStack_110);
        }
      }
      else if (iStack_140 != 0x50) {
        (**(code **)(*param_1 + 0x90))(param_1,&uStack_1d8,iStack_140,uStack_178);
        if (uStack_1d0._1_1_ != '\0') goto LAB_1806abfac;
      }
      uStack_1f4 = uStack_1f4 + 1;
      uVar18 = (ulonglong)uStack_1f4;
      lVar10 = *param_5;
      if ((uint)(param_5[1] - lVar10 >> 5) <= uStack_1f4) goto LAB_1806abf5a;
      goto LAB_1806abb30;
    }
  }
LAB_1806abfac:
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11,0);
    (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,puVar11);
  }
  goto LAB_1806abfce;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





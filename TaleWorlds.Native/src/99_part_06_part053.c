#include "TaleWorlds.Native.Split.h"

// 99_part_06_part053.c - 3 个函数

// 函数: void FUN_1803dc6f0(longlong param_1,longlong param_2,int param_3)
void FUN_1803dc6f0(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined1 auStack_118 [32];
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined *puStack_e0;
  longlong lStack_d8;
  undefined4 uStack_d0;
  ulonglong uStack_c8;
  undefined *puStack_c0;
  char *pcStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  ulonglong uStack_48;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  pcVar7 = (char *)0x0;
  iVar10 = 0;
  puStack_e0 = &UNK_180a3c3e0;
  uStack_c8 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  pcVar12 = "name";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  for (puVar11 = *(undefined8 **)(param_2 + 0x40); puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)puVar11[6]) {
    pcVar12 = (char *)*puVar11;
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x180d48d24;
      pcVar5 = pcVar7;
    }
    else {
      pcVar5 = (char *)puVar11[2];
    }
    if (pcVar5 == pcVar13 + -0x180a03a83) {
      pcVar5 = pcVar12 + (longlong)pcVar5;
      if (pcVar5 <= pcVar12) {
LAB_1803dc7c4:
        lVar6 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar6 = puVar11[1];
        }
        FUN_180627c50(&puStack_e0,lVar6);
        break;
      }
      lVar6 = (longlong)&DAT_180a03a84 - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar6]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar5 <= pcVar12) goto LAB_1803dc7c4;
      }
    }
  }
  puVar1 = (uint *)(param_1 + 0x54);
  pcVar12 = "variation";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  for (puVar11 = *(undefined8 **)(param_2 + 0x40); pcVar12 = pcVar7, puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)puVar11[6]) {
    pcVar12 = (char *)*puVar11;
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x180d48d24;
      pcVar5 = pcVar7;
    }
    else {
      pcVar5 = (char *)puVar11[2];
    }
    if (pcVar5 == pcVar13 + -0x180a1021f) {
      pcVar5 = pcVar5 + (longlong)pcVar12;
      if (pcVar5 <= pcVar12) {
LAB_1803dc846:
        pcVar12 = (char *)0x180d48d24;
        if ((char *)puVar11[1] != (char *)0x0) {
          pcVar12 = (char *)puVar11[1];
        }
        break;
      }
      lVar6 = (longlong)&UNK_180a10220 - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar6]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar5 <= pcVar12) goto LAB_1803dc846;
      }
    }
  }
  if (puVar1 == (uint *)0x0) {
LAB_1803dc87b:
    if (pcVar12 != (char *)0x0) goto LAB_1803dc91d;
  }
  else if (pcVar12 != (char *)0x0) {
    FUN_18010cbc0(pcVar12,&UNK_180a063a0,puVar1);
    goto LAB_1803dc87b;
  }
  pcVar12 = "id";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  for (puVar11 = *(undefined8 **)(param_2 + 0x40); pcVar12 = pcVar7, puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)puVar11[6]) {
    pcVar12 = (char *)*puVar11;
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x180d48d24;
      pcVar5 = pcVar7;
    }
    else {
      pcVar5 = (char *)puVar11[2];
    }
    if (pcVar5 == pcVar13 + -0x180a0ae27) {
      pcVar5 = pcVar5 + (longlong)pcVar12;
      if (pcVar5 <= pcVar12) {
LAB_1803dc8e0:
        pcVar12 = (char *)0x180d48d24;
        if ((char *)puVar11[1] != (char *)0x0) {
          pcVar12 = (char *)puVar11[1];
        }
        break;
      }
      lVar6 = (longlong)&UNK_180a0ae28 - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar6]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar5 <= pcVar12) goto LAB_1803dc8e0;
      }
    }
  }
  if (puVar1 == (uint *)0x0) {
LAB_1803dc915:
    if (pcVar12 != (char *)0x0) goto LAB_1803dc91d;
  }
  else if (pcVar12 != (char *)0x0) {
    FUN_18010cbc0(pcVar12,&UNK_180a063a0,puVar1);
    goto LAB_1803dc915;
  }
  *puVar1 = 0;
LAB_1803dc91d:
  FUN_180631960(param_2,&UNK_180a16808,&uStack_68);
  FUN_180631960(param_2,&UNK_180a16818,&uStack_90);
  uVar14 = FUN_180631960(param_2,&UNK_180a0f108,&fStack_80);
  pcVar12 = "color";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  puVar11 = *(undefined8 **)(param_2 + 0x40);
  do {
    if (puVar11 == (undefined8 *)0x0) goto LAB_1803dcabf;
    pcVar12 = (char *)*puVar11;
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x180d48d24;
      pcVar5 = pcVar7;
    }
    else {
      pcVar5 = (char *)puVar11[2];
    }
    if (pcVar5 == pcVar13 + -0x180a2481b) {
      pcVar5 = pcVar5 + (longlong)pcVar12;
      if (pcVar5 <= pcVar12) {
LAB_1803dc9c4:
        lVar6 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar6 = puVar11[1];
        }
        FUN_180627910(&puStack_c0,lVar6);
        cVar2 = *pcStack_b8;
        while (cVar2 != '\0') {
          lVar6 = strchr(&UNK_180a3cc04,(int)pcVar7[(longlong)pcStack_b8]);
          if (lVar6 != 0) {
            pcVar7[(longlong)pcStack_b8] = ' ';
          }
          pcVar7 = pcVar7 + 1;
          cVar2 = pcVar7[(longlong)pcStack_b8];
        }
        pcVar7 = "";
        if (pcStack_b8 != (char *)0x0) {
          pcVar7 = pcStack_b8;
        }
        puStack_f0 = auStack_4c;
        puStack_f8 = auStack_50;
        uVar14 = FUN_18010cbc0(pcVar7,&UNK_180a3cce8,auStack_58,auStack_54);
        uStack_e8 = CONCAT31(CONCAT21(CONCAT11(auStack_58[0],auStack_54[0]),auStack_50[0]),
                             auStack_4c[0]);
        *(undefined4 *)(param_1 + 0x18c) = uStack_e8;
        puStack_c0 = &UNK_180a3c3e0;
        if (pcStack_b8 != (char *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        pcStack_b8 = (char *)0x0;
        uStack_a8 = 0;
        puStack_c0 = &UNK_18098bcb0;
LAB_1803dcabf:
        uVar14 = FUN_1800c4620(uVar14,&puStack_e0);
        *(undefined4 *)(param_1 + 0x50) = uVar14;
        *(undefined8 *)(param_1 + 0x58) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0x3f80000000000000;
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x88) = uStack_68;
        *(undefined8 *)(param_1 + 0x90) = uStack_60;
        puStack_c0 = (undefined *)0x3f800000;
        pcStack_b8 = (char *)0x0;
        uStack_b0 = 0;
        uStack_ac = 0x3f800000;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_98 = 0x3f800000;
        FUN_180085c10(&puStack_c0,uStack_88);
        FUN_180085970(&puStack_c0,uStack_90);
        FUN_180085ac0(&puStack_c0,uStack_8c);
        *(undefined **)(param_1 + 0x58) = puStack_c0;
        *(char **)(param_1 + 0x60) = pcStack_b8;
        *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_ac,uStack_b0);
        *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_a4,uStack_a8);
        *(undefined8 *)(param_1 + 0x78) = uStack_a0;
        *(undefined8 *)(param_1 + 0x80) = uStack_98;
        *(float *)(param_1 + 0x58) = fStack_80 * *(float *)(param_1 + 0x58);
        *(float *)(param_1 + 0x5c) = fStack_80 * *(float *)(param_1 + 0x5c);
        *(float *)(param_1 + 0x60) = fStack_80 * *(float *)(param_1 + 0x60);
        *(float *)(param_1 + 0x68) = fStack_7c * *(float *)(param_1 + 0x68);
        *(float *)(param_1 + 0x6c) = fStack_7c * *(float *)(param_1 + 0x6c);
        *(float *)(param_1 + 0x70) = fStack_7c * *(float *)(param_1 + 0x70);
        *(float *)(param_1 + 0x78) = fStack_78 * *(float *)(param_1 + 0x78);
        *(float *)(param_1 + 0x7c) = fStack_78 * *(float *)(param_1 + 0x7c);
        *(float *)(param_1 + 0x80) = fStack_78 * *(float *)(param_1 + 0x80);
        FUN_1803dc4c0(param_1);
        iVar3 = *(int *)(param_1 + 0x50);
        if ((-1 < iVar3) &&
           (lVar6 = *(longlong *)(_DAT_180c86978 + 0xd0) - *(longlong *)(_DAT_180c86978 + 200) >> 3,
           iVar10 = iVar3, iVar3 == lVar6)) {
          iVar10 = (int)lVar6 + -1;
        }
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)(_DAT_180c86978 + 200) + (longlong)iVar10 * 8) + 0x68 +
                 (longlong)param_3 * 8);
        lVar4 = *(longlong *)(lVar6 + 8);
        uVar9 = *(longlong *)(lVar6 + 0x10) - lVar4 >> 3;
        uVar8 = (uint)uVar9;
        if (((0 < (int)uVar8) && (*puVar1 < uVar8)) &&
           (*(longlong *)(*(longlong *)(lVar4 + ((ulonglong)*puVar1 % uVar9) * 8) + 0x38) != 0)) {
          FUN_180056f10(param_1 + 0x98);
        }
        FUN_1803dccd0(param_1,param_3);
        puStack_e0 = &UNK_180a3c3e0;
        if (lStack_d8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_d8 = 0;
        uStack_c8 = uStack_c8 & 0xffffffff00000000;
        puStack_e0 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_118);
      }
      lVar6 = (longlong)&UNK_180a2481c - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar6]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar5 <= pcVar12) goto LAB_1803dc9c4;
      }
    }
    puVar11 = (undefined8 *)puVar11[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1803dccd0(longlong param_1,int param_2)

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
  longlong lVar10;
  longlong *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 *puVar19;
  float *pfVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  float fVar24;
  float extraout_XMM0_Da;
  float fVar25;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  float fVar53;
  float fVar55;
  float fVar52;
  undefined1 auVar54 [16];
  
  iVar23 = *(int *)(param_1 + 0x50);
  if (iVar23 < 0) {
    iVar23 = 0;
  }
  else {
    lVar21 = *(longlong *)(_DAT_180c86978 + 0xd0) - *(longlong *)(_DAT_180c86978 + 200) >> 3;
    if (iVar23 == lVar21) {
      iVar23 = (int)lVar21 + -1;
    }
  }
  lVar21 = *(longlong *)
            (*(longlong *)(*(longlong *)(_DAT_180c86978 + 200) + (longlong)iVar23 * 8) + 0x68 +
            (longlong)param_2 * 8);
  lVar10 = *(longlong *)(lVar21 + 8);
  uVar22 = *(longlong *)(lVar21 + 0x10) - lVar10 >> 3;
  plVar11 = *(longlong **)
             (*(longlong *)
               (lVar10 + (((ulonglong)*(uint *)(param_1 + 0x54) % (uVar22 & 0xffffffff)) % uVar22) *
                         8) + 0x28);
  if (plVar11 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
  }
  else {
    if (*(code **)(*plVar11 + 0x198) == (code *)&UNK_18027d990) {
      puVar19 = (undefined8 *)((longlong)plVar11 + 0x214);
    }
    else {
      puVar19 = (undefined8 *)(**(code **)(*plVar11 + 0x198))();
    }
    uVar17 = puVar19[1];
    *(undefined8 *)(param_1 + 0xa0) = *puVar19;
    *(undefined8 *)(param_1 + 0xa8) = uVar17;
    uVar17 = puVar19[3];
    *(undefined8 *)(param_1 + 0xb0) = puVar19[2];
    *(undefined8 *)(param_1 + 0xb8) = uVar17;
    uVar17 = puVar19[5];
    *(undefined8 *)(param_1 + 0xc0) = puVar19[4];
    *(undefined8 *)(param_1 + 200) = uVar17;
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(puVar19 + 6);
  }
  fVar38 = *(float *)(param_1 + 0xb4);
  fVar24 = *(float *)(param_1 + 0xa0);
  fVar39 = *(float *)(param_1 + 0xb0);
  fVar37 = *(float *)(param_1 + 0x68);
  fVar41 = *(float *)(param_1 + 0x78);
  fVar1 = *(float *)(param_1 + 0x70);
  fVar40 = *(float *)(param_1 + 0x8c);
  fVar2 = *(float *)(param_1 + 0x7c);
  fVar43 = *(float *)(param_1 + 0x90);
  fVar3 = *(float *)(param_1 + 0x80);
  fVar4 = *(float *)(param_1 + 0xa4);
  fVar5 = *(float *)(param_1 + 0x6c);
  fVar6 = *(float *)(param_1 + 0xb8);
  fVar7 = *(float *)(param_1 + 0xa8);
  fVar50 = *(float *)(param_1 + 0x88);
  fVar42 = *(float *)(param_1 + 0x58);
  fVar8 = *(float *)(param_1 + 0x5c);
  fVar25 = fVar37 * fVar38 + fVar42 * fVar39 + fVar41 * fVar7 + fVar50;
  fVar28 = fVar37 * fVar38 + fVar42 * fVar24 + fVar41 * fVar7 + fVar50;
  fVar29 = fVar37 * fVar38 + fVar42 * fVar39 + fVar41 * fVar6 + fVar50;
  fVar30 = fVar37 * fVar4 + fVar42 * fVar24 + fVar41 * fVar7 + fVar50;
  fVar9 = *(float *)(param_1 + 0x60);
  fVar53 = fVar5 * fVar38 + fVar8 * fVar39 + fVar2 * fVar7 + fVar40;
  fVar55 = fVar5 * fVar38 + fVar8 * fVar24 + fVar2 * fVar7 + fVar40;
  auVar54._0_8_ = CONCAT44(fVar55,fVar53);
  auVar54._8_4_ = fVar5 * fVar38 + fVar8 * fVar39 + fVar2 * fVar6 + fVar40;
  auVar54._12_4_ = fVar5 * fVar4 + fVar8 * fVar24 + fVar2 * fVar7 + fVar40;
  *(float *)(param_1 + 0x138) = fVar53;
  fVar53 = fVar1 * fVar38 + fVar9 * fVar39 + fVar3 * fVar7 + fVar43;
  fVar52 = fVar1 * fVar38 + fVar9 * fVar24 + fVar3 * fVar7 + fVar43;
  auVar51._0_8_ = CONCAT44(fVar52,fVar53);
  auVar51._8_4_ = fVar1 * fVar38 + fVar9 * fVar39 + fVar3 * fVar6 + fVar43;
  auVar51._12_4_ = fVar1 * fVar4 + fVar9 * fVar24 + fVar3 * fVar7 + fVar43;
  *(float *)(param_1 + 0x13c) = fVar53;
  fVar47 = fVar37 * fVar4 + fVar42 * fVar39 + fVar41 * fVar7 + fVar50;
  fVar48 = fVar37 * fVar38 + fVar42 * fVar24 + fVar41 * fVar6 + fVar50;
  fVar49 = fVar37 * fVar4 + fVar42 * fVar39 + fVar41 * fVar6 + fVar50;
  fVar50 = fVar37 * fVar4 + fVar42 * fVar24 + fVar41 * fVar6 + fVar50;
  *(float *)(param_1 + 0x174) = fVar47;
  fVar41 = fVar1 * fVar4 + fVar9 * fVar39 + fVar3 * fVar7 + fVar43;
  fVar42 = fVar1 * fVar38 + fVar9 * fVar24 + fVar3 * fVar6 + fVar43;
  fVar53 = fVar1 * fVar4 + fVar9 * fVar39 + fVar3 * fVar6 + fVar43;
  fVar43 = fVar1 * fVar4 + fVar9 * fVar24 + fVar3 * fVar6 + fVar43;
  fVar37 = fVar5 * fVar4 + fVar8 * fVar39 + fVar2 * fVar7 + fVar40;
  fVar38 = fVar5 * fVar38 + fVar8 * fVar24 + fVar2 * fVar6 + fVar40;
  fVar39 = fVar5 * fVar4 + fVar8 * fVar39 + fVar2 * fVar6 + fVar40;
  fVar40 = fVar5 * fVar4 + fVar8 * fVar24 + fVar2 * fVar6 + fVar40;
  auVar18._4_4_ = fVar28;
  auVar18._0_4_ = fVar25;
  auVar18._8_4_ = fVar29;
  auVar18._12_4_ = fVar30;
  *(float *)(param_1 + 0x134) = fVar25;
  *(float *)(param_1 + 0x104) = fVar30;
  *(float *)(param_1 + 0x124) = fVar28;
  *(float *)(param_1 + 0x144) = fVar50;
  *(float *)(param_1 + 0x164) = fVar48;
  *(float *)(param_1 + 0x108) = auVar54._12_4_;
  *(float *)(param_1 + 0x128) = fVar55;
  *(float *)(param_1 + 0x114) = fVar29;
  *(float *)(param_1 + 0x148) = fVar40;
  *(float *)(param_1 + 0x154) = fVar49;
  *(float *)(param_1 + 0x168) = fVar38;
  *(float *)(param_1 + 0x118) = auVar54._8_4_;
  *(float *)(param_1 + 0x10c) = auVar51._12_4_;
  *(float *)(param_1 + 0x158) = fVar39;
  *(float *)(param_1 + 300) = fVar52;
  *(float *)(param_1 + 0x178) = fVar37;
  *(float *)(param_1 + 0x11c) = auVar51._8_4_;
  *(float *)(param_1 + 0x17c) = fVar41;
  auVar44._4_4_ = fVar48;
  auVar44._0_4_ = fVar47;
  auVar44._8_4_ = fVar49;
  auVar44._12_4_ = fVar50;
  auVar33 = minps(auVar18,auVar44);
  auVar16._4_4_ = fVar48;
  auVar16._0_4_ = fVar47;
  auVar16._8_4_ = fVar49;
  auVar16._12_4_ = fVar50;
  auVar44 = maxps(auVar18,auVar16);
  auVar31._8_4_ = auVar51._8_4_;
  auVar31._0_8_ = auVar51._0_8_;
  auVar31._12_4_ = auVar51._12_4_;
  *(float *)(param_1 + 0x14c) = fVar43;
  *(float *)(param_1 + 0x15c) = fVar53;
  auVar26._8_4_ = auVar54._8_4_;
  auVar26._0_8_ = auVar54._0_8_;
  auVar26._12_4_ = auVar54._12_4_;
  *(float *)(param_1 + 0x16c) = fVar42;
  *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x130) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x140) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x150) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x160) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x170) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x180) = 0x3f800000;
  auVar32._4_4_ = fVar38;
  auVar32._0_4_ = fVar37;
  auVar32._8_4_ = fVar39;
  auVar32._12_4_ = fVar40;
  auVar27 = minps(auVar26,auVar32);
  auVar14._4_4_ = fVar42;
  auVar14._0_4_ = fVar41;
  auVar14._8_4_ = fVar53;
  auVar14._12_4_ = fVar43;
  auVar32 = minps(auVar31,auVar14);
  auVar34._0_8_ = auVar33._0_8_;
  auVar34._8_4_ = auVar27._0_4_;
  auVar34._12_4_ = auVar27._4_4_;
  auVar35._8_4_ = auVar27._8_4_;
  auVar35._0_8_ = auVar33._8_8_;
  auVar35._12_4_ = auVar27._12_4_;
  auVar35 = minps(auVar34,auVar35);
  auVar33._4_4_ = fVar38;
  auVar33._0_4_ = fVar37;
  auVar33._8_4_ = fVar39;
  auVar33._12_4_ = fVar40;
  auVar33 = maxps(auVar54,auVar33);
  auVar36._0_4_ = auVar35._0_4_;
  auVar36._4_4_ = auVar35._8_4_;
  auVar36._8_4_ = auVar32._0_4_;
  auVar36._12_4_ = auVar32._4_4_;
  auVar27._4_4_ = auVar35._12_4_;
  auVar27._0_4_ = auVar35._4_4_;
  auVar27._8_4_ = auVar32._8_4_;
  auVar27._12_4_ = auVar32._12_4_;
  auVar35 = minps(auVar36,auVar27);
  auVar15._4_4_ = fVar42;
  auVar15._0_4_ = fVar41;
  auVar15._8_4_ = fVar53;
  auVar15._12_4_ = fVar43;
  auVar27 = maxps(auVar51,auVar15);
  *(undefined1 (*) [16])(param_1 + 0xd4) = auVar35;
  fVar38 = auVar35._8_4_;
  if (auVar35._12_4_ <= auVar35._8_4_) {
    fVar38 = auVar35._12_4_;
  }
  auVar45._0_8_ = auVar44._0_8_;
  auVar45._8_4_ = auVar33._0_4_;
  auVar45._12_4_ = auVar33._4_4_;
  auVar12._8_4_ = auVar33._8_4_;
  auVar12._0_8_ = auVar44._8_8_;
  auVar12._12_4_ = auVar33._12_4_;
  auVar35 = maxps(auVar45,auVar12);
  auVar46._0_4_ = auVar35._0_4_;
  auVar46._4_4_ = auVar35._8_4_;
  auVar46._8_4_ = auVar27._0_4_;
  auVar46._12_4_ = auVar27._4_4_;
  auVar13._4_4_ = auVar35._12_4_;
  auVar13._0_4_ = auVar35._4_4_;
  auVar13._8_4_ = auVar27._8_4_;
  auVar13._12_4_ = auVar27._12_4_;
  auVar35 = maxps(auVar46,auVar13);
  *(undefined1 (*) [16])(param_1 + 0xe4) = auVar35;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  *(float *)(param_1 + 0xdc) = fVar38;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
  fVar24 = auVar35._8_4_;
  if (auVar35._8_4_ <= auVar35._12_4_) {
    fVar24 = auVar35._12_4_;
  }
  *(float *)(param_1 + 0xec) = fVar24;
  pfVar20 = (float *)func_0x000180285a90((float *)(param_1 + 0x58),(float *)(param_1 + 0xa0),
                                         auVar32._0_8_);
  pfVar20[0x2c] = extraout_XMM0_Da;
  pfVar20[8] = (pfVar20[4] + *pfVar20) * 0.5;
  pfVar20[9] = (pfVar20[5] + pfVar20[1]) * 0.5;
  pfVar20[10] = (fVar38 + pfVar20[6]) * 0.5;
  pfVar20[0xb] = 3.4028235e+38;
  return 0x3f000000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803dcdd0(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  
  uVar14 = **(uint **)(param_2 + 8);
  puVar8 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar8;
  if (uVar14 != 0) {
    (**(code **)(*param_3 + 0x18))(param_3,puVar8,uVar14);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar14;
    puVar8 = *(uint **)(param_2 + 8);
  }
  uVar14 = 0;
  *(uint *)(param_1 + 0x54) = *puVar8;
  lVar13 = *(longlong *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar13 + 4);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar13 + 8);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar13 + 0xc);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar13 + 0x10);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar13 + 0x14);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar13 + 0x18);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar13 + 0x1c);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(lVar13 + 0x20);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar13 + 0x24);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar13 + 0x28);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar13 + 0x2c);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar13 + 0x30);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar13 + 0x34);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(lVar13 + 0x38);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar13 + 0x3c);
  *(longlong *)(param_2 + 8) = lVar13 + 0x44;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
  FUN_1803dc4c0(param_1);
  pfVar4 = *(float **)(param_2 + 8);
  fVar1 = pfVar4[3];
  fVar2 = pfVar4[1];
  *(float **)(param_2 + 8) = pfVar4 + 4;
  fVar3 = *pfVar4;
  uVar5 = (uint)(longlong)(fVar1 * 256.0);
  uVar6 = 0xff;
  if (uVar5 < 0xff) {
    uVar6 = uVar5;
  }
  uVar7 = (uint)(longlong)(fVar3 * 256.0);
  uVar5 = 0xff;
  if (uVar7 < 0xff) {
    uVar5 = uVar7;
  }
  uVar11 = (uint)(longlong)(fVar2 * 256.0);
  uVar7 = 0xff;
  if (uVar11 < 0xff) {
    uVar7 = uVar11;
  }
  uVar15 = (uint)(longlong)(pfVar4[2] * 256.0);
  uVar11 = 0xff;
  if (uVar15 < 0xff) {
    uVar11 = uVar15;
  }
  *(uint *)(param_1 + 0x18c) = ((uVar6 << 8 | uVar5) << 8 | uVar7) << 8 | uVar11;
  uVar6 = FUN_1800c4620((longlong)(fVar3 * 256.0),param_3);
  *(uint *)(param_1 + 0x50) = uVar6;
  if ((uVar6 == 0xffffffff) ||
     (lVar13 = *(longlong *)(_DAT_180c86978 + 200),
     (uint)(*(longlong *)(_DAT_180c86978 + 0xd0) - lVar13 >> 3) <= uVar6)) {
    puVar12 = &DAT_18098bc73;
    if ((undefined *)param_3[1] != (undefined *)0x0) {
      puVar12 = (undefined *)param_3[1];
    }
    FUN_180627020(&UNK_180a21880,puVar12);
    lVar9 = _DAT_180c86978;
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    lVar9 = _DAT_180c86978;
    if ((int)uVar6 < 0) goto LAB_1803dcfd4;
  }
  lVar13 = *(longlong *)(lVar9 + 200);
  lVar9 = *(longlong *)(lVar9 + 0xd0) - lVar13 >> 3;
  uVar14 = (int)lVar9 - 1;
  if ((int)uVar6 != lVar9) {
    uVar14 = uVar6;
  }
LAB_1803dcfd4:
  lVar13 = *(longlong *)(lVar13 + (longlong)(int)uVar14 * 8);
  lVar9 = *(longlong *)(lVar13 + 0x68 + (longlong)param_4 * 8);
  uVar10 = *(longlong *)(lVar9 + 0x10) - *(longlong *)(lVar9 + 8) >> 3;
  if ((0 < (int)uVar10) &&
     (uVar10 = (ulonglong)*(uint *)(param_1 + 0x54) % (uVar10 & 0xffffffff),
     *(int *)(param_1 + 0x54) = (int)uVar10,
     *(longlong *)
      (*(longlong *)
        (*(longlong *)(lVar9 + 8) +
        (uVar10 % (ulonglong)(*(longlong *)(lVar9 + 0x10) - *(longlong *)(lVar9 + 8) >> 3)) * 8) +
      0x38) != 0)) {
    FUN_180056f10(param_1 + 0x98);
  }
  FUN_1803dccd0(param_1,param_4);
  return lVar13;
}



undefined8 *
FUN_1803dd070(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 8;
  strcpy_s(param_2[1],0x80,&UNK_180a24828,param_4,0,0xfffffffffffffffe);
  return param_2;
}



undefined8 * FUN_1803dd0f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a14860;
  *(undefined4 *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &UNK_180a249c0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = &UNK_18098bcb0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x23] = &UNK_180a3c3e0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x27] = &UNK_18098bcb0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x27] = &UNK_180a3c3e0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  puVar1 = param_1 + 0x2e;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x33) = 3;
  *puVar1 = puVar1;
  param_1[0x2f] = puVar1;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  puVar1 = param_1 + 0x34;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x39) = 3;
  *puVar1 = puVar1;
  param_1[0x35] = puVar1;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = &UNK_18098bcb0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x81] = &UNK_180a3c3e0;
  param_1[0x84] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1803deff0(param_1);
  return param_1;
}



undefined8 FUN_1803dd290(undefined8 param_1,ulonglong param_2)

{
  FUN_1803dd4f0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x468);
  }
  return param_1;
}






// 函数: void FUN_1803dd2d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803dd2d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1803e1c20(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1803dd300(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803dd300(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1803e1c20(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



undefined8 * FUN_1803dd330(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a14860;
  *(undefined4 *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &UNK_180a249c0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = &UNK_18098bcb0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x23] = &UNK_180a3c3e0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x27] = &UNK_18098bcb0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x27] = &UNK_180a3c3e0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  puVar1 = param_1 + 0x2e;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x33) = 3;
  *puVar1 = puVar1;
  param_1[0x2f] = puVar1;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  puVar1 = param_1 + 0x34;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x39) = 3;
  *puVar1 = puVar1;
  param_1[0x35] = puVar1;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = &UNK_18098bcb0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x81] = &UNK_180a3c3e0;
  param_1[0x84] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1803deff0(param_1);
  FUN_1803df280(param_1,param_2);
  return param_1;
}







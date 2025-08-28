#include "TaleWorlds.Native.Split.h"

// 99_part_06_part056.c - 2 个函数

// 函数: void FUN_1803df280(longlong param_1,longlong param_2)
void FUN_1803df280(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float afStackX_8 [2];
  float afStackX_18 [4];
  
  FUN_180631330(param_2,&UNK_180a06b78,param_1 + 0xc0);
  pfVar1 = (float *)(param_1 + 0xe4);
  lVar5 = FUN_180631960(param_2,&UNK_180a24838,param_1 + 0xd4);
  if (lVar5 == 0) {
    FUN_180631960(param_2,&UNK_180a2481c,param_1 + 0xd4);
    pcVar7 = "intensity";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[6]) {
      pcVar7 = (char *)*puVar3;
      if (pcVar7 == (char *)0x0) {
        pcVar6 = (char *)0x0;
        pcVar7 = (char *)0x180d48d24;
      }
      else {
        pcVar6 = (char *)puVar3[2];
      }
      if (pcVar6 == pcVar8 + -0x180a2488f) {
        pcVar6 = pcVar7 + (longlong)pcVar6;
        if (pcVar6 <= pcVar7) {
LAB_1803df3b7:
          lVar5 = 0x180d48d24;
          if (puVar3[1] != 0) {
            lVar5 = puVar3[1];
          }
          goto LAB_1803df3d2;
        }
        lVar5 = (longlong)&UNK_180a24890 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar5]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar6 <= pcVar7) goto LAB_1803df3b7;
        }
      }
    }
    lVar5 = 0;
LAB_1803df3d2:
    if ((pfVar1 != (float *)0x0) && (lVar5 != 0)) {
      FUN_18010cbc0(lVar5,&DAT_180a06430,pfVar1);
    }
  }
  else {
    fVar9 = *(float *)(param_1 + 0xd4);
    fVar10 = *(float *)(param_1 + 0xd8);
    fVar2 = *(float *)(param_1 + 0xdc);
    fVar12 = fVar9;
    if (fVar9 <= fVar10) {
      fVar12 = fVar10;
    }
    fVar11 = fVar2;
    if (fVar2 <= fVar12) {
      fVar11 = fVar12;
    }
    fVar12 = 1.0 / fVar11;
    *pfVar1 = fVar11;
    *(float *)(param_1 + 0xd4) = fVar9 * fVar12;
    *(float *)(param_1 + 0xd8) = fVar10 * fVar12;
    *(float *)(param_1 + 0xdc) = fVar2 * fVar12;
    *(undefined4 *)(param_1 + 0xe0) = 0x7f7fffff;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
  afStackX_8[0] = 1.0;
  pcVar7 = "radius";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a1a48f) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_1803df474:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        FUN_18010cbc0(lVar5,&DAT_180a06430,afStackX_8);
        fVar9 = afStackX_8[0];
        if (afStackX_8[0] <= 0.2) {
          fVar9 = 0.2;
        }
        if (fVar9 != *(float *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          *(float *)(param_1 + 0x30) = fVar9;
          *(undefined1 *)(param_1 + 1000) = 0;
          *(undefined1 *)(param_1 + 0x3a1) = 1;
          if ((lVar5 != 0) &&
             (*(short *)(lVar5 + 0x2b0) = *(short *)(lVar5 + 0x2b0) + 1,
             *(longlong *)(lVar5 + 0x168) != 0)) {
            func_0x0001802eeba0();
          }
        }
        break;
      }
      lVar5 = (longlong)&UNK_180a1a490 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803df474;
      }
    }
  }
  pcVar7 = "flicker_interval";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a2489f) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_1803df550:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        goto LAB_1803df56b;
      }
      lVar5 = (longlong)&UNK_180a248a0 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803df550;
      }
    }
  }
  lVar5 = 0;
LAB_1803df56b:
  if ((param_1 + 0xf4 != 0) && (lVar5 != 0)) {
    FUN_18010cbc0(lVar5,&DAT_180a06430,param_1 + 0xf4);
  }
  pcVar7 = "flicker_magnitude";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a248bf) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_1803df5e7:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        goto LAB_1803df602;
      }
      lVar5 = (longlong)&UNK_180a248c0 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803df5e7;
      }
    }
  }
  lVar5 = 0;
LAB_1803df602:
  if ((param_1 + 0xf0 != 0) && (lVar5 != 0)) {
    FUN_18010cbc0(lVar5,&DAT_180a06430,param_1 + 0xf0);
  }
  lVar5 = FUN_180631de0(param_2,&UNK_180a248e0,param_1 + 0x40);
  if (lVar5 == 0) {
    *(float *)(param_1 + 0x40) = afStackX_8[0] * *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x44) = afStackX_8[0] * *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x48) = afStackX_8[0] * *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x50) = afStackX_8[0] * *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = afStackX_8[0] * *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) = afStackX_8[0] * *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 100) = afStackX_8[0] * *(float *)(param_1 + 100);
    *(float *)(param_1 + 0x60) = afStackX_8[0] * *(float *)(param_1 + 0x60);
    *(float *)(param_1 + 0x68) = afStackX_8[0] * *(float *)(param_1 + 0x68);
  }
  FUN_180631960(param_2,&UNK_180a24850,param_1 + 0x70);
  pcVar7 = "hotspot_angle";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a2485f) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_1803df727:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        goto LAB_1803df742;
      }
      lVar5 = (longlong)&UNK_180a24860 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803df727;
      }
    }
  }
  lVar5 = 0;
LAB_1803df742:
  if ((param_1 + 0xe8 != 0) && (lVar5 != 0)) {
    FUN_18010cbc0(lVar5,&DAT_180a06430,param_1 + 0xe8);
  }
  pcVar7 = "falloff_angle";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a2486f) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_1803df7c0:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        goto LAB_1803df7db;
      }
      lVar5 = (longlong)&UNK_180a24870 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803df7c0;
      }
    }
  }
  lVar5 = 0;
LAB_1803df7db:
  if ((param_1 + 0xec != 0) && (lVar5 != 0)) {
    FUN_18010cbc0(lVar5,&DAT_180a06430,param_1 + 0xec);
  }
  pcVar7 = "mask_texture";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a2487f) {
      pcVar6 = pcVar7 + (longlong)pcVar6;
      if (pcVar6 <= pcVar7) {
LAB_1803df860:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        (**(code **)(*(longlong *)(param_1 + 0x408) + 0x10))(param_1 + 0x408,lVar5);
        break;
      }
      lVar5 = (longlong)&UNK_180a24880 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803df860;
      }
    }
  }
  pcVar7 = "sprite_mesh_name";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a2493f) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_1803df8f0:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        (**(code **)(*(longlong *)(param_1 + 0x118) + 0x10))(param_1 + 0x118,lVar5);
        break;
      }
      lVar5 = (longlong)&UNK_180a24940 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803df8f0;
      }
    }
  }
  pcVar7 = "sprite_material_name";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a2495f) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_1803df980:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        (**(code **)(*(longlong *)(param_1 + 0x138) + 0x10))(param_1 + 0x138,lVar5);
        break;
      }
      lVar5 = (longlong)&UNK_180a24960 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803df980;
      }
    }
  }
  FUN_180631960(param_2,&UNK_180a24980,param_1 + 0x158);
  pcVar7 = "sprite_color_scale";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a2499f) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_1803dfa26:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        goto LAB_1803dfa41;
      }
      lVar5 = (longlong)&UNK_180a249a0 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803dfa26;
      }
    }
  }
  lVar5 = 0;
LAB_1803dfa41:
  if ((param_1 + 0x16c != 0) && (lVar5 != 0)) {
    FUN_18010cbc0(lVar5,&DAT_180a06430,param_1 + 0x16c);
  }
  pcVar7 = "sprite_scale";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a248ef) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_1803dfac0:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        goto LAB_1803dfadb;
      }
      lVar5 = (longlong)&UNK_180a248f0 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803dfac0;
      }
    }
  }
  lVar5 = 0;
LAB_1803dfadb:
  if ((param_1 + 0x168 != 0) && (lVar5 != 0)) {
    FUN_18010cbc0(lVar5,&DAT_180a06430,param_1 + 0x168);
  }
  FUN_180631330(param_2,&UNK_180a24900,param_1 + 200);
  FUN_180631330(param_2,&UNK_180a23a30,param_1 + 0xc4);
  FUN_180631330(param_2,&UNK_180a24910,param_1 + 0xcc);
  uVar4 = *(uint *)(param_1 + 0xc0);
  if ((uVar4 & 4) != 0) {
    uVar4 = uVar4 & 0xfffffffb;
    *(undefined4 *)(param_1 + 200) = 1;
    *(uint *)(param_1 + 0xc0) = uVar4;
  }
  if ((uVar4 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 200) = 2;
    *(uint *)(param_1 + 0xc0) = uVar4 & 0xffffffef;
  }
  pcVar7 = "shadow_radius";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  puVar3 = *(undefined8 **)(param_2 + 0x40);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      fVar9 = *(float *)(param_1 + 0x30);
      fVar10 = fVar9 * 0.8;
      if (fVar10 != *(float *)(param_1 + 0x38)) {
        if (fVar10 <= fVar9) {
          fVar9 = fVar10;
        }
        *(float *)(param_1 + 0x38) = fVar9;
LAB_1803dfc2a:
        *(undefined1 *)(param_1 + 0x3a1) = 1;
        *(undefined1 *)(param_1 + 1000) = 0;
      }
LAB_1803dfc38:
      FUN_1803e0bc0(param_1);
      return;
    }
    pcVar7 = (char *)*puVar3;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar6 = (char *)puVar3[2];
    }
    if (pcVar6 == pcVar8 + -0x180a24927) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      if (pcVar6 <= pcVar7) {
LAB_1803dfbc7:
        lVar5 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar5 = puVar3[1];
        }
        FUN_18010cbc0(lVar5,&DAT_180a06430,afStackX_18);
        if (afStackX_18[0] == *(float *)(param_1 + 0x38)) goto LAB_1803dfc38;
        fVar9 = *(float *)(param_1 + 0x30);
        if (afStackX_18[0] <= *(float *)(param_1 + 0x30)) {
          fVar9 = afStackX_18[0];
        }
        *(float *)(param_1 + 0x38) = fVar9;
        goto LAB_1803dfc2a;
      }
      lVar5 = (longlong)&UNK_180a24928 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar5]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_1803dfbc7;
      }
    }
    puVar3 = (undefined8 *)puVar3[6];
  } while( true );
}






// 函数: void FUN_1803dfc60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)
void FUN_1803dfc60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  bool bVar8;
  
  puVar4 = (undefined8 *)FUN_1804c1300(param_2 + 0x60,0x60);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  *(undefined4 *)(puVar4 + 5) = 1;
  puVar4[6] = 0;
  puVar4[8] = 0;
  pcVar5 = "light_component";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  *puVar4 = &DAT_180a09db0;
  puVar4[2] = pcVar6 + -0x180a09daf;
  if (param_4 == 0) {
    bVar8 = *(int *)(param_1 + 0xc0) == 0;
  }
  else {
    bVar8 = *(int *)(param_1 + 0xc0) == *(int *)(param_4 + 0xc0);
  }
  if (!bVar8) {
    FUN_180630c80(param_2,puVar4,&UNK_180a06b78);
  }
  if (param_4 == 0) {
    if ((*(float *)(param_1 + 0xd4) == 1.0) && (*(float *)(param_1 + 0xd8) == 1.0)) {
      bVar8 = *(float *)(param_1 + 0xdc) == 1.0;
      goto LAB_1803dfd66;
    }
LAB_1803dfd68:
    FUN_18062fb40(param_2,puVar4,&UNK_180a2481c);
  }
  else {
    if ((*(float *)(param_1 + 0xd4) != *(float *)(param_4 + 0xd4)) ||
       (*(float *)(param_4 + 0xd8) != *(float *)(param_1 + 0xd8))) goto LAB_1803dfd68;
    bVar8 = *(float *)(param_4 + 0xdc) == *(float *)(param_1 + 0xdc);
LAB_1803dfd66:
    if (!bVar8) goto LAB_1803dfd68;
  }
  if (param_4 == 0) {
    bVar8 = *(float *)(param_1 + 0xe4) == 1.0;
  }
  else {
    bVar8 = *(float *)(param_1 + 0xe4) == *(float *)(param_4 + 0xe4);
  }
  if (!bVar8) {
    FUN_18062f990(param_2,puVar4,&UNK_180a24890);
  }
  if (param_4 == 0) {
    bVar8 = *(float *)(param_1 + 0x30) == 1.0;
  }
  else {
    bVar8 = *(float *)(param_1 + 0x30) == *(float *)(param_4 + 0x30);
  }
  if (!bVar8) {
    FUN_18062f990(param_2,puVar4,&UNK_180a1a490);
  }
  if (param_4 == 0) {
    bVar8 = *(float *)(param_1 + 0xf4) == 0.0;
  }
  else {
    bVar8 = *(float *)(param_1 + 0xf4) == *(float *)(param_4 + 0xf4);
  }
  if (!bVar8) {
    FUN_18062f990(param_2,puVar4,&UNK_180a248a0);
  }
  if (param_4 == 0) {
    bVar8 = *(float *)(param_1 + 0xf0) == 0.0;
  }
  else {
    bVar8 = *(float *)(param_1 + 0xf0) == *(float *)(param_4 + 0xf0);
  }
  if (!bVar8) {
    FUN_18062f990(param_2,puVar4,&UNK_180a248c0);
  }
  if (param_4 == 0) {
    if (((((*(float *)(param_1 + 0x40) != 1.0) || (*(float *)(param_1 + 0x44) != 0.0)) ||
         (*(float *)(param_1 + 0x48) != 0.0)) ||
        ((*(float *)(param_1 + 0x50) != 0.0 || (*(float *)(param_1 + 0x54) != 1.0)))) ||
       (((*(float *)(param_1 + 0x58) != 0.0 ||
         ((*(float *)(param_1 + 0x60) != 0.0 || (*(float *)(param_1 + 100) != 0.0)))) ||
        (*(float *)(param_1 + 0x68) != 1.0)))) goto LAB_1803dfea3;
LAB_1803dff22:
    if ((*(float *)(param_1 + 0x70) != 0.0) || (*(float *)(param_1 + 0x74) != 0.0))
    goto LAB_1803dff36;
    bVar8 = *(float *)(param_1 + 0x78) == 0.0;
LAB_1803dff34:
    if (!bVar8) goto LAB_1803dff36;
  }
  else {
    if (((((*(float *)(param_1 + 0x40) != *(float *)(param_4 + 0x40)) ||
          (*(float *)(param_4 + 0x44) != *(float *)(param_1 + 0x44))) ||
         (*(float *)(param_4 + 0x48) != *(float *)(param_1 + 0x48))) ||
        (((*(float *)(param_4 + 0x50) != *(float *)(param_1 + 0x50) ||
          (*(float *)(param_4 + 0x54) != *(float *)(param_1 + 0x54))) ||
         ((*(float *)(param_4 + 0x58) != *(float *)(param_1 + 0x58) ||
          ((*(float *)(param_4 + 0x60) != *(float *)(param_1 + 0x60) ||
           (*(float *)(param_4 + 100) != *(float *)(param_1 + 100))))))))) ||
       (*(float *)(param_4 + 0x68) != *(float *)(param_1 + 0x68))) {
LAB_1803dfea3:
      FUN_180630560(param_2,puVar4,&UNK_180a248e0);
    }
    if (param_4 == 0) goto LAB_1803dff22;
    if ((*(float *)(param_4 + 0x70) == *(float *)(param_1 + 0x70)) &&
       (*(float *)(param_4 + 0x74) == *(float *)(param_1 + 0x74))) {
      bVar8 = *(float *)(param_4 + 0x78) == *(float *)(param_1 + 0x78);
      goto LAB_1803dff34;
    }
LAB_1803dff36:
    FUN_18062fb40(param_2,puVar4,&UNK_180a24850);
  }
  if (param_4 == 0) {
    bVar8 = *(float *)(param_1 + 0xe8) == 0.0;
  }
  else {
    bVar8 = *(float *)(param_1 + 0xe8) == *(float *)(param_4 + 0xe8);
  }
  if (!bVar8) {
    FUN_18062f990(param_2,puVar4,&UNK_180a24860);
  }
  if (param_4 == 0) {
    if (*(float *)(param_1 + 0xec) != 0.0) {
      FUN_18062f990(param_2,puVar4,&UNK_180a24870);
    }
    lVar7 = FUN_180628ca0();
    iVar3 = *(int *)(param_1 + 0x418);
    if (iVar3 == *(int *)(lVar7 + 0x10)) {
      if (iVar3 == 0) {
LAB_1803e019d:
        if (*(int *)(lVar7 + 0x10) != 0) goto LAB_1803e01a1;
      }
      else {
        pcVar5 = *(char **)(param_1 + 0x410);
        pcVar6 = pcVar5;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[*(longlong *)(lVar7 + 8) - (longlong)pcVar5];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 != cVar2) goto LAB_1803e01a8;
      }
    }
    else {
      if (iVar3 == 0) goto LAB_1803e019d;
LAB_1803e01a1:
      pcVar5 = *(char **)(param_1 + 0x410);
LAB_1803e01a8:
      pcVar6 = "";
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
      }
      FUN_180630b20(param_2,puVar4,&UNK_180a24880,pcVar6);
    }
    lVar7 = FUN_180628ca0();
    iVar3 = *(int *)(param_1 + 0x128);
    if (iVar3 == *(int *)(lVar7 + 0x10)) {
      if (iVar3 == 0) {
LAB_1803e020d:
        if (*(int *)(lVar7 + 0x10) != 0) goto LAB_1803e0211;
      }
      else {
        pcVar5 = *(char **)(param_1 + 0x120);
        pcVar6 = pcVar5;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[*(longlong *)(lVar7 + 8) - (longlong)pcVar5];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 != cVar2) goto LAB_1803e0218;
      }
    }
    else {
      if (iVar3 == 0) goto LAB_1803e020d;
LAB_1803e0211:
      pcVar5 = *(char **)(param_1 + 0x120);
LAB_1803e0218:
      pcVar6 = "";
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
      }
      FUN_180630b20(param_2,puVar4,&UNK_180a24940,pcVar6);
    }
    lVar7 = FUN_180628ca0();
    iVar3 = *(int *)(param_1 + 0x148);
    if (iVar3 != *(int *)(lVar7 + 0x10)) {
      if (iVar3 == 0) goto LAB_1803e0288;
LAB_1803e00d1:
      pcVar5 = *(char **)(param_1 + 0x140);
      goto LAB_1803e00d8;
    }
    if (iVar3 != 0) {
      pcVar5 = *(char **)(param_1 + 0x140);
      pcVar6 = pcVar5;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[*(longlong *)(lVar7 + 8) - (longlong)pcVar5];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (cVar1 != cVar2) goto LAB_1803e00d8;
      goto LAB_1803e00f4;
    }
LAB_1803e0288:
    if (*(int *)(lVar7 + 0x10) != 0) goto LAB_1803e00d1;
LAB_1803e0297:
    if ((*(float *)(param_1 + 0x158) == 0.0) && (*(float *)(param_1 + 0x15c) == 0.0)) {
      bVar8 = *(float *)(param_1 + 0x160) == 0.0;
LAB_1803e02a9:
      if (bVar8) goto LAB_1803e02bd;
    }
  }
  else {
    if (*(float *)(param_1 + 0xec) != *(float *)(param_4 + 0xec)) {
      FUN_18062f990(param_2,puVar4,&UNK_180a24870);
    }
    iVar3 = *(int *)(param_1 + 0x418);
    if (iVar3 == *(int *)(param_4 + 0x418)) {
      if (iVar3 == 0) {
LAB_1803dffed:
        if (*(int *)(param_4 + 0x418) != 0) goto LAB_1803dfff1;
      }
      else {
        pcVar5 = *(char **)(param_1 + 0x410);
        pcVar6 = pcVar5;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[*(longlong *)(param_4 + 0x410) - (longlong)pcVar5];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 != cVar2) goto LAB_1803dfff8;
      }
    }
    else {
      if (iVar3 == 0) goto LAB_1803dffed;
LAB_1803dfff1:
      pcVar5 = *(char **)(param_1 + 0x410);
LAB_1803dfff8:
      pcVar6 = "";
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
      }
      FUN_180630b20(param_2,puVar4,&UNK_180a24880,pcVar6);
    }
    iVar3 = *(int *)(param_1 + 0x128);
    if (iVar3 == *(int *)(param_4 + 0x128)) {
      if (iVar3 == 0) {
LAB_1803e005d:
        if (*(int *)(param_4 + 0x128) != 0) goto LAB_1803e0061;
      }
      else {
        pcVar5 = *(char **)(param_1 + 0x120);
        pcVar6 = pcVar5;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[*(longlong *)(param_4 + 0x120) - (longlong)pcVar5];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 != cVar2) goto LAB_1803e0068;
      }
    }
    else {
      if (iVar3 == 0) goto LAB_1803e005d;
LAB_1803e0061:
      pcVar5 = *(char **)(param_1 + 0x120);
LAB_1803e0068:
      pcVar6 = "";
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
      }
      FUN_180630b20(param_2,puVar4,&UNK_180a24940,pcVar6);
    }
    iVar3 = *(int *)(param_1 + 0x148);
    if (iVar3 == *(int *)(param_4 + 0x148)) {
      if (iVar3 == 0) goto LAB_1803e00cd;
      pcVar5 = *(char **)(param_1 + 0x140);
      pcVar6 = pcVar5;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[*(longlong *)(param_4 + 0x140) - (longlong)pcVar5];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) goto LAB_1803e00f4;
LAB_1803e00d8:
      pcVar6 = "";
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
      }
      FUN_180630b20(param_2,puVar4,&UNK_180a24960,pcVar6);
    }
    else {
      if (iVar3 != 0) goto LAB_1803e00d1;
LAB_1803e00cd:
      if (*(int *)(param_4 + 0x148) != 0) goto LAB_1803e00d1;
    }
LAB_1803e00f4:
    if (param_4 == 0) goto LAB_1803e0297;
    if ((*(float *)(param_4 + 0x158) == *(float *)(param_1 + 0x158)) &&
       (*(float *)(param_4 + 0x15c) == *(float *)(param_1 + 0x15c))) {
      bVar8 = *(float *)(param_4 + 0x160) == *(float *)(param_1 + 0x160);
      goto LAB_1803e02a9;
    }
  }
  FUN_18062fb40(param_2,puVar4,&UNK_180a24980);
LAB_1803e02bd:
  if (param_4 == 0) {
    bVar8 = *(float *)(param_1 + 0x16c) == 1.0;
  }
  else {
    bVar8 = *(float *)(param_1 + 0x16c) == *(float *)(param_4 + 0x16c);
  }
  if (!bVar8) {
    FUN_18062f990(param_2,puVar4,&UNK_180a249a0);
  }
  if (param_4 == 0) {
    bVar8 = *(float *)(param_1 + 0x168) == 1.0;
  }
  else {
    bVar8 = *(float *)(param_1 + 0x168) == *(float *)(param_4 + 0x168);
  }
  if (!bVar8) {
    FUN_18062f990(param_2,puVar4,&UNK_180a248f0);
  }
  if (param_4 == 0) {
    bVar8 = *(int *)(param_1 + 200) == 0;
  }
  else {
    bVar8 = *(int *)(param_1 + 200) == *(int *)(param_4 + 200);
  }
  if (!bVar8) {
    FUN_18062f640(param_2,puVar4,&UNK_180a24900);
  }
  if (param_4 == 0) {
    bVar8 = *(int *)(param_1 + 0xc4) == 0;
  }
  else {
    bVar8 = *(int *)(param_1 + 0xc4) == *(int *)(param_4 + 0xc4);
  }
  if (!bVar8) {
    FUN_180630c80(param_2,puVar4,&UNK_180a23a30);
  }
  if (param_4 == 0) {
    bVar8 = *(int *)(param_1 + 0xcc) == 0;
  }
  else {
    bVar8 = *(int *)(param_1 + 0xcc) == *(int *)(param_4 + 0xcc);
  }
  if (!bVar8) {
    FUN_180630c80(param_2,puVar4,&UNK_180a24910);
  }
  if (param_4 == 0) {
    bVar8 = *(float *)(param_1 + 0x38) == 1.0;
  }
  else {
    bVar8 = *(float *)(param_1 + 0x38) == *(float *)(param_4 + 0x38);
  }
  if (!bVar8) {
    FUN_18062f990(param_2,puVar4,&UNK_180a24928);
  }
  if ((puVar4[6] != 0) || (puVar4[8] != 0)) {
    if (param_5 != 0) {
      FUN_180630c80(param_2,puVar4,&UNK_180a16930);
    }
    if (*(longlong *)(param_3 + 0x30) == 0) {
      puVar4[10] = 0;
      *(undefined8 **)(param_3 + 0x30) = puVar4;
    }
    else {
      puVar4[10] = *(undefined8 *)(param_3 + 0x38);
      *(undefined8 **)(*(longlong *)(param_3 + 0x38) + 0x58) = puVar4;
    }
    *(undefined8 **)(param_3 + 0x38) = puVar4;
    puVar4[4] = param_3;
    puVar4[0xb] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1803e04d0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x468,8,3,0,0xfffffffffffffffe);
  plVar6 = (longlong *)FUN_1803dd0f0(uVar5);
  *(undefined4 *)(plVar6 + 0x18) = *(undefined4 *)(param_1 + 0xc0);
  uVar5 = *(undefined8 *)(param_1 + 0xdc);
  *(undefined8 *)((longlong)plVar6 + 0xd4) = *(undefined8 *)(param_1 + 0xd4);
  *(undefined8 *)((longlong)plVar6 + 0xdc) = uVar5;
  *(undefined4 *)((longlong)plVar6 + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(plVar6 + 6) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)plVar6 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  lVar4 = *(longlong *)(param_1 + 0x48);
  plVar6[8] = *(longlong *)(param_1 + 0x40);
  plVar6[9] = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x58);
  plVar6[10] = *(longlong *)(param_1 + 0x50);
  plVar6[0xb] = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x68);
  plVar6[0xc] = *(longlong *)(param_1 + 0x60);
  plVar6[0xd] = lVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(plVar6 + 0xe) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((longlong)plVar6 + 0x74) = uVar1;
  *(undefined4 *)(plVar6 + 0xf) = uVar2;
  *(undefined4 *)((longlong)plVar6 + 0x7c) = uVar3;
  *(undefined4 *)(plVar6 + 0x1e) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((longlong)plVar6 + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)((longlong)plVar6 + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(plVar6 + 0x1d) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(plVar6 + 0x1f) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)((longlong)plVar6 + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(plVar6 + 0x19) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(plVar6 + 7) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)plVar6 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((longlong)plVar6 + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((longlong)plVar6 + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  uVar1 = *(undefined4 *)(param_1 + 0x15c);
  uVar2 = *(undefined4 *)(param_1 + 0x160);
  uVar3 = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(plVar6 + 0x2b) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)((longlong)plVar6 + 0x15c) = uVar1;
  *(undefined4 *)(plVar6 + 0x2c) = uVar2;
  *(undefined4 *)((longlong)plVar6 + 0x164) = uVar3;
  FUN_180627be0(plVar6 + 0x27,param_1 + 0x138);
  FUN_180627be0(plVar6 + 0x23,param_1 + 0x118);
  *(undefined4 *)(plVar6 + 0x2d) = *(undefined4 *)(param_1 + 0x168);
  FUN_180627be0(plVar6 + 0x81,param_1 + 0x408);
  FUN_1803e0bc0(plVar6);
  *param_2 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  return param_2;
}







#include "TaleWorlds.Native.Split.h"

// 99_part_03_part074_sub002_sub002.c - 1 个函数

// 函数: void FUN_18023ec80(longlong param_1)
void FUN_18023ec80(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong **pplVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  longlong **pplVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong **pplVar20;
  longlong lVar21;
  longlong **pplVar22;
  longlong **pplVar23;
  undefined4 uVar24;
  undefined1 auStack_268 [32];
  longlong *plStack_248;
  longlong **pplStack_240;
  longlong **pplStack_238;
  longlong **pplStack_230;
  undefined4 uStack_228;
  longlong *plStack_220;
  longlong **pplStack_218;
  longlong *plStack_210;
  longlong *plStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined1 *puStack_1f0;
  uint auStack_1e8 [2];
  undefined1 auStack_1e0 [64];
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined4 uStack_190;
  undefined1 auStack_188 [64];
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [64];
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [64];
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  longlong **pplVar16;
  
  uStack_200 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  lVar21 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x20);
  puVar15 = *(undefined **)(*(longlong *)(param_1 + 0xa8) + 0x70);
  puVar14 = &DAT_18098bc73;
  if (puVar15 != (undefined *)0x0) {
    puVar14 = puVar15;
  }
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))((longlong *)(param_1 + 0x10),puVar14);
  *(undefined4 *)(param_1 + 0x1588) = *(undefined4 *)(lVar21 + 8);
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0x18) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0x18);
  }
  (**(code **)(*(longlong *)(param_1 + 0x16b0) + 0x10))((longlong *)(param_1 + 0x16b0),puVar15);
  cVar3 = *(char *)(lVar21 + 0x7d4);
  *(char *)(param_1 + 0x1614) = cVar3;
  plVar1 = (longlong *)(param_1 + 0x1708);
  if (cVar3 == '\0') {
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(lVar21 + 0x38) != (undefined *)0x0) {
      puVar15 = *(undefined **)(lVar21 + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,puVar15);
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(lVar21 + 0x58) != (undefined *)0x0) {
      puVar15 = *(undefined **)(lVar21 + 0x58);
    }
    (**(code **)(*(longlong *)(param_1 + 0x1760) + 0x10))((longlong *)(param_1 + 0x1760),puVar15);
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(lVar21 + 0x78) != (undefined *)0x0) {
      puVar15 = *(undefined **)(lVar21 + 0x78);
    }
    (**(code **)(*(longlong *)(param_1 + 0x17b8) + 0x10))((longlong *)(param_1 + 0x17b8),puVar15);
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(lVar21 + 0x98) != (undefined *)0x0) {
      puVar15 = *(undefined **)(lVar21 + 0x98);
    }
    (**(code **)(*(longlong *)(param_1 + 0x1810) + 0x10))((longlong *)(param_1 + 0x1810),puVar15);
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(lVar21 + 0xf8) != (undefined *)0x0) {
      puVar15 = *(undefined **)(lVar21 + 0xf8);
    }
    (**(code **)(*(longlong *)(param_1 + 0x1918) + 0x10))((longlong *)(param_1 + 0x1918),puVar15);
  }
  else {
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
      puVar15 = *(undefined **)(param_1 + 0x18);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,puVar15);
    uVar13 = *(uint *)(param_1 + 0x1718) + 8;
    if (uVar13 < 0x3f) {
      puVar10 = (undefined8 *)
                ((ulonglong)*(uint *)(param_1 + 0x1718) + *(longlong *)(param_1 + 0x1710));
      *puVar10 = 0x726566667562675f;
      *(undefined1 *)(puVar10 + 1) = 0;
      *(uint *)(param_1 + 0x1718) = uVar13;
    }
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
      puVar15 = *(undefined **)(param_1 + 0x18);
    }
    (**(code **)(*(longlong *)(param_1 + 0x1760) + 0x10))((longlong *)(param_1 + 0x1760),puVar15);
    uVar13 = *(uint *)(param_1 + 6000) + 10;
    if (uVar13 < 0x3f) {
      puVar10 = (undefined8 *)
                ((ulonglong)*(uint *)(param_1 + 6000) + *(longlong *)(param_1 + 0x1768));
      *puVar10 = 0x6d776f646168735f;
      *(undefined2 *)(puVar10 + 1) = 0x7061;
      *(undefined1 *)((longlong)puVar10 + 10) = 0;
      *(uint *)(param_1 + 6000) = uVar13;
    }
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
      puVar15 = *(undefined **)(param_1 + 0x18);
    }
    (**(code **)(*(longlong *)(param_1 + 0x17b8) + 0x10))((longlong *)(param_1 + 0x17b8),puVar15);
    uVar13 = *(uint *)(param_1 + 0x17c8) + 0xb;
    if (uVar13 < 0x3f) {
      puVar10 = (undefined8 *)
                ((ulonglong)*(uint *)(param_1 + 0x17c8) + *(longlong *)(param_1 + 0x17c0));
      *puVar10 = 0x696c746e696f705f;
      *(undefined4 *)(puVar10 + 1) = 0x746867;
      *(uint *)(param_1 + 0x17c8) = uVar13;
    }
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
      puVar15 = *(undefined **)(param_1 + 0x18);
    }
    (**(code **)(*(longlong *)(param_1 + 0x1810) + 0x10))((longlong *)(param_1 + 0x1810),puVar15);
    uVar13 = *(uint *)(param_1 + 0x1820) + 0x10;
    if (uVar13 < 0x3f) {
      puVar11 = (undefined4 *)
                ((ulonglong)*(uint *)(param_1 + 0x1820) + *(longlong *)(param_1 + 0x1818));
      *puVar11 = 0x6e6f635f;
      puVar11[1] = 0x6e617473;
      puVar11[2] = 0x756f5f74;
      puVar11[3] = 0x74757074;
      *(undefined1 *)(puVar11 + 4) = 0;
      *(uint *)(param_1 + 0x1820) = uVar13;
    }
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
      puVar15 = *(undefined **)(param_1 + 0x18);
    }
    (**(code **)(*(longlong *)(param_1 + 0x1918) + 0x10))((longlong *)(param_1 + 0x1918),puVar15);
    uVar13 = *(uint *)(param_1 + 0x1928) + 9;
    if (uVar13 < 0x3f) {
      puVar10 = (undefined8 *)
                ((ulonglong)*(uint *)(param_1 + 0x1928) + *(longlong *)(param_1 + 0x1920));
      *puVar10 = 0x6172647265766f5f;
      *(undefined2 *)(puVar10 + 1) = 0x77;
      *(uint *)(param_1 + 0x1928) = uVar13;
    }
  }
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0xb8) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0xb8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1868) + 0x10))((longlong *)(param_1 + 0x1868),puVar15);
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0xd8) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0xd8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x18c0) + 0x10))((longlong *)(param_1 + 0x18c0),puVar15);
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0x118) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0x118);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1618) + 0x10))((longlong *)(param_1 + 0x1618),puVar15);
  if ((undefined8 *)(param_1 + 0x1598) != (undefined8 *)(lVar21 + 0x130)) {
    FUN_180241a50((undefined8 *)(param_1 + 0x1598),*(undefined8 *)(lVar21 + 0x130),
                  *(undefined8 *)(lVar21 + 0x138));
  }
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0x158) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0x158);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1970) + 0x10))((longlong *)(param_1 + 0x1970),puVar15);
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0x178) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0x178);
  }
  (**(code **)(*(longlong *)(param_1 + 0x19c8) + 0x10))((longlong *)(param_1 + 0x19c8),puVar15);
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0x198) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0x198);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1a20) + 0x10))((longlong *)(param_1 + 0x1a20),puVar15);
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0x1b8) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0x1b8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1a78) + 0x10))((longlong *)(param_1 + 0x1a78),puVar15);
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0x1d8) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0x1d8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1ad0) + 0x10))((longlong *)(param_1 + 0x1ad0),puVar15);
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0x1f8) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0x1f8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1b28) + 0x10))((longlong *)(param_1 + 0x1b28),puVar15);
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0x218) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0x218);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1b80) + 0x10))((longlong *)(param_1 + 0x1b80),puVar15);
  puVar15 = &DAT_18098bc73;
  if (*(undefined **)(lVar21 + 0x238) != (undefined *)0x0) {
    puVar15 = *(undefined **)(lVar21 + 0x238);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1bd8) + 0x10))((longlong *)(param_1 + 0x1bd8),puVar15);
  puVar10 = (undefined8 *)(param_1 + 0x1c38);
  lVar19 = 0x10;
  do {
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)((lVar21 - param_1) + -0x19d8 + (longlong)puVar10)
    ;
    puVar15 = *(undefined **)((lVar21 - param_1) + -0x19e0 + (longlong)puVar10);
    puVar14 = &DAT_18098bc73;
    if (puVar15 != (undefined *)0x0) {
      puVar14 = puVar15;
    }
    strcpy_s(*puVar10,0x40,puVar14);
    puVar10 = puVar10 + 0xb;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  *(undefined4 *)(param_1 + 0x1610) = *(undefined4 *)(lVar21 + 2000);
  uVar24 = FUN_18023fa30(param_1 + 0xe8,lVar21 + 0x7d8);
  plVar1 = (longlong *)(param_1 + 0xc0);
  iVar5 = (int)(*(longlong *)(param_1 + 200) - *plVar1 >> 3);
  pplVar16 = (longlong **)0x0;
  pplVar17 = pplVar16;
  if (0 < iVar5) {
    do {
      pplStack_218 = &plStack_248;
      plStack_248 = *(longlong **)(*plVar1 + (longlong)pplVar17 * 8);
      if (plStack_248 != (longlong *)0x0) {
        uVar24 = (**(code **)(*plStack_248 + 0x28))();
      }
      uVar24 = FUN_1800b55b0(uVar24,&plStack_248);
      pplVar17 = (longlong **)((longlong)pplVar17 + 1);
    } while ((longlong)pplVar17 < (longlong)iVar5);
  }
  if (*(char *)(param_1 + 0x1614) == '\0') {
    FUN_1800b8500(plVar1);
  }
  else {
    puStack_1f8 = &UNK_1809fcc58;
    puStack_1f0 = auStack_1e0;
    auStack_1e0[0] = 0;
    auStack_1e8[0] = *(uint *)(param_1 + 0x1718);
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x1710) != (undefined *)0x0) {
      puVar15 = *(undefined **)(param_1 + 0x1710);
    }
    strcpy_s(auStack_1e0,0x40,puVar15);
    puStack_1a0 = &UNK_1809fcc58;
    puStack_198 = auStack_188;
    auStack_188[0] = 0;
    uStack_190 = *(undefined4 *)(param_1 + 6000);
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x1768) != (undefined *)0x0) {
      puVar15 = *(undefined **)(param_1 + 0x1768);
    }
    strcpy_s(auStack_188,0x40,puVar15);
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    auStack_130[0] = 0;
    uStack_138 = *(undefined4 *)(param_1 + 0x17c8);
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x17c0) != (undefined *)0x0) {
      puVar15 = *(undefined **)(param_1 + 0x17c0);
    }
    strcpy_s(auStack_130,0x40,puVar15);
    puStack_f0 = &UNK_1809fcc58;
    puStack_e8 = auStack_d8;
    auStack_d8[0] = 0;
    uStack_e0 = *(undefined4 *)(param_1 + 0x1820);
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x1818) != (undefined *)0x0) {
      puVar15 = *(undefined **)(param_1 + 0x1818);
    }
    strcpy_s(auStack_d8,0x40,puVar15);
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = *(undefined4 *)(param_1 + 0x1928);
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x1920) != (undefined *)0x0) {
      puVar15 = *(undefined **)(param_1 + 0x1920);
    }
    strcpy_s(auStack_80,0x40,puVar15);
    pplStack_240 = (longlong **)0x0;
    pplStack_238 = (longlong **)0x0;
    pplStack_230 = (longlong **)0x0;
    uStack_228 = 3;
    plStack_248 = (longlong *)((ulonglong)plStack_248 & 0xffffffff00000000);
    pplVar17 = (longlong **)0x0;
    pplVar9 = pplVar16;
    pplVar22 = (longlong **)0x0;
    do {
      iVar5 = (int)pplVar16;
      pplVar20 = pplVar17;
      pplVar23 = pplVar22;
      if (auStack_1e8[(longlong)iVar5 * 0x16] != 0) {
        plStack_220 = (longlong *)0x0;
        plVar1 = *(longlong **)(param_1 + 200);
        plVar8 = *(longlong **)(param_1 + 0xc0);
        if (plVar8 == plVar1) {
LAB_18023f4be:
          uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x2210,0x10,0x11);
          plVar8 = (longlong *)FUN_18023fe10(uVar7);
          if (plVar8 != (longlong *)0x0) {
            plStack_210 = plVar8;
            (**(code **)(*plVar8 + 0x28))(plVar8);
          }
          plStack_210 = (longlong *)0x0;
          puVar15 = &DAT_18098bc73;
          if (*(undefined **)(auStack_1e8 + (longlong)(int)plStack_248 * 0x16 + -2) !=
              (undefined *)0x0) {
            puVar15 = *(undefined **)(auStack_1e8 + (longlong)(int)plStack_248 * 0x16 + -2);
          }
          plStack_220 = plVar8;
          (**(code **)(plVar8[2] + 0x10))(plVar8 + 2,puVar15);
        }
        else {
          uVar13 = auStack_1e8[(longlong)(int)plStack_248 * 0x16];
          do {
            uVar4 = *(uint *)(*plVar8 + 0x20);
            uVar12 = uVar13;
            if (uVar4 == uVar13) {
              if (uVar4 != 0) {
                pbVar6 = *(byte **)(*plVar8 + 0x18);
                lVar21 = *(longlong *)(auStack_1e8 + (longlong)(int)plStack_248 * 0x16 + -2) -
                         (longlong)pbVar6;
                do {
                  pbVar2 = pbVar6 + lVar21;
                  uVar12 = (uint)*pbVar6 - (uint)*pbVar2;
                  if (uVar12 != 0) break;
                  pbVar6 = pbVar6 + 1;
                } while (*pbVar2 != 0);
              }
LAB_18023f4ae:
              if (uVar12 == 0) break;
            }
            else if (uVar4 == 0) goto LAB_18023f4ae;
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar1);
          if (plVar8 == plVar1) goto LAB_18023f4be;
          plVar8 = (longlong *)*plVar8;
          if (plVar8 != (longlong *)0x0) {
            plStack_208 = plVar8;
            (**(code **)(*plVar8 + 0x28))(plVar8);
          }
          plStack_208 = (longlong *)0x0;
          plStack_220 = plVar8;
        }
        (**(code **)(plVar8[0x302] + 0x10))(plVar8 + 0x302,&DAT_18098bc73);
        (**(code **)(plVar8[0x30d] + 0x10))(plVar8 + 0x30d,&DAT_18098bc73);
        (**(code **)(plVar8[0x318] + 0x10))(plVar8 + 0x318,&DAT_18098bc73);
        (**(code **)(plVar8[0x2e1] + 0x10))(plVar8 + 0x2e1,&DAT_18098bc73);
        (**(code **)(plVar8[0x2ec] + 0x10))(plVar8 + 0x2ec,&DAT_18098bc73);
        (**(code **)(plVar8[0x2f7] + 0x10))(plVar8 + 0x2f7,&DAT_18098bc73);
        (**(code **)(plVar8[0x323] + 0x10))(plVar8 + 0x323,&DAT_18098bc73);
        *(uint *)(plVar8 + 0x2d8) = auStack_1e8[(longlong)(int)plStack_248 * 0x16];
        puVar15 = &DAT_18098bc73;
        if (*(undefined **)(auStack_1e8 + (longlong)(int)plStack_248 * 0x16 + -2) !=
            (undefined *)0x0) {
          puVar15 = *(undefined **)(auStack_1e8 + (longlong)(int)plStack_248 * 0x16 + -2);
        }
        strcpy_s(plVar8[0x2d7],0x40,puVar15);
        *(undefined4 *)(plVar8 + 0x330) = *(undefined4 *)(param_1 + 0x1980);
        puVar15 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x1978) != (undefined *)0x0) {
          puVar15 = *(undefined **)(param_1 + 0x1978);
        }
        strcpy_s(plVar8[0x32f],0x40,puVar15);
        *(undefined4 *)(plVar8 + 0x33b) = *(undefined4 *)(param_1 + 0x19d8);
        puVar15 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x19d0) != (undefined *)0x0) {
          puVar15 = *(undefined **)(param_1 + 0x19d0);
        }
        strcpy_s(plVar8[0x33a],0x40,puVar15);
        *(undefined4 *)(plVar8 + 0x346) = *(undefined4 *)(param_1 + 0x1a30);
        puVar15 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x1a28) != (undefined *)0x0) {
          puVar15 = *(undefined **)(param_1 + 0x1a28);
        }
        strcpy_s(plVar8[0x345],0x40,puVar15);
        *(undefined4 *)(plVar8 + 0x351) = *(undefined4 *)(param_1 + 0x1a88);
        puVar15 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x1a80) != (undefined *)0x0) {
          puVar15 = *(undefined **)(param_1 + 0x1a80);
        }
        strcpy_s(plVar8[0x350],0x40,puVar15);
        *(undefined4 *)(plVar8 + 0x35c) = *(undefined4 *)(param_1 + 0x1980);
        puVar15 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x1978) != (undefined *)0x0) {
          puVar15 = *(undefined **)(param_1 + 0x1978);
        }
        strcpy_s(plVar8[0x35b],0x40,puVar15);
        *(undefined4 *)(plVar8 + 0x367) = *(undefined4 *)(param_1 + 0x19d8);
        puVar15 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x19d0) != (undefined *)0x0) {
          puVar15 = *(undefined **)(param_1 + 0x19d0);
        }
        strcpy_s(plVar8[0x366],0x40,puVar15);
        *(undefined4 *)(plVar8 + 0x372) = *(undefined4 *)(param_1 + 0x1a30);
        puVar15 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x1a28) != (undefined *)0x0) {
          puVar15 = *(undefined **)(param_1 + 0x1a28);
        }
        strcpy_s(plVar8[0x371],0x40,puVar15);
        *(undefined4 *)(plVar8 + 0x37d) = *(undefined4 *)(param_1 + 0x1a88);
        puVar15 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x1a80) != (undefined *)0x0) {
          puVar15 = *(undefined **)(param_1 + 0x1a80);
        }
        strcpy_s(plVar8[0x37c],0x40,puVar15);
        *(undefined4 *)(plVar8 + 0x2b1) = *(undefined4 *)(param_1 + 0x1588);
        *(undefined4 *)(plVar8 + 0x2c2) = *(undefined4 *)(param_1 + 0x1610);
        *(undefined4 *)(plVar8 + 0x2c5) = *(undefined4 *)(param_1 + 0x1628);
        puVar15 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x1620) != (undefined *)0x0) {
          puVar15 = *(undefined **)(param_1 + 0x1620);
        }
        strcpy_s(plVar8[0x2c4],0x40,puVar15);
        if (plVar8 + 0x2b3 != (longlong *)(param_1 + 0x1598)) {
          FUN_180241a50(plVar8 + 0x2b3,*(longlong *)(param_1 + 0x1598),
                        *(undefined8 *)(param_1 + 0x15a0));
        }
        plVar8[0x1c] = param_1;
        plVar8[0x15] = *(longlong *)(param_1 + 0xa8);
        if (pplVar17 < pplVar9) {
          pplVar20 = pplVar17 + 1;
          *pplVar17 = plVar8;
          pplStack_238 = pplVar20;
          (**(code **)(*plVar8 + 0x28))(plVar8);
        }
        else {
          lVar21 = (longlong)pplVar17 - (longlong)pplVar22 >> 3;
          pplVar16 = pplVar22;
          if (lVar21 == 0) {
            lVar21 = 1;
LAB_18023f87a:
            pplVar9 = (longlong **)FUN_18062b420(_DAT_180c8ed18,lVar21 * 8,3);
            pplVar23 = pplVar9;
          }
          else {
            lVar21 = lVar21 * 2;
            if (lVar21 != 0) goto LAB_18023f87a;
            pplVar9 = (longlong **)0x0;
            pplVar23 = pplVar9;
          }
          for (; pplVar16 != pplVar17; pplVar16 = pplVar16 + 1) {
            *pplVar9 = *pplVar16;
            *pplVar16 = (longlong *)0x0;
            pplVar9 = pplVar9 + 1;
          }
          *pplVar9 = plVar8;
          (**(code **)(*plVar8 + 0x28))(plVar8);
          pplVar20 = pplVar9 + 1;
          for (pplVar16 = pplVar22; pplStack_218 = pplVar20, pplVar16 != pplVar17;
              pplVar16 = pplVar16 + 1) {
            if (*pplVar16 != (longlong *)0x0) {
              (**(code **)(**pplVar16 + 0x38))();
            }
            pplVar20 = pplStack_218;
          }
          if (pplVar22 != (longlong **)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(pplVar22);
          }
          pplVar9 = pplVar23 + lVar21;
          pplStack_240 = pplVar23;
          pplStack_238 = pplVar20;
          pplStack_230 = pplVar9;
        }
        lVar21 = _DAT_180c86930;
        iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
        *(undefined1 *)((longlong)plVar8 + 0xb2) = 1;
        FUN_1802abe00((longlong)iVar5 * 0x98 + lVar21 + 8,plVar8);
        (**(code **)(*plVar8 + 0x38))(plVar8);
        iVar5 = (int)plStack_248;
      }
      uVar13 = iVar5 + 1;
      pplVar16 = (longlong **)(ulonglong)uVar13;
      plStack_248 = (longlong *)CONCAT44(plStack_248._4_4_,uVar13);
      pplVar17 = pplVar20;
      pplVar22 = pplVar23;
    } while ((int)uVar13 < 5);
    plVar1 = *(longlong **)(param_1 + 0xc0);
    *(longlong ***)(param_1 + 0xc0) = pplVar23;
    plVar8 = *(longlong **)(param_1 + 200);
    *(longlong ***)(param_1 + 200) = pplVar20;
    pplStack_230 = *(longlong ***)(param_1 + 0xd0);
    *(longlong ***)(param_1 + 0xd0) = pplVar9;
    uStack_228 = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0xd8) = 3;
    pplStack_240 = (longlong **)plVar1;
    pplStack_238 = (longlong **)plVar8;
    for (plVar18 = plVar1; plVar18 != plVar8; plVar18 = plVar18 + 1) {
      if ((longlong *)*plVar18 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar18 + 0x38))();
      }
    }
    if (plVar1 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar1);
    }
    FUN_1808fc8a8(&puStack_1f8,0x58,5,FUN_180044a30);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_268);
}



longlong FUN_18023fa30(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_180627be0();
  if ((undefined8 *)(param_1 + 0x20) != (undefined8 *)(param_2 + 0x20)) {
    FUN_1802418c0((undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20),
                  *(undefined8 *)(param_2 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x48) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0x48);
  }
  strcpy_s(*(undefined8 *)(param_1 + 0x48),0x80,puVar4);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0xe8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0xe8);
  }
  strcpy_s(*(undefined8 *)(param_1 + 0xe8),0x80,puVar4);
  if ((undefined8 *)(param_1 + 0x178) != (undefined8 *)(param_2 + 0x178)) {
    FUN_1802418c0((undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_2 + 0x178),
                  *(undefined8 *)(param_2 + 0x180));
  }
  puVar2 = (undefined4 *)(param_1 + 0x1a8);
  lVar6 = param_2 - param_1;
  lVar7 = 5;
  do {
    *puVar2 = *(undefined4 *)(lVar6 + (longlong)puVar2);
    puVar4 = *(undefined **)(lVar6 + -8 + (longlong)puVar2);
    puVar5 = &DAT_18098bc73;
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
    }
    strcpy_s(*(undefined8 *)(puVar2 + -2),0x80,puVar5);
    puVar2 = puVar2 + 0x26;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if ((undefined8 *)(param_1 + 0x490) != (undefined8 *)(param_2 + 0x490)) {
    FUN_1802418c0((undefined8 *)(param_1 + 0x490),*(undefined8 *)(param_2 + 0x490),
                  *(undefined8 *)(param_2 + 0x498));
  }
  puVar2 = (undefined4 *)(param_1 + 0x4c0);
  lVar7 = 0x10;
  do {
    *puVar2 = *(undefined4 *)((longlong)puVar2 + lVar6);
    puVar4 = *(undefined **)((longlong)puVar2 + lVar6 + -8);
    puVar5 = &DAT_18098bc73;
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
    }
    strcpy_s(*(undefined8 *)(puVar2 + -2),0x40,puVar5);
    puVar2 = puVar2 + 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar2 = (undefined4 *)(param_1 + 0xa40);
  lVar7 = 9;
  do {
    *puVar2 = *(undefined4 *)((longlong)puVar2 + lVar6);
    puVar4 = *(undefined **)((longlong)puVar2 + lVar6 + -8);
    puVar5 = &DAT_18098bc73;
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
    }
    strcpy_s(*(undefined8 *)(puVar2 + -2),0x80,puVar5);
    puVar2 = puVar2 + 0x26;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0xf98) = *(undefined4 *)(param_2 + 0xf98);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0xf90) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0xf90);
  }
  strcpy_s(*(undefined8 *)(param_1 + 0xf90),0x80,puVar4);
  *(undefined4 *)(param_1 + 0x1030) = *(undefined4 *)(param_2 + 0x1030);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x1028) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0x1028);
  }
  strcpy_s(*(undefined8 *)(param_1 + 0x1028),0x80,puVar4);
  if ((undefined8 *)(param_1 + 0x10b8) != (undefined8 *)(param_2 + 0x10b8)) {
    FUN_1802418c0((undefined8 *)(param_1 + 0x10b8),*(undefined8 *)(param_2 + 0x10b8),
                  *(undefined8 *)(param_2 + 0x10c0));
  }
  uVar1 = *(uint *)(param_2 + 0x10e8);
  uVar3 = (ulonglong)uVar1;
  if (*(longlong *)(param_2 + 0x10e0) != 0) {
    FUN_1806277c0(param_1 + 0x10d8,uVar3);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(param_1 + 0x10e0),*(undefined8 *)(param_2 + 0x10e0),uVar3);
  }
  *(undefined4 *)(param_1 + 0x10e8) = 0;
  if (*(longlong *)(param_1 + 0x10e0) != 0) {
    *(undefined1 *)(uVar3 + *(longlong *)(param_1 + 0x10e0)) = 0;
  }
  *(undefined4 *)(param_1 + 0x10f4) = *(undefined4 *)(param_2 + 0x10f4);
  *(undefined1 *)(param_1 + 0x10f8) = *(undefined1 *)(param_2 + 0x10f8);
  *(undefined1 *)(param_1 + 0x10f9) = *(undefined1 *)(param_2 + 0x10f9);
  *(undefined4 *)(param_1 + 0x1110) = *(undefined4 *)(param_2 + 0x1110);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x1108) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0x1108);
  }
  strcpy_s(*(undefined8 *)(param_1 + 0x1108),0x80,puVar4);
  *(undefined4 *)(param_1 + 0x11a8) = *(undefined4 *)(param_2 + 0x11a8);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x11a0) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0x11a0);
  }
  strcpy_s(*(undefined8 *)(param_1 + 0x11a0),0x80,puVar4);
  *(undefined4 *)(param_1 + 0x1240) = *(undefined4 *)(param_2 + 0x1240);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x1238) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0x1238);
  }
  strcpy_s(*(undefined8 *)(param_1 + 0x1238),0x80,puVar4);
  *(undefined4 *)(param_1 + 0x12d8) = *(undefined4 *)(param_2 + 0x12d8);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x12d0) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0x12d0);
  }
  strcpy_s(*(undefined8 *)(param_1 + 0x12d0),0x80,puVar4);
  *(undefined4 *)(param_1 + 0x1370) = *(undefined4 *)(param_2 + 0x1370);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x1368) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0x1368);
  }
  strcpy_s(*(undefined8 *)(param_1 + 0x1368),0x80,puVar4);
  *(undefined4 *)(param_1 + 0x1408) = *(undefined4 *)(param_2 + 0x1408);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x1400) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0x1400);
  }
  strcpy_s(*(undefined8 *)(param_1 + 0x1400),0x80,puVar4);
  return param_1;
}



undefined8 * FUN_18023fe10(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a02e68;
  param_1[2] = &UNK_18098bcb0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = &UNK_1809fcc28;
  param_1[3] = param_1 + 5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *param_1 = &UNK_180a14220;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 3;
  FUN_180241f10(param_1 + 0x1d);
  param_1[0x2b3] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b5] = 0;
  *(undefined4 *)(param_1 + 0x2b6) = 3;
  param_1[0x2c3] = &UNK_18098bcb0;
  param_1[0x2c4] = 0;
  *(undefined4 *)(param_1 + 0x2c5) = 0;
  param_1[0x2c3] = &UNK_1809fcc58;
  param_1[0x2c4] = param_1 + 0x2c6;
  *(undefined4 *)(param_1 + 0x2c5) = 0;
  *(undefined1 *)(param_1 + 0x2c6) = 0;
  FUN_1808fc838(param_1 + 0x2cf,8,7,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x2d6] = &UNK_18098bcb0;
  param_1[0x2d7] = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  param_1[0x2d6] = &UNK_1809fcc58;
  param_1[0x2d7] = param_1 + 0x2d9;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x2d9) = 0;
  param_1[0x2e1] = &UNK_18098bcb0;
  param_1[0x2e2] = 0;
  *(undefined4 *)(param_1 + 0x2e3) = 0;
  param_1[0x2e1] = &UNK_1809fcc58;
  param_1[0x2e2] = param_1 + 0x2e4;
  *(undefined4 *)(param_1 + 0x2e3) = 0;
  *(undefined1 *)(param_1 + 0x2e4) = 0;
  param_1[0x2ec] = &UNK_18098bcb0;
  param_1[0x2ed] = 0;
  *(undefined4 *)(param_1 + 0x2ee) = 0;
  param_1[0x2ec] = &UNK_1809fcc58;
  param_1[0x2ed] = param_1 + 0x2ef;
  *(undefined4 *)(param_1 + 0x2ee) = 0;
  *(undefined1 *)(param_1 + 0x2ef) = 0;
  param_1[0x2f7] = &UNK_18098bcb0;
  param_1[0x2f8] = 0;
  *(undefined4 *)(param_1 + 0x2f9) = 0;
  param_1[0x2f7] = &UNK_1809fcc58;
  param_1[0x2f8] = param_1 + 0x2fa;
  *(undefined4 *)(param_1 + 0x2f9) = 0;
  *(undefined1 *)(param_1 + 0x2fa) = 0;
  param_1[0x302] = &UNK_18098bcb0;
  param_1[0x303] = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  param_1[0x302] = &UNK_1809fcc58;
  param_1[0x303] = param_1 + 0x305;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined1 *)(param_1 + 0x305) = 0;
  param_1[0x30d] = &UNK_18098bcb0;
  param_1[0x30e] = 0;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  param_1[0x30d] = &UNK_1809fcc58;
  param_1[0x30e] = param_1 + 0x310;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  *(undefined1 *)(param_1 + 0x310) = 0;
  param_1[0x318] = &UNK_18098bcb0;
  param_1[0x319] = 0;
  *(undefined4 *)(param_1 + 0x31a) = 0;
  param_1[0x318] = &UNK_1809fcc58;
  param_1[0x319] = param_1 + 0x31b;
  *(undefined4 *)(param_1 + 0x31a) = 0;
  *(undefined1 *)(param_1 + 0x31b) = 0;
  param_1[0x323] = &UNK_18098bcb0;
  param_1[0x324] = 0;
  *(undefined4 *)(param_1 + 0x325) = 0;
  param_1[0x323] = &UNK_1809fcc58;
  param_1[0x324] = param_1 + 0x326;
  *(undefined4 *)(param_1 + 0x325) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  param_1[0x32e] = &UNK_18098bcb0;
  param_1[0x32f] = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  param_1[0x32e] = &UNK_1809fcc58;
  param_1[0x32f] = param_1 + 0x331;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined1 *)(param_1 + 0x331) = 0;
  param_1[0x339] = &UNK_18098bcb0;
  param_1[0x33a] = 0;
  *(undefined4 *)(param_1 + 0x33b) = 0;
  param_1[0x339] = &UNK_1809fcc58;
  param_1[0x33a] = param_1 + 0x33c;
  *(undefined4 *)(param_1 + 0x33b) = 0;
  *(undefined1 *)(param_1 + 0x33c) = 0;
  param_1[0x344] = &UNK_18098bcb0;
  param_1[0x345] = 0;
  *(undefined4 *)(param_1 + 0x346) = 0;
  param_1[0x344] = &UNK_1809fcc58;
  param_1[0x345] = param_1 + 0x347;
  *(undefined4 *)(param_1 + 0x346) = 0;
  *(undefined1 *)(param_1 + 0x347) = 0;
  param_1[0x34f] = &UNK_18098bcb0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x351) = 0;
  param_1[0x34f] = &UNK_1809fcc58;
  param_1[0x350] = param_1 + 0x352;
  *(undefined4 *)(param_1 + 0x351) = 0;
  *(undefined1 *)(param_1 + 0x352) = 0;
  param_1[0x35a] = &UNK_18098bcb0;
  param_1[0x35b] = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  param_1[0x35a] = &UNK_1809fcc58;
  param_1[0x35b] = param_1 + 0x35d;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined1 *)(param_1 + 0x35d) = 0;
  param_1[0x365] = &UNK_18098bcb0;
  param_1[0x366] = 0;
  *(undefined4 *)(param_1 + 0x367) = 0;
  param_1[0x365] = &UNK_1809fcc58;
  param_1[0x366] = param_1 + 0x368;
  *(undefined4 *)(param_1 + 0x367) = 0;
  *(undefined1 *)(param_1 + 0x368) = 0;
  param_1[0x370] = &UNK_18098bcb0;
  param_1[0x371] = 0;
  *(undefined4 *)(param_1 + 0x372) = 0;
  param_1[0x370] = &UNK_1809fcc58;
  param_1[0x371] = param_1 + 0x373;
  *(undefined4 *)(param_1 + 0x372) = 0;
  *(undefined1 *)(param_1 + 0x373) = 0;
  param_1[0x37b] = &UNK_18098bcb0;
  param_1[0x37c] = 0;
  *(undefined4 *)(param_1 + 0x37d) = 0;
  param_1[0x37b] = &UNK_1809fcc58;
  param_1[0x37c] = param_1 + 0x37e;
  *(undefined4 *)(param_1 + 0x37d) = 0;
  *(undefined1 *)(param_1 + 0x37e) = 0;
  FUN_1808fc838(param_1 + 0x386,0x58,0x10,FUN_180049cd0,FUN_180044a30);
  plVar1 = param_1 + 0x436;
  *plVar1 = 0;
  param_1[0x437] = 0;
  param_1[0x438] = 0;
  *(undefined4 *)(param_1 + 0x439) = 0x1a;
  param_1[0x43a] = 0;
  param_1[0x43b] = 0;
  param_1[0x43c] = 0;
  *(undefined4 *)(param_1 + 0x43d) = 0x1a;
  param_1[0x43e] = 0;
  param_1[0x43f] = 0;
  param_1[0x440] = 0;
  *(undefined4 *)(param_1 + 0x441) = 3;
  *(undefined4 *)(param_1 + 0x2b1) = 0;
  param_1[0x15] = 0;
  param_1[0x1c] = 0;
  param_1[0x2ce] = 0;
  *(undefined4 *)(param_1 + 0x2c2) = 0;
  param_1[0x2b7] = 0;
  puVar2 = (undefined8 *)param_1[0x437];
  uVar3 = ((longlong)puVar2 - *plVar1) / 0x58;
  if (uVar3 < 0x10) {
    FUN_180241480(plVar1,0x10 - uVar3);
  }
  else {
    for (puVar4 = (undefined8 *)(*plVar1 + 0x580); puVar4 != puVar2; puVar4 = puVar4 + 0xb) {
      (**(code **)*puVar4)(puVar4,0);
    }
    param_1[0x437] = *plVar1 + 0x580;
  }
  FUN_1802412f0(param_1 + 0x43a);
  FUN_1800f6ad0(param_1 + 0x43e,0x10);
  FUN_1802403c0(param_1);
  param_1[0x17] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1614) = 0;
  param_1[0x2b8] = 0xffffffffffffffff;
  param_1[0x2b0] = 0xffffffffffffffff;
  param_1[0x2b9] = 0xffffffffffffffff;
  param_1[0x2ba] = 0xffffffffffffffff;
  param_1[699] = 0xffffffffffffffff;
  param_1[700] = 0xffffffffffffffff;
  param_1[0x2bd] = 0xffffffffffffffff;
  param_1[0x2be] = 0xffffffffffffffff;
  param_1[0x2bf] = 0xffffffffffffffff;
  param_1[0x2c0] = 0xffffffffffffffff;
  param_1[0x2c1] = 0xffffffffffffffff;
  return param_1;
}









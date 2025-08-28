#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part210.c - 1 个函数

// 函数: void FUN_18018cef0(longlong param_1,longlong param_2,longlong param_3,int param_4)
void FUN_18018cef0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  char *pcVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  char *pcVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  char *pcVar23;
  undefined1 auStack_388 [16];
  longlong lStack_378;
  int iStack_370;
  int iStack_360;
  undefined1 auStack_68 [8];
  longlong lStack_60;
  uint uStack_58;
  undefined4 uStack_4c;
  char *pcVar22;
  char *pcVar24;
  
  pcVar22 = (char *)0x0;
  pcVar23 = "atmosphere";
  do {
    pcVar24 = pcVar23;
    pcVar23 = pcVar24 + 1;
  } while (*pcVar23 != '\0');
  for (pcVar23 = *(char **)(param_2 + 0x30); pcVar18 = pcVar22, pcVar23 != (char *)0x0;
      pcVar23 = *(char **)(pcVar23 + 0x58)) {
    pcVar8 = *(char **)pcVar23;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar14 = pcVar22;
    }
    else {
      pcVar14 = *(char **)(pcVar23 + 0x10);
    }
    if (pcVar14 == pcVar24 + -0x180a0ae9f) {
      pcVar14 = pcVar8 + (longlong)pcVar14;
      pcVar18 = pcVar23;
      if (pcVar14 <= pcVar8) break;
      lVar17 = (longlong)&DAT_180a0aea0 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar17]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar14 <= pcVar8) goto LAB_18018cfa6;
      }
    }
  }
LAB_18018cfa6:
  FUN_180142b20(auStack_388);
  uStack_58 = *(uint *)(param_3 + 0x10);
  uVar19 = (ulonglong)uStack_58;
  if (*(longlong *)(param_3 + 8) != 0) {
    FUN_1806277c0(auStack_68,uVar19);
  }
  if (uStack_58 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_60,*(undefined8 *)(param_3 + 8),uVar19);
  }
  if (lStack_60 != 0) {
    *(undefined1 *)(uVar19 + lStack_60) = 0;
  }
  uStack_4c = *(undefined4 *)(param_3 + 0x1c);
  FUN_180143610(auStack_388,pcVar18);
  lVar17 = *(longlong *)(param_1 + 0x3a0);
  lVar15 = *(longlong *)(param_1 + 0x3a8) - lVar17;
  lVar3 = lVar15 >> 0x3f;
  lVar15 = lVar15 / 0x348 + lVar3;
  pcVar23 = pcVar22;
  iStack_360 = param_4;
  if (lVar15 != lVar3) {
    do {
      iVar2 = *(int *)(pcVar23 + lVar17 + 0x18);
      iVar16 = iStack_370;
      if (iVar2 == iStack_370) {
        if (iVar2 != 0) {
          pbVar9 = *(byte **)(pcVar23 + lVar17 + 0x10);
          lVar20 = lStack_378 - (longlong)pbVar9;
          do {
            pbVar1 = pbVar9 + lVar20;
            iVar16 = (uint)*pbVar9 - (uint)*pbVar1;
            if (iVar16 != 0) break;
            pbVar9 = pbVar9 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18018d08e:
        if (iVar16 == 0) {
          if ((longlong)(int)pcVar22 * 0x348 + lVar17 != 0) {
            if ((param_4 < 0) ||
               ((ulonglong)
                (*(longlong *)(*_DAT_180c86870 + 0x890) - *(longlong *)(*_DAT_180c86870 + 0x888) >>
                5) <= (ulonglong)(longlong)param_4)) {
              FUN_180628ca0();
            }
            puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x36,0x13);
            *(undefined1 *)puVar10 = 0;
            FUN_18064e990(puVar10);
            *puVar10 = 0x6576616820756f59;
            puVar10[1] = 0x68742065726f6d20;
            *(undefined4 *)(puVar10 + 2) = 0x6f206e61;
            *(undefined4 *)((longlong)puVar10 + 0x14) = 0x6120656e;
            *(undefined4 *)(puVar10 + 3) = 0x736f6d74;
            *(undefined4 *)((longlong)puVar10 + 0x1c) = 0x72656870;
            *(undefined4 *)(puVar10 + 4) = 0x69662065;
            *(undefined4 *)((longlong)puVar10 + 0x24) = 0x2073656c;
            *(undefined4 *)(puVar10 + 5) = 0x69766168;
            *(undefined4 *)((longlong)puVar10 + 0x2c) = 0x6e20676e;
            *(undefined4 *)(puVar10 + 6) = 0x20656d61;
            *(undefined2 *)((longlong)puVar10 + 0x34) = 0x22;
            puVar11 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x36,0x13);
            *(undefined1 *)puVar11 = 0;
            uVar21 = FUN_18064e990(puVar11);
            uVar7 = puVar10[1];
            *puVar11 = *puVar10;
            puVar11[1] = uVar7;
            uVar4 = *(undefined4 *)((longlong)puVar10 + 0x14);
            uVar5 = *(undefined4 *)(puVar10 + 3);
            uVar6 = *(undefined4 *)((longlong)puVar10 + 0x1c);
            *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar10 + 2);
            *(undefined4 *)((longlong)puVar11 + 0x14) = uVar4;
            *(undefined4 *)(puVar11 + 3) = uVar5;
            *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar6;
            uVar4 = *(undefined4 *)((longlong)puVar10 + 0x24);
            uVar5 = *(undefined4 *)(puVar10 + 5);
            uVar6 = *(undefined4 *)((longlong)puVar10 + 0x2c);
            *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar10 + 4);
            *(undefined4 *)((longlong)puVar11 + 0x24) = uVar4;
            *(undefined4 *)(puVar11 + 5) = uVar5;
            *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar6;
            *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(puVar10 + 6);
            *(undefined1 *)((longlong)puVar11 + 0x34) = *(undefined1 *)((longlong)puVar10 + 0x34);
            *(undefined1 *)((longlong)puVar11 + 0x35) = 0;
            if (iStack_370 < 1) {
              puVar12 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x1e,0x13,0x10);
              *(undefined1 *)puVar12 = 0;
              FUN_18064e990(puVar12);
              *puVar12 = 0x54202e22;
              puVar12[1] = 0x61206568;
              puVar12[2] = 0x736f6d74;
              puVar12[3] = 0x72656870;
              *(undefined8 *)(puVar12 + 4) = 0x646f6d2074612065;
              puVar12[6] = 0x20656c75;
              *(undefined2 *)(puVar12 + 7) = 0x22;
              puVar13 = (undefined1 *)0x0;
              if (puVar11 != (undefined8 *)0x0) {
                puVar13 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,0x36,0x13);
                *puVar13 = 0;
                FUN_18064e990(puVar13);
              }
                    // WARNING: Subroutine does not return
              memcpy(puVar13,puVar11,0x35);
            }
            if ((iStack_370 != -0x35) && (uVar21 < iStack_370 + 0x36U)) {
              puVar11 = (undefined8 *)
                        FUN_18062b8b0(_DAT_180c8ed18,puVar11,iStack_370 + 0x36U,0x10,0x13);
              FUN_18064e990(puVar11);
            }
                    // WARNING: Subroutine does not return
            memcpy((undefined1 *)((longlong)puVar11 + 0x35),lStack_378,(longlong)(iStack_370 + 1));
          }
          break;
        }
      }
      else if (iVar2 == 0) goto LAB_18018d08e;
      uVar21 = (int)pcVar22 + 1;
      pcVar22 = (char *)(ulonglong)uVar21;
      pcVar23 = pcVar23 + 0x348;
    } while ((ulonglong)(longlong)(int)uVar21 < (ulonglong)(lVar15 - lVar3));
  }
  FUN_180190630(param_1 + 0x3a0,auStack_388);
  FUN_1801431d0(auStack_388);
  return;
}



longlong FUN_18018d8f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  FUN_180627be0(param_1 + 8,param_2 + 8,param_3,param_4,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_180627be0(param_1 + 0x48,param_2 + 0x48);
  plVar1 = *(longlong **)(param_2 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x68);
  *(longlong **)(param_1 + 0x68) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  FUN_180627be0(param_1 + 0x70,param_2 + 0x70,param_3,param_4,uVar6);
  plVar1 = *(longlong **)(param_2 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x90);
  *(longlong **)(param_1 + 0x90) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  uVar6 = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)(param_1 + 0xcc) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_2 + 0xd4);
  *(undefined8 *)(param_1 + 0xdc) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xec) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xfc) = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  uVar4 = *(undefined4 *)(param_2 + 0x10c);
  uVar5 = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  *(undefined4 *)(param_1 + 0x10c) = uVar4;
  *(undefined4 *)(param_1 + 0x110) = uVar5;
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  FUN_180627be0(param_1 + 0x130,param_2 + 0x130);
  plVar1 = *(longlong **)(param_2 + 0x150);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x150);
  *(longlong **)(param_1 + 0x150) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  FUN_180627be0(param_1 + 0x158,param_2 + 0x158);
  plVar1 = *(longlong **)(param_2 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x178);
  *(longlong **)(param_1 + 0x178) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  FUN_180627be0(param_1 + 0x188,param_2 + 0x188);
  plVar1 = *(longlong **)(param_2 + 0x1a8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x1a8);
  *(longlong **)(param_1 + 0x1a8) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(longlong **)(param_2 + 0x1b0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x1b0);
  *(longlong **)(param_1 + 0x1b0) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  uVar3 = *(undefined4 *)(param_2 + 0x1c4);
  uVar4 = *(undefined4 *)(param_2 + 0x1c8);
  uVar5 = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1c4) = uVar3;
  *(undefined4 *)(param_1 + 0x1c8) = uVar4;
  *(undefined4 *)(param_1 + 0x1cc) = uVar5;
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
  FUN_180627be0(param_1 + 0x238,param_2 + 0x238);
  plVar1 = *(longlong **)(param_2 + 600);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 600);
  *(longlong **)(param_1 + 600) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  FUN_180627be0(param_1 + 0x260,param_2 + 0x260);
  plVar1 = *(longlong **)(param_2 + 0x280);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x280);
  *(longlong **)(param_1 + 0x280) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  uVar3 = *(undefined4 *)(param_2 + 0x2a0);
  uVar4 = *(undefined4 *)(param_2 + 0x2a4);
  uVar5 = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x2a0) = uVar3;
  *(undefined4 *)(param_1 + 0x2a4) = uVar4;
  *(undefined4 *)(param_1 + 0x2a8) = uVar5;
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_2 + 700);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_2 + 0x2e4);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  *(undefined1 *)(param_1 + 0x304) = *(undefined1 *)(param_2 + 0x304);
  *(undefined1 *)(param_1 + 0x305) = *(undefined1 *)(param_2 + 0x305);
  *(undefined1 *)(param_1 + 0x306) = *(undefined1 *)(param_2 + 0x306);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)(param_2 + 0x318);
  FUN_180627be0(param_1 + 800,param_2 + 800);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18018dff0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = 0;
  lVar4 = *(longlong *)(_DAT_180c8a9f8 + 0x3a0);
  iVar5 = (int)((*(longlong *)(_DAT_180c8a9f8 + 0x3a8) - lVar4) / 0x348);
  if (0 < iVar5) {
    iVar2 = *(int *)(param_2 + 0x10);
    puVar9 = (undefined8 *)(lVar4 + 0x10);
    uVar11 = uVar10;
    do {
      iVar3 = *(int *)(puVar9 + 1);
      iVar7 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar6 = (byte *)*puVar9;
          lVar8 = *(longlong *)(param_2 + 8) - (longlong)pbVar6;
          do {
            pbVar1 = pbVar6 + lVar8;
            iVar7 = (uint)*pbVar6 - (uint)*pbVar1;
            if (iVar7 != 0) break;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18018e08d:
        if (iVar7 == 0) {
          return (longlong)(int)uVar11 * 0x348 + lVar4;
        }
      }
      else if (iVar3 == 0) goto LAB_18018e08d;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 0x69;
    } while ((longlong)uVar10 < (longlong)iVar5);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




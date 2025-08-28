#include "TaleWorlds.Native.Split.h"

// 03_rendering_part233.c - 2 个函数

// 函数: void FUN_18039b3a0(longlong param_1,undefined8 param_2)
void FUN_18039b3a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plStackX_20;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  longlong lStack_48;
  uint uStack_40;
  
  FUN_180627ae0(&puStack_50);
  iVar6 = uStack_40 + 0xc;
  FUN_1806277c0(&puStack_50,iVar6);
  puVar7 = (undefined8 *)((ulonglong)uStack_40 + lStack_48);
  *puVar7 = 0x70616d776f6c662f;
  *(undefined4 *)(puVar7 + 1) = 0x7364642e;
  *(undefined1 *)((longlong)puVar7 + 0xc) = 0;
  uStack_40 = iVar6;
  cVar3 = FUN_180624af0(&puStack_50);
  if (cVar3 != '\0') {
    puStack_70 = &UNK_180a3c3e0;
    uStack_58 = 0;
    puStack_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    puVar7 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar7 = 0;
    puStack_68 = puVar7;
    uVar4 = FUN_18064e990(puVar7);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar4);
    *puVar7 = 0x2e70616d776f6c66;
    *(undefined4 *)(puVar7 + 1) = 0x736464;
    uStack_60 = 0xb;
    puVar5 = (undefined8 *)FUN_1800b2cd0(0x736464,&plStackX_20,&puStack_70,param_2);
    uVar1 = *puVar5;
    *puVar5 = 0;
    plVar2 = *(longlong **)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = uVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    puStack_70 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar7);
  }
  puStack_50 = &UNK_180a3c3e0;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18039b530(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)
void FUN_18039b530(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  longlong lVar13;
  longlong *plVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ***pppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  longlong lStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  
  uStack_60 = 0xfffffffffffffffe;
  pcVar16 = "floras";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  puVar8 = *(undefined8 **)(param_2 + 0x30);
  pcVar16 = (char *)0x0;
  do {
    pcVar10 = pcVar16;
    if (puVar8 == (undefined8 *)0x0) goto LAB_18039b640;
    pcVar10 = (char *)*puVar8;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar12 = pcVar16;
    }
    else {
      pcVar12 = (char *)puVar8[2];
    }
    if (pcVar12 == pcVar15 + -0x180a21873) {
      pcVar12 = pcVar10 + (longlong)pcVar12;
      if (pcVar12 <= pcVar10) {
LAB_18039b5d6:
        pcVar15 = "flora";
        do {
          pcVar12 = pcVar15;
          pcVar15 = pcVar12 + 1;
        } while (*pcVar15 != '\0');
        for (pcVar15 = (char *)puVar8[6]; pcVar10 = pcVar16, pcVar15 != (char *)0x0;
            pcVar15 = *(char **)(pcVar15 + 0x58)) {
          pcVar11 = *(char **)pcVar15;
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x180d48d24;
            pcVar3 = pcVar16;
          }
          else {
            pcVar3 = *(char **)(pcVar15 + 0x10);
          }
          if (pcVar3 == pcVar12 + -0x180a1cbf7) {
            pcVar3 = pcVar3 + (longlong)pcVar11;
            pcVar10 = pcVar15;
            if (pcVar3 <= pcVar11) break;
            lVar13 = (longlong)&UNK_180a1cbf8 - (longlong)pcVar11;
            while (*pcVar11 == pcVar11[lVar13]) {
              pcVar11 = pcVar11 + 1;
              if (pcVar3 <= pcVar11) goto LAB_18039b640;
            }
          }
        }
LAB_18039b640:
        puStack_138 = &UNK_180a3c3e0;
        uStack_120 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_180 = 3;
        pppuStack_1a8 = &pppuStack_1a8;
        pppuStack_1a0 = &pppuStack_1a8;
        pppuStack_198 = (undefined8 ****)0x0;
        uStack_190 = 0;
        uStack_188 = 0;
        do {
          if (pcVar10 == (char *)0x0) {
            FUN_180058370(&pppuStack_1a8,pppuStack_198);
            return;
          }
          pcVar16 = (char *)0x0;
          uVar4 = FUN_18062b1e0(_DAT_180c8ed18,400,8,3);
          plVar5 = (longlong *)FUN_1803dc330(uVar4);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5);
          }
          FUN_1803dc6f0(plVar5,pcVar10,param_4);
          if ((int)plVar5[10] == 0) {
            ppppuVar6 = (undefined8 ****)pppuStack_198;
            if ((undefined8 ****)pppuStack_198 != (undefined8 ****)0x0) {
              do {
                ppppuVar7 = ppppuVar6;
                ppppuVar6 = (undefined8 ****)ppppuVar7[1];
              } while ((undefined8 ****)ppppuVar7[1] != (undefined8 ****)0x0);
              if ((ppppuVar7 != &pppuStack_1a8) &&
                 (ppppuVar6 = (undefined8 ****)pppuStack_198, *(int *)(ppppuVar7 + 6) == 0)) {
                do {
                  ppppuVar7 = ppppuVar6;
                  ppppuVar6 = (undefined8 ****)ppppuVar7[1];
                } while ((undefined8 ****)ppppuVar7[1] != (undefined8 ****)0x0);
                if ((ppppuVar7 == &pppuStack_1a8) || (*(int *)(ppppuVar7 + 6) != 0)) {
                  if ((ppppuVar7 != (undefined8 ****)pppuStack_1a8) && (ppppuVar7 != &pppuStack_1a8)
                     ) {
                    func_0x00018066bd70();
                  }
                  ppppuVar7 = &pppuStack_1a8;
                  ppppuVar6 = (undefined8 ****)pppuStack_198;
                  if ((undefined8 ****)pppuStack_198 != (undefined8 ****)0x0) {
                    do {
                      ppppuVar7 = ppppuVar6;
                      if (*(int *)(ppppuVar7 + 6) != 0) {
                        ppppuVar6 = (undefined8 ****)ppppuVar7[1];
                      }
                      else {
                        ppppuVar6 = (undefined8 ****)*ppppuVar7;
                      }
                    } while (ppppuVar6 != (undefined8 ****)0x0);
                    if (*(int *)(ppppuVar7 + 6) == 0) goto LAB_18039b85d;
                  }
                  if (ppppuVar7 == (undefined8 ****)pppuStack_1a0) {
                    if ((ppppuVar7 == &pppuStack_1a8) ||
                       (pcVar15 = (char *)0x1, *(int *)(ppppuVar7 + 6) != 0)) {
                      pcVar15 = pcVar16;
                    }
                    lVar13 = FUN_18062b420(_DAT_180c8ed18,0x48,(undefined1)uStack_180);
                    ppuStack_f8 = (undefined **)(lVar13 + 0x20);
                    FUN_180627ae0(ppuStack_f8,&puStack_138);
                    *(undefined4 *)(lVar13 + 0x40) = 0;
                    // WARNING: Subroutine does not return
                    FUN_18066bdc0(lVar13,ppppuVar7,&pppuStack_1a8,pcVar15);
                  }
                  ppppuVar7 = (undefined8 ****)func_0x00018066b9a0(ppppuVar7);
                }
LAB_18039b85d:
                if (*(int *)(ppppuVar7 + 8) != 4) goto LAB_18039bcd4;
                pcVar15 = "flora";
                do {
                  pcVar12 = pcVar15;
                  pcVar15 = pcVar12 + 1;
                } while (*pcVar15 != '\0');
                for (pcVar10 = *(char **)(pcVar10 + 0x58); pcVar10 != (char *)0x0;
                    pcVar10 = *(char **)(pcVar10 + 0x58)) {
                  pcVar15 = *(char **)pcVar10;
                  if (pcVar15 == (char *)0x0) {
                    pcVar15 = (char *)0x180d48d24;
                    pcVar11 = pcVar16;
                  }
                  else {
                    pcVar11 = *(char **)(pcVar10 + 0x10);
                  }
                  if (pcVar11 == pcVar12 + -0x180a1cbf7) {
                    pcVar11 = pcVar11 + (longlong)pcVar15;
                    if (pcVar11 <= pcVar15) goto LAB_18039be46;
                    lVar13 = (longlong)&UNK_180a1cbf8 - (longlong)pcVar15;
                    while (*pcVar15 == pcVar15[lVar13]) {
                      pcVar15 = pcVar15 + 1;
                      if (pcVar11 <= pcVar15) goto LAB_18039be46;
                    }
                  }
                }
                goto LAB_18039be43;
              }
            }
            if (DAT_180c82842 == '\0') {
              puStack_158 = &UNK_180a3c3e0;
              uStack_140 = 0;
              puStack_150 = (undefined8 *)0x0;
              uStack_148 = 0;
              puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x33,0x13);
              *(undefined1 *)puVar8 = 0;
              puStack_150 = puVar8;
              uVar2 = FUN_18064e990(puVar8);
              uStack_140 = CONCAT44(uStack_140._4_4_,uVar2);
              *puVar8 = 0x6c61766e69206e41;
              puVar8[1] = 0x61726f6c66206469;
              *(undefined4 *)(puVar8 + 2) = 0x70797420;
              *(undefined4 *)((longlong)puVar8 + 0x14) = 0x73692065;
              *(undefined4 *)(puVar8 + 3) = 0x756f6620;
              *(undefined4 *)((longlong)puVar8 + 0x1c) = 0x6f20646e;
              *(undefined4 *)(puVar8 + 4) = 0x6373206e;
              *(undefined4 *)((longlong)puVar8 + 0x24) = 0x20656e65;
              *(undefined4 *)(puVar8 + 5) = 0x68746977;
              *(undefined4 *)((longlong)puVar8 + 0x2c) = 0x6d616e20;
              *(undefined2 *)(puVar8 + 6) = 0x2065;
              *(undefined1 *)((longlong)puVar8 + 0x32) = 0;
              uStack_148 = 0x32;
              puStack_118 = &UNK_180a3c3e0;
              uStack_100 = 0;
              uStack_110 = 0;
              uStack_108 = 0;
              uVar4 = FUN_180627ce0(&puStack_158,auStack_80,&puStack_118);
              puStack_178 = &UNK_180a3c3e0;
              uStack_160 = 0;
              puStack_170 = (undefined8 *)0x0;
              uStack_168 = 0;
              puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
              *(undefined1 *)puVar8 = 0;
              puStack_170 = puVar8;
              uVar2 = FUN_18064e990(puVar8);
              uStack_160 = CONCAT44(uStack_160._4_4_,uVar2);
              *puVar8 = 0x6574656c6544202e;
              *(undefined4 *)(puVar8 + 1) = 0x3f746920;
              *(undefined1 *)((longlong)puVar8 + 0xc) = 0;
              uStack_168 = 0xc;
              FUN_180627ce0(uVar4,auStack_a0,&puStack_178);
              puStack_178 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar8);
            }
            FUN_180627ae0(&puStack_f0,&puStack_138);
            uStack_d0 = 4;
            FUN_18039dbd0(&pppuStack_1a8,auStack_58,&puStack_f0);
            ppuStack_f8 = &puStack_f0;
            puStack_f0 = &UNK_180a3c3e0;
            if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_e8 = 0;
            uStack_d8 = 0;
            puStack_f0 = &UNK_18098bcb0;
            pcVar15 = "flora";
            do {
              pcVar12 = pcVar15;
              pcVar15 = pcVar12 + 1;
            } while (*pcVar15 != '\0');
            for (pcVar10 = *(char **)(pcVar10 + 0x58); pcVar10 != (char *)0x0;
                pcVar10 = *(char **)(pcVar10 + 0x58)) {
              pcVar15 = *(char **)pcVar10;
              if (pcVar15 == (char *)0x0) {
                pcVar15 = (char *)0x180d48d24;
                pcVar11 = pcVar16;
              }
              else {
                pcVar11 = *(char **)(pcVar10 + 0x10);
              }
              if (pcVar11 == pcVar12 + -0x180a1cbf7) {
                pcVar11 = pcVar11 + (longlong)pcVar15;
                if (pcVar11 <= pcVar15) goto LAB_18039be46;
                lVar13 = (longlong)&UNK_180a1cbf8 - (longlong)pcVar15;
                while (*pcVar15 == pcVar15[lVar13]) {
                  pcVar15 = pcVar15 + 1;
                  if (pcVar11 <= pcVar15) goto LAB_18039be46;
                }
              }
            }
          }
          else {
LAB_18039bcd4:
            puVar8 = (undefined8 *)param_3[1];
            if (puVar8 < (undefined8 *)param_3[2]) {
              param_3[1] = (longlong)(puVar8 + 1);
              *puVar8 = plVar5;
              (**(code **)(*plVar5 + 0x28))(plVar5);
            }
            else {
              puVar9 = (undefined8 *)*param_3;
              lVar13 = (longlong)puVar8 - (longlong)puVar9 >> 3;
              if (lVar13 == 0) {
                lVar13 = 1;
LAB_18039bd25:
                pcVar16 = (char *)FUN_18062b420(_DAT_180c8ed18,lVar13 * 8,(char)param_3[3]);
                puVar8 = (undefined8 *)param_3[1];
                puVar9 = (undefined8 *)*param_3;
                pcVar15 = pcVar16;
              }
              else {
                lVar13 = lVar13 * 2;
                pcVar15 = pcVar16;
                if (lVar13 != 0) goto LAB_18039bd25;
              }
              for (; puVar9 != puVar8; puVar9 = puVar9 + 1) {
                *(undefined8 *)pcVar16 = *puVar9;
                *puVar9 = 0;
                pcVar16 = pcVar16 + 8;
              }
              *(longlong **)pcVar16 = plVar5;
              (**(code **)(*plVar5 + 0x28))(plVar5);
              plVar1 = (longlong *)param_3[1];
              plVar14 = (longlong *)*param_3;
              if (plVar14 != plVar1) {
                do {
                  if ((longlong *)*plVar14 != (longlong *)0x0) {
                    (**(code **)(*(longlong *)*plVar14 + 0x38))();
                  }
                  plVar14 = plVar14 + 1;
                } while (plVar14 != plVar1);
                plVar14 = (longlong *)*param_3;
              }
              if (plVar14 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(plVar14);
              }
              *param_3 = (longlong)pcVar15;
              param_3[1] = (longlong)(pcVar16 + 8);
              param_3[2] = (longlong)(pcVar15 + lVar13 * 8);
            }
            pcVar16 = "flora";
            do {
              pcVar15 = pcVar16;
              pcVar16 = pcVar15 + 1;
            } while (*pcVar16 != '\0');
            for (pcVar10 = *(char **)(pcVar10 + 0x58); pcVar10 != (char *)0x0;
                pcVar10 = *(char **)(pcVar10 + 0x58)) {
              pcVar16 = *(char **)pcVar10;
              if (pcVar16 == (char *)0x0) {
                pcVar12 = (char *)0x0;
                pcVar16 = (char *)0x180d48d24;
              }
              else {
                pcVar12 = *(char **)(pcVar10 + 0x10);
              }
              if (pcVar12 == pcVar15 + -0x180a1cbf7) {
                pcVar12 = pcVar12 + (longlong)pcVar16;
                if (pcVar12 <= pcVar16) goto LAB_18039be46;
                lVar13 = (longlong)&UNK_180a1cbf8 - (longlong)pcVar16;
                while (*pcVar16 == pcVar16[lVar13]) {
                  pcVar16 = pcVar16 + 1;
                  if (pcVar12 <= pcVar16) goto LAB_18039be46;
                }
              }
            }
          }
LAB_18039be43:
          pcVar10 = (char *)0x0;
LAB_18039be46:
          (**(code **)(*plVar5 + 0x38))(plVar5);
        } while( true );
      }
      lVar13 = (longlong)&UNK_180a21874 - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar13]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar12 <= pcVar10) goto LAB_18039b5d6;
      }
    }
    puVar8 = (undefined8 *)puVar8[0xb];
  } while( true );
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




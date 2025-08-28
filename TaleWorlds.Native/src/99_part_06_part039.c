#include "TaleWorlds.Native.Split.h"

// 99_part_06_part039.c - 3 个函数

// 函数: void FUN_1803cafa0(longlong param_1,longlong param_2,undefined8 *param_3)
void FUN_1803cafa0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong ****pppplVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong ****pppplVar7;
  longlong ***ppplVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_148 [32];
  ulonglong *puStack_128;
  undefined1 *puStack_120;
  undefined1 uStack_118;
  undefined1 auStack_117 [7];
  longlong ***ppplStack_110;
  longlong ***ppplStack_108;
  longlong ***ppplStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined4 uStack_e8;
  longlong lStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 *puStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined8 *puStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x230);
  puStack_b0 = (undefined8 *)0x0;
  lStack_a8 = 0;
  iVar14 = 0;
  uStack_a0 = 0;
  uStack_98 = 3;
  uStack_e8 = 3;
  ppplStack_110 = (longlong ***)&ppplStack_110;
  ppplStack_108 = (longlong ***)&ppplStack_110;
  ppplStack_100 = (longlong ***)0x0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  lStack_e0 = param_1;
  puStack_d8 = param_3;
  lStack_c8 = param_2;
  FUN_180057340(&puStack_b0,*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3);
  iVar15 = 0;
  puVar10 = *(ulonglong **)(param_2 + 0x38);
  puVar12 = puStack_b0;
  if (puVar10 != *(ulonglong **)(param_2 + 0x40)) {
    do {
      puVar11 = (undefined8 *)(_DAT_180c8a990 + 0xd8);
      puVar9 = *(undefined8 **)(_DAT_180c8a990 + 0xe8);
      puVar3 = puVar11;
      if (puVar9 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar9[4] < *puVar10) {
            puVar9 = (undefined8 *)*puVar9;
          }
          else {
            puVar3 = puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
        } while (puVar9 != (undefined8 *)0x0);
      }
      if ((puVar3 == puVar11) || (*puVar10 < (ulonglong)puVar3[4])) {
        puStack_128 = puVar10;
        puVar3 = (undefined8 *)FUN_1800fc780(puVar11,&lStack_c8);
        puVar3 = (undefined8 *)*puVar3;
      }
      *puVar12 = puVar3[5];
      pppplVar7 = &ppplStack_110;
      if ((longlong ****)ppplStack_100 != (longlong ****)0x0) {
        pppplVar4 = (longlong ****)ppplStack_100;
        do {
          if (pppplVar4[4] < (longlong ***)*puVar10) {
            pppplVar4 = (longlong ****)*pppplVar4;
          }
          else {
            pppplVar7 = pppplVar4;
            pppplVar4 = (longlong ****)pppplVar4[1];
          }
        } while (pppplVar4 != (longlong ****)0x0);
      }
      if ((pppplVar7 == &ppplStack_110) || ((longlong ***)*puVar10 < pppplVar7[4])) {
        if ((pppplVar7 == (longlong ****)ppplStack_110) || (pppplVar7 == &ppplStack_110)) {
          if ((lStack_f0 != 0) &&
             (ppplVar8 = (longlong ***)*puVar10, pppplVar7 = (longlong ****)ppplStack_110,
             ppplStack_110[4] < ppplVar8)) {
LAB_1803cb1a3:
            bVar16 = false;
            pppplVar4 = pppplVar7;
            goto LAB_1803cb1a5;
          }
LAB_1803cb289:
          pppplVar4 = &ppplStack_110;
          bVar16 = true;
          if ((longlong ****)ppplStack_100 != (longlong ****)0x0) {
            pppplVar7 = (longlong ****)ppplStack_100;
            do {
              pppplVar4 = pppplVar7;
              bVar16 = (longlong ***)*puVar10 < pppplVar4[4];
              if (bVar16) {
                pppplVar7 = (longlong ****)pppplVar4[1];
              }
              else {
                pppplVar7 = (longlong ****)*pppplVar4;
              }
            } while (pppplVar7 != (longlong ****)0x0);
          }
          pppplVar7 = pppplVar4;
          if (bVar16) {
            if (pppplVar4 != (longlong ****)ppplStack_108) {
              pppplVar7 = (longlong ****)func_0x00018066b9a0(pppplVar4);
              goto LAB_1803cb2d5;
            }
            ppplVar8 = (longlong ***)*puVar10;
          }
          else {
LAB_1803cb2d5:
            ppplVar8 = (longlong ***)*puVar10;
            if (ppplVar8 <= pppplVar7[4]) goto LAB_1803cb1f9;
          }
LAB_1803cb2e2:
          if ((pppplVar4 != &ppplStack_110) && (pppplVar4[4] <= ppplVar8)) {
            uVar13 = 1;
            goto LAB_1803cb1b9;
          }
        }
        else {
          pppplVar4 = (longlong ****)func_0x00018066bd70();
          ppplVar8 = (longlong ***)*puVar10;
          if ((ppplVar8 <= pppplVar7[4]) || (pppplVar4[4] <= ppplVar8)) goto LAB_1803cb289;
          if (*pppplVar7 == (longlong ***)0x0) goto LAB_1803cb1a3;
          bVar16 = true;
LAB_1803cb1a5:
          if (pppplVar4 == (longlong ****)0x0) goto LAB_1803cb289;
          if (!bVar16) goto LAB_1803cb2e2;
        }
        uVar13 = 0;
LAB_1803cb1b9:
        lVar5 = FUN_18062b420(_DAT_180c8ed18,0x30,(undefined1)uStack_e8);
        *(ulonglong *)(lVar5 + 0x20) = *puVar10;
        *(undefined4 *)(lVar5 + 0x28) = 0;
                    // WARNING: Subroutine does not return
        FUN_18066bdc0(lVar5,pppplVar4,&ppplStack_110,uVar13);
      }
LAB_1803cb1f9:
      *(int *)(pppplVar7 + 5) = iVar14;
      iVar15 = iVar14 + 1;
      puVar10 = puVar10 + 1;
      param_3 = puStack_d8;
      puVar12 = puVar12 + 1;
      param_1 = lStack_e0;
      iVar14 = iVar15;
    } while (puVar10 != *(ulonglong **)(param_2 + 0x40));
  }
  puVar12 = puStack_b0;
  auStack_88[0] = 6;
  uStack_6c = 0;
  plVar6 = *(longlong **)(param_1 + 200);
  puStack_80 = param_3;
  uStack_78 = uVar2;
  uStack_74 = uVar1;
  uStack_70 = uVar1;
  if (iVar15 < 1) {
    lStack_e0 = *(longlong *)(_DAT_180c8a990 + 200);
    auStack_117[0] = 0xb;
    puStack_120 = auStack_117;
    puStack_128 = (ulonglong *)CONCAT71(puStack_128._1_7_,1);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0xb8))(plVar6,auStack_88,&lStack_e0);
  }
  else {
    uStack_118 = 0xb;
    puStack_120 = &uStack_118;
    puStack_128 = (ulonglong *)CONCAT71(puStack_128._1_7_,1);
    plVar6 = (longlong *)
             (**(code **)(*plVar6 + 0xb8))
                       (plVar6,auStack_88,puStack_b0,lStack_a8 - (longlong)puStack_b0 >> 3);
  }
  uStack_b4 = 0;
  uStack_c0 = 4;
  uStack_bc = 10;
  uStack_b8 = 0xffffffff;
  (**(code **)(*plVar6 + 0xa0))(plVar6,&uStack_c0);
  puStack_d8 = (undefined8 *)0x400000;
  uStack_d0 = 0;
  (**(code **)(*plVar6 + 0xb0))(plVar6,&puStack_d8);
  if (param_3 != (undefined8 *)0x0) {
    (**(code **)*param_3)(param_3);
  }
  uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  FUN_1803c5c50(uVar13,plVar6);
  ppplVar8 = ppplStack_100;
  if ((longlong ****)ppplStack_100 != (longlong ****)0x0) {
    FUN_18004b790(&ppplStack_110,*ppplStack_100);
                    // WARNING: Subroutine does not return
    FUN_18064e900(ppplVar8);
  }
  if (puVar12 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar12);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1803cb450(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             char *param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  (**(code **)(*plVar1 + 0x318))(plVar1,0,0);
  FUN_18063b470(&uStack_98,param_4);
  uStack_58 = uStack_98._4_4_;
  uStack_54 = (undefined4)uStack_90;
  uStack_50 = uStack_90._4_4_;
  uStack_4c = (undefined4)uStack_98;
  uStack_40 = *(undefined4 *)(param_4 + 0x38);
  uStack_44 = *(undefined4 *)(param_4 + 0x34);
  uStack_48 = *(undefined4 *)(param_4 + 0x30);
  FUN_18063b470(&uStack_98);
  uStack_78 = uStack_98._4_4_;
  uStack_74 = (undefined4)uStack_90;
  uStack_70 = uStack_90._4_4_;
  uStack_6c = (undefined4)uStack_98;
  uStack_60 = *(undefined4 *)(param_5 + 0x38);
  uStack_64 = *(undefined4 *)(param_5 + 0x34);
  uStack_68 = *(undefined4 *)(param_5 + 0x30);
  plVar2 = (longlong *)
           FUN_1806d8aa0(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_2 + 0x28),&uStack_58,
                         *(undefined8 *)(param_3 + 0x28),&uStack_78);
  uVar6 = 2;
  if (*param_6 == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = *param_6 == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,0,uVar5);
  if (param_6[1] == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = param_6[1] == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,1,uVar5);
  if (param_6[2] == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = param_6[2] == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,2,uVar5);
  if (param_6[8] == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = param_6[8] == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,3,uVar5);
  if (param_6[0x14] == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = param_6[0x14] == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,4,uVar5);
  if (param_6[0x15] != '\0') {
    uVar6 = param_6[0x15] == '\x01';
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,5,uVar6);
  fStack_84 = *(float *)(param_6 + 4);
  if (fStack_84 <= 0.01) {
    fStack_84 = 0.01;
  }
  pfVar3 = (float *)(**(code **)(**(longlong **)(param_1 + 200) + 0x20))();
  uStack_98 = 0;
  uStack_90 = 0;
  fStack_88 = *pfVar3 * 0.01;
  (**(code **)(*plVar2 + 0x110))(plVar2,&uStack_98);
  fStack_80 = *(float *)(param_6 + 0x1c);
  fStack_84 = *(float *)(param_6 + 0x18);
  uStack_90 = 0;
  fStack_88 = fStack_80;
  if (fStack_84 <= fStack_80) {
    fStack_88 = fStack_84;
  }
  fStack_88 = fStack_88 * 0.49;
  if (0.1 <= fStack_88) {
    fStack_88 = 0.1;
  }
  uStack_98 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x140))(plVar2,&uStack_98);
  fStack_84 = *(float *)(param_6 + 0x10);
  fStack_80 = *(float *)(param_6 + 0xc);
  uStack_90 = 0;
  fStack_88 = (fStack_84 - fStack_80) * 0.49;
  if (0.1 <= fStack_88) {
    fStack_88 = 0.1;
  }
  uStack_98 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x130))(plVar2,&uStack_98);
  (**(code **)(*plVar2 + 400))(plVar2,0x3dcccccd);
  (**(code **)(*plVar2 + 0x78))(plVar2,6,1);
  (**(code **)(*plVar2 + 0x78))(plVar2,8);
  puVar4 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x10,8,3);
  *puVar4 = &UNK_180a0c7f0;
  *puVar4 = &UNK_180a23db8;
  puVar4[1] = plVar2;
  (**(code **)(*plVar1 + 800))(plVar1);
  return puVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1803cb810(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             float param_6,float param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  (**(code **)(*plVar1 + 0x318))(plVar1,0,0);
  FUN_18063b470(&uStack_78,param_4);
  uStack_38 = uStack_74;
  uStack_34 = (undefined4)uStack_70;
  uStack_30 = uStack_70._4_4_;
  uStack_2c = uStack_78;
  uStack_20 = *(undefined4 *)(param_4 + 0x38);
  uStack_24 = *(undefined4 *)(param_4 + 0x34);
  uStack_28 = *(undefined4 *)(param_4 + 0x30);
  FUN_18063b470(&uStack_78);
  uStack_58 = uStack_74;
  uStack_54 = (undefined4)uStack_70;
  uStack_50 = uStack_70._4_4_;
  uStack_4c = uStack_78;
  uStack_40 = *(undefined4 *)(param_5 + 0x38);
  uStack_44 = *(undefined4 *)(param_5 + 0x34);
  uStack_48 = *(undefined4 *)(param_5 + 0x30);
  plVar2 = (longlong *)
           FUN_1806e3cd0(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_2 + 0x28),&uStack_38,
                         *(undefined8 *)(param_3 + 0x28),&uStack_58);
  uStack_78 = 0;
  uStack_70 = 0;
  fStack_64 = param_7;
  fStack_60 = param_6;
  fStack_68 = (param_7 - param_6) * 0.49;
  if (0.1 <= fStack_68) {
    fStack_68 = 0.1;
  }
  uStack_74 = 0x3f000000;
  (**(code **)(*plVar2 + 0xf8))(plVar2,&uStack_78);
  (**(code **)(*plVar2 + 0x140))(plVar2,1,1);
  (**(code **)(*plVar2 + 0x78))(plVar2,8);
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x10,8,3);
  *puVar3 = &UNK_180a0c7f0;
  *puVar3 = &UNK_180a23db8;
  puVar3[1] = plVar2;
  (**(code **)(*plVar1 + 800))(plVar1);
  return puVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1803cba10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [48];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [48];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_68 [64];
  
  uStack_f8 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0xb8);
  (**(code **)(*plVar1 + 0x318))(plVar1,0,0);
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0x3f800000;
  uStack_13c = 0x7f7fffff;
  FUN_180645340(auStack_68,param_4 + 0x30,param_5 + 0x30,&uStack_148);
  FUN_1802f5d10(param_4,auStack_e8,auStack_68);
  FUN_1802f5d10(param_5,auStack_a8,auStack_68);
  FUN_18063b470(&uStack_148,auStack_e8);
  uStack_118 = uStack_144;
  uStack_114 = uStack_140;
  uStack_110 = uStack_13c;
  uStack_10c = uStack_148;
  uStack_108 = uStack_b8;
  uStack_104 = uStack_b4;
  uStack_100 = uStack_b0;
  FUN_18063b470(&uStack_148,auStack_a8);
  uStack_138 = uStack_144;
  uStack_134 = uStack_140;
  uStack_130 = uStack_13c;
  uStack_12c = uStack_148;
  uStack_128 = uStack_78;
  uStack_124 = uStack_74;
  uStack_120 = uStack_70;
  plVar2 = (longlong *)
           FUN_1806e6000(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_2 + 0x28),&uStack_118,
                         *(undefined8 *)(param_3 + 0x28),&uStack_138);
  (**(code **)(*plVar2 + 0x78))(plVar2,8,1);
  (**(code **)(*plVar2 + 0x148))(plVar2,2,1);
  (**(code **)(*plVar2 + 0x148))(plVar2,4);
  (**(code **)(*plVar2 + 0xf0))(plVar2,param_6);
  (**(code **)(*plVar2 + 0x100))(plVar2,param_7);
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x10,8,3);
  *puVar3 = &UNK_180a0c7f0;
  *puVar3 = &UNK_180a23db8;
  puVar3[1] = plVar2;
  (**(code **)(*plVar1 + 800))(plVar1);
  return puVar3;
}






// 函数: void FUN_1803cbc70(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803cbc70(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x318))(plVar2,0,0,param_4,0xfffffffffffffffe);
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      (**(code **)(param_1 + 0xa8))(param_2);
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    plVar3 = *(longlong **)(param_1 + 0x1b8);
    plVar4 = *(longlong **)(param_1 + 0x1b0);
    if (plVar4 != plVar3) {
      do {
        if (*plVar4 == *(longlong *)(param_2 + 0x28)) break;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3);
      if (plVar4 != plVar3) {
        plVar1 = plVar4 + 1;
        if (plVar1 < plVar3) {
                    // WARNING: Subroutine does not return
          memmove(plVar4,plVar1,(longlong)plVar3 - (longlong)plVar1);
        }
        *(longlong **)(param_1 + 0x1b8) = plVar3 + -1;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x68))
              (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_2 + 0x28),1);
    (**(code **)**(undefined8 **)(param_2 + 0x28))();
    (**(code **)(*plVar2 + 800))(plVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803cbd70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)
void FUN_1803cbd70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  iVar1 = *(int *)(_DAT_180c86890 + 0x1358);
  bVar3 = 1 < iVar1 - 7U;
  plVar2 = *(longlong **)(param_1 + 0xb8);
  (**(code **)(*plVar2 + 0x318))(plVar2,0,0,param_4,0xfffffffffffffffe);
  if (bVar3) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x220))(*(longlong **)(param_1 + 0xb8),0xc,uVar6);
  uVar6 = 0x3da3d70a;
  if (iVar1 == 7) {
    uVar7 = 0x3da3d70a;
  }
  else {
    uVar7 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x220))(*(longlong **)(param_1 + 0xb8),3,uVar7);
  if (iVar1 == 7) {
    uVar7 = 0x3da3d70a;
  }
  else {
    uVar7 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x220))(*(longlong **)(param_1 + 0xb8),2,uVar7);
  if (iVar1 == 8) {
    uVar7 = 0x3f800000;
  }
  else {
    uVar7 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x220))(*(longlong **)(param_1 + 0xb8),6,uVar7);
  if (iVar1 == 8) {
    uVar7 = 0x3f800000;
  }
  else {
    uVar7 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x220))(*(longlong **)(param_1 + 0xb8),9,uVar7);
  if (iVar1 != 8) {
    uVar6 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x220))(*(longlong **)(param_1 + 0xb8),0x14,uVar6);
  if (iVar1 == 8) {
    uVar6 = 0x3e4ccccd;
  }
  else {
    uVar6 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x220))(*(longlong **)(param_1 + 0xb8),0x15,uVar6);
  plVar5 = *(longlong **)(param_1 + 0xb8);
  uVar6 = 0;
  lVar4 = *plVar5;
  if (!bVar3) {
    (**(code **)(lVar4 + 0x220))(plVar5,0x16,0);
    fStack_2c = *(float *)(param_1 + 0x128) + 15.0;
    fStack_30 = *(float *)(param_1 + 0x124) + 15.0;
    fStack_34 = *(float *)(param_1 + 0x120) + 15.0;
    fStack_38 = *(float *)(param_1 + 0x128) - 15.0;
    fStack_3c = *(float *)(param_1 + 0x124) - 15.0;
    fStack_40 = *(float *)(param_1 + 0x120) - 15.0;
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x230))
              (*(longlong **)(param_1 + 0xb8),&fStack_40);
    plVar5 = *(longlong **)(param_1 + 0xb8);
    lVar4 = *plVar5;
    uVar6 = 0x3f800000;
  }
  (**(code **)(lVar4 + 0x220))(plVar5,0,uVar6);
                    // WARNING: Could not recover jumptable at 0x0001803cbfa3. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar2 + 800))(plVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





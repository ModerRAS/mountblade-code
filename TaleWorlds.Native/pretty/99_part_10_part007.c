#include "TaleWorlds.Native.Split.h"

// 99_part_10_part007.c - 11 个函数

// 函数: void FUN_1806a6f40(longlong param_1,longlong *param_2)
void FUN_1806a6f40(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 8);
                    // WARNING: Could not recover jumptable at 0x0001806a6f71. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
  return;
}






// 函数: void FUN_1806a6f80(undefined8 param_1,undefined8 param_2,undefined1 param_3)
void FUN_1806a6f80(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_28 = &UNK_18094a7d0;
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1806a39a0(param_1,&puStack_28,0x16);
  return;
}



undefined1 FUN_1806a6fb0(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_20 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [112];
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  plVar5 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2);
  lVar6 = (**(code **)(*plVar5 + 0xa0))(plVar5,auStack_a8,param_3);
  puStack_118 = &UNK_18094a9b0;
  uStack_100 = *(undefined4 *)(lVar6 + 0x18);
  uStack_d8 = *(undefined8 *)(lVar6 + 0x40);
  uStack_110 = *(undefined8 *)(lVar6 + 8);
  uStack_108 = *(undefined8 *)(lVar6 + 0x10);
  uStack_c8 = *(undefined8 *)(lVar6 + 0x50);
  uStack_c0 = *(undefined8 *)(lVar6 + 0x58);
  uStack_e8 = *(undefined4 *)(lVar6 + 0x30);
  uStack_e0 = *(undefined8 *)(lVar6 + 0x38);
  uStack_d0 = *(uint *)(lVar6 + 0x48);
  uStack_f8 = *(undefined4 *)(lVar6 + 0x20);
  uStack_f4 = *(undefined4 *)(lVar6 + 0x24);
  uStack_f0 = *(undefined4 *)(lVar6 + 0x28);
  uStack_ec = *(undefined4 *)(lVar6 + 0x2c);
  if ((uint)(param_4[2] - *param_4) < uStack_d0) {
    uVar9 = 2;
  }
  else {
    uStack_158 = *(undefined8 *)param_4;
    uStack_150 = *(undefined8 *)(param_4 + 2);
    puVar7 = (undefined8 *)FUN_1806a41e0(param_1,auStack_b8,&puStack_118,&uStack_158);
    uVar3 = *puVar7;
    *(undefined8 *)param_4 = uVar3;
    uVar4 = puVar7[1];
    *(undefined8 *)(param_4 + 2) = uVar4;
    puVar8 = (undefined4 *)FUN_1806a74b0(param_1,auStackX_8,param_3[1]);
    uVar1 = *puVar8;
    puVar8 = (undefined4 *)FUN_1806a74b0(param_1,auStackX_20,*param_3);
    uStack_158 = CONCAT44(uVar1,*puVar8);
    puStack_148 = &UNK_18094a790;
    uStack_138 = uStack_158;
    uStack_140 = param_2;
    uStack_130 = uVar3;
    uStack_128 = uVar4;
    FUN_1806a39a0(param_1,&puStack_148,0xb);
    uVar9 = *(char *)(param_1 + 0x1b8) == '\0';
    puStack_148 = &UNK_18094a308;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2);
  return uVar9;
}



bool FUN_1806a7079(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBX;
  longlong *unaff_R14;
  longlong unaff_R15;
  
  puVar2 = (undefined8 *)FUN_1806a41e0();
  *unaff_RBX = *puVar2;
  unaff_RBX[1] = puVar2[1];
  FUN_1806a74b0();
  FUN_1806a74b0();
  FUN_1806a39a0();
  cVar1 = *(char *)(unaff_R15 + 0x1b8);
  (**(code **)(*unaff_R14 + 0x20))();
  return cVar1 == '\0';
}



undefined4 FUN_1806a7137(void)

{
  undefined4 unaff_EBX;
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x20))();
  return unaff_EBX;
}



bool FUN_1806a7160(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  longlong lStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  int *piStackX_20;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [128];
  
  plVar6 = *(longlong **)(param_1 + 0x48);
  lStackX_8 = param_1;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  piStackX_20 = param_4;
  plVar11 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6);
  puVar10 = param_5;
  lVar12 = (**(code **)(*plVar11 + 0x18))(plVar11,auStack_c0,param_5);
  uVar1 = *(uint *)(lVar12 + 0x48);
  uVar2 = *(undefined4 *)(lVar12 + 0x4c);
  uVar3 = *(undefined4 *)(lVar12 + 0x50);
  uVar7 = *(undefined8 *)(lVar12 + 0x58);
  uVar8 = *(undefined8 *)(lVar12 + 0x60);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  lVar12 = lStackX_8;
  iVar4 = piStackX_20[2];
  iVar5 = *piStackX_20;
  uStack_138 = *(undefined8 *)piStackX_20;
  uStack_130 = *(undefined8 *)(piStackX_20 + 2);
  uStack_128 = uVar1;
  uStack_124 = uVar2;
  uStack_120 = uVar3;
  uStack_118 = uVar7;
  uStack_110 = uVar8;
  puVar13 = (undefined8 *)FUN_1806a4370(lStackX_8,auStack_d0,&uStack_128,&uStack_138);
  piVar9 = piStackX_20;
  *(undefined8 *)piStackX_20 = *puVar13;
  *(undefined8 *)(piStackX_20 + 2) = puVar13[1];
  puVar14 = (undefined4 *)FUN_1806a74b0(lVar12,&piStackX_20,puVar10[1]);
  uVar2 = *puVar14;
  puVar14 = (undefined4 *)FUN_1806a74b0(lVar12,&lStackX_8,*puVar10);
  uVar7 = *(undefined8 *)piVar9;
  uVar8 = *(undefined8 *)(piVar9 + 2);
  uStack_138 = CONCAT44(uVar2,*puVar14);
  puVar14 = (undefined4 *)FUN_1806a74b0(lVar12,&param_5,uStackX_18);
  uStack_f8 = *puVar14;
  puStack_108 = &UNK_18094a750;
  uStack_100 = uStackX_10;
  uStack_e0 = uStack_138;
  uStack_f0 = uVar7;
  uStack_e8 = uVar8;
  uStack_d8 = (uint)(iVar4 - iVar5) / uVar1;
  FUN_1806a39a0(lVar12,&puStack_108,7);
  return *(char *)(lVar12 + 0x1b8) == '\0';
}






// 函数: void FUN_1806a73a0(longlong param_1,longlong *param_2)
void FUN_1806a73a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_2;
  uVar3 = param_2[1] - lVar1 >> 4;
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 4;
  if ((int)uVar3 != 0) {
    lVar2 = 0;
    uVar3 = uVar3 & 0xffffffff;
    do {
      (**(code **)(*(longlong *)(lVar2 + lVar1) + 8))(lVar2 + lVar1,param_1);
      lVar2 = lVar2 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}






// 函数: void FUN_1806a73c7(undefined8 param_1,undefined8 param_2,uint param_3)
void FUN_1806a73c7(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  
  lVar1 = 0;
  uVar2 = (ulonglong)param_3;
  do {
    (**(code **)(*(longlong *)(lVar1 + unaff_RBP) + 8))(lVar1 + unaff_RBP);
    lVar1 = lVar1 + 0x10;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}






// 函数: void FUN_1806a7402(void)
void FUN_1806a7402(void)

{
  return;
}






// 函数: void FUN_1806a7410(longlong param_1,longlong *param_2)
void FUN_1806a7410(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_2;
  uVar3 = param_2[1] - lVar1 >> 5;
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 4;
  if ((int)uVar3 != 0) {
    lVar2 = 0;
    uVar3 = uVar3 & 0xffffffff;
    do {
      (**(code **)(*(longlong *)(lVar2 + lVar1) + 8))(lVar2 + lVar1,param_1);
      lVar2 = lVar2 + 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}






// 函数: void FUN_1806a7437(undefined8 param_1,undefined8 param_2,uint param_3)
void FUN_1806a7437(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong unaff_RBP;
  ulonglong uVar2;
  
  lVar1 = 0;
  uVar2 = (ulonglong)param_3;
  do {
    (**(code **)(*(longlong *)(lVar1 + unaff_RBP) + 8))(lVar1 + unaff_RBP);
    lVar1 = lVar1 + 0x20;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}






// 函数: void FUN_1806a7472(void)
void FUN_1806a7472(void)

{
  return;
}



undefined4 * FUN_1806a74b0(longlong param_1,undefined4 *param_2,byte *param_3)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  byte bVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  longlong lVar12;
  uint uVar13;
  char acStackX_18 [8];
  undefined4 auStackX_20 [2];
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if ((param_3 == (byte *)0x0) || (bVar5 = *param_3, bVar5 == 0)) {
    *param_2 = 0;
    return param_2;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar13 = 0x1505;
    pbVar11 = param_3;
    do {
      pbVar11 = pbVar11 + 1;
      uVar13 = uVar13 * 0x21 ^ (uint)bVar5;
      bVar5 = *pbVar11;
    } while (bVar5 != 0);
    uVar13 = *(uint *)(*(longlong *)(param_1 + 0x28) +
                      (ulonglong)(*(int *)(param_1 + 0x34) - 1U & uVar13) * 4);
    if (uVar13 != 0xffffffff) {
      do {
        pcVar6 = *(char **)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar13 * 0x10);
        lVar12 = (longlong)param_3 - (longlong)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar12];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          if ((uVar13 != 0xffffffff) &&
             (lVar12 = (ulonglong)uVar13 * 0x10 + *(longlong *)(param_1 + 0x18), lVar12 != 0)) {
            *param_2 = *(undefined4 *)(lVar12 + 8);
            return param_2;
          }
          break;
        }
        uVar13 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar13 * 4);
      } while (uVar13 != 0xffffffff);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  plVar7 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
  plVar8 = (longlong *)(**(code **)(*plVar7 + 0xc0))(plVar7);
  (**(code **)(*plVar8 + 0x20))(plVar8,auStackX_20,param_3);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0xc0))(plVar7);
  uVar9 = (**(code **)(*plVar7 + 0x28))(plVar7,auStackX_20[0]);
  uStack_20 = auStackX_20[0];
  puStack_30 = &UNK_18094a6d0;
  uStack_28 = uVar9;
  FUN_1806a39a0(param_1,&puStack_30,1);
  uVar4 = auStackX_20[0];
  uStack_38 = uVar9;
  puVar10 = (undefined8 *)FUN_1806a45c0(param_1 + 0x10,&uStack_38,acStackX_18);
  if (acStackX_18[0] == '\0') {
    *puVar10 = uVar9;
    *(undefined4 *)(puVar10 + 1) = uVar4;
  }
  *param_2 = auStackX_20[0];
  (**(code **)(*plVar3 + 0x20))(plVar3);
  return param_2;
}






// 函数: void FUN_1806a756c(void)
void FUN_1806a756c(void)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong unaff_RDI;
  undefined4 *unaff_R14;
  undefined8 uStackX_20;
  char in_stack_00000070;
  undefined4 in_stack_00000078;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x48);
  plVar3 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1);
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0xc0))(plVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,&stack0x00000078);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0xc0))(plVar3);
  uVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,in_stack_00000078);
  FUN_1806a39a0();
  uVar2 = in_stack_00000078;
  uStackX_20 = uVar5;
  puVar6 = (undefined8 *)FUN_1806a45c0(unaff_RDI + 0x10,&uStackX_20,&stack0x00000070);
  if (in_stack_00000070 == '\0') {
    *puVar6 = uVar5;
    *(undefined4 *)(puVar6 + 1) = uVar2;
  }
  *unaff_R14 = in_stack_00000078;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}






// 函数: void FUN_1806a763c(void)
void FUN_1806a763c(void)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong unaff_RDI;
  longlong in_R9;
  longlong lVar7;
  int in_R10D;
  longlong in_R11;
  undefined4 *unaff_R14;
  undefined8 uStackX_20;
  char in_stack_00000070;
  undefined4 in_stack_00000078;
  
  if ((in_R10D != -1) && (lVar7 = in_R9 * 0x10 + in_R11, lVar7 != 0)) {
    *unaff_R14 = *(undefined4 *)(lVar7 + 8);
    return;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x48);
  plVar3 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1);
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0xc0))(plVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,&stack0x00000078);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0xc0))(plVar3);
  uVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,in_stack_00000078);
  FUN_1806a39a0();
  uVar2 = in_stack_00000078;
  uStackX_20 = uVar5;
  puVar6 = (undefined8 *)FUN_1806a45c0(unaff_RDI + 0x10,&uStackX_20,&stack0x00000070);
  if (in_stack_00000070 == '\0') {
    *puVar6 = uVar5;
    *(undefined4 *)(puVar6 + 1) = uVar2;
  }
  *unaff_R14 = in_stack_00000078;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}






// 函数: void FUN_1806a7680(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
void FUN_1806a7680(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_28 = param_4[1];
  uStack_2c = *param_4;
  uStack_24 = param_4[2];
  puStack_48 = &UNK_18094a7e0;
  uStack_20 = *param_5;
  uStack_1c = param_5[1];
  uStack_18 = param_5[2];
  uStack_40 = param_2;
  FUN_1806a39a0(uStack_18,&puStack_48,0x17);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1806a7720(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*_DAT_180be0050 + 8))
                     (_DAT_180be0050,0xb8,&UNK_18094b068,&UNK_18094b020,0x5de);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &UNK_18094aef8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0x3f400000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
    puVar1[7] = 0;
    FUN_1806b0b40(puVar1 + 1,0x40);
    *(undefined4 *)(puVar1 + 8) = 1;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0x3f400000;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0xffffffff;
    puVar1[0xf] = 0;
    FUN_1806b0560(puVar1 + 9,0x40);
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0x3f400000;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0xffffffff;
    puVar1[0x16] = 0;
    FUN_1806a6390(puVar1 + 0x10,0x40);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1806a7780(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*_DAT_180be0050 + 8))
                    (_DAT_180be0050,0xf0,&UNK_18094b100,&UNK_18094b020,0x5d0);
  if (lVar1 != 0) {
    uVar2 = FUN_1806a9b80(lVar1);
    FUN_1806ae700(uVar2);
    return uVar2;
  }
  FUN_1806ae700(0);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1806a77f0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*_DAT_180be0050 + 8))
                    (_DAT_180be0050,0xf0,&UNK_18094b100,&UNK_18094b020,0x5d7);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1806a9b80(lVar1);
  }
  FUN_1806a7860(uVar2,param_1);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





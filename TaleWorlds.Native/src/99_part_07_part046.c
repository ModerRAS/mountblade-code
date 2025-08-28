#include "TaleWorlds.Native.Split.h"

// 99_part_07_part046.c - 5 个函数

// 函数: void FUN_1804c6710(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_1804c6710(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  float *param_5)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = param_4 * 2;
  while (lVar6 = lVar7 + 2, lVar6 < param_3) {
    fVar4 = *(float *)(param_1 + lVar6 * 0x28);
    pfVar1 = (float *)(param_1 + -0x28 + lVar6 * 0x28);
    lVar8 = lVar7 + 1;
    if (fVar4 < *pfVar1 || fVar4 == *pfVar1) {
      lVar8 = lVar6;
    }
    *(undefined4 *)(param_1 + param_4 * 0x28) = *(undefined4 *)(param_1 + lVar8 * 0x28);
    puVar2 = (undefined8 *)(param_1 + 0x18 + lVar8 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + 0x18 + param_4 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (undefined8 *)(param_1 + 8 + lVar8 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + 8 + param_4 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    *(undefined4 *)(param_1 + 4 + param_4 * 0x28) = *(undefined4 *)(param_1 + 4 + lVar8 * 0x28);
    param_4 = lVar8;
    lVar7 = lVar8 * 2;
  }
  lVar8 = param_4;
  if (lVar6 == param_3) {
    lVar8 = lVar7 + 1;
    *(undefined4 *)(param_1 + param_4 * 0x28) = *(undefined4 *)(param_1 + -0x28 + lVar6 * 0x28);
    puVar2 = (undefined8 *)(param_1 + -0x10 + lVar6 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + 0x18 + param_4 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (undefined8 *)(param_1 + -0x20 + lVar6 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + 8 + param_4 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    *(undefined4 *)(param_1 + 4 + param_4 * 0x28) = *(undefined4 *)(param_1 + -0x24 + lVar6 * 0x28);
  }
  while (param_2 < lVar8) {
    lVar7 = lVar8 + -1 >> 1;
    fVar4 = *(float *)(param_1 + lVar7 * 0x28);
    if (fVar4 < *param_5 || fVar4 == *param_5) break;
    *(float *)(param_1 + lVar8 * 0x28) = fVar4;
    puVar2 = (undefined8 *)(param_1 + 0x18 + lVar7 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + 0x18 + lVar8 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (undefined8 *)(param_1 + 8 + lVar7 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (undefined8 *)(param_1 + 8 + lVar8 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    *(undefined4 *)(param_1 + 4 + lVar8 * 0x28) = *(undefined4 *)(param_1 + 4 + lVar7 * 0x28);
    lVar8 = lVar7;
  }
  *(float *)(param_1 + lVar8 * 0x28) = *param_5;
  uVar5 = *(undefined8 *)(param_5 + 8);
  puVar2 = (undefined8 *)(param_1 + 0x18 + lVar8 * 0x28);
  *puVar2 = *(undefined8 *)(param_5 + 6);
  puVar2[1] = uVar5;
  uVar5 = *(undefined8 *)(param_5 + 4);
  puVar2 = (undefined8 *)(param_1 + 8 + lVar8 * 0x28);
  *puVar2 = *(undefined8 *)(param_5 + 2);
  puVar2[1] = uVar5;
  *(float *)(param_1 + 4 + lVar8 * 0x28) = param_5[1];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c6850(longlong param_1)
void FUN_1804c6850(longlong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1e8 [32];
  longlong *plStack_1c8;
  longlong *plStack_1c0;
  longlong *plStack_1b8;
  longlong *plStack_1b0;
  longlong *plStack_1a8;
  longlong *plStack_1a0;
  longlong *plStack_198;
  longlong *plStack_190;
  longlong *plStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [32];
  undefined *puStack_140;
  undefined1 *puStack_138;
  undefined4 uStack_130;
  undefined1 auStack_128 [32];
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [32];
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [32];
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [32];
  ulonglong uStack_28;
  
  uStack_180 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    puStack_178 = &UNK_18098bc80;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = 0xc;
    strcpy_s(auStack_160,0x20,&DAT_180a2f970);
    puVar3 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&plStack_1b0,&puStack_178,1);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStack_1c8 = *(longlong **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    if (plStack_1c8 != (longlong *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    if (plStack_1b0 != (longlong *)0x0) {
      (**(code **)(*plStack_1b0 + 0x38))();
    }
    puStack_178 = &UNK_18098bcb0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    puStack_140 = &UNK_18098bc80;
    puStack_138 = auStack_128;
    auStack_128[0] = 0;
    uStack_130 = 0xe;
    strcpy_s(auStack_128,0x20,&DAT_180a2f960);
    puVar3 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&plStack_1a8,&puStack_140,1);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStack_1c8 = *(longlong **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    if (plStack_1c8 != (longlong *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    if (plStack_1a8 != (longlong *)0x0) {
      (**(code **)(*plStack_1a8 + 0x38))();
    }
    puStack_140 = &UNK_18098bcb0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    if (*(char *)((longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0 + 0xcc +
                 *(longlong *)(_DAT_180c86938 + 0x1d20)) == '\0') {
      puStack_d0 = &UNK_18098bc80;
      puStack_c8 = auStack_b8;
      auStack_b8[0] = 0;
      uStack_c0 = 0xe;
      strcpy_s(auStack_b8,0x20,&UNK_180a2f980);
      puVar3 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&plStack_1c8,&puStack_d0,1);
      uVar2 = *puVar3;
      *puVar3 = 0;
      plStack_1b8 = *(longlong **)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
      if (plStack_1b8 != (longlong *)0x0) {
        (**(code **)(*plStack_1b8 + 0x38))();
      }
      if (plStack_1c8 != (longlong *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      puStack_d0 = &UNK_18098bcb0;
    }
    else {
      puStack_108 = &UNK_18098bc80;
      puStack_100 = auStack_f0;
      auStack_f0[0] = 0;
      uStack_f8 = 0x12;
      strcpy_s(auStack_f0,0x20,&UNK_180a2f990);
      puVar3 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&plStack_1b8,&puStack_108,1);
      uVar2 = *puVar3;
      *puVar3 = 0;
      plStack_1c8 = *(longlong **)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
      if (plStack_1c8 != (longlong *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      if (plStack_1b8 != (longlong *)0x0) {
        (**(code **)(*plStack_1b8 + 0x38))();
      }
      puStack_108 = &UNK_18098bcb0;
    }
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(longlong *)(param_1 + 0x88) == 0) {
    puStack_98 = &UNK_18098bc80;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x10;
    strcpy_s(auStack_80,0x20,&UNK_180a2f948);
    puVar3 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&plStack_1a0,&puStack_98,1);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStack_1c0 = *(longlong **)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1a0 != (longlong *)0x0) {
      (**(code **)(*plStack_1a0 + 0x38))();
    }
    puStack_98 = &UNK_18098bcb0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x88) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    puStack_60 = &UNK_18098bc80;
    puStack_58 = auStack_48;
    auStack_48[0] = 0;
    uStack_50 = 0xb;
    strcpy_s(auStack_48,0x20,&UNK_180a19478);
    puVar3 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&plStack_198,&puStack_60,1);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStack_1c0 = *(longlong **)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_198 != (longlong *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
    puStack_60 = &UNK_18098bcb0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x90) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(longlong *)(param_1 + 0x98) == 0) {
    puVar3 = (undefined8 *)FUN_1800bf9e0();
    puVar3 = (undefined8 *)FUN_1800763c0(*puVar3,&plStack_190);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStack_1c0 = *(longlong **)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_190 != (longlong *)0x0) {
      (**(code **)(*plStack_190 + 0x38))();
    }
    if (plStack_188 != (longlong *)0x0) {
      (**(code **)(*plStack_188 + 0x38))();
    }
    lVar4 = *(longlong *)(param_1 + 0x98);
    if ((*(byte *)(lVar4 + 0xfd) & 0x20) == 0) {
      lVar4 = func_0x000180085de0(*(undefined8 *)(lVar4 + 0x1b0));
    }
    *(byte *)(lVar4 + 0xfe) = *(byte *)(lVar4 + 0xfe) & 0xfd;
    lVar4 = *(longlong *)(param_1 + 0x98);
    lVar5 = lVar4;
    if ((*(byte *)(lVar4 + 0xfd) & 0x20) == 0) {
      lVar5 = func_0x000180085de0(*(undefined8 *)(lVar4 + 0x1b0));
    }
    if (*(char *)(lVar5 + 0xfa) != '\x01') {
      *(undefined1 *)(lVar5 + 0xfa) = 1;
      FUN_180079520(lVar5);
      lVar4 = *(longlong *)(param_1 + 0x98);
    }
    if ((*(byte *)(lVar4 + 0xfd) & 0x20) == 0) {
      lVar4 = func_0x000180085de0(*(undefined8 *)(lVar4 + 0x1b0));
    }
    if (*(char *)(lVar4 + 0xfb) != '\x01') {
      *(undefined1 *)(lVar4 + 0xfb) = 1;
      FUN_180079520(lVar4);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1e8);
}



undefined8 * FUN_1804c6e20(undefined8 *param_1)

{
  *param_1 = &UNK_180a2f9e8;
  *param_1 = &UNK_180a2f9b0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x1060101;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xff000000;
  *(undefined4 *)(param_1 + 6) = 0x40300ff;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x30503;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0x900;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_1808fc838(param_1 + 0xe,8,2,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 3;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



undefined8 * FUN_1804c6f10(undefined8 *param_1,ulonglong param_2)

{
  FUN_18005d580();
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x38))();
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x38))();
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x38))();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0xe,8,2,FUN_180045af0);
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x38))();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x38))();
  }
  *param_1 = &UNK_180a2f9e8;
  if ((param_2 & 1) != 0) {
    free(param_1,0xc0);
  }
  return param_1;
}






// 函数: void FUN_1804c7000(longlong param_1)
void FUN_1804c7000(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_1804c6850();
  uStack_30 = 0;
  uStack_28 = 0;
  pcStack_20 = (code *)0x0;
  pcStack_18 = _guard_check_icall;
  FUN_18023c450(*(undefined8 *)(param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x18) * 8),0,
                0xffffffff,&uStack_30,uVar4);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&uStack_30,0,0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  pcStack_20 = (code *)0x0;
  pcStack_18 = _guard_check_icall;
  FUN_18023c450(*(undefined8 *)(param_1 + 0x80),0,0xffffffff,&uStack_30,uVar4);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&uStack_30,0,0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  pcStack_20 = (code *)0x0;
  pcStack_18 = _guard_check_icall;
  FUN_18023c450(*(undefined8 *)(param_1 + 0x88),0,0xffffffff,&uStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&uStack_30,0,0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  pcStack_20 = (code *)0x0;
  pcStack_18 = _guard_check_icall;
  FUN_18023c450(*(undefined8 *)(param_1 + 0x90),0,0xffffffff,&uStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&uStack_30,0,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  lVar3 = *(longlong *)(lVar1 + 0x1b8);
  cVar2 = *(char *)(lVar3 + 0x38c);
  if (cVar2 == '\t') {
    cVar2 = func_0x00018022d300();
    *(char *)(lVar3 + 0x38c) = cVar2;
  }
  cVar2 = FUN_18007b240(lVar1,lVar1 + 0x1e8,cVar2,1);
  if (cVar2 == '\0') {
    *(byte *)(lVar1 + 0xfe) = *(byte *)(lVar1 + 0xfe) & 0xfb;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c71d0(longlong param_1)
void FUN_1804c71d0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  longlong *plStack_b8;
  longlong *plStack_a8;
  longlong *plStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code **ppcStack_88;
  undefined8 uStack_80;
  code *apcStack_78 [4];
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined4 uStack_48;
  undefined1 auStack_40 [32];
  ulonglong uStack_20;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  puStack_90 = &UNK_18098bc80;
  ppcStack_88 = apcStack_78;
  apcStack_78[0] = (code *)((ulonglong)apcStack_78[0] & 0xffffffffffffff00);
  uStack_80 = (code *)CONCAT44((int)((ulonglong)uStack_80 >> 0x20),0xf);
  strcpy_s(apcStack_78,0x20,&UNK_180a0d4c8);
  puVar3 = (undefined8 *)FUN_1800b31f0(_DAT_180c86930,&plStack_a8,&puStack_90,0);
  uVar1 = *puVar3;
  *puVar3 = 0;
  plStack_b8 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  if (plStack_b8 != (longlong *)0x0) {
    (**(code **)(*plStack_b8 + 0x38))();
  }
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
  puStack_90 = &UNK_18098bcb0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    puStack_58 = &UNK_18098bc80;
    puStack_50 = auStack_40;
    auStack_40[0] = 0;
    uStack_48 = 0x16;
    strcpy_s(auStack_40,0x20,&UNK_180a0d4d8);
    puVar3 = (undefined8 *)FUN_1800b31f0(_DAT_180c86930,&plStack_a0,&puStack_58,0);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plStack_b8 = *(longlong **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    if (plStack_b8 != (longlong *)0x0) {
      (**(code **)(*plStack_b8 + 0x38))();
    }
    if (plStack_a0 != (longlong *)0x0) {
      (**(code **)(*plStack_a0 + 0x38))();
    }
    puStack_58 = &UNK_18098bcb0;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      *(undefined4 *)(param_1 + 0x34) = 0x4000300;
      *(undefined1 *)(param_1 + 0x59) = 4;
      *(undefined2 *)(param_1 + 0x32) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 1;
      uVar2 = func_0x0001800aada0(*(undefined4 *)(_DAT_180c86938 + 0x1d80));
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      FUN_1804c6850(param_1);
      puStack_90 = (undefined *)0x0;
      ppcStack_88 = (code **)0x0;
      uStack_80 = (code *)0x0;
      apcStack_78[0] = _guard_check_icall;
      FUN_18023c450(*(undefined8 *)(param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x18) * 8),1,
                    0xffffffff,&puStack_90);
      if (uStack_80 != (code *)0x0) {
        (*uStack_80)(&puStack_90,0,0);
      }
      puStack_90 = (undefined *)0x0;
      ppcStack_88 = (code **)0x0;
      uStack_80 = (code *)0x0;
      apcStack_78[0] = _guard_check_icall;
      FUN_18023c450(*(undefined8 *)(param_1 + 0x80),1,0xffffffff,&puStack_90);
      if (uStack_80 != (code *)0x0) {
        (*uStack_80)(&puStack_90,0,0);
      }
      puStack_90 = (undefined *)0x0;
      ppcStack_88 = (code **)0x0;
      uStack_80 = (code *)0x0;
      apcStack_78[0] = _guard_check_icall;
      FUN_18023c450(*(undefined8 *)(param_1 + 0x88),1,0xffffffff,&puStack_90);
      if (uStack_80 != (code *)0x0) {
        (*uStack_80)(&puStack_90,0,0);
      }
      puStack_90 = (undefined *)0x0;
      ppcStack_88 = (code **)0x0;
      uStack_80 = (code *)0x0;
      apcStack_78[0] = _guard_check_icall;
      FUN_18023c450(*(undefined8 *)(param_1 + 0x90),1,0xffffffff,&puStack_90);
      if (uStack_80 != (code *)0x0) {
        (*uStack_80)(&puStack_90,0,0);
      }
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c74c0(longlong ***param_1)
void FUN_1804c74c0(longlong ***param_1)

{
  byte bVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong ***ppplVar11;
  char *pcVar12;
  longlong **pplVar13;
  longlong **pplVar14;
  longlong **pplVar15;
  longlong *plVar16;
  longlong ***ppplVar17;
  longlong lVar18;
  undefined *puVar19;
  longlong ***ppplVar20;
  longlong ***ppplVar21;
  longlong *plVar22;
  undefined1 auStack_1b8 [32];
  undefined *puStack_198;
  undefined8 *puStack_190;
  uint uStack_188;
  undefined8 uStack_180;
  longlong ***ppplStack_178;
  longlong ***ppplStack_170;
  longlong **pplStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  ulonglong uStack_140;
  longlong ***ppplStack_138;
  undefined *puStack_130;
  longlong lStack_128;
  int iStack_120;
  undefined4 uStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  longlong ***ppplStack_e8;
  longlong ****pppplStack_e0;
  undefined *puStack_d8;
  char *pcStack_d0;
  uint uStack_c8;
  char acStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  ppplVar20 = (longlong ***)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  ppplVar11 = param_1 + 0x14;
  ppplStack_178 = param_1;
  if (*ppplVar11 == param_1[0x15]) {
    plStack_110 = (longlong *)0x0;
    plStack_108 = (longlong *)0x0;
    uStack_100 = 0;
    uStack_f8 = 3;
    FUN_1800b6b20(0,&plStack_110);
    ppplVar17 = (longlong ***)((longlong)plStack_108 - (longlong)plStack_110 >> 3);
    ppplVar21 = param_1;
    plVar22 = plStack_110;
    ppplStack_170 = ppplVar17;
    if (ppplVar17 != (longlong ***)0x0) {
      do {
        pplVar7 = (longlong **)0x0;
        puStack_d8 = &UNK_1809fcc28;
        pcStack_d0 = acStack_c0;
        acStack_c0[0] = '\0';
        uStack_c8 = *(uint *)(plVar22[(longlong)ppplVar20] + 0x20);
        puVar2 = *(undefined **)(plVar22[(longlong)ppplVar20] + 0x18);
        puVar19 = &DAT_18098bc73;
        if (puVar2 != (undefined *)0x0) {
          puVar19 = puVar2;
        }
        strcpy_s(acStack_c0,0x80,puVar19);
        if (uStack_c8 < 0xb) {
LAB_1804c75fa:
          bVar4 = false;
        }
        else {
          pcVar12 = pcStack_d0;
          do {
            if (*pcVar12 != pcVar12[(longlong)&UNK_180a2f938 + -(longlong)pcStack_d0])
            goto LAB_1804c75fa;
            pcVar12 = pcVar12 + 1;
          } while (-(longlong)pcStack_d0 + (longlong)pcVar12 < 0xb);
          bVar4 = true;
        }
        if (bVar4) {
          puStack_198 = &UNK_180a3c3e0;
          uStack_180 = 0;
          puStack_190 = (longlong *)0x0;
          uStack_188 = 0;
          FUN_1806277c0(&puStack_198,uStack_c8);
          puVar8 = puStack_190;
          if (0 < (int)uStack_c8) {
            pcVar12 = "";
            if (pcStack_d0 != (char *)0x0) {
              pcVar12 = pcStack_d0;
            }
                    // WARNING: Subroutine does not return
            memcpy(puStack_190,pcVar12,(longlong)(int)(uStack_c8 + 1));
          }
          if (pcStack_d0 == (char *)0x0) {
            pplVar15 = (longlong **)(ulonglong)uStack_188;
          }
          else {
            uStack_188 = 0;
            pplVar15 = pplVar7;
            if (puStack_190 != (longlong *)0x0) {
              *(undefined1 *)puStack_190 = 0;
              pplVar15 = (longlong **)0x0;
            }
          }
          pplVar14 = param_1[0x15];
          if (pplVar14 < param_1[0x16]) {
            param_1[0x15] = pplVar14 + 4;
            *pplVar14 = (longlong *)&UNK_18098bcb0;
            pplVar14[1] = (longlong *)0x0;
            *(undefined4 *)(pplVar14 + 2) = 0;
            *pplVar14 = (longlong *)&UNK_180a3c3e0;
            *(int *)(pplVar14 + 2) = (int)pplVar15;
            pplVar14[1] = puStack_190;
            *(uint *)((longlong)pplVar14 + 0x1c) = uStack_180._4_4_;
            *(undefined4 *)(pplVar14 + 3) = (undefined4)uStack_180;
            uStack_188 = 0;
            uStack_180 = 0;
            ppplStack_138 = (longlong ***)pplVar14;
          }
          else {
            pplVar13 = *ppplVar11;
            lVar18 = (longlong)pplVar14 - (longlong)pplVar13 >> 5;
            if (lVar18 == 0) {
              lVar18 = 1;
LAB_1804c7711:
              pplVar7 = (longlong **)
                        FUN_18062b420(_DAT_180c8ed18,lVar18 << 5,*(undefined1 *)(param_1 + 0x17));
              pplVar14 = param_1[0x15];
              pplVar13 = *ppplVar11;
            }
            else {
              lVar18 = lVar18 * 2;
              if (lVar18 != 0) goto LAB_1804c7711;
            }
            ppplStack_138 = (longlong ***)FUN_180059780(pplVar13,pplVar14,pplVar7);
            *ppplStack_138 = (longlong **)&UNK_18098bcb0;
            ((longlong **)ppplStack_138)[1] = (longlong *)0x0;
            *(undefined4 *)((longlong **)ppplStack_138 + 2) = 0;
            *ppplStack_138 = (longlong **)&UNK_180a3c3e0;
            *(int *)((longlong **)ppplStack_138 + 2) = (int)pplVar15;
            ((longlong **)ppplStack_138)[1] = puVar8;
            *(uint *)((longlong)ppplStack_138 + 0x1c) = uStack_180._4_4_;
            *(undefined4 *)((longlong **)ppplStack_138 + 3) = (undefined4)uStack_180;
            uStack_188 = 0;
            puStack_190 = (undefined8 *)0x0;
            uStack_180 = 0;
            pplVar13 = (longlong **)ppplStack_138 + 4;
            pplVar15 = param_1[0x15];
            pplVar14 = *ppplVar11;
            if (pplVar14 != pplVar15) {
              do {
                (*(code *)**pplVar14)(pplVar14,0);
                pplVar14 = pplVar14 + 4;
              } while (pplVar14 != pplVar15);
              pplVar14 = *ppplVar11;
            }
            if (pplVar14 != (longlong **)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(pplVar14);
            }
            *ppplVar11 = pplVar7;
            param_1[0x15] = pplVar13;
            param_1[0x16] = pplVar7 + lVar18 * 4;
            ppplVar17 = ppplStack_170;
            plVar22 = plStack_110;
          }
          puStack_190 = (undefined8 *)0x0;
          uStack_180 = uStack_180 & 0xffffffff00000000;
          puStack_198 = &UNK_18098bcb0;
        }
        puStack_d8 = &UNK_18098bcb0;
        ppplVar20 = (longlong ***)(ulonglong)((int)ppplVar20 + 1);
        ppplVar21 = ppplStack_178;
      } while (ppplVar20 < ppplVar17);
    }
    plVar5 = plStack_108;
    puStack_198 = &UNK_180a3c3e0;
    uStack_180 = 0;
    puStack_190 = (undefined8 *)0x0;
    uStack_188 = 0;
    puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar8 = 0;
    puStack_190 = puVar8;
    uVar6 = FUN_18064e990(puVar8);
    *puVar8 = 0x616f6c5f65726f63;
    *(undefined4 *)(puVar8 + 1) = 0x676e6964;
    *(undefined1 *)((longlong)puVar8 + 0xc) = 0;
    uStack_188 = 0xc;
    uStack_180._0_4_ = uVar6;
    FUN_180066df0(ppplVar11,&puStack_198);
    puStack_198 = &UNK_180a3c3e0;
    if (puStack_190 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_190 = (undefined8 *)0x0;
    uStack_180 = (ulonglong)uStack_180._4_4_ << 0x20;
    puStack_198 = &UNK_18098bcb0;
    pplStack_168 = (longlong **)&UNK_180a3c3e0;
    uStack_150 = (undefined1 *)0x0;
    puStack_160 = (undefined8 *)0x0;
    uStack_158 = (undefined *)((ulonglong)uStack_158._4_4_ << 0x20);
    puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar8 = 0;
    puStack_160 = puVar8;
    uVar6 = FUN_18064e990(puVar8);
    *puVar8 = 0x616f6c5f65726f63;
    *(undefined4 *)(puVar8 + 1) = 0x676e6964;
    *(undefined2 *)((longlong)puVar8 + 0xc) = 0x325f;
    *(undefined1 *)((longlong)puVar8 + 0xe) = 0;
    uStack_158 = (undefined *)CONCAT44(uStack_158._4_4_,0xe);
    uStack_150._0_4_ = uVar6;
    FUN_180066df0(ppplVar11,&pplStack_168);
    pplStack_168 = (longlong **)&UNK_180a3c3e0;
    if (puStack_160 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_160 = (undefined8 *)0x0;
    uStack_150 = (undefined1 *)((ulonglong)uStack_150._4_4_ << 0x20);
    pplStack_168 = (longlong **)&UNK_18098bcb0;
    for (plVar16 = plVar22; plVar16 != plVar5; plVar16 = plVar16 + 1) {
      if ((longlong *)*plVar16 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar16 + 0x38))();
      }
    }
    param_1 = ppplVar21;
    if (plVar22 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar22);
    }
  }
  bVar1 = *(byte *)(param_1 + 3);
  FUN_1804c9480(param_1,&puStack_130);
  uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
  ppplStack_138 = (longlong ***)&plStack_110;
  ppplStack_170 = &pplStack_168;
  puStack_160 = (undefined8 *)CONCAT44(puStack_160._4_4_,(uint)bVar1);
  ppplStack_178 = (longlong ***)&uStack_158;
  uStack_158 = &UNK_180a3c3e0;
  uStack_140 = 0;
  uStack_150 = (undefined1 *)0x0;
  uStack_148 = 0;
  pplStack_168 = (longlong **)param_1;
  FUN_1806277c0(&uStack_158,iStack_120);
  if (iStack_120 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uStack_150,lStack_128,iStack_120 + 1);
  }
  if (lStack_128 != 0) {
    uStack_148 = 0;
    if (uStack_150 != (undefined1 *)0x0) {
      *uStack_150 = 0;
    }
    uStack_140 = uStack_140 & 0xffffffff;
  }
  uVar10 = FUN_1804c9650(&plStack_110,&pplStack_168);
  ppplVar11 = (longlong ***)FUN_18006b640(uVar9,uVar10);
  ppplStack_138 = ppplVar11;
  if (ppplVar11 != (longlong ***)0x0) {
    (*(code *)(*ppplVar11)[5])(ppplVar11);
  }
  lVar18 = _DAT_180c82868;
  ppplStack_170 = (longlong ***)&ppplStack_178;
  ppplStack_178 = ppplVar11;
  if (ppplVar11 != (longlong ***)0x0) {
    (*(code *)(*ppplVar11)[5])(ppplVar11);
  }
  ppplStack_e8 = (longlong ***)&ppplStack_178;
  puVar8 = (undefined8 *)**(undefined8 **)(lVar18 + 8);
  pcVar3 = *(code **)*puVar8;
  pppplStack_e0 = &ppplStack_170;
  ppplStack_170 = ppplStack_178;
  if (ppplStack_178 != (longlong ***)0x0) {
    (*(code *)(*ppplStack_178)[5])();
  }
  (*pcVar3)(puVar8,&ppplStack_170);
  if (ppplStack_178 != (longlong ***)0x0) {
    (*(code *)(*ppplStack_178)[7])();
  }
  *(bool *)(param_1 + 3) = *(char *)(param_1 + 3) == '\0';
  if (ppplVar11 != (longlong ***)0x0) {
    (*(code *)(*ppplVar11)[7])(ppplVar11);
  }
  puStack_130 = &UNK_180a3c3e0;
  if (lStack_128 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_128 = 0;
  uStack_118 = 0;
  puStack_130 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





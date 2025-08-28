#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part265.c - 7 个函数

// 函数: void FUN_18022c770(longlong param_1,longlong param_2)
void FUN_18022c770(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int32_t uVar9;
  int32_t *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  void *puVar13;
  longlong lVar14;
  longlong lVar15;
  int8_t auStack_b8 [32];
  void *puStack_98;
  int32_t *puStack_90;
  int32_t uStack_88;
  ulonglong uStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [24];
  uint64_t uStack_38;
  ulonglong uStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  *(int32_t *)(param_1 + 0x138) = *(int32_t *)(param_2 + 0x138);
  *(int32_t *)(param_1 + 0x25c) = *(int32_t *)(param_2 + 0x25c);
  *(int32_t *)(param_1 + 0x260) = *(int32_t *)(param_2 + 0x260);
  *(int32_t *)(param_1 + 0x264) = *(int32_t *)(param_2 + 0x264);
  *(int32_t *)(param_1 + 0x268) = *(int32_t *)(param_2 + 0x268);
  *(int32_t *)(param_1 + 0x278) = *(int32_t *)(param_2 + 0x278);
  *(int32_t *)(param_1 + 0x27c) = *(int32_t *)(param_2 + 0x27c);
  *(int32_t *)(param_1 + 0x280) = *(int32_t *)(param_2 + 0x280);
  *(int32_t *)(param_1 + 0x284) = *(int32_t *)(param_2 + 0x284);
  uVar3 = *(uint64_t *)(param_2 + 0x290);
  *(uint64_t *)(param_1 + 0x288) = *(uint64_t *)(param_2 + 0x288);
  *(uint64_t *)(param_1 + 0x290) = uVar3;
  uVar3 = *(uint64_t *)(param_2 + 0x2a0);
  *(uint64_t *)(param_1 + 0x298) = *(uint64_t *)(param_2 + 0x298);
  *(uint64_t *)(param_1 + 0x2a0) = uVar3;
  uVar3 = *(uint64_t *)(param_2 + 0x2b0);
  *(uint64_t *)(param_1 + 0x2a8) = *(uint64_t *)(param_2 + 0x2a8);
  *(uint64_t *)(param_1 + 0x2b0) = uVar3;
  uVar9 = *(int32_t *)(param_2 + 700);
  uVar4 = *(int32_t *)(param_2 + 0x2c0);
  uVar5 = *(int32_t *)(param_2 + 0x2c4);
  *(int32_t *)(param_1 + 0x2b8) = *(int32_t *)(param_2 + 0x2b8);
  *(int32_t *)(param_1 + 700) = uVar9;
  *(int32_t *)(param_1 + 0x2c0) = uVar4;
  *(int32_t *)(param_1 + 0x2c4) = uVar5;
  *(int32_t *)(param_1 + 0x2c8) = *(int32_t *)(param_2 + 0x2c8);
  *(int32_t *)(param_1 + 0x2e0) = *(int32_t *)(param_2 + 0x2e0);
  puVar13 = &DAT_18098bc73;
  if (*(void **)(param_2 + 0x2d8) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 0x2d8);
  }
  puStack_60 = (int8_t *)0x18022c87f;
  strcpy_s(*(uint64_t *)(param_1 + 0x2d8),0x80,puVar13);
  *(int8_t *)(param_1 + 0x13c) = *(int8_t *)(param_2 + 0x13c);
  *(int32_t *)(param_1 + 600) = *(int32_t *)(param_2 + 600);
  plVar12 = *(longlong **)(param_2 + 0x1e0);
  if (plVar12 != (longlong *)0x0) {
    puStack_60 = (int8_t *)0x18022c8b2;
    (**(code **)(*plVar12 + 0x28))(plVar12);
  }
  plVar1 = *(longlong **)(param_1 + 0x1e0);
  *(longlong **)(param_1 + 0x1e0) = plVar12;
  if (plVar1 != (longlong *)0x0) {
    puStack_60 = (int8_t *)0x18022c8d1;
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x388) = *(int32_t *)(param_2 + 0x388);
  *(int8_t *)(param_1 + 0x38c) = *(int8_t *)(param_2 + 0x38c);
  *(int32_t *)(param_1 + 0x26c) = *(int32_t *)(param_2 + 0x26c);
  *(int32_t *)(param_1 + 0x270) = *(int32_t *)(param_2 + 0x270);
  *(int32_t *)(param_1 + 0x274) = *(int32_t *)(param_2 + 0x274);
  plVar12 = (longlong *)(param_1 + 0xb8);
  lVar15 = 0x10;
  lVar14 = 0x10;
  do {
    plVar1 = *(longlong **)((param_2 - param_1) + (longlong)plVar12);
    if (plVar1 != (longlong *)0x0) {
      puStack_60 = (int8_t *)0x18022c947;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)*plVar12;
    *plVar12 = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      puStack_60 = (int8_t *)0x18022c95e;
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar12 = plVar12 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_2 + 0x140);
  puStack_60 = (int8_t *)0x18022c97e;
  FUN_18022dd60(param_1);
  *(int16_t *)(param_1 + 0x3c0) = 0xffff;
  *(uint64_t *)(param_1 + 0x390) = *(uint64_t *)(param_2 + 0x390);
  *(uint64_t *)(param_1 + 0x3a8) = *(uint64_t *)(param_2 + 0x3a8);
  *(uint64_t *)(param_1 + 0x3b0) = *(uint64_t *)(param_2 + 0x3b0);
  *(uint64_t *)(param_1 + 0x3b8) = *(uint64_t *)(param_2 + 0x3b8);
  *(uint64_t *)(param_1 + 0x398) = *(uint64_t *)(param_2 + 0x398);
  *(uint64_t *)(param_1 + 0x3a0) = *(uint64_t *)(param_2 + 0x3a0);
  puStack_60 = (int8_t *)0x18022c9ee;
  FUN_18022cab0(param_1 + 0x148,param_2 + 0x148);
  *(int8_t *)(param_1 + 0x3d8) = *(int8_t *)(param_2 + 0x3d8);
  plVar12 = (longlong *)(param_1 + 0x3e0);
  do {
    plVar1 = *(longlong **)(((param_2 + 0x3d8) - (param_1 + 0x3d8)) + (longlong)plVar12);
    if (plVar1 != (longlong *)0x0) {
      puStack_60 = (int8_t *)0x18022ca27;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)*plVar12;
    *plVar12 = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      puStack_60 = (int8_t *)0x18022ca3e;
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar12 = plVar12 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  *(int8_t *)(param_1 + 0x460) = *(int8_t *)(param_2 + 0x460);
  *(uint64_t *)(param_1 + 0x3c8) = *(uint64_t *)(param_2 + 0x3c8);
  *(uint64_t *)(param_1 + 0x3d0) = *(uint64_t *)(param_2 + 0x3d0);
  puStack_60 = (int8_t *)0x18022ca86;
  FUN_18022cab0(param_1 + 0x148,param_2 + 0x148);
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  bVar6 = false;
  uStack_78 = 0;
  *(uint64_t *)(param_1 + 0x1d0) = 0;
  if (_DAT_180c8a9d0 == 0) goto LAB_18022d28d;
  lVar14 = FUN_180178540();
  puVar10 = puStack_90;
  if ((lVar14 == 0) || (cVar8 = FUN_18022e5d0(param_1), puVar10 = puStack_90, cVar8 == '\0')) {
LAB_18022cf5f:
    bVar7 = false;
  }
  else {
    uVar3 = *(uint64_t *)(param_1 + 0x1e0);
    puStack_98 = &UNK_180a3c3e0;
    uStack_80 = 0;
    puStack_90 = (int32_t *)0x0;
    uStack_88 = 0;
    puVar10 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
    *(int8_t *)puVar10 = 0;
    puStack_90 = puVar10;
    uVar9 = FUN_18064e990(puVar10);
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
    *puVar10 = 0x5f657375;
    puVar10[1] = 0x74726976;
    puVar10[2] = 0x5f6c6175;
    puVar10[3] = 0x74786574;
    puVar10[4] = 0x6e697275;
    *(int16_t *)(puVar10 + 5) = 0x67;
    uStack_88 = 0x15;
    bVar6 = true;
    uStack_78 = 1;
    lVar14 = FUN_180240430(uVar3,&puStack_98,0);
    if (lVar14 == 0) goto LAB_18022cf5f;
    bVar7 = true;
  }
  if (bVar6) {
    uStack_78 = 0;
    puStack_98 = &UNK_180a3c3e0;
    if (puVar10 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar10);
    }
    puStack_90 = (int32_t *)0x0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    puStack_98 = &UNK_18098bcb0;
  }
  if (bVar7) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      *(int8_t *)(param_1 + 0x158) = 1;
      FUN_18022e7d0(&puStack_98,param_1);
      if (*(void **)(param_1 + 0x148) != puStack_98) {
        *(int16_t *)(param_1 + 0x158) = 0;
      }
    }
    if (*(char *)(param_1 + 0x158) != '\0') {
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        *(uint64_t *)(*(longlong *)(param_1 + 0xb8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(longlong *)(param_1 + 0xb8) + 0x350) = 0;
      }
      if (*(longlong *)(param_1 + 200) != 0) {
        *(uint64_t *)(*(longlong *)(param_1 + 200) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(longlong *)(param_1 + 200) + 0x350) = 1;
      }
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        *(uint64_t *)(*(longlong *)(param_1 + 0xd8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(longlong *)(param_1 + 0xd8) + 0x350) = 2;
      }
      puStack_68 = &UNK_18098bc80;
      puStack_60 = auStack_50;
      auStack_50[0] = 0;
      uStack_58 = 0x15;
      strcpy_s(auStack_50,0x20,&DAT_180a0e020);
      uVar11 = FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),&puStack_68,1);
      *(ulonglong *)(param_1 + 0x140) = *(ulonglong *)(param_1 + 0x140) | uVar11;
      FUN_18022dd60(param_1);
      *(int16_t *)(param_1 + 0x3c0) = 0xffff;
      puStack_68 = &UNK_18098bcb0;
      *(int32_t *)(param_1 + 0x1d0) = 1;
      uVar3 = *(uint64_t *)(param_1 + 0x1e0);
      puStack_98 = &UNK_180a3c3e0;
      uStack_80 = 0;
      puStack_90 = (int32_t *)0x0;
      uStack_88 = 0;
      puVar10 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x26,0x13);
      *(int8_t *)puVar10 = 0;
      puStack_90 = puVar10;
      uVar9 = FUN_18064e990(puVar10);
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
      *puVar10 = 0x5f657375;
      puVar10[1] = 0x62756f64;
      puVar10[2] = 0x635f656c;
      puVar10[3] = 0x726f6c6f;
      puVar10[4] = 0x5f70616d;
      puVar10[5] = 0x68746977;
      puVar10[6] = 0x73616d5f;
      puVar10[7] = 0x65745f6b;
      puVar10[8] = 0x72757478;
      *(int16_t *)(puVar10 + 9) = 0x65;
      uStack_88 = 0x25;
      FUN_180240430(uVar3,&puStack_98,0);
      puStack_98 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar10);
    }
    puStack_68 = &UNK_18098bc80;
    puStack_60 = auStack_50;
    auStack_50[0] = 0;
    uStack_58 = 0x15;
    strcpy_s(auStack_50,0x20,&DAT_180a0e020);
    uVar11 = FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),&puStack_68,1);
    *(ulonglong *)(param_1 + 0x140) = *(ulonglong *)(param_1 + 0x140) & ~uVar11;
    FUN_18022dd60(param_1);
    puStack_68 = &UNK_18098bcb0;
  }
LAB_18022d28d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_b8);
}



uint64_t * FUN_18022cab0(uint64_t *param_1,uint64_t *param_2)

{
  void *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  void *puVar4;
  
  puVar2 = param_1 + 5;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar3 = 2;
  *(int8_t *)(param_1 + 2) = *(int8_t *)(param_2 + 2);
  *(int8_t *)((longlong)param_1 + 0x11) = *(int8_t *)((longlong)param_2 + 0x11);
  do {
    *(int32_t *)puVar2 =
         *(int32_t *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
    puVar1 = *(void **)(((longlong)param_2 - (longlong)param_1) + -8 + (longlong)puVar2);
    puVar4 = &DAT_18098bc73;
    if (puVar1 != (void *)0x0) {
      puVar4 = puVar1;
    }
    strcpy_s(puVar2[-1],0x20,puVar4);
    puVar2 = puVar2 + 7;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022cb40(longlong param_1,longlong *param_2)
void FUN_18022cb40(longlong param_1,longlong *param_2)

{
  uint64_t uVar1;
  longlong *plVar2;
  int32_t *puVar3;
  void *puVar4;
  int8_t auStack_108 [32];
  int32_t uStack_e8;
  uint64_t uStack_e0;
  longlong *plStack_d8;
  void *puStack_c8;
  void *puStack_c0;
  uint uStack_b8;
  uint8_t auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  uStack_e8 = 0;
  plStack_d8 = param_2;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x470,0x10,0x15);
  plVar2 = (longlong *)FUN_18022b590(uVar1);
  *param_2 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  uStack_e8 = 1;
  puStack_c8 = &UNK_1809fcc28;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = *(uint *)(param_1 + 0x20);
  puVar4 = &DAT_18098bc73;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 0x18);
  }
  strcpy_s(auStack_b0,0x80,puVar4);
  if (uStack_b8 + 6 < 0x7f) {
    puVar3 = (int32_t *)(puStack_c0 + uStack_b8);
    *puVar3 = 0x706f6328;
    *(int16_t *)(puVar3 + 1) = 0x2979;
    *(int8_t *)((longlong)puVar3 + 6) = 0;
    uStack_b8 = uStack_b8 + 6;
  }
  *(uint64_t *)(*param_2 + 0xa8) = *(uint64_t *)(param_1 + 0xa8);
  puVar4 = &DAT_18098bc73;
  if (puStack_c0 != (void *)0x0) {
    puVar4 = puStack_c0;
  }
  (**(code **)(*(longlong *)(*param_2 + 0x10) + 0x10))((longlong *)(*param_2 + 0x10),puVar4);
  FUN_18022c770(*param_2,param_1);
  puStack_c8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_108);
}





// 函数: void FUN_18022ccc0(longlong param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18022ccc0(longlong param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  void *puVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x2d0) + 0x10);
  puVar2 = &DAT_18098bc73;
  if ((void *)param_2[1] != (void *)0x0) {
    puVar2 = (void *)param_2[1];
  }
  (*pcVar1)((longlong *)(param_1 + 0x2d0),puVar2,pcVar1,param_4,0xfffffffffffffffe);
  FUN_18022bf70(param_1,1);
  *param_2 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022cd30(longlong param_1,int param_2,longlong *param_3)
void FUN_18022cd30(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  uint64_t uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int32_t uVar6;
  longlong lVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  int8_t auStack_b8 [32];
  void *puStack_98;
  int32_t *puStack_90;
  int32_t uStack_88;
  ulonglong uStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [16];
  uint64_t uStack_40;
  ulonglong uStack_30;
  
  lVar7 = param_1 + (longlong)param_2 * 8;
  if (param_3 != (longlong *)0x0) {
    uStack_40 = 0x18022cd69;
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  plVar1 = *(longlong **)(lVar7 + 0xb8);
  *(longlong **)(lVar7 + 0xb8) = param_3;
  if (plVar1 != (longlong *)0x0) {
    uStack_40 = 0x18022cd88;
    (**(code **)(*plVar1 + 0x38))();
  }
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  bVar3 = false;
  uStack_78 = 0;
  *(uint64_t *)(param_1 + 0x1d0) = 0;
  if (_DAT_180c8a9d0 == 0) goto LAB_18022d28d;
  lVar7 = FUN_180178540();
  puVar8 = puStack_90;
  if ((lVar7 == 0) || (cVar5 = FUN_18022e5d0(param_1), puVar8 = puStack_90, cVar5 == '\0')) {
LAB_18022cf5f:
    bVar4 = false;
  }
  else {
    uVar2 = *(uint64_t *)(param_1 + 0x1e0);
    puStack_98 = &UNK_180a3c3e0;
    uStack_80 = 0;
    puStack_90 = (int32_t *)0x0;
    uStack_88 = 0;
    puVar8 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
    *(int8_t *)puVar8 = 0;
    puStack_90 = puVar8;
    uVar6 = FUN_18064e990(puVar8);
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
    *puVar8 = 0x5f657375;
    puVar8[1] = 0x74726976;
    puVar8[2] = 0x5f6c6175;
    puVar8[3] = 0x74786574;
    puVar8[4] = 0x6e697275;
    *(int16_t *)(puVar8 + 5) = 0x67;
    uStack_88 = 0x15;
    bVar3 = true;
    uStack_78 = 1;
    lVar7 = FUN_180240430(uVar2,&puStack_98,0);
    if (lVar7 == 0) goto LAB_18022cf5f;
    bVar4 = true;
  }
  if (bVar3) {
    uStack_78 = 0;
    puStack_98 = &UNK_180a3c3e0;
    if (puVar8 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar8);
    }
    puStack_90 = (int32_t *)0x0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    puStack_98 = &UNK_18098bcb0;
  }
  if (bVar4) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      *(int8_t *)(param_1 + 0x158) = 1;
      FUN_18022e7d0(&puStack_98,param_1);
      if (*(void **)(param_1 + 0x148) != puStack_98) {
        *(int16_t *)(param_1 + 0x158) = 0;
      }
    }
    if (*(char *)(param_1 + 0x158) != '\0') {
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        *(uint64_t *)(*(longlong *)(param_1 + 0xb8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(longlong *)(param_1 + 0xb8) + 0x350) = 0;
      }
      if (*(longlong *)(param_1 + 200) != 0) {
        *(uint64_t *)(*(longlong *)(param_1 + 200) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(longlong *)(param_1 + 200) + 0x350) = 1;
      }
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        *(uint64_t *)(*(longlong *)(param_1 + 0xd8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(longlong *)(param_1 + 0xd8) + 0x350) = 2;
      }
      puStack_68 = &UNK_18098bc80;
      puStack_60 = auStack_50;
      auStack_50[0] = 0;
      uStack_58 = 0x15;
      strcpy_s(auStack_50,0x20,&DAT_180a0e020);
      uVar9 = FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),&puStack_68,1);
      *(ulonglong *)(param_1 + 0x140) = *(ulonglong *)(param_1 + 0x140) | uVar9;
      FUN_18022dd60(param_1);
      *(int16_t *)(param_1 + 0x3c0) = 0xffff;
      puStack_68 = &UNK_18098bcb0;
      *(int32_t *)(param_1 + 0x1d0) = 1;
      uVar2 = *(uint64_t *)(param_1 + 0x1e0);
      puStack_98 = &UNK_180a3c3e0;
      uStack_80 = 0;
      puStack_90 = (int32_t *)0x0;
      uStack_88 = 0;
      puVar8 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x26,0x13);
      *(int8_t *)puVar8 = 0;
      puStack_90 = puVar8;
      uVar6 = FUN_18064e990(puVar8);
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
      *puVar8 = 0x5f657375;
      puVar8[1] = 0x62756f64;
      puVar8[2] = 0x635f656c;
      puVar8[3] = 0x726f6c6f;
      puVar8[4] = 0x5f70616d;
      puVar8[5] = 0x68746977;
      puVar8[6] = 0x73616d5f;
      puVar8[7] = 0x65745f6b;
      puVar8[8] = 0x72757478;
      *(int16_t *)(puVar8 + 9) = 0x65;
      uStack_88 = 0x25;
      FUN_180240430(uVar2,&puStack_98,0);
      puStack_98 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar8);
    }
    puStack_68 = &UNK_18098bc80;
    puStack_60 = auStack_50;
    auStack_50[0] = 0;
    uStack_58 = 0x15;
    strcpy_s(auStack_50,0x20,&DAT_180a0e020);
    uVar9 = FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),&puStack_68,1);
    *(ulonglong *)(param_1 + 0x140) = *(ulonglong *)(param_1 + 0x140) & ~uVar9;
    FUN_18022dd60(param_1);
    puStack_68 = &UNK_18098bcb0;
  }
LAB_18022d28d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022ce40(longlong param_1)
void FUN_18022ce40(longlong param_1)

{
  uint64_t uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int32_t uVar5;
  longlong lVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  int8_t auStack_b8 [32];
  void *puStack_98;
  int32_t *puStack_90;
  int32_t uStack_88;
  ulonglong uStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  bVar2 = false;
  uStack_78 = 0;
  *(uint64_t *)(param_1 + 0x1d0) = 0;
  if (_DAT_180c8a9d0 == 0) goto LAB_18022d28d;
  lVar6 = FUN_180178540();
  puVar7 = puStack_90;
  if ((lVar6 == 0) || (cVar4 = FUN_18022e5d0(param_1), puVar7 = puStack_90, cVar4 == '\0')) {
LAB_18022cf5f:
    bVar3 = false;
  }
  else {
    uVar1 = *(uint64_t *)(param_1 + 0x1e0);
    puStack_98 = &UNK_180a3c3e0;
    uStack_80 = 0;
    puStack_90 = (int32_t *)0x0;
    uStack_88 = 0;
    puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
    *(int8_t *)puVar7 = 0;
    puStack_90 = puVar7;
    uVar5 = FUN_18064e990(puVar7);
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
    *puVar7 = 0x5f657375;
    puVar7[1] = 0x74726976;
    puVar7[2] = 0x5f6c6175;
    puVar7[3] = 0x74786574;
    puVar7[4] = 0x6e697275;
    *(int16_t *)(puVar7 + 5) = 0x67;
    uStack_88 = 0x15;
    bVar2 = true;
    uStack_78 = 1;
    lVar6 = FUN_180240430(uVar1,&puStack_98,0);
    if (lVar6 == 0) goto LAB_18022cf5f;
    bVar3 = true;
  }
  if (bVar2) {
    uStack_78 = 0;
    puStack_98 = &UNK_180a3c3e0;
    if (puVar7 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar7);
    }
    puStack_90 = (int32_t *)0x0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    puStack_98 = &UNK_18098bcb0;
  }
  if (bVar3) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      *(int8_t *)(param_1 + 0x158) = 1;
      FUN_18022e7d0(&puStack_98,param_1);
      if (*(void **)(param_1 + 0x148) != puStack_98) {
        *(int16_t *)(param_1 + 0x158) = 0;
      }
    }
    if (*(char *)(param_1 + 0x158) != '\0') {
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        *(uint64_t *)(*(longlong *)(param_1 + 0xb8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(longlong *)(param_1 + 0xb8) + 0x350) = 0;
      }
      if (*(longlong *)(param_1 + 200) != 0) {
        *(uint64_t *)(*(longlong *)(param_1 + 200) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(longlong *)(param_1 + 200) + 0x350) = 1;
      }
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        *(uint64_t *)(*(longlong *)(param_1 + 0xd8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(longlong *)(param_1 + 0xd8) + 0x350) = 2;
      }
      puStack_68 = &UNK_18098bc80;
      puStack_60 = auStack_50;
      auStack_50[0] = 0;
      uStack_58 = 0x15;
      strcpy_s(auStack_50,0x20,&DAT_180a0e020);
      uVar8 = FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),&puStack_68,1);
      *(ulonglong *)(param_1 + 0x140) = *(ulonglong *)(param_1 + 0x140) | uVar8;
      FUN_18022dd60(param_1);
      *(int16_t *)(param_1 + 0x3c0) = 0xffff;
      puStack_68 = &UNK_18098bcb0;
      *(int32_t *)(param_1 + 0x1d0) = 1;
      uVar1 = *(uint64_t *)(param_1 + 0x1e0);
      puStack_98 = &UNK_180a3c3e0;
      uStack_80 = 0;
      puStack_90 = (int32_t *)0x0;
      uStack_88 = 0;
      puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x26,0x13);
      *(int8_t *)puVar7 = 0;
      puStack_90 = puVar7;
      uVar5 = FUN_18064e990(puVar7);
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
      *puVar7 = 0x5f657375;
      puVar7[1] = 0x62756f64;
      puVar7[2] = 0x635f656c;
      puVar7[3] = 0x726f6c6f;
      puVar7[4] = 0x5f70616d;
      puVar7[5] = 0x68746977;
      puVar7[6] = 0x73616d5f;
      puVar7[7] = 0x65745f6b;
      puVar7[8] = 0x72757478;
      *(int16_t *)(puVar7 + 9) = 0x65;
      uStack_88 = 0x25;
      FUN_180240430(uVar1,&puStack_98,0);
      puStack_98 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar7);
    }
    puStack_68 = &UNK_18098bc80;
    puStack_60 = auStack_50;
    auStack_50[0] = 0;
    uStack_58 = 0x15;
    strcpy_s(auStack_50,0x20,&DAT_180a0e020);
    uVar8 = FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),&puStack_68,1);
    *(ulonglong *)(param_1 + 0x140) = *(ulonglong *)(param_1 + 0x140) & ~uVar8;
    FUN_18022dd60(param_1);
    puStack_68 = &UNK_18098bcb0;
  }
LAB_18022d28d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_b8);
}



bool FUN_18022d360(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  
  cVar1 = *(char *)(param_1 + 0x3c1);
  if (cVar1 == -1) {
    lVar3 = param_1;
    cVar1 = func_0x00018022cda0();
    if ((((((cVar1 == '\0') ||
           (lVar3 = *(longlong *)(lVar3 + 0x1e0), 1 < *(int *)(lVar3 + 0x1c4) - 1U)) ||
          ((*(uint *)(lVar3 + 0x1588) & 0x10000) != 0)) ||
         (((*(uint *)(param_1 + 0x388) >> 0x19 & 1) != 0 || (*(int *)(lVar3 + 0x290) != 0)))) ||
        ((*(char *)(param_1 + 0x13c) != '\x06' && (*(char *)(param_1 + 0x13c) != '\0')))) ||
       ((*(ulonglong *)(param_1 + 0x140) & *(ulonglong *)(param_1 + 0x398)) != 0)) {
LAB_18022d44f:
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
      plVar2 = (longlong *)FUN_180240a60();
      uVar7 = 0;
      lVar4 = plVar2[1] - *plVar2;
      lVar3 = lVar4 >> 0x3f;
      lVar4 = lVar4 / 0x60 + lVar3;
      if (lVar4 != lVar3) {
        pbVar5 = (byte *)(*plVar2 + 0x58);
        do {
          if (((*(ulonglong *)(param_1 + 0x140) >> (uVar7 & 0x3f) & 1) != 0) && ((*pbVar5 & 2) != 0)
             ) goto LAB_18022d44f;
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          pbVar5 = pbVar5 + 0x60;
        } while ((ulonglong)(longlong)(int)uVar6 < (ulonglong)(lVar4 - lVar3));
      }
    }
    *(char *)(param_1 + 0x3c1) = cVar1;
  }
  return cVar1 == '\x01';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_18022d470(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint64_t uStack_50;
  uint64_t uStack_48;
  code *pcStack_40;
  code *pcStack_38;
  
  uVar4 = 0;
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    FUN_18022f080();
  }
  if (*(char *)(param_1 + 0x460) == '\0') {
    if ((char)param_2[2] != '\0') {
      if (((*(longlong *)(param_1 + 0x3c8) != 0) &&
          (((_DAT_180c8a9d0 == 0 || (*(char *)(_DAT_180c8a9d0 + 0x1f1) == '\0')) &&
           (*(char *)(param_1 + 0x1d8) == '\0')))) &&
         ((*(int *)(param_1 + 0x1d0) != -1 && (*(int *)(param_1 + 0x1d0) != 0)))) {
        FUN_1802e4c00(*(longlong *)(param_1 + 0x3c8),0xffffffff);
      }
      if (((*(longlong *)(param_1 + 0x3d0) != 0) &&
          ((_DAT_180c8a9d0 == 0 || (*(char *)(_DAT_180c8a9d0 + 0x1f1) == '\0')))) &&
         ((*(char *)(param_1 + 0x1d8) == '\0' &&
          ((*(int *)(param_1 + 0x1d4) != -1 && (*(int *)(param_1 + 0x1d4) != 0)))))) {
        FUN_1802e4c00(*(longlong *)(param_1 + 0x3d0),0xffffffff);
      }
    }
    plVar2 = (longlong *)(param_1 + 0xb8);
    uVar3 = uVar4;
    do {
      lVar5 = *plVar2;
      if (((lVar5 != 0) &&
          (((cVar1 = func_0x00018022d2c0(param_1,0), cVar1 == '\0' || ((uVar3 & 0xfffffff9) != 0))
           || (uVar3 == 6)))) &&
         ((((cVar1 = func_0x00018022d2c0(param_1,1), cVar1 == '\0' ||
            ((uVar3 - 1 & 0xfffffffd) != 0)) && (*(int *)(lVar5 + 0x380) != 2)) &&
          ((*(int *)(*plVar2 + 0x380) != 3 && (*(longlong *)(*plVar2 + 0xa8) != 0)))))) {
        uVar4 = uVar4 + 1;
        if (*param_2 != 0) {
          FUN_18005ea90();
        }
        if ((char)param_2[2] != '\0') {
          uStack_50 = 0;
          uStack_48 = 0;
          pcStack_40 = (code *)0x0;
          pcStack_38 = _guard_check_icall;
          FUN_18023c450(*plVar2,0,*(int32_t *)((longlong)param_2 + 0x14),&uStack_50);
          if (pcStack_40 != (code *)0x0) {
            (*pcStack_40)(&uStack_50,0,0);
          }
        }
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 1;
    } while ((int)uVar3 < 0x10);
  }
  else if ((*(byte *)(param_2 + 1) & 1) != 0) {
    plVar2 = (longlong *)(param_1 + 0x3e0);
    lVar5 = 0x10;
    do {
      if ((((plVar2[-0x65] != 0) && (*plVar2 != 0)) && (*(int *)(*plVar2 + 0x380) != 2)) &&
         (*(int *)(*plVar2 + 0x380) != 3)) {
        uVar4 = uVar4 + 1;
      }
      plVar2 = plVar2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022d6c0(longlong param_1)
void FUN_18022d6c0(longlong param_1)

{
  uint64_t uVar1;
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  int8_t auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  uVar1 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_50 = &UNK_18098bc80;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0x11;
  strcpy_s(auStack_38,0x20,&UNK_180a0d530);
  FUN_180240430(uVar1,&puStack_50,0);
  puStack_50 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}





// 函数: void FUN_18022d770(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_18022d770(longlong param_1,longlong param_2,uint64_t param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  void *puVar6;
  longlong lVar7;
  void *puVar8;
  uint64_t *puVar9;
  void *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  puVar9 = (uint64_t *)(*(longlong *)(param_1 + 0x1e0) + 0x1c38);
  uVar12 = uVar11;
  do {
    iVar3 = *(int *)(puVar9 + 1);
    iVar5 = iVar2;
    if (iVar3 == iVar2) {
      if (iVar3 != 0) {
        pbVar4 = (byte *)*puVar9;
        lVar7 = *(longlong *)(param_2 + 8) - (longlong)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar7;
          iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18022d7dd:
      if (iVar5 == 0) {
        if (-1 < (int)uVar12) {
          FUN_18022cd30(param_1,uVar12,param_3);
          return;
        }
        goto LAB_18022d7ef;
      }
    }
    else if (iVar3 == 0) goto LAB_18022d7dd;
    uVar12 = (ulonglong)((int)uVar12 + 1);
    uVar11 = uVar11 + 1;
    puVar9 = puVar9 + 0xb;
    if (0xf < (longlong)uVar11) {
LAB_18022d7ef:
      puVar8 = *(void **)(*(longlong *)(param_1 + 0x1e0) + 0x18);
      puVar10 = &DAT_18098bc73;
      if (puVar8 != (void *)0x0) {
        puVar10 = puVar8;
      }
      puVar8 = &DAT_18098bc73;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar8 = *(void **)(param_2 + 8);
      }
      puVar6 = &DAT_18098bc73;
      if (*(void **)(param_1 + 0x18) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x18);
      }
      FUN_180626f80(&UNK_180a13b30,puVar6,puVar8,puVar10);
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




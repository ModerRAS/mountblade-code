#include "TaleWorlds.Native.Split.h"

// 99_part_03_part004.c - 3 个函数

// 函数: void FUN_1801c79a0(uint64_t param_1,longlong param_2,longlong param_3,uint64_t *param_4,
void FUN_1801c79a0(uint64_t param_1,longlong param_2,longlong param_3,uint64_t *param_4,
                  longlong param_5)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  char *pcVar4;
  longlong *plVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  void *puVar9;
  void *puVar10;
  int iVar11;
  uint64_t *puVar12;
  longlong lVar13;
  longlong lVar14;
  void *puStack_60;
  void *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  
  lVar1 = param_3 + 0x60;
  puVar2 = (uint64_t *)FUN_1804c1300(lVar1,0x38,param_3,param_4,0xfffffffffffffffe);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar6 = "version";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  *puVar2 = &UNK_180a015b0;
  puVar2[2] = pcVar4 + -0x180a015af;
  pcVar6 = "1.0";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  puVar2[1] = &UNK_180a0159c;
  puVar2[3] = pcVar4 + -0x180a0159b;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_2 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_2 + 0x48);
    *(uint64_t **)(*(longlong *)(param_2 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_2 + 0x48) = puVar2;
  puVar2[4] = param_2;
  puVar2[6] = 0;
  puVar10 = &system_buffer_ptr;
  if (*(void **)(param_5 + 0x18) != (void *)0x0) {
    puVar10 = *(void **)(param_5 + 0x18);
  }
  FUN_180630b20(param_3,param_2,&UNK_180a0d128,puVar10);
  FUN_18062f640(param_3,param_2,&UNK_180a0d0e0,*(int32_t *)(param_4 + 0x14));
  puVar2 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar6 = "system_flags";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  *puVar2 = &UNK_180a0d100;
  puVar2[2] = pcVar4 + -0x180a0d0ff;
  uVar7 = 1;
  puVar12 = (uint64_t *)&system_flag_6758;
  lVar13 = 0x20;
  do {
    if ((*(uint *)(param_4 + 2) & uVar7) != 0) {
      puVar3 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[4] = 0;
      *(int32_t *)(puVar3 + 5) = 1;
      puVar3[6] = 0;
      puVar3[8] = 0;
      pcVar6 = "system_flag";
      do {
        pcVar4 = pcVar6;
        pcVar6 = pcVar4 + 1;
      } while (*pcVar6 != '\0');
      *puVar3 = &UNK_180a0d150;
      puVar3[2] = pcVar4 + -0x180a0d14f;
      puVar10 = &system_buffer_ptr;
      if ((void *)*puVar12 != (void *)0x0) {
        puVar10 = (void *)*puVar12;
      }
      FUN_180630b20(param_3,puVar3,&system_flag_3a84,puVar10);
      if (puVar2[6] == 0) {
        puVar3[10] = 0;
        puVar2[6] = puVar3;
      }
      else {
        puVar3[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar3;
      }
      puVar2[7] = puVar3;
      puVar3[4] = puVar2;
      puVar3[0xb] = 0;
    }
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    puVar12 = puVar12 + 0xb;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    puVar2[10] = 0;
    *(uint64_t **)(param_2 + 0x30) = puVar2;
  }
  else {
    puVar2[10] = *(uint64_t *)(param_2 + 0x38);
    *(uint64_t **)(*(longlong *)(param_2 + 0x38) + 0x58) = puVar2;
  }
  *(uint64_t **)(param_2 + 0x38) = puVar2;
  puVar2[4] = param_2;
  puVar2[0xb] = 0;
  puVar2 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar6 = "material_flags";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  *puVar2 = &UNK_180a0d160;
  puVar2[2] = pcVar4 + -0x180a0d15f;
  plVar5 = (longlong *)FUN_180240a60(*param_4);
  iVar11 = 0;
  lVar13 = *plVar5;
  lVar14 = plVar5[1] - lVar13 >> 0x3f;
  if ((plVar5[1] - lVar13) / 0x60 + lVar14 != lVar14) {
    uVar8 = 1;
    lVar14 = 0;
    do {
      if ((param_4[1] & uVar8) != 0) {
        puVar12 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[4] = 0;
        *(int32_t *)(puVar12 + 5) = 1;
        puVar12[6] = 0;
        puVar12[8] = 0;
        pcVar6 = "material_flag";
        do {
          pcVar4 = pcVar6;
          pcVar6 = pcVar4 + 1;
        } while (*pcVar6 != '\0');
        *puVar12 = &UNK_180a0d138;
        puVar12[2] = pcVar4 + -0x180a0d137;
        puVar10 = *(void **)(lVar14 + 8 + *plVar5);
        puVar9 = &system_buffer_ptr;
        if (puVar10 != (void *)0x0) {
          puVar9 = puVar10;
        }
        FUN_180630b20(param_3,puVar12,&system_flag_3a84,puVar9);
        if (puVar2[6] == 0) {
          puVar12[10] = 0;
          puVar2[6] = puVar12;
        }
        else {
          puVar12[10] = puVar2[7];
          *(uint64_t **)(puVar2[7] + 0x58) = puVar12;
        }
        puVar2[7] = puVar12;
        puVar12[4] = puVar2;
        puVar12[0xb] = 0;
        lVar13 = *plVar5;
      }
      iVar11 = iVar11 + 1;
      uVar8 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
      lVar14 = lVar14 + 0x60;
    } while ((ulonglong)(longlong)iVar11 < (ulonglong)((plVar5[1] - lVar13) / 0x60));
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    puVar2[10] = 0;
    *(uint64_t **)(param_2 + 0x30) = puVar2;
  }
  else {
    puVar2[10] = *(uint64_t *)(param_2 + 0x38);
    *(uint64_t **)(*(longlong *)(param_2 + 0x38) + 0x58) = puVar2;
  }
  *(uint64_t **)(param_2 + 0x38) = puVar2;
  puVar2[4] = param_2;
  puVar2[0xb] = 0;
  puVar2 = (uint64_t *)FUN_1804c1300(lVar1,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar6 = "vdecl";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  *puVar2 = &UNK_180a0d148;
  puVar2[2] = pcVar4 + -0x180a0d147;
  uStack_50 = 0;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (void *)0x0;
  if (*(ushort *)((longlong)param_4 + 0x14) < 0xc) {
    func_0x0001801c7f00();
  }
  else {
    FUN_180627c50(&puStack_60,&UNK_180a0d190);
  }
  puVar10 = &system_buffer_ptr;
  if (puStack_58 != (void *)0x0) {
    puVar10 = puStack_58;
  }
  FUN_180630b20(param_3,puVar2,&system_flag_3a84,puVar10);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    puVar2[10] = 0;
    *(uint64_t **)(param_2 + 0x30) = puVar2;
  }
  else {
    puVar2[10] = *(uint64_t *)(param_2 + 0x38);
    *(uint64_t **)(*(longlong *)(param_2 + 0x38) + 0x58) = puVar2;
  }
  *(uint64_t **)(param_2 + 0x38) = puVar2;
  puVar2[4] = param_2;
  puVar2[0xb] = 0;
  puStack_60 = &UNK_180a3c3e0;
  if (puStack_58 == (void *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801c7fd0(void)

{
  longlong lVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  void *puStack_148;
  longlong lStack_140;
  uint uStack_138;
  uint64_t uStack_130;
  void *puStack_128;
  int32_t *puStack_120;
  int32_t uStack_118;
  uint64_t uStack_110;
  void *puStack_108;
  int32_t *puStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  int32_t *puStack_e0;
  int32_t uStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  int32_t *puStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  void *puStack_a8;
  int32_t *puStack_a0;
  int32_t uStack_98;
  uint64_t uStack_90;
  void *puStack_88;
  uint64_t *puStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  longlong lStack_60;
  int32_t uStack_58;
  ulonglong uStack_50;
  void *puStack_48;
  longlong lStack_40;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  lVar1 = _DAT_180c8aa08;
  uStack_28 = 0xfffffffffffffffe;
  lVar6 = 0;
  lVar7 = 6;
  do {
    FUN_1801de530(*(longlong *)(lVar1 + 0x50) + 0x10 + lVar6);
    lVar6 = lVar6 + 0x70;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x310);
  LOCK();
  *(uint64_t *)(lVar6 + 8) = 0;
  UNLOCK();
  *(int32_t *)(lVar6 + 0x10) = 0;
  lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x318);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  *(uint64_t *)(lVar6 + 0x10) = 0;
  *(int8_t *)(lVar6 + 0x18) = 0;
  *(uint64_t *)(lVar6 + 0x20) = 0;
  FUN_1800572d0(*(longlong *)(lVar1 + 0x50) + 0x328);
  FUN_1801eca80(*(longlong *)(lVar1 + 0x50) + 0x10);
  FUN_1801eca80(*(longlong *)(lVar1 + 0x50) + 0x80);
  FUN_1801eca80(*(longlong *)(lVar1 + 0x50) + 0x1d0);
  FUN_1801eca80(*(longlong *)(lVar1 + 0x50) + 0x240);
  FUN_1801eca80(*(longlong *)(lVar1 + 0x50) + 0xf0);
  FUN_1801eca80(*(longlong *)(lVar1 + 0x50) + 0x160);
  puStack_148 = &UNK_180a3c3e0;
  uStack_130 = 0;
  lStack_140 = 0;
  uStack_138 = 0;
  lVar6 = FUN_1800baa80(&puStack_48);
  uStack_138 = *(uint *)(lVar6 + 0x10);
  lStack_140 = *(longlong *)(lVar6 + 8);
  uStack_130 = *(uint64_t *)(lVar6 + 0x18);
  *(int32_t *)(lVar6 + 0x10) = 0;
  *(uint64_t *)(lVar6 + 8) = 0;
  *(uint64_t *)(lVar6 + 0x18) = 0;
  puStack_48 = &UNK_180a3c3e0;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &UNK_18098bcb0;
  iVar5 = uStack_138 + 0x12;
  FUN_1806277c0(&puStack_148,iVar5);
  puVar4 = (int32_t *)((ulonglong)uStack_138 + lStack_140);
  *puVar4 = 0x65726f43;
  puVar4[1] = 0x64616853;
  puVar4[2] = 0x2f737265;
  puVar4[3] = 0x31443344;
  *(int16_t *)(puVar4 + 4) = 0x2f31;
  *(int8_t *)((longlong)puVar4 + 0x12) = 0;
  puStack_68 = &UNK_180a3c3e0;
  uStack_50 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_138 = iVar5;
  FUN_1801c5700(&puStack_68,0);
  puStack_128 = &UNK_180a3c3e0;
  uStack_110 = 0;
  puStack_120 = (int32_t *)0x0;
  uStack_118 = 0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_120 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  *puVar4 = 0x6361732e;
  *(int16_t *)(puVar4 + 1) = 0x78;
  uStack_118 = 5;
  uStack_110._0_4_ = uVar2;
  FUN_18062bd50(&puStack_148,&puStack_128);
  puStack_128 = &UNK_180a3c3e0;
  if (puStack_120 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_120 = (int32_t *)0x0;
  uStack_110 = (ulonglong)uStack_110._4_4_ << 0x20;
  puStack_128 = &UNK_18098bcb0;
  puStack_108 = &UNK_180a3c3e0;
  uStack_f0 = 0;
  puStack_100 = (int32_t *)0x0;
  uStack_f8 = 0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_100 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  *puVar4 = 0x7478742e;
  *(int8_t *)(puVar4 + 1) = 0;
  uStack_f8 = 4;
  uStack_f0._0_4_ = uVar2;
  FUN_18062bd50(&puStack_148,&puStack_108);
  puStack_108 = &UNK_180a3c3e0;
  if (puStack_100 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_100 = (int32_t *)0x0;
  uStack_f0 = (ulonglong)uStack_f0._4_4_ << 0x20;
  puStack_108 = &UNK_18098bcb0;
  puStack_e8 = &UNK_180a3c3e0;
  uStack_d0 = 0;
  puStack_e0 = (int32_t *)0x0;
  uStack_d8 = 0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_e0 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  *puVar4 = 0x6361732e;
  *(int16_t *)(puVar4 + 1) = 0x6b;
  uStack_d8 = 5;
  uStack_d0._0_4_ = uVar2;
  FUN_18062bd50(&puStack_148,&puStack_e8);
  puStack_e8 = &UNK_180a3c3e0;
  if (puStack_e0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_e0 = (int32_t *)0x0;
  uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
  puStack_e8 = &UNK_18098bcb0;
  puStack_c8 = &UNK_180a3c3e0;
  uStack_b0 = 0;
  puStack_c0 = (int32_t *)0x0;
  uStack_b8 = 0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_c0 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  *puVar4 = 0x6e69622e;
  *(int8_t *)(puVar4 + 1) = 0;
  uStack_b8 = 4;
  uStack_b0._0_4_ = uVar2;
  FUN_18062bd50(&puStack_148,&puStack_c8);
  puStack_c8 = &UNK_180a3c3e0;
  if (puStack_c0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_c0 = (int32_t *)0x0;
  uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
  puStack_c8 = &UNK_18098bcb0;
  puStack_a8 = &UNK_180a3c3e0;
  uStack_90 = 0;
  puStack_a0 = (int32_t *)0x0;
  uStack_98 = 0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_a0 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  *puVar4 = 0x6361732e;
  *(int16_t *)(puVar4 + 1) = 0x6b;
  uStack_98 = 5;
  uStack_90._0_4_ = uVar2;
  FUN_18062bd50(&puStack_68,&puStack_a8);
  puStack_a8 = &UNK_180a3c3e0;
  if (puStack_a0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_a0 = (int32_t *)0x0;
  uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
  puStack_a8 = &UNK_18098bcb0;
  puStack_88 = &UNK_180a3c3e0;
  uStack_70 = 0;
  puStack_80 = (uint64_t *)0x0;
  uStack_78 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_80 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  *puVar3 = 0x7365676e6168632e;
  *(int16_t *)(puVar3 + 1) = 0x7465;
  *(int8_t *)((longlong)puVar3 + 10) = 0;
  uStack_78 = 10;
  uStack_70._0_4_ = uVar2;
  FUN_18062bd50(&puStack_148,&puStack_88);
  puStack_88 = &UNK_180a3c3e0;
  if (puStack_80 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_80 = (uint64_t *)0x0;
  uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
  puStack_88 = &UNK_18098bcb0;
  *(int32_t *)(*(longlong *)(lVar1 + 0x50) + 0x78) = 0xffffffff;
  *(int32_t *)(*(longlong *)(lVar1 + 0x50) + 0xe8) = 0xffffffff;
  *(int32_t *)(*(longlong *)(lVar1 + 0x50) + 0x2a8) = 0xffffffff;
  *(int32_t *)(*(longlong *)(lVar1 + 0x50) + 0x238) = 0xffffffff;
  *(int32_t *)(*(longlong *)(lVar1 + 0x50) + 0x158) = 0xffffffff;
  lVar1 = *(longlong *)(lVar1 + 0x50);
  *(int32_t *)(lVar1 + 0x1c8) = 0xffffffff;
  puStack_68 = &UNK_180a3c3e0;
  if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_60 = 0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  puStack_68 = &UNK_18098bcb0;
  puStack_148 = &UNK_180a3c3e0;
  if (lStack_140 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1801c85f0(void)

{
  int8_t auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *in_stack_00000028;
  int8_t (*in_stack_00000030) [16];
  int8_t (*pauVar6) [16];
  uint64_t uVar7;
  short sStack_5c;
  longlong alStack_58 [3];
  void *puStack_40;
  longlong lStack_38;
  
  uVar7 = 0xfffffffffffffffe;
  plVar5 = in_stack_00000028;
  pauVar6 = in_stack_00000030;
  FUN_1801c8840();
  lVar4 = *in_stack_00000028;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_1806279c0(&puStack_40,lVar4 + 0x10);
    lVar2 = FUN_1802aaef0(_DAT_180c86930 + 0xac0);
    if (lVar2 == 0) {
      lVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x50,0x10,3,plVar5,pauVar6,uVar7);
      *(int32_t *)(lVar2 + 0x20) = 0x3f800000;
      *(uint64_t *)(lVar2 + 0x24) = 0x40000000;
      *(int32_t *)(lVar2 + 0x2c) = 3;
      *(uint64_t *)(lVar2 + 0x10) = 1;
      *(void **)(lVar2 + 8) = &system_flag_0000;
      *(uint64_t *)(lVar2 + 0x18) = 0;
      *(int32_t *)(lVar2 + 0x28) = 0;
      FUN_1806279c0(lVar2 + 0x30,&puStack_40);
      *(longlong *)(lVar4 + 0x15b8) = lVar2;
      FUN_1802ab0c0(_DAT_180c86930 + 0xac0);
    }
    AcquireSRWLockExclusive(0x180c91dc8);
    auVar1 = *in_stack_00000030;
    lVar4 = *(longlong *)(lVar2 + 8);
    plVar5 = *(longlong **)
              (lVar4 + (((ulonglong)auVar1._8_4_ + auVar1._0_8_) %
                       (ulonglong)*(uint *)(lVar2 + 0x10)) * 8);
    if (plVar5 != (longlong *)0x0) {
      sStack_5c = auVar1._12_2_;
      do {
        if (((*plVar5 == auVar1._0_8_) && (*(uint *)(plVar5 + 1) == auVar1._8_4_)) &&
           (*(short *)((longlong)plVar5 + 0xc) == sStack_5c)) {
          lVar3 = *(longlong *)(lVar2 + 0x10);
          goto LAB_1801c8782;
        }
        plVar5 = (longlong *)plVar5[3];
      } while (plVar5 != (longlong *)0x0);
    }
    lVar3 = *(longlong *)(lVar2 + 0x10);
    plVar5 = *(longlong **)(lVar4 + lVar3 * 8);
LAB_1801c8782:
    if (plVar5 == *(longlong **)(lVar4 + lVar3 * 8)) {
      uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x120,8,CONCAT71(auVar1._1_7_,0x11));
      lVar4 = FUN_18029a3c0(uVar7);
      FUN_18029a870(lVar2,alStack_58);
      *(longlong *)(alStack_58[0] + 0x10) = lVar4;
    }
    else {
      lVar4 = plVar5[2];
    }
    ReleaseSRWLockExclusive(0x180c91dc8);
    puStack_40 = &UNK_180a3c3e0;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return lVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c8840(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4,
void FUN_1801c8840(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4,
                  longlong *param_5,uint64_t *param_6)

{
  uint64_t *puVar1;
  void *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int iVar5;
  longlong lVar6;
  void *puVar7;
  int32_t uVar8;
  uint64_t uStackX_8;
  uint64_t auStackX_18 [2];
  void *puStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  ulonglong uStack_b0;
  void *puStack_a8;
  longlong lStack_a0;
  int iStack_98;
  uint64_t uStack_88;
  void *puStack_80;
  char *pcStack_78;
  int iStack_70;
  int32_t uStack_68;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStackX_8 = param_1;
  auStackX_18[0] = param_3;
  uVar8 = FUN_1806279c0(&puStack_a8);
  puStack_c8 = &UNK_180a3c3e0;
  uStack_b0 = 0;
  puStack_c0 = (void *)0x0;
  uStack_b8 = 0;
  iVar5 = FUN_1801d9b10(uVar8,&puStack_a8,&puStack_c8);
  FUN_180629a40(&puStack_a8,&puStack_80,iVar5,iVar5 + 2);
  if (iStack_70 == 2) {
    if (((*pcStack_78 == 'v') && (pcStack_78[1] == 's')) && (pcStack_78[2] == '\0')) {
      *param_4 = 0;
    }
    if (((*pcStack_78 == 'p') && (pcStack_78[1] == 's')) && (pcStack_78[2] == '\0')) {
      *param_4 = 1;
    }
    if (((*pcStack_78 == 'h') && (pcStack_78[1] == 's')) && (pcStack_78[2] == '\0')) {
      *param_4 = 3;
    }
    if (((*pcStack_78 == 'd') && (pcStack_78[1] == 's')) && (pcStack_78[2] == '\0')) {
      *param_4 = 2;
    }
    if (((*pcStack_78 == 'c') && (pcStack_78[1] == 's')) && (pcStack_78[2] == '\0')) {
      *param_4 = 4;
    }
  }
  FUN_1806289a0(&puStack_a8);
  puVar2 = puStack_c0;
  if (iStack_98 != 0) {
    puStack_60 = (uint64_t *)0x0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    uStack_48 = 3;
    if (lStack_a0 != 0) {
      FUN_180057980(&puStack_a8,&puStack_60,&system_flag_ccb0);
    }
    puVar4 = puStack_58;
    puVar3 = puStack_60;
    puVar1 = puVar3;
    if (((longlong)puStack_58 - (longlong)puStack_60 & 0xffffffffffffffe0U) == 0x60) {
      puVar7 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar7 = puVar2;
      }
      lVar6 = FUN_1802abc50(_DAT_180c86930 + 0x138,puVar7);
      if (lVar6 != 0) {
        *param_5 = lVar6;
        puVar7 = &system_buffer_ptr;
        if ((void *)puVar3[1] != (void *)0x0) {
          puVar7 = (void *)puVar3[1];
        }
        FUN_18010cbc0(puVar7,&UNK_180a063a0,&uStackX_8);
        puVar7 = &system_buffer_ptr;
        if ((void *)puVar3[5] != (void *)0x0) {
          puVar7 = (void *)puVar3[5];
        }
        FUN_18010cbc0(puVar7,&UNK_180a02954,&uStack_88);
        puVar7 = &system_buffer_ptr;
        if ((void *)puVar3[9] != (void *)0x0) {
          puVar7 = (void *)puVar3[9];
        }
        FUN_18010cbc0(puVar7,&UNK_1809fd0a0,auStackX_18);
        *(int16_t *)((longlong)param_6 + 0xc) = (int16_t)auStackX_18[0];
        *param_6 = uStack_88;
        *(int32_t *)(param_6 + 1) = (int32_t)uStackX_8;
      }
    }
    for (; puVar1 != puVar4; puVar1 = puVar1 + 4) {
      (**(code **)*puVar1)(puVar1,0);
    }
    if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
  }
  puStack_80 = &UNK_180a3c3e0;
  if (pcStack_78 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pcStack_78 = (char *)0x0;
  uStack_68 = 0;
  puStack_80 = &UNK_18098bcb0;
  puStack_c8 = &UNK_180a3c3e0;
  if (puVar2 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  puStack_c0 = (void *)0x0;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  puStack_c8 = &UNK_18098bcb0;
  puStack_a8 = &UNK_180a3c3e0;
  if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c8b50(uint64_t param_1,longlong *param_2,longlong *param_3)
void FUN_1801c8b50(uint64_t param_1,longlong *param_2,longlong *param_3)

{
  int32_t uVar1;
  int iVar2;
  int32_t *puVar3;
  longlong lVar4;
  int32_t *puVar5;
  ulonglong uVar6;
  uint uVar7;
  void *puVar8;
  bool bVar9;
  int8_t auStack_598 [32];
  int32_t uStack_578;
  void *puStack_570;
  int32_t *puStack_568;
  int32_t uStack_560;
  uint64_t uStack_558;
  uint64_t uStack_550;
  longlong *plStack_548;
  int8_t auStack_538 [96];
  int8_t auStack_4d8 [32];
  longlong alStack_4b8 [4];
  int32_t uStack_498;
  int32_t uStack_494;
  int32_t uStack_490;
  int8_t auStack_488 [96];
  int8_t auStack_428 [32];
  longlong alStack_408 [4];
  int32_t uStack_3e8;
  int32_t uStack_3e4;
  int32_t uStack_3e0;
  int8_t auStack_3d8 [96];
  int8_t auStack_378 [32];
  longlong alStack_358 [4];
  int32_t uStack_338;
  int32_t uStack_334;
  int32_t uStack_330;
  int8_t auStack_328 [96];
  int8_t auStack_2c8 [32];
  longlong alStack_2a8 [4];
  int32_t uStack_288;
  int32_t uStack_284;
  int32_t uStack_280;
  int8_t auStack_278 [96];
  int8_t auStack_218 [32];
  longlong alStack_1f8 [4];
  int32_t uStack_1d8;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  int8_t auStack_1c8 [96];
  int8_t auStack_168 [32];
  longlong alStack_148 [4];
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  void *puStack_118;
  void *puStack_110;
  uint uStack_108;
  uint8_t auStack_100 [24];
  void *puStack_e8;
  void *puStack_e0;
  uint uStack_d8;
  uint8_t auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_550 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_598;
  uStack_578 = 0;
  puStack_570 = &UNK_180a3c3e0;
  uStack_558 = 0;
  puStack_568 = (int32_t *)0x0;
  uStack_560 = 0;
  plStack_548 = param_3;
  puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_568 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_558 = CONCAT44(uStack_558._4_4_,uVar1);
  *puVar3 = 0x6e69616d;
  *(int8_t *)(puVar3 + 1) = 0;
  uStack_560 = 4;
  puStack_118 = &UNK_1809fdc18;
  puStack_110 = auStack_100;
  auStack_100[0] = 0;
  uStack_108 = 6;
  strcpy_s(auStack_100,0x10,&UNK_180a3c07c);
  uStack_578 = 1;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = uStack_108;
  puVar8 = &system_buffer_ptr;
  if (puStack_110 != (void *)0x0) {
    puVar8 = puStack_110;
  }
  strcpy_s(auStack_d0,0x80,puVar8);
  uStack_578 = 0;
  puStack_118 = &UNK_18098bcb0;
  uVar6 = (ulonglong)uStack_d8;
  uVar7 = uStack_d8 + 0x10;
  if (uVar7 < 0x7f) {
    puVar5 = (int32_t *)(puStack_e0 + uVar6);
    *puVar5 = 0x64616853;
    puVar5[1] = 0x2f737265;
    puVar5[2] = 0x72756f53;
    puVar5[3] = 0x2f736563;
    *(int8_t *)(puVar5 + 4) = 0;
    uVar6 = (ulonglong)uVar7;
    uStack_d8 = uVar7;
  }
  puVar8 = &system_buffer_ptr;
  if (*(void **)(*param_3 + 0x16b8) != (void *)0x0) {
    puVar8 = *(void **)(*param_3 + 0x16b8);
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (puVar8[lVar4] != '\0');
  iVar2 = (int)lVar4;
  if ((0 < iVar2) && ((uint)((int)uVar6 + iVar2) < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_e0 + uVar6,puVar8,(longlong)(iVar2 + 1));
  }
  uVar7 = (int)uVar6 + 3;
  if (uVar7 < 0x7f) {
    *(int32_t *)(puStack_e0 + uVar6) = 0x73722e;
    uStack_d8 = uVar7;
  }
  puVar8 = &system_buffer_ptr;
  if (puStack_e0 != (void *)0x0) {
    puVar8 = puStack_e0;
  }
  (**(code **)(param_3[0xc] + 0x10))(param_3 + 0xc,puVar8);
  uVar7 = *(uint *)(param_3 + 0x15);
  if ((uVar7 & 1) != 0) {
    FUN_18009e8e0(auStack_538,param_3);
    FUN_180627ae0(auStack_4d8,param_3 + 0xc);
    FUN_180627ae0(alStack_4b8,param_3 + 0x10);
    uStack_498 = (int32_t)param_3[0x14];
    uStack_494 = *(int32_t *)((longlong)param_3 + 0xa4);
    uStack_490 = (int32_t)param_3[0x15];
    (**(code **)(alStack_4b8[0] + 0x10))(alStack_4b8,&UNK_180a0d2a8);
    uStack_494 = 0;
    FUN_1801ec9f0(param_2);
    FUN_1801e14f0(param_2,auStack_538);
    FUN_1801c92a0(auStack_538);
    uVar7 = *(uint *)(param_3 + 0x15);
  }
  if ((uVar7 & 4) != 0) {
    FUN_18009e8e0(auStack_488,param_3);
    FUN_180627ae0(auStack_428,param_3 + 0xc);
    FUN_180627ae0(alStack_408,param_3 + 0x10);
    uStack_3e8 = (int32_t)param_3[0x14];
    uStack_3e4 = *(int32_t *)((longlong)param_3 + 0xa4);
    uStack_3e0 = (int32_t)param_3[0x15];
    (**(code **)(alStack_408[0] + 0x10))(alStack_408,&UNK_180a0d2b0);
    uStack_3e4 = 3;
    FUN_1801ec960(param_2);
    FUN_1801e1fd0(param_2,auStack_488);
    FUN_1801c92a0(auStack_488);
    uVar7 = *(uint *)(param_3 + 0x15);
  }
  if ((uVar7 & 2) != 0) {
    FUN_18009e8e0(auStack_3d8,param_3);
    FUN_180627ae0(auStack_378,param_3 + 0xc);
    FUN_180627ae0(alStack_358,param_3 + 0x10);
    uStack_338 = (int32_t)param_3[0x14];
    uStack_334 = *(int32_t *)((longlong)param_3 + 0xa4);
    uStack_330 = (int32_t)param_3[0x15];
    (**(code **)(alStack_358[0] + 0x10))(alStack_358,&UNK_180a0d298);
    uStack_334 = 2;
    FUN_1801ec8d0(param_2);
    FUN_1801e35b0(param_2,auStack_3d8);
    FUN_1801c92a0(auStack_3d8);
    uVar7 = *(uint *)(param_3 + 0x15);
  }
  if ((uVar7 & 8) != 0) {
    FUN_18009e8e0(auStack_328,param_3);
    FUN_180627ae0(auStack_2c8,param_3 + 0xc);
    FUN_180627ae0(alStack_2a8,param_3 + 0x10);
    uStack_288 = (int32_t)param_3[0x14];
    uStack_284 = *(int32_t *)((longlong)param_3 + 0xa4);
    uStack_280 = (int32_t)param_3[0x15];
    (**(code **)(alStack_2a8[0] + 0x10))(alStack_2a8,&UNK_180a0d2a0);
    uStack_284 = 5;
    FUN_1801ec840(param_2);
    FUN_1801e2ac0(param_2,auStack_328);
    FUN_1801c92a0(auStack_328);
    uVar7 = *(uint *)(param_3 + 0x15);
  }
  if ((uVar7 & 0x10) != 0) {
    FUN_18009e8e0(auStack_278,param_3);
    FUN_180627ae0(auStack_218,param_3 + 0xc);
    FUN_180627ae0(alStack_1f8,param_3 + 0x10);
    uStack_1d8 = (int32_t)param_3[0x14];
    uStack_1d4 = *(int32_t *)((longlong)param_3 + 0xa4);
    uStack_1d0 = (int32_t)param_3[0x15];
    (**(code **)(alStack_1f8[0] + 0x10))(alStack_1f8,&UNK_180a0d2e0);
    uStack_1d4 = 1;
    FUN_1801ec7b0(param_2);
    FUN_1801e40a0(param_2,auStack_278);
    FUN_1801c92a0(auStack_278);
    uVar7 = *(uint *)(param_3 + 0x15);
  }
  if ((uVar7 & 0x20) != 0) {
    FUN_18009e8e0(auStack_1c8,param_3);
    FUN_180627ae0(auStack_168,param_3 + 0xc);
    FUN_180627ae0(alStack_148,param_3 + 0x10);
    uStack_128 = (int32_t)param_3[0x14];
    uStack_124 = *(int32_t *)((longlong)param_3 + 0xa4);
    uStack_120 = (int32_t)param_3[0x15];
    (**(code **)(alStack_148[0] + 0x10))(alStack_148,&UNK_180a0d2e8);
    uStack_124 = 4;
    FUN_1801ec720(param_2);
    FUN_1801e6b90(param_2,auStack_1c8);
    FUN_1801c92a0(auStack_1c8);
  }
  if ((*(char *)(_DAT_180c86870 + 0x60) == '\0') && (*(char *)(_DAT_180c8aa08 + 9) == '\0')) {
    if ((char)param_2[0x10] == '\0') {
      if ((((*(uint *)(param_3 + 0x15) & 1) == 0) || (*(longlong *)(*param_2 + 0x18) != 0)) &&
         (((*(uint *)(param_3 + 0x15) & 0x10) == 0 || (*(longlong *)(param_2[1] + 0x18) != 0)))) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
    }
    else {
      bVar9 = *(longlong *)(param_2[2] + 0x18) != 0;
    }
    *(bool *)((longlong)param_2 + 0x81) = bVar9;
    puStack_e8 = &UNK_18098bcb0;
    puStack_570 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  puStack_e8 = &UNK_18098bcb0;
  puStack_570 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}







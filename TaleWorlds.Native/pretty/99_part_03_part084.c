#include "TaleWorlds.Native.Split.h"

// 99_part_03_part084.c - 5 个函数

// 函数: void FUN_18024a220(longlong *param_1)
void FUN_18024a220(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    *puVar2 = &UNK_180a3c3e0;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &UNK_18098bcb0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_18024a240(uint64_t *param_1)
void FUN_18024a240(uint64_t *param_1)

{
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}



// WARNING: Removing unreachable block (ram,0x00018024a8cc)
// WARNING: Removing unreachable block (ram,0x00018024a8d9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18024a290(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,longlong *param_5
             )

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint64_t uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint64_t uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint64_t *puVar16;
  uint uVar17;
  char *pcVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint *puVar22;
  uint *puVar23;
  int iVar24;
  bool bVar25;
  float fVar26;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar27;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  uint64_t in_stack_fffffffffffffef0;
  int32_t uVar28;
  int32_t *in_stack_fffffffffffffef8;
  longlong alStack_d8 [2];
  uint64_t uStack_c8;
  uint uStack_c0;
  int32_t uStack_bc;
  longlong lStack_b8;
  ulonglong uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  longlong lStack_98;
  longlong lStack_88;
  longlong lStack_80;
  longlong alStack_78 [2];
  int32_t uStack_68;
  int32_t uStack_64;
  uint uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  uint uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  uint uStack_40;
  int32_t uStack_3c;
  
  cVar9 = *(char *)(param_1 + 0x1c62);
  if (cVar9 != '\0') {
    uVar3 = *(uint *)(*(longlong *)(param_2 + 0x1b8) + 0x138);
    if ((uVar3 & 0x2000010c) != 0) {
      return 0;
    }
    cVar7 = *(char *)(*(longlong *)(param_2 + 0x1b8) + 0x13c);
    if (cVar7 != '\x06') {
      if (cVar7 == '\0') goto LAB_18024a311;
      if ((uVar3 >> 0x12 & 1) == 0) {
        return 0;
      }
    }
    if ((cVar7 != '\0') && (cVar7 != '\x06')) {
      return 0;
    }
  }
LAB_18024a311:
  if ((((*(int *)(param_2 + 0x208) != 0) &&
       ((fVar26 = *(float *)(param_2 + 0x2d8) - *(float *)(param_2 + 0x2dc), fVar26 <= -0.01 ||
        (0.01 <= fVar26)))) ||
      (((*(byte *)(param_2 + 0xfd) & 0x20) == 0 &&
       (cVar7 = func_0x0001800854e0(*(uint64_t *)(param_2 + 0x1b0)), cVar7 != '\0')))) &&
     (param_4 != 0)) {
    lVar19 = 1;
    puVar22 = (uint *)(param_4 + 0x5ad8);
    LOCK();
    uVar3 = *puVar22;
    *puVar22 = *puVar22 + 1;
    UNLOCK();
    uVar20 = (ulonglong)(uVar3 >> 10);
    pcVar18 = (char *)(param_4 + 0x5b20 + uVar20);
    plVar14 = (longlong *)(param_4 + 0x5ae0 + (ulonglong)(uVar3 >> 10) * 8);
    uStack_b0 = uVar20;
    do {
      iVar24 = (int)uVar20;
      if (*plVar14 == 0) {
        lVar10 = FUN_18062b420(_DAT_180c8ed18,0x30000,0x25);
        plVar1 = (longlong *)(param_4 + 0x5ae0 + (longlong)iVar24 * 8);
        LOCK();
        bVar25 = *plVar1 == 0;
        if (bVar25) {
          *plVar1 = lVar10;
        }
        UNLOCK();
        if (bVar25) {
          FUN_18024d030(puVar22,iVar24 << 10);
          LOCK();
          *(int8_t *)(param_4 + 0x5b20 + (longlong)iVar24) = 0;
          UNLOCK();
        }
        else {
          if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          do {
          } while (*pcVar18 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar18 != '\0');
      }
      uVar20 = (ulonglong)(iVar24 + 1);
      plVar14 = plVar14 + 1;
      pcVar18 = pcVar18 + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    plVar14 = (longlong *)
              (*(longlong *)(param_4 + 0x5ae0 + uStack_b0 * 8) +
              (ulonglong)(uVar3 - (uVar3 & 0xfffffc00)) * 0xc0);
    *plVar14 = param_2;
    lVar19 = param_3[1];
    plVar14[2] = *param_3;
    plVar14[3] = lVar19;
    lVar19 = param_3[3];
    plVar14[4] = param_3[2];
    plVar14[5] = lVar19;
    lVar19 = param_3[5];
    plVar14[6] = param_3[4];
    plVar14[7] = lVar19;
    lVar19 = param_3[7];
    plVar14[8] = param_3[6];
    plVar14[9] = lVar19;
    plVar14[1] = param_1;
    lVar19 = param_5[1];
    plVar14[10] = *param_5;
    plVar14[0xb] = lVar19;
    lVar19 = param_5[3];
    plVar14[0xc] = param_5[2];
    plVar14[0xd] = lVar19;
    lVar19 = param_5[5];
    plVar14[0xe] = param_5[4];
    plVar14[0xf] = lVar19;
    lVar19 = param_5[7];
    plVar14[0x10] = param_5[6];
    plVar14[0x11] = lVar19;
    lVar19 = param_5[9];
    plVar14[0x12] = param_5[8];
    plVar14[0x13] = lVar19;
    lVar19 = param_5[0xb];
    plVar14[0x14] = param_5[10];
    plVar14[0x15] = lVar19;
    lVar19 = param_5[0xd];
    plVar14[0x16] = param_5[0xc];
    plVar14[0x17] = lVar19;
    return 1;
  }
  lVar11 = 0;
  lStack_88 = 0;
  lVar10 = FUN_1800dae20();
  lVar19 = *(longlong *)(param_2 + 0x1b8);
  lStack_b8 = lVar10;
  uStack_a8 = lVar19;
  cVar7 = func_0x0001800e2bf0(_DAT_180c86890,param_1);
  plVar14 = param_5;
  FUN_1802decc0(lVar10);
  if ((param_5[7] != 0) && ((*(byte *)(lVar10 + 0x314) & 2) != 0)) {
    lVar11 = FUN_1800dae20();
    *(uint *)(lVar11 + 0x314) = *(uint *)(lVar11 + 0x314) | 2;
    lStack_88 = lVar11;
  }
  *(uint *)(lVar10 + 0x314) = *(uint *)(lVar10 + 0x314) & 0xfffffffd;
  if (lVar11 != 0) {
    plVar14 = param_5;
    FUN_1802decc0(lVar11,param_1,param_2,param_3,param_5);
  }
  lVar12 = _DAT_180c86890;
  cVar8 = *(char *)(param_1 + 0x9a31);
  if ((*(uint *)(*(longlong *)(lVar19 + 0x1e0) + 0x1588) & 0x4080000) != 0) {
    if (cVar8 == '\0') {
      return 1;
    }
    uVar13 = *(uint64_t *)(param_2 + 0x1d8);
    uVar3 = *(uint *)(lVar10 + 0x314);
    if ((*(uint *)(lVar19 + 0x138) & 0x40000000) != 0) {
      *(uint *)(lVar10 + 0x314) = *(uint *)(param_1 + 0x1c4) & uVar3;
      cVar9 = FUN_1800d6260(cVar8,param_1,lVar10,0,lVar19,uVar13,
                            (ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00);
      if (cVar9 == '\0') {
        FUN_1800df980(extraout_XMM0_Da_03,lVar10,param_1);
        FUN_18024cf70(param_1 + 0x2920,lVar10 + 0x1f8,lVar10 + 0x200,&lStack_b8);
        return 1;
      }
      *(uint *)(lVar10 + 0x314) = uVar3;
      return 1;
    }
    puVar22 = (uint *)(param_1 + 0x1fe0);
    uStack_40 = uVar3 & *(uint *)(param_1 + 0x1bc);
    *(uint *)(lVar10 + 0x314) = uStack_40;
    uStack_3c = CONCAT22(uStack_a0._6_2_,(ushort)*(byte *)(lVar10 + 0xc1));
    uVar4 = *(uint64_t *)(lVar10 + 0x208);
    uStack_a0 = CONCAT44(uStack_3c,uStack_40);
    lVar19 = *(longlong *)
              (*(longlong *)(lVar19 + 0x1e0) + 0x1678 + (longlong)*(int *)(lVar12 + 0x13e0) * 8);
    if ((lVar19 == 0) && (*(int *)(lVar12 + 0x13e0) - 4U < 2)) {
      lVar19 = *(longlong *)(lVar12 + 0x13e8);
    }
    uStack_a8._0_4_ = (int32_t)uVar4;
    uStack_a8._4_4_ = (int32_t)((ulonglong)uVar4 >> 0x20);
    uStack_48 = (int32_t)uStack_a8;
    uStack_44 = uStack_a8._4_4_;
    uStack_a8 = uVar4;
    uVar13 = FUN_1800d6020(uStack_40,param_1,lVar12,uVar13,lVar19,3,&uStack_48);
    *(uint64_t *)(lVar10 + 0x88) = uVar13;
    FUN_1800df980(extraout_XMM0_Da_04,lVar10,param_1);
    uStack_a8 = *(uint64_t *)(lVar10 + 0x1f8);
    uStack_a0 = *(uint64_t *)(lVar10 + 0x200);
    LOCK();
    uVar3 = *puVar22;
    *puVar22 = *puVar22 + 1;
    UNLOCK();
    uVar17 = uVar3 >> 0xb;
    lStack_98 = lVar10;
    FUN_1800e8060(puVar22,(ulonglong)uVar17);
    lVar19 = *(longlong *)(param_1 + 0x1fe8 + (ulonglong)uVar17 * 8);
    uVar20 = (ulonglong)(uVar3 + uVar17 * -0x800);
    puVar16 = (uint64_t *)(lVar19 + uVar20 * 0x18);
    *puVar16 = uStack_a8;
    puVar16[1] = uStack_a0;
    *(longlong *)(lVar19 + 0x10 + uVar20 * 0x18) = lStack_98;
    return 1;
  }
  if ((cVar8 != '\0') && ((*(uint *)(param_2 + 0x100) & 0x8000) != 0)) {
    FUN_18024cf70(param_1 + 0x3138,lVar10 + 0x1f8,lVar10 + 0x200,&lStack_b8,plVar14);
    return 1;
  }
  if (((*(uint *)(lVar19 + 0x138) & 0x40000) == 0) || (*(int *)(_DAT_180c86920 + 0x700) < 1)) {
    bVar25 = false;
  }
  else {
    bVar25 = true;
  }
  bVar2 = *(byte *)(param_1 + 7);
  if (((bVar25) && (cVar9 == '\0')) && ((int)param_5[1] == 0)) {
    lVar12 = FUN_1800dae20();
    lStack_80 = lVar12;
    FUN_1802decc0(lVar12,param_1,param_2,param_3,param_5);
    *(int8_t *)(lVar12 + 0xc0) = 1;
    *(uint *)(lVar12 + 0x2e0) = *(uint *)(lVar12 + 0x2e0) | 0x1000;
    *(int32_t *)(lVar12 + 0x2d8) = *(int32_t *)(lVar19 + 600);
    *(int32_t *)(lVar12 + 0x90) = 0x1060100;
    in_stack_fffffffffffffef0 = *(uint64_t *)(param_2 + 0x1d8);
    uVar3 = *(uint *)(lVar12 + 0x314);
    in_stack_fffffffffffffef8 =
         (int32_t *)((ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00);
    *(uint *)(lVar12 + 0x314) = *(uint *)(param_1 + 0x1c4) & uVar3;
    cVar8 = FUN_1800d6260(in_stack_fffffffffffffef0,param_1,lVar12,0,lVar19,
                          in_stack_fffffffffffffef0,in_stack_fffffffffffffef8);
    if (cVar8 == '\0') {
      FUN_1800df980(extraout_XMM0_Da,lVar12,param_1);
      FUN_18024cf70(param_1 + 0x26d0,lVar12 + 0x1f8,lVar12 + 0x200,&lStack_80);
    }
    else {
      *(uint *)(lVar12 + 0x314) = uVar3;
    }
  }
  lVar12 = _DAT_180c86890;
  if ((*(char *)(param_1 + 0x1c61) == '\0') || ((*(byte *)(lVar19 + 0x138) & 4) != 0)) {
    bVar25 = false;
  }
  else {
    bVar25 = true;
  }
  bVar6 = false;
  bVar5 = false;
  if ((((*(char *)(param_2 + 0xf8) != '\x03') &&
       ((bVar5 = bVar6, *(char *)(lVar19 + 0x13c) == '\x06' || (*(char *)(lVar19 + 0x13c) == '\0')))
       ) && (bVar25)) && (*(longlong *)(param_2 + 0x2c8) == 0)) {
    uStack_c0 = *(uint *)(param_1 + 0x1bc) & *(uint *)(lVar10 + 0x314);
    uVar13 = *(uint64_t *)(param_2 + 0x1d8);
    *(uint *)(lVar10 + 0x314) = uStack_c0;
    uStack_bc = CONCAT22(uStack_bc._2_2_,(ushort)*(byte *)(lVar10 + 0xc1));
    uVar4 = *(uint64_t *)(lVar10 + 0x208);
    iVar24 = *(int *)(lVar12 + 0x13e0);
    lVar21 = (longlong)iVar24;
    lVar15 = *(longlong *)(*(longlong *)(lVar19 + 0x1e0) + 0x1678 + lVar21 * 8);
    if ((lVar15 == 0) && (iVar24 == 4 || iVar24 == 5)) {
      lVar15 = *(longlong *)(lVar12 + 0x13e8);
    }
    uStack_c8._0_4_ = (int32_t)uVar4;
    uStack_c8._4_4_ = (int32_t)((ulonglong)uVar4 >> 0x20);
    in_stack_fffffffffffffef8 = &uStack_68;
    uStack_68 = (int32_t)uStack_c8;
    uStack_64 = uStack_c8._4_4_;
    uStack_5c = uStack_bc;
    in_stack_fffffffffffffef0 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffef0 >> 0x20),3);
    uStack_c8 = uVar4;
    uStack_60 = uStack_c0;
    uVar13 = FUN_1800d6020(lVar21,param_1,lVar21,uVar13,lVar15,in_stack_fffffffffffffef0,
                           in_stack_fffffffffffffef8);
    *(uint64_t *)(lVar10 + 0x88) = uVar13;
    FUN_1800df980(extraout_XMM0_Da_00,lVar10,param_1);
    if (lVar11 != 0) {
      *(int16_t *)(lVar10 + 0x91) = 0x201;
      *(int8_t *)(lVar10 + 0x93) = 1;
    }
    FUN_18024cf70(param_1 + 0x1d90,lVar10 + 0x1f8,lVar10 + 0x200,&lStack_b8);
    lVar12 = _DAT_180c86890;
    bVar5 = true;
    if (lVar11 != 0) {
      uStack_c0 = *(uint *)(lVar11 + 0x314) & 0x40008182;
      uVar13 = *(uint64_t *)(param_2 + 0x1d8);
      *(uint *)(lVar11 + 0x314) = uStack_c0;
      uStack_bc = CONCAT22(uStack_bc._2_2_,(ushort)*(byte *)(lVar11 + 0xc1));
      uVar4 = *(uint64_t *)(lVar11 + 0x208);
      iVar24 = *(int *)(lVar12 + 0x13b0);
      lVar21 = (longlong)iVar24;
      lVar15 = *(longlong *)(*(longlong *)(lVar19 + 0x1e0) + 0x1678 + lVar21 * 8);
      if ((lVar15 == 0) && (iVar24 == 4 || iVar24 == 5)) {
        lVar15 = *(longlong *)(lVar12 + 0x13b8);
      }
      uStack_c8._0_4_ = (int32_t)uVar4;
      uStack_c8._4_4_ = (int32_t)((ulonglong)uVar4 >> 0x20);
      in_stack_fffffffffffffef8 = &uStack_58;
      uStack_58 = (int32_t)uStack_c8;
      uStack_54 = uStack_c8._4_4_;
      uStack_4c = uStack_bc;
      in_stack_fffffffffffffef0 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffef0 >> 0x20),1);
      uStack_c8 = uVar4;
      uStack_50 = uStack_c0;
      uVar13 = FUN_1800d6020(lVar21,param_1,lVar21,uVar13,lVar15,in_stack_fffffffffffffef0,
                             in_stack_fffffffffffffef8);
      *(uint64_t *)(lVar11 + 0x88) = uVar13;
      FUN_1800df980(extraout_XMM0_Da_01,lVar11,param_1);
      FUN_18024cf70(param_1 + 0x1c68,lVar11 + 0x1f8,lVar11 + 0x200,&lStack_88);
      bVar5 = true;
    }
  }
  if (*(char *)(param_1 + 0x1c61) != '\0') {
    FUN_18024af60(param_1,param_1,param_2,param_3,param_5);
    cVar7 = func_0x00018022cda0(lVar19);
  }
  uVar28 = (int32_t)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  if ((((cVar9 == '\0') && ((*(uint *)(lVar19 + 0x138) & 0x80000) != 0)) &&
      (*(char *)(lVar19 + 0x13c) != '\x06')) && (*(char *)(lVar19 + 0x13c) != '\0')) {
    lVar12 = FUN_1800dae20();
    alStack_78[0] = lVar12;
    FUN_1802decc0(lVar12,param_1,param_2,param_3,param_5);
    lVar11 = _DAT_180c86870;
    in_stack_fffffffffffffef8 =
         (int32_t *)((ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00);
    in_stack_fffffffffffffef0 = CONCAT44(uVar28,2);
    *(byte *)(lVar12 + 0xc0) = ~*(byte *)(_DAT_180c86870 + 0x224) & 1 | 10;
    *(uint *)(lVar12 + 0x314) = *(uint *)(lVar12 + 0x314) & 0xfeffffff;
    cVar7 = FUN_1800d66b0(lVar11,param_1,lVar12,lVar19,*(uint64_t *)(param_2 + 0x1d8),
                          in_stack_fffffffffffffef0,in_stack_fffffffffffffef8);
    if (cVar7 != '\0') {
      FUN_18024cf70(param_1 + 0x2358,lVar12 + 0x1f8,lVar12 + 0x200,alStack_78);
    }
    cVar7 = '\x01';
  }
  if (((bVar2 & 1) == 0) && ((cVar7 != '\0' || (*(char *)(param_2 + 0xf8) == '\x03'))))
  goto LAB_18024ab81;
  alStack_d8[0] = lVar10;
  if (bVar5) {
    lVar10 = FUN_1800dae20();
    alStack_d8[0] = lVar10;
    FUN_1802decc0(lVar10,param_1,param_2,param_3,param_5);
    *(int32_t *)(lVar10 + 0x90) = 0x1020100;
  }
  if ((*(char *)(lVar19 + 0x13c) != '\x06') && (*(char *)(lVar19 + 0x13c) != '\0')) {
    *(uint *)(lVar10 + 0x314) = *(uint *)(lVar10 + 0x314) & 0xffffffcf;
  }
  in_stack_fffffffffffffef0 = *(uint64_t *)(param_2 + 0x1d8);
  uVar3 = *(uint *)(lVar10 + 0x314);
  in_stack_fffffffffffffef8 =
       (int32_t *)((ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00);
  *(uint *)(lVar10 + 0x314) = *(uint *)(param_1 + 0x1c4) & uVar3;
  cVar7 = FUN_1800d6260(in_stack_fffffffffffffef0,param_1,lVar10,0,lVar19,in_stack_fffffffffffffef0,
                        in_stack_fffffffffffffef8);
  if (cVar7 != '\0') {
    *(uint *)(lVar10 + 0x314) = uVar3;
    goto LAB_18024ab81;
  }
  FUN_1800df980(extraout_XMM0_Da_02,lVar10,param_1);
  if (*(longlong *)(param_2 + 0x2c8) != 0) {
    FUN_18024cf70(param_1 + 0x2a48,lVar10 + 0x1f8,lVar10 + 0x200,alStack_d8);
    goto LAB_18024ab81;
  }
  uVar3 = *(uint *)(*(longlong *)(lVar19 + 0x1e0) + 0x1588);
  if (((uVar3 >> 0x1c & 1) == 0) &&
     ((*(ulonglong *)(lVar19 + 0x140) & *(ulonglong *)(lVar19 + 0x3a8)) == 0)) {
    if (-1 < (char)uVar3) {
      if ((*(uint *)(lVar19 + 0x138) & 0x20000000) != 0) {
        FUN_18024cf70(param_1 + 0x25a8,lVar10 + 0x1f8,lVar10 + 0x200,alStack_d8);
        goto LAB_18024ab81;
      }
      if ((*(char *)(lVar19 + 0x13c) == '\x06') || (*(char *)(lVar19 + 0x13c) == '\0')) {
        lVar19 = param_1 + 0x1eb8;
        goto LAB_18024ab08;
      }
    }
    lVar19 = param_1 + 0x2230;
  }
  else {
    if (cVar9 != '\0') goto LAB_18024ab81;
    lVar19 = param_1 + 0x26d0;
  }
LAB_18024ab08:
  FUN_18024cf70(lVar19,lVar10 + 0x1f8,lVar10 + 0x200,alStack_d8);
LAB_18024ab81:
  if (((((*(byte *)(param_1 + 0x1bd8) & 1) != 0) && (*(char *)(param_2 + 0xf8) != '\0')) &&
      ((*(char *)(param_2 + 0xf8) != '\x02' ||
       ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x1b8) + 0x1e0) + 0x1588) & 8) == 0)))) &&
     ((lVar19 = *(longlong *)(*(longlong *)(param_2 + 0x1b8) + 0x1e0),
      *(longlong *)(lVar19 + 0x1690) != 0 && ((*(byte *)(lVar19 + 0x1588) & 0x80) == 0)))) {
    uStack_b0 = _DAT_180c86890 + 0x6b28;
    puVar23 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x7438) * 0x488 + uStack_b0);
    LOCK();
    uVar3 = *puVar23;
    *puVar23 = *puVar23 + 1;
    UNLOCK();
    uVar20 = (ulonglong)(uVar3 >> 9);
    lVar19 = 1;
    pcVar18 = (char *)((longlong)puVar23 + uVar20 + 0x408);
    puVar22 = puVar23 + (ulonglong)(uVar3 >> 9) * 2 + 2;
    uStack_c8 = uVar20;
    do {
      iVar24 = (int)uVar20;
      if (*(longlong *)puVar22 == 0) {
        lVar10 = FUN_18062b420(_DAT_180c8ed18,0x68000,0x25);
        LOCK();
        bVar25 = *(longlong *)(puVar23 + (longlong)iVar24 * 2 + 2) == 0;
        if (bVar25) {
          *(longlong *)(puVar23 + (longlong)iVar24 * 2 + 2) = lVar10;
        }
        UNLOCK();
        if (bVar25) {
          FUN_1800e92d0(puVar23,iVar24 << 9);
          LOCK();
          *(int8_t *)((longlong)puVar23 + (longlong)iVar24 + 0x408) = 0;
          UNLOCK();
        }
        else {
          if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          do {
          } while (*pcVar18 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar18 != '\0');
      }
      uVar28 = (int32_t)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
      uVar20 = (ulonglong)(iVar24 + 1);
      puVar22 = puVar22 + 2;
      pcVar18 = pcVar18 + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = *(longlong *)
              ((longlong)*(int *)(uStack_b0 + 0x910) * 0x488 + uStack_b0 + 8 + uStack_c8 * 8) +
             (ulonglong)(uVar3 - (uVar3 & 0xfffffe00)) * 0x340;
    uVar27 = FUN_1802decc0(lVar19,param_1,param_2,param_3,param_5);
    *(uint *)(lVar19 + 0x2e0) = *(uint *)(lVar19 + 0x2e0) | 0x200;
    *(int8_t *)(lVar19 + 0x330) = *(int8_t *)(param_2 + 0xf8);
    cVar9 = FUN_1800d66b0(uVar27,param_1,lVar19,uStack_a8,*(uint64_t *)(param_2 + 0x1d8),
                          CONCAT44(uVar28,3),
                          (ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00);
    if (cVar9 != '\0') {
      LOCK();
      puVar22 = (uint *)(param_1 + 0x2480);
      uVar3 = *puVar22;
      *puVar22 = *puVar22 + 1;
      UNLOCK();
      uVar17 = uVar3 >> 0xb;
      FUN_1800e8060(param_1 + 0x2480,(ulonglong)uVar17);
      puVar16 = (uint64_t *)
                (*(longlong *)(param_1 + 0x2488 + (ulonglong)uVar17 * 8) +
                (ulonglong)(uVar3 + uVar17 * -0x800) * 0x18);
      uVar13 = *(uint64_t *)(lVar19 + 0x200);
      *puVar16 = *(uint64_t *)(lVar19 + 0x1f8);
      puVar16[1] = uVar13;
      puVar16[2] = lVar19;
    }
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00018024b17e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024af60(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4,
void FUN_18024af60(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5)

{
  uint *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int8_t uVar7;
  longlong lVar8;
  uint64_t uVar9;
  longlong lVar10;
  uint uVar11;
  int32_t extraout_XMM0_Da;
  uint64_t uStack_18;
  uint uStack_10;
  ushort uStack_c;
  int16_t uStack_a;
  
  if (*(char *)(_DAT_180c86890 + 0x1505) != '\0') {
    lVar8 = FUN_1800dae20();
    FUN_1802decc0(lVar8,param_2,param_3,param_4,param_5);
    *(uint *)(lVar8 + 0x2e0) = *(uint *)(lVar8 + 0x2e0) | 0x40000;
    lVar10 = _DAT_180c8a9c8;
    *(int16_t *)(lVar8 + 0x9a) = 1;
    *(int16_t *)(lVar8 + 0x90) = 0;
    if (((((*(byte *)(param_1 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_1 + 0x1bd9) & 2) == 0))
        || (*(int *)(lVar10 + 0xa10) == 0)) || (*(char *)(param_1 + 0x130) == '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    *(int16_t *)(lVar8 + 0x93) = 0x700;
    *(int8_t *)(lVar8 + 0x9d) = 0;
    uVar7 = 6;
    if (!bVar6) {
      uVar7 = 3;
    }
    *(int8_t *)(lVar8 + 0x92) = uVar7;
    uVar9 = *(uint64_t *)(param_3 + 0x1d8);
    lVar5 = *(longlong *)(param_3 + 0x1b8);
    uStack_10 = *(uint *)(param_2 + 0x1c0) & *(uint *)(lVar8 + 0x314);
    *(uint *)(lVar8 + 0x314) = uStack_10;
    if (((*(int *)(lVar10 + 0x5b0) == 0) && (*(char *)(param_2 + 0x20) == '\0')) &&
       ((*(char *)(param_2 + 0x21) == '\0' &&
        (((*(uint *)(param_2 + 4) & 0x1000000) == 0 && ((*(uint *)(lVar8 + 0x2e0) & 0x800) != 0)))))
       ) {
      uStack_10 = uStack_10 | 0x40000000;
      *(uint *)(lVar8 + 0x314) = uStack_10;
    }
    _uStack_c = CONCAT22(uStack_a,(ushort)*(byte *)(lVar8 + 0xc1));
    uStack_18 = *(uint64_t *)(lVar8 + 0x208);
    iVar4 = *(int *)(_DAT_180c86890 + 0x13f8);
    lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x1e0) + 0x1678 + (longlong)iVar4 * 8);
    if ((lVar10 == 0) && (iVar4 - 4U < 2)) {
      lVar10 = *(longlong *)(_DAT_180c86890 + 0x1400);
    }
    uVar9 = FUN_1800d6020((int32_t)uStack_18,param_2,(longlong)iVar4,uVar9,lVar10,5,&uStack_18);
    *(uint64_t *)(lVar8 + 0x88) = uVar9;
    FUN_1800df980(extraout_XMM0_Da,lVar8,param_2);
    LOCK();
    puVar1 = (uint *)(param_1 + 0x2b70);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    uVar11 = uVar3 >> 0xb;
    FUN_1800e8060(param_1 + 0x2b70,(ulonglong)uVar11);
    uVar9 = *(uint64_t *)(lVar8 + 0x1f8);
    puVar2 = (uint64_t *)
             (*(longlong *)(param_1 + 0x2b78 + (ulonglong)uVar11 * 8) +
             (ulonglong)(uVar3 + uVar11 * -0x800) * 0x18);
    puVar2[1] = *(uint64_t *)(lVar8 + 0x200);
    *puVar2 = uVar9;
    puVar2[2] = lVar8;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018024b17e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024af95(void)
void FUN_18024af95(void)

{
  uint *puVar1;
  uint64_t *puVar2;
  bool bVar3;
  longlong lVar4;
  int8_t uVar5;
  longlong lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  longlong unaff_RSI;
  longlong in_R11;
  int32_t extraout_XMM0_Da;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBP;
  lVar6 = FUN_1800dae20();
  FUN_1802decc0();
  *(uint *)(lVar6 + 0x2e0) = *(uint *)(lVar6 + 0x2e0) | 0x40000;
  lVar4 = _DAT_180c8a9c8;
  *(int16_t *)(lVar6 + 0x9a) = 1;
  *(int16_t *)(lVar6 + 0x90) = 0;
  if (((((*(byte *)(unaff_RSI + 0x1bd8) & 0x20) == 0) && ((*(byte *)(unaff_RSI + 0x1bd9) & 2) == 0))
      || (*(int *)(lVar4 + 0xa10) == 0)) || (*(char *)(unaff_RSI + 0x130) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  *(int16_t *)(lVar6 + 0x93) = 0x700;
  *(int8_t *)(lVar6 + 0x9d) = 0;
  uVar5 = 6;
  if (!bVar3) {
    uVar5 = 3;
  }
  *(int8_t *)(lVar6 + 0x92) = uVar5;
  uVar8 = *(uint *)(unaff_RBX + 0x1c0) & *(uint *)(lVar6 + 0x314);
  *(uint *)(lVar6 + 0x314) = uVar8;
  if (((*(int *)(lVar4 + 0x5b0) == 0) && (*(char *)(unaff_RBX + 0x20) == '\0')) &&
     ((*(char *)(unaff_RBX + 0x21) == '\0' &&
      (((*(uint *)(unaff_RBX + 4) & 0x1000000) == 0 && ((*(uint *)(lVar6 + 0x2e0) & 0x800) != 0)))))
     ) {
    *(uint *)(lVar6 + 0x314) = uVar8 | 0x40000000;
  }
  uVar7 = FUN_1800d6020();
  *(uint64_t *)(lVar6 + 0x88) = uVar7;
  FUN_1800df980(extraout_XMM0_Da,lVar6);
  LOCK();
  puVar1 = (uint *)(unaff_RSI + 0x2b70);
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar9 = uVar8 >> 0xb;
  FUN_1800e8060(unaff_RSI + 0x2b70,(ulonglong)uVar9);
  uVar7 = *(uint64_t *)(lVar6 + 0x1f8);
  puVar2 = (uint64_t *)
           (*(longlong *)(unaff_RSI + 0x2b78 + (ulonglong)uVar9 * 8) +
           (ulonglong)(uVar8 + uVar9 * -0x800) * 0x18);
  puVar2[1] = *(uint64_t *)(lVar6 + 0x200);
  *puVar2 = uVar7;
  puVar2[2] = lVar6;
  return;
}






// 函数: void FUN_18024b18c(void)
void FUN_18024b18c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





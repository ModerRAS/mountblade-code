#include "TaleWorlds.Native.Split.h"

// 99_part_08_part060.c - 18 个函数

// 函数: void FUN_1805b30b6(longlong *param_1)
void FUN_1805b30b6(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  lVar1 = *param_1;
  FUN_1805b3190();
  if (lVar1 != 0) {
    iVar3 = 0;
    iVar2 = iVar3;
    if (0 < unaff_EBP) {
      do {
        for (; iVar3 < unaff_EBP; iVar3 = iVar3 + 1) {
          FUN_1805b31e0();
        }
        iVar3 = iVar2 + 1;
        iVar2 = iVar3;
      } while (iVar3 < unaff_EBP);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  return;
}






// 函数: void FUN_1805b30cc(void)
void FUN_1805b30cc(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  longlong unaff_R12;
  
  iVar2 = 0;
  iVar1 = iVar2;
  if (0 < unaff_EBP) {
    do {
      for (; iVar2 < unaff_EBP; iVar2 = iVar2 + 1) {
        FUN_1805b31e0();
      }
      iVar2 = iVar1 + 1;
      iVar1 = iVar2;
    } while (iVar2 < unaff_EBP);
  }
  if (unaff_R12 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1805b30db(void)
void FUN_1805b30db(void)

{
  int unaff_EBX;
  int iVar1;
  int unaff_EBP;
  longlong unaff_R12;
  
  iVar1 = unaff_EBX;
  do {
    for (; unaff_EBX < unaff_EBP; unaff_EBX = unaff_EBX + 1) {
      FUN_1805b31e0();
    }
    unaff_EBX = iVar1 + 1;
    iVar1 = unaff_EBX;
  } while (unaff_EBX < unaff_EBP);
  if (unaff_R12 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1805b316a(void)
void FUN_1805b316a(void)

{
  longlong unaff_R12;
  
  if (unaff_R12 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1805b3174(void)
void FUN_1805b3174(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1805b3181(void)
void FUN_1805b3181(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b3190(uint64_t *param_1,int param_2)
void FUN_1805b3190(uint64_t *param_1,int param_2)

{
  uint64_t uVar1;
  int iVar2;
  
  *(int *)(param_1 + 1) = param_2;
  iVar2 = param_2 * param_2 >> 3;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,3);
  }
  *param_1 = uVar1;
                    // WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memset(uVar1,0,(longlong)iVar2);
  return;
}






// 函数: void FUN_1805b31e0(longlong *param_1,uint param_2,uint param_3,char param_4)
void FUN_1805b31e0(longlong *param_1,uint param_2,uint param_3,char param_4)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((longlong)(int)(((int)param_1[1] >> 3) * param_2 + ((int)param_3 >> 3)) +
                   *param_1);
  if (param_4 == '\0') {
    *pbVar1 = (&unknown_var_5168_ptr)[param_3 & 7] & *pbVar1;
    pbVar1 = (byte *)((longlong)(int)(((int)param_1[1] >> 3) * param_3 + ((int)param_2 >> 3)) +
                     *param_1);
    *pbVar1 = *pbVar1 & (&unknown_var_5168_ptr)[param_2 & 7];
  }
  else {
    *pbVar1 = (&unknown_var_8808_ptr)[param_3 & 7] | *pbVar1;
    pbVar1 = (byte *)((longlong)(int)(((int)param_1[1] >> 3) * param_3 + ((int)param_2 >> 3)) +
                     *param_1);
    *pbVar1 = *pbVar1 | (&unknown_var_8808_ptr)[param_2 & 7];
  }
  return;
}



// WARNING: Possible PIC construction at 0x0001805b3366: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0001805b336b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b32b0(longlong param_1,uint param_2)
void FUN_1805b32b0(longlong param_1,uint param_2)

{
  uint64_t *puVar1;
  
  if ((ulonglong)(longlong)(int)param_2 <
      (ulonglong)((*(longlong *)(param_1 + 0x760) - *(longlong *)(param_1 + 0x758)) / 0xd08)) {
    puVar1 = (uint64_t *)((longlong)(int)param_2 * 0xd08 + *(longlong *)(param_1 + 0x758));
    puVar1[0x1a0] = _DAT_180c966e8;
    param_2 = param_2 & 0x8000000f;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xfffffff0) + 1;
    }
    switch(param_2) {
    case 0:
    case 9:
      puVar1[2] = 0xffffffffffffffff;
      *(int32_t *)(puVar1 + 3) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(int32_t *)(puVar1 + 7) = 0;
      *(int32_t *)((longlong)puVar1 + 0x3c) = 0x3f800000;
      *(int32_t *)(puVar1 + 8) = 0xbe4ccccd;
      *(int32_t *)((longlong)puVar1 + 0x44) = 0xbe4ccccd;
      puVar1[9] = 0x3ecccccd;
      *(int16_t *)(puVar1 + 10) = 0x100;
      *(int8_t *)(puVar1 + 0xb) = 1;
      *(uint64_t *)((longlong)puVar1 + 0x5c) = 0xffffffffffffffff;
      puVar1[0x11] = 0xffffffffffffffff;
      *(int8_t *)(puVar1 + 0x12) = 0xff;
      *(uint64_t *)((longlong)puVar1 + 0x94) = 0;
      *(int32_t *)((longlong)puVar1 + 0x84) = 0xffffffff;
      *(uint64_t *)((longlong)puVar1 + 100) = 0;
      *(uint64_t *)((longlong)puVar1 + 0x6c) = 0;
      *(uint64_t *)((longlong)puVar1 + 0x74) = 0;
      *(uint64_t *)((longlong)puVar1 + 0x7c) = 0;
      *(int32_t *)((longlong)puVar1 + 0x9c) = 0x3f800000;
      return;
    case 1:
      puVar1[0x26] = 0xffffffffffffffff;
      *(int16_t *)(puVar1 + 0x2b) = 0xff;
      puVar1[0x27] = 0;
      puVar1[0x28] = 0;
      puVar1[0x29] = 0;
      puVar1[0x2a] = 0;
      *(int32_t *)((longlong)puVar1 + 0x15c) = 0;
      return;
    case 2:
      *puVar1 = 0;
      puVar1[1] = 0x7f7fffff00000000;
      return;
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      *(int32_t *)puVar1 = 0;
      return;
    case 6:
      *(int32_t *)puVar1 = 1;
      return;
    case 0xf:
      *(int32_t *)puVar1 = 0xffffffff;
    }
  }
  return;
}






// 函数: void FUN_1805b3410(void)
void FUN_1805b3410(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b38c0(int *param_1,int param_2,longlong param_3,longlong param_4,uint64_t param_5,
void FUN_1805b38c0(int *param_1,int param_2,longlong param_3,longlong param_4,uint64_t param_5,
                  longlong *param_6,uint64_t param_7,uint64_t param_8,int param_9)

{
  int iVar1;
  uint64_t uVar2;
  double dVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lStackX_8;
  
  lVar4 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStackX_8);
    lVar4 = lStackX_8;
  }
  lVar11 = (longlong)param_1[0x17e80];
  lVar12 = 0xffffffff;
  dVar3 = (double)(lVar4 - _DAT_180c8ed48) * _DAT_180c8ed50;
  if (0 < lVar11) {
    do {
      if (param_2 <= param_1[2]) {
        iVar1 = *param_1;
        lVar9 = (longlong)iVar1;
        iVar10 = iVar1 - (int)lVar12;
        lVar4 = 0;
        do {
          if (iVar10 < *(int *)(&unknown_var_6480_ptr + lVar4 * 4)) {
            iVar6 = *(int *)(&unknown_var_6496_ptr + lVar4 * 4);
            goto LAB_1805b3980;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < 4);
        iVar6 = 0x19;
LAB_1805b3980:
        if (param_1[1] + *(int *)(param_3 + 0x5c8) + iVar6 < param_9) {
          param_1[2] = -1;
          uVar2 = *(uint64_t *)(param_3 + 0x5a0);
          pdVar7 = (double *)(lVar9 * 0x20 + *param_6);
          *pdVar7 = dVar3;
          *(uint64_t *)((longlong)pdVar7 + 0xc) = uVar2;
          *(int8_t *)(pdVar7 + 1) = 1;
          func_0x0001805b3aa0(param_6);
          FUN_1806193b0(param_3,iVar10);
          *(short *)(param_4 + 0x18 + (longlong)*(int *)(param_4 + 0x14) * 2) = (short)iVar1;
          *(int *)(param_4 + 0x14) = *(int *)(param_4 + 0x14) + 1;
          uVar8 = iVar1 >> 0x1f & 0xf;
          lVar12 = lVar9;
          if ((iVar1 + uVar8 & 0xf) - uVar8 == 2) {
            FUN_1805f7890(param_8);
          }
          else {
            FUN_180646200(param_3);
          }
        }
      }
      param_1 = param_1 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  piVar5 = (int *)&unknown_var_6480_ptr;
  do {
    if (0 < *piVar5) break;
    piVar5 = piVar5 + 1;
  } while ((longlong)piVar5 < 0x1809fb110);
  FUN_180645c10(param_3,0,&stack0xffffffffffffffe8);
  return;
}






// 函数: void FUN_1805b3928(void)
void FUN_1805b3928(void)

{
  uint64_t uVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  uint64_t *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong unaff_RBP;
  int *unaff_RSI;
  byte bVar8;
  int iVar9;
  int unaff_R12D;
  longlong unaff_R14;
  longlong unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int iStack0000000000000054;
  longlong in_stack_00000088;
  longlong *in_stack_00000098;
  uint64_t in_stack_000000a8;
  int in_stack_000000b0;
  
  do {
    if (unaff_R12D <= unaff_RSI[2]) {
      iVar9 = *unaff_RSI;
      lVar7 = (longlong)iVar9;
      lVar2 = 0;
      do {
        if (iVar9 - (int)unaff_R15 < *(int *)(&unknown_var_6480_ptr + lVar2 * 4)) {
          iVar4 = *(int *)(&unknown_var_6496_ptr + lVar2 * 4);
          goto LAB_1805b3980;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < 4);
      iVar4 = 0x19;
LAB_1805b3980:
      if (unaff_RSI[1] + *(int *)(unaff_RBP + 0x5c8) + iVar4 < in_stack_000000b0) {
        unaff_RSI[2] = -1;
        uVar1 = *(uint64_t *)(unaff_RBP + 0x5a0);
        puVar5 = (uint64_t *)(lVar7 * 0x20 + *in_stack_00000098);
        *puVar5 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
        *(uint64_t *)((longlong)puVar5 + 0xc) = uVar1;
        *(int8_t *)(puVar5 + 1) = 1;
        func_0x0001805b3aa0(in_stack_00000098);
        FUN_1806193b0();
        *(short *)(in_stack_00000088 + 0x18 + (longlong)*(int *)(in_stack_00000088 + 0x14) * 2) =
             (short)iVar9;
        *(int *)(in_stack_00000088 + 0x14) = *(int *)(in_stack_00000088 + 0x14) + 1;
        uVar6 = iVar9 >> 0x1f & 0xf;
        unaff_R15 = lVar7;
        if ((iVar9 + uVar6 & 0xf) - uVar6 == 2) {
          FUN_1805f7890(in_stack_000000a8);
        }
        else {
          FUN_180646200();
        }
      }
    }
    unaff_RSI = unaff_RSI + 3;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  piVar3 = (int *)&unknown_var_6480_ptr;
  iVar9 = 0;
  do {
    if (0 < *piVar3) {
      bVar8 = (byte)*(int32_t *)(&unknown_var_6496_ptr + (longlong)iVar9 * 4);
      goto LAB_1806193ee;
    }
    iVar9 = iVar9 + 1;
    piVar3 = piVar3 + 1;
  } while ((longlong)piVar3 < 0x1809fb110);
  bVar8 = 0x19;
LAB_1806193ee:
  iStack0000000000000054 = (1 << (bVar8 & 0x1f)) + -1;
  FUN_180645c10();
  return;
}






// 函数: void FUN_1805b3a7f(void)
void FUN_1805b3a7f(void)

{
  int *piVar1;
  int iVar2;
  uint64_t uStack0000000000000028;
  int32_t uStack0000000000000050;
  int iStack0000000000000054;
  int32_t uStack0000000000000058;
  
  piVar1 = (int *)&unknown_var_6480_ptr;
  iVar2 = 0;
  do {
    if (0 < *piVar1) {
      uStack0000000000000058 = *(int32_t *)(&unknown_var_6496_ptr + (longlong)iVar2 * 4);
      goto LAB_1806193ee;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((longlong)piVar1 < 0x1809fb110);
  uStack0000000000000058 = 0x19;
LAB_1806193ee:
  uStack0000000000000050 = 0;
  iStack0000000000000054 = (1 << ((byte)uStack0000000000000058 & 0x1f)) + -1;
  uStack0000000000000028 = 0x18061943e;
  FUN_180645c10();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b3b20(int32_t *param_1,longlong *param_2,int32_t param_3,uint64_t param_4)
void FUN_1805b3b20(int32_t *param_1,longlong *param_2,int32_t param_3,uint64_t param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar5;
  ulonglong uVar6;
  uint uStackX_8;
  int32_t uStackX_c;
  ulonglong uVar4;
  
  *(int8_t *)(param_1 + 0xc) = 0;
  *(longlong **)(param_1 + 0x163e) = param_2;
  if (*(char *)((longlong)param_1 + 0x31) == '\0') {
    uVar4 = 0;
    param_1[6] = 0;
    *(int16_t *)(param_1 + 5) = 0;
    *param_1 = param_3;
    _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
    _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
    _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
    param_1[0xe] = (_DAT_180bf65b8 - 1) % 4000 + 1;
    *(uint64_t *)(param_1 + 0xf) = _DAT_180c966e0;
    lVar1 = _DAT_180c8ed58;
    if (_DAT_180c8ed58 == 0) {
      QueryPerformanceCounter(&uStackX_8);
      lVar1 = CONCAT44(uStackX_c,uStackX_8);
    }
    plVar5 = (longlong *)(param_1 + 0x20);
    lVar3 = 0x960;
    *(double *)(param_1 + 8) = (double)(lVar1 - _DAT_180c8ed48) * _DAT_180c8ed50;
    *(uint64_t *)(param_1 + 0x164a) = 0;
    *(uint64_t *)(param_1 + 0x1640) = 0;
    *(uint64_t *)(param_1 + 0x1642) = 0;
    *(uint64_t *)(param_1 + 0x1648) = 0;
    param_1[0x164c] = 0;
    *(uint64_t *)(param_1 + 0x164d) = 0xffffffffffffffff;
    *(uint64_t *)(param_1 + 10) = 0;
    do {
      if (*plVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar5 = plVar5 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x14);
    uVar6 = uVar4;
    if (*(longlong *)(param_1 + 0x16) - lVar1 >> 3 != 0) {
      do {
        if (*(longlong *)(uVar6 + lVar1) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
        uVar6 = uVar6 + 8;
      } while ((ulonglong)(longlong)(int)uVar2 <
               (ulonglong)(*(longlong *)(param_1 + 0x16) - lVar1 >> 3));
    }
    *(longlong *)(param_1 + 0x16) = lVar1;
    *(uint64_t *)(param_1 + 0x12e0) = 0;
    *(uint64_t *)(param_1 + 0x12e2) = 0;
    *(uint64_t *)(param_1 + 0x12e4) = 0;
    *(uint64_t *)(param_1 + 0x12e6) = 0x3fb999999999999a;
    if (*(longlong *)(param_1 + 0x1c) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = FUN_1805fab40();
    uStackX_8 = param_1[0x12e0];
    *(longlong *)(param_1 + 0x1c) = lVar1;
    uStackX_c = 0;
    *(ulonglong *)(lVar1 + 0x5a0) = (ulonglong)uStackX_8;
    param_1[0x1e] = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x1c) + 0x5c0) = 0;
    *(uint64_t *)(param_1 + 0x163a) = 0;
    *(uint64_t *)(param_1 + 0x1638) = 0;
    param_1[0x163d] = 1;
    param_1[0x163c] = 10;
    FUN_1805b62d0(param_1 + 0x1602);
    FUN_1805b62d0(param_1 + 0x1612);
    param_1[0xd] = 0;
    *(uint64_t *)(param_1 + 0x1652) = *(uint64_t *)(param_1 + 0x1650);
    *(uint64_t *)(param_1 + 0x165a) = *(uint64_t *)(param_1 + 0x1658);
    param_1[0x1660] = 0xffffffff;
    *param_2 = (longlong)param_1;
    *(int8_t *)((longlong)param_1 + 0x31) = *(int8_t *)((longlong)param_2 + 0x24);
    *(uint64_t *)(param_1 + 0x1622) = param_4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b3b47(int32_t *param_1,uint64_t param_2,int32_t param_3)
void FUN_1805b3b47(int32_t *param_1,uint64_t param_2,int32_t param_3)

{
  longlong lVar1;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  uint uVar2;
  longlong lVar3;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *unaff_R14;
  uint uStack0000000000000040;
  int32_t uStack0000000000000044;
  ulonglong uVar4;
  
  uVar4 = 0;
  param_1[6] = 0;
  *(int16_t *)(param_1 + 5) = 0;
  *param_1 = param_3;
  _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
  *(uint *)(unaff_RBX + 0x38) = (_DAT_180bf65b8 - 1) % 4000 + 1;
  *(uint64_t *)(unaff_RBX + 0x3c) = _DAT_180c966e0;
  lVar1 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&stack0x00000040);
    lVar1 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
  }
  plVar5 = (longlong *)(unaff_RBX + 0x80);
  lVar3 = 0x960;
  *(double *)(unaff_RBX + 0x20) = (double)(lVar1 - _DAT_180c8ed48) * _DAT_180c8ed50;
  *(uint64_t *)(unaff_RBX + 0x5928) = 0;
  *(uint64_t *)(unaff_RBX + 0x5900) = 0;
  *(uint64_t *)(unaff_RBX + 0x5908) = 0;
  *(uint64_t *)(unaff_RBX + 0x5920) = 0;
  *(int32_t *)(unaff_RBX + 0x5930) = 0;
  *(uint64_t *)(unaff_RBX + 0x5934) = 0xffffffffffffffff;
  *(uint64_t *)(unaff_RBX + 0x28) = 0;
  do {
    if (*plVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar5 = plVar5 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar1 = *(longlong *)(unaff_RBX + 0x50);
  uVar6 = uVar4;
  if (*(longlong *)(unaff_RBX + 0x58) - lVar1 >> 3 != 0) {
    do {
      if (*(longlong *)(uVar6 + lVar1) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x58) - lVar1 >> 3));
  }
  *(longlong *)(unaff_RBX + 0x58) = lVar1;
  *(uint64_t *)(unaff_RBX + 0x4b80) = 0;
  *(uint64_t *)(unaff_RBX + 0x4b88) = 0;
  *(uint64_t *)(unaff_RBX + 0x4b90) = 0;
  *(uint64_t *)(unaff_RBX + 0x4b98) = 0x3fb999999999999a;
  if (*(longlong *)(unaff_RBX + 0x70) == 0) {
    lVar1 = FUN_1805fab40();
    uStack0000000000000040 = *(uint *)(unaff_RBX + 0x4b80);
    *(longlong *)(unaff_RBX + 0x70) = lVar1;
    uStack0000000000000044 = 0;
    *(ulonglong *)(lVar1 + 0x5a0) = (ulonglong)uStack0000000000000040;
    *(int32_t *)(unaff_RBX + 0x78) = 0;
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x70) + 0x5c0) = 0;
    *(uint64_t *)(unaff_RBX + 0x58e8) = 0;
    *(uint64_t *)(unaff_RBX + 0x58e0) = 0;
    *(int32_t *)(unaff_RBX + 0x58f4) = 1;
    *(int32_t *)(unaff_RBX + 0x58f0) = 10;
    FUN_1805b62d0(unaff_RBX + 0x5808);
    FUN_1805b62d0(unaff_RBX + 0x5848);
    *(int32_t *)(unaff_RBX + 0x34) = 0;
    *(uint64_t *)(unaff_RBX + 0x5948) = *(uint64_t *)(unaff_RBX + 0x5940);
    *(uint64_t *)(unaff_RBX + 0x5968) = *(uint64_t *)(unaff_RBX + 0x5960);
    *(int32_t *)(unaff_RBX + 0x5980) = 0xffffffff;
    *unaff_R14 = unaff_RBX;
    *(int8_t *)(unaff_RBX + 0x31) = *(int8_t *)((longlong)unaff_R14 + 0x24);
    *(uint64_t *)(unaff_RBX + 0x5888) = unaff_RBP;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1805b3d91(void)
void FUN_1805b3d91(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b3da0(longlong param_1)
void FUN_1805b3da0(longlong param_1)

{
  double dVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint64_t *puStackX_8;
  longlong lStackX_10;
  ulonglong uVar12;
  
  lVar6 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStackX_10);
    lVar6 = lStackX_10;
  }
  lVar9 = *(longlong *)(param_1 + 0x5828);
  uVar7 = 0;
  dVar1 = *(double *)(param_1 + 0x58b8);
  dVar5 = (double)(lVar6 - _DAT_180c8ed48) * _DAT_180c8ed50;
  uVar12 = uVar7;
  if ((int)(*(longlong *)(param_1 + 0x5830) - lVar9 >> 3) != 0) {
    do {
      iVar14 = (int)uVar12;
      piVar3 = *(int **)(lVar9 + uVar12 * 8);
      if (dVar1 + *(double *)(piVar3 + 2) < dVar5) {
        iVar2 = *piVar3;
        if ((iVar2 != _DAT_180bf6678) || (piVar3[1] != _DAT_180bf667c)) {
          piVar10 = *(int **)(param_1 + 0x5890);
          uVar13 = *(longlong *)(param_1 + 0x5898) - (longlong)piVar10 >> 5;
          uVar12 = uVar7;
          if (uVar13 == 0) goto LAB_1805b3eb4;
          goto LAB_1805b3e92;
        }
        lVar9 = *(longlong *)(param_1 + 0x5828) + uVar12 * 8;
        puStackX_8 = *(uint64_t **)(*(longlong *)(param_1 + 0x5828) + uVar12 * 8);
        lVar6 = lVar9 + 8;
        if (lVar9 != lVar6) {
          lVar4 = *(longlong *)(param_1 + 0x5830);
          if (lVar6 != lVar4) {
                    // WARNING: Subroutine does not return
            memmove(lVar9,lVar6,lVar4 - lVar6);
          }
          *(longlong *)(param_1 + 0x5830) = lVar4 + -8;
        }
        FUN_18005ea90(param_1 + 0x5808,&puStackX_8);
        iVar14 = iVar14 + -1;
      }
      lVar9 = *(longlong *)(param_1 + 0x5828);
      uVar12 = (ulonglong)(iVar14 + 1U);
    } while (iVar14 + 1U < (uint)(*(longlong *)(param_1 + 0x5830) - lVar9 >> 3));
  }
  lVar6 = *(longlong *)(param_1 + 0x5868);
  if ((int)(*(longlong *)(param_1 + 0x5870) - lVar6 >> 3) != 0) {
    do {
      iVar14 = (int)uVar7;
      if (*(double *)(*(longlong *)(lVar6 + uVar7 * 8) + 8) + 3.0 < dVar5) {
        lVar9 = *(longlong *)(param_1 + 0x5868) + uVar7 * 8;
        puStackX_8 = *(uint64_t **)(*(longlong *)(param_1 + 0x5868) + uVar7 * 8);
        lVar6 = lVar9 + 8;
        if (lVar9 != lVar6) {
          lVar4 = *(longlong *)(param_1 + 0x5870);
          if (lVar6 != lVar4) {
                    // WARNING: Subroutine does not return
            memmove(lVar9,lVar6,lVar4 - lVar6);
          }
          *(longlong *)(param_1 + 0x5870) = lVar4 + -8;
        }
        FUN_18005ea90(param_1 + 0x5848,&puStackX_8);
        iVar14 = iVar14 + -1;
      }
      lVar6 = *(longlong *)(param_1 + 0x5868);
      uVar7 = (ulonglong)(iVar14 + 1U);
    } while (iVar14 + 1U < (uint)(*(longlong *)(param_1 + 0x5870) - lVar6 >> 3));
  }
  return;
LAB_1805b3e92:
  if ((*piVar10 == iVar2) && (piVar10[1] == piVar3[1])) {
    *(int8_t *)(piVar10 + 7) = 1;
    goto LAB_1805b3eb4;
  }
  uVar11 = (int)uVar12 + 1;
  uVar12 = (ulonglong)uVar11;
  piVar10 = piVar10 + 8;
  if (uVar13 <= (ulonglong)(longlong)(int)uVar11) {
LAB_1805b3eb4:
    lVar6 = *(longlong *)(param_1 + 0x5848);
    lVar9 = *(longlong *)(param_1 + 0x5850);
    if (lVar6 == lVar9) {
      puVar8 = (uint64_t *)
               FUN_18062b1e0(_DAT_180c8ed18,0xc98,8,CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),3));
      *puVar8 = 0;
      *puVar8 = _DAT_180c966e8;
      puVar8[1] = 0;
      puVar8[2] = 0;
    }
    else {
      uVar13 = lVar9 - lVar6 >> 3;
      puVar8 = *(uint64_t **)(lVar6 + -8 + uVar13 * 8);
      uVar12 = uVar13 - 1;
      if (uVar13 < uVar12) {
        puStackX_8 = puVar8;
        if (*(longlong *)(param_1 + 0x5858) - lVar9 >> 3 == -1) {
                    // WARNING: Subroutine does not return
          memset(lVar9,0,0xfffffffffffffff8);
        }
        uVar15 = uVar13 * 2;
        if (uVar13 == 0) {
          uVar15 = 1;
        }
        if (uVar15 < uVar12) {
          uVar15 = uVar12;
        }
        if (uVar15 != 0) {
          uVar7 = FUN_18062b420(_DAT_180c8ed18,uVar15 * 8,*(int8_t *)(param_1 + 0x5860));
          lVar6 = *(longlong *)(param_1 + 0x5848);
          lVar9 = *(longlong *)(param_1 + 0x5850);
        }
        if (lVar6 != lVar9) {
                    // WARNING: Subroutine does not return
          memmove(uVar7,lVar6,lVar9 - lVar6);
        }
                    // WARNING: Subroutine does not return
        memset(uVar7,0,0xfffffffffffffff8);
      }
      *(ulonglong *)(param_1 + 0x5850) = lVar6 + uVar12 * 8;
    }
    puStackX_8 = puVar8;
    FUN_18005ea90(param_1 + 0x5868,&puStackX_8);
                    // WARNING: Subroutine does not return
    memcpy(puVar8,piVar3,0xc98);
  }
  goto LAB_1805b3e92;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b3dbb(void)
void FUN_1805b3dbb(void)

{
  double dVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong in_RAX;
  ulonglong uVar5;
  uint64_t *puVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  longlong unaff_RBX;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  double dVar15;
  uint64_t *in_stack_00000080;
  longlong in_stack_00000088;
  ulonglong uVar10;
  
  if (in_RAX == 0) {
    QueryPerformanceCounter(&stack0x00000088);
    in_RAX = in_stack_00000088;
  }
  lVar8 = *(longlong *)(unaff_RBX + 0x5828);
  uVar5 = 0;
  dVar1 = *(double *)(unaff_RBX + 0x58b8);
  dVar15 = (double)(in_RAX - _DAT_180c8ed48) * _DAT_180c8ed50;
  uVar10 = uVar5;
  if ((int)(*(longlong *)(unaff_RBX + 0x5830) - lVar8 >> 3) != 0) {
    do {
      iVar13 = (int)uVar10;
      piVar3 = *(int **)(lVar8 + uVar10 * 8);
      if (dVar1 + *(double *)(piVar3 + 2) < dVar15) {
        iVar2 = *piVar3;
        if ((iVar2 != _DAT_180bf6678) || (piVar3[1] != _DAT_180bf667c)) {
          piVar7 = *(int **)(unaff_RBX + 0x5890);
          uVar12 = *(longlong *)(unaff_RBX + 0x5898) - (longlong)piVar7 >> 5;
          uVar10 = uVar5;
          if (uVar12 == 0) goto LAB_1805b3eb4;
          goto LAB_1805b3e92;
        }
        lVar11 = *(longlong *)(unaff_RBX + 0x5828) + uVar10 * 8;
        in_stack_00000080 = *(uint64_t **)(*(longlong *)(unaff_RBX + 0x5828) + uVar10 * 8);
        lVar8 = lVar11 + 8;
        if (lVar11 != lVar8) {
          lVar4 = *(longlong *)(unaff_RBX + 0x5830);
          if (lVar8 != lVar4) {
                    // WARNING: Subroutine does not return
            memmove(lVar11,lVar8,lVar4 - lVar8);
          }
          *(longlong *)(unaff_RBX + 0x5830) = lVar4 + -8;
        }
        FUN_18005ea90(unaff_RBX + 0x5808,&stack0x00000080);
        iVar13 = iVar13 + -1;
      }
      lVar8 = *(longlong *)(unaff_RBX + 0x5828);
      uVar10 = (ulonglong)(iVar13 + 1U);
    } while (iVar13 + 1U < (uint)(*(longlong *)(unaff_RBX + 0x5830) - lVar8 >> 3));
  }
  lVar8 = *(longlong *)(unaff_RBX + 0x5868);
  if ((int)(*(longlong *)(unaff_RBX + 0x5870) - lVar8 >> 3) != 0) {
    do {
      iVar13 = (int)uVar5;
      if (*(double *)(*(longlong *)(lVar8 + uVar5 * 8) + 8) + 3.0 < dVar15) {
        lVar11 = *(longlong *)(unaff_RBX + 0x5868) + uVar5 * 8;
        in_stack_00000080 = *(uint64_t **)(*(longlong *)(unaff_RBX + 0x5868) + uVar5 * 8);
        lVar8 = lVar11 + 8;
        if (lVar11 != lVar8) {
          lVar4 = *(longlong *)(unaff_RBX + 0x5870);
          if (lVar8 != lVar4) {
                    // WARNING: Subroutine does not return
            memmove(lVar11,lVar8,lVar4 - lVar8);
          }
          *(longlong *)(unaff_RBX + 0x5870) = lVar4 + -8;
        }
        FUN_18005ea90(unaff_RBX + 0x5848,&stack0x00000080);
        iVar13 = iVar13 + -1;
      }
      lVar8 = *(longlong *)(unaff_RBX + 0x5868);
      uVar5 = (ulonglong)(iVar13 + 1U);
    } while (iVar13 + 1U < (uint)(*(longlong *)(unaff_RBX + 0x5870) - lVar8 >> 3));
  }
  return;
LAB_1805b3e92:
  if ((*piVar7 == iVar2) && (piVar7[1] == piVar3[1])) {
    *(int8_t *)(piVar7 + 7) = 1;
    goto LAB_1805b3eb4;
  }
  uVar9 = (int)uVar10 + 1;
  uVar10 = (ulonglong)uVar9;
  piVar7 = piVar7 + 8;
  if (uVar12 <= (ulonglong)(longlong)(int)uVar9) {
LAB_1805b3eb4:
    lVar8 = *(longlong *)(unaff_RBX + 0x5848);
    lVar11 = *(longlong *)(unaff_RBX + 0x5850);
    if (lVar8 == lVar11) {
      puVar6 = (uint64_t *)
               FUN_18062b1e0(_DAT_180c8ed18,0xc98,8,CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),3));
      *puVar6 = 0;
      *puVar6 = _DAT_180c966e8;
      puVar6[1] = 0;
      puVar6[2] = 0;
    }
    else {
      uVar12 = lVar11 - lVar8 >> 3;
      puVar6 = *(uint64_t **)(lVar8 + -8 + uVar12 * 8);
      uVar10 = uVar12 - 1;
      if (uVar12 < uVar10) {
        in_stack_00000080 = puVar6;
        if (*(longlong *)(unaff_RBX + 0x5858) - lVar11 >> 3 == -1) {
                    // WARNING: Subroutine does not return
          memset(lVar11,0,0xfffffffffffffff8);
        }
        uVar14 = uVar12 * 2;
        if (uVar12 == 0) {
          uVar14 = 1;
        }
        if (uVar14 < uVar10) {
          uVar14 = uVar10;
        }
        if (uVar14 != 0) {
          uVar5 = FUN_18062b420(_DAT_180c8ed18,uVar14 * 8,*(int8_t *)(unaff_RBX + 0x5860));
          lVar8 = *(longlong *)(unaff_RBX + 0x5848);
          lVar11 = *(longlong *)(unaff_RBX + 0x5850);
        }
        if (lVar8 != lVar11) {
                    // WARNING: Subroutine does not return
          memmove(uVar5,lVar8,lVar11 - lVar8);
        }
                    // WARNING: Subroutine does not return
        memset(uVar5,0,0xfffffffffffffff8);
      }
      *(ulonglong *)(unaff_RBX + 0x5850) = lVar8 + uVar10 * 8;
    }
    in_stack_00000080 = puVar6;
    FUN_18005ea90(unaff_RBX + 0x5868,&stack0x00000080);
                    // WARNING: Subroutine does not return
    memcpy(puVar6,piVar3,0xc98);
  }
  goto LAB_1805b3e92;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





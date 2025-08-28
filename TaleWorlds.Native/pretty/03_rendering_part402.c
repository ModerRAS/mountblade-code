#include "TaleWorlds.Native.Split.h"

// 03_rendering_part402.c - 15 个函数

// 函数: void FUN_18048fc80(undefined *param_1)
void FUN_18048fc80(undefined *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_158 [48];
  undefined *puStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  longlong *plStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0xffffffff;
    uStack_f4 = 0;
    uStack_120 = 1;
    uStack_118 = 0x1f;
    uStack_108 = 0x10001;
    puStack_128 = (undefined *)0x16800000280;
    ppuStack_f0 = (undefined **)0x0;
    plStack_100 = (longlong *)0x0;
    uStack_11c = 1;
    uStack_10c = 3;
    puStack_c8 = &UNK_1809fcc28;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0x12;
    uVar5 = strcpy_s(auStack_b0,0x80,&UNK_180a2c688);
    puVar4 = (undefined8 *)FUN_1800b2450(uVar5,&ppuStack_f0,&puStack_c8,&puStack_128);
    uVar1 = *puVar4;
    *puVar4 = 0;
    ppuStack_e8 = *(undefined ***)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    if (ppuStack_e8 != (undefined **)0x0) {
      (**(code **)((longlong)*ppuStack_e8 + 0x38))();
    }
    if (ppuStack_f0 != (undefined **)0x0) {
      (**(code **)(*ppuStack_f0 + 0x38))();
    }
    puStack_c8 = &UNK_18098bcb0;
    if (plStack_100 != (longlong *)0x0) {
      (**(code **)(*plStack_100 + 0x38))();
    }
  }
  ppuStack_e8 = &puStack_128;
  uStack_118 = 0x804905f0;
  uStack_114 = 1;
  uStack_110 = 0x80490480;
  uStack_10c = 1;
  puStack_128 = param_1;
  FUN_18005c650(&puStack_128);
  puVar4 = (undefined8 *)*_DAT_180c86960;
  iVar3 = _Mtx_lock(0x180c91970);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uVar1 = _DAT_180c8a9b0;
  ppuStack_e8 = (undefined **)_DAT_180c8a9b0;
  _DAT_180c8a9b0 = *puVar4;
  ppuStack_f0 = &puStack_128;
  puStack_128 = &UNK_180a3c3e0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  FUN_1806277c0(&puStack_128,0x1b);
  puVar2 = (undefined4 *)CONCAT44(uStack_11c,uStack_120);
  *puVar2 = 0x74666f53;
  puVar2[1] = 0x65726177;
  puVar2[2] = 0x73615220;
  puVar2[3] = 0x69726574;
  *(undefined8 *)(puVar2 + 4) = 0x41286e6f6974617a;
  puVar2[6] = 0x295856;
  uStack_118 = 0x1b;
  uVar5 = FUN_18023a940(*(undefined8 *)(param_1 + 0x58));
  FUN_18009a080(uVar5,*(undefined8 *)(param_1 + 0x58));
  _DAT_180c8a9b0 = uVar1;
  iVar3 = _Mtx_unlock(0x180c91970);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18048ff50(longlong param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)
void FUN_18048ff50(longlong param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [32];
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int aiStack_58 [8];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)aiStack_58;
  iVar6 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  iVar10 = (int)((param_4 >> 0x1f & 7U) + param_4) >> 3;
  iVar13 = (int)((param_5 >> 0x1f & 7U) + param_5) >> 3;
  iVar7 = (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3;
  if (iVar7 < iVar13) {
    lVar16 = (longlong)(iVar7 * 0x50) << 2;
    uVar11 = (ulonglong)(uint)(iVar13 - iVar7);
    lVar15 = *(longlong *)(param_1 + 0x1f8 + (ulonglong)param_6 * 8) +
             (longlong)(iVar7 * 0x1400) * 4;
    do {
      auVar5 = _DAT_180a40860;
      auVar4 = _DAT_180a407c0;
      if (iVar6 < iVar10) {
        pauVar12 = (undefined1 (*) [32])
                   (*(longlong *)(param_1 + 600 + (ulonglong)param_6 * 8) + lVar16 +
                   (longlong)iVar6 * 4);
        uVar14 = (ulonglong)(uint)(iVar10 - iVar6);
        lVar9 = lVar15 + (longlong)(iVar6 << 4) * 4;
        do {
          lVar8 = 0;
          aiStack_58[0] = 0;
          aiStack_58[1] = 8;
          aiStack_58[2] = 0x500;
          aiStack_58[3] = 0x508;
          aiStack_58[4] = 0xa00;
          aiStack_58[5] = 0xa08;
          aiStack_58[6] = 0xf00;
          aiStack_58[7] = 0xf08;
          auVar2 = auVar5;
          do {
            piVar1 = aiStack_58 + lVar8;
            lVar8 = lVar8 + 1;
            auVar2 = vminps_avx(auVar2,*(undefined1 (*) [32])(lVar9 + (longlong)*piVar1 * 4));
          } while (lVar8 < 8);
          auVar3 = vshufps_avx(auVar2,auVar2,0x4e);
          auVar2 = vminps_avx(auVar2,auVar3);
          auVar3 = vshufps_avx(auVar2,auVar2,0xb1);
          auVar2 = vminps_avx(auVar2,auVar3);
          auVar3 = vperm2f128_avx(auVar2,auVar2,1);
          auVar2 = vminps_avx(auVar2,auVar3);
          auVar2 = vmaskmovps_avx(auVar4,auVar2);
          *pauVar12 = auVar2;
          pauVar12 = (undefined1 (*) [32])(*pauVar12 + 4);
          lVar9 = lVar9 + 0x40;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      lVar15 = lVar15 + 0x5000;
      lVar16 = lVar16 + 0x140;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)aiStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18048ffc5(int param_1,undefined8 param_2,undefined8 param_3,int param_4)
void FUN_18048ffc5(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  int in_EAX;
  longlong lVar6;
  longlong lVar7;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESI;
  ulonglong uVar8;
  undefined1 (*pauVar9) [32];
  ulonglong uVar10;
  longlong in_R10;
  longlong lVar11;
  longlong lVar12;
  longlong unaff_R14;
  longlong unaff_R15;
  ulonglong uStackX_20;
  
  lVar12 = (longlong)(param_1 << 4) << 2;
  uVar8 = (ulonglong)(uint)(param_4 - in_EAX);
  lVar11 = in_R10 + (longlong)(in_EAX * 0x1400) * 4;
  do {
    auVar5 = _DAT_180a40860;
    auVar4 = _DAT_180a407c0;
    if (unaff_EBX < unaff_ESI) {
      pauVar9 = (undefined1 (*) [32])
                (*(longlong *)(unaff_R14 + 600 + unaff_R15 * 8) + lVar12 +
                CONCAT44(unaff_0000001c,unaff_EBX) * 4);
      uVar10 = (ulonglong)(uint)(unaff_ESI - unaff_EBX);
      lVar7 = lVar11 + (longlong)(unaff_EBX << 4) * 4;
      do {
        lVar6 = 0;
        auVar2 = auVar5;
        do {
          lVar1 = lVar6 * 4;
          lVar6 = lVar6 + 1;
          auVar2 = vminps_avx(auVar2,*(undefined1 (*) [32])
                                      (lVar7 + (longlong)*(int *)(&stack0x00000000 + lVar1) * 4));
        } while (lVar6 < 8);
        auVar3 = vshufps_avx(auVar2,auVar2,0x4e);
        auVar2 = vminps_avx(auVar2,auVar3);
        auVar3 = vshufps_avx(auVar2,auVar2,0xb1);
        auVar2 = vminps_avx(auVar2,auVar3);
        auVar3 = vperm2f128_avx(auVar2,auVar2,1);
        auVar2 = vminps_avx(auVar2,auVar3);
        auVar2 = vmaskmovps_avx(auVar4,auVar2);
        *pauVar9 = auVar2;
        pauVar9 = (undefined1 (*) [32])(*pauVar9 + 4);
        lVar7 = lVar7 + 0x40;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar11 = lVar11 + 0x5000;
    lVar12 = lVar12 + 0x140;
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStackX_20 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1804900c1(void)
void FUN_1804900c1(void)

{
  undefined8 uStackX_20;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStackX_20 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804900e0(longlong param_1)
void FUN_1804900e0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar7 = *(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3;
  uVar12 = (uint)uVar7;
  uVar2 = uVar6;
  if (uVar12 != 0) {
    uVar7 = uVar7 & 0xffffffff;
    uVar11 = uVar6;
    do {
      lVar1 = *(longlong *)(**(longlong **)(uVar11 + *(longlong *)(param_1 + 0x60)) + 0xb8);
      uVar9 = (int)uVar2 + (int)((*(longlong *)(lVar1 + 0x48) - *(longlong *)(lVar1 + 0x40)) / 0x88)
      ;
      uVar2 = (ulonglong)uVar9;
      *(uint *)(param_1 + 0x84) = uVar9;
      uVar7 = uVar7 - 1;
      uVar11 = uVar11 + 8;
    } while (uVar7 != 0);
  }
  uVar9 = (int)uVar2 + 1;
  uVar7 = uVar6;
  if (uVar9 != 0) {
    uVar7 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar9 * 4,CONCAT71((int7)(uVar2 >> 8),3));
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x84);
  }
  *(ulonglong *)(param_1 + 0x90) = uVar7;
  uVar9 = (int)uVar2 + 1;
  uVar7 = uVar6;
  if (uVar9 != 0) {
    uVar7 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar9 * 4,CONCAT71((int7)(uVar2 >> 8),3));
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x84);
  }
  *(ulonglong *)(param_1 + 0x98) = uVar7;
  uVar7 = uVar6;
  if ((int)uVar2 != 0) {
    uVar7 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 4,CONCAT71((int7)(uVar2 >> 8),3));
  }
  *(ulonglong *)(param_1 + 0x228) = uVar7;
  uVar2 = uVar6;
  if ((ulonglong)*(uint *)(param_1 + 0x84) != 0) {
    uVar2 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)*(uint *)(param_1 + 0x84) * 4,3);
  }
  *(ulonglong *)(param_1 + 0x230) = uVar2;
  uVar2 = uVar6;
  uVar7 = uVar6;
  if (uVar12 != 0) {
    do {
      uVar9 = (int)uVar7 + 1;
      uVar2 = (ulonglong)uVar9;
      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + uVar7 * 4) = *(undefined4 *)(param_1 + 0xa0);
      *(int *)(param_1 + 0xa0) =
           *(int *)(param_1 + 0xa0) +
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar7 * 8) + 0x68);
      *(undefined4 *)(*(longlong *)(param_1 + 0x98) + uVar7 * 4) = *(undefined4 *)(param_1 + 0xa4);
      *(int *)(param_1 + 0xa4) =
           *(int *)(param_1 + 0xa4) +
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar7 * 8) + 0x6c);
      uVar7 = uVar2;
    } while (uVar9 < uVar12);
  }
  *(undefined4 *)(uVar2 * 4 + *(longlong *)(param_1 + 0x90)) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(uVar2 * 4 + *(longlong *)(param_1 + 0x98)) = *(undefined4 *)(param_1 + 0xa4);
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)*(uint *)(param_1 + 0xa0) << 4,0x10,3);
  uVar4 = _DAT_180c8ed18;
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  uVar4 = FUN_18062b1e0(uVar4,(ulonglong)*(uint *)(param_1 + 0xa0) << 4,0x10,3);
  *(undefined8 *)(param_1 + 0x1b0) = uVar4;
  if (*(int *)(param_1 + 0x84) == 0) {
    *(undefined1 *)(param_1 + 0x80) = 0;
    return;
  }
  do {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar6 * 8);
    lVar8 = *(longlong *)(lVar1 + 0xb0);
    lVar5 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + uVar6 * 4) * 0x10;
    lVar10 = *(longlong *)(param_1 + 0x1b0) + lVar5;
    lVar5 = *(longlong *)(param_1 + 0x1a8) + lVar5;
    *(longlong *)(lVar1 + 0xb8) = lVar5;
    *(longlong *)(lVar1 + 0xc0) = lVar10;
    *(longlong *)(lVar8 + 0x28) = lVar5;
    *(longlong *)(lVar8 + 0x30) = lVar10;
    lVar8 = *(longlong *)(lVar1 + 0xb0);
    uVar12 = *(uint *)(lVar8 + 0x1c);
    uVar2 = 1;
    if (1 < *(uint *)(lVar1 + 8)) {
      do {
        lVar5 = *(longlong *)(lVar1 + 0xc0);
        uVar9 = (int)uVar2 + 1;
        lVar10 = uVar2 * 0x38;
        *(ulonglong *)(lVar10 + 0x28 + lVar8) =
             (ulonglong)uVar12 * 0x10 + *(longlong *)(lVar1 + 0xb8);
        *(ulonglong *)(lVar10 + 0x30 + lVar8) = lVar5 + (ulonglong)uVar12 * 0x10;
        lVar8 = *(longlong *)(lVar1 + 0xb0);
        uVar12 = uVar12 + *(int *)(lVar10 + 0x1c + lVar8);
        uVar2 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(lVar1 + 8));
    }
    uVar12 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar12;
  } while (uVar12 < *(uint *)(param_1 + 0x84));
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}





// 函数: void FUN_1804903f0(longlong *param_1)
void FUN_1804903f0(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
  FUN_180490c90(param_1[0x16]);
  param_1[0x16] = 0;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[10] = 0;
  if (param_1[0xb] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xb] = 0;
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xc] = 0;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180490480(longlong *param_1)
void FUN_180490480(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puStack_48;
  uint uStack_40;
  
  lVar5 = *(longlong *)(*param_1 + 0x1f8);
  lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  lVar4 = FUN_18023a940(*(undefined8 *)(*param_1 + 0x58));
  plVar2 = *(longlong **)(lVar1 + 0x8400);
  iVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(lVar4 + 8),0,4,0,&puStack_48);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&UNK_180a173b0);
  }
  uVar9 = 0;
  puVar10 = puStack_48;
  do {
    uVar7 = 0;
    puVar8 = puVar10;
    do {
      uVar11 = powf(*(undefined4 *)
                     (lVar5 + (longlong)
                              (int)(((uint)uVar7 & 3) +
                                   ((uVar9 & 1) + ((int)(uVar7 >> 2) + (uVar9 >> 1) * 0xa0) * 4) * 2
                                   ) * 4),0x3e800000);
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *puVar8 = uVar11;
      puVar8 = puVar8 + 1;
    } while ((int)uVar6 < 0x280);
    puVar10 = (undefined4 *)((longlong)puVar10 + (ulonglong)uStack_40);
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x168);
  plVar2 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x78);
  lVar5 = FUN_18023a940(*(undefined8 *)(*param_1 + 0x58));
                    // WARNING: Could not recover jumptable at 0x0001804905e2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(plVar2,*(undefined8 *)(lVar5 + 8),0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180490790(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x40,0x10,3,0xfffffffffffffffe);
  param_1[10] = uVar1;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x40,0x10,3);
  param_1[0xb] = uVar1;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x40,0x10,3);
  param_1[0xc] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180490840(undefined4 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180490840(undefined4 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  longlong *in_RCX;
  uint uVar7;
  int iVar8;
  ulonglong uVar10;
  int iVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong **pplStackX_20;
  undefined8 uVar15;
  ulonglong *puVar9;
  
  uVar15 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_2;
  plStackX_10 = param_2;
  if (plVar1 != (longlong *)0x0) {
    plStackX_8 = plVar1;
    param_1 = (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plStackX_8 = (longlong *)*in_RCX;
  *in_RCX = (longlong)plVar1;
  if (plStackX_8 != (longlong *)0x0) {
    param_1 = (**(code **)(*plStackX_8 + 0x38))();
  }
  plVar1 = (longlong *)*param_2;
  plStackX_8 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    param_1 = (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  FUN_1800b4e00(param_1,plVar1,0xffffffff,param_4,uVar15);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  lVar14 = *(longlong *)(*param_2 + 0xb8);
  uVar3 = *(undefined4 *)(lVar14 + 0x11c);
  uVar4 = *(undefined4 *)(lVar14 + 0x120);
  uVar5 = *(undefined4 *)(lVar14 + 0x124);
  *(undefined4 *)(in_RCX + 0x13) = *(undefined4 *)(lVar14 + 0x118);
  *(undefined4 *)((longlong)in_RCX + 0x9c) = uVar3;
  *(undefined4 *)(in_RCX + 0x14) = uVar4;
  *(undefined4 *)((longlong)in_RCX + 0xa4) = uVar5;
  *(undefined4 *)(in_RCX + 0x15) = *(undefined4 *)(*(longlong *)(*param_2 + 0xb8) + 0x128);
  *(int *)(in_RCX + 1) =
       (int)((*(longlong *)(*(longlong *)(*in_RCX + 0xb8) + 0x48) -
             *(longlong *)(*(longlong *)(*in_RCX + 0xb8) + 0x40)) / 0x88);
  FUN_180490c90(in_RCX[0x16]);
  puVar12 = (ulonglong *)0x0;
  in_RCX[0x16] = 0;
  uVar7 = *(uint *)(in_RCX + 1);
  uVar10 = (ulonglong)uVar7;
  puVar9 = puVar12;
  if (uVar10 != 0) {
    puVar6 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar10 * 0x38 + 0x10,3);
    *puVar6 = uVar10 << 0x20 | 0x38;
    lVar14 = (longlong)puVar6 + 0x2c;
    do {
      plStackX_8 = (longlong *)(lVar14 + -0x1c);
      *plStackX_8 = 0;
      *(undefined8 *)(lVar14 + -4) = 0;
      *(undefined8 *)(lVar14 + 4) = 0;
      *(undefined8 *)(lVar14 + 0x14) = 0;
      *(undefined8 *)(lVar14 + 0xc) = 0;
      uVar7 = (int)puVar9 + 1;
      puVar9 = (ulonglong *)(ulonglong)uVar7;
      lVar14 = lVar14 + 0x38;
    } while ((ulonglong)(longlong)(int)uVar7 < uVar10);
    uVar7 = *(uint *)(in_RCX + 1);
    puVar9 = puVar6 + 2;
  }
  in_RCX[0x16] = (longlong)puVar9;
  if (uVar7 != 0) {
    pplStackX_20 = &plStackX_8;
    do {
      iVar11 = (int)puVar12;
      lVar14 = (longlong)puVar12 * 0x38;
      plStackX_8 = (longlong *)*param_2;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      plVar1 = plStackX_8;
      plStackX_18 = plStackX_8;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
      }
      plStackX_18 = (longlong *)puVar9[(longlong)puVar12 * 7];
      puVar9[(longlong)puVar12 * 7] = (ulonglong)plVar1;
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      *(int *)(puVar9 + (longlong)puVar12 * 7 + 1) = iVar11;
      lVar13 = (longlong)iVar11 * 0x88;
      puVar9[(longlong)puVar12 * 7 + 2] = *(longlong *)(plStackX_8[0x17] + 0x40) + lVar13;
      lVar2 = *(longlong *)(plStackX_8[0x17] + 0x40);
      *(int *)(lVar14 + 0x1c + (longlong)puVar9) =
           (int)(*(longlong *)(lVar13 + 0x30 + lVar2) - *(longlong *)(lVar13 + 0x28 + lVar2) >> 4);
      iVar8 = (int)((*(longlong *)(lVar13 + 0x70 + lVar2) - *(longlong *)(lVar13 + 0x68 + lVar2)) /
                   0x18);
      *(int *)(lVar14 + 0x24 + (longlong)puVar9) = iVar8;
      *(int *)(puVar9 + (longlong)puVar12 * 7 + 4) = iVar8 * 3;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      puVar9 = (ulonglong *)in_RCX[0x16];
      *(int *)(in_RCX + 0xd) = (int)in_RCX[0xd] + *(int *)(lVar14 + 0x1c + (longlong)puVar9);
      *(int *)((longlong)in_RCX + 0x6c) =
           *(int *)((longlong)in_RCX + 0x6c) + *(int *)(lVar14 + 0x24 + (longlong)puVar9);
      puVar12 = (ulonglong *)(ulonglong)(iVar11 + 1U);
    } while (iVar11 + 1U < *(uint *)(in_RCX + 1));
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}





// 函数: void FUN_180490b00(longlong param_1,longlong param_2,ulonglong param_3)
void FUN_180490b00(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = FUN_18063c760(*(undefined8 *)(param_2 + 0x40),param_1 + 0x70,
                        *(undefined4 *)(param_1 + 0xa8));
  param_3 = param_3 & 0xffffffff;
  *(bool *)(param_3 + 0x90 + param_1) = iVar2 != 0;
  if (iVar2 != 0) {
    func_0x000180490630(*(undefined8 *)(param_1 + 0x50),param_2,
                        *(undefined8 *)(param_1 + 0x58 + param_3 * 8));
    lVar1 = *(longlong *)(param_1 + 0x58 + param_3 * 8);
    fVar3 = *(float *)(lVar1 + 0x1c) * *(float *)(param_1 + 0x9c) +
            *(float *)(lVar1 + 0xc) * *(float *)(param_1 + 0x98) +
            *(float *)(lVar1 + 0x2c) * *(float *)(param_1 + 0xa0) + *(float *)(lVar1 + 0x3c);
    *(float *)(param_1 + 200) = fVar3;
    if (1.0 < fVar3) {
      fVar3 = fVar3 * *(float *)(param_2 + 0x48);
      *(bool *)(param_3 + 0x92 + param_1) =
           *(float *)(param_1 + 0xa8) <= fVar3 && fVar3 != *(float *)(param_1 + 0xa8);
      return;
    }
    *(undefined1 *)(param_3 + 0x92 + param_1) = 0;
  }
  return;
}





// 函数: void FUN_180490bd0(longlong param_1)
void FUN_180490bd0(longlong param_1)

{
  uint uVar1;
  uint in_stack_00000040;
  
  if (((*(char *)((ulonglong)in_stack_00000040 + 0x90 + param_1) != '\0') &&
      (*(char *)((ulonglong)in_stack_00000040 + 0x92 + param_1) == '\0')) &&
     (uVar1 = 0, *(int *)(param_1 + 8) != 0)) {
    do {
      if ((*(byte *)((ulonglong)uVar1 * 0x38 + *(longlong *)(param_1 + 0xb0) + 0x18) & 1) == 0) {
        FUN_18049c310();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}





// 函数: void FUN_180490bff(longlong param_1)
void FUN_180490bff(longlong param_1)

{
  longlong in_RAX;
  uint uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 uStack0000000000000040;
  undefined4 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
    *(undefined8 *)(in_RAX + 0x18) = unaff_R14;
    *(undefined8 *)(in_RAX + -0x18) = unaff_R15;
    do {
      if ((*(byte *)((ulonglong)uVar1 * 0x38 + *(longlong *)(unaff_RDI + 0xb0) + 0x18) & 1) == 0) {
        uStack0000000000000040 = *(undefined1 *)(unaff_RDI + 0x94);
        uStack0000000000000038 = in_stack_000000a0;
        uStack0000000000000030 = in_stack_00000098;
        uStack0000000000000028 = in_stack_00000090;
        FUN_18049c310();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(unaff_RDI + 8));
  }
  return;
}





// 函数: void FUN_180490c0a(void)
void FUN_180490c0a(void)

{
  longlong in_RAX;
  uint unaff_EBX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 uStack0000000000000040;
  undefined4 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  *(undefined8 *)(in_RAX + 0x18) = unaff_R14;
  *(undefined8 *)(in_RAX + -0x18) = unaff_R15;
  do {
    if ((*(byte *)((ulonglong)unaff_EBX * 0x38 + *(longlong *)(unaff_RDI + 0xb0) + 0x18) & 1) == 0)
    {
      uStack0000000000000040 = *(undefined1 *)(unaff_RDI + 0x94);
      uStack0000000000000038 = in_stack_000000a0;
      uStack0000000000000030 = in_stack_00000098;
      uStack0000000000000028 = in_stack_00000090;
      FUN_18049c310();
    }
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < *(uint *)(unaff_RDI + 8));
  return;
}





// 函数: void FUN_180490c7f(void)
void FUN_180490c7f(void)

{
  return;
}





// 函数: void FUN_180490c84(void)
void FUN_180490c84(void)

{
  return;
}





// 函数: void FUN_180490c90(longlong param_1)
void FUN_180490c90(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(ulonglong *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  uVar3 = 0;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(longlong **)(uVar3 + param_1) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(uVar3 + param_1) + 0x38))();
      }
      uVar3 = (ulonglong)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1 + -0x10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_180490d10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_180a2c980;
  *param_1 = &UNK_180a2c788;
  _Mtx_init_in_situ(param_1 + 1,2,param_3,param_4,0xfffffffffffffffe);
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 3;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x40,0x10,3);
  param_1[0x3a] = uVar1;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x40,0x10,3);
  param_1[0x3b] = uVar1;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x40,0x10,3);
  param_1[0x3c] = uVar1;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x40,0x10,3);
  param_1[0x3d] = uVar1;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x40,0x10,3);
  param_1[0x3e] = uVar1;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x40,0x10,3);
  param_1[0x3f] = uVar1;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x3840,0x40,3);
  param_1[0x4c] = uVar1;
  param_1[0x4d] = 0;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xe1000,0x20,3);
  param_1[0x40] = uVar1;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}



undefined8 FUN_180490f40(undefined8 param_1,ulonglong param_2)

{
  FUN_180490f80();
  if ((param_2 & 1) != 0) {
    free(param_1,0x2c8);
  }
  return param_1;
}






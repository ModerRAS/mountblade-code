#include "TaleWorlds.Native.Split.h"

// 99_part_05_part007.c - 8 个函数

// 函数: void FUN_1802d90b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)
void FUN_1802d90b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint unaff_EDI;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint in_XMM1_Dc;
  undefined4 uStackX_10;
  undefined4 uStackX_14;
  
  uVar18 = (int)param_2;
  uVar19 = (int)((ulonglong)param_2 >> 0x20);
  do {
    uVar1 = param_4 - 1;
    lVar14 = CONCAT44(uVar19,uVar18);
    lVar8 = *(longlong *)(CONCAT44(uStackX_14,uStackX_10) + 8 + (ulonglong)(param_4 >> 10) * 8);
    uVar15 = (ulonglong)(param_4 + (param_4 >> 10) * -0x400);
    puVar2 = (undefined4 *)(lVar8 + uVar15 * 0x18);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    fVar11 = (float)puVar2[2];
    uVar12 = puVar2[3];
    uVar6 = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
    pfVar5 = (float *)(*(longlong *)(lVar14 + 8 + (ulonglong)(uVar1 >> 10) * 8) + 8 +
                      (ulonglong)(uVar1 + (uVar1 >> 10) * -0x400) * 0x18);
    uVar16 = in_XMM1_Dc;
    if (*pfVar5 <= fVar11 && fVar11 != *pfVar5) {
      do {
        uVar17 = uVar1 - 1;
        uVar15 = (ulonglong)(uVar1 + (uVar1 >> 10) * -0x400);
        lVar8 = *(longlong *)(lVar14 + 8 + (ulonglong)(uVar1 >> 10) * 8);
        puVar3 = (undefined8 *)(lVar8 + uVar15 * 0x18);
        uVar13 = puVar3[1];
        uVar7 = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
        uVar16 = in_XMM1_Dc - 1;
        uVar15 = (ulonglong)(in_XMM1_Dc + (in_XMM1_Dc >> 10) * -0x400);
        lVar8 = *(longlong *)(CONCAT44(uVar19,uVar18) + 8 + (ulonglong)(in_XMM1_Dc >> 10) * 8);
        puVar4 = (undefined8 *)(lVar8 + uVar15 * 0x18);
        *puVar4 = *puVar3;
        puVar4[1] = uVar13;
        *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18) = uVar7;
        pfVar5 = (float *)(*(longlong *)(lVar14 + 8 + (ulonglong)(uVar17 >> 10) * 8) + 8 +
                          (ulonglong)(uVar17 + (uVar17 >> 10) * -0x400) * 0x18);
        in_XMM1_Dc = uVar16;
        uVar1 = uVar17;
      } while (*pfVar5 <= fVar11 && fVar11 != *pfVar5);
    }
    in_XMM1_Dc = param_4 + 1;
    uVar15 = (ulonglong)(uVar16 + (uVar16 >> 10) * -0x400);
    lVar8 = *(longlong *)(CONCAT44(uVar19,uVar18) + 8 + (ulonglong)(uVar16 >> 10) * 8);
    puVar2 = (undefined4 *)(lVar8 + uVar15 * 0x18);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2[2] = fVar11;
    puVar2[3] = uVar12;
    *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18) = uVar6;
    uVar18 = uStackX_10;
    uVar19 = uStackX_14;
    param_4 = in_XMM1_Dc;
  } while (in_XMM1_Dc != unaff_EDI);
  return;
}






// 函数: void FUN_1802d91ee(void)
void FUN_1802d91ee(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1802d9200(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a19250;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a19250;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1802d9380(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a191e8;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a191e8;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}






// 函数: void FUN_1802d9500(int param_1,int param_2,longlong *param_3)
void FUN_1802d9500(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  
  for (lVar1 = (longlong)param_1; lVar1 < param_2; lVar1 = lVar1 + 1) {
    FUN_1802ac930(*(undefined8 *)(*(longlong *)(*param_3 + 0xaf8) + lVar1 * 8),
                  *(undefined4 *)param_3[1],&DAT_180a00300);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802d95a0(longlong *param_1)
void FUN_1802d95a0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStackX_8 [8];
  undefined4 auStackX_10 [2];
  undefined4 **ppuStackX_18;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *apuStack_58 [2];
  code *pcStack_48;
  undefined *puStack_40;
  
  *(undefined1 *)(*param_1 + 0x378) = 1;
  lVar2 = *param_1;
  iVar4 = (int)(*(float *)(lVar2 + 0x304) * 59.999996);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      auStackX_8[0] = iVar3 == iVar4 + -1;
      lVar2 = *param_1;
      auStackX_10[0] = 0x3c888889;
      uVar1 = *(undefined4 *)(lVar2 + 0x5e8);
      ppuStackX_18 = apuStack_58;
      pcStack_48 = FUN_1802d9750;
      puStack_40 = &UNK_1802d9740;
      apuStack_58[0] = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc);
      uStack_70 = (undefined4)lVar2;
      uStack_6c = (undefined4)((ulonglong)lVar2 >> 0x20);
      *apuStack_58[0] = uStack_70;
      apuStack_58[0][1] = uStack_6c;
      *(undefined1 **)(apuStack_58[0] + 2) = auStackX_8;
      *(undefined4 **)(apuStack_58[0] + 4) = auStackX_10;
      FUN_18015b810(uStack_70,0,uVar1,0x10,0xffffffffffffffff,apuStack_58);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
    lVar2 = *param_1;
  }
  FUN_1802d34e0(lVar2);
  *(float *)(*param_1 + 0x304) = *(float *)(*param_1 + 0x304) - (float)iVar4 * 0.016666668;
  *(undefined1 *)(*param_1 + 0x378) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1802d9750(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c04ca0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1802d9840(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c04ce0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1802d9930(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  if (iVar4 == 3) {
    return 0x180c04be0;
  }
  if (iVar4 == 4) {
    return *param_1;
  }
  if (iVar4 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(*param_1,param_2,param_3,param_4,0xfffffffffffffffe);
    }
  }
  else {
    if (iVar4 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (iVar4 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}






// 函数: void FUN_1802d9c00(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)
void FUN_1802d9c00(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  float fVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  uint uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar24 = (longlong)(int)param_2[1];
  uVar20 = (ulonglong)(int)param_1[1];
  lVar22 = lVar24 - uVar20;
  while ((0x1c < lVar22 && (0 < param_3))) {
    uVar21 = (int)lVar24 - 1;
    uVar17 = uVar21 >> 10;
    puVar1 = (undefined8 *)
             (*(longlong *)(*param_2 + 8 + (ulonglong)uVar17 * 8) +
             (ulonglong)(uVar21 + uVar17 * -0x400) * 0x18);
    iVar19 = (int)uVar20;
    uVar17 = (int)(((longlong)(int)lVar24 - (longlong)iVar19) / 2) + iVar19;
    uVar21 = uVar17 >> 10;
    puVar2 = (undefined8 *)
             (*(longlong *)(*param_1 + 8 + (ulonglong)uVar21 * 8) +
             (ulonglong)(uVar17 + uVar21 * -0x400) * 0x18);
    uVar18 = uVar20 >> 10 & 0x3fffff;
    uVar20 = (ulonglong)(uint)(iVar19 + (int)uVar18 * -0x400);
    lVar24 = *(longlong *)(*param_1 + 8 + uVar18 * 8);
    fVar4 = *(float *)(puVar2 + 1);
    fVar5 = *(float *)(puVar1 + 1);
    fVar6 = *(float *)(lVar24 + 8 + uVar20 * 0x18);
    puVar23 = (undefined8 *)(lVar24 + uVar20 * 0x18);
    puVar15 = puVar2;
    fVar16 = fVar4;
    if (fVar4 < fVar6) {
      puVar15 = puVar23;
      fVar16 = fVar6;
      puVar23 = puVar2;
      fVar6 = fVar4;
    }
    if ((fVar6 <= fVar5) && (puVar23 = puVar15, fVar5 < fVar16)) {
      puVar23 = puVar1;
    }
    uStack_58 = *puVar23;
    uStack_50 = puVar23[1];
    lVar14 = *param_1;
    lVar22 = *param_1;
    uStack_b0 = *(uint *)(param_1 + 1);
    uVar10 = *(undefined4 *)((longlong)param_1 + 0xc);
    lVar24 = *param_2;
    lStack_a0._0_4_ = (uint)param_2[1];
    while( true ) {
      while( true ) {
        uVar17 = uStack_b0 >> 10;
        if (*(float *)(*(longlong *)(lVar22 + 8 + (ulonglong)uVar17 * 8) + 8 +
                      (ulonglong)(uStack_b0 + uVar17 * -0x400) * 0x18) <= (float)uStack_50) break;
        uStack_b0 = uStack_b0 + 1;
      }
      lStack_a0._0_4_ = (uint)lStack_a0 - 1;
      pfVar3 = (float *)(*(longlong *)(lVar24 + 8 + (ulonglong)((uint)lStack_a0 >> 10) * 8) + 8 +
                        (ulonglong)((uint)lStack_a0 + ((uint)lStack_a0 >> 10) * -0x400) * 0x18);
      if (*pfVar3 <= (float)uStack_50 && (float)uStack_50 != *pfVar3) {
        do {
          lStack_a0._0_4_ = (uint)lStack_a0 - 1;
          pfVar3 = (float *)(*(longlong *)(lVar24 + 8 + (ulonglong)((uint)lStack_a0 >> 10) * 8) + 8
                            + (ulonglong)((uint)lStack_a0 + ((uint)lStack_a0 >> 10) * -0x400) * 0x18
                            );
        } while (*pfVar3 <= (float)uStack_50 && (float)uStack_50 != *pfVar3);
      }
      if ((int)(uint)lStack_a0 <= (int)uStack_b0) break;
      uVar18 = (ulonglong)((uint)lStack_a0 + ((uint)lStack_a0 >> 10) * -0x400);
      lVar8 = *(longlong *)(lVar24 + 8 + (ulonglong)((uint)lStack_a0 >> 10) * 8);
      uVar20 = (ulonglong)(uStack_b0 + uVar17 * -0x400);
      lVar9 = *(longlong *)(lVar22 + 8 + (ulonglong)uVar17 * 8);
      uStack_b0 = uStack_b0 + 1;
      puVar1 = (undefined8 *)(lVar8 + uVar18 * 0x18);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + uVar20 * 0x18);
      uVar12 = *puVar2;
      uVar13 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar9 + 0x10 + uVar20 * 0x18);
      puVar2 = (undefined8 *)(lVar9 + uVar20 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar9 + 0x10 + uVar20 * 0x18) = *(undefined8 *)(lVar8 + 0x10 + uVar18 * 0x18);
      puVar1 = (undefined8 *)(lVar8 + uVar18 * 0x18);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      *(undefined8 *)(lVar8 + 0x10 + uVar18 * 0x18) = uVar7;
    }
    lStack_a8 = *param_2;
    lStack_a0 = param_2[1];
    param_3 = param_3 + -1;
    lVar24 = CONCAT44(uVar10,uStack_b0);
    lStack_98 = lVar14;
    lStack_90 = lVar24;
    FUN_1802d9c00(&lStack_98,&lStack_a8,param_3,param_4);
    uVar20 = (ulonglong)(int)param_1[1];
    *param_2 = lVar14;
    param_2[1] = lVar24;
    lVar24 = (longlong)(int)param_2[1];
    lVar22 = lVar24 - uVar20;
  }
  if (param_3 == 0) {
    lStack_88 = *param_2;
    lStack_80 = param_2[1];
    uStack_68 = (undefined4)*param_1;
    uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_60 = (undefined4)param_1[1];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
    lStack_78 = lStack_88;
    lStack_70 = lStack_80;
    FUN_1802da110(&uStack_68,&lStack_78,&lStack_88,param_4);
  }
  return;
}






// 函数: void FUN_1802d9c17(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
void FUN_1802d9c17(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  float fVar18;
  longlong in_RAX;
  uint uVar19;
  ulonglong uVar20;
  undefined1 unaff_BL;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  int iVar21;
  undefined8 unaff_RDI;
  ulonglong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  longlong in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uStack0000000000000074;
  undefined4 uStack000000000000007c;
  
  *(undefined8 *)(in_RAX + 0x18) = unaff_RDI;
  uVar22 = (ulonglong)(int)param_1[1];
  *(undefined8 *)(in_RAX + -0x20) = unaff_R12;
  if (0x1c < (longlong)(in_R10 - uVar22)) {
    *(undefined8 *)(in_RAX + 8) = unaff_RBP;
    *(undefined8 *)(in_RAX + 0x10) = unaff_RSI;
    *(undefined8 *)(in_RAX + -0x28) = unaff_R14;
    *(undefined4 *)(in_RAX + -0x38) = unaff_XMM6_Da;
    *(undefined4 *)(in_RAX + -0x34) = unaff_XMM6_Db;
    *(undefined4 *)(in_RAX + -0x30) = unaff_XMM6_Dc;
    *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
    do {
      if (param_3 < 1) break;
      uVar23 = (int)in_R10 - 1;
      uVar19 = uVar23 >> 10;
      puVar1 = (undefined8 *)
               (*(longlong *)(*param_2 + 8 + (ulonglong)uVar19 * 8) +
               (ulonglong)(uVar23 + uVar19 * -0x400) * 0x18);
      iVar21 = (int)uVar22;
      uVar19 = (int)(((longlong)(int)in_R10 - (longlong)iVar21) / 2) + iVar21;
      uVar23 = uVar19 >> 10;
      puVar2 = (undefined8 *)
               (*(longlong *)(*param_1 + 8 + (ulonglong)uVar23 * 8) +
               (ulonglong)(uVar19 + uVar23 * -0x400) * 0x18);
      uVar20 = uVar22 >> 10 & 0x3fffff;
      uVar22 = (ulonglong)(uint)(iVar21 + (int)uVar20 * -0x400);
      lVar8 = *(longlong *)(*param_1 + 8 + uVar20 * 8);
      fVar4 = *(float *)(puVar2 + 1);
      fVar5 = *(float *)(puVar1 + 1);
      fVar6 = *(float *)(lVar8 + 8 + uVar22 * 0x18);
      puVar24 = (undefined8 *)(lVar8 + uVar22 * 0x18);
      puVar17 = puVar2;
      fVar18 = fVar4;
      if (fVar4 < fVar6) {
        puVar17 = puVar24;
        fVar18 = fVar6;
        puVar24 = puVar2;
        fVar6 = fVar4;
      }
      if ((fVar6 <= fVar5) && (puVar24 = puVar17, fVar5 < fVar18)) {
        puVar24 = puVar1;
      }
      param_16 = *puVar24;
      param_17 = puVar24[1];
      lVar16 = *param_1;
      lVar15 = *param_1;
      param_5._0_4_ = *(uint *)(param_1 + 1);
      uVar11 = *(undefined4 *)((longlong)param_1 + 0xc);
      lVar8 = *param_2;
      param_7._0_4_ = (uint)param_2[1];
      while( true ) {
        while( true ) {
          uVar19 = (uint)param_5 >> 10;
          if (*(float *)(*(longlong *)(lVar15 + 8 + (ulonglong)uVar19 * 8) + 8 +
                        (ulonglong)((uint)param_5 + uVar19 * -0x400) * 0x18) <= (float)param_17)
          break;
          param_5._0_4_ = (uint)param_5 + 1;
        }
        param_7._0_4_ = (uint)param_7 - 1;
        pfVar3 = (float *)(*(longlong *)(lVar8 + 8 + (ulonglong)((uint)param_7 >> 10) * 8) + 8 +
                          (ulonglong)((uint)param_7 + ((uint)param_7 >> 10) * -0x400) * 0x18);
        if (*pfVar3 <= (float)param_17 && (float)param_17 != *pfVar3) {
          do {
            param_7._0_4_ = (uint)param_7 - 1;
            pfVar3 = (float *)(*(longlong *)(lVar8 + 8 + (ulonglong)((uint)param_7 >> 10) * 8) + 8 +
                              (ulonglong)((uint)param_7 + ((uint)param_7 >> 10) * -0x400) * 0x18);
          } while (*pfVar3 <= (float)param_17 && (float)param_17 != *pfVar3);
        }
        if ((int)(uint)param_7 <= (int)(uint)param_5) break;
        uVar20 = (ulonglong)((uint)param_7 + ((uint)param_7 >> 10) * -0x400);
        lVar9 = *(longlong *)(lVar8 + 8 + (ulonglong)((uint)param_7 >> 10) * 8);
        uVar22 = (ulonglong)((uint)param_5 + uVar19 * -0x400);
        lVar10 = *(longlong *)(lVar15 + 8 + (ulonglong)uVar19 * 8);
        param_5._0_4_ = (uint)param_5 + 1;
        puVar1 = (undefined8 *)(lVar9 + uVar20 * 0x18);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)(lVar10 + uVar22 * 0x18);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        uVar7 = *(undefined8 *)(lVar10 + 0x10 + uVar22 * 0x18);
        puVar2 = (undefined8 *)(lVar10 + uVar22 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar12;
        *(undefined8 *)(lVar10 + 0x10 + uVar22 * 0x18) =
             *(undefined8 *)(lVar9 + 0x10 + uVar20 * 0x18);
        puVar1 = (undefined8 *)(lVar9 + uVar20 * 0x18);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        *(undefined8 *)(lVar9 + 0x10 + uVar20 * 0x18) = uVar7;
      }
      param_6 = *param_2;
      param_7 = param_2[1];
      param_3 = param_3 + -1;
      lVar8 = CONCAT44(uVar11,(uint)param_5);
      param_8 = lVar16;
      param_9 = lVar8;
      FUN_1802d9c00(&param_8,&param_6,param_3,unaff_BL);
      uVar22 = (ulonglong)(int)param_1[1];
      *param_2 = lVar16;
      param_2[1] = lVar8;
      in_R10 = (longlong)(int)param_2[1];
    } while (0x1c < (longlong)(in_R10 - uVar22));
  }
  if (param_3 == 0) {
    param_10 = *param_2;
    param_11 = param_2[1];
    param_14 = (undefined4)*param_1;
    uStack0000000000000074 = *(undefined4 *)((longlong)param_1 + 4);
    param_15 = (undefined4)param_1[1];
    uStack000000000000007c = *(undefined4 *)((longlong)param_1 + 0xc);
    param_12 = param_10;
    param_13 = param_11;
    FUN_1802da110(&param_14,&param_12,&param_10,unaff_BL);
  }
  return;
}






// 函数: void FUN_1802d9c3c(void)
void FUN_1802d9c3c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  float fVar18;
  longlong in_RAX;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 unaff_BL;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  int iVar22;
  ulonglong unaff_RDI;
  uint uVar23;
  undefined8 *puVar24;
  longlong in_R10;
  longlong unaff_R12;
  longlong *unaff_R13;
  undefined8 unaff_R14;
  longlong *unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  uint uStack0000000000000028;
  longlong in_stack_00000030;
  uint uStack0000000000000038;
  longlong in_stack_00000040;
  longlong in_stack_00000048;
  longlong in_stack_00000050;
  longlong in_stack_00000058;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBP;
  *(undefined8 *)(in_RAX + 0x10) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R14;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  do {
    if (unaff_R12 < 1) break;
    uVar23 = (int)in_R10 - 1;
    uVar20 = uVar23 >> 10;
    puVar1 = (undefined8 *)
             (*(longlong *)(*unaff_R15 + 8 + (ulonglong)uVar20 * 8) +
             (ulonglong)(uVar23 + uVar20 * -0x400) * 0x18);
    iVar22 = (int)unaff_RDI;
    uVar20 = (int)(((longlong)(int)in_R10 - (longlong)iVar22) / 2) + iVar22;
    uVar23 = uVar20 >> 10;
    puVar2 = (undefined8 *)
             (*(longlong *)(*unaff_R13 + 8 + (ulonglong)uVar23 * 8) +
             (ulonglong)(uVar20 + uVar23 * -0x400) * 0x18);
    uVar21 = unaff_RDI >> 10 & 0x3fffff;
    uVar19 = (ulonglong)(uint)(iVar22 + (int)uVar21 * -0x400);
    lVar8 = *(longlong *)(*unaff_R13 + 8 + uVar21 * 8);
    fVar4 = *(float *)(puVar2 + 1);
    fVar5 = *(float *)(puVar1 + 1);
    fVar6 = *(float *)(lVar8 + 8 + uVar19 * 0x18);
    puVar24 = (undefined8 *)(lVar8 + uVar19 * 0x18);
    puVar17 = puVar2;
    fVar18 = fVar4;
    if (fVar4 < fVar6) {
      puVar17 = puVar24;
      fVar18 = fVar6;
      puVar24 = puVar2;
      fVar6 = fVar4;
    }
    if ((fVar6 <= fVar5) && (puVar24 = puVar17, fVar5 < fVar18)) {
      puVar24 = puVar1;
    }
    in_stack_00000080 = *puVar24;
    _fStack0000000000000088 = puVar24[1];
    lVar16 = *unaff_R13;
    lVar15 = *unaff_R13;
    uStack0000000000000028 = *(uint *)(unaff_R13 + 1);
    uVar11 = *(undefined4 *)((longlong)unaff_R13 + 0xc);
    lVar8 = *unaff_R15;
    uStack0000000000000038 = (uint)unaff_R15[1];
    while( true ) {
      while( true ) {
        uVar20 = uStack0000000000000028 >> 10;
        if (*(float *)(*(longlong *)(lVar15 + 8 + (ulonglong)uVar20 * 8) + 8 +
                      (ulonglong)(uStack0000000000000028 + uVar20 * -0x400) * 0x18) <=
            fStack0000000000000088) break;
        uStack0000000000000028 = uStack0000000000000028 + 1;
      }
      uStack0000000000000038 = uStack0000000000000038 - 1;
      pfVar3 = (float *)(*(longlong *)(lVar8 + 8 + (ulonglong)(uStack0000000000000038 >> 10) * 8) +
                         8 + (ulonglong)
                             (uStack0000000000000038 + (uStack0000000000000038 >> 10) * -0x400) *
                             0x18);
      if (*pfVar3 <= fStack0000000000000088 && fStack0000000000000088 != *pfVar3) {
        do {
          uStack0000000000000038 = uStack0000000000000038 - 1;
          pfVar3 = (float *)(*(longlong *)
                              (lVar8 + 8 + (ulonglong)(uStack0000000000000038 >> 10) * 8) + 8 +
                            (ulonglong)
                            (uStack0000000000000038 + (uStack0000000000000038 >> 10) * -0x400) *
                            0x18);
        } while (*pfVar3 <= fStack0000000000000088 && fStack0000000000000088 != *pfVar3);
      }
      if ((int)uStack0000000000000038 <= (int)uStack0000000000000028) break;
      uVar21 = (ulonglong)(uStack0000000000000038 + (uStack0000000000000038 >> 10) * -0x400);
      lVar9 = *(longlong *)(lVar8 + 8 + (ulonglong)(uStack0000000000000038 >> 10) * 8);
      uVar19 = (ulonglong)(uStack0000000000000028 + uVar20 * -0x400);
      lVar10 = *(longlong *)(lVar15 + 8 + (ulonglong)uVar20 * 8);
      uStack0000000000000028 = uStack0000000000000028 + 1;
      puVar1 = (undefined8 *)(lVar9 + uVar21 * 0x18);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)(lVar10 + uVar19 * 0x18);
      uVar13 = *puVar2;
      uVar14 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar10 + 0x10 + uVar19 * 0x18);
      puVar2 = (undefined8 *)(lVar10 + uVar19 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar12;
      *(undefined8 *)(lVar10 + 0x10 + uVar19 * 0x18) = *(undefined8 *)(lVar9 + 0x10 + uVar21 * 0x18)
      ;
      puVar1 = (undefined8 *)(lVar9 + uVar21 * 0x18);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      *(undefined8 *)(lVar9 + 0x10 + uVar21 * 0x18) = uVar7;
    }
    in_stack_00000030 = *unaff_R15;
    _uStack0000000000000038 = unaff_R15[1];
    unaff_R12 = unaff_R12 + -1;
    lVar8 = CONCAT44(uVar11,uStack0000000000000028);
    in_stack_00000040 = lVar16;
    in_stack_00000048 = lVar8;
    FUN_1802d9c00(&stack0x00000040,&stack0x00000030,unaff_R12,unaff_BL);
    unaff_RDI = (ulonglong)(int)unaff_R13[1];
    *unaff_R15 = lVar16;
    unaff_R15[1] = lVar8;
    in_R10 = (longlong)(int)unaff_R15[1];
  } while (0x1c < (longlong)(in_R10 - unaff_RDI));
  if (unaff_R12 == 0) {
    in_stack_00000050 = *unaff_R15;
    in_stack_00000058 = unaff_R15[1];
    in_stack_00000070 = (undefined4)*unaff_R13;
    uStack0000000000000074 = *(undefined4 *)((longlong)unaff_R13 + 4);
    in_stack_00000078 = (undefined4)unaff_R13[1];
    uStack000000000000007c = *(undefined4 *)((longlong)unaff_R13 + 0xc);
    in_stack_00000060 = in_stack_00000050;
    in_stack_00000068 = in_stack_00000058;
    FUN_1802da110(&stack0x00000070,&stack0x00000060,&stack0x00000050,unaff_BL);
  }
  return;
}






// 函数: void FUN_1802d9e84(void)
void FUN_1802d9e84(void)

{
  undefined1 unaff_BL;
  longlong unaff_R12;
  undefined4 *unaff_R13;
  undefined8 *unaff_R15;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  if (unaff_R12 == 0) {
    uStack0000000000000050 = *unaff_R15;
    uStack0000000000000058 = unaff_R15[1];
    uStack0000000000000070 = *unaff_R13;
    uStack0000000000000074 = unaff_R13[1];
    uStack0000000000000078 = unaff_R13[2];
    uStack000000000000007c = unaff_R13[3];
    uStack0000000000000060 = uStack0000000000000050;
    uStack0000000000000068 = uStack0000000000000058;
    FUN_1802da110(&stack0x00000070,&stack0x00000060,&stack0x00000050,unaff_BL);
  }
  return;
}







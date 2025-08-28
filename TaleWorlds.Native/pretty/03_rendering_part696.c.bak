#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part696.c - 15 个函数

// 函数: void FUN_18066c7e0(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4,int param_5
void FUN_18066c7e0(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4,int param_5
                  )

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int8_t auStack_d8 [32];
  longlong lStack_b8;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong *plStack_78;
  longlong lStack_70;
  int32_t uStack_68;
  int iStack_64;
  uint64_t uStack_60;
  int32_t uStack_58;
  uint uStack_54;
  ulonglong uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d8;
  uStack_98 = (uint)param_3;
  uVar15 = param_3 & 0xffffffff;
  iStack_a8 = 0;
  iStack_a4 = 0;
  plStack_78 = param_1;
  lStack_70 = param_2;
  if (((((int)param_1[0x57] != 0) || (param_2 != 0)) || (uStack_98 != 0)) &&
     (iVar11 = FUN_18066d130(param_1,param_2,param_3,&iStack_a8), 0 < iVar11)) {
    lStack_b8 = param_1[0x22];
    lVar12 = param_1[0x1d];
    iVar11 = *(int *)((longlong)param_1 + 0xec);
    iStack_a0 = (int)lVar12;
    iStack_9c = iVar11;
    iStack_a8 = FUN_18066d210(param_1[0x58],(int)param_1[0x61],(longlong)param_1 + 0xe4,
                              param_1[0x21]);
    if ((iStack_a8 == 5) && ((int)param_1[0x1e] == 0)) {
      iStack_a8 = 0;
    }
    if ((*(int *)((longlong)param_1 + 0xf4) == 0) && ((int)param_1[0x1e] == 0)) {
      iStack_a8 = 5;
    }
    if ((*(int *)((longlong)param_1 + 0xec) != iVar11) ||
       (iVar11 = iStack_a4, (int)param_1[0x1d] != (int)lVar12)) {
      iVar11 = 1;
    }
    if ((iStack_a8 == 0) && (*(int *)((longlong)param_1 + 0xf4) == 0)) {
      uStack_68 = (int32_t)param_1[0x1d];
      uStack_60 = 9;
      uStack_58 = (int32_t)param_1[0x1b];
      uStack_54 = *(uint *)(param_1 + 1) & 0x20000;
      if (((int)param_1[0x1f] == 0) && ((*(uint *)(param_1 + 1) & 0x10000) != 0)) {
        *(int32_t *)((longlong)param_1 + 0xfc) = 0x403;
        param_1[0x20] = 4;
      }
      iStack_64 = *(int *)((longlong)param_1 + 0xec);
      iStack_a8 = FUN_18066eea0(param_1 + 0x35,&uStack_68);
      *(int32_t *)((longlong)param_1 + 0xf4) = 1;
    }
    if (*(int *)((longlong)param_1 + 0xf4) != 0) {
      *(longlong *)(param_1[0x36] + 0x4430) = param_1[0x21];
      *(longlong *)(param_1[0x36] + 0x4438) = param_1[0x22];
    }
    if (iStack_a8 == 0) {
      lVar12 = param_1[0x36];
      lStack_90 = lVar12;
      if (iVar11 != 0) {
        lStack_88 = lVar12 + 0x12c0;
        *(int *)(lVar12 + 0x1a20) = (int)param_1[0x1d];
        *(int32_t *)(lVar12 + 0x1a24) = *(int32_t *)((longlong)param_1 + 0xec);
        iStack_a4 = *(int *)(lVar12 + 0x1e74);
        lStack_80 = lVar12;
        iVar11 = __intrinsic_setjmp(lVar12 + 0x1320,auStack_d8);
        lVar14 = lStack_88;
        lVar10 = lStack_90;
        if (iVar11 != 0) {
          *(int32_t *)(lStack_90 + 0x1318) = 0;
          func_0x000180001000();
          goto LAB_18066cdc1;
        }
        *(int32_t *)(lStack_90 + 0x1318) = 1;
        if (*(int *)(lStack_88 + 0x760) < 1) {
          *(int *)(lStack_88 + 0x760) = iStack_a0;
          FUN_18066d370(lStack_88,7,&unknown_var_7632_ptr);
        }
        if (*(int *)(lVar14 + 0x764) < 1) {
          *(int *)(lVar14 + 0x764) = iStack_9c;
          FUN_18066d370(lVar14,7,&unknown_var_7656_ptr);
        }
        iVar11 = FUN_18066e500(lVar14,*(int32_t *)(lVar14 + 0x760),
                               *(int32_t *)(lVar14 + 0x764));
        if (iVar11 != 0) {
          FUN_18066d370(lVar14,2,&unknown_var_7680_ptr);
        }
        lVar12 = (longlong)*(int *)(lVar14 + 0x9d4);
        iVar11 = 0;
        puVar1 = (uint64_t *)(lVar14 + 0x780 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xde0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xde8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x790 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xdf0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xdf8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7a0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe00) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe08) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7b0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe10) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe18) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7c0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe20) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe28) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 2000 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe30) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe38) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7e0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe40) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe48) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7f0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe50) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe58) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x800 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe60) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe68) = uVar9;
        lVar12 = (longlong)*(int *)(lVar14 + 0x9d0);
        puVar1 = (uint64_t *)(lVar14 + 0x780 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe70) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe78) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x790 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe80) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe88) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7a0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xe90) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xe98) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7b0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xea0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xea8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7c0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xeb0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xeb8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 2000 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xec0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xec8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7e0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xed0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xed8) = uVar9;
        puVar1 = (uint64_t *)(lVar14 + 0x7f0 + lVar12 * 0x90);
        uVar9 = puVar1[1];
        *(uint64_t *)(lStack_80 + 0xee0) = *puVar1;
        *(uint64_t *)(lStack_80 + 0xee8) = uVar9;
        puVar2 = (int32_t *)(lVar14 + 0x800 + lVar12 * 0x90);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        *(int32_t *)(lStack_80 + 0xef0) = *puVar2;
        *(int32_t *)(lStack_80 + 0xef4) = uVar6;
        *(int32_t *)(lStack_80 + 0xef8) = uVar7;
        *(int32_t *)(lStack_80 + 0xefc) = uVar8;
        if (0 < *(int *)(lVar10 + 0x4390)) {
          lVar12 = 0;
          do {
            lVar13 = (longlong)*(int *)(lVar14 + 0x9d0);
            lVar5 = *(longlong *)(lVar10 + 0x43e0);
            puVar1 = (uint64_t *)(lVar14 + 0x780 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xe70 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 0x790 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xe80 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 0x7a0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xe90 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 0x7b0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xea0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 0x7c0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xeb0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 2000 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xec0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar1 = (uint64_t *)(lVar14 + 0x7e0 + lVar13 * 0x90);
            uVar9 = puVar1[1];
            puVar3 = (uint64_t *)(lVar5 + 0xed0 + lVar12);
            *puVar3 = *puVar1;
            puVar3[1] = uVar9;
            puVar2 = (int32_t *)(lVar14 + 0x7f0 + lVar13 * 0x90);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar4 = (int32_t *)(lVar5 + 0xee0 + lVar12);
            *puVar4 = *puVar2;
            puVar4[1] = uVar6;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            puVar2 = (int32_t *)(lVar14 + 0x800 + lVar13 * 0x90);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar4 = (int32_t *)(lVar5 + 0xef0 + lVar12);
            *puVar4 = *puVar2;
            puVar4[1] = uVar6;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            func_0x00018066e370((longlong)iVar11 * 0x12a0 + *(longlong *)(lVar10 + 0x43e0));
            iVar11 = iVar11 + 1;
            lVar12 = lVar12 + 0x12a0;
          } while (iVar11 < *(int *)(lVar10 + 0x4390));
        }
        func_0x00018066e370(lVar10);
        lVar12 = lStack_90;
        if (*(int *)(lVar10 + 0x4380) != 0) {
          FUN_180670c40(lStack_90,*(int32_t *)(lVar14 + 0x760),iStack_a4);
        }
        uVar15 = (ulonglong)uStack_98;
        *(int32_t *)(lVar10 + 0x1318) = 0;
        *(int32_t *)(lVar12 + 0x1c80) = 0;
        param_1 = plStack_78;
        param_2 = lStack_70;
      }
      lVar14 = 0;
      lVar10 = param_1[0x58];
      *(longlong *)(lVar12 + 0x4308) = param_1[0x57];
      *(longlong *)(lVar12 + 0x4310) = lVar10;
      lVar10 = param_1[0x5a];
      *(longlong *)(lVar12 + 0x4318) = param_1[0x59];
      *(longlong *)(lVar12 + 0x4320) = lVar10;
      lVar10 = param_1[0x5c];
      *(longlong *)(lVar12 + 0x4328) = param_1[0x5b];
      *(longlong *)(lVar12 + 0x4330) = lVar10;
      lVar10 = param_1[0x5e];
      *(longlong *)(lVar12 + 0x4338) = param_1[0x5d];
      *(longlong *)(lVar12 + 0x4340) = lVar10;
      lVar10 = param_1[0x60];
      *(longlong *)(lVar12 + 0x4348) = param_1[0x5f];
      *(longlong *)(lVar12 + 0x4350) = lVar10;
      lVar10 = param_1[0x62];
      *(longlong *)(lVar12 + 0x4358) = param_1[0x61];
      *(longlong *)(lVar12 + 0x4360) = lVar10;
      uVar6 = *(int32_t *)((longlong)param_1 + 0x31c);
      lVar10 = param_1[100];
      uVar7 = *(int32_t *)((longlong)param_1 + 0x324);
      *(int *)(lVar12 + 0x4368) = (int)param_1[99];
      *(int32_t *)(lVar12 + 0x436c) = uVar6;
      *(int *)(lVar12 + 0x4370) = (int)lVar10;
      *(int32_t *)(lVar12 + 0x4374) = uVar7;
      *(longlong *)(lVar12 + 0x4378) = param_1[0x65];
      param_1[0x56] = param_4;
      iVar11 = FUN_18066f080(lVar12,uVar15,param_2,(longlong)param_5);
      if ((iVar11 != 0) && (*(int *)(lVar12 + 0x12c0) != 0)) {
        if (*(int *)(lVar12 + 0x12c4) != 0) {
          lVar14 = lVar12 + 0x12c8;
        }
        *param_1 = lVar14;
      }
      *(int32_t *)((longlong)param_1 + 700) = 0;
    }
  }
LAB_18066cdc1:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066cdf0(longlong param_1,longlong *param_2)
void FUN_18066cdf0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int8_t auStack_108 [32];
  int32_t *puStack_e8;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int iStack_c4;
  int32_t uStack_b8;
  int32_t uStack_a4;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_70;
  int32_t uStack_38;
  uint64_t uStack_34;
  uint64_t uStack_2c;
  uint64_t uStack_24;
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_108;
  if ((*param_2 == 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    if ((*(uint *)(param_1 + 8) & 0x10000) != 0) {
      uStack_38 = *(int32_t *)(param_1 + 0xfc);
      uStack_34 = *(uint64_t *)(param_1 + 0x100);
    }
    puStack_e8 = &uStack_38;
    iVar1 = FUN_18066ef60(*(longlong *)(param_1 + 0x1b0),&uStack_c8,&uStack_d0,&uStack_d8);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x13c) = iStack_c4;
      *(int *)(param_1 + 0x134) = iStack_c4;
      *(int32_t *)(param_1 + 0x118) = 0x102;
      *(uint *)(param_1 + 0x128) = iStack_c4 + 0x4fU & 0xfffffff0;
      *(int32_t *)(param_1 + 0x138) = uStack_c8;
      *(int32_t *)(param_1 + 0x130) = uStack_c8;
      *(int32_t *)(param_1 + 0x124) = uStack_b8;
      *(int32_t *)(param_1 + 0x140) = 1;
      *(int32_t *)(param_1 + 0x144) = 1;
      *(uint64_t *)(param_1 + 0x148) = uStack_90;
      *(uint64_t *)(param_1 + 0x150) = uStack_88;
      *(int32_t *)(param_1 + 0x16c) = uStack_a4;
      *(int32_t *)(param_1 + 0x170) = uStack_a4;
      *(uint64_t *)(param_1 + 0x158) = uStack_80;
      *(uint64_t *)(param_1 + 0x160) = 0;
      *(int32_t *)(param_1 + 0x168) = uStack_b8;
      *(int32_t *)(param_1 + 0x174) = uStack_b8;
      *(int32_t *)(param_1 + 300) = 8;
      *(int32_t *)(param_1 + 0x178) = 0xc;
      *(uint64_t *)(param_1 + 0x180) = *(uint64_t *)(param_1 + 0x2b0);
      *(uint64_t *)(param_1 + 0x188) = uStack_70;
      *(uint64_t *)(param_1 + 400) = 0;
      *param_2 = param_1 + 0x118;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_108);
}



uint64_t FUN_18066cf80(longlong param_1,uint64_t *param_2)

{
  int32_t *puVar1;
  uint64_t uVar2;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int32_t uStack_74;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint uStack_34;
  
  puVar1 = (int32_t *)*param_2;
  if ((puVar1 != (int32_t *)0x0) && (*(int *)(param_1 + 0x1a8) == 0)) {
    iStack_94 = puVar1[9];
    iStack_98 = puVar1[8];
    uStack_60 = *(uint64_t *)(puVar1 + 0xe);
    uStack_58 = *(uint64_t *)(puVar1 + 0x10);
    uStack_80 = iStack_94 + 1U >> 1;
    iStack_88 = puVar1[0x16];
    uStack_84 = iStack_98 + 1U >> 1;
    uStack_50 = *(uint64_t *)(puVar1 + 0x12);
    uStack_34 = (uint)(iStack_88 - iStack_98) >> 1;
    uStack_74 = puVar1[0x17];
    iStack_90 = iStack_98;
    iStack_8c = iStack_94;
    uStack_7c = uStack_84;
    uStack_78 = uStack_80;
    uVar2 = FUN_18066f2e0(*(uint64_t *)(param_1 + 0x1b0),*puVar1,&iStack_98);
    return uVar2;
  }
  return 8;
}



uint64_t FUN_18066d040(longlong param_1,uint64_t *param_2)

{
  int32_t *puVar1;
  uint64_t uVar2;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int32_t uStack_74;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint uStack_34;
  
  puVar1 = (int32_t *)*param_2;
  if ((puVar1 != (int32_t *)0x0) && (*(int *)(param_1 + 0x1a8) == 0)) {
    iStack_94 = puVar1[9];
    iStack_98 = puVar1[8];
    uStack_60 = *(uint64_t *)(puVar1 + 0xe);
    uStack_58 = *(uint64_t *)(puVar1 + 0x10);
    uStack_80 = iStack_94 + 1U >> 1;
    iStack_88 = puVar1[0x16];
    uStack_84 = iStack_98 + 1U >> 1;
    uStack_50 = *(uint64_t *)(puVar1 + 0x12);
    uStack_34 = (uint)(iStack_88 - iStack_98) >> 1;
    uStack_74 = puVar1[0x17];
    iStack_90 = iStack_98;
    iStack_8c = iStack_94;
    uStack_7c = uStack_84;
    uStack_78 = uStack_80;
    uVar2 = FUN_18066efd0(*(uint64_t *)(param_1 + 0x1b0),*puVar1,&iStack_98);
    return uVar2;
  }
  return 8;
}



uint64_t FUN_18066d130(longlong param_1,longlong param_2,int param_3,int32_t *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  if (*(int *)(param_1 + 700) == 0) {
                    // WARNING: Subroutine does not return
    memset(param_1 + 0x2c0,0,0x6c);
  }
  iVar1 = *(int *)(param_1 + 0x2b8);
  if (iVar1 != 0) {
    if ((param_2 != 0) || (param_3 != 0)) {
      *(longlong *)(param_1 + 0x2c0 + (ulonglong)*(uint *)(param_1 + 700) * 8) = param_2;
      *(int *)(param_1 + 0x308 + (ulonglong)*(uint *)(param_1 + 700) * 4) = param_3;
      *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
      if (*(uint *)(param_1 + 700) < 10) {
        return 0;
      }
      *(int32_t *)(param_1 + 700) = 0;
      *param_4 = 8;
      return 0xffffffff;
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    return 0;
  }
  if (iVar1 == 0) {
    *(longlong *)(param_1 + 0x2c0) = param_2;
    *(int *)(param_1 + 0x308) = param_3;
    *(int32_t *)(param_1 + 700) = 1;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d210(byte *param_1,uint param_2,longlong param_3,code *param_4,uint64_t param_5)
void FUN_18066d210(byte *param_1,uint param_2,longlong param_3,code *param_4,uint64_t param_5)

{
  uint uVar1;
  int8_t auStack_58 [32];
  byte abStack_38 [16];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_58;
  if (param_1 < param_1 + param_2) {
    if (param_4 != (code *)0x0) {
      uVar1 = param_2;
      if (10 < param_2) {
        uVar1 = 10;
      }
      (*param_4)(param_5,param_1,abStack_38,uVar1);
      param_1 = abStack_38;
    }
    *(int32_t *)(param_3 + 0xc) = 0;
    if ((((9 < param_2) && ((*param_1 & 1) == 0)) &&
        (*(int32_t *)(param_3 + 0xc) = 1, param_1[3] == 0x9d)) &&
       ((param_1[4] == 1 && (param_1[5] == 0x2a)))) {
      *(uint *)(param_3 + 4) = *(ushort *)(param_1 + 6) & 0x3fff;
      *(uint *)(param_3 + 8) = *(ushort *)(param_1 + 8) & 0x3fff;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_58);
}



uint64_t FUN_18066d310(uint64_t *param_1)

{
  if (param_1 == (uint64_t *)0x0) {
    return 8;
  }
  if ((param_1[1] != 0) && (param_1[6] != 0)) {
    (**(code **)(param_1[1] + 0x18))();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[6] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    return 0;
  }
  *(int32_t *)(param_1 + 2) = 1;
  return 1;
}





// 函数: void FUN_18066d370(int32_t *param_1,int32_t param_2,longlong param_3,uint64_t param_4)
void FUN_18066d370(int32_t *param_1,int32_t param_2,longlong param_3,uint64_t param_4)

{
  ulonglong *puVar1;
  uint64_t uStackX_20;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uStackX_20 = param_4;
  if (param_3 != 0) {
    param_1[1] = 1;
    puVar1 = (ulonglong *)func_0x00018004b9a0();
    __stdio_common_vsprintf(*puVar1 | 2,param_1 + 2,0x4f,param_3,0,&uStackX_20);
    *(int8_t *)((longlong)param_1 + 0x57) = 0;
  }
  if (param_1[0x16] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  longjmp(param_1 + 0x18,*param_1);
}





// 函数: void FUN_18066d37f(int32_t *param_1,int32_t param_2,longlong param_3)
void FUN_18066d37f(int32_t *param_1,int32_t param_2,longlong param_3)

{
  ulonglong *puVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  if (param_3 != 0) {
    param_1[1] = 1;
    puVar1 = (ulonglong *)func_0x00018004b9a0();
    __stdio_common_vsprintf(*puVar1 | 2,param_1 + 2,0x4f,param_3,0);
    *(int8_t *)((longlong)param_1 + 0x57) = 0;
  }
  if (param_1[0x16] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  longjmp(param_1 + 0x18,*param_1);
}





// 函数: void FUN_18066d398(longlong param_1)
void FUN_18066d398(longlong param_1)

{
  ulonglong *puVar1;
  int32_t *unaff_RDI;
  
  *(int32_t *)(param_1 + 4) = 1;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  __stdio_common_vsprintf(*puVar1 | 2,unaff_RDI + 2,0x4f);
  *(int8_t *)((longlong)unaff_RDI + 0x57) = 0;
  if (unaff_RDI[0x16] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  longjmp(unaff_RDI + 0x18,*unaff_RDI);
}





// 函数: void FUN_18066d3e9(void)
void FUN_18066d3e9(void)

{
  int32_t *unaff_RDI;
  
  if (unaff_RDI[0x16] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  longjmp(unaff_RDI + 0x18,*unaff_RDI);
}





// 函数: void FUN_18066d3f4(void)
void FUN_18066d3f4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d410(code *param_1)
void FUN_18066d410(code *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (render_system_memory == 0) {
    LOCK();
    render_system_memory = render_system_memory + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = render_system_memory != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = render_system_memory;
    }
    render_system_memory = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(render_system_memory);
    if (render_system_memory == 0) {
      (*param_1)();
      render_system_memory = 1;
    }
    LeaveCriticalSection(render_system_memory);
    LOCK();
    iVar1 = render_system_memory + -1;
    UNLOCK();
    bVar4 = render_system_memory == 1;
    render_system_memory = iVar1;
    if (bVar4) {
      DeleteCriticalSection(render_system_memory);
      free(render_system_memory);
      render_system_memory = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d426(void)
void FUN_18066d426(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *unaff_RDI;
  bool bVar4;
  
  LOCK();
  render_system_memory = render_system_memory + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = render_system_memory != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = render_system_memory;
  }
  render_system_memory = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(render_system_memory);
  if (render_system_memory == 0) {
    (*unaff_RDI)();
    render_system_memory = 1;
  }
  LeaveCriticalSection(render_system_memory);
  LOCK();
  iVar1 = render_system_memory + -1;
  UNLOCK();
  bVar4 = render_system_memory == 1;
  render_system_memory = iVar1;
  if (bVar4) {
    DeleteCriticalSection(render_system_memory);
    free(render_system_memory);
    render_system_memory = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d483(void)
void FUN_18066d483(void)

{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  
  (*unaff_RDI)();
  render_system_memory = 1;
  LeaveCriticalSection(render_system_memory);
  LOCK();
  iVar1 = render_system_memory + -1;
  UNLOCK();
  bVar2 = render_system_memory == 1;
  render_system_memory = iVar1;
  if (bVar2) {
    DeleteCriticalSection(render_system_memory);
    free(render_system_memory);
    render_system_memory = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018066d575)
// WARNING: Removing unreachable block (ram,0x00018066d506)
// WARNING: Removing unreachable block (ram,0x00018066d4ea)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d4e0(void)
void FUN_18066d4e0(void)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte in_XCR0;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  bVar5 = false;
  bVar6 = false;
  bVar4 = false;
  if (*puVar1 != 0) {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 0xc);
    bVar6 = (uVar3 & 1) != 0;
    bVar4 = (uVar3 >> 9 & 1) != 0;
    bVar5 = (uVar3 >> 0x13 & 1) != 0;
    if ((((uVar3 & 0x18000000) == 0x18000000) && ((in_XCR0 & 6) == 6)) && (6 < *puVar1)) {
      cpuid_Extended_Feature_Enumeration_info(7);
    }
  }
  render_system_config_global_data = &unknown_var_7287_ptr;
  if (bVar4) {
    render_system_config_global_data = &unknown_var_656_ptr;
  }
  render_system_config_memory = &unknown_var_7997_ptr;
  if (bVar4) {
    render_system_config_memory = &unknown_var_1412_ptr;
  }
  render_system_config_memory = &unknown_var_2384_ptr;
  if (bVar6) {
    render_system_config_memory = &unknown_var_2608_ptr;
  }
  render_system_config_memory = FUN_1806714a0;
  if (bVar6) {
    render_system_config_memory = FUN_1806718d0;
  }
  render_system_config_memory = FUN_180673220;
  if (bVar4) {
    render_system_config_memory = FUN_180673850;
  }
  render_system_config_memory = FUN_180671eb0;
  if (bVar6) {
    render_system_config_memory = FUN_1806721d0;
  }
  if (bVar5) {
    render_system_config_memory = FUN_1806725c0;
  }
  render_system_config_memory = FUN_180672a50;
  if (bVar6) {
    render_system_config_memory = FUN_180672da0;
  }
  render_system_config_memory = FUN_180673360;
  if (bVar5) {
    render_system_config_memory = FUN_180673970;
  }
  render_system_config_memory = FUN_180673e10;
  if (bVar4) {
    render_system_config_memory = FUN_180673f50;
  }
  render_system_config_memory = FUN_180674040;
  if (bVar4) {
    render_system_config_memory = FUN_180674120;
  }
  render_system_config_memory = FUN_1806742a0;
  if (bVar4) {
    render_system_config_memory = FUN_1806743e0;
  }
  render_system_config_memory = FUN_1806744d0;
  if (bVar4) {
    render_system_config_memory = FUN_180674610;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d6f0(code *param_1)
void FUN_18066d6f0(code *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (render_system_memory == 0) {
    LOCK();
    render_system_memory = render_system_memory + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = render_system_memory != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = render_system_memory;
    }
    render_system_memory = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(render_system_memory);
    if (render_system_memory == 0) {
      (*param_1)();
      render_system_memory = 1;
    }
    LeaveCriticalSection(render_system_memory);
    LOCK();
    iVar1 = render_system_memory + -1;
    UNLOCK();
    bVar4 = render_system_memory == 1;
    render_system_memory = iVar1;
    if (bVar4) {
      DeleteCriticalSection(render_system_memory);
      free(render_system_memory);
      render_system_memory = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d706(void)
void FUN_18066d706(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *unaff_RDI;
  bool bVar4;
  
  LOCK();
  render_system_memory = render_system_memory + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = render_system_memory != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = render_system_memory;
  }
  render_system_memory = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(render_system_memory);
  if (render_system_memory == 0) {
    (*unaff_RDI)();
    render_system_memory = 1;
  }
  LeaveCriticalSection(render_system_memory);
  LOCK();
  iVar1 = render_system_memory + -1;
  UNLOCK();
  bVar4 = render_system_memory == 1;
  render_system_memory = iVar1;
  if (bVar4) {
    DeleteCriticalSection(render_system_memory);
    free(render_system_memory);
    render_system_memory = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d763(void)
void FUN_18066d763(void)

{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  
  (*unaff_RDI)();
  render_system_memory = 1;
  LeaveCriticalSection(render_system_memory);
  LOCK();
  iVar1 = render_system_memory + -1;
  UNLOCK();
  bVar2 = render_system_memory == 1;
  render_system_memory = iVar1;
  if (bVar2) {
    DeleteCriticalSection(render_system_memory);
    free(render_system_memory);
    render_system_memory = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018066d855)
// WARNING: Removing unreachable block (ram,0x00018066d7e6)
// WARNING: Removing unreachable block (ram,0x00018066d7ca)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




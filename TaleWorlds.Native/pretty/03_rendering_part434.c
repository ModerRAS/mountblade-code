#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part434.c - 5 个函数

// 函数: void FUN_1805050f0(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_1805050f0(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  int32_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  longlong lStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  
  uStack_88 = 0xfffffffffffffffe;
  lVar14 = *param_1;
  lVar17 = param_1[1];
  lVar12 = (longlong)(int)param_2[1] - (longlong)(int)lVar17;
  if (1 < lVar12) {
    lVar10 = (lVar12 + -2 >> 1) + 1;
    do {
      lVar10 = lVar10 + -1;
      uVar9 = (int)lVar10 + (int)lVar17;
      uVar7 = uVar9 >> 4;
      uVar8 = (ulonglong)(uVar9 + uVar7 * -0x10);
      lVar16 = *(longlong *)(lVar14 + 8 + (ulonglong)uVar7 * 8);
      lStack_128 = *(longlong *)(lVar16 + uVar8 * 0x50);
      *(uint64_t *)(lVar16 + uVar8 * 0x50) = 0;
      uStack_120 = *(uint64_t *)(lVar16 + 8 + uVar8 * 0x50);
      *(uint64_t *)(lVar16 + 8 + uVar8 * 0x50) = 0;
      uStack_118 = *(uint64_t *)(lVar16 + 0x10 + uVar8 * 0x50);
      *(uint64_t *)(lVar16 + 0x10 + uVar8 * 0x50) = 0;
      uStack_110 = *(int32_t *)(lVar16 + 0x18 + uVar8 * 0x50);
      *(int32_t *)(lVar16 + 0x18 + uVar8 * 0x50) = *(int32_t *)(lVar16 + 0x18 + uVar8 * 0x50);
      puVar1 = (uint64_t *)(lVar16 + 0x20 + uVar8 * 0x50);
      uStack_108 = *puVar1;
      uStack_100 = puVar1[1];
      puVar1 = (uint64_t *)(lVar16 + 0x30 + uVar8 * 0x50);
      uStack_f8 = *puVar1;
      uStack_f0 = puVar1[1];
      puVar1 = (uint64_t *)(lVar16 + 0x40 + uVar8 * 0x50);
      uStack_e8 = *puVar1;
      uStack_e0 = puVar1[1];
      lStack_78 = *param_1;
      lStack_70 = param_1[1];
      FUN_180505f80(&lStack_78,lVar10,lVar12,lVar10,&lStack_128);
      if (lStack_128 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    } while (lVar10 != 0);
  }
  uVar7 = *(uint *)(param_2 + 1);
  iVar4 = *(int *)(param_3 + 8);
  if ((int)uVar7 < iVar4) {
    lVar14 = *param_1;
    uVar9 = *(uint *)(param_1 + 1);
    lVar17 = (ulonglong)(uVar9 - (uVar9 & 0xfffffff0)) * 0x50;
    do {
      lVar16 = *param_2;
      uVar15 = uVar7 >> 4;
      lVar12 = *(longlong *)
                (*(longlong *)(lVar16 + 8 + (ulonglong)uVar15 * 8) +
                (ulonglong)(uVar7 + uVar15 * -0x10) * 0x50);
      lVar10 = *(longlong *)(*(longlong *)(lVar14 + 8 + (ulonglong)(uVar9 >> 4) * 8) + lVar17);
      fVar2 = *(float *)(lVar12 + 0xca4);
      fVar3 = *(float *)(lVar10 + 0xca4);
      if (fVar2 == fVar3) {
        bVar5 = *(float *)(lVar12 + 0xc90) < *(float *)(lVar10 + 0xc90);
      }
      else {
        bVar5 = fVar2 < fVar3;
      }
      if (bVar5) {
        uVar8 = (ulonglong)(uVar7 + uVar15 * -0x10);
        lVar12 = *(longlong *)(lVar16 + 8 + (ulonglong)uVar15 * 8);
        lStack_d8 = *(longlong *)(lVar12 + uVar8 * 0x50);
        *(uint64_t *)(lVar12 + uVar8 * 0x50) = 0;
        uStack_d0 = *(uint64_t *)(lVar12 + 8 + uVar8 * 0x50);
        *(uint64_t *)(lVar12 + 8 + uVar8 * 0x50) = 0;
        uStack_c8 = *(uint64_t *)(lVar12 + 0x10 + uVar8 * 0x50);
        *(uint64_t *)(lVar12 + 0x10 + uVar8 * 0x50) = 0;
        uStack_c0 = *(int32_t *)(lVar12 + 0x18 + uVar8 * 0x50);
        *(int32_t *)(lVar12 + 0x18 + uVar8 * 0x50) =
             *(int32_t *)(lVar12 + 0x18 + uVar8 * 0x50);
        puVar1 = (uint64_t *)(lVar12 + 0x20 + uVar8 * 0x50);
        uStack_b8 = *puVar1;
        uStack_b0 = puVar1[1];
        puVar1 = (uint64_t *)(lVar12 + 0x30 + uVar8 * 0x50);
        uStack_a8 = *puVar1;
        uStack_a0 = puVar1[1];
        puVar1 = (uint64_t *)(lVar12 + 0x40 + uVar8 * 0x50);
        uStack_98 = *puVar1;
        uStack_90 = puVar1[1];
        plVar13 = (longlong *)(*(longlong *)(lVar14 + 8 + (ulonglong)(uVar9 >> 4) * 8) + lVar17);
        plVar11 = (longlong *)
                  (*(longlong *)(lVar16 + 8 + (ulonglong)uVar15 * 8) +
                  (ulonglong)(uVar7 + uVar15 * -0x10) * 0x50);
        if (plVar11 != plVar13) {
          plVar11[1] = *plVar11;
          lVar14 = *plVar11;
          *plVar11 = 0;
          lVar12 = plVar11[1];
          plVar11[1] = 0;
          lVar10 = plVar11[2];
          plVar11[2] = 0;
          lVar6 = plVar11[3];
          *(int *)(plVar11 + 3) = (int)plVar11[3];
          lVar16 = *plVar11;
          *plVar11 = lVar14;
          plVar11[1] = lVar12;
          plVar11[2] = lVar10;
          *(int *)(plVar11 + 3) = (int)lVar6;
          if (lVar16 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar16);
          }
          lVar14 = *plVar11;
          *plVar11 = *plVar13;
          *plVar13 = lVar14;
          lVar14 = plVar11[1];
          plVar11[1] = plVar13[1];
          plVar13[1] = lVar14;
          lVar14 = plVar11[2];
          plVar11[2] = plVar13[2];
          plVar13[2] = lVar14;
          lVar14 = plVar11[3];
          *(int *)(plVar11 + 3) = (int)plVar13[3];
          *(int *)(plVar13 + 3) = (int)lVar14;
        }
        lVar14 = plVar13[5];
        plVar11[4] = plVar13[4];
        plVar11[5] = lVar14;
        lVar14 = plVar13[7];
        plVar11[6] = plVar13[6];
        plVar11[7] = lVar14;
        lVar14 = plVar13[9];
        plVar11[8] = plVar13[8];
        plVar11[9] = lVar14;
        lStack_68 = *param_1;
        lStack_60 = param_1[1];
        FUN_180505f80(&lStack_68,0,(longlong)(int)param_2[1] - (longlong)(int)uVar9,0,&lStack_d8);
        if (lStack_d8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lVar14 = *param_1;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar4);
  }
  lStack_58 = *param_2;
  lStack_50 = param_2[1];
  lStack_48 = *param_1;
  lStack_40 = param_1[1];
  FUN_180505c50(&lStack_48,&lStack_58);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180505560(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4,0xfffffffffffffffe);
  }
  plVar2 = (longlong *)*param_1;
  *param_1 = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[1] = param_2[1];
  plVar1 = param_1 + 2;
  if (plVar1 != param_2 + 2) {
    lVar3 = param_2[3];
    lVar4 = param_2[2];
    lVar11 = lVar3 - lVar4;
    uVar12 = lVar11 >> 3;
    lVar9 = *plVar1;
    if ((ulonglong)(param_1[4] - lVar9 >> 3) < uVar12) {
      if (uVar12 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_18062b420(system_memory_pool_ptr,uVar12 * 8,(char)param_1[5]);
      }
      if (lVar4 != lVar3) {
                    // WARNING: Subroutine does not return
        memmove(lVar9,lVar4,lVar11);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar1 = lVar9;
      lVar9 = uVar12 * 8 + lVar9;
      param_1[3] = lVar9;
      param_1[4] = lVar9;
    }
    else {
      lVar5 = param_1[3];
      uVar10 = lVar5 - lVar9 >> 3;
      if (uVar10 < uVar12) {
        lVar11 = lVar4 + uVar10 * 8;
        if (lVar4 != lVar11) {
                    // WARNING: Subroutine does not return
          memmove(lVar9,lVar4);
        }
        if (lVar11 != lVar3) {
                    // WARNING: Subroutine does not return
          memmove(lVar5,lVar11,lVar3 - lVar11);
        }
        param_1[3] = lVar5;
      }
      else {
        if (lVar4 != lVar3) {
                    // WARNING: Subroutine does not return
          memmove(lVar9,lVar4,lVar11);
        }
        param_1[3] = lVar9;
      }
    }
  }
  uVar6 = *(int32_t *)((longlong)param_2 + 0x34);
  lVar3 = param_2[7];
  uVar7 = *(int32_t *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(int32_t *)((longlong)param_1 + 0x34) = uVar6;
  *(int *)(param_1 + 7) = (int)lVar3;
  *(int32_t *)((longlong)param_1 + 0x3c) = uVar7;
  uVar6 = *(int32_t *)((longlong)param_2 + 0x44);
  lVar3 = param_2[9];
  uVar7 = *(int32_t *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(int32_t *)((longlong)param_1 + 0x44) = uVar6;
  *(int *)(param_1 + 9) = (int)lVar3;
  *(int32_t *)((longlong)param_1 + 0x4c) = uVar7;
  *(char *)(param_1 + 10) = (char)param_2[10];
  plVar1 = (longlong *)param_2[0xb];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[0xb];
  param_1[0xb] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[0xc];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[0xc];
  param_1[0xc] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[0xd];
  param_1[0xd] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[0xe];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[0xe];
  param_1[0xe] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[0xf];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[0xf];
  param_1[0xf] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[0x10];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[0x10];
  param_1[0x10] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(char *)(param_1 + 0x11) = (char)param_2[0x11];
  *(int32_t *)((longlong)param_1 + 0x8c) = *(int32_t *)((longlong)param_2 + 0x8c);
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(int32_t *)((longlong)param_1 + 0x94) = *(int32_t *)((longlong)param_2 + 0x94);
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  uVar8 = *(uint64_t *)((longlong)param_2 + 0xa4);
  *(uint64_t *)((longlong)param_1 + 0x9c) = *(uint64_t *)((longlong)param_2 + 0x9c);
  *(uint64_t *)((longlong)param_1 + 0xa4) = uVar8;
  uVar8 = *(uint64_t *)((longlong)param_2 + 0xb4);
  *(uint64_t *)((longlong)param_1 + 0xac) = *(uint64_t *)((longlong)param_2 + 0xac);
  *(uint64_t *)((longlong)param_1 + 0xb4) = uVar8;
  uVar8 = *(uint64_t *)((longlong)param_2 + 0xc4);
  *(uint64_t *)((longlong)param_1 + 0xbc) = *(uint64_t *)((longlong)param_2 + 0xbc);
  *(uint64_t *)((longlong)param_1 + 0xc4) = uVar8;
  uVar8 = *(uint64_t *)((longlong)param_2 + 0xd4);
  *(uint64_t *)((longlong)param_1 + 0xcc) = *(uint64_t *)((longlong)param_2 + 0xcc);
  *(uint64_t *)((longlong)param_1 + 0xd4) = uVar8;
  uVar8 = *(uint64_t *)((longlong)param_2 + 0xe4);
  *(uint64_t *)((longlong)param_1 + 0xdc) = *(uint64_t *)((longlong)param_2 + 0xdc);
  *(uint64_t *)((longlong)param_1 + 0xe4) = uVar8;
  uVar8 = *(uint64_t *)((longlong)param_2 + 0xf4);
  *(uint64_t *)((longlong)param_1 + 0xec) = *(uint64_t *)((longlong)param_2 + 0xec);
  *(uint64_t *)((longlong)param_1 + 0xf4) = uVar8;
  uVar8 = *(uint64_t *)((longlong)param_2 + 0x104);
  *(uint64_t *)((longlong)param_1 + 0xfc) = *(uint64_t *)((longlong)param_2 + 0xfc);
  *(uint64_t *)((longlong)param_1 + 0x104) = uVar8;
  uVar8 = *(uint64_t *)((longlong)param_2 + 0x114);
  *(uint64_t *)((longlong)param_1 + 0x10c) = *(uint64_t *)((longlong)param_2 + 0x10c);
  *(uint64_t *)((longlong)param_1 + 0x114) = uVar8;
  *(int32_t *)((longlong)param_1 + 0x11c) = *(int32_t *)((longlong)param_2 + 0x11c);
  *(char *)(param_1 + 0x24) = (char)param_2[0x24];
  *(int8_t *)((longlong)param_1 + 0x121) = *(int8_t *)((longlong)param_2 + 0x121);
  *(int8_t *)((longlong)param_1 + 0x122) = *(int8_t *)((longlong)param_2 + 0x122);
  *(int8_t *)((longlong)param_1 + 0x123) = *(int8_t *)((longlong)param_2 + 0x123);
  *(int8_t *)((longlong)param_1 + 0x124) = *(int8_t *)((longlong)param_2 + 0x124);
  *(int8_t *)((longlong)param_1 + 0x125) = *(int8_t *)((longlong)param_2 + 0x125);
  *(int8_t *)((longlong)param_1 + 0x126) = *(int8_t *)((longlong)param_2 + 0x126);
  *(int8_t *)((longlong)param_1 + 0x127) = *(int8_t *)((longlong)param_2 + 0x127);
  lVar3 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = lVar3;
  lVar3 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = lVar3;
  lVar3 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = lVar3;
  *(int *)(param_1 + 0x2b) = (int)param_2[0x2b];
  *(int32_t *)((longlong)param_1 + 0x15c) = *(int32_t *)((longlong)param_2 + 0x15c);
  *(int *)(param_1 + 0x2c) = (int)param_2[0x2c];
  *(int32_t *)((longlong)param_1 + 0x164) = *(int32_t *)((longlong)param_2 + 0x164);
  *(int *)(param_1 + 0x2d) = (int)param_2[0x2d];
  *(int32_t *)((longlong)param_1 + 0x16c) = *(int32_t *)((longlong)param_2 + 0x16c);
  *(char *)(param_1 + 0x2e) = (char)param_2[0x2e];
  return param_1;
}



longlong * FUN_1805059d0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  int32_t uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  longlong lStack_38;
  longlong lStack_30;
  
  lVar3 = *param_3;
  lVar4 = *param_2;
  uVar9 = *(uint *)(param_2 + 1);
  while( true ) {
    while( true ) {
      lVar5 = *(longlong *)
               (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar9 >> 4) * 8) +
               (ulonglong)(uVar9 + (uVar9 >> 4) * -0x10) * 0x50);
      fVar1 = *(float *)(lVar5 + 0xca4);
      fVar2 = *(float *)(*param_4 + 0xca4);
      if (fVar1 == fVar2) {
        bVar6 = *(float *)(lVar5 + 0xc90) < *(float *)(*param_4 + 0xc90);
      }
      else {
        bVar6 = fVar1 < fVar2;
      }
      if (!bVar6) break;
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 1) = uVar9;
    }
    *(int *)(param_3 + 1) = (int)param_3[1] + -1;
    uVar9 = *(uint *)(param_3 + 1);
    while( true ) {
      lVar5 = *(longlong *)
               (*(longlong *)(lVar3 + 8 + (ulonglong)(uVar9 >> 4) * 8) +
               (ulonglong)(uVar9 + (uVar9 >> 4) * -0x10) * 0x50);
      fVar1 = *(float *)(*param_4 + 0xca4);
      fVar2 = *(float *)(lVar5 + 0xca4);
      if (fVar1 == fVar2) {
        bVar6 = *(float *)(*param_4 + 0xc90) < *(float *)(lVar5 + 0xc90);
      }
      else {
        bVar6 = fVar1 < fVar2;
      }
      if (!bVar6) break;
      uVar9 = uVar9 - 1;
      *(uint *)(param_3 + 1) = uVar9;
    }
    lVar5 = param_2[1];
    if ((int)uVar9 <= (int)lVar5) break;
    uVar9 = (uint)param_3[1] >> 4;
    lVar7 = *(longlong *)(*param_3 + 8 + (ulonglong)uVar9 * 8) +
            (ulonglong)((uint)param_3[1] + uVar9 * -0x10) * 0x50;
    uVar9 = (uint)param_2[1] >> 4;
    plVar8 = (longlong *)
             ((ulonglong)((uint)param_2[1] + uVar9 * -0x10) * 0x50 +
             *(longlong *)(*param_2 + 8 + (ulonglong)uVar9 * 8));
    lStack_78 = *plVar8;
    *plVar8 = 0;
    lStack_70 = plVar8[1];
    plVar8[1] = 0;
    lStack_68 = plVar8[2];
    plVar8[2] = 0;
    uStack_60 = (int32_t)plVar8[3];
    *(int *)(plVar8 + 3) = (int)plVar8[3];
    lStack_58 = plVar8[4];
    lStack_50 = plVar8[5];
    uStack_48 = (int32_t)plVar8[6];
    uStack_44 = *(int32_t *)((longlong)plVar8 + 0x34);
    uStack_40 = (int32_t)plVar8[7];
    uStack_3c = *(int32_t *)((longlong)plVar8 + 0x3c);
    lStack_38 = plVar8[8];
    lStack_30 = plVar8[9];
    FUN_1805021f0(plVar8,lVar7);
    FUN_1805021f0(lVar7,&lStack_78);
    if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uVar9 = (int)lVar5 + 1;
    *(uint *)(param_2 + 1) = uVar9;
  }
  lVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar3;
  return param_1;
}





// 函数: void FUN_180505c50(longlong *param_1,longlong *param_2)
void FUN_180505c50(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  int32_t uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  longlong lStack_48;
  longlong lStack_40;
  
  lVar5 = param_1[1];
  uVar8 = (ulonglong)(int)param_2[1];
  if (1 < (longlong)(uVar8 - (longlong)(int)lVar5)) {
    lVar2 = *param_1;
    uVar9 = (uint)param_1[1];
    do {
      lVar3 = *param_2;
      lVar4 = param_2[1];
      uVar7 = (int)lVar4 - 1;
      uVar1 = (ulonglong)(uVar7 >> 4);
      lVar10 = (ulonglong)(uVar7 & 0xf) * 0x50;
      plVar6 = (longlong *)(*(longlong *)(lVar3 + 8 + uVar1 * 8) + lVar10);
      lStack_88 = *plVar6;
      *plVar6 = 0;
      lStack_80 = plVar6[1];
      plVar6[1] = 0;
      lStack_78 = plVar6[2];
      plVar6[2] = 0;
      uStack_70 = (int32_t)plVar6[3];
      *(int *)(plVar6 + 3) = (int)plVar6[3];
      lStack_68 = plVar6[4];
      lStack_60 = plVar6[5];
      uStack_58 = (int32_t)plVar6[6];
      uStack_54 = *(int32_t *)((longlong)plVar6 + 0x34);
      uStack_50 = (int32_t)plVar6[7];
      uStack_4c = *(int32_t *)((longlong)plVar6 + 0x3c);
      lStack_48 = plVar6[8];
      lStack_40 = plVar6[9];
      FUN_1805021f0(*(longlong *)(lVar3 + 8 + uVar1 * 8) + lVar10,
                    *(longlong *)(lVar2 + (ulonglong)(uVar9 >> 4) * 8 + 8) +
                    (ulonglong)(uVar9 + (uVar9 >> 4) * -0x10) * 0x50);
      lStack_98 = *param_1;
      lStack_90 = param_1[1];
      FUN_180505f80(&lStack_98,0,((longlong)(int)lVar4 - (longlong)(int)uVar9) + -1,0,&lStack_88);
      if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
      *(uint *)(param_2 + 1) = uVar7;
    } while (1 < (longlong)(int)uVar7 - (longlong)(int)lVar5);
  }
  return;
}





// 函数: void FUN_180505e10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180505e10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  longlong lVar5;
  
  lVar1 = param_4 * 2 + 2;
  if (lVar1 < param_3) {
    lVar5 = lVar1 * 0xcb0;
    fVar2 = *(float *)(lVar5 + 0xca4 + param_1);
    fVar3 = *(float *)(lVar5 + -0xc + param_1);
    if (fVar2 == fVar3) {
      bVar4 = *(float *)(lVar5 + 0xc90 + param_1) < *(float *)(lVar5 + -0x20 + param_1);
    }
    else {
      bVar4 = fVar2 < fVar3;
    }
    lVar5 = param_4 * 2 + 1;
    if (!bVar4) {
      lVar5 = lVar1;
    }
                    // WARNING: Subroutine does not return
    memcpy(param_4 * 0xcb0 + param_1,lVar5 * 0xcb0 + param_1,0xcb0);
  }
  if (lVar1 == param_3) {
                    // WARNING: Subroutine does not return
    memcpy(param_4 * 0xcb0 + param_1,lVar1 * 0xcb0 + -0xcb0 + param_1,0xcb0);
  }
  if (param_2 < param_4) {
    lVar1 = (param_4 + -1 >> 1) * 0xcb0 + param_1;
    if (*(float *)(lVar1 + 0xca4) == *(float *)(param_5 + 0xca4)) {
      bVar4 = *(float *)(lVar1 + 0xc90) < *(float *)(param_5 + 0xc90);
    }
    else {
      bVar4 = *(float *)(lVar1 + 0xca4) < *(float *)(param_5 + 0xca4);
    }
    if (bVar4) {
                    // WARNING: Subroutine does not return
      memcpy(param_4 * 0xcb0 + param_1,lVar1,0xcb0);
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy(param_4 * 0xcb0 + param_1,param_5,0xcb0);
  return;
}





// 函数: void FUN_180505e2d(longlong param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_180505e2d(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong in_stack_00000050;
  
  if (unaff_RSI < param_3) {
    lVar4 = unaff_RSI * 0xcb0;
    fVar1 = *(float *)(lVar4 + 0xca4 + param_1);
    fVar2 = *(float *)(lVar4 + -0xc + param_1);
    if (fVar1 == fVar2) {
      bVar3 = *(float *)(lVar4 + 0xc90 + param_1) < *(float *)(lVar4 + -0x20 + param_1);
    }
    else {
      bVar3 = fVar1 < fVar2;
    }
    lVar4 = unaff_RSI + -1;
    if (!bVar3) {
      lVar4 = unaff_RSI;
    }
                    // WARNING: Subroutine does not return
    memcpy(param_4 * 0xcb0 + param_1,lVar4 * 0xcb0 + param_1,0xcb0);
  }
  if (unaff_RSI == param_3) {
                    // WARNING: Subroutine does not return
    memcpy(param_4 * 0xcb0 + param_1,unaff_RSI * 0xcb0 + -0xcb0 + param_1,0xcb0);
  }
  if (param_2 < param_4) {
    lVar4 = (param_4 + -1 >> 1) * 0xcb0 + param_1;
    if (*(float *)(lVar4 + 0xca4) == *(float *)(in_stack_00000050 + 0xca4)) {
      bVar3 = *(float *)(lVar4 + 0xc90) < *(float *)(in_stack_00000050 + 0xc90);
    }
    else {
      bVar3 = *(float *)(lVar4 + 0xca4) < *(float *)(in_stack_00000050 + 0xca4);
    }
    if (bVar3) {
                    // WARNING: Subroutine does not return
      memcpy(param_4 * 0xcb0 + param_1,lVar4,0xcb0);
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy(param_4 * 0xcb0 + param_1,in_stack_00000050,0xcb0);
  return;
}





// 函数: void FUN_180505eb7(void)
void FUN_180505eb7(void)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R9;
  
                    // WARNING: Subroutine does not return
  memcpy(in_R9 * 0xcb0 + unaff_RDI,unaff_RSI * 0xcb0 + -0xcb0 + unaff_RDI,0xcb0);
}






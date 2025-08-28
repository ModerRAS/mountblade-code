#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part574.c - 6 个函数

// 函数: void FUN_18057f420(int64_t param_1,float *param_2,int64_t param_3)
void FUN_18057f420(int64_t param_1,float *param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  void **ppuVar4;
  int8_t auStack_158 [32];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_11c;
  uint64_t uStack_118;
  int32_t uStack_110;
  float fStack_10c;
  uint64_t uStack_108;
  int32_t uStack_100;
  int8_t uStack_fc;
  byte bStack_fb;
  int16_t uStack_fa;
  void *puStack_e8;
  uint64_t uStack_e0;
  int8_t uStack_d8;
  int64_t lStack_d0;
  void *puStack_c8;
  uint64_t uStack_c0;
  int8_t uStack_b8;
  uint64_t uStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  float fStack_84;
  void **ppuStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int iStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int32_t uStack_50;
  uint64_t uStack_4c;
  uint64_t uStack_44;
  int iStack_38;
  uint64_t uStack_28;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  puStack_c8 = &unknown_var_6432_ptr;
  uStack_c0 = 2;
  uStack_b8 = 0;
  uStack_e0 = 2;
  uStack_d8 = 0;
  puStack_e8 = &unknown_var_1904_ptr;
  lVar1 = *(int64_t *)(param_1 + 0x3c8);
  if (lVar1 != 0) {
    lStack_d0 = lVar1;
  }
  ppuVar4 = &puStack_c8;
  if (lVar1 != 0) {
    ppuVar4 = &puStack_e8;
  }
  *(int32_t *)((int64_t)ppuVar4 + 0xc) = 0x31b789;
  fStack_120 = param_2[6] - param_2[2];
  fStack_124 = param_2[5] - param_2[1];
  fStack_128 = param_2[4] - *param_2;
  fStack_138 = *param_2;
  fStack_134 = param_2[1];
  fStack_130 = param_2[2];
  fStack_12c = param_2[3];
  uStack_11c = 0x7f7fffff;
  uStack_88 = func_0x00018023a1e0(&fStack_128);
  uStack_118 = CONCAT44(uStack_118._4_4_,uStack_88);
  fStack_84 = param_2[8];
  fStack_a8 = fStack_138;
  fStack_a4 = fStack_134;
  fStack_a0 = fStack_130;
  fStack_9c = fStack_12c;
  fStack_98 = fStack_128;
  fStack_94 = fStack_124;
  fStack_90 = fStack_120;
  uStack_8c = uStack_11c;
  iStack_38 = 0;
  plVar2 = *(int64_t **)
            (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18) + 0x28f8) + 0x318);
  ppuStack_80 = ppuVar4;
  (**(code **)(*plVar2 + 0x148))(plVar2,&fStack_a8,&lStack_78);
  if (0 < iStack_38) {
    uStack_118 = 0;
    uStack_108 = 0xffffffffffffffff;
    uStack_100 = 0xffffffff;
    uStack_fc = 0xff;
    bStack_fb = 0;
    if (iStack_64 == 1) {
      uStack_110 = 0;
    }
    else {
      uStack_110 = 1;
      uStack_118 = 0;
      if (lStack_78 != 0) {
        uStack_118 = *(uint64_t *)(lStack_78 + 0x10);
      }
    }
    fStack_10c = SQRT((param_2[1] - fStack_58) * (param_2[1] - fStack_58) +
                      (*param_2 - fStack_5c) * (*param_2 - fStack_5c) +
                      (param_2[2] - fStack_54) * (param_2[2] - fStack_54));
    if (lStack_70 != 0) {
      uStack_108 = CONCAT44(0xffffffff,*(int32_t *)(lStack_70 + 100));
      bStack_fb = ~*(byte *)(lStack_70 + 0x48) & 1;
    }
    puVar3 = (uint64_t *)((int64_t)*(int *)(param_3 + 0x800) * 0x40 + param_3);
    *puVar3 = CONCAT44(fStack_58,fStack_5c);
    puVar3[1] = CONCAT44(uStack_50,fStack_54);
    puVar3[2] = uStack_4c;
    puVar3[3] = uStack_44;
    *(int32_t *)(puVar3 + 4) = (int32_t)uStack_118;
    *(int32_t *)((int64_t)puVar3 + 0x24) = uStack_118._4_4_;
    *(int32_t *)(puVar3 + 5) = uStack_110;
    *(float *)((int64_t)puVar3 + 0x2c) = fStack_10c;
    puVar3[6] = uStack_108;
    puVar3[7] = CONCAT26(uStack_fa,CONCAT15(bStack_fb,0xffffffffff));
    *(int *)(param_3 + 0x800) = *(int *)(param_3 + 0x800) + 1;
  }
  iStack_38 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_158);
}



uint64_t FUN_18057f6e0(int64_t param_1,int64_t param_2,float *param_3,float param_4,
                       int64_t param_5,uint *param_6)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar3 = *(int *)(param_1 + 0x2a0);
  uVar5 = (uint64_t)iVar3;
  lVar6 = *(int64_t *)(param_1 + 0x10);
  if (((*(int *)(param_2 + 0x10) != iVar3) &&
      (((iVar3 < 0 || (*(int *)(param_2 + 0x10) != *(int *)(uVar5 * 0xa60 + 0x3604 + lVar6))) &&
       (*(int *)(param_2 + 0x720) == 0)))) &&
     (uVar5 = func_0x00018052da70(param_2), (char)uVar5 == '\0')) {
    lVar4 = *(int64_t *)(param_2 + 0x20);
    fVar10 = (param_3[5] + param_3[1]) * 0.5;
    fVar12 = param_3[6];
    fVar11 = (*param_3 + param_3[4]) * 0.5;
    fVar9 = *(float *)(lVar4 + 0x10) - fVar10;
    fVar1 = param_3[2];
    fVar7 = *(float *)(lVar4 + 0xc) - fVar11;
    if ((*(uint *)(param_2 + 0x56c) >> 0xb & 1) == 0) {
      fVar8 = *(float *)(lVar6 + 0x87b724);
    }
    else {
      fVar8 = *(float *)(lVar4 + 0x1d0);
    }
    uVar5 = *(uint64_t *)(param_2 + 0x6d8);
    param_4 = *(float *)(uVar5 + 0x8c0) * 1.5 + fVar8 + param_4;
    param_4 = param_4 * param_4;
    if ((fVar9 * fVar9 + fVar7 * fVar7 < param_4) &&
       (uVar5 = FUN_180586ae0(param_4,param_3), (char)uVar5 != '\0')) {
      LOCK();
      uVar2 = *param_6;
      *param_6 = *param_6 + 1;
      UNLOCK();
      if ((int)uVar2 < 0x80) {
        fVar10 = fVar10 - *(float *)(lVar4 + 0x10);
        fVar11 = fVar11 - *(float *)(lVar4 + 0xc);
        fVar12 = (fVar12 + fVar1) * 0.5 - *(float *)(lVar4 + 0x14);
        uVar5 = CONCAT44(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12,
                         *(int32_t *)(param_2 + 0x10));
        *(uint64_t *)(param_5 + (int64_t)(int)uVar2 * 8) = uVar5;
      }
      else {
        LOCK();
        uVar5 = (uint64_t)*param_6;
        *param_6 = *param_6 - 1;
        UNLOCK();
      }
    }
  }
  return uVar5;
}



uint64_t FUN_18057f743(float param_1,uint64_t param_2,float *param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  int64_t lVar3;
  uint in_EAX;
  uint64_t uVar4;
  int64_t unaff_RBX;
  int64_t in_R9;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int64_t in_stack_00000080;
  uint *in_stack_00000088;
  
  lVar3 = *(int64_t *)(unaff_RBX + 0x20);
  fVar8 = (param_3[5] + param_3[1]) * param_1;
  fVar10 = param_3[6];
  fVar9 = (*param_3 + param_3[4]) * param_1;
  fVar7 = *(float *)(lVar3 + 0x10) - fVar8;
  fVar1 = param_3[2];
  fVar5 = *(float *)(lVar3 + 0xc) - fVar9;
  if ((in_EAX >> 0xb & 1) == 0) {
    fVar6 = *(float *)(in_R9 + 0x87b724);
  }
  else {
    fVar6 = *(float *)(lVar3 + 0x1d0);
  }
  uVar4 = *(uint64_t *)(unaff_RBX + 0x6d8);
  param_4 = *(float *)(uVar4 + 0x8c0) * 1.5 + fVar6 + param_4;
  param_4 = param_4 * param_4;
  if (fVar7 * fVar7 + fVar5 * fVar5 < param_4) {
    uVar4 = FUN_180586ae0(param_4,param_3);
    if ((char)uVar4 != '\0') {
      LOCK();
      uVar2 = *in_stack_00000088;
      *in_stack_00000088 = *in_stack_00000088 + 1;
      UNLOCK();
      if ((int)uVar2 < 0x80) {
        fVar8 = fVar8 - *(float *)(lVar3 + 0x10);
        fVar9 = fVar9 - *(float *)(lVar3 + 0xc);
        fVar10 = (fVar10 + fVar1) * param_1 - *(float *)(lVar3 + 0x14);
        uVar4 = CONCAT44(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10,
                         *(int32_t *)(unaff_RBX + 0x10));
        *(uint64_t *)(in_stack_00000080 + (int64_t)(int)uVar2 * 8) = uVar4;
      }
      else {
        LOCK();
        uVar4 = (uint64_t)*in_stack_00000088;
        *in_stack_00000088 = *in_stack_00000088 - 1;
        UNLOCK();
      }
    }
  }
  return uVar4;
}





// 函数: void FUN_18057f878(void)
void FUN_18057f878(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18057f880(int64_t param_1,float *param_2,int64_t param_3,int *param_4)
void FUN_18057f880(int64_t param_1,float *param_2,int64_t param_3,int *param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int8_t auStack_5e8 [32];
  int64_t **pplStack_5c8;
  int64_t **pplStack_5c0;
  int iStack_5b8;
  float afStack_5b4 [3];
  int64_t alStack_5a8 [2];
  int64_t *plStack_598;
  int iStack_590;
  int iStack_58c;
  int iStack_588;
  int iStack_580;
  int iStack_57c;
  uint64_t uStack_578;
  uint64_t uStack_570;
  float fStack_568;
  int *piStack_560;
  int64_t *plStack_558;
  int64_t lStack_550;
  uint64_t uStack_548;
  uint64_t uStack_540;
  int64_t *plStack_538;
  int *piStack_530;
  int64_t *plStack_528;
  int64_t lStack_520;
  uint64_t uStack_518;
  uint64_t uStack_510;
  int64_t *plStack_508;
  int *piStack_500;
  int64_t **pplStack_4f8;
  uint64_t uStack_4f0;
  int64_t alStack_4e8 [128];
  uint64_t uStack_e8;
  
  uStack_4f0 = 0xfffffffffffffffe;
  uStack_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_5e8;
  lVar7 = *(int64_t *)(param_1 + 0x10);
  fVar16 = *(float *)(lVar7 + 0x87b720);
  if (*(float *)(lVar7 + 0x87b720) <= *(float *)(lVar7 + 0x87b724)) {
    fVar16 = *(float *)(lVar7 + 0x87b724);
  }
  fVar16 = *(float *)(lVar7 + 0x87b71c) * 1.5 + fVar16;
  fVar14 = *param_2 - param_2[4];
  fVar15 = fVar14 * fVar14 + (param_2[1] - param_2[5]) * (param_2[1] - param_2[5]);
  fVar14 = (float)(fVar15 <= 1.1754944e-38) * 1.1754944e-38;
  fVar15 = fVar15 + fVar14;
  auVar12 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar15));
  fVar14 = auVar12._0_4_;
  fVar13 = 3.0 - fVar15 * fVar14 * fVar14;
  afStack_5b4[0] = fVar14 * 0.5 * fVar13 * fVar15 * 0.5 + param_2[8] + 0.05;
  iStack_5b8 = 0;
  alStack_5a8[0] = param_3;
  piStack_560 = param_4;
  if (*(float *)(lVar7 + 0x98d240) * 10.0 < fVar16) {
    plStack_558 = (int64_t *)(lVar7 + 0x86e988);
    pplStack_4f8 = &plStack_528;
    uStack_540 = afStack_5b4;
    plStack_538 = alStack_5a8;
    piStack_530 = &iStack_5b8;
    uStack_518 = FUN_180588260;
    uStack_510 = FUN_1805881e0;
    lStack_550 = param_1;
    uStack_548 = (code *)param_2;
    plStack_528 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,system_allocation_flags);
    *plStack_528 = (int64_t)plStack_558;
    plStack_528[1] = lStack_550;
    *(int32_t *)(plStack_528 + 2) = (int32_t)uStack_548;
    *(int32_t *)((int64_t)plStack_528 + 0x14) = uStack_548._4_4_;
    *(int32_t *)(plStack_528 + 3) = (int32_t)uStack_540;
    *(int32_t *)((int64_t)plStack_528 + 0x1c) = uStack_540._4_4_;
    plStack_528[4] = (int64_t)plStack_538;
    plStack_528[5] = (int64_t)piStack_530;
    pplStack_5c0 = &plStack_528;
  }
  else {
    uStack_578 = 0;
    uStack_570 = 0;
    plStack_598 = (int64_t *)0x0;
    pplStack_5c8 = &plStack_598;
    FUN_1804fd940(lVar7 + 0x98d230,fVar13,param_2 + 4,fVar16);
    if (plStack_598 != (int64_t *)0x0) {
      lVar7 = 0;
      plVar3 = plStack_598;
      iVar8 = iStack_58c;
      iVar4 = iStack_590;
      do {
        alStack_4e8[lVar7] = *plVar3;
        lVar7 = lVar7 + 1;
        if (0x7f < lVar7) break;
        lVar9 = *(int64_t *)(param_1 + 0x10);
        plVar3 = (int64_t *)plVar3[3];
        while (plVar3 == (int64_t *)0x0) {
          if (iVar4 == iStack_580) {
            if (iVar8 == iStack_57c) break;
            iVar8 = iVar8 + 1;
            iVar4 = iStack_588;
            iStack_58c = iVar8;
          }
          else {
            iVar4 = iVar4 + 1;
          }
          iStack_590 = iVar4;
          plVar3 = *(int64_t **)
                    ((int64_t)(iStack_58c * *(int *)(lVar9 + 0x98d238) + iVar4) * 9 +
                    *(int64_t *)(lVar9 + 0x98d248));
        }
        if (plVar3 != (int64_t *)0x0) {
          fVar16 = uStack_570._4_4_ - uStack_578._4_4_;
          fVar14 = (float)uStack_570 - (float)uStack_578;
          do {
            fVar13 = ((*(float *)(plVar3 + 1) - (float)uStack_578) * fVar14 +
                     (*(float *)((int64_t)plVar3 + 0xc) - uStack_578._4_4_) * fVar16) /
                     (fVar14 * fVar14 + fVar16 * fVar16);
            if (0.0 <= fVar13) {
              if (1.0 <= fVar13) {
                fVar13 = 1.0;
              }
            }
            else {
              fVar13 = 0.0;
            }
            fVar15 = *(float *)((int64_t)plVar3 + 0xc) - (uStack_578._4_4_ + fVar13 * fVar16);
            fVar13 = *(float *)(plVar3 + 1) - (fVar13 * fVar14 + (float)uStack_578);
            if (fVar13 * fVar13 + fVar15 * fVar15 <= fStack_568) break;
            plVar3 = (int64_t *)plVar3[3];
            while (plVar3 == (int64_t *)0x0) {
              if (iVar4 == iStack_580) {
                if (iVar8 == iStack_57c) break;
                iVar8 = iVar8 + 1;
                iVar4 = iStack_588;
                iStack_58c = iVar8;
              }
              else {
                iVar4 = iVar4 + 1;
              }
              iStack_590 = iVar4;
              plVar3 = *(int64_t **)
                        ((int64_t)(iStack_58c * *(int *)(lVar9 + 0x98d238) + iVar4) * 9 +
                        *(int64_t *)(lVar9 + 0x98d248));
            }
          } while (plVar3 != (int64_t *)0x0);
        }
      } while (plVar3 != (int64_t *)0x0);
    }
    pplStack_4f8 = &plStack_558;
    uStack_510 = (code *)afStack_5b4;
    plStack_508 = alStack_5a8;
    piStack_500 = &iStack_5b8;
    uStack_548 = FUN_180588350;
    uStack_540 = (float *)&unknown_var_1712_ptr;
    plStack_528 = alStack_4e8;
    lStack_520 = param_1;
    uStack_518 = (code *)param_2;
    plStack_558 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,system_allocation_flags);
    *plStack_558 = (int64_t)plStack_528;
    plStack_558[1] = lStack_520;
    *(int32_t *)(plStack_558 + 2) = (int32_t)uStack_518;
    *(int32_t *)((int64_t)plStack_558 + 0x14) = uStack_518._4_4_;
    *(int32_t *)(plStack_558 + 3) = (int32_t)uStack_510;
    *(int32_t *)((int64_t)plStack_558 + 0x1c) = uStack_510._4_4_;
    plStack_558[4] = (int64_t)plStack_508;
    plStack_558[5] = (int64_t)piStack_500;
    pplStack_5c0 = &plStack_558;
  }
  pplStack_5c8 = (int64_t **)0xffffffffffffffff;
  FUN_18015b810();
  *piStack_560 = iStack_5b8;
  iVar8 = iStack_5b8 >> 1;
  iVar4 = iStack_5b8;
  do {
    if (iVar8 < 1) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_e8 ^ (uint64_t)auStack_5e8);
    }
    iVar10 = iVar4 >> 1;
    if (iVar10 < *piStack_560) {
      lVar5 = (int64_t)iVar10;
      lVar9 = 0;
      lVar7 = lVar5 * 8;
      iVar8 = iVar10;
      lVar11 = lVar7;
      lVar6 = lVar9;
joined_r0x00018057fd86:
      do {
        if (-1 < lVar9) {
          fVar16 = *(float *)(lVar7 + 4 + alStack_5a8[0]);
          lVar1 = lVar7 + lVar5 * -8;
          fVar14 = *(float *)(lVar1 + 4 + alStack_5a8[0]);
          if (fVar16 <= fVar14) {
            if ((fVar16 != fVar14) ||
               ((*(byte *)((int64_t)*(int *)(lVar7 + alStack_5a8[0]) * 0xa60 + 0x360c +
                          *(int64_t *)(param_1 + 0x10)) & 1) != 0)) {
              uVar2 = *(uint64_t *)(lVar1 + alStack_5a8[0]);
              *(uint64_t *)(lVar1 + alStack_5a8[0]) = *(uint64_t *)(lVar7 + alStack_5a8[0]);
              *(uint64_t *)(lVar7 + alStack_5a8[0]) = uVar2;
            }
            lVar7 = lVar7 + lVar5 * -8;
            lVar9 = lVar9 - lVar5;
            goto joined_r0x00018057fd86;
          }
        }
        iVar8 = iVar8 + 1;
        lVar7 = lVar11 + 8;
        lVar9 = lVar6 + 1;
        lVar11 = lVar7;
        lVar6 = lVar9;
      } while (iVar8 < *piStack_560);
    }
    iVar8 = iVar4 >> 2;
    iVar4 = iVar10;
  } while( true );
}





// 函数: void FUN_18057fe70(int64_t *param_1,int param_2,int param_3)
void FUN_18057fe70(int64_t *param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int64_t lVar4;
  int64_t lVar5;
  float *pfVar6;
  int64_t lVar7;
  char cVar8;
  float *pfVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  for (lVar10 = (int64_t)param_2; lVar10 < param_3; lVar10 = lVar10 + 1) {
    piVar3 = (int *)param_1[5];
    pfVar9 = (float *)param_1[3];
    lVar4 = *(int64_t *)(*param_1 + lVar10 * 8);
    lVar11 = *(int64_t *)(param_1[1] + 0x10);
    lVar5 = *(int64_t *)param_1[4];
    iVar2 = *(int *)(param_1[1] + 0x2a0);
    if (((*(int *)(lVar4 + 0x10) != iVar2) &&
        (((iVar2 < 0 ||
          (*(int *)(lVar4 + 0x10) != *(int *)((int64_t)iVar2 * 0xa60 + 0x3604 + lVar11))) &&
         (*(int *)(lVar4 + 0x720) == 0)))) && (cVar8 = func_0x00018052da70(lVar4), cVar8 == '\0')) {
      pfVar6 = (float *)param_1[2];
      lVar7 = *(int64_t *)(lVar4 + 0x20);
      fVar17 = pfVar6[6];
      fVar1 = pfVar6[2];
      fVar15 = (pfVar6[4] + *pfVar6) * 0.5;
      fVar16 = (pfVar6[5] + pfVar6[1]) * 0.5;
      fVar12 = *(float *)(lVar7 + 0xc) - fVar15;
      fVar14 = *(float *)(lVar7 + 0x10) - fVar16;
      if ((*(uint *)(lVar4 + 0x56c) >> 0xb & 1) == 0) {
        fVar13 = *(float *)(lVar11 + 0x87b724);
      }
      else {
        fVar13 = *(float *)(lVar7 + 0x1d0);
      }
      fVar13 = *(float *)(*(int64_t *)(lVar4 + 0x6d8) + 0x8c0) * 1.5 + fVar13 + *pfVar9;
      if ((fVar14 * fVar14 + fVar12 * fVar12 < fVar13 * fVar13) &&
         (cVar8 = FUN_180586ae0(lVar4,pfVar6), cVar8 != '\0')) {
        LOCK();
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        if (iVar2 < 0x80) {
          fVar15 = fVar15 - *(float *)(lVar7 + 0xc);
          fVar16 = fVar16 - *(float *)(lVar7 + 0x10);
          fVar17 = (fVar17 + fVar1) * 0.5 - *(float *)(lVar7 + 0x14);
          *(uint64_t *)(lVar5 + (int64_t)iVar2 * 8) =
               CONCAT44(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17,
                        *(int32_t *)(lVar4 + 0x10));
        }
        else {
          LOCK();
          *piVar3 = *piVar3 + -1;
          UNLOCK();
        }
      }
    }
  }
  return;
}



uint64_t FUN_18057fe91(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  float *pfVar7;
  int64_t lVar8;
  int64_t in_RAX;
  uint64_t uVar9;
  float *pfVar10;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar11;
  uint64_t unaff_R12;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  float fVar12;
  float fVar13;
  float fVar14;
  int32_t unaff_XMM6_Da;
  float fVar15;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar16;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar17;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM10_Dd;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  do {
    puVar4 = (uint *)unaff_R14[5];
    pfVar10 = (float *)unaff_R14[3];
    lVar5 = *(int64_t *)(*unaff_R14 + unaff_RSI * 8);
    lVar11 = *(int64_t *)(unaff_R14[1] + 0x10);
    lVar6 = *(int64_t *)unaff_R14[4];
    iVar3 = *(int *)(unaff_R14[1] + 0x2a0);
    uVar9 = (uint64_t)iVar3;
    if ((*(int *)(lVar5 + 0x10) != iVar3) &&
       (((iVar3 < 0 || (*(int *)(lVar5 + 0x10) != *(int *)(uVar9 * 0xa60 + 0x3604 + lVar11))) &&
        (*(int *)(lVar5 + 0x720) == 0)))) {
      uVar9 = func_0x00018052da70(lVar5);
      if ((char)uVar9 == '\0') {
        pfVar7 = (float *)unaff_R14[2];
        lVar8 = *(int64_t *)(lVar5 + 0x20);
        fVar17 = pfVar7[6];
        fVar1 = pfVar7[2];
        fVar15 = (pfVar7[4] + *pfVar7) * 0.5;
        fVar16 = (pfVar7[5] + pfVar7[1]) * 0.5;
        fVar12 = *(float *)(lVar8 + 0xc) - fVar15;
        fVar14 = *(float *)(lVar8 + 0x10) - fVar16;
        if ((*(uint *)(lVar5 + 0x56c) >> 0xb & 1) == 0) {
          fVar13 = *(float *)(lVar11 + 0x87b724);
        }
        else {
          fVar13 = *(float *)(lVar8 + 0x1d0);
        }
        uVar9 = *(uint64_t *)(lVar5 + 0x6d8);
        fVar13 = *(float *)(uVar9 + 0x8c0) * 1.5 + fVar13 + *pfVar10;
        if (fVar14 * fVar14 + fVar12 * fVar12 < fVar13 * fVar13) {
          uVar9 = FUN_180586ae0(lVar5,pfVar7);
          if ((char)uVar9 != '\0') {
            LOCK();
            uVar2 = *puVar4;
            *puVar4 = *puVar4 + 1;
            UNLOCK();
            if ((int)uVar2 < 0x80) {
              fVar15 = fVar15 - *(float *)(lVar8 + 0xc);
              fVar16 = fVar16 - *(float *)(lVar8 + 0x10);
              fVar17 = (fVar17 + fVar1) * 0.5 - *(float *)(lVar8 + 0x14);
              uVar9 = CONCAT44(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17,
                               *(int32_t *)(lVar5 + 0x10));
              *(uint64_t *)(lVar6 + (int64_t)(int)uVar2 * 8) = uVar9;
            }
            else {
              LOCK();
              uVar9 = (uint64_t)*puVar4;
              *puVar4 = *puVar4 - 1;
              UNLOCK();
            }
          }
        }
      }
    }
    unaff_RSI = unaff_RSI + 1;
  } while (unaff_RSI < unaff_R15);
  return uVar9;
}





// 函数: void FUN_180580086(void)
void FUN_180580086(void)

{
  return;
}





// 函数: void FUN_1805800a0(void)
void FUN_1805800a0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




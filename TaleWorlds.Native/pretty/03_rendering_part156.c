#include "TaleWorlds.Native.Split.h"

// 03_rendering_part156.c - 7 个函数

// 函数: void FUN_180364880(longlong param_1)
void FUN_180364880(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int32_t uVar15;
  int32_t uVar16;
  double dVar17;
  int8_t auStack_e8 [32];
  int8_t uStack_c8;
  uint64_t uStack_b8;
  int8_t *puStack_b0;
  ulonglong uStack_a8;
  uint64_t uStack_a0;
  longlong *plStack_98;
  void *puStack_90;
  byte *pbStack_88;
  int iStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int8_t auStack_68 [56];
  ulonglong uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  if (*(char *)(_DAT_180c86878 + 0x210) != '\0') goto LAB_180364d42;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
  uVar12 = 0;
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  pbStack_88 = (byte *)0x0;
  iStack_80 = 0;
  lVar10 = *(longlong *)(lVar4 + 0x60710);
  uVar11 = uVar12;
  uVar13 = uVar12;
  if (*(longlong *)(lVar4 + 0x60718) - lVar10 >> 5 != 0) {
    do {
      uStack_b8 = (longlong *)&UNK_180a3c3e0;
      uStack_a0 = 0;
      puStack_b0 = (int8_t *)0x0;
      uStack_a8 = uStack_a8 & 0xffffffff00000000;
      FUN_1806277c0(&uStack_b8,*(int32_t *)(uVar13 + 0x10 + lVar10));
      iVar9 = *(int *)(uVar13 + 0x10 + lVar10);
      if (iVar9 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_b0,*(uint64_t *)(uVar13 + 8 + lVar10),iVar9 + 1);
      }
      if (*(longlong *)(uVar13 + 8 + lVar10) != 0) {
        uStack_a8 = uStack_a8 & 0xffffffff00000000;
        if (puStack_b0 != (int8_t *)0x0) {
          *puStack_b0 = 0;
        }
        uStack_a0 = uStack_a0 & 0xffffffff;
      }
      uVar6 = uVar12;
      uVar7 = uVar12;
      if ((uint)uStack_a8 != 0) {
        do {
          if ((byte)(puStack_b0[uVar6] + 0xbf) < 0x1a) {
            puStack_b0[uVar6] = puStack_b0[uVar6] + ' ';
          }
          uVar14 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar14;
          uVar6 = uVar6 + 1;
        } while (uVar14 < (uint)uStack_a8);
      }
      uVar6 = uVar12;
      if ((uint)uStack_a8 == 5) {
        while (uVar7 = uVar6 + 1, puStack_b0[uVar6] == (&DAT_180a0e358)[uVar6]) {
          uVar6 = uVar7;
          if (uVar7 == 6) {
            uStack_b8 = (longlong *)&UNK_180a3c3e0;
            if (puStack_b0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            puStack_b0 = (int8_t *)0x0;
            uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
            uStack_b8 = (longlong *)&UNK_18098bcb0;
            goto LAB_180364a9b;
          }
        }
      }
      uStack_b8 = (longlong *)&UNK_180a3c3e0;
      if (puStack_b0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_b0 = (int8_t *)0x0;
      uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
      uStack_b8 = (longlong *)&UNK_18098bcb0;
      uVar14 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar14;
      uVar13 = uVar13 + 0x20;
      lVar10 = *(longlong *)(lVar4 + 0x60710);
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(lVar4 + 0x60718) - lVar10 >> 5));
  }
LAB_180364a9b:
  if (iStack_80 < 1) {
    uVar14 = *(uint *)(param_1 + 0xa0);
    uVar11 = (ulonglong)uVar14;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_1806277c0(&puStack_90,uVar11);
    }
    if (uVar14 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(pbStack_88,*(uint64_t *)(param_1 + 0x98),uVar11);
    }
    if (pbStack_88 != (byte *)0x0) {
      pbStack_88[uVar11] = 0;
    }
    uStack_78 = CONCAT44(*(int32_t *)(param_1 + 0xac),(int32_t)uStack_78);
    iStack_80 = 0;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x168);
    if (iStack_80 == iVar9) {
      if (iStack_80 != 0) {
        pbVar8 = pbStack_88;
        do {
          pbVar1 = pbVar8 + (*(longlong *)(param_1 + 0x160) - (longlong)pbStack_88);
          iVar9 = (uint)*pbVar8 - (uint)*pbVar1;
          if (iVar9 != 0) break;
          pbVar8 = pbVar8 + 1;
        } while (*pbVar1 != 0);
      }
LAB_180364b3d:
      if (iVar9 == 0) goto LAB_180364c1e;
    }
    else if (iStack_80 == 0) goto LAB_180364b3d;
    uVar15 = FUN_1803638c0(param_1);
    uStack_c8 = 0;
    puVar3 = (uint64_t *)
             FUN_180157390(uVar15,&uStack_b8,&puStack_90,
                           *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x20));
    uVar5 = *puVar3;
    *puVar3 = 0;
    plStack_98 = *(longlong **)(param_1 + 0x120);
    *(uint64_t *)(param_1 + 0x120) = uVar5;
    if (plStack_98 != (longlong *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
    if (uStack_b8 != (longlong *)0x0) {
      (**(code **)(*uStack_b8 + 0x38))();
    }
    FUN_180363930(param_1);
    plVar2 = *(longlong **)(param_1 + 0x120);
    if (plVar2 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x70) == '\0') {
        dVar17 = *(double *)(param_1 + 0x128);
        *(double *)(param_1 + 0x78) = dVar17;
        uVar5 = *(uint64_t *)(param_1 + 0x130);
        uVar15 = (int32_t)uVar5;
        uVar16 = (int32_t)((ulonglong)uVar5 >> 0x20);
        *(uint64_t *)(param_1 + 0x80) = uVar5;
      }
      else {
        uVar15 = (int32_t)*(uint64_t *)(param_1 + 0x80);
        uVar16 = (int32_t)((ulonglong)*(uint64_t *)(param_1 + 0x80) >> 0x20);
        dVar17 = *(double *)(param_1 + 0x78);
      }
      uStack_b8 = (longlong *)CONCAT44((float)(double)CONCAT44(uVar16,uVar15),(float)dVar17);
      puStack_b0 = (int8_t *)0x7f7fffff00000000;
      (**(code **)(*plVar2 + 0xf0))(plVar2,&uStack_b8);
    }
  }
LAB_180364c1e:
  if (*(int *)(param_1 + 0xa0) == 0) {
    lVar4 = FUN_180628ca0();
    uVar14 = *(uint *)(lVar4 + 0x10);
    uVar11 = (ulonglong)uVar14;
    if (*(longlong *)(lVar4 + 8) != 0) {
      FUN_1806277c0(param_1 + 0x158,uVar11);
    }
    if (uVar14 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(param_1 + 0x160),*(uint64_t *)(lVar4 + 8),uVar11);
    }
    *(int32_t *)(param_1 + 0x168) = 0;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      *(int8_t *)(uVar11 + *(longlong *)(param_1 + 0x160)) = 0;
    }
    *(int32_t *)(param_1 + 0x174) = *(int32_t *)(lVar4 + 0x1c);
  }
  else {
    lVar4 = FUN_180213440(_DAT_180c86878,param_1 + 0x90,0);
    if (lVar4 == 0) {
      FUN_180627be0(param_1 + 0x158,param_1 + 0x90);
    }
    else {
      uVar5 = FUN_180628ca0();
      FUN_180627be0(param_1 + 0x158,uVar5);
      plStack_98 = (longlong *)((ulonglong)plStack_98 & 0xffffffff00000000);
      FUN_1808464f0(lVar4,&plStack_98);
      if (0 < (int)plStack_98) {
        uStack_b8 = (longlong *)0x0;
        puStack_b0 = (int8_t *)0x0;
        uStack_a8 = 0;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,3);
        if (0 < (int)plStack_98) {
          do {
            FUN_180846410(lVar4,uVar12,auStack_68);
            uVar14 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar14;
          } while ((int)uVar14 < (int)plStack_98);
        }
      }
    }
  }
  puStack_90 = &UNK_180a3c3e0;
  if (pbStack_88 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pbStack_88 = (byte *)0x0;
  uStack_78 = uStack_78 & 0xffffffff00000000;
  puStack_90 = &UNK_18098bcb0;
LAB_180364d42:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_e8);
}



bool FUN_180364d70(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint64_t uStack_88;
  ulonglong uStack_80;
  uint64_t uStack_78;
  ulonglong uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  
  if (*(longlong *)(param_1 + 0x120) != 0) {
    if (*(int *)(param_1 + 0x1a0) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      fVar4 = SQRT(*(float *)(lVar2 + 0x30) * *(float *)(lVar2 + 0x30) +
                   *(float *)(lVar2 + 0x34) * *(float *)(lVar2 + 0x34) +
                   *(float *)(lVar2 + 0x38) * *(float *)(lVar2 + 0x38));
      fVar3 = SQRT(*(float *)(lVar2 + 0x40) * *(float *)(lVar2 + 0x40) +
                   *(float *)(lVar2 + 0x44) * *(float *)(lVar2 + 0x44) +
                   *(float *)(lVar2 + 0x48) * *(float *)(lVar2 + 0x48));
      if (fVar4 <= fVar3) {
        fVar4 = fVar3;
      }
      fVar3 = SQRT(*(float *)(lVar2 + 0x50) * *(float *)(lVar2 + 0x50) +
                   *(float *)(lVar2 + 0x54) * *(float *)(lVar2 + 0x54) +
                   *(float *)(lVar2 + 0x58) * *(float *)(lVar2 + 0x58));
      if (fVar4 <= fVar3) {
        fVar4 = fVar3;
      }
      return (*param_2 - *param_3) * (*param_2 - *param_3) +
             (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
             (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) <= fVar4 * fVar4;
    }
    if (*(int *)(param_1 + 0x1a0) == 1) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      uStack_88 = *(uint64_t *)(lVar2 + 0x70);
      uStack_78 = *(uint64_t *)(lVar2 + 0x80);
      uStack_68 = *(int32_t *)(lVar2 + 0x90);
      uStack_64 = *(int32_t *)(lVar2 + 0x94);
      uStack_60 = *(int32_t *)(lVar2 + 0x98);
      uStack_80 = *(ulonglong *)(lVar2 + 0x78) & 0xffffffff;
      uStack_58 = *(int32_t *)(lVar2 + 0xa0);
      uStack_54 = *(int32_t *)(lVar2 + 0xa4);
      uStack_50 = *(int32_t *)(lVar2 + 0xa8);
      uStack_70 = *(ulonglong *)(lVar2 + 0x88) & 0xffffffff;
      uStack_5c = 0;
      uStack_4c = 0x3f800000;
      FUN_180084760(&uStack_88,&fStack_c8);
      fVar4 = param_3[1];
      fVar3 = *param_3;
      param_3[3] = 1.0;
      fVar1 = param_3[2];
      fStack_98 = fVar3 * fStack_c8 + fVar4 * fStack_b8 + fVar1 * fStack_a8 + fStack_98;
      fStack_94 = fVar3 * fStack_c4 + fVar4 * fStack_b4 + fVar1 * fStack_a4 + fStack_94;
      fStack_90 = fVar3 * fStack_c0 + fVar4 * fStack_b0 + fVar1 * fStack_a0 + fStack_90;
      if ((((-1.0 <= fStack_98) && (fStack_98 <= 1.0)) && (-1.0 <= fStack_94)) &&
         (((fStack_94 <= 1.0 && (-1.0 <= fStack_90)) && (fStack_90 <= 1.0)))) {
        return true;
      }
    }
  }
  return false;
}



bool FUN_180364da8(uint64_t param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int8_t in_AL;
  undefined7 in_register_00000001;
  longlong in_R11;
  float fVar7;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar8;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM9_Dd;
  fVar8 = *(float *)(CONCAT71(in_register_00000001,in_AL) + 4);
  fVar7 = *(float *)(CONCAT71(in_register_00000001,in_AL) + 8);
  fVar1 = *(float *)(CONCAT71(in_register_00000001,in_AL) + 0x14);
  fVar2 = *(float *)(CONCAT71(in_register_00000001,in_AL) + 0x10);
  fVar3 = *(float *)(CONCAT71(in_register_00000001,in_AL) + 0x18);
  fVar4 = *(float *)(CONCAT71(in_register_00000001,in_AL) + 0x20);
  fVar5 = *(float *)(CONCAT71(in_register_00000001,in_AL) + 0x24);
  fVar6 = *(float *)(CONCAT71(in_register_00000001,in_AL) + 0x28);
  fVar8 = SQRT(*(float *)CONCAT71(in_register_00000001,in_AL) *
               *(float *)CONCAT71(in_register_00000001,in_AL) + fVar8 * fVar8 + fVar7 * fVar7);
  fVar7 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  if (fVar8 <= fVar7) {
    fVar8 = fVar7;
  }
  fVar7 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
  if (fVar8 <= fVar7) {
    fVar8 = fVar7;
  }
  return (*param_2 - *param_3) * (*param_2 - *param_3) +
         (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
         (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) <= fVar8 * fVar8;
}



uint64_t
FUN_180364e8e(longlong param_1,uint64_t param_2,float *param_3,uint64_t param_4,float param_5,
             uint64_t param_6,float param_7,uint64_t param_8,float param_9,uint64_t param_10,
             float param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int in_EAX;
  float fStackX_20;
  float fStackX_24;
  uint64_t uStack0000000000000060;
  ulonglong uStack0000000000000068;
  uint64_t uStack0000000000000070;
  ulonglong uStack0000000000000078;
  int32_t uStack0000000000000080;
  int32_t uStack0000000000000084;
  int32_t uStack0000000000000088;
  int32_t uStack000000000000008c;
  int32_t uStack0000000000000090;
  int32_t uStack0000000000000094;
  int32_t uStack0000000000000098;
  int32_t uStack000000000000009c;
  
  if (in_EAX == 1) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    uStack0000000000000060 = *(uint64_t *)(lVar4 + 0x70);
    uStack0000000000000070 = *(uint64_t *)(lVar4 + 0x80);
    uStack0000000000000080 = *(int32_t *)(lVar4 + 0x90);
    uStack0000000000000084 = *(int32_t *)(lVar4 + 0x94);
    uStack0000000000000088 = *(int32_t *)(lVar4 + 0x98);
    uStack0000000000000068 = *(ulonglong *)(lVar4 + 0x78) & 0xffffffff;
    uStack0000000000000090 = *(int32_t *)(lVar4 + 0xa0);
    uStack0000000000000094 = *(int32_t *)(lVar4 + 0xa4);
    uStack0000000000000098 = *(int32_t *)(lVar4 + 0xa8);
    uStack0000000000000078 = *(ulonglong *)(lVar4 + 0x88) & 0xffffffff;
    uStack000000000000008c = 0;
    uStack000000000000009c = 0x3f800000;
    FUN_180084760(&stack0x00000060,&fStackX_20);
    fVar1 = param_3[1];
    fVar2 = *param_3;
    param_3[3] = 1.0;
    fVar3 = param_3[2];
    param_10._0_4_ =
         fVar2 * fStackX_20 + fVar1 * (float)param_6 + fVar3 * (float)param_8 + (float)param_10;
    param_10._4_4_ =
         fVar2 * fStackX_24 + fVar1 * param_6._4_4_ + fVar3 * param_8._4_4_ + param_10._4_4_;
    param_11 = fVar2 * param_5 + fVar1 * param_7 + fVar3 * param_9 + param_11;
    if ((((-1.0 <= (float)param_10) && ((float)param_10 <= 1.0)) && (-1.0 <= param_10._4_4_)) &&
       (((param_10._4_4_ <= 1.0 && (-1.0 <= param_11)) && (param_11 <= 1.0)))) {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180364fe0(longlong *param_1)
void FUN_180364fe0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint64_t uStack_88;
  ulonglong uStack_80;
  uint64_t uStack_78;
  ulonglong uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  
  if (((longlong *)param_1[0x24] == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*(longlong *)param_1[0x24] + 0xd8))(), cVar1 == '\0')) {
    (**(code **)(*param_1 + 0x168))(param_1);
  }
  plVar3 = (longlong *)param_1[0x24];
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  cVar1 = '\0';
  lVar2 = param_1[3];
  fStack_d8 = (float)*(uint64_t *)(_DAT_180c86878 + 0x1b8);
  fStack_d4 = (float)((ulonglong)*(uint64_t *)(_DAT_180c86878 + 0x1b8) >> 0x20);
  fStack_d0 = (float)*(uint64_t *)(_DAT_180c86878 + 0x1c0);
  if ((int)param_1[0x34] == 0) {
    fStack_d4 = *(float *)(lVar2 + 0xa4) - fStack_d4;
    fVar5 = SQRT(*(float *)(lVar2 + 0x30) * *(float *)(lVar2 + 0x30) +
                 *(float *)(lVar2 + 0x34) * *(float *)(lVar2 + 0x34) +
                 *(float *)(lVar2 + 0x38) * *(float *)(lVar2 + 0x38));
    fStack_d8 = *(float *)(lVar2 + 0xa0) - fStack_d8;
    fVar4 = SQRT(*(float *)(lVar2 + 0x40) * *(float *)(lVar2 + 0x40) +
                 *(float *)(lVar2 + 0x44) * *(float *)(lVar2 + 0x44) +
                 *(float *)(lVar2 + 0x48) * *(float *)(lVar2 + 0x48));
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    fVar4 = SQRT(*(float *)(lVar2 + 0x50) * *(float *)(lVar2 + 0x50) +
                 *(float *)(lVar2 + 0x54) * *(float *)(lVar2 + 0x54) +
                 *(float *)(lVar2 + 0x58) * *(float *)(lVar2 + 0x58));
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    fStack_d0 = *(float *)(lVar2 + 0xa8) - fStack_d0;
    cVar1 = fVar5 * fVar5 < fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0;
    if (!(bool)cVar1) goto LAB_1803652ed;
  }
  else {
    if ((int)param_1[0x34] != 1) {
      return;
    }
    uStack_88 = *(uint64_t *)(lVar2 + 0x70);
    uStack_78 = *(uint64_t *)(lVar2 + 0x80);
    uStack_68 = *(int32_t *)(lVar2 + 0x90);
    uStack_64 = *(int32_t *)(lVar2 + 0x94);
    uStack_60 = *(int32_t *)(lVar2 + 0x98);
    uStack_80 = *(ulonglong *)(lVar2 + 0x78) & 0xffffffff;
    uStack_58 = *(int32_t *)(lVar2 + 0xa0);
    uStack_54 = *(int32_t *)(lVar2 + 0xa4);
    uStack_50 = *(int32_t *)(lVar2 + 0xa8);
    uStack_70 = *(ulonglong *)(lVar2 + 0x88) & 0xffffffff;
    uStack_5c = 0;
    uStack_4c = 0x3f800000;
    FUN_180084760(&uStack_88,&fStack_c8);
    fStack_98 = fStack_c8 * fStack_d8 + fStack_b8 * fStack_d4 + fStack_a8 * fStack_d0 + fStack_98;
    fStack_94 = fStack_c4 * fStack_d8 + fStack_b4 * fStack_d4 + fStack_a4 * fStack_d0 + fStack_94;
    fStack_90 = fStack_c0 * fStack_d8 + fStack_b0 * fStack_d4 + fStack_a0 * fStack_d0 + fStack_90;
    if ((((fStack_98 < -1.0) || (1.0 < fStack_98)) || (fStack_94 < -1.0)) ||
       (((1.0 < fStack_94 || (fStack_90 < -1.0)) || (1.0 < fStack_90)))) goto LAB_180365176;
LAB_1803652ed:
    if (*(char *)((longlong)param_1 + 0x1a4) == '\0') {
      plVar3[0xb] = *(longlong *)(lVar2 + 0x20);
      (**(code **)(*(longlong *)param_1[0x24] + 0xa8))((longlong *)param_1[0x24],lVar2 + 0xa0);
      (**(code **)(*(longlong *)param_1[0x24] + 0x60))();
      *(int8_t *)((longlong)param_1 + 0x1a4) = 1;
      return;
    }
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_180365176:
  if (*(char *)((longlong)param_1 + 0x1a4) != '\0') {
    (**(code **)(*plVar3 + 0x68))(plVar3);
    *(int8_t *)((longlong)param_1 + 0x1a4) = 0;
  }
  return;
}





// 函数: void FUN_180365038(uint64_t param_1,uint64_t param_2,longlong param_3,longlong *param_4)
void FUN_180365038(uint64_t param_1,uint64_t param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char in_R10B;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar10 = *(uint64_t *)(in_RAX + 0x1c0);
  iVar1 = *(int *)(unaff_RBX + 0x1a0);
  *(uint64_t *)(unaff_RBP + -0x79) = *(uint64_t *)(in_RAX + 0x1b8);
  *(uint64_t *)(unaff_RBP + -0x71) = uVar10;
  if (iVar1 == 0) {
    fVar14 = *(float *)(param_3 + 0xa4) - *(float *)(unaff_RBP + -0x75);
    fVar17 = SQRT(*(float *)(param_3 + 0x30) * *(float *)(param_3 + 0x30) +
                  *(float *)(param_3 + 0x34) * *(float *)(param_3 + 0x34) +
                  *(float *)(param_3 + 0x38) * *(float *)(param_3 + 0x38));
    fVar15 = *(float *)(param_3 + 0xa0) - *(float *)(unaff_RBP + -0x79);
    fVar13 = SQRT(*(float *)(param_3 + 0x40) * *(float *)(param_3 + 0x40) +
                  *(float *)(param_3 + 0x44) * *(float *)(param_3 + 0x44) +
                  *(float *)(param_3 + 0x48) * *(float *)(param_3 + 0x48));
    if (fVar17 <= fVar13) {
      fVar17 = fVar13;
    }
    fVar13 = SQRT(*(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50) +
                  *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
                  *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58));
    if (fVar17 <= fVar13) {
      fVar17 = fVar13;
    }
    fVar13 = *(float *)(param_3 + 0xa8) - *(float *)(unaff_RBP + -0x71);
    in_R10B = fVar17 * fVar17 < fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
    if (!(bool)in_R10B) goto LAB_1803652ed;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    uVar10 = *(uint64_t *)(param_3 + 0x78);
    uVar11 = *(uint64_t *)(param_3 + 0x80);
    uVar12 = *(uint64_t *)(param_3 + 0x88);
    *(uint64_t *)(unaff_RBP + -0x29) = *(uint64_t *)(param_3 + 0x70);
    *(uint64_t *)(unaff_RBP + -0x21) = uVar10;
    uVar2 = *(int32_t *)(param_3 + 0x90);
    uVar3 = *(int32_t *)(param_3 + 0x94);
    uVar4 = *(int32_t *)(param_3 + 0x98);
    uVar5 = *(int32_t *)(param_3 + 0x9c);
    *(int32_t *)(unaff_RBP + -0x1d) = 0;
    *(uint64_t *)(unaff_RBP + -0x19) = uVar11;
    *(uint64_t *)(unaff_RBP + -0x11) = uVar12;
    uVar6 = *(int32_t *)(param_3 + 0xa0);
    uVar7 = *(int32_t *)(param_3 + 0xa4);
    uVar8 = *(int32_t *)(param_3 + 0xa8);
    uVar9 = *(int32_t *)(param_3 + 0xac);
    *(int32_t *)(unaff_RBP + -0xd) = 0;
    *(int32_t *)(unaff_RBP + -9) = uVar2;
    *(int32_t *)(unaff_RBP + -5) = uVar3;
    *(int32_t *)(unaff_RBP + -1) = uVar4;
    *(int32_t *)(unaff_RBP + 3) = uVar5;
    *(int32_t *)(unaff_RBP + 7) = uVar6;
    *(int32_t *)(unaff_RBP + 0xb) = uVar7;
    *(int32_t *)(unaff_RBP + 0xf) = uVar8;
    *(int32_t *)(unaff_RBP + 0x13) = uVar9;
    *(int32_t *)(unaff_RBP + 3) = 0;
    *(int32_t *)(unaff_RBP + 0x13) = 0x3f800000;
    FUN_180084760(unaff_RBP + -0x29,unaff_RBP + -0x69);
    fVar17 = *(float *)(unaff_RBP + -0x79);
    fVar13 = *(float *)(unaff_RBP + -0x75);
    fVar14 = *(float *)(unaff_RBP + -0x71);
    fVar16 = *(float *)(unaff_RBP + -0x69) * fVar17 + *(float *)(unaff_RBP + -0x59) * fVar13 +
             *(float *)(unaff_RBP + -0x49) * fVar14 + *(float *)(unaff_RBP + -0x39);
    fVar15 = *(float *)(unaff_RBP + -0x65) * fVar17 + *(float *)(unaff_RBP + -0x55) * fVar13 +
             *(float *)(unaff_RBP + -0x45) * fVar14 + *(float *)(unaff_RBP + -0x35);
    fVar17 = *(float *)(unaff_RBP + -0x61) * fVar17 + *(float *)(unaff_RBP + -0x51) * fVar13 +
             *(float *)(unaff_RBP + -0x41) * fVar14 + *(float *)(unaff_RBP + -0x31);
    if ((((fVar16 < -1.0) || (1.0 < fVar16)) || (fVar15 < -1.0)) ||
       (((1.0 < fVar15 || (fVar17 < -1.0)) || (1.0 < fVar17)))) goto LAB_180365176;
LAB_1803652ed:
    if (*(char *)(unaff_RBX + 0x1a4) == '\0') {
      param_4[0xb] = *(longlong *)(param_3 + 0x20);
      (**(code **)(**(longlong **)(unaff_RBX + 0x120) + 0xa8))
                (*(longlong **)(unaff_RBX + 0x120),param_3 + 0xa0);
      (**(code **)(**(longlong **)(unaff_RBX + 0x120) + 0x60))();
      *(int8_t *)(unaff_RBX + 0x1a4) = 1;
      return;
    }
  }
  if (in_R10B == '\0') {
    return;
  }
LAB_180365176:
  if (*(char *)(unaff_RBX + 0x1a4) != '\0') {
    (**(code **)(*param_4 + 0x68))(param_4);
    *(int8_t *)(unaff_RBX + 0x1a4) = 0;
  }
  return;
}





// 函数: void FUN_1803650b0(float param_1,float param_2,longlong param_3,float param_4)
void FUN_1803650b0(float param_1,float param_2,longlong param_3,float param_4)

{
  bool bVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong *in_R9;
  float fVar2;
  float fVar3;
  float in_XMM2_Da;
  float fVar4;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar5;
  
  fVar3 = *(float *)(param_3 + 0xa4) - *(float *)(unaff_RBP + -0x75);
  fVar5 = SQRT(in_XMM2_Da + param_1 + param_2 * param_2);
  fVar4 = *(float *)(param_3 + 0xa0) - *(float *)(unaff_RBP + -0x79);
  fVar2 = SQRT(in_XMM5_Da * in_XMM5_Da + param_4 * param_4 + in_XMM4_Da * in_XMM4_Da);
  if (fVar5 <= fVar2) {
    fVar5 = fVar2;
  }
  fVar2 = SQRT(unaff_XMM8_Da * unaff_XMM8_Da + unaff_XMM6_Da * unaff_XMM6_Da +
               unaff_XMM7_Da * unaff_XMM7_Da);
  if (fVar5 <= fVar2) {
    fVar5 = fVar2;
  }
  fVar2 = *(float *)(param_3 + 0xa8) - *(float *)(unaff_RBP + -0x71);
  bVar1 = fVar5 * fVar5 < fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  if ((bVar1) || (*(char *)(unaff_RBX + 0x1a4) != '\0')) {
    if ((bVar1) && (*(char *)(unaff_RBX + 0x1a4) != '\0')) {
      (**(code **)(*in_R9 + 0x68))(in_R9);
      *(int8_t *)(unaff_RBX + 0x1a4) = 0;
    }
  }
  else {
    in_R9[0xb] = *(longlong *)(param_3 + 0x20);
    (**(code **)(**(longlong **)(unaff_RBX + 0x120) + 0xa8))
              (*(longlong **)(unaff_RBX + 0x120),param_3 + 0xa0);
    (**(code **)(**(longlong **)(unaff_RBX + 0x120) + 0x60))();
    *(int8_t *)(unaff_RBX + 0x1a4) = 1;
  }
  return;
}





// 函数: void FUN_180365171(void)
void FUN_180365171(void)

{
  longlong unaff_RBX;
  longlong *in_R9;
  char in_R10B;
  
  if ((in_R10B != '\0') && (*(char *)(unaff_RBX + 0x1a4) != '\0')) {
    (**(code **)(*in_R9 + 0x68))(in_R9);
    *(int8_t *)(unaff_RBX + 0x1a4) = 0;
  }
  return;
}





// 函数: void FUN_1803651b0(void)
void FUN_1803651b0(void)

{
  return;
}





// 函数: void FUN_1803651c1(uint64_t param_1,uint64_t param_2,longlong param_3,longlong *param_4)
void FUN_1803651c1(uint64_t param_1,uint64_t param_2,longlong param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int in_EAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char in_R10B;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (in_EAX != 1) {
    return;
  }
  uVar11 = *(uint64_t *)(param_3 + 0x78);
  uVar12 = *(uint64_t *)(param_3 + 0x80);
  uVar13 = *(uint64_t *)(param_3 + 0x88);
  *(uint64_t *)(unaff_RBP + -0x29) = *(uint64_t *)(param_3 + 0x70);
  *(uint64_t *)(unaff_RBP + -0x21) = uVar11;
  uVar3 = *(int32_t *)(param_3 + 0x90);
  uVar4 = *(int32_t *)(param_3 + 0x94);
  uVar5 = *(int32_t *)(param_3 + 0x98);
  uVar6 = *(int32_t *)(param_3 + 0x9c);
  *(int32_t *)(unaff_RBP + -0x1d) = 0;
  *(uint64_t *)(unaff_RBP + -0x19) = uVar12;
  *(uint64_t *)(unaff_RBP + -0x11) = uVar13;
  uVar7 = *(int32_t *)(param_3 + 0xa0);
  uVar8 = *(int32_t *)(param_3 + 0xa4);
  uVar9 = *(int32_t *)(param_3 + 0xa8);
  uVar10 = *(int32_t *)(param_3 + 0xac);
  *(int32_t *)(unaff_RBP + -0xd) = 0;
  *(int32_t *)(unaff_RBP + -9) = uVar3;
  *(int32_t *)(unaff_RBP + -5) = uVar4;
  *(int32_t *)(unaff_RBP + -1) = uVar5;
  *(int32_t *)(unaff_RBP + 3) = uVar6;
  *(int32_t *)(unaff_RBP + 7) = uVar7;
  *(int32_t *)(unaff_RBP + 0xb) = uVar8;
  *(int32_t *)(unaff_RBP + 0xf) = uVar9;
  *(int32_t *)(unaff_RBP + 0x13) = uVar10;
  *(int32_t *)(unaff_RBP + 3) = 0;
  *(int32_t *)(unaff_RBP + 0x13) = 0x3f800000;
  FUN_180084760(unaff_RBP + -0x29,unaff_RBP + -0x69);
  fVar14 = *(float *)(unaff_RBP + -0x79);
  fVar1 = *(float *)(unaff_RBP + -0x75);
  fVar2 = *(float *)(unaff_RBP + -0x71);
  fVar16 = *(float *)(unaff_RBP + -0x69) * fVar14 + *(float *)(unaff_RBP + -0x59) * fVar1 +
           *(float *)(unaff_RBP + -0x49) * fVar2 + *(float *)(unaff_RBP + -0x39);
  fVar15 = *(float *)(unaff_RBP + -0x65) * fVar14 + *(float *)(unaff_RBP + -0x55) * fVar1 +
           *(float *)(unaff_RBP + -0x45) * fVar2 + *(float *)(unaff_RBP + -0x35);
  fVar14 = *(float *)(unaff_RBP + -0x61) * fVar14 + *(float *)(unaff_RBP + -0x51) * fVar1 +
           *(float *)(unaff_RBP + -0x41) * fVar2 + *(float *)(unaff_RBP + -0x31);
  if ((((-1.0 <= fVar16) && (fVar16 <= 1.0)) && (-1.0 <= fVar15)) &&
     (((fVar15 <= 1.0 && (-1.0 <= fVar14)) && (fVar14 <= 1.0)))) {
    if (*(char *)(unaff_RBX + 0x1a4) == '\0') {
      param_4[0xb] = *(longlong *)(param_3 + 0x20);
      (**(code **)(**(longlong **)(unaff_RBX + 0x120) + 0xa8))
                (*(longlong **)(unaff_RBX + 0x120),param_3 + 0xa0);
      (**(code **)(**(longlong **)(unaff_RBX + 0x120) + 0x60))();
      *(int8_t *)(unaff_RBX + 0x1a4) = 1;
      return;
    }
    if (in_R10B == '\0') {
      return;
    }
  }
  if (*(char *)(unaff_RBX + 0x1a4) != '\0') {
    (**(code **)(*param_4 + 0x68))(param_4);
    *(int8_t *)(unaff_RBX + 0x1a4) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




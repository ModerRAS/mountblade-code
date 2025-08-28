#include "TaleWorlds.Native.Split.h"

// 03_rendering_part141.c - 13 个函数

// 函数: void FUN_180351190(longlong param_1)
void FUN_180351190(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int8_t auVar25 [16];
  float fVar26;
  float fVar27;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  uint64_t uVar28;
  uint64_t uStack_90;
  longlong lStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  
  uVar28 = 0xfffffffffffffffe;
  lVar14 = *(longlong *)(param_1 + 0x18);
  if (lVar14 == 0) {
    return;
  }
  if (_DAT_180c8ecb8 == 0) {
    uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3,0xfffffffffffffffe);
    _DAT_180c8ecb8 = FUN_180350540(uVar11);
    lVar14 = *(longlong *)(param_1 + 0x18);
  }
  lVar12 = _DAT_180c8ecb8;
  FUN_180350650(_DAT_180c8ecb8,lVar14);
  iVar10 = *(int *)(param_1 + 0x80);
  plVar13 = (longlong *)0x0;
  if (iVar10 == 7) {
    plVar16 = plVar13;
    do {
      plVar17 = (longlong *)((longlong)plVar16 + 1);
      if (*(char *)(*(longlong *)(param_1 + 0x78) + (longlong)plVar16) != (char)plVar16[0x30143c73])
      goto LAB_180351429;
      plVar16 = plVar17;
    } while (plVar17 != (longlong *)&system_data_0008);
    lVar14 = *(longlong *)(param_1 + 0x18);
    lVar21 = *(longlong *)(lVar14 + 0xa0);
    lVar8 = *(longlong *)(lVar14 + 0xa8);
    fVar1 = *(float *)(lVar14 + 0x70);
    fVar2 = *(float *)(lVar14 + 0x74);
    fVar3 = *(float *)(lVar14 + 0x78);
    uVar4 = *(int32_t *)(lVar14 + 0x7c);
    fVar22 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    auVar25 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
    fVar23 = auVar25._0_4_;
    fVar22 = fVar23 * 0.5 * (3.0 - fVar22 * fVar23 * fVar23);
    uStack_78 = CONCAT44(fVar2 * fVar22,fVar1 * fVar22);
    uStack_70 = CONCAT44(uVar4,fVar3 * fVar22);
    uStack_68 = CONCAT44(uStack_68._4_4_,0x447a0000);
    if (lVar12 == 0) {
      uVar28 = FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3,uVar28);
      lVar12 = FUN_180350540(uVar28);
      _DAT_180c8ecb8 = lVar12;
    }
    plVar16 = *(longlong **)(lVar12 + 0x20);
    if (plVar16 < *(longlong **)(lVar12 + 0x28)) {
      *(longlong **)(lVar12 + 0x20) = plVar16 + 6;
      *plVar16 = lVar14;
      plVar16[1] = lVar21;
      plVar16[2] = lVar8;
      plVar16[3] = uStack_78;
      plVar16[4] = uStack_70;
      plVar16[5] = uStack_68;
      return;
    }
    plVar17 = *(longlong **)(lVar12 + 0x18);
    lVar18 = ((longlong)plVar16 - (longlong)plVar17) / 0x30;
    if (lVar18 == 0) {
      lVar18 = 1;
    }
    else {
      lVar18 = lVar18 * 2;
      if (lVar18 == 0) goto LAB_1803513a7;
    }
    plVar13 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar18 * 0x30,*(int8_t *)(lVar12 + 0x30))
    ;
    plVar16 = *(longlong **)(lVar12 + 0x20);
    plVar17 = *(longlong **)(lVar12 + 0x18);
LAB_1803513a7:
    if (plVar17 != plVar16) {
                    // WARNING: Subroutine does not return
      memmove(plVar13,plVar17,(longlong)plVar16 - (longlong)plVar17);
    }
    *plVar13 = lVar14;
    plVar13[1] = lVar21;
    uStack_80._0_4_ = (int32_t)lVar8;
    uStack_80._4_4_ = (int32_t)((ulonglong)lVar8 >> 0x20);
    *(int32_t *)(plVar13 + 2) = (int32_t)uStack_80;
    *(int32_t *)((longlong)plVar13 + 0x14) = uStack_80._4_4_;
    *(float *)(plVar13 + 3) = fVar1 * fVar22;
    *(float *)((longlong)plVar13 + 0x1c) = fVar2 * fVar22;
    *(float *)(plVar13 + 4) = fVar3 * fVar22;
    *(int32_t *)((longlong)plVar13 + 0x24) = uVar4;
    *(int32_t *)(plVar13 + 5) = 0x447a0000;
    *(int32_t *)((longlong)plVar13 + 0x2c) = uStack_68._4_4_;
    if (*(longlong *)(lVar12 + 0x18) == 0) {
      *(longlong **)(lVar12 + 0x18) = plVar13;
      *(longlong **)(lVar12 + 0x20) = plVar13 + 6;
      *(longlong **)(lVar12 + 0x28) = plVar13 + lVar18 * 6;
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
LAB_180351429:
  if (iVar10 == 0xb) {
    iVar9 = strcmp(*(uint64_t *)(param_1 + 0x78),&system_data_e388);
    if (iVar9 == 0) {
      uStack_90 = *(longlong *)(param_1 + 0x18);
      uVar4 = *(int32_t *)(uStack_90 + 0xa0);
      uVar5 = *(int32_t *)(uStack_90 + 0xa4);
      lStack_88 = *(longlong *)(uStack_90 + 0xa0);
      uStack_80 = *(longlong *)(uStack_90 + 0xa8);
      lVar14 = FUN_180350610();
      plVar16 = *(longlong **)(lVar14 + 0x40);
      if (*(longlong **)(lVar14 + 0x48) <= plVar16) {
        plVar17 = *(longlong **)(lVar14 + 0x38);
        lVar12 = ((longlong)plVar16 - (longlong)plVar17) / 0x18;
        if (lVar12 == 0) {
          lVar12 = 1;
        }
        else {
          lVar12 = lVar12 * 2;
          if (lVar12 == 0) goto LAB_1803514da;
        }
        plVar13 = (longlong *)
                  FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x18,*(int8_t *)(lVar14 + 0x50));
        plVar16 = *(longlong **)(lVar14 + 0x40);
        plVar17 = *(longlong **)(lVar14 + 0x38);
LAB_1803514da:
        if (plVar17 != plVar16) {
                    // WARNING: Subroutine does not return
          memmove(plVar13,plVar17,(longlong)plVar16 - (longlong)plVar17);
        }
        uStack_90._4_4_ = (int32_t)((ulonglong)uStack_90 >> 0x20);
        *(int32_t *)plVar13 = (int32_t)uStack_90;
        *(int32_t *)((longlong)plVar13 + 4) = uStack_90._4_4_;
        *(int32_t *)(plVar13 + 1) = uVar4;
        *(int32_t *)((longlong)plVar13 + 0xc) = uVar5;
        plVar13[2] = uStack_80;
        if (*(longlong *)(lVar14 + 0x38) == 0) {
          *(longlong **)(lVar14 + 0x38) = plVar13;
          *(longlong **)(lVar14 + 0x40) = plVar13 + 3;
          *(longlong **)(lVar14 + 0x48) = plVar13 + lVar12 * 3;
          return;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong **)(lVar14 + 0x40) = plVar16 + 3;
      goto LAB_180351b84;
    }
    iVar9 = strcmp(*(uint64_t *)(param_1 + 0x78),&system_data_e3e8);
    if (iVar9 == 0) {
      lVar14 = *(longlong *)(param_1 + 0x18);
      lVar12 = *(longlong *)(lVar14 + 0xa0);
      lVar21 = *(longlong *)(lVar14 + 0xa8);
      lVar8 = *(longlong *)(lVar14 + 0x70);
      lVar18 = *(longlong *)(lVar14 + 0x78);
      lVar15 = FUN_180350610();
      plVar16 = *(longlong **)(lVar15 + 0x60);
      if (plVar16 < *(longlong **)(lVar15 + 0x68)) {
        *(longlong **)(lVar15 + 0x60) = plVar16 + 6;
        *plVar16 = lVar14;
        plVar16[1] = lVar12;
        plVar16[2] = lVar21;
        plVar16[3] = lVar8;
        plVar16[4] = lVar18;
        plVar16[5] = 0x3e99999a447a0000;
        return;
      }
      plVar17 = *(longlong **)(lVar15 + 0x58);
      lVar19 = ((longlong)plVar16 - (longlong)plVar17) / 0x30;
      if (lVar19 == 0) {
        lVar19 = 1;
      }
      else {
        lVar19 = lVar19 * 2;
        if (lVar19 == 0) goto LAB_18035163a;
      }
      plVar13 = (longlong *)
                FUN_18062b420(_DAT_180c8ed18,lVar19 * 0x30,*(int8_t *)(lVar15 + 0x70));
      plVar16 = *(longlong **)(lVar15 + 0x60);
      plVar17 = *(longlong **)(lVar15 + 0x58);
LAB_18035163a:
      if (plVar17 != plVar16) {
                    // WARNING: Subroutine does not return
        memmove(plVar13,plVar17,(longlong)plVar16 - (longlong)plVar17);
      }
      *plVar13 = lVar14;
      plVar13[1] = lVar12;
      uStack_80._0_4_ = (int32_t)lVar21;
      uStack_80._4_4_ = (int32_t)((ulonglong)lVar21 >> 0x20);
      uStack_78._0_4_ = (int32_t)lVar8;
      uStack_78._4_4_ = (int32_t)((ulonglong)lVar8 >> 0x20);
      *(int32_t *)(plVar13 + 2) = (int32_t)uStack_80;
      *(int32_t *)((longlong)plVar13 + 0x14) = uStack_80._4_4_;
      *(int32_t *)(plVar13 + 3) = (int32_t)uStack_78;
      *(int32_t *)((longlong)plVar13 + 0x1c) = uStack_78._4_4_;
      uStack_70._0_4_ = (int32_t)lVar18;
      uStack_70._4_4_ = (int32_t)((ulonglong)lVar18 >> 0x20);
      *(int32_t *)(plVar13 + 4) = (int32_t)uStack_70;
      *(int32_t *)((longlong)plVar13 + 0x24) = uStack_70._4_4_;
      *(int32_t *)(plVar13 + 5) = 0x447a0000;
      *(int32_t *)((longlong)plVar13 + 0x2c) = 0x3e99999a;
      if (*(longlong *)(lVar15 + 0x58) == 0) {
        *(longlong **)(lVar15 + 0x58) = plVar13;
        *(longlong **)(lVar15 + 0x60) = plVar13 + 6;
        *(longlong **)(lVar15 + 0x68) = plVar13 + lVar19 * 6;
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((iVar10 != 0xd) ||
     (iVar9 = strcmp(*(uint64_t *)(param_1 + 0x78),&system_data_e3c0), iVar9 != 0)) {
    if (iVar10 != 0xb) {
      return;
    }
    iVar10 = strcmp(*(uint64_t *)(param_1 + 0x78),&system_data_e3b0);
    if (iVar10 != 0) {
      return;
    }
    uStack_90 = *(longlong *)(param_1 + 0x18);
    uVar4 = *(int32_t *)(uStack_90 + 0xa0);
    uVar5 = *(int32_t *)(uStack_90 + 0xa4);
    lStack_88 = *(longlong *)(uStack_90 + 0xa0);
    uStack_80 = *(longlong *)(uStack_90 + 0xa8);
    lVar14 = FUN_180350610();
    plVar16 = *(longlong **)(lVar14 + 0xa0);
    if (*(longlong **)(lVar14 + 0xa8) <= plVar16) {
      plVar17 = *(longlong **)(lVar14 + 0x98);
      lVar12 = ((longlong)plVar16 - (longlong)plVar17) / 0x18;
      if (lVar12 == 0) {
        lVar12 = 1;
      }
      else {
        lVar12 = lVar12 * 2;
        if (lVar12 == 0) goto LAB_180351c06;
      }
      plVar13 = (longlong *)
                FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x18,*(int8_t *)(lVar14 + 0xb0));
      plVar16 = *(longlong **)(lVar14 + 0xa0);
      plVar17 = *(longlong **)(lVar14 + 0x98);
LAB_180351c06:
      if (plVar17 != plVar16) {
                    // WARNING: Subroutine does not return
        memmove(plVar13,plVar17,(longlong)plVar16 - (longlong)plVar17);
      }
      uStack_90._4_4_ = (int32_t)((ulonglong)uStack_90 >> 0x20);
      *(int32_t *)plVar13 = (int32_t)uStack_90;
      *(int32_t *)((longlong)plVar13 + 4) = uStack_90._4_4_;
      *(int32_t *)(plVar13 + 1) = uVar4;
      *(int32_t *)((longlong)plVar13 + 0xc) = uVar5;
      plVar13[2] = uStack_80;
      if (*(longlong *)(lVar14 + 0x98) == 0) {
        *(longlong **)(lVar14 + 0x98) = plVar13;
        *(longlong **)(lVar14 + 0xa0) = plVar13 + 3;
        *(longlong **)(lVar14 + 0xa8) = plVar13 + lVar12 * 3;
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong **)(lVar14 + 0xa0) = plVar16 + 3;
    goto LAB_180351b84;
  }
  uVar28 = FUN_18062b1e0(_DAT_180c8ed18,0x140,0x10,3,uVar28);
  uVar28 = FUN_18014a1b0(uVar28);
  FUN_180056f10((longlong *)(param_1 + 0x90),uVar28);
  plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xb8);
  lVar14 = *(longlong *)(_DAT_180c8aa00 + 0x28);
  plVar17 = (longlong *)plVar16[1];
  lVar12 = 1;
  if (plVar17 < (longlong *)plVar16[2]) {
    plVar16[1] = (longlong)(plVar17 + 6);
    *plVar17 = uStack_90;
    plVar17[1] = lStack_88;
    plVar17[2] = uStack_80;
    plVar17[3] = uStack_78;
    plVar17[4] = uStack_70;
    plVar17[5] = lVar14;
  }
  else {
    plVar20 = (longlong *)*plVar16;
    lVar21 = ((longlong)plVar17 - (longlong)plVar20) / 0x30;
    if (lVar21 == 0) {
      lVar21 = 1;
LAB_18035179a:
      plStackX_8 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar21 * 0x30,(char)plVar16[3]);
      plVar17 = (longlong *)plVar16[1];
      plVar20 = (longlong *)*plVar16;
    }
    else {
      lVar21 = lVar21 * 2;
      plStackX_8 = plVar13;
      if (lVar21 != 0) goto LAB_18035179a;
    }
    if (plVar20 != plVar17) {
                    // WARNING: Subroutine does not return
      memmove(plStackX_8,plVar20,(longlong)plVar17 - (longlong)plVar20);
    }
    *plStackX_8 = uStack_90;
    plStackX_8[1] = lStack_88;
    *(int32_t *)(plStackX_8 + 2) = (int32_t)uStack_80;
    *(int32_t *)((longlong)plStackX_8 + 0x14) = uStack_80._4_4_;
    *(int32_t *)(plStackX_8 + 3) = (int32_t)uStack_78;
    *(int32_t *)((longlong)plStackX_8 + 0x1c) = uStack_78._4_4_;
    uStack_68._0_4_ = (int32_t)lVar14;
    uStack_68._4_4_ = (int32_t)((ulonglong)lVar14 >> 0x20);
    *(int32_t *)(plStackX_8 + 4) = (int32_t)uStack_70;
    *(int32_t *)((longlong)plStackX_8 + 0x24) = uStack_70._4_4_;
    *(int32_t *)(plStackX_8 + 5) = (int32_t)uStack_68;
    *(int32_t *)((longlong)plStackX_8 + 0x2c) = uStack_68._4_4_;
    if (*plVar16 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar16 = (longlong)plStackX_8;
    plVar16[1] = (longlong)(plStackX_8 + 6);
    plVar16[2] = (longlong)(plStackX_8 + lVar21 * 6);
  }
  plStackX_8 = (longlong *)(param_1 + 0x90);
  uVar28 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0xa8);
  lVar14 = **(longlong **)(*plStackX_8 + 0xb8);
  *(uint64_t *)(lVar14 + 4) = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0xa0);
  *(uint64_t *)(lVar14 + 0xc) = uVar28;
  lVar14 = *(longlong *)(param_1 + 0x18);
  fVar1 = *(float *)(lVar14 + 0xa8);
  uVar4 = *(int32_t *)(lVar14 + 0xa4);
  lVar21 = **(longlong **)(*plStackX_8 + 0xb8);
  *(int32_t *)(lVar21 + 0x14) = *(int32_t *)(lVar14 + 0xa0);
  *(int32_t *)(lVar21 + 0x18) = uVar4;
  *(float *)(lVar21 + 0x1c) = fVar1 + 1.8;
  *(int32_t *)(lVar21 + 0x20) = 0x7f7fffff;
  *(int32_t *)**(uint64_t **)(*plStackX_8 + 0xb8) = 0x3ebd70a4;
  lVar14 = *(longlong *)(param_1 + 0x18);
  lVar21 = **(longlong **)(*plStackX_8 + 0xb8);
  fVar26 = *(float *)(lVar21 + 0xc) - *(float *)(lVar14 + 0xa8);
  fVar24 = *(float *)(lVar21 + 8) - *(float *)(lVar14 + 0xa4);
  fVar27 = *(float *)(lVar21 + 4) - *(float *)(lVar14 + 0xa0);
  fVar1 = *(float *)(lVar14 + 0x80);
  fVar2 = *(float *)(lVar14 + 0x84);
  fVar3 = *(float *)(lVar14 + 0x88);
  fVar22 = *(float *)(lVar14 + 0x90);
  fVar23 = *(float *)(lVar14 + 0x94);
  fVar6 = *(float *)(lVar14 + 0x98);
  fVar7 = *(float *)(lVar14 + 0x9c);
  *(float *)(lVar21 + 4) =
       fVar27 * *(float *)(lVar14 + 0x70) + fVar24 * *(float *)(lVar14 + 0x74) +
       fVar26 * *(float *)(lVar14 + 0x78);
  *(float *)(lVar21 + 8) = fVar27 * fVar1 + fVar24 * fVar2 + fVar26 * fVar3;
  *(float *)(lVar21 + 0xc) = fVar27 * fVar22 + fVar24 * fVar23 + fVar26 * fVar6;
  *(float *)(lVar21 + 0x10) = fVar27 * fVar7 + fVar24 * fVar7 + fVar26 * fVar7;
  lVar14 = *(longlong *)(param_1 + 0x18);
  lVar21 = **(longlong **)(*plStackX_8 + 0xb8);
  fVar26 = *(float *)(lVar21 + 0x1c) - *(float *)(lVar14 + 0xa8);
  fVar24 = *(float *)(lVar21 + 0x18) - *(float *)(lVar14 + 0xa4);
  fVar27 = *(float *)(lVar21 + 0x14) - *(float *)(lVar14 + 0xa0);
  fVar1 = *(float *)(lVar14 + 0x80);
  fVar2 = *(float *)(lVar14 + 0x84);
  fVar3 = *(float *)(lVar14 + 0x88);
  fVar22 = *(float *)(lVar14 + 0x90);
  fVar23 = *(float *)(lVar14 + 0x94);
  fVar6 = *(float *)(lVar14 + 0x98);
  fVar7 = *(float *)(lVar14 + 0x9c);
  *(float *)(lVar21 + 0x14) =
       fVar27 * *(float *)(lVar14 + 0x70) + fVar24 * *(float *)(lVar14 + 0x74) +
       fVar26 * *(float *)(lVar14 + 0x78);
  *(float *)(lVar21 + 0x18) = fVar27 * fVar1 + fVar24 * fVar2 + fVar26 * fVar3;
  *(float *)(lVar21 + 0x1c) = fVar27 * fVar22 + fVar24 * fVar23 + fVar26 * fVar6;
  *(float *)(lVar21 + 0x20) = fVar27 * fVar7 + fVar24 * fVar7 + fVar26 * fVar7;
  uVar28 = *(uint64_t *)(param_1 + 0x18);
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*plStackX_8;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_1802eeab0(uVar28,&plStackX_8);
  uStack_90 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(int32_t *)(uStack_90 + 0xa0);
  uVar5 = *(int32_t *)(uStack_90 + 0xa4);
  lStack_88 = *(longlong *)(uStack_90 + 0xa0);
  uStack_80 = *(longlong *)(uStack_90 + 0xa8);
  lVar14 = FUN_180350610();
  plVar16 = *(longlong **)(lVar14 + 0x80);
  if (*(longlong **)(lVar14 + 0x88) <= plVar16) {
    plVar17 = *(longlong **)(lVar14 + 0x78);
    lVar21 = ((longlong)plVar16 - (longlong)plVar17) / 0x18;
    if ((lVar21 == 0) || (lVar12 = lVar21 * 2, lVar12 != 0)) {
      plVar13 = (longlong *)
                FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x18,*(int8_t *)(lVar14 + 0x90));
      plVar16 = *(longlong **)(lVar14 + 0x80);
      plVar17 = *(longlong **)(lVar14 + 0x78);
    }
    if (plVar17 == plVar16) {
      uStack_90._4_4_ = (int32_t)((ulonglong)uStack_90 >> 0x20);
      *(int32_t *)plVar13 = (int32_t)uStack_90;
      *(int32_t *)((longlong)plVar13 + 4) = uStack_90._4_4_;
      *(int32_t *)(plVar13 + 1) = uVar4;
      *(int32_t *)((longlong)plVar13 + 0xc) = uVar5;
      plVar13[2] = uStack_80;
      if (*(longlong *)(lVar14 + 0x78) == 0) {
        *(longlong **)(lVar14 + 0x78) = plVar13;
        *(longlong **)(lVar14 + 0x80) = plVar13 + 3;
        *(longlong **)(lVar14 + 0x88) = plVar13 + lVar12 * 3;
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    memmove(plVar13,plVar17,(longlong)plVar16 - (longlong)plVar17);
  }
  *(longlong **)(lVar14 + 0x80) = plVar16 + 3;
LAB_180351b84:
  *plVar16 = uStack_90;
  plVar16[1] = lStack_88;
  plVar16[2] = uStack_80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180351cb0(longlong param_1)
void FUN_180351cb0(longlong param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  if (_DAT_180c8ecb8 == (uint64_t *)0x0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3);
    _DAT_180c8ecb8 = (uint64_t *)FUN_180350540(uVar2);
  }
  puVar1 = _DAT_180c8ecb8;
  *_DAT_180c8ecb8 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x20);
  *(int8_t *)(puVar1 + 2) = *(int8_t *)(param_1 + 0x70);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180351d10(uint64_t *param_1)
void FUN_180351d10(uint64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  if ((void *)*param_1 == &UNK_180a1e5a0) {
    if (_DAT_180c8ecb8 == (uint64_t *)0x0) {
      uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3);
      _DAT_180c8ecb8 = (uint64_t *)FUN_180350540(uVar2);
    }
    puVar1 = _DAT_180c8ecb8;
    *_DAT_180c8ecb8 = *(uint64_t *)(param_1[3] + 0x20);
    *(int8_t *)(puVar1 + 2) = *(int8_t *)(param_1 + 0xe);
    return;
  }
  (**(code **)((void *)*param_1 + 0x70))(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180351d90(uint64_t param_1)
void FUN_180351d90(uint64_t param_1)

{
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  uint64_t uStack_f0;
  void **appuStack_e8 [2];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  void *apuStack_78 [11];
  int32_t uStack_20;
  ulonglong uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &UNK_1809fcc58;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0x11;
  strcpy_s(auStack_c0,0x40,&system_data_e3f8);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 3;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &UNK_18098bcb0;
  puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180351ea0(void)
void FUN_180351ea0(void)

{
  longlong lVar1;
  uint64_t uVar2;
  int iVar3;
  longlong lVar4;
  
  if (_DAT_180c8ecb8 == 0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3);
    _DAT_180c8ecb8 = FUN_180350540(uVar2);
  }
  lVar1 = _DAT_180c8ecb8;
  if ((*(char *)(_DAT_180c8ecb8 + 0x10) != '\0') &&
     (iVar3 = (int)(*(longlong *)(_DAT_180c8ecb8 + 0xc0) - *(longlong *)(_DAT_180c8ecb8 + 0xb8) >> 3
                   ), 0 < iVar3)) {
    lVar4 = 0;
    do {
      FUN_180351190(*(uint64_t *)(*(longlong *)(lVar1 + 0xb8) + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}





// 函数: void FUN_180351ef4(int param_1)
void FUN_180351ef4(int param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  if (0 < param_1) {
    lVar1 = 0;
    do {
      FUN_180351190(*(uint64_t *)(*(longlong *)(unaff_RDI + 0xb8) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_1);
  }
  return;
}





// 函数: void FUN_180351f00(void)
void FUN_180351f00(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = 0;
  do {
    FUN_180351190(*(uint64_t *)(*(longlong *)(unaff_RDI + 0xb8) + lVar1 * 8));
    lVar1 = lVar1 + 1;
  } while (lVar1 < unaff_RSI);
  return;
}





// 函数: void FUN_180351f2d(void)
void FUN_180351f2d(void)

{
  return;
}





// 函数: void FUN_180351f32(void)
void FUN_180351f32(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180351f40(longlong param_1,longlong param_2)
void FUN_180351f40(longlong param_1,longlong param_2)

{
  int iVar1;
  uint64_t uVar2;
  
  if (*(int *)(param_2 + 0x10) == 0x11) {
    iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_e3f8);
    if (iVar1 == 0) {
      if (_DAT_180c8ecb8 == 0) {
        uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3);
        _DAT_180c8ecb8 = FUN_180350540(uVar2);
      }
      *(int8_t *)(_DAT_180c8ecb8 + 0x10) = *(int8_t *)(param_1 + 0x70);
    }
  }
  return;
}



uint64_t * FUN_180351fb0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a1e7d0;
  if (param_1[0x13] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180352020(uint64_t *param_1)
void FUN_180352020(uint64_t *param_1)

{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  void *puStack_138;
  int32_t *puStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &UNK_180a1e7d0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  *(int32_t *)(puVar3 + 0x16) = 3;
  puStack_138 = &UNK_180a3c3e0;
  uStack_120 = 0;
  puStack_130 = (int32_t *)0x0;
  uStack_128 = 0;
  puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_130 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_120 = CONCAT44(uStack_120._4_4_,uVar1);
  *puVar2 = 0x6e756f42;
  puVar2[1] = 0x676e6964;
  puVar2[2] = 0x786f4220;
  puVar2[3] = 0x6e6f4320;
  *(uint64_t *)(puVar2 + 4) = 0x746e6961727473;
  uStack_128 = 0x17;
  FUN_1803460a0(param_1,&puStack_138,(longlong)param_1 + 0x74,2);
  puStack_138 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803525b0(uint64_t param_1)
void FUN_1803525b0(uint64_t param_1)

{
  int8_t auStack_3c8 [32];
  int32_t uStack_3a8;
  void **appuStack_3a0 [2];
  uint64_t uStack_390;
  void *apuStack_388 [11];
  int32_t uStack_330;
  void *puStack_328;
  int8_t *puStack_320;
  int32_t uStack_318;
  int8_t auStack_310 [72];
  void *puStack_2c8;
  int8_t *puStack_2c0;
  int32_t uStack_2b8;
  int8_t auStack_2b0 [72];
  void *puStack_268;
  int8_t *puStack_260;
  int32_t uStack_258;
  int8_t auStack_250 [72];
  void *puStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [72];
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [72];
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_390 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_3c8;
  uStack_3a8 = 0;
  puStack_328 = &UNK_1809fcc58;
  puStack_320 = auStack_310;
  auStack_310[0] = 0;
  uStack_318 = 0x17;
  strcpy_s(auStack_310,0x40,&system_data_e718);
  FUN_1800b8300(apuStack_388,&puStack_328);
  uStack_330 = 2;
  uStack_3a8 = 1;
  FUN_180180730(param_1,appuStack_3a0,apuStack_388);
  uStack_3a8 = 0;
  appuStack_3a0[0] = apuStack_388;
  apuStack_388[0] = &UNK_18098bcb0;
  puStack_328 = &UNK_18098bcb0;
  puStack_2c8 = &UNK_1809fcc58;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 0xe;
  strcpy_s(auStack_2b0,0x40,&system_data_e708);
  FUN_1800b8300(apuStack_388,&puStack_2c8);
  uStack_330 = 3;
  uStack_3a8 = 2;
  FUN_180180730(param_1,appuStack_3a0,apuStack_388);
  uStack_3a8 = 0;
  appuStack_3a0[0] = apuStack_388;
  apuStack_388[0] = &UNK_18098bcb0;
  puStack_2c8 = &UNK_18098bcb0;
  puStack_268 = &UNK_1809fcc58;
  puStack_260 = auStack_250;
  auStack_250[0] = 0;
  uStack_258 = 0xd;
  strcpy_s(auStack_250,0x40,&system_data_e770);
  FUN_1800b8300(apuStack_388,&puStack_268);
  uStack_330 = 3;
  uStack_3a8 = 4;
  FUN_180180730(param_1,appuStack_3a0,apuStack_388);
  uStack_3a8 = 0;
  appuStack_3a0[0] = apuStack_388;
  apuStack_388[0] = &UNK_18098bcb0;
  puStack_268 = &UNK_18098bcb0;
  puStack_208 = &UNK_1809fcc58;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0xe;
  strcpy_s(auStack_1f0,0x40,&system_data_e760);
  FUN_1800b8300(apuStack_388,&puStack_208);
  uStack_330 = 0xb;
  uStack_3a8 = 8;
  FUN_180180730(param_1,appuStack_3a0,apuStack_388);
  uStack_3a8 = 0;
  appuStack_3a0[0] = apuStack_388;
  apuStack_388[0] = &UNK_18098bcb0;
  puStack_208 = &UNK_18098bcb0;
  puStack_1a8 = &UNK_1809fcc58;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0x11;
  strcpy_s(auStack_190,0x40,&system_data_e748);
  FUN_1800b8300(apuStack_388,&puStack_1a8);
  uStack_330 = 5;
  uStack_3a8 = 0x10;
  FUN_180180730(param_1,appuStack_3a0,apuStack_388);
  uStack_3a8 = 0;
  appuStack_3a0[0] = apuStack_388;
  apuStack_388[0] = &UNK_18098bcb0;
  puStack_1a8 = &UNK_18098bcb0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0x11;
  strcpy_s(auStack_130,0x40,&system_data_e730);
  FUN_1800b8300(apuStack_388,&puStack_148);
  uStack_330 = 5;
  uStack_3a8 = 0x20;
  FUN_180180730(param_1,appuStack_3a0,apuStack_388);
  uStack_3a8 = 0;
  appuStack_3a0[0] = apuStack_388;
  apuStack_388[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x29;
  strcpy_s(auStack_d0,0x40,&system_data_e798);
  FUN_1800b8300(apuStack_388,&puStack_e8);
  uStack_330 = 0xb;
  uStack_3a8 = 0x40;
  FUN_180180730(param_1,appuStack_3a0,apuStack_388);
  uStack_3a8 = 0;
  appuStack_3a0[0] = apuStack_388;
  apuStack_388[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x15;
  strcpy_s(auStack_70,0x40,&system_data_e780);
  FUN_1800b8300(apuStack_388,&puStack_88);
  uStack_330 = 0xb;
  uStack_3a8 = 0x80;
  FUN_180180730(param_1,appuStack_3a0,apuStack_388);
  uStack_3a8 = 0;
  appuStack_3a0[0] = apuStack_388;
  apuStack_388[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_3c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180352b20(longlong param_1)
void FUN_180352b20(longlong param_1)

{
  longlong lVar1;
  int32_t uStack_78;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_74 = 0x3f8000003f800000;
  uStack_6c = 0x7f7fffff3f800000;
  uStack_78 = _DAT_180bf6618;
  lVar1 = *(longlong *)(param_1 + 0x18);
  uStack_64 = 0xbf800000bf800000;
  uStack_5c = 0x7f7fffffbf800000;
  uStack_48 = *(uint64_t *)(lVar1 + 0x70);
  uStack_40 = *(uint64_t *)(lVar1 + 0x78);
  uStack_38 = *(uint64_t *)(lVar1 + 0x80);
  uStack_30 = *(uint64_t *)(lVar1 + 0x88);
  uStack_28 = *(uint64_t *)(lVar1 + 0x90);
  uStack_20 = *(uint64_t *)(lVar1 + 0x98);
  uStack_18 = *(int32_t *)(lVar1 + 0xa0);
  uStack_14 = *(int32_t *)(lVar1 + 0xa4);
  uStack_10 = *(int32_t *)(lVar1 + 0xa8);
  uStack_c = *(int32_t *)(lVar1 + 0xac);
  if (*(char *)(_DAT_180c8ed68 + 0x50) != '\0') {
    FUN_180634a60(_DAT_180c8ed68,&uStack_64,&uStack_74,&uStack_48,&uStack_78,1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part059.c - 6 个函数

// 函数: void FUN_1803e1ca0(uint64_t *param_1)
void FUN_1803e1ca0(uint64_t *param_1)

{
  int8_t (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  bool bVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint64_t *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  float fVar24;
  int8_t auStackX_8 [8];
  char acStackX_10 [8];
  int iStackX_18;
  uint64_t *puStackX_20;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  int8_t auStack_78 [16];
  
LAB_1803e1ce0:
  puVar8 = (uint64_t *)param_1[1];
  do {
    if (puVar8 == param_1) {
      return;
    }
    uVar2 = *(uint *)(puVar8 + 4);
    uStack_84 = *(uint *)((longlong)puVar8 + 0x24);
    uVar3 = *(uint *)(puVar8 + 5);
    uStack_7c = *(uint *)((longlong)puVar8 + 0x2c);
    uStack_88 = uVar2;
    uStack_80 = uVar3;
    if ((0x3ff < (int)uStack_84) && (0x3ff < (int)uVar3)) {
      lVar15 = puVar8[7];
      lVar10 = puVar8[6];
      fVar24 = (float)logf();
      iVar19 = 1 << ((byte)(int)(fVar24 * 1.442695) & 0x1f);
      iVar7 = (int)(lVar15 - lVar10 >> 4);
      iStackX_18 = iVar19;
      if ((2 < iVar19) && (0 < iVar7 - iVar19)) break;
    }
    puVar8 = (uint64_t *)func_0x00018066bd70(puVar8);
  } while( true );
  iVar20 = 0;
  puVar9 = (uint64_t *)param_1[1];
  while (puVar9 != param_1) {
    auStack_78 = *(int8_t (*) [16])(puVar9 + 4);
    if (((auStack_78._4_4_ == uStack_84) && (auStack_78._8_4_ == uVar3)) &&
       (auStack_78._0_4_ == uVar2)) {
      iVar20 = iVar20 + 1;
    }
    puVar9 = (uint64_t *)func_0x00018066bd70(puVar9);
    uVar2 = uStack_88;
    uVar3 = uStack_80;
  }
  puVar9 = (uint64_t *)param_1[0x1f];
  uStack_98 = uVar2;
  uStack_94 = uStack_84;
  uStack_90 = uVar3;
  iStack_8c = iVar20;
  if (puVar9 < (uint64_t *)param_1[0x20]) {
    param_1[0x1f] = puVar9 + 2;
    *puVar9 = CONCAT44(uStack_84,uVar2);
    puVar9[1] = CONCAT44(iVar20,uVar3);
    goto LAB_1803e1e98;
  }
  puVar17 = (uint64_t *)param_1[0x1e];
  lVar15 = (longlong)puVar9 - (longlong)puVar17 >> 4;
  if (lVar15 == 0) {
    lVar15 = 1;
LAB_1803e1e15:
    puVar11 = (uint64_t *)
              FUN_18062b420(_DAT_180c8ed18,lVar15 << 4,*(int8_t *)(param_1 + 0x21));
    puVar9 = (uint64_t *)param_1[0x1f];
    puVar17 = (uint64_t *)param_1[0x1e];
  }
  else {
    lVar15 = lVar15 * 2;
    if (lVar15 != 0) goto LAB_1803e1e15;
    puVar11 = (uint64_t *)0x0;
  }
  if (puVar17 != puVar9) {
                    // WARNING: Subroutine does not return
    memmove(puVar11,puVar17,(longlong)puVar9 - (longlong)puVar17);
  }
  *puVar11 = CONCAT44(uStack_94,uStack_98);
  puVar11[1] = CONCAT44(iStack_8c,uStack_90);
  if (param_1[0x1e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1e] = puVar11;
  param_1[0x1f] = puVar11 + 2;
  param_1[0x20] = puVar11 + lVar15 * 2;
LAB_1803e1e98:
  lVar15 = (longlong)iVar19;
  iVar20 = iVar19;
  for (; iVar19 < iVar7; iVar19 = iVar19 + 1) {
    pauVar1 = (int8_t (*) [16])(puVar8[6] + lVar15 * 0x10);
    uVar22 = *(uint64_t *)*pauVar1;
    uVar5 = *(uint64_t *)(*pauVar1 + 8);
    auStack_78 = *pauVar1;
    puVar9 = (uint64_t *)param_1[2];
    puVar17 = param_1;
    while (puVar11 = puVar17, puVar17 = puVar9, puVar17 != (uint64_t *)0x0) {
      uVar2 = *(uint *)(puVar17 + 4);
      if ((((uVar2 < uStack_98) ||
           ((uVar2 <= uStack_98 && (*(int *)((longlong)puVar17 + 0x24) < (int)uStack_94)))) ||
          ((uVar2 <= uStack_98 &&
           (((uVar2 < uStack_98 || (*(int *)((longlong)puVar17 + 0x24) <= (int)uStack_94)) &&
            (*(int *)(puVar17 + 5) < (int)uStack_90)))))) ||
         (((uVar2 <= uStack_98 && (*(int *)((longlong)puVar17 + 0x24) <= (int)uStack_94)) &&
          (((*(int *)((longlong)puVar17 + 0x24) < (int)uStack_94 ||
            (*(int *)(puVar17 + 5) <= (int)uStack_90)) &&
           (*(int *)((longlong)puVar17 + 0x2c) < iStack_8c)))))) {
        bVar6 = true;
        puVar9 = (uint64_t *)*puVar17;
      }
      else {
        bVar6 = false;
        puVar9 = (uint64_t *)puVar17[1];
      }
      if (bVar6) {
        puVar17 = puVar11;
      }
    }
    if ((((puVar11 == param_1) || (uVar2 = *(uint *)(puVar11 + 4), uStack_98 < uVar2)) ||
        ((uStack_98 <= uVar2 && ((int)uStack_94 < *(int *)((longlong)puVar11 + 0x24))))) ||
       (((uStack_98 <= uVar2 &&
         (((uStack_98 < uVar2 || ((int)uStack_94 <= *(int *)((longlong)puVar11 + 0x24))) &&
          ((int)uStack_90 < *(int *)(puVar11 + 5))))) ||
        ((((puVar9 = puStackX_20, uStack_98 <= uVar2 &&
           ((int)uStack_94 <= *(int *)((longlong)puVar11 + 0x24))) &&
          (((int)uStack_94 < *(int *)((longlong)puVar11 + 0x24) ||
           ((int)uStack_90 <= *(int *)(puVar11 + 5))))) &&
         (iStack_8c < *(int *)((longlong)puVar11 + 0x2c))))))) {
      lVar10 = FUN_1803e7da0(param_1,puVar11,auStackX_8,&uStack_98);
      if (lVar10 == 0) {
        puVar11 = (uint64_t *)FUN_1803e8310(param_1,acStackX_10,&uStack_98);
        puVar9 = puVar11;
        if (acStackX_10[0] != '\0') {
          if ((((puVar11 == param_1) || (uVar2 = *(uint *)(puVar11 + 4), uStack_98 < uVar2)) ||
              ((uStack_98 <= uVar2 && ((int)uStack_94 < *(int *)((longlong)puVar11 + 0x24))))) ||
             (((uStack_98 <= uVar2 &&
               (((uStack_98 < uVar2 || ((int)uStack_94 <= *(int *)((longlong)puVar11 + 0x24))) &&
                ((int)uStack_90 < *(int *)(puVar11 + 5))))) ||
              ((((uStack_98 <= uVar2 && ((int)uStack_94 <= *(int *)((longlong)puVar11 + 0x24))) &&
                (((int)uStack_94 < *(int *)((longlong)puVar11 + 0x24) ||
                 ((int)uStack_90 <= *(int *)(puVar11 + 5))))) &&
               (iStack_8c < *(int *)((longlong)puVar11 + 0x2c))))))) {
            uVar22 = 0;
          }
          else {
            uVar22 = 1;
          }
          lVar15 = FUN_18062b420(_DAT_180c8ed18,0x50,*(int8_t *)(param_1 + 5));
          puStackX_20 = (uint64_t *)(lVar15 + 0x20);
          *puStackX_20 = CONCAT44(uStack_94,uStack_98);
          *(ulonglong *)(lVar15 + 0x28) = CONCAT44(iStack_8c,uStack_90);
          *(uint64_t *)(lVar15 + 0x30) = 0;
          *(uint64_t *)(lVar15 + 0x38) = 0;
          *(uint64_t *)(lVar15 + 0x40) = 0;
          *(int32_t *)(lVar15 + 0x48) = 3;
                    // WARNING: Subroutine does not return
          FUN_18066bdc0(lVar15,puVar11,param_1,uVar22);
        }
      }
      else {
        FUN_1803e7c80(param_1,&puStackX_20,lVar10,auStackX_8[0],&uStack_98);
        puVar11 = puStackX_20;
        puVar9 = puStackX_20;
      }
    }
    puStackX_20 = puVar9;
    puVar9 = (uint64_t *)puVar11[7];
    if (puVar9 < (uint64_t *)puVar11[8]) {
      puVar11[7] = puVar9 + 2;
      *puVar9 = uVar22;
      puVar9[1] = uVar5;
    }
    else {
      puVar17 = (uint64_t *)puVar11[6];
      lVar10 = (longlong)puVar9 - (longlong)puVar17 >> 4;
      if (lVar10 == 0) {
        lVar10 = 1;
LAB_1803e20d2:
        puVar12 = (uint64_t *)
                  FUN_18062b420(_DAT_180c8ed18,lVar10 << 4,*(int8_t *)(puVar11 + 9));
        puVar9 = (uint64_t *)puVar11[7];
        puVar17 = (uint64_t *)puVar11[6];
        puVar23 = puVar12;
      }
      else {
        lVar10 = lVar10 * 2;
        if (lVar10 != 0) goto LAB_1803e20d2;
        puVar12 = (uint64_t *)0x0;
        puVar23 = puVar12;
      }
      for (; puVar17 != puVar9; puVar17 = puVar17 + 2) {
        uVar4 = puVar17[1];
        *puVar12 = *puVar17;
        puVar12[1] = uVar4;
        puVar12 = puVar12 + 2;
      }
      *puVar12 = uVar22;
      puVar12[1] = uVar5;
      if (puVar11[6] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar11[6] = puVar23;
      puVar11[7] = puVar12 + 2;
      puVar11[8] = puVar23 + lVar10 * 2;
    }
    iVar20 = 0;
    uVar16 = (longlong)(param_1[0x1f] - param_1[0x1e]) >> 4;
    if (uVar16 != 0) {
      uVar14 = 0;
      do {
        puVar13 = (uint *)(uVar14 * 0x10 + param_1[0x1e]);
        if (((*puVar13 == uStack_88) && (puVar13[1] == uStack_84)) &&
           ((puVar13[2] == uStack_80 && (puVar13[3] == uStack_7c)))) goto LAB_1803e219c;
        iVar20 = iVar20 + 1;
        uVar14 = (ulonglong)iVar20;
      } while (uVar14 < uVar16);
    }
    iVar20 = -1;
LAB_1803e219c:
    iVar21 = (int)uVar16 + -1;
    iVar18 = iVar19 - iStackX_18;
    puVar9 = (uint64_t *)param_1[7];
    if (puVar9 != param_1 + 6) {
      do {
        if ((*(int *)(puVar9 + 5) == iVar20) && (*(int *)((longlong)puVar9 + 0x2c) == iVar19)) {
          *(int *)(puVar9 + 5) = iVar21;
          *(int *)((longlong)puVar9 + 0x2c) = iVar18;
        }
        puVar9 = (uint64_t *)func_0x00018066bd70(puVar9);
      } while (puVar9 != param_1 + 6);
    }
    puVar9 = (uint64_t *)param_1[0xd];
    if (puVar9 != param_1 + 0xc) {
      do {
        if ((*(int *)((longlong)puVar9 + 0x2c) == iVar20) && (*(int *)(puVar9 + 6) == iVar19)) {
          *(int *)((longlong)puVar9 + 0x2c) = iVar21;
          *(int *)(puVar9 + 6) = iVar18;
        }
        puVar9 = (uint64_t *)func_0x00018066bd70(puVar9);
      } while (puVar9 != param_1 + 0xc);
    }
    if (auStack_78._0_8_ != 0) {
      puVar9 = param_1 + 0x12;
      puVar17 = puVar9;
      puVar11 = (uint64_t *)param_1[0x14];
      if ((uint64_t *)param_1[0x14] == (uint64_t *)0x0) {
LAB_1803e2244:
        puVar17 = puVar9;
      }
      else {
        do {
          if ((ulonglong)puVar11[4] < (ulonglong)auStack_78._0_8_) {
            puVar12 = (uint64_t *)*puVar11;
          }
          else {
            puVar12 = (uint64_t *)puVar11[1];
            puVar17 = puVar11;
          }
          puVar11 = puVar12;
        } while (puVar12 != (uint64_t *)0x0);
        if ((puVar17 == puVar9) || ((ulonglong)auStack_78._0_8_ < (ulonglong)puVar17[4]))
        goto LAB_1803e2244;
      }
      if (puVar17 != puVar9) {
        *(int *)(puVar17 + 5) = iVar21;
        *(int *)((longlong)puVar17 + 0x2c) = iVar18;
      }
    }
    if (auStack_78._8_8_ != 0) {
      puVar9 = param_1 + 0x18;
      puVar17 = puVar9;
      puVar11 = (uint64_t *)param_1[0x1a];
      if ((uint64_t *)param_1[0x1a] == (uint64_t *)0x0) {
LAB_1803e2292:
        puVar17 = puVar9;
      }
      else {
        do {
          if ((ulonglong)puVar11[4] < (ulonglong)auStack_78._8_8_) {
            puVar12 = (uint64_t *)*puVar11;
          }
          else {
            puVar12 = (uint64_t *)puVar11[1];
            puVar17 = puVar11;
          }
          puVar11 = puVar12;
        } while (puVar12 != (uint64_t *)0x0);
        if ((puVar17 == puVar9) || ((ulonglong)auStack_78._8_8_ < (ulonglong)puVar17[4]))
        goto LAB_1803e2292;
      }
      if (puVar17 != puVar9) {
        *(int *)(puVar17 + 5) = iVar21;
        *(int *)((longlong)puVar17 + 0x2c) = iVar18;
      }
    }
    lVar15 = lVar15 + 1;
    iVar20 = iStackX_18;
  }
  iVar7 = iVar7 + -1;
  if (iVar20 <= iVar7) {
    puVar9 = (uint64_t *)puVar8[7];
    lVar15 = (longlong)iVar7 << 4;
    uVar16 = (ulonglong)((iVar7 - iVar20) + 1);
    do {
      puVar17 = (uint64_t *)(puVar8[6] + 0x10 + lVar15);
      if ((puVar17 < puVar9) && (lVar10 = (longlong)puVar9 - (longlong)puVar17 >> 4, 0 < lVar10)) {
        do {
          puVar17[-2] = *puVar17;
          puVar17[-1] = puVar17[1];
          lVar10 = lVar10 + -1;
          puVar17 = puVar17 + 2;
        } while (0 < lVar10);
        puVar9 = (uint64_t *)puVar8[7];
      }
      puVar9 = puVar9 + -2;
      puVar8[7] = puVar9;
      lVar15 = lVar15 + -0x10;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  goto LAB_1803e1ce0;
}






// 函数: void FUN_1803e2360(longlong param_1,longlong param_2)
void FUN_1803e2360(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t *puVar8;
  int16_t *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  void *puStack_d8;
  longlong lStack_d0;
  int iStack_c8;
  ulonglong uStack_c0;
  void *puStack_b8;
  longlong lStack_b0;
  int iStack_a8;
  ulonglong uStack_a0;
  void *puStack_98;
  longlong lStack_90;
  int iStack_88;
  uint64_t uStack_80;
  void *puStack_78;
  longlong lStack_70;
  int iStack_68;
  ulonglong uStack_60;
  void *puStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  ulonglong uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  *(longlong *)(param_1 + 400) = param_2;
  FUN_1803e7220(param_1,*(int32_t *)(*(longlong *)(param_2 + 0x68) + 0x3054));
  FUN_1803e28f0(param_1);
  iVar12 = 0;
  puVar1 = (uint64_t *)(param_1 + 0x150);
  puVar10 = (uint *)&unknown_var_6672_ptr;
  iVar11 = iVar12;
  do {
    for (puVar6 = *(uint64_t **)(param_1 + 0x158); puVar6 != puVar1;
        puVar6 = (uint64_t *)func_0x00018066bd70(puVar6)) {
      if (((*puVar10 & 0xfffffffc) == 0) && (*puVar10 != 1)) {
        FUN_1803e57c0(param_1,*(int32_t *)(puVar6 + 4),iVar11);
      }
    }
    iVar11 = iVar11 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar11 < 6);
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar13 = 0x80;
    do {
      lVar3 = *(longlong *)(lVar13 + *(longlong *)(param_1 + 400));
      if ((*(char *)(lVar3 + 0x152) != '\0') && (*(char *)(lVar3 + 0x150) == '\0')) {
        puVar6 = *(uint64_t **)(param_1 + 0x160);
        puVar8 = puVar1;
        if (puVar6 != (uint64_t *)0x0) {
          do {
            if (*(int *)(puVar6 + 4) < iVar12) {
              puVar6 = (uint64_t *)*puVar6;
            }
            else {
              puVar8 = puVar6;
              puVar6 = (uint64_t *)puVar6[1];
            }
          } while (puVar6 != (uint64_t *)0x0);
          if ((puVar8 != puVar1) && (*(int *)(puVar8 + 4) <= iVar12)) {
            iVar11 = 0;
            puVar10 = (uint *)&unknown_var_6672_ptr;
            do {
              if (((*puVar10 & 0xfffffffc) != 0) || (*puVar10 == 1)) {
                FUN_1803e57c0(param_1,iVar12,iVar11);
              }
              iVar11 = iVar11 + 1;
              puVar10 = puVar10 + 1;
            } while (iVar11 < 6);
            goto LAB_1803e24c4;
          }
        }
        iVar11 = 0;
        do {
          FUN_1803e57c0(param_1,iVar12,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 6);
      }
LAB_1803e24c4:
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 8;
    } while (iVar12 < *(int *)(param_2 + 0x78));
  }
  lVar13 = 0;
  FUN_1803e5a10(param_1);
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 400) + 0x68) + 0x358) == 0) {
    FUN_1803e1ca0(param_1);
  }
  puStack_98 = &unknown_var_3456_ptr;
  uStack_80 = 0;
  lStack_90 = 0;
  iStack_88 = 0;
  FUN_1803e6170(param_1,&puStack_98);
  puStack_78 = &unknown_var_3456_ptr;
  uStack_60 = 0;
  lStack_70 = 0;
  iStack_68 = 0;
  FUN_1803e3630(param_1,param_2,&puStack_78);
  puStack_b8 = &unknown_var_3456_ptr;
  uStack_a0 = 0;
  lStack_b0 = 0;
  iStack_a8 = 0;
  FUN_1803e2a40(param_1,&puStack_b8);
  puStack_d8 = &unknown_var_3456_ptr;
  uStack_c0 = 0;
  lStack_d0 = 0;
  iStack_c8 = 0;
  FUN_1803e6ff0(param_1,&puStack_d8);
  (**(code **)(**(longlong **)(param_1 + 0x188) + 0x10))
            (*(longlong **)(param_1 + 0x188),&system_buffer_ptr);
  lVar3 = *(longlong *)(param_1 + 0x188);
  if (0 < iStack_88) {
    FUN_1806277c0(lVar3,*(int *)(lVar3 + 0x10) + iStack_88);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8),lStack_90,
           (longlong)(iStack_88 + 1));
  }
  iVar12 = *(int *)(lVar3 + 0x10) + 2;
  FUN_1806277c0(lVar3,iVar12);
  iVar11 = iStack_68;
  lVar5 = lStack_70;
  puVar9 = (int16_t *)((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8));
  *puVar9 = 0xa5c;
  *(int8_t *)(puVar9 + 1) = 0;
  *(int *)(lVar3 + 0x10) = iVar12;
  lVar3 = *(longlong *)(param_1 + 0x188);
  if (0 < iStack_68) {
    FUN_1806277c0(lVar3,*(int *)(lVar3 + 0x10) + iStack_68);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8),lVar5,
           (longlong)(iVar11 + 1));
  }
  iVar11 = *(int *)(lVar3 + 0x10) + 2;
  FUN_1806277c0(lVar3,iVar11);
  puVar9 = (int16_t *)((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8));
  *puVar9 = 0xa5c;
  *(int8_t *)(puVar9 + 1) = 0;
  *(int *)(lVar3 + 0x10) = iVar11;
  lVar3 = *(longlong *)(param_1 + 0x188);
  if (0 < iStack_a8) {
    FUN_1806277c0(lVar3,*(int *)(lVar3 + 0x10) + iStack_a8);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8),lStack_b0,
           (longlong)(iStack_a8 + 1));
  }
  iVar11 = *(int *)(lVar3 + 0x10) + 2;
  FUN_1806277c0(lVar3,iVar11);
  puVar9 = (int16_t *)((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8));
  *puVar9 = 0xa5c;
  *(int8_t *)(puVar9 + 1) = 0;
  *(int *)(lVar3 + 0x10) = iVar11;
  lVar3 = *(longlong *)(param_1 + 0x188);
  if (0 < iStack_c8) {
    FUN_1806277c0(lVar3,*(int *)(lVar3 + 0x10) + iStack_c8);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8),lStack_d0,
           (longlong)(iStack_c8 + 1));
  }
  iVar11 = *(int *)(lVar3 + 0x10) + 2;
  FUN_1806277c0(lVar3,iVar11);
  puVar9 = (int16_t *)((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8));
  *puVar9 = 0xa5c;
  *(int8_t *)(puVar9 + 1) = 0;
  *(int *)(lVar3 + 0x10) = iVar11;
  if (*(char *)(param_1 + 0x1e8) != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x188);
    pcVar4 = *(char **)(lVar3 + 8);
    cVar2 = *pcVar4;
    while (cVar2 != '\0') {
      lVar7 = strchr(&system_data_cfb8,(int)pcVar4[lVar13]);
      if (lVar7 != 0) {
        *(int8_t *)(lVar13 + *(longlong *)(lVar3 + 8)) = 0x20;
      }
      lVar13 = lVar13 + 1;
      pcVar4 = *(char **)(lVar3 + 8);
      cVar2 = pcVar4[lVar13];
    }
  }
  FUN_1803e3020(param_1);
  if (0x40 < (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4)) {
    FUN_180626f80(&unknown_var_7360_ptr);
  }
  puStack_58 = &unknown_var_3456_ptr;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (system_data_2847 == '\0') {
    FUN_1803e4ba0(param_1,param_2);
  }
  uStack_50 = 0;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  puStack_58 = &unknown_var_720_ptr;
  puStack_d8 = &unknown_var_3456_ptr;
  if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_d0 = 0;
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  puStack_d8 = &unknown_var_720_ptr;
  puStack_b8 = &unknown_var_3456_ptr;
  if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_b0 = 0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  puStack_b8 = &unknown_var_720_ptr;
  puStack_78 = &unknown_var_3456_ptr;
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  lStack_70 = 0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  puStack_78 = &unknown_var_720_ptr;
  puStack_98 = &unknown_var_3456_ptr;
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1803e28f0(longlong param_1)
void FUN_1803e28f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  int8_t *puVar4;
  longlong *plVar5;
  
  FUN_1803b9430(param_1,*(uint64_t *)(param_1 + 0x10));
  *(longlong *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(longlong *)(param_1 + 8) = param_1;
  FUN_1800572d0(param_1 + 0x30);
  puVar3 = *(uint64_t **)(param_1 + 0x70);
  lVar1 = param_1 + 0x60;
  if (puVar3 != (uint64_t *)0x0) {
    FUN_18004b790(lVar1,*puVar3);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x68) = lVar1;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(int8_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0xf8) = *(uint64_t *)(param_1 + 0xf0);
  FUN_180057110(param_1 + 0x110);
  FUN_1800572d0(param_1 + 0x90);
  lVar1 = param_1 + 0xc0;
  puVar3 = *(uint64_t **)(param_1 + 0xd0);
  if (puVar3 != (uint64_t *)0x0) {
    FUN_18004b790(lVar1,*puVar3);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int8_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 200) = lVar1;
  *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(param_1 + 0x130);
  puVar4 = *(int8_t **)(*(longlong *)(param_1 + 0x188) + 8);
  *(int32_t *)(*(longlong *)(param_1 + 0x188) + 0x10) = 0;
  if (puVar4 != (int8_t *)0x0) {
    *puVar4 = 0;
  }
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x108);
    plVar5 = *(longlong **)(lVar1 + 0x100);
    if (plVar5 != plVar2) {
      do {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x38))();
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar2);
      *(longlong *)(lVar1 + 0x108) = *(longlong *)(lVar1 + 0x100);
      return;
    }
    *(longlong **)(lVar1 + 0x108) = plVar5;
    return;
  }
  return;
}






// 函数: void FUN_1803e28f8(longlong param_1)
void FUN_1803e28f8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  int8_t *puVar4;
  longlong *plVar5;
  
  FUN_1803b9430();
  *(longlong *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(longlong *)(param_1 + 8) = param_1;
  FUN_1800572d0(param_1 + 0x30);
  puVar3 = *(uint64_t **)(param_1 + 0x70);
  lVar1 = param_1 + 0x60;
  if (puVar3 != (uint64_t *)0x0) {
    FUN_18004b790(lVar1,*puVar3);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x68) = lVar1;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(int8_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0xf8) = *(uint64_t *)(param_1 + 0xf0);
  FUN_180057110(param_1 + 0x110);
  FUN_1800572d0(param_1 + 0x90);
  lVar1 = param_1 + 0xc0;
  puVar3 = *(uint64_t **)(param_1 + 0xd0);
  if (puVar3 != (uint64_t *)0x0) {
    FUN_18004b790(lVar1,*puVar3);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int8_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 200) = lVar1;
  *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(param_1 + 0x130);
  puVar4 = *(int8_t **)(*(longlong *)(param_1 + 0x188) + 8);
  *(int32_t *)(*(longlong *)(param_1 + 0x188) + 0x10) = 0;
  if (puVar4 != (int8_t *)0x0) {
    *puVar4 = 0;
  }
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x108);
    plVar5 = *(longlong **)(lVar1 + 0x100);
    if (plVar5 != plVar2) {
      do {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x38))();
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar2);
      *(longlong *)(lVar1 + 0x108) = *(longlong *)(lVar1 + 0x100);
      return;
    }
    *(longlong **)(lVar1 + 0x108) = plVar5;
    return;
  }
  return;
}






// 函数: void FUN_1803e2a17(int8_t *param_1)
void FUN_1803e2a17(int8_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  
  *param_1 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 400);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = *(longlong **)(lVar2 + 0x108);
  plVar3 = *(longlong **)(lVar2 + 0x100);
  if (plVar3 != plVar1) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    *(longlong *)(lVar2 + 0x108) = *(longlong *)(lVar2 + 0x100);
    return;
  }
  *(longlong **)(lVar2 + 0x108) = plVar3;
  return;
}






// 函数: void FUN_1803e2a2b(longlong param_1)
void FUN_1803e2a2b(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x108);
  plVar2 = *(longlong **)(param_1 + 0x100);
  if (plVar2 != plVar1) {
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x100);
    return;
  }
  *(longlong **)(param_1 + 0x108) = plVar2;
  return;
}







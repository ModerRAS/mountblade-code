#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part028.c - 5 个函数

// 函数: void FUN_1800babf0(uint64_t param_1)
void FUN_1800babf0(uint64_t param_1)

{
  int iVar1;
  int32_t uVar2;
  uint uVar3;
  int16_t *puVar4;
  int8_t *puVar5;
  int8_t *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  void **ppuVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  int8_t auStack_148 [32];
  int8_t uStack_128;
  uint uStack_118;
  int8_t uStack_114;
  void *puStack_110;
  int8_t *puStack_108;
  uint uStack_100;
  uint64_t uStack_f8;
  void *puStack_f0;
  int8_t *puStack_e8;
  uint uStack_e0;
  uint64_t uStack_d8;
  longlong *plStack_d0;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  ulonglong uStack_b0;
  void *puStack_a8;
  int16_t *puStack_a0;
  int32_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  int8_t *puStack_60;
  int iStack_58;
  int8_t auStack_50 [16];
  ulonglong uStack_40;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_148;
  uVar17 = 0;
  uVar3 = 0;
  uStack_118 = 0;
  uStack_80 = param_1;
  uStack_70 = param_1;
  FUN_180627ae0(&puStack_f0);
  puStack_68 = &unknown_var_7512_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  iStack_58 = 9;
  strcpy_s(auStack_50,0x10,&system_data_2fe8);
  iVar1 = FUN_180628d60(&puStack_f0,&puStack_68);
  if (iVar1 < 0) {
    plVar8 = (longlong *)*_DAT_180c86870;
    plStack_d0 = plVar8;
    if (plVar8[1] - *plVar8 >> 5 != 0) {
      uStack_88 = 0;
      puStack_a8 = &unknown_var_3456_ptr;
      uStack_90 = 0;
      puStack_a0 = (int16_t *)0x0;
      uStack_98 = 0;
      puVar4 = (int16_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *(int8_t *)puVar4 = 0;
      puStack_a0 = puVar4;
      uVar2 = FUN_18064e990(puVar4);
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar2);
      *puVar4 = 0x2f;
      uStack_98 = 1;
      lVar7 = *plVar8;
      puStack_c8 = &unknown_var_3456_ptr;
      uStack_b0 = 0;
      puStack_c0 = (int8_t *)0x0;
      uStack_b8 = 0;
      uStack_118 = 2;
      puVar5 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *puVar5 = 0;
      puStack_c0 = puVar5;
      uVar3 = FUN_18064e990(puVar5);
      *puVar5 = *(int8_t *)puVar4;
      uStack_b8 = 1;
      puVar5[1] = 0;
      uStack_b0 = (ulonglong)uVar3;
      iVar1 = *(int *)(lVar7 + 0x10);
      if (0 < iVar1) {
        if ((iVar1 != -1) && (uVar3 < iVar1 + 2U)) {
          uStack_128 = 0x13;
          puVar5 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,iVar1 + 2U,0x10);
          puStack_c0 = puVar5;
          uVar2 = FUN_18064e990(puVar5);
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
          iVar1 = *(int *)(lVar7 + 0x10);
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar5 + 1,*(uint64_t *)(lVar7 + 8),(longlong)(iVar1 + 1));
      }
      puStack_110 = &unknown_var_3456_ptr;
      uStack_f8._0_4_ = 0;
      uStack_f8._4_4_ = 0;
      puVar6 = (int8_t *)0x0;
      puStack_108 = (int8_t *)0x0;
      uStack_100 = 0;
      uStack_118 = 6;
      if (puVar5 != (int8_t *)0x0) {
        puVar6 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *puVar6 = 0;
        puStack_108 = puVar6;
        uStack_f8._0_4_ = FUN_18064e990(puVar6);
      }
                    // WARNING: Subroutine does not return
      memcpy(puVar6,puVar5,1);
    }
    lVar7 = FUN_180628ca0();
    uVar19 = *(uint *)(lVar7 + 0x10);
    uVar17 = (ulonglong)uVar19;
    if (*(longlong *)(lVar7 + 8) != 0) {
      FUN_1806277c0(&puStack_f0,uVar17);
    }
    if (uVar19 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_e8,*(uint64_t *)(lVar7 + 8),uVar17);
    }
    if (puStack_e8 != (int8_t *)0x0) {
      puStack_e8[uVar17] = 0;
    }
  }
  else {
    for (uVar19 = iStack_58 + iVar1;
        (uVar18 = (ulonglong)uVar19, (int)uVar19 < (int)uStack_e0 && (puStack_e8[uVar18] == '/'));
        uVar19 = uVar19 + 1) {
    }
    iVar1 = uVar19 - uStack_e0;
    uVar9 = uVar18;
    uVar12 = uVar19;
    while (uVar11 = (uint)uVar9, SBORROW4(uVar12,uStack_e0) != iVar1 < 0) {
      if ((uVar11 != uVar19) && (puStack_e8[uVar9] == '/')) {
        if ((int)uVar11 < (int)uStack_e0) {
          if ((int)uVar11 < 0) {
            uVar11 = uStack_e0;
          }
          puStack_110 = &unknown_var_3456_ptr;
          puStack_108 = (int8_t *)0x0;
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_118 = 8;
          iVar1 = uStack_e0 - uVar19;
          if ((int)(uVar11 - uVar19) < (int)(uStack_e0 - uVar19)) {
            iVar1 = uVar11 - uVar19;
          }
          uVar9 = uVar17;
          if (iVar1 != -1) {
            iVar1 = iVar1 + 2;
            if (iVar1 < 0x10) {
              iVar1 = 0x10;
            }
            puStack_108 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar1,0x13);
            *puStack_108 = 0;
            uVar15 = (ulonglong)puStack_108 & 0xffffffffffc00000;
            if (uVar15 == 0) {
              uVar9 = 0;
            }
            else {
              lVar7 = ((longlong)puStack_108 - uVar15 >> 0x10) * 0x50 + 0x80 + uVar15;
              puVar14 = (uint *)(lVar7 - (ulonglong)*(uint *)(lVar7 + 4));
              uVar9 = (ulonglong)puVar14[7];
              if ((*(byte *)((longlong)puVar14 + 0xe) & 2) == 0) {
                if (0x3ffffff < uVar9) {
                  uVar9 = (ulonglong)*puVar14 << 0x10;
                }
              }
              else {
                uVar16 = uVar9;
                if (0x3ffffff < uVar9) {
                  uVar16 = (ulonglong)*puVar14 << 0x10;
                }
                if (0x3ffffff < uVar9) {
                  uVar9 = (ulonglong)*puVar14 << 0x10;
                }
                uVar9 = uVar9 - ((longlong)puStack_108 -
                                (((longlong)((longlong)puVar14 + (-0x80 - uVar15)) / 0x50) * 0x10000
                                + uVar15)) % uVar16;
              }
            }
            uStack_f8 = CONCAT44(uStack_f8._4_4_,(int)uVar9);
          }
          uStack_d8._0_4_ = (uint)uVar9;
          lVar7 = (longlong)(int)uVar19;
          plStack_d0 = (longlong *)(longlong)(int)uVar11;
          puVar5 = puStack_108;
          uVar3 = 0;
          uVar19 = 0;
          if (lVar7 < (longlong)plStack_d0) goto LAB_1800bb220;
          goto LAB_1800bb37f;
        }
        break;
      }
      uVar12 = uVar11 + 1;
      uVar9 = (ulonglong)uVar12;
      iVar1 = uVar12 - uStack_e0;
    }
    lVar7 = FUN_180628ca0();
    uVar19 = *(uint *)(lVar7 + 0x10);
    if ((*(longlong *)(lVar7 + 8) != 0) && (uVar19 != 0)) {
      uVar12 = uVar19 + 1;
      if (puStack_e8 == (int8_t *)0x0) {
        if ((int)uVar12 < 0x10) {
          uVar12 = 0x10;
        }
        puStack_e8 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar12,0x13);
        *puStack_e8 = 0;
        uVar2 = FUN_18064e990(puStack_e8);
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar2);
      }
      else if ((uint)uStack_d8 < uVar12) {
        uStack_128 = 0x13;
        puStack_e8 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_e8,uVar12,0x10);
        uVar17 = (ulonglong)puStack_e8 & 0xffffffffffc00000;
        if (uVar17 == 0) {
          uStack_d8 = uStack_d8 & 0xffffffff00000000;
        }
        else {
          lVar13 = ((longlong)puStack_e8 - uVar17 >> 0x10) * 0x50 + 0x80 + uVar17;
          puVar14 = (uint *)(lVar13 - (ulonglong)*(uint *)(lVar13 + 4));
          if ((*(byte *)((longlong)puVar14 + 0xe) & 2) == 0) {
            uVar12 = puVar14[7];
            if (0x3ffffff < uVar12) {
              uVar12 = *puVar14 << 0x10;
            }
            uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar12);
          }
          else {
            uVar12 = puVar14[7];
            if (uVar12 < 0x4000000) {
              uVar18 = (ulonglong)uVar12;
            }
            else {
              uVar18 = (ulonglong)*puVar14 << 0x10;
            }
            if (0x3ffffff < uVar12) {
              uVar12 = *puVar14 << 0x10;
            }
            uStack_d8 = CONCAT44(uStack_d8._4_4_,
                                 uVar12 - (int)(((longlong)puStack_e8 -
                                                (((longlong)((longlong)puVar14 + (-0x80 - uVar17)) /
                                                 0x50) * 0x10000 + uVar17)) % uVar18));
          }
        }
      }
    }
    if (uVar19 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_e8,*(uint64_t *)(lVar7 + 8),(ulonglong)uVar19);
    }
    if (puStack_e8 != (int8_t *)0x0) {
      puStack_e8[uVar19] = 0;
    }
  }
  uStack_e0 = 0;
  uStack_d8._4_4_ = *(uint *)(lVar7 + 0x1c);
  goto LAB_1800bb587;
LAB_1800bb220:
  do {
    uStack_d8._0_4_ = (uint)uVar9;
    uVar12 = (uint)uVar17;
    uVar3 = uStack_118;
    uVar19 = uVar12;
    if (uStack_e0 <= (uint)uVar18) break;
    uStack_114 = puStack_e8[lVar7];
    uVar19 = uVar12 + 1;
    if (uVar19 != 0) {
      uVar12 = uVar12 + 2;
      if (puVar5 == (int8_t *)0x0) {
        if ((int)uVar12 < 0x10) {
          uVar12 = 0x10;
        }
        puVar5 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar12,0x13);
        *puVar5 = 0;
      }
      else {
        if (uVar12 <= (uint)uStack_d8) goto LAB_1800bb353;
        uStack_128 = 0x13;
        puVar5 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,uVar12,0x10);
      }
      uVar15 = (ulonglong)puVar5 & 0xffffffffffc00000;
      if (uVar15 == 0) {
        uVar9 = 0;
      }
      else {
        lVar13 = ((longlong)puVar5 - uVar15 >> 0x10) * 0x50 + 0x80 + uVar15;
        puVar14 = (uint *)(lVar13 - (ulonglong)*(uint *)(lVar13 + 4));
        if ((*(byte *)((longlong)puVar14 + 0xe) & 2) == 0) {
          uVar9 = (ulonglong)puVar14[7];
          if (0x3ffffff < uVar9) {
            uVar9 = (ulonglong)*puVar14 << 0x10;
          }
        }
        else {
          uVar9 = (ulonglong)puVar14[7];
          if (uVar9 < 0x4000000) {
            uVar16 = (ulonglong)puVar14[7];
          }
          else {
            uVar16 = (ulonglong)*puVar14 << 0x10;
          }
          if (0x3ffffff < uVar9) {
            uVar9 = (ulonglong)*puVar14 << 0x10;
          }
          uVar9 = uVar9 - ((longlong)puVar5 -
                          (((longlong)((longlong)puVar14 + (-0x80 - uVar15)) / 0x50) * 0x10000 +
                          uVar15)) % uVar16;
        }
      }
      uStack_f8 = CONCAT44(uStack_f8._4_4_,(int)uVar9);
      uVar9 = uVar9 & 0xffffffff;
      puStack_108 = puVar5;
    }
LAB_1800bb353:
    uStack_d8._0_4_ = (uint)uVar9;
    puVar5[uVar17] = uStack_114;
    puVar5[uVar19] = 0;
    uVar17 = (ulonglong)uVar19;
    uVar18 = (ulonglong)((uint)uVar18 + 1);
    lVar7 = lVar7 + 1;
    uVar3 = uStack_118;
    uStack_100 = uVar19;
  } while (lVar7 < (longlong)plStack_d0);
LAB_1800bb37f:
  if (puStack_e8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_d8._4_4_ = 0;
  uStack_100 = 0;
  uVar3 = uVar3 & 0xfffffff7;
  puStack_108 = (int8_t *)0x0;
  uStack_f8 = 0;
  puStack_110 = &unknown_var_720_ptr;
  uStack_118 = uVar3;
  puStack_e8 = puVar5;
  uStack_e0 = uVar19;
LAB_1800bb587:
  lVar7 = *_DAT_180c86870;
  plVar8 = (longlong *)FUN_180058080(lVar7 + 0x938,&plStack_d0,&puStack_f0);
  ppuVar10 = &puStack_f0;
  if (*plVar8 != lVar7 + 0x938) {
    ppuVar10 = (void **)(*plVar8 + 0x40);
  }
  FUN_180627ae0(uStack_80,ppuVar10);
  uStack_118 = uVar3 | 1;
  puStack_68 = &unknown_var_720_ptr;
  puStack_f0 = &unknown_var_3456_ptr;
  if (puStack_e8 == (int8_t *)0x0) {
    puStack_e8 = (int8_t *)0x0;
    uStack_d8 = (ulonglong)uStack_d8._4_4_ << 0x20;
    puStack_f0 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_148);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001800bb8f2)
// WARNING: Removing unreachable block (ram,0x0001800bb8fa)
// WARNING: Removing unreachable block (ram,0x0001800bb900)
// WARNING: Removing unreachable block (ram,0x0001800bb90d)
// WARNING: Removing unreachable block (ram,0x0001800bb93e)
// WARNING: Removing unreachable block (ram,0x0001800bb946)
// WARNING: Removing unreachable block (ram,0x0001800bb949)
// WARNING: Removing unreachable block (ram,0x0001800bb916)
// WARNING: Removing unreachable block (ram,0x0001800bb91b)
// WARNING: Removing unreachable block (ram,0x0001800bb962)
// WARNING: Removing unreachable block (ram,0x0001800bb973)
// WARNING: Removing unreachable block (ram,0x0001800bb989)
// WARNING: Removing unreachable block (ram,0x0001800bb991)
// WARNING: Removing unreachable block (ram,0x0001800bb9f3)
// WARNING: Removing unreachable block (ram,0x0001800bb9fb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800bb630(longlong param_1)

{
  longlong *plVar1;
  int32_t uVar2;
  int iVar3;
  uint uVar4;
  uint64_t *puVar5;
  int16_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  longlong lVar9;
  uint64_t uVar10;
  ulonglong uVar11;
  void *puStack_e0;
  int16_t *puStack_d8;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  void *puStack_c0;
  uint64_t *puStack_b8;
  int32_t uStack_b0;
  uint64_t uStack_a8;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  uint64_t uStack_88;
  void *puStack_80;
  int8_t *puStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  longlong *plStack_60;
  uint64_t uStack_58;
  
  uStack_58 = 0xfffffffffffffffe;
  FUN_180627ae0();
  puStack_c0 = &unknown_var_3456_ptr;
  uStack_a8 = 0;
  puStack_b8 = (uint64_t *)0x0;
  uStack_b0 = 0;
  puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_b8 = puVar5;
  uVar2 = FUN_18064e990(puVar5);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar2);
  *puVar5 = 0x73656c75646f4d2f;
  *(int16_t *)(puVar5 + 1) = 0x2f;
  uStack_b0 = 9;
  iVar3 = FUN_180628d60(param_1,&puStack_c0);
  if (-1 < iVar3) {
    uVar10 = FUN_180629a40(param_1,&puStack_80,iVar3 + 9,*(int *)(param_1 + 0x10) + 1);
    FUN_18005d190(param_1,uVar10);
    puStack_80 = &unknown_var_3456_ptr;
    if (puStack_78 == (int8_t *)0x0) {
      puStack_78 = (int8_t *)0x0;
      uStack_68 = (ulonglong)uStack_68._4_4_ << 0x20;
      puStack_80 = &unknown_var_720_ptr;
      puStack_e0 = &unknown_var_3456_ptr;
      uStack_c8 = 0;
      puStack_d8 = (int16_t *)0x0;
      uStack_d0 = 0;
      puVar6 = (int16_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *(int8_t *)puVar6 = 0;
      puStack_d8 = puVar6;
      uVar2 = FUN_18064e990(puVar6);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar2);
      *puVar6 = 0x2f;
      uStack_d0 = 1;
      FUN_180628d60(param_1,&puStack_e0);
      puStack_e0 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plVar1 = (longlong *)*_DAT_180c86870;
  plStack_60 = plVar1;
  if (plVar1[1] - *plVar1 >> 5 != 0) {
    puStack_e0 = &unknown_var_3456_ptr;
    uStack_c8 = 0;
    puStack_d8 = (int16_t *)0x0;
    uStack_d0 = 0;
    puVar6 = (int16_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar6 = 0;
    puStack_d8 = puVar6;
    uVar2 = FUN_18064e990(puVar6);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar2);
    *puVar6 = 0x2f;
    uStack_d0 = 1;
    lVar9 = *plVar1;
    puStack_80 = &unknown_var_3456_ptr;
    uStack_68 = 0;
    puStack_78 = (int8_t *)0x0;
    uStack_70 = 0;
    puVar7 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *puVar7 = 0;
    puStack_78 = puVar7;
    uVar4 = FUN_18064e990(puVar7);
    *puVar7 = *(int8_t *)puVar6;
    uStack_70 = 1;
    puVar7[1] = 0;
    uStack_68 = (ulonglong)uVar4;
    iVar3 = *(int *)(lVar9 + 0x10);
    if (iVar3 < 1) {
      puStack_a0 = &unknown_var_3456_ptr;
      uStack_88 = 0;
      puVar8 = (int8_t *)0x0;
      puStack_98 = (int8_t *)0x0;
      uStack_90 = 0;
      if (puVar7 != (int8_t *)0x0) {
        puVar8 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *puVar8 = 0;
        puStack_98 = puVar8;
        uVar2 = FUN_18064e990(puVar8);
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar2);
      }
                    // WARNING: Subroutine does not return
      memcpy(puVar8,puVar7,1);
    }
    if ((iVar3 != -1) && (uVar4 < iVar3 + 2U)) {
      puVar7 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar7,iVar3 + 2U,0x10,0x13);
      puStack_78 = puVar7;
      uVar2 = FUN_18064e990(puVar7);
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar2);
      iVar3 = *(int *)(lVar9 + 0x10);
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar7 + 1,*(uint64_t *)(lVar9 + 8),(longlong)(iVar3 + 1));
  }
  lVar9 = FUN_180628ca0();
  uVar4 = *(uint *)(lVar9 + 0x10);
  uVar11 = (ulonglong)uVar4;
  if (*(longlong *)(lVar9 + 8) != 0) {
    FUN_1806277c0(param_1,uVar11);
  }
  if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_1 + 8),*(uint64_t *)(lVar9 + 8),uVar11);
  }
  *(int32_t *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    *(int8_t *)(uVar11 + *(longlong *)(param_1 + 8)) = 0;
  }
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(lVar9 + 0x1c);
  puStack_c0 = &unknown_var_3456_ptr;
  if (puVar5 == (uint64_t *)0x0) {
    return param_1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800bbc40(uint64_t *param_1,int *param_2)
void FUN_1800bbc40(uint64_t *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int8_t auStack_558 [32];
  int8_t *puStack_538;
  int32_t uStack_530;
  uint64_t uStack_528;
  uint64_t uStack_520;
  void *puStack_518;
  longlong lStack_510;
  int iStack_508;
  ulonglong uStack_500;
  int32_t uStack_4f8;
  void *puStack_4f0;
  longlong lStack_4e8;
  int32_t uStack_4e0;
  ulonglong uStack_4d8;
  uint64_t uStack_4d0;
  uint64_t *puStack_4c8;
  int8_t auStack_398 [288];
  int8_t auStack_278 [560];
  ulonglong uStack_48;
  
  uStack_4d0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_558;
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  uStack_4f8 = 1;
  puStack_518 = &unknown_var_3456_ptr;
  uStack_500 = 0;
  lStack_510 = 0;
  iStack_508 = 0;
  iVar1 = *param_2;
  puStack_4c8 = param_1;
  if (iVar1 == 0) {
    lVar2 = FUN_1800ba4b0(&puStack_4f0,&unknown_var_8996_ptr);
    if (lStack_510 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    iStack_508 = *(int *)(lVar2 + 0x10);
    lStack_510 = *(longlong *)(lVar2 + 8);
    uStack_500 = *(ulonglong *)(lVar2 + 0x18);
    *(int32_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 8) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    puStack_4f0 = &unknown_var_3456_ptr;
    if (lStack_4e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        GetTempPathW(0x118,auStack_278);
        puStack_4f0 = &unknown_var_3456_ptr;
        uStack_4d8 = 0;
        lStack_4e8 = 0;
        uStack_4e0 = 0;
        uStack_520 = 0;
        uStack_528 = 0;
        uStack_530 = 0x118;
        puStack_538 = auStack_398;
        iVar1 = WideCharToMultiByte(0xfde9,0,auStack_278,0xffffffff);
        FUN_1806277c0(&puStack_4f0,iVar1);
                    // WARNING: Subroutine does not return
        memcpy(lStack_4e8,auStack_398,(longlong)iVar1);
      }
      goto LAB_1800bbf4b;
    }
    lVar2 = FUN_1806242f0(&puStack_4f0);
    if (lStack_510 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    iStack_508 = *(int *)(lVar2 + 0x10);
    lStack_510 = *(longlong *)(lVar2 + 8);
    uStack_500 = *(ulonglong *)(lVar2 + 0x18);
    *(int32_t *)(lVar2 + 0x10) = 0;
    *(uint64_t *)(lVar2 + 8) = 0;
    *(uint64_t *)(lVar2 + 0x18) = 0;
    puStack_4f0 = &unknown_var_3456_ptr;
    if (lStack_4e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  uStack_4d8 = uStack_4d8 & 0xffffffff00000000;
  lStack_4e8 = 0;
  puStack_4f0 = &unknown_var_720_ptr;
LAB_1800bbf4b:
  if (0 < iStack_508) {
    FUN_1806277c0(param_1,*(int *)(param_1 + 2) + iStack_508);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 2) + param_1[1],lStack_510,(longlong)(iStack_508 + 1));
  }
  iVar1 = *(int *)(param_1 + 2) + 1;
  FUN_1806277c0(param_1,iVar1);
  *(int16_t *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]) = 0x2f;
  *(int *)(param_1 + 2) = iVar1;
  FUN_1806281a0(param_1,param_2 + 1);
  puStack_518 = &unknown_var_3456_ptr;
  if (lStack_510 == 0) {
    lStack_510 = 0;
    uStack_500 = uStack_500 & 0xffffffff00000000;
    puStack_518 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_558);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t *
FUN_1800bc000(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_38;
  longlong lStack_30;
  int iStack_28;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  uVar2 = 1;
  FUN_1800bbc40(&puStack_38);
  if (0 < iStack_28) {
    FUN_1806277c0(param_1,*(int *)(param_1 + 2) + iStack_28);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 2) + param_1[1],lStack_30,(longlong)(iStack_28 + 1),
           param_4,uVar2,uVar3);
  }
  iVar1 = *(int *)(param_1 + 2) + 1;
  FUN_1806277c0(param_1,iVar1);
  *(int16_t *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]) = 0x2f;
  *(int *)(param_1 + 2) = iVar1;
  FUN_1806281a0(param_1,param_2 + 0x204);
  puStack_38 = &unknown_var_3456_ptr;
  if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_1;
}






// 函数: void FUN_1800bc110(longlong *param_1)
void FUN_1800bc110(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    *param_1 = 0;
    return;
  }
  if (((char)plVar1[3] == '\0') && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar1);
}



longlong FUN_1800bc180(longlong param_1)

{
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(uint64_t *)(param_1 + 0xc0) = 0;
  *(uint64_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  FUN_1808fc838(param_1 + 0xf0,8,0x10,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(param_1 + 0x170,8,0x10,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(param_1 + 0x1f0,8,0x10,&SUB_18005d5f0,FUN_180045af0);
  *(uint64_t *)(param_1 + 0x270) = 0;
  *(uint64_t *)(param_1 + 0x278) = 0;
  *(uint64_t *)(param_1 + 0x280) = 0;
  *(uint64_t *)(param_1 + 0x288) = 0;
  *(uint64_t *)(param_1 + 0x290) = 0;
  *(uint64_t *)(param_1 + 0x298) = 0;
  *(int32_t *)(param_1 + 0x2c0) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2c4) = 0x40000000;
  *(int32_t *)(param_1 + 0x2cc) = 3;
  *(uint64_t *)(param_1 + 0x2b0) = 1;
  *(void **)(param_1 + 0x2a8) = &system_data_0000;
  *(uint64_t *)(param_1 + 0x2b8) = 0;
  *(int32_t *)(param_1 + 0x2c8) = 0;
  *(uint64_t *)(param_1 + 0x2d0) = 0;
  *(uint64_t *)(param_1 + 0x2e0) = 0;
  *(uint64_t *)(param_1 + 0x2e8) = 0;
  *(uint64_t *)(param_1 + 0x2f0) = 0;
  *(uint64_t *)(param_1 + 0x2f8) = 0;
  *(uint64_t *)(param_1 + 0x300) = 0;
  *(uint64_t *)(param_1 + 0x308) = 0;
  *(uint64_t *)(param_1 + 0x310) = 0;
  *(uint64_t *)(param_1 + 0x318) = 0;
  *(uint64_t *)(param_1 + 800) = 0;
  *(uint64_t *)(param_1 + 0x328) = 0;
  *(uint64_t *)(param_1 + 0x330) = 0;
  *(uint64_t *)(param_1 + 0x338) = 0;
  *(uint64_t *)(param_1 + 0x340) = 0;
  *(uint64_t *)(param_1 + 0x348) = 0;
  *(uint64_t *)(param_1 + 0x350) = 0;
  *(uint64_t *)(param_1 + 0x358) = 0;
  *(uint64_t *)(param_1 + 0x360) = 0;
  *(uint64_t *)(param_1 + 0x368) = 0;
  *(uint64_t *)(param_1 + 0x370) = 0;
  *(uint64_t *)(param_1 + 0x378) = 0;
  *(uint64_t *)(param_1 + 0x380) = 0;
  *(uint64_t *)(param_1 + 0x388) = 0;
  *(uint64_t *)(param_1 + 0x390) = 0;
  *(uint64_t *)(param_1 + 0x398) = 0;
  *(uint64_t *)(param_1 + 0x3a0) = 0;
  *(uint64_t *)(param_1 + 0x3a8) = 0;
  *(uint64_t *)(param_1 + 0x3b0) = 0;
  *(uint64_t *)(param_1 + 0x3b8) = 0;
  *(uint64_t *)(param_1 + 0x3c0) = 0;
  *(uint64_t *)(param_1 + 0x3c8) = 0;
  *(uint64_t *)(param_1 + 0x3d0) = 0;
  *(uint64_t *)(param_1 + 0x3d8) = 0;
  *(uint64_t *)(param_1 + 0x3e0) = 0;
  *(uint64_t *)(param_1 + 1000) = 0;
  *(uint64_t *)(param_1 + 0x3f0) = 0;
  *(uint64_t *)(param_1 + 0x3f8) = 0;
  *(uint64_t *)(param_1 + 0x400) = 0;
  *(uint64_t *)(param_1 + 0x408) = 0;
  *(uint64_t *)(param_1 + 0x410) = 0;
  _Mtx_init_in_situ(param_1 + 0x418,0x102);
  FUN_1800bcab0(param_1);
  return param_1;
}






// 函数: void FUN_1800bc460(longlong param_1)
void FUN_1800bc460(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1800bc480(longlong param_1)
void FUN_1800bc480(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}







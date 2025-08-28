#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part248.c - 5 个函数

// 函数: void FUN_18040a340(uint64_t param_1,longlong param_2,int param_3,int32_t param_4)
void FUN_18040a340(uint64_t param_1,longlong param_2,int param_3,int32_t param_4)

{
  byte bVar1;
  bool bVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint64_t *puVar8;
  void *puVar9;
  uint64_t *puVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;
  longlong lVar14;
  int8_t *puVar15;
  int iVar16;
  longlong lVar17;
  char *pcVar18;
  uint64_t *puVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  int32_t extraout_XMM0_Da;
  int32_t uVar23;
  int32_t auStackX_20 [2];
  void *puStack_128;
  byte *pbStack_120;
  int iStack_118;
  uint64_t uStack_110;
  void *puStack_108;
  uint64_t *puStack_100;
  int32_t uStack_f8;
  ulonglong uStack_f0;
  void *puStack_e8;
  uint64_t *puStack_e0;
  int32_t uStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  uint64_t *puStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  longlong lStack_a0;
  void *puStack_98;
  longlong lStack_90;
  int32_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int8_t uStack_6c;
  int8_t uStack_6b;
  uint64_t uStack_68;
  longlong lStack_60;
  uint64_t uStack_58;
  
  if (0 < param_3) {
    uStack_58 = 0xfffffffffffffffe;
    pcVar20 = (char *)0x0;
    lStack_60 = (longlong)param_3;
    lStack_a0 = 0;
    auStackX_20[0] = param_4;
    do {
      pcVar22 = "base";
      do {
        pcVar21 = pcVar22;
        pcVar22 = pcVar21 + 1;
      } while (*pcVar22 != '\0');
      for (pcVar22 = *(char **)(lStack_a0 * 0x3088 + 0x30 + param_2); pcVar18 = pcVar20,
          pcVar22 != (char *)0x0; pcVar22 = *(char **)(pcVar22 + 0x58)) {
        pcVar12 = *(char **)pcVar22;
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x180d48d24;
          pcVar11 = pcVar20;
        }
        else {
          pcVar11 = *(char **)(pcVar22 + 0x10);
        }
        if (pcVar11 == pcVar21 + -0x180a04ee3) {
          pcVar11 = pcVar12 + (longlong)pcVar11;
          pcVar18 = pcVar22;
          if (pcVar11 <= pcVar12) break;
          lVar14 = (longlong)&system_data_4ee4 - (longlong)pcVar12;
          while (*pcVar12 == pcVar12[lVar14]) {
            pcVar12 = pcVar12 + 1;
            if (pcVar11 <= pcVar12) goto LAB_18040a42e;
          }
        }
      }
LAB_18040a42e:
      pcVar22 = "decal_sets";
      do {
        pcVar21 = pcVar22;
        pcVar22 = pcVar21 + 1;
      } while (*pcVar22 != '\0');
      for (pcVar22 = *(char **)(pcVar18 + 0x30); pcVar18 = pcVar20, pcVar22 != (char *)0x0;
          pcVar22 = *(char **)(pcVar22 + 0x58)) {
        pcVar12 = *(char **)pcVar22;
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x180d48d24;
          pcVar11 = pcVar20;
        }
        else {
          pcVar11 = *(char **)(pcVar22 + 0x10);
        }
        if (pcVar11 == pcVar21 + -0x180a12d77) {
          pcVar11 = pcVar11 + (longlong)pcVar12;
          pcVar18 = pcVar22;
          if (pcVar11 <= pcVar12) break;
          lVar14 = (longlong)&unknown_var_3880_ptr - (longlong)pcVar12;
          while (*pcVar12 == pcVar12[lVar14]) {
            pcVar12 = pcVar12 + 1;
            if (pcVar11 <= pcVar12) goto LAB_18040a48e;
          }
        }
      }
LAB_18040a48e:
      pcVar22 = "decal_set";
      do {
        pcVar21 = pcVar22;
        pcVar22 = pcVar21 + 1;
      } while (*pcVar22 != '\0');
      for (pcVar22 = *(char **)(pcVar18 + 0x30); pcVar18 = pcVar20, pcVar22 != (char *)0x0;
          pcVar22 = *(char **)(pcVar22 + 0x58)) {
        pcVar12 = *(char **)pcVar22;
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x180d48d24;
          pcVar11 = pcVar20;
        }
        else {
          pcVar11 = *(char **)(pcVar22 + 0x10);
        }
        if (pcVar11 == pcVar21 + -0x180a12d87) {
          pcVar11 = pcVar12 + (longlong)pcVar11;
          pcVar18 = pcVar22;
          if (pcVar11 <= pcVar12) break;
          lVar14 = (longlong)&unknown_var_3896_ptr - (longlong)pcVar12;
          while (*pcVar12 == pcVar12[lVar14]) {
            pcVar12 = pcVar12 + 1;
            if (pcVar11 <= pcVar12) goto LAB_18040a4ef;
          }
        }
      }
LAB_18040a4ef:
      if (pcVar18 != (char *)0x0) {
LAB_18040a500:
        puStack_128 = &unknown_var_3456_ptr;
        uStack_110 = 0;
        pbStack_120 = (byte *)0x0;
        iStack_118 = 0;
        pcVar22 = "name";
        do {
          pcVar21 = pcVar22;
          pcVar22 = pcVar21 + 1;
        } while (*pcVar22 != '\0');
        for (puVar10 = *(uint64_t **)(pcVar18 + 0x40); puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar22 = (char *)*puVar10;
          if (pcVar22 == (char *)0x0) {
            pcVar22 = (char *)0x180d48d24;
            pcVar12 = pcVar20;
          }
          else {
            pcVar12 = (char *)puVar10[2];
          }
          if (pcVar12 == pcVar21 + -0x180a03a83) {
            pcVar12 = pcVar12 + (longlong)pcVar22;
            if (pcVar12 <= pcVar22) {
LAB_18040a580:
              lVar14 = 0x180d48d24;
              if (puVar10[1] != 0) {
                lVar14 = puVar10[1];
              }
              FUN_180627c50(&puStack_128,lVar14);
              puVar8 = (uint64_t *)&system_data_aec0;
              puVar10 = _DAT_180bfaed0;
              if (_DAT_180bfaed0 == (uint64_t *)0x0) goto LAB_18040a672;
              goto LAB_18040a5c0;
            }
            lVar14 = (longlong)&system_data_3a84 - (longlong)pcVar22;
            while (*pcVar22 == pcVar22[lVar14]) {
              pcVar22 = pcVar22 + 1;
              if (pcVar12 <= pcVar22) goto LAB_18040a580;
            }
          }
        }
        goto LAB_18040ac5d;
      }
LAB_18040aceb:
      lStack_a0 = lStack_a0 + 1;
    } while (lStack_a0 < lStack_60);
  }
  return;
LAB_18040a5c0:
  do {
    if (iStack_118 == 0) {
      bVar2 = false;
      puVar19 = (uint64_t *)puVar10[1];
    }
    else {
      if (*(int *)(puVar10 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar13 = pbStack_120;
        do {
          uVar7 = (uint)pbVar13[puVar10[5] - (longlong)pbStack_120];
          iVar16 = *pbVar13 - uVar7;
          if (*pbVar13 != uVar7) break;
          pbVar13 = pbVar13 + 1;
        } while (uVar7 != 0);
        bVar2 = 0 < iVar16;
        if (iVar16 < 1) {
          puVar19 = (uint64_t *)puVar10[1];
          goto LAB_18040a61b;
        }
      }
      puVar19 = (uint64_t *)*puVar10;
    }
LAB_18040a61b:
    if (bVar2) {
      puVar10 = puVar8;
    }
    puVar8 = puVar10;
    puVar10 = puVar19;
  } while (puVar19 != (uint64_t *)0x0);
  if (puVar8 != (uint64_t *)&system_data_aec0) {
    if (*(int *)(puVar8 + 6) == 0) goto LAB_18040a675;
    if (iStack_118 != 0) {
      pbVar13 = (byte *)puVar8[5];
      lVar14 = (longlong)pbStack_120 - (longlong)pbVar13;
      do {
        bVar1 = *pbVar13;
        uVar7 = (uint)pbVar13[lVar14];
        if (bVar1 != uVar7) break;
        pbVar13 = pbVar13 + 1;
      } while (uVar7 != 0);
      if ((int)(bVar1 - uVar7) < 1) goto LAB_18040a675;
    }
  }
LAB_18040a672:
  puVar8 = (uint64_t *)&system_data_aec0;
LAB_18040a675:
  if (puVar8 != (uint64_t *)&system_data_aec0) {
    puStack_e8 = &unknown_var_3456_ptr;
    uStack_d0 = 0;
    puStack_e0 = (uint64_t *)0x0;
    uStack_d8 = 0;
    puVar10 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x2a,0x13);
    *(int8_t *)puVar10 = 0;
    puStack_e0 = puVar10;
    uVar23 = FUN_18064e990(puVar10);
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar23);
    *puVar10 = 0x746163696c707544;
    puVar10[1] = 0x206c616365642065;
    *(int32_t *)(puVar10 + 2) = 0x20746573;
    *(int32_t *)((longlong)puVar10 + 0x14) = 0x20736177;
    *(int32_t *)(puVar10 + 3) = 0x6e756f66;
    *(int32_t *)((longlong)puVar10 + 0x1c) = 0x69772064;
    puVar10[4] = 0x20656d616e206874;
    *(int16_t *)(puVar10 + 5) = 0x22;
    uStack_d8 = 0x29;
    puStack_108 = &unknown_var_3456_ptr;
    uStack_f0 = 0;
    puStack_100 = (uint64_t *)0x0;
    uStack_f8 = 0;
    puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x2a,0x13);
    *(int8_t *)puVar8 = 0;
    puStack_100 = puVar8;
    uVar7 = FUN_18064e990(puVar8);
    uVar5 = puVar10[1];
    *puVar8 = *puVar10;
    puVar8[1] = uVar5;
    uVar23 = *(int32_t *)((longlong)puVar10 + 0x14);
    uVar3 = *(int32_t *)(puVar10 + 3);
    uVar4 = *(int32_t *)((longlong)puVar10 + 0x1c);
    *(int32_t *)(puVar8 + 2) = *(int32_t *)(puVar10 + 2);
    *(int32_t *)((longlong)puVar8 + 0x14) = uVar23;
    *(int32_t *)(puVar8 + 3) = uVar3;
    *(int32_t *)((longlong)puVar8 + 0x1c) = uVar4;
    puVar8[4] = puVar10[4];
    *(int8_t *)(puVar8 + 5) = *(int8_t *)(puVar10 + 5);
    uStack_f8 = 0x29;
    *(int8_t *)((longlong)puVar8 + 0x29) = 0;
    uStack_f0 = (ulonglong)uVar7;
    if (0 < iStack_118) {
      if ((iStack_118 != -0x29) && (uVar7 < iStack_118 + 0x2aU)) {
        puVar8 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar8,iStack_118 + 0x2aU,0x10,0x13);
        puStack_100 = puVar8;
        uVar23 = FUN_18064e990(puVar8);
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar23);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((longlong)puVar8 + 0x29),pbStack_120,(longlong)(iStack_118 + 1));
    }
    puStack_c8 = &unknown_var_3456_ptr;
    uStack_b0 = 0;
    puStack_c0 = (uint64_t *)0x0;
    uStack_b8 = 0;
    puVar10 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x3b,0x13);
    *(int8_t *)puVar10 = 0;
    puStack_c0 = puVar10;
    uVar23 = FUN_18064e990(puVar10);
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar23);
    *puVar10 = 0x6d61726150202e22;
    puVar10[1] = 0x7266207372657465;
    puVar10[2] = 0x6f20656e6f206d6f;
    puVar10[3] = 0x77206d6568742066;
    *(int32_t *)(puVar10 + 4) = 0x206c6c69;
    *(int32_t *)((longlong)puVar10 + 0x24) = 0x74206562;
    *(int32_t *)(puVar10 + 5) = 0x6e656b61;
    *(int32_t *)((longlong)puVar10 + 0x2c) = 0x746e6920;
    puVar10[6] = 0x6e756f636361206f;
    *(int16_t *)(puVar10 + 7) = 0x2e74;
    *(int8_t *)((longlong)puVar10 + 0x3a) = 0;
    uStack_b8 = 0x3a;
    uStack_a8 = 0;
    puVar15 = (int8_t *)0x0;
    if (puVar8 != (uint64_t *)0x0) {
      puVar15 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x2a,0x13);
      *puVar15 = 0;
      uStack_a8 = FUN_18064e990(puVar15);
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar15,puVar8,0x29);
  }
  lVar14 = FUN_18062b420(_DAT_180c8ed18,0x40,system_data_aee8);
  FUN_180627ae0(lVar14 + 0x20,&puStack_128);
  puVar9 = (void *)FUN_1800590b0(&system_data_aec0,auStackX_20,lVar14 + 0x20);
  if ((char)auStackX_20[0] != '\0') {
    if (puVar9 == &system_data_aec0) goto LAB_18040a719;
    if (*(int *)(puVar9 + 0x30) == 0) goto LAB_18040a70e;
    if (*(int *)(lVar14 + 0x30) == 0) goto LAB_18040a719;
    pbVar13 = *(byte **)(puVar9 + 0x28);
    lVar17 = *(longlong *)(lVar14 + 0x28) - (longlong)pbVar13;
    goto LAB_18040a6f0;
  }
  FUN_18005d1f0(extraout_XMM0_Da,lVar14);
  FUN_1803a6850(&puStack_98);
  uVar23 = FUN_1803a6970(&puStack_98,pcVar18);
  uVar6 = _DAT_180bfaea8;
  if (_DAT_180bfaea8 < _DAT_180bfaeb0) {
    _DAT_180bfaea8 = _DAT_180bfaea8 + 0x38;
    FUN_180627ae0(uVar6);
    *(int32_t *)(uVar6 + 0x20) = uStack_78;
    *(int32_t *)(uVar6 + 0x24) = uStack_74;
    *(int32_t *)(uVar6 + 0x28) = uStack_70;
    *(int8_t *)(uVar6 + 0x2c) = uStack_6c;
    *(int8_t *)(uVar6 + 0x2d) = uStack_6b;
    *(uint64_t *)(uVar6 + 0x30) = uStack_68;
  }
  else {
    FUN_18040ad30(uVar23,&puStack_98);
  }
  puStack_98 = &unknown_var_3456_ptr;
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_90 = 0;
  uStack_80 = 0;
  puStack_98 = &unknown_var_720_ptr;
LAB_18040ac5d:
  pcVar22 = "decal_set";
  do {
    pcVar21 = pcVar22;
    pcVar22 = pcVar21 + 1;
  } while (*pcVar22 != '\0');
  for (pcVar22 = *(char **)(pcVar18 + 0x58); pcVar18 = pcVar20, pcVar22 != (char *)0x0;
      pcVar22 = *(char **)(pcVar22 + 0x58)) {
    pcVar12 = *(char **)pcVar22;
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x180d48d24;
      pcVar11 = pcVar20;
    }
    else {
      pcVar11 = *(char **)(pcVar22 + 0x10);
    }
    if (pcVar11 == pcVar21 + -0x180a12d87) {
      pcVar11 = pcVar11 + (longlong)pcVar12;
      pcVar18 = pcVar22;
      if (pcVar11 <= pcVar12) break;
      lVar14 = (longlong)&unknown_var_3896_ptr - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar14]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar11 <= pcVar12) goto LAB_18040acbf;
      }
    }
  }
LAB_18040acbf:
  puStack_128 = &unknown_var_3456_ptr;
  if (pbStack_120 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (pcVar18 == (char *)0x0) goto LAB_18040aceb;
  goto LAB_18040a500;
  while (pbVar13 = pbVar13 + 1, uVar7 != 0) {
LAB_18040a6f0:
    bVar1 = *pbVar13;
    uVar7 = (uint)pbVar13[lVar17];
    if (bVar1 != uVar7) break;
  }
  if ((int)(bVar1 - uVar7) < 1) {
LAB_18040a70e:
    pcVar20 = (char *)0x1;
  }
LAB_18040a719:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar14,puVar9,&system_data_aec0,pcVar20);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18040ad30(uint64_t param_1,longlong param_2)
void FUN_18040ad30(uint64_t param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  longlong lVar7;
  
  lVar7 = ((longlong)_DAT_180bfaea8 - (longlong)_DAT_180bfaea0) / 0x38;
  puVar2 = (uint64_t *)0x0;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) goto LAB_18040adc8;
  }
  puVar2 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar7 * 0x38,system_data_aeb8,_DAT_180bfaea8,0xfffffffffffffffe
                        );
LAB_18040adc8:
  puVar6 = _DAT_180bfaea8;
  puVar5 = puVar2;
  if (_DAT_180bfaea0 != _DAT_180bfaea8) {
    lVar4 = (longlong)puVar2 - (longlong)_DAT_180bfaea0;
    puVar3 = _DAT_180bfaea0 + 1;
    do {
      *puVar5 = &unknown_var_720_ptr;
      *(uint64_t *)(lVar4 + (longlong)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *puVar5 = &unknown_var_3456_ptr;
      *(uint64_t *)(lVar4 + 0x10 + (longlong)puVar3) = 0;
      *(uint64_t *)(lVar4 + (longlong)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (longlong)puVar3) = *(int32_t *)(puVar3 + 1);
      *(uint64_t *)(lVar4 + (longlong)puVar3) = *puVar3;
      *(int32_t *)(lVar4 + 0x14 + (longlong)puVar3) = *(int32_t *)((longlong)puVar3 + 0x14);
      *(int32_t *)(lVar4 + 0x10 + (longlong)puVar3) = *(int32_t *)(puVar3 + 2);
      *(int32_t *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(int32_t *)(lVar4 + 0x18 + (longlong)puVar3) = *(int32_t *)(puVar3 + 3);
      *(int32_t *)(lVar4 + 0x1c + (longlong)puVar3) = *(int32_t *)((longlong)puVar3 + 0x1c);
      *(int32_t *)(lVar4 + 0x20 + (longlong)puVar3) = *(int32_t *)(puVar3 + 4);
      *(int8_t *)(lVar4 + 0x24 + (longlong)puVar3) = *(int8_t *)((longlong)puVar3 + 0x24);
      *(int8_t *)(lVar4 + 0x25 + (longlong)puVar3) = *(int8_t *)((longlong)puVar3 + 0x25);
      *(uint64_t *)(lVar4 + 0x28 + (longlong)puVar3) = puVar3[5];
      puVar5 = puVar5 + 7;
      puVar1 = puVar3 + 6;
      puVar3 = puVar3 + 7;
    } while (puVar1 != puVar6);
  }
  FUN_180627ae0(puVar5,param_2);
  *(int32_t *)(puVar5 + 4) = *(int32_t *)(param_2 + 0x20);
  *(int32_t *)((longlong)puVar5 + 0x24) = *(int32_t *)(param_2 + 0x24);
  *(int32_t *)(puVar5 + 5) = *(int32_t *)(param_2 + 0x28);
  *(int8_t *)((longlong)puVar5 + 0x2c) = *(int8_t *)(param_2 + 0x2c);
  *(int8_t *)((longlong)puVar5 + 0x2d) = *(int8_t *)(param_2 + 0x2d);
  puVar5[6] = *(uint64_t *)(param_2 + 0x30);
  puVar3 = _DAT_180bfaea8;
  for (puVar6 = _DAT_180bfaea0; puVar6 != puVar3; puVar6 = puVar6 + 7) {
    *puVar6 = &unknown_var_3456_ptr;
    if (puVar6[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar6[1] = 0;
    *(int32_t *)(puVar6 + 3) = 0;
    *puVar6 = &unknown_var_720_ptr;
  }
  if (_DAT_180bfaea0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(_DAT_180bfaea0);
  }
  _DAT_180bfaea0 = puVar2;
  _DAT_180bfaea8 = puVar5 + 7;
  _DAT_180bfaeb0 = puVar2 + lVar7 * 7;
  return;
}



uint64_t * FUN_18040af60(uint64_t *param_1)

{
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_8584_ptr;
  param_1[2] = &unknown_var_720_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &unknown_var_3432_ptr;
  param_1[3] = param_1 + 5;
  *(int32_t *)(param_1 + 4) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  *(int8_t *)((longlong)param_1 + 0xb2) = 0;
  *(int32_t *)(param_1 + 1) = 0;
  *(int16_t *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  param_1[0x17] = &unknown_var_5912_ptr;
  *param_1 = &unknown_var_8920_ptr;
  param_1[0x17] = &unknown_var_8888_ptr;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(int32_t *)(param_1 + 0x2e) = 3;
  *(int32_t *)(param_1 + 0x35) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = &unknown_var_720_ptr;
  param_1[0x38] = 0;
  *(int32_t *)(param_1 + 0x39) = 0;
  param_1[0x37] = &unknown_var_3456_ptr;
  param_1[0x3a] = 0;
  param_1[0x38] = 0;
  *(int32_t *)(param_1 + 0x39) = 0;
  param_1[0x28] = 0;
  param_1[0x15] = 0;
  *(int8_t *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x18] = 0xffffffffffffffff;
  param_1[0x19] = 0xffffffffffffffff;
  *(int8_t *)(param_1 + 0x1a) = 0xff;
  *(uint64_t *)((longlong)param_1 + 0xd1) = 0xffffffffffffffff;
  *(uint64_t *)((longlong)param_1 + 0xd9) = 0xffffffffffffffff;
  *(uint64_t *)((longlong)param_1 + 0xe1) = 0xffffffffffffffff;
  *(uint64_t *)((longlong)param_1 + 0xe9) = 0xffffffffffffffff;
  *(uint64_t *)((longlong)param_1 + 0xf1) = 0xffffffffffffffff;
  *(int32_t *)((longlong)param_1 + 0xf9) = 0xffffffff;
  *(int16_t *)((longlong)param_1 + 0xfd) = 0xffff;
  *(int8_t *)((longlong)param_1 + 0xff) = 0xff;
  *(int8_t *)(param_1 + 0x36) = 2;
  param_1[0x35] = 0x3fc00000;
  param_1[0x33] = 0;
  param_1[0x34] = 0x7f7fffff3f000000;
  param_1[0x2f] = 0xbf800000bf800000;
  param_1[0x30] = 0x7f7fffff00000000;
  param_1[0x31] = 0x3f8000003f800000;
  param_1[0x32] = 0x7f7fffff3f800000;
  *(int8_t *)(param_1 + 0x3b) = 0;
  return param_1;
}



uint64_t * FUN_18040b150(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_8920_ptr;
  param_1[0x17] = &unknown_var_8888_ptr;
  if (param_1[0x28] != 0) {
    FUN_18040da70();
    param_1[0x28] = 0;
  }
  param_1[0x37] = &unknown_var_3456_ptr;
  if (param_1[0x38] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x38] = 0;
  *(int32_t *)(param_1 + 0x3a) = 0;
  param_1[0x37] = &unknown_var_720_ptr;
  FUN_180229940();
  param_1[0x17] = &unknown_var_5912_ptr;
  *param_1 = &unknown_var_8584_ptr;
  param_1[2] = &unknown_var_720_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x1e0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18040b250(longlong param_1,char param_2)
void FUN_18040b250(longlong param_1,char param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_18040da70();
    *(uint64_t *)(param_1 + 0x140) = 0;
  }
  *(char *)(param_1 + 0x148) = param_2;
  uVar5 = (ulonglong)param_2;
  if (uVar5 == 0) {
    *(uint64_t *)(param_1 + 0x140) = 0;
    return;
  }
  puVar1 = (ulonglong *)FUN_18062b1e0(_DAT_180c8ed18,uVar5 * 0x1b0 + 0x10,0x10,4);
  *puVar1 = uVar5 << 0x20 | 0x1b0;
  uVar4 = uVar2;
  do {
    FUN_18040ca50(puVar1 + 2 + uVar2 * 0x36);
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    uVar2 = (ulonglong)(int)uVar3;
  } while (uVar2 < uVar5);
  *(ulonglong **)(param_1 + 0x140) = puVar1 + 2;
  return;
}



char FUN_18040b330(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  void *puVar6;
  longlong lVar7;
  void *puVar8;
  char cVar9;
  
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 == 0) {
LAB_18040b43a:
    cVar9 = '\0';
  }
  else {
    if (iVar3 == 0x11) {
      iVar4 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_8376_ptr);
      if (iVar4 == 0) goto LAB_18040b43a;
      iVar4 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_8232_ptr);
      if (iVar4 == 0) {
        return '\x01';
      }
    }
    cVar9 = '\0';
    if ('\0' < *(char *)(param_1 + 0x148)) {
      do {
        lVar7 = *(longlong *)((longlong)cVar9 * 0x1b0 + 0x180 + *(longlong *)(param_1 + 0x140));
        iVar4 = *(int *)(lVar7 + 0x10);
        if ((iVar4 == iVar3) && (iVar4 != 0)) {
          pcVar5 = *(char **)(lVar7 + 8);
          lVar7 = *(longlong *)(param_2 + 8) - (longlong)pcVar5;
          do {
            cVar1 = *pcVar5;
            cVar2 = pcVar5[lVar7];
            if (cVar1 != cVar2) break;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            return cVar9;
          }
        }
        cVar9 = cVar9 + '\x01';
      } while (cVar9 < *(char *)(param_1 + 0x148));
    }
    if (param_3 != '\0') {
      puVar8 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar8 = *(void **)(param_2 + 8);
      }
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x18) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x18);
      }
      FUN_180626f80(&unknown_var_8256_ptr,puVar6,puVar8);
    }
    cVar9 = -1;
  }
  return cVar9;
}



char FUN_18040b460(byte param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  void *puVar5;
  char cVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_1;
  if (param_1 == 0) {
    cVar6 = '\0';
    do {
      lVar3 = func_0x0001800464d0(param_2);
      param_1 = (byte)uVar7;
      pcVar4 = *(char **)(&unknown_var_6704_ptr + (longlong)cVar6 * 8);
      lVar3 = lVar3 - (longlong)pcVar4;
      do {
        cVar1 = *pcVar4;
        cVar2 = pcVar4[lVar3];
        if (cVar1 != cVar2) break;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return cVar6;
      }
      cVar6 = cVar6 + '\x01';
    } while (cVar6 < '\x1c');
  }
  else if (param_1 == 2) {
    return '\0';
  }
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  FUN_180626f80(&unknown_var_8320_ptr,puVar5,*(uint64_t *)(&system_data_39c8 + (longlong)(char)param_1 * 8))
  ;
  return -1;
}





// 函数: void FUN_18040b510(longlong param_1)
void FUN_18040b510(longlong param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int8_t uVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 0x158);
  lVar6 = *(longlong *)(param_1 + 0x160) - lVar9;
  iVar7 = 0;
  lVar8 = lVar6 >> 0x3f;
  if (lVar6 / 0x60 + lVar8 != lVar8) {
    lVar8 = 0;
    do {
      uVar4 = FUN_18040b330(param_1,*(longlong *)(lVar8 + 0x58 + lVar9) + 0x20,1);
      *(int8_t *)(lVar8 + 0x50 + lVar9) = uVar4;
      cVar5 = FUN_18040b330(param_1,*(longlong *)(lVar8 + 0x58 + lVar9) + 0x40,1);
      cVar1 = *(char *)(lVar8 + lVar9);
      *(char *)(lVar8 + 0x51 + lVar9) = cVar5;
      if ((cVar1 == '\x02') ||
         (0.0 < *(float *)((longlong)*(char *)(lVar8 + 0x50 + lVar9) * 0x1b0 + 0x134 +
                          *(longlong *)(param_1 + 0x140)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((cVar1 == '\x02') ||
         (0.0 < *(float *)((longlong)cVar5 * 0x1b0 + 0x134 + *(longlong *)(param_1 + 0x140)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar2) && (bVar3)) {
        *(int *)(*(longlong *)(param_1 + 0x140) + 0x108 +
                ((longlong)*(char *)(lVar8 + 0x50 + lVar9) * 0x6c + (longlong)cVar1) * 4) = iVar7;
      }
      lVar9 = *(longlong *)(param_1 + 0x158);
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 0x60;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(param_1 + 0x160) - lVar9) / 0x60));
  }
  return;
}





// 函数: void FUN_18040b55f(void)
void FUN_18040b55f(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int8_t uVar4;
  char cVar5;
  longlong lVar6;
  longlong unaff_RBX;
  uint unaff_EBP;
  ulonglong uVar7;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  uVar7 = (ulonglong)unaff_EBP;
  do {
    uVar4 = FUN_18040b330();
    *(int8_t *)(uVar7 + 0x50 + unaff_RDI) = uVar4;
    cVar5 = FUN_18040b330();
    cVar1 = *(char *)(uVar7 + unaff_RDI);
    *(char *)(uVar7 + 0x51 + unaff_RDI) = cVar5;
    if ((cVar1 == '\x02') ||
       (0.0 < *(float *)((longlong)*(char *)(uVar7 + 0x50 + unaff_RDI) * 0x1b0 + 0x134 +
                        *(longlong *)(unaff_RBX + 0x140)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((cVar1 == '\x02') ||
       (0.0 < *(float *)((longlong)cVar5 * 0x1b0 + 0x134 + *(longlong *)(unaff_RBX + 0x140)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar2) && (bVar3)) {
      *(uint *)(*(longlong *)(unaff_RBX + 0x140) + 0x108 +
               ((longlong)*(char *)(uVar7 + 0x50 + unaff_RDI) * 0x6c + (longlong)cVar1) * 4) =
           unaff_EBP;
    }
    unaff_RDI = *(longlong *)(unaff_RBX + 0x158);
    unaff_EBP = unaff_EBP + 1;
    uVar7 = uVar7 + 0x60;
    lVar6 = SUB168(SEXT816(unaff_R14) * SEXT816(*(longlong *)(unaff_RBX + 0x160) - unaff_RDI),8);
  } while ((ulonglong)(longlong)(int)unaff_EBP < (ulonglong)((lVar6 >> 4) - (lVar6 >> 0x3f)));
  return;
}






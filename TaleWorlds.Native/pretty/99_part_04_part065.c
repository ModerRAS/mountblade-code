#include "TaleWorlds.Native.Split.h"

// 99_part_04_part065.c - 8 个函数

// 函数: void FUN_1802c13b0(longlong param_1,longlong param_2)
void FUN_1802c13b0(longlong param_1,longlong param_2)

{
  int32_t *puVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  void *puVar11;
  ulonglong uVar12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  int8_t auStack_1c8 [32];
  char cStack_1a8;
  void *puStack_1a0;
  void *puStack_198;
  int32_t uStack_190;
  ulonglong uStack_188;
  uint64_t uStack_180;
  uint64_t *puStack_178;
  uint64_t *puStack_170;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [72];
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [72];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_180 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  pcVar13 = "name";
  do {
    pcVar14 = pcVar13;
    pcVar13 = pcVar14 + 1;
  } while (*pcVar13 != '\0');
  pcVar13 = (char *)0x0;
  for (puVar5 = *(uint64_t **)(param_2 + 0x40); puVar5 != (uint64_t *)0x0;
      puVar5 = (uint64_t *)puVar5[6]) {
    pcVar7 = (char *)*puVar5;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar8 = pcVar13;
    }
    else {
      pcVar8 = (char *)puVar5[2];
    }
    if (pcVar8 == pcVar14 + -0x180a03a83) {
      pcVar8 = pcVar7 + (longlong)pcVar8;
      if (pcVar8 <= pcVar7) {
code_r0x0001802c1464:
        (**(code **)(*(longlong *)(param_1 + 8) + 0x10))(param_1 + 8);
        break;
      }
      lVar10 = (longlong)&system_flag_3a84 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar10]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar8 <= pcVar7) goto code_r0x0001802c1464;
      }
    }
  }
  *(int32_t *)(param_1 + 0x60) = 0;
  pcVar14 = "flags";
  do {
    pcVar7 = pcVar14;
    pcVar14 = pcVar7 + 1;
  } while (*pcVar14 != '\0');
  for (puVar5 = *(uint64_t **)(param_2 + 0x30); pcVar14 = pcVar13, puVar5 != (uint64_t *)0x0;
      puVar5 = (uint64_t *)puVar5[0xb]) {
    pcVar14 = (char *)*puVar5;
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)0x180d48d24;
      pcVar8 = pcVar13;
    }
    else {
      pcVar8 = (char *)puVar5[2];
    }
    if (pcVar8 == pcVar7 + -0x180a06b77) {
      pcVar8 = pcVar8 + (longlong)pcVar14;
      if (pcVar8 <= pcVar14) {
LAB_1802c14d5:
        pcVar14 = (char *)puVar5[6];
        break;
      }
      lVar10 = (longlong)&unknown_var_4216_ptr - (longlong)pcVar14;
      while (*pcVar14 == pcVar14[lVar10]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar8 <= pcVar14) goto LAB_1802c14d5;
      }
    }
  }
  puStack_168 = &unknown_var_3480_ptr;
  puStack_160 = auStack_150;
  uStack_158 = 0;
  auStack_150[0] = 0;
  for (; pcVar14 != (char *)0x0; pcVar14 = *(char **)(pcVar14 + 0x58)) {
    cStack_1a8 = '\0';
    FUN_180631000(pcVar14);
    if (cStack_1a8 != '\0') {
      pcVar7 = "name";
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      for (puVar5 = *(uint64_t **)(pcVar14 + 0x40); puVar5 != (uint64_t *)0x0;
          puVar5 = (uint64_t *)puVar5[6]) {
        pcVar7 = (char *)*puVar5;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = (char *)0x180d48d24;
          pcVar9 = pcVar13;
        }
        else {
          pcVar9 = (char *)puVar5[2];
        }
        if (pcVar9 == pcVar8 + -0x180a03a83) {
          pcVar9 = pcVar9 + (longlong)pcVar7;
          if (pcVar9 <= pcVar7) {
LAB_1802c15a5:
            lVar10 = 0x180d48d24;
            if (puVar5[1] != 0) {
              lVar10 = puVar5[1];
            }
            (**(code **)(puStack_168 + 0x10))(&puStack_168,lVar10);
            break;
          }
          lVar10 = (longlong)&system_flag_3a84 - (longlong)pcVar7;
          while (*pcVar7 == pcVar7[lVar10]) {
            pcVar7 = pcVar7 + 1;
            if (pcVar9 <= pcVar7) goto LAB_1802c15a5;
          }
        }
      }
      FUN_1802c1b40(param_1);
    }
  }
  puStack_168 = &unknown_var_720_ptr;
  puVar1 = (int32_t *)(param_1 + 100);
  *puVar1 = 0x459c4000;
  if ((*(uint *)(param_1 + 0x60) & 0x20000000) != 0) {
    pcVar14 = "view_distance";
    do {
      pcVar7 = pcVar14;
      pcVar14 = pcVar7 + 1;
    } while (*pcVar14 != '\0');
    for (puVar5 = *(uint64_t **)(param_2 + 0x40); pcVar14 = pcVar13, puVar5 != (uint64_t *)0x0;
        puVar5 = (uint64_t *)puVar5[6]) {
      pcVar14 = (char *)*puVar5;
      if (pcVar14 == (char *)0x0) {
        pcVar14 = (char *)0x180d48d24;
        pcVar8 = pcVar13;
      }
      else {
        pcVar8 = (char *)puVar5[2];
      }
      if (pcVar8 == pcVar7 + -0x180a18897) {
        pcVar8 = pcVar8 + (longlong)pcVar14;
        if (pcVar8 <= pcVar14) {
LAB_1802c1666:
          pcVar14 = (char *)0x180d48d24;
          if ((char *)puVar5[1] != (char *)0x0) {
            pcVar14 = (char *)puVar5[1];
          }
          break;
        }
        lVar10 = (longlong)&unknown_var_7208_ptr - (longlong)pcVar14;
        while (*pcVar14 == pcVar14[lVar10]) {
          pcVar14 = pcVar14 + 1;
          if (pcVar8 <= pcVar14) goto LAB_1802c1666;
        }
      }
    }
    if (puVar1 == (int32_t *)0x0) {
LAB_1802c16a0:
      if (pcVar14 != (char *)0x0) goto LAB_1802c16b2;
    }
    else if (pcVar14 != (char *)0x0) {
      FUN_18010cbc0(pcVar14);
      goto LAB_1802c16a0;
    }
    *puVar1 = 0x42480000;
  }
LAB_1802c16b2:
  pcVar14 = "seasonal_kind";
  do {
    pcVar7 = pcVar14;
    pcVar14 = pcVar7 + 1;
  } while (*pcVar14 != '\0');
  for (pcVar14 = *(char **)(param_2 + 0x30); pcVar14 != (char *)0x0;
      pcVar14 = *(char **)(pcVar14 + 0x58)) {
    pcVar8 = *(char **)pcVar14;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar9 = pcVar13;
    }
    else {
      pcVar9 = *(char **)(pcVar14 + 0x10);
    }
    if (pcVar9 == pcVar7 + -0x180a1886f) {
      pcVar9 = pcVar9 + (longlong)pcVar8;
      if (pcVar9 <= pcVar8) goto LAB_1802c1720;
      lVar10 = (longlong)&unknown_var_7168_ptr - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar10]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar9 <= pcVar8) goto LAB_1802c1720;
      }
    }
  }
LAB_1802c198d:
  bVar3 = false;
  lVar10 = *(longlong *)(param_1 + 0x68);
  if ((int)(*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3) != 0) {
    uVar12 = *(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3;
    uVar15 = uVar12 & 0xffffffff;
    pcVar14 = pcVar13;
    do {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 8) + ((ulonglong)pcVar14 % uVar12) * 8) + 0x28)
      ;
      if ((lVar2 != 0) && (1 < *(int *)(lVar2 + 0x58))) {
        bVar3 = true;
      }
      pcVar14 = pcVar14 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  lVar10 = *(longlong *)(param_1 + 0x70);
  if ((int)(*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3) != 0) {
    uVar12 = *(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3;
    uVar15 = uVar12 & 0xffffffff;
    pcVar14 = pcVar13;
    do {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 8) + ((ulonglong)pcVar14 % uVar12) * 8) + 0x28)
      ;
      if ((lVar2 != 0) && (1 < *(int *)(lVar2 + 0x58))) {
        bVar3 = true;
      }
      pcVar14 = pcVar14 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  lVar10 = *(longlong *)(param_1 + 0x78);
  if ((int)(*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3) != 0) {
    uVar12 = *(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3;
    uVar15 = uVar12 & 0xffffffff;
    pcVar14 = pcVar13;
    do {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 8) + ((ulonglong)pcVar14 % uVar12) * 8) + 0x28)
      ;
      if ((lVar2 != 0) && (1 < *(int *)(lVar2 + 0x58))) {
        bVar3 = true;
      }
      pcVar14 = pcVar14 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if ((int)(*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3) != 0) {
    uVar15 = *(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3;
    uVar12 = uVar15 & 0xffffffff;
    do {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 8) + ((ulonglong)pcVar13 % uVar15) * 8) + 0x28)
      ;
      if ((lVar2 != 0) && (1 < *(int *)(lVar2 + 0x58))) {
        bVar3 = true;
      }
      pcVar13 = pcVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (!bVar3) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x900000;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1c8);
LAB_1802c1720:
  do {
    puStack_1a0 = &unknown_var_3456_ptr;
    uStack_188 = 0;
    puStack_198 = (void *)0x0;
    uStack_190 = 0;
    pcVar7 = "season";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(uint64_t **)(pcVar14 + 0x40); puVar5 != (uint64_t *)0x0;
        puVar5 = (uint64_t *)puVar5[6]) {
      pcVar7 = (char *)*puVar5;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar9 = pcVar13;
      }
      else {
        pcVar9 = (char *)puVar5[2];
      }
      if (pcVar9 == pcVar8 + -0x180a06b57) {
        pcVar9 = pcVar9 + (longlong)pcVar7;
        if (pcVar9 <= pcVar7) {
LAB_1802c17a4:
          lVar10 = 0x180d48d24;
          if (puVar5[1] != 0) {
            lVar10 = puVar5[1];
          }
          FUN_180627c50(&puStack_1a0,lVar10);
          break;
        }
        lVar10 = (longlong)&system_flag_6b58 - (longlong)pcVar7;
        while (*pcVar7 == pcVar7[lVar10]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar9 <= pcVar7) goto LAB_1802c17a4;
        }
      }
    }
    puVar5 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
    *puVar5 = &unknown_var_7520_ptr;
    puStack_170 = puVar5 + 1;
    *puStack_170 = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(int32_t *)(puVar5 + 4) = 3;
    puStack_108 = &unknown_var_3480_ptr;
    puStack_100 = auStack_f0;
    auStack_f0[0] = 0;
    uStack_f8 = uStack_190;
    puVar11 = &system_buffer_ptr;
    if (puStack_198 != (void *)0x0) {
      puVar11 = puStack_198;
    }
    puStack_178 = puVar5;
    strcpy_s(auStack_f0,0x40,puVar11);
    iVar4 = func_0x000180149940(&puStack_108);
    *(uint64_t **)(param_1 + 0x68 + (longlong)iVar4 * 8) = puVar5;
    puStack_108 = &unknown_var_720_ptr;
    puStack_a8 = &unknown_var_3480_ptr;
    puStack_a0 = auStack_90;
    auStack_90[0] = 0;
    uStack_98 = uStack_190;
    puVar11 = &system_buffer_ptr;
    if (puStack_198 != (void *)0x0) {
      puVar11 = puStack_198;
    }
    strcpy_s(auStack_90,0x40,puVar11);
    iVar4 = func_0x000180149940(&puStack_a8);
    FUN_1802c1f30(*(uint64_t *)(param_1 + 0x68 + (longlong)iVar4 * 8));
    puStack_a8 = &unknown_var_720_ptr;
    pcVar7 = "seasonal_kind";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (pcVar7 = *(char **)(pcVar14 + 0x58); pcVar14 = pcVar13, pcVar7 != (char *)0x0;
        pcVar7 = *(char **)(pcVar7 + 0x58)) {
      pcVar9 = *(char **)pcVar7;
      if (pcVar9 == (char *)0x0) {
        pcVar9 = (char *)0x180d48d24;
        pcVar6 = pcVar13;
      }
      else {
        pcVar6 = *(char **)(pcVar7 + 0x10);
      }
      if (pcVar6 == pcVar8 + -0x180a1886f) {
        pcVar6 = pcVar6 + (longlong)pcVar9;
        pcVar14 = pcVar7;
        if (pcVar6 <= pcVar9) break;
        lVar10 = (longlong)&unknown_var_7168_ptr - (longlong)pcVar9;
        while (*pcVar9 == pcVar9[lVar10]) {
          pcVar9 = pcVar9 + 1;
          if (pcVar6 <= pcVar9) goto LAB_1802c1954;
        }
      }
    }
LAB_1802c1954:
    puStack_1a0 = &unknown_var_3456_ptr;
    if (puStack_198 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_198 = (void *)0x0;
    uStack_188 = uStack_188 & 0xffffffff00000000;
    puStack_1a0 = &unknown_var_720_ptr;
  } while (pcVar14 != (char *)0x0);
  goto LAB_1802c198d;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c1b40(longlong param_1,longlong param_2)
void FUN_1802c1b40(longlong param_1,longlong param_2)

{
  void *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  void *puVar7;
  
  iVar3 = *(int *)(param_2 + 0x10);
  if ((iVar3 == 8) && (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_4040_ptr), iVar2 == 0)) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x80000;
    return;
  }
  lVar5 = 0;
  if (iVar3 == 4) {
    lVar6 = lVar5;
    do {
      lVar4 = lVar6 + 1;
      if (*(char *)(*(longlong *)(param_2 + 8) + lVar6) != (&unknown_var_7184_ptr)[lVar6])
      goto LAB_1802c1bc1;
      lVar6 = lVar4;
    } while (lVar4 != 5);
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x200000;
  }
  else {
LAB_1802c1bc1:
    if (iVar3 == 7) {
      lVar6 = lVar5;
      do {
        lVar4 = lVar6 + 1;
        if (*(char *)(*(longlong *)(param_2 + 8) + lVar6) != (&unknown_var_7272_ptr)[lVar6])
        goto LAB_1802c1c00;
        lVar6 = lVar4;
      } while (lVar4 != 8);
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x100000;
    }
    else {
LAB_1802c1c00:
      if ((iVar3 == 0x11) &&
         (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_7280_ptr), iVar2 == 0)) {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x40000;
      }
      else if ((iVar3 == 0x15) &&
              (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_7224_ptr), iVar2 == 0)) {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x800000;
      }
      else if ((iVar3 == 0x17) &&
              (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_7248_ptr), iVar2 == 0)) {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x80000000;
      }
      else if ((iVar3 == 0x10) &&
              (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_7336_ptr), iVar2 == 0)) {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x2000000;
      }
      else if (iVar3 == 4) {
        do {
          lVar6 = lVar5 + 1;
          if (*(char *)(*(longlong *)(param_2 + 8) + lVar5) != (&unknown_var_7356_ptr)[lVar5])
          goto LAB_1802c1ccf;
          lVar5 = lVar6;
        } while (lVar6 != 5);
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x400000;
      }
      else {
LAB_1802c1ccf:
        if ((iVar3 == 8) &&
           (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_7304_ptr), iVar2 == 0)) {
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x20000;
        }
        else {
          if (iVar3 == 10) {
            iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_4248_ptr);
            if (iVar2 == 0) {
              *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x10000000;
              return;
            }
            iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_7320_ptr);
            if (iVar2 == 0) {
              *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x20000000;
              return;
            }
          }
          if ((iVar3 == 0x10) &&
             (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_7440_ptr), iVar2 == 0)) {
            *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x40000000;
          }
          else {
            puVar1 = *(void **)(param_2 + 8);
            if ((iVar3 != 0x18) || (iVar3 = strcmp(puVar1,&unknown_var_7464_ptr), iVar3 != 0)) {
              puVar7 = &system_buffer_ptr;
              if (puVar1 != (void *)0x0) {
                puVar7 = puVar1;
              }
                    // WARNING: Subroutine does not return
              FUN_180062300(_DAT_180c86928,&unknown_var_7368_ptr,puVar7);
            }
            *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x8000000;
          }
        }
      }
    }
  }
  return;
}



uint64_t FUN_1802c1dc0(uint64_t param_1,ulonglong param_2)

{
  FUN_1802c1e00();
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
  return param_1;
}






// 函数: void FUN_1802c1e00(uint64_t *param_1)
void FUN_1802c1e00(uint64_t *param_1)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar5;
  
  *param_1 = &unknown_var_7520_ptr;
  uVar5 = 0;
  plVar2 = param_1 + 1;
  lVar3 = *plVar2;
  uVar6 = uVar5;
  if (param_1[2] - lVar3 >> 3 != 0) {
    do {
      puVar1 = *(uint64_t **)(uVar6 + lVar3);
      if (puVar1 != (uint64_t *)0x0) {
        plVar2 = (longlong *)puVar1[7];
        puVar1[7] = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
        if ((longlong *)puVar1[7] != (longlong *)0x0) {
          (**(code **)(*(longlong *)puVar1[7] + 0x38))();
        }
        if ((longlong *)puVar1[5] != (longlong *)0x0) {
          (**(code **)(*(longlong *)puVar1[5] + 0x38))();
        }
        *puVar1 = &unknown_var_3456_ptr;
        if (puVar1[1] == 0) {
          puVar1[1] = 0;
          *(int32_t *)(puVar1 + 3) = 0;
          *puVar1 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar1);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar6 + *plVar2) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar3 = *plVar2;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[2] - lVar3 >> 3));
  }
  param_1[2] = lVar3;
  if (*plVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c1f30(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_1802c1f30(longlong param_1,uint64_t param_2,longlong param_3)

{
  longlong *plVar1;
  char *pcVar2;
  uint64_t uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  char *pcVar6;
  longlong lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  ulonglong uVar15;
  uint64_t uVar16;
  char *pcVar14;
  
  uVar16 = 0xfffffffffffffffe;
  pcVar11 = "flora_variations";
  do {
    pcVar12 = pcVar11;
    pcVar11 = pcVar12 + 1;
  } while (*pcVar11 != '\0');
  puVar9 = *(uint64_t **)(param_3 + 0x30);
  if (puVar9 != (uint64_t *)0x0) {
    pcVar11 = (char *)0x0;
    do {
      pcVar6 = (char *)*puVar9;
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)0x180d48d24;
        pcVar2 = pcVar11;
      }
      else {
        pcVar2 = (char *)puVar9[2];
      }
      if (pcVar2 == pcVar12 + -0x180a18967) {
        pcVar2 = pcVar2 + (longlong)pcVar6;
        if (pcVar2 <= pcVar6) {
LAB_1802c1fc0:
          pcVar12 = "flora_variation";
          do {
            pcVar6 = pcVar12;
            pcVar12 = pcVar6 + 1;
          } while (*pcVar12 != '\0');
          puVar8 = (uint64_t *)puVar9[6];
          do {
            if (puVar8 == (uint64_t *)0x0) {
              return;
            }
            pcVar12 = (char *)*puVar8;
            if (pcVar12 == (char *)0x0) {
              pcVar12 = (char *)0x180d48d24;
              pcVar2 = pcVar11;
            }
            else {
              pcVar2 = (char *)puVar8[2];
            }
            if (pcVar2 == pcVar6 + -0x180a189b7) {
              pcVar2 = pcVar2 + (longlong)pcVar12;
              pcVar14 = pcVar11;
              if (pcVar2 <= pcVar12) {
LAB_1802c2040:
                uVar13 = (int)pcVar14 + 1;
                pcVar12 = "flora_variation";
                do {
                  pcVar6 = pcVar12;
                  pcVar12 = pcVar6 + 1;
                } while (*pcVar12 != '\0');
                puVar8 = (uint64_t *)puVar8[0xb];
                if (puVar8 != (uint64_t *)0x0) {
                  do {
                    pcVar12 = (char *)*puVar8;
                    if (pcVar12 == (char *)0x0) {
                      pcVar12 = (char *)0x180d48d24;
                      pcVar2 = pcVar11;
                    }
                    else {
                      pcVar2 = (char *)puVar8[2];
                    }
                    if (pcVar2 == pcVar6 + -0x180a189b7) {
                      pcVar2 = pcVar2 + (longlong)pcVar12;
                      pcVar14 = (char *)(ulonglong)uVar13;
                      if (pcVar2 <= pcVar12) goto LAB_1802c2040;
                      lVar7 = (longlong)&unknown_var_7496_ptr - (longlong)pcVar12;
                      while (*pcVar12 == pcVar12[lVar7]) {
                        pcVar12 = pcVar12 + 1;
                        if (pcVar2 <= pcVar12) goto LAB_1802c2040;
                      }
                    }
                    puVar8 = (uint64_t *)puVar8[0xb];
                    if (puVar8 == (uint64_t *)0x0) break;
                  } while( true );
                }
                if ((int)uVar13 < 1) {
                  return;
                }
                lVar7 = *(longlong *)(param_1 + 8);
                pcVar12 = pcVar11;
                if (*(longlong *)(param_1 + 0x10) - lVar7 >> 3 != 0) {
                  do {
                    puVar8 = *(uint64_t **)(pcVar12 + lVar7);
                    if (puVar8 != (uint64_t *)0x0) {
                      plVar1 = (longlong *)puVar8[7];
                      puVar8[7] = 0;
                      if (plVar1 != (longlong *)0x0) {
                        (**(code **)(*plVar1 + 0x38))();
                      }
                      if ((longlong *)puVar8[7] != (longlong *)0x0) {
                        (**(code **)(*(longlong *)puVar8[7] + 0x38))();
                      }
                      if ((longlong *)puVar8[5] != (longlong *)0x0) {
                        (**(code **)(*(longlong *)puVar8[5] + 0x38))();
                      }
                      *puVar8 = &unknown_var_3456_ptr;
                      if (puVar8[1] != 0) {
                    // WARNING: Subroutine does not return
                        FUN_18064e900();
                      }
                      puVar8[1] = 0;
                      *(int32_t *)(puVar8 + 3) = 0;
                      *puVar8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
                      FUN_18064e900(puVar8);
                    }
                    pcVar6 = pcVar12 + *(longlong *)(param_1 + 8);
                    pcVar6[0] = '\0';
                    pcVar6[1] = '\0';
                    pcVar6[2] = '\0';
                    pcVar6[3] = '\0';
                    pcVar6[4] = '\0';
                    pcVar6[5] = '\0';
                    pcVar6[6] = '\0';
                    pcVar6[7] = '\0';
                    uVar10 = (int)pcVar11 + 1;
                    pcVar11 = (char *)(ulonglong)uVar10;
                    lVar7 = *(longlong *)(param_1 + 8);
                    pcVar12 = pcVar12 + 8;
                  } while ((ulonglong)(longlong)(int)uVar10 <
                           (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar7 >> 3));
                }
                *(longlong *)(param_1 + 0x10) = lVar7;
                lVar7 = puVar9[6];
                if ((int)uVar13 < 1) {
                  return;
                }
                uVar15 = (ulonglong)uVar13;
                do {
                  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x40,8,3,uVar16);
                  uVar3 = FUN_1802c1260(uVar3);
                  FUN_1802c07a0(uVar3,param_2,lVar7);
                  puVar9 = *(uint64_t **)(param_1 + 0x10);
                  if (puVar9 < *(uint64_t **)(param_1 + 0x18)) {
                    *(uint64_t **)(param_1 + 0x10) = puVar9 + 1;
                    *puVar9 = uVar3;
                  }
                  else {
                    puVar8 = *(uint64_t **)(param_1 + 8);
                    lVar4 = (longlong)puVar9 - (longlong)puVar8 >> 3;
                    if (lVar4 == 0) {
                      lVar4 = 1;
LAB_1802c2213:
                      puVar5 = (uint64_t *)
                               FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,
                                             *(int8_t *)(param_1 + 0x20));
                      puVar9 = *(uint64_t **)(param_1 + 0x10);
                      puVar8 = *(uint64_t **)(param_1 + 8);
                    }
                    else {
                      lVar4 = lVar4 * 2;
                      if (lVar4 != 0) goto LAB_1802c2213;
                      puVar5 = (uint64_t *)0x0;
                    }
                    if (puVar8 != puVar9) {
                    // WARNING: Subroutine does not return
                      memmove(puVar5,puVar8,(longlong)puVar9 - (longlong)puVar8);
                    }
                    *puVar5 = uVar3;
                    if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
                      FUN_18064e900();
                    }
                    *(uint64_t **)(param_1 + 8) = puVar5;
                    *(uint64_t **)(param_1 + 0x10) = puVar5 + 1;
                    *(uint64_t **)(param_1 + 0x18) = puVar5 + lVar4;
                  }
                  lVar7 = *(longlong *)(lVar7 + 0x58);
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) {
                    return;
                  }
                } while( true );
              }
              lVar7 = (longlong)&unknown_var_7496_ptr - (longlong)pcVar12;
              while (*pcVar12 == pcVar12[lVar7]) {
                pcVar12 = pcVar12 + 1;
                if (pcVar2 <= pcVar12) goto LAB_1802c2040;
              }
            }
            puVar8 = (uint64_t *)puVar8[0xb];
          } while( true );
        }
        lVar7 = (longlong)&unknown_var_7416_ptr - (longlong)pcVar6;
        while (*pcVar6 == pcVar6[lVar7]) {
          pcVar6 = pcVar6 + 1;
          if (pcVar2 <= pcVar6) goto LAB_1802c1fc0;
        }
      }
      puVar9 = (uint64_t *)puVar9[0xb];
    } while (puVar9 != (uint64_t *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c22a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802c22a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_658 [32];
  uint64_t uStack_638;
  uint64_t *puStack_630;
  int8_t auStack_628 [512];
  int8_t auStack_428 [1024];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_658;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar2 = (ulonglong *)func_0x00018004b9a0();
  uStack_638 = 0;
  puStack_630 = &uStackX_18;
  __stdio_common_vsprintf(*puVar2 | 1,auStack_628,0x200,param_2);
  lVar3 = (longlong)_DAT_180c8695c * 0x200 + 0x180c86980;
  if (_DAT_180c8695c == 0) {
    _DAT_180c8695c = _DAT_180c8695c + 1;
    FUN_180060680(lVar3,&unknown_var_552_ptr,auStack_628);
  }
  else {
    iVar1 = _DAT_180c8695c + -1;
    _DAT_180c8695c = _DAT_180c8695c + 1;
    FUN_180060680(lVar3,&unknown_var_7560_ptr,(longlong)iVar1 * 0x200 + 0x180c86980,auStack_628);
  }
  mbstowcs(auStack_428,lVar3,0x200);
  (**(code **)(*_DAT_180c86968 + 0x18))(_DAT_180c86968,auStack_428);
  if (system_flag_aa69 != '\0') {
    (*_DAT_180c96830)(_DAT_180c96810,auStack_428,0x400);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_658);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c23d0(void)
void FUN_1802c23d0(void)

{
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c2400(longlong param_1)
void FUN_1802c2400(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar1 + 0xd8))(plVar1,*(uint64_t *)(param_1 + 0x68));
  plVar1 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar1 + 0xe0))(plVar1,*(uint64_t *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(**(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400) + 0xd8))();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(**(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400) + 0xd8))();
  }
  *(int8_t *)(param_1 + 0x60) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c24b0(longlong param_1)
void FUN_1802c24b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar1 + 0xe0))(plVar1,*(uint64_t *)(param_1 + 0x78));
  plVar1 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar1 + 0xe0))(plVar1,*(uint64_t *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(**(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400) + 0xe0))();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(**(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400) + 0xe0))();
  }
  *(int16_t *)(param_1 + 0x60) = 0x100;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





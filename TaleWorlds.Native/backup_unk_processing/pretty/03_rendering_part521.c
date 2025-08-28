#include "TaleWorlds.Native.Split.h"

// 03_rendering_part521.c - 4 个函数

// 函数: void FUN_18054b8c0(longlong param_1,longlong param_2)
void FUN_18054b8c0(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint64_t uVar2;
  bool bVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  char *pcVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  char *pcVar17;
  char *pcVar18;
  longlong lStackX_8;
  longlong lStackX_10;
  void *puStack_60;
  byte *pbStack_58;
  int iStack_50;
  uint64_t uStack_48;
  
  lStackX_8 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  pcVar18 = (char *)0x0;
  *(uint64_t *)(lStackX_8 + 0x28) = 3;
  *(int32_t *)(lStackX_8 + 0x19) = 0;
  *(int16_t *)(lStackX_8 + 0x1d) = 0;
  *(int8_t *)(lStackX_8 + 0x1f) = 0;
  *(longlong *)lStackX_8 = lStackX_8;
  *(longlong *)(lStackX_8 + 8) = lStackX_8;
  *(uint64_t *)(lStackX_8 + 0x10) = 0;
  *(int8_t *)(lStackX_8 + 0x18) = 0;
  *(uint64_t *)(lStackX_8 + 0x20) = 0;
  *(longlong *)(param_1 + 0x10) = lStackX_8;
  if (param_2 == 0) {
    return;
  }
  pcVar13 = "bone_body_type";
  do {
    pcVar17 = pcVar13;
    pcVar13 = pcVar17 + 1;
  } while (*pcVar13 != '\0');
  pcVar13 = *(char **)(param_2 + 0x30);
  do {
    if (pcVar13 == (char *)0x0) {
      return;
    }
    pcVar7 = *(char **)pcVar13;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar6 = pcVar18;
    }
    else {
      pcVar6 = *(char **)(pcVar13 + 0x10);
    }
    if (pcVar6 == pcVar17 + -0x180a344ef) {
      pcVar6 = pcVar6 + (longlong)pcVar7;
      lStackX_10 = lStackX_8;
      if (pcVar6 <= pcVar7) break;
      lVar11 = (longlong)&UNK_180a344f0 - (longlong)pcVar7;
      while (*pcVar7 == pcVar7[lVar11]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar6 <= pcVar7) goto LAB_18054b9d0;
      }
    }
    pcVar13 = *(char **)(pcVar13 + 0x58);
  } while( true );
LAB_18054b9d0:
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  pbStack_58 = (byte *)0x0;
  iStack_50 = 0;
  pcVar17 = "type";
  do {
    pcVar7 = pcVar17;
    pcVar17 = pcVar7 + 1;
  } while (*pcVar17 != '\0');
  for (puVar14 = *(uint64_t **)(pcVar13 + 0x40); puVar14 != (uint64_t *)0x0;
      puVar14 = (uint64_t *)puVar14[6]) {
    pcVar17 = (char *)*puVar14;
    if (pcVar17 == (char *)0x0) {
      pcVar17 = (char *)0x180d48d24;
      pcVar6 = pcVar18;
    }
    else {
      pcVar6 = (char *)puVar14[2];
    }
    if (pcVar6 == pcVar7 + -0x180a0ee2f) {
      pcVar6 = pcVar6 + (longlong)pcVar17;
      if (pcVar6 <= pcVar17) {
LAB_18054ba60:
        lVar11 = 0x180d48d24;
        if (puVar14[1] != 0) {
          lVar11 = puVar14[1];
        }
        FUN_180627c50(&puStack_60,lVar11);
        break;
      }
      lVar11 = (longlong)&UNK_180a0ee30 - (longlong)pcVar17;
      while (*pcVar17 == pcVar17[lVar11]) {
        pcVar17 = pcVar17 + 1;
        if (pcVar6 <= pcVar17) goto LAB_18054ba60;
      }
    }
  }
  puVar14 = *(uint64_t **)(param_1 + 0x10);
  puVar4 = puVar14;
  puVar15 = (uint64_t *)puVar14[2];
  if ((uint64_t *)puVar14[2] == (uint64_t *)0x0) {
LAB_18054bb3c:
    puVar4 = puVar14;
  }
  else {
    do {
      if (iStack_50 == 0) {
        bVar3 = false;
        puVar5 = (uint64_t *)puVar15[1];
      }
      else {
        if (*(int *)(puVar15 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar8 = pbStack_58;
          do {
            uVar10 = (uint)pbVar8[puVar15[5] - (longlong)pbStack_58];
            iVar12 = *pbVar8 - uVar10;
            if (*pbVar8 != uVar10) break;
            pbVar8 = pbVar8 + 1;
          } while (uVar10 != 0);
          bVar3 = 0 < iVar12;
          if (iVar12 < 1) {
            puVar5 = (uint64_t *)puVar15[1];
            goto LAB_18054bafb;
          }
        }
        puVar5 = (uint64_t *)*puVar15;
      }
LAB_18054bafb:
      if (bVar3) {
        puVar15 = puVar4;
      }
      puVar4 = puVar15;
      puVar15 = puVar5;
    } while (puVar5 != (uint64_t *)0x0);
    if (puVar4 == puVar14) goto LAB_18054bb3c;
    if (*(int *)(puVar4 + 6) != 0) {
      if (iStack_50 != 0) {
        pbVar8 = (byte *)puVar4[5];
        lVar11 = (longlong)pbStack_58 - (longlong)pbVar8;
        do {
          bVar1 = *pbVar8;
          uVar10 = (uint)pbVar8[lVar11];
          if (bVar1 != uVar10) break;
          pbVar8 = pbVar8 + 1;
        } while (uVar10 != 0);
        if ((int)(bVar1 - uVar10) < 1) goto LAB_18054bb3f;
      }
      goto LAB_18054bb3c;
    }
  }
LAB_18054bb3f:
  if (puVar4 == puVar14) {
    uVar2 = puVar14[4];
    puVar15 = puVar14;
    puVar4 = (uint64_t *)puVar14[2];
    while (puVar5 = puVar15, puVar4 != (uint64_t *)0x0) {
      if (iStack_50 == 0) {
        bVar3 = false;
        puVar16 = (uint64_t *)puVar4[1];
      }
      else {
        if (*(int *)(puVar4 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar8 = pbStack_58;
          do {
            uVar10 = (uint)pbVar8[puVar4[5] - (longlong)pbStack_58];
            iVar12 = *pbVar8 - uVar10;
            if (*pbVar8 != uVar10) break;
            pbVar8 = pbVar8 + 1;
          } while (uVar10 != 0);
          bVar3 = 0 < iVar12;
          if (iVar12 < 1) {
            puVar16 = (uint64_t *)puVar4[1];
            goto LAB_18054bbab;
          }
        }
        puVar16 = (uint64_t *)*puVar4;
      }
LAB_18054bbab:
      puVar15 = puVar4;
      puVar4 = puVar16;
      if (bVar3) {
        puVar15 = puVar5;
      }
    }
    if (puVar5 == puVar14) {
LAB_18054bbeb:
      puVar5 = (uint64_t *)FUN_1800c2ab0(puVar14,&lStackX_8);
      puVar5 = (uint64_t *)*puVar5;
    }
    else if (*(int *)(puVar5 + 6) != 0) {
      if (iStack_50 != 0) {
        pbVar8 = (byte *)puVar5[5];
        lVar11 = (longlong)pbStack_58 - (longlong)pbVar8;
        do {
          bVar1 = *pbVar8;
          uVar10 = (uint)pbVar8[lVar11];
          if (bVar1 != uVar10) break;
          pbVar8 = pbVar8 + 1;
        } while (uVar10 != 0);
        if ((int)(bVar1 - uVar10) < 1) goto LAB_18054bc0b;
      }
      goto LAB_18054bbeb;
    }
LAB_18054bc0b:
    *(int *)(puVar5 + 8) = (int)uVar2;
  }
  puStack_60 = &UNK_180a3c3e0;
  if (pbStack_58 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pcVar17 = "bone_body_type";
  do {
    pcVar7 = pcVar17;
    pcVar17 = pcVar7 + 1;
  } while (*pcVar17 != '\0');
  for (pcVar17 = *(char **)(pcVar13 + 0x58); pcVar13 = pcVar18, pcVar17 != (char *)0x0;
      pcVar17 = *(char **)(pcVar17 + 0x58)) {
    pcVar6 = *(char **)pcVar17;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x180d48d24;
      pcVar9 = pcVar18;
    }
    else {
      pcVar9 = *(char **)(pcVar17 + 0x10);
    }
    if (pcVar9 == pcVar7 + -0x180a344ef) {
      pcVar9 = pcVar9 + (longlong)pcVar6;
      pcVar13 = pcVar17;
      if (pcVar9 <= pcVar6) break;
      lVar11 = (longlong)&UNK_180a344f0 - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar11]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar9 <= pcVar6) goto LAB_18054bcb5;
      }
    }
  }
LAB_18054bcb5:
  if (pcVar13 == (char *)0x0) {
    return;
  }
  goto LAB_18054b9d0;
}





// 函数: void FUN_18054bcf0(longlong *param_1,longlong param_2)
void FUN_18054bcf0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int8_t uVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  longlong lVar12;
  byte *pbVar13;
  void *puVar14;
  longlong lVar15;
  int8_t *puVar16;
  int iVar17;
  char *pcVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  char *pcVar21;
  char *pcVar22;
  char acStackX_10 [8];
  int8_t auStackX_18 [8];
  int8_t auStackX_20 [8];
  void *puStack_60;
  byte *pbStack_58;
  int iStack_50;
  uint64_t uStack_48;
  
  if (param_2 != 0) {
    pcVar18 = "bone_body_type";
    do {
      pcVar21 = pcVar18;
      pcVar18 = pcVar21 + 1;
    } while (*pcVar18 != '\0');
    pcVar18 = *(char **)(param_2 + 0x30);
    if (pcVar18 != (char *)0x0) {
      pcVar22 = (char *)0x0;
      do {
        pcVar9 = *(char **)pcVar18;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)0x180d48d24;
          pcVar8 = pcVar22;
        }
        else {
          pcVar8 = *(char **)(pcVar18 + 0x10);
        }
        if (pcVar8 == pcVar21 + -0x180a344ef) {
          pcVar8 = pcVar8 + (longlong)pcVar9;
          if (pcVar8 <= pcVar9) goto LAB_18054bdb0;
          lVar12 = (longlong)&UNK_180a344f0 - (longlong)pcVar9;
          while (*pcVar9 == pcVar9[lVar12]) {
            pcVar9 = pcVar9 + 1;
            if (pcVar8 <= pcVar9) goto LAB_18054bdb0;
          }
        }
        pcVar18 = *(char **)(pcVar18 + 0x58);
      } while (pcVar18 != (char *)0x0);
    }
  }
  return;
LAB_18054bdb0:
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  pbStack_58 = (byte *)0x0;
  iStack_50 = 0;
  pcVar21 = "type";
  do {
    pcVar9 = pcVar21;
    pcVar21 = pcVar9 + 1;
  } while (*pcVar21 != '\0');
  for (puVar20 = *(uint64_t **)(pcVar18 + 0x40); puVar20 != (uint64_t *)0x0;
      puVar20 = (uint64_t *)puVar20[6]) {
    pcVar21 = (char *)*puVar20;
    if (pcVar21 == (char *)0x0) {
      pcVar21 = (char *)0x180d48d24;
      pcVar8 = pcVar22;
    }
    else {
      pcVar8 = (char *)puVar20[2];
    }
    if (pcVar8 == pcVar9 + -0x180a0ee2f) {
      pcVar8 = pcVar8 + (longlong)pcVar21;
      if (pcVar8 <= pcVar21) {
LAB_18054be30:
        lVar12 = 0x180d48d24;
        if (puVar20[1] != 0) {
          lVar12 = puVar20[1];
        }
        FUN_180627c50(&puStack_60,lVar12);
        break;
      }
      lVar12 = (longlong)&UNK_180a0ee30 - (longlong)pcVar21;
      while (*pcVar21 == pcVar21[lVar12]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar8 <= pcVar21) goto LAB_18054be30;
      }
    }
  }
  lVar12 = *param_1;
  puVar20 = (uint64_t *)param_1[2];
  puVar4 = puVar20;
  puVar3 = (uint64_t *)puVar20[2];
  while (puVar6 = puVar4, puVar3 != (uint64_t *)0x0) {
    if (iStack_50 == 0) {
      bVar2 = false;
      puVar19 = (uint64_t *)puVar3[1];
    }
    else {
      if (*(int *)(puVar3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar13 = pbStack_58;
        do {
          uVar11 = (uint)pbVar13[puVar3[5] - (longlong)pbStack_58];
          iVar17 = *pbVar13 - uVar11;
          if (*pbVar13 != uVar11) break;
          pbVar13 = pbVar13 + 1;
        } while (uVar11 != 0);
        bVar2 = 0 < iVar17;
        if (iVar17 < 1) {
          puVar19 = (uint64_t *)puVar3[1];
          goto LAB_18054becb;
        }
      }
      puVar19 = (uint64_t *)*puVar3;
    }
LAB_18054becb:
    puVar4 = puVar3;
    puVar3 = puVar19;
    if (bVar2) {
      puVar4 = puVar6;
    }
  }
  if (puVar6 == puVar20) {
LAB_18054bf0b:
    puVar6 = (uint64_t *)FUN_1800c2ab0(puVar20,auStackX_20);
    puVar6 = (uint64_t *)*puVar6;
  }
  else if (*(int *)(puVar6 + 6) != 0) {
    if (iStack_50 != 0) {
      pbVar13 = (byte *)puVar6[5];
      lVar15 = (longlong)pbStack_58 - (longlong)pbVar13;
      do {
        bVar1 = *pbVar13;
        uVar11 = (uint)pbVar13[lVar15];
        if (bVar1 != uVar11) break;
        pbVar13 = pbVar13 + 1;
      } while (uVar11 != 0);
      if ((int)(bVar1 - uVar11) < 1) goto LAB_18054bf26;
    }
    goto LAB_18054bf0b;
  }
LAB_18054bf26:
  puVar16 = (int8_t *)((longlong)*(int *)(puVar6 + 8) * 3 + lVar12);
  uVar5 = FUN_18054c150(&puStack_60);
  *puVar16 = uVar5;
  puVar16[2] = 0;
  pcVar21 = "priority";
  do {
    pcVar9 = pcVar21;
    pcVar21 = pcVar9 + 1;
  } while (*pcVar21 != '\0');
  puVar20 = *(uint64_t **)(pcVar18 + 0x40);
LAB_18054bf67:
  if (puVar20 == (uint64_t *)0x0) goto LAB_18054c005;
  pcVar21 = (char *)*puVar20;
  if (pcVar21 == (char *)0x0) {
    pcVar21 = (char *)0x180d48d24;
    pcVar8 = pcVar22;
  }
  else {
    pcVar8 = (char *)puVar20[2];
  }
  if (pcVar8 != pcVar9 + -0x180a34487) {
LAB_18054c0ce:
    puVar20 = (uint64_t *)puVar20[6];
    goto LAB_18054bf67;
  }
  pcVar8 = pcVar8 + (longlong)pcVar21;
  if (pcVar21 < pcVar8) {
    lVar12 = (longlong)&UNK_180a34488 - (longlong)pcVar21;
    while (*pcVar21 == pcVar21[lVar12]) {
      pcVar21 = pcVar21 + 1;
      if (pcVar8 <= pcVar21) goto LAB_18054bfb4;
    }
    goto LAB_18054c0ce;
  }
LAB_18054bfb4:
  pcVar21 = (char *)0x180d48d24;
  if ((char *)puVar20[1] != (char *)0x0) {
    pcVar21 = (char *)puVar20[1];
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar7 = uVar7 + 1;
  } while (pcVar21[uVar7] != '\0');
  if (((uVar7 < 3) || (*pcVar21 != '0')) ||
     (puVar14 = &UNK_180a3cb84, (pcVar21[1] + 0xa8U & 0xdf) != 0)) {
    puVar14 = &UNK_180a063a0;
  }
  FUN_18010cbc0(pcVar21,puVar14,auStackX_18);
LAB_18054c005:
  puVar16[1] = auStackX_18[0];
  acStackX_10[0] = '\0';
  FUN_180631000(pcVar18,&UNK_180a34478,acStackX_10);
  if (acStackX_10[0] != '\0') {
    puVar16[2] = puVar16[2] | 2;
  }
  acStackX_10[0] = '\0';
  FUN_180631000(pcVar18,&UNK_180a344c0,acStackX_10);
  if (acStackX_10[0] != '\0') {
    puVar16[2] = puVar16[2] | 1;
  }
  acStackX_10[0] = '\0';
  FUN_180631000(pcVar18,&UNK_180a34498,acStackX_10);
  if (acStackX_10[0] != '\0') {
    puVar16[2] = puVar16[2] | 4;
  }
  puStack_60 = &UNK_180a3c3e0;
  if (pbStack_58 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pcVar21 = "bone_body_type";
  do {
    pcVar9 = pcVar21;
    pcVar21 = pcVar9 + 1;
  } while (*pcVar21 != '\0');
  for (pcVar21 = *(char **)(pcVar18 + 0x58); pcVar18 = pcVar22, pcVar21 != (char *)0x0;
      pcVar21 = *(char **)(pcVar21 + 0x58)) {
    pcVar8 = *(char **)pcVar21;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar10 = pcVar22;
    }
    else {
      pcVar10 = *(char **)(pcVar21 + 0x10);
    }
    if (pcVar10 == pcVar9 + -0x180a344ef) {
      pcVar10 = pcVar8 + (longlong)pcVar10;
      pcVar18 = pcVar21;
      if (pcVar10 <= pcVar8) break;
      lVar12 = (longlong)&UNK_180a344f0 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar12]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar10 <= pcVar8) goto LAB_18054c10f;
      }
    }
  }
LAB_18054c10f:
  if (pcVar18 == (char *)0x0) {
    return;
  }
  goto LAB_18054bdb0;
}



uint64_t FUN_18054c150(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *puVar5;
  longlong lVar6;
  void *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = 0;
  if (iVar1 == 7) {
    lVar3 = lVar6;
    while (lVar4 = lVar3 + 1,
          *(char *)(*(longlong *)(param_1 + 8) + lVar3) == (&UNK_180a139d8)[lVar3]) {
      lVar3 = lVar4;
      if (lVar4 == 8) {
        return 3;
      }
    }
  }
  if (iVar1 == 5) {
    lVar3 = lVar6;
    while (lVar4 = lVar3 + 1,
          *(char *)(*(longlong *)(param_1 + 8) + lVar3) == (&UNK_180a139cc)[lVar3]) {
      lVar3 = lVar4;
      if (lVar4 == 6) {
        return 2;
      }
    }
  }
  if ((iVar1 == 0xd) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a139a0), iVar2 == 0)) {
    return 4;
  }
  if ((iVar1 == 0xe) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13990), iVar2 == 0)) {
    return 5;
  }
  if ((iVar1 == 8) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a139c0), iVar2 == 0)) {
    return 6;
  }
  if ((iVar1 == 9) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a139b0), iVar2 == 0)) {
    return 7;
  }
  if (iVar1 == 4) {
    lVar3 = lVar6;
    do {
      lVar4 = lVar3 + 1;
      if (*(char *)(*(longlong *)(param_1 + 8) + lVar3) != (&UNK_180a1395c)[lVar3])
      goto LAB_18054c2b6;
      lVar3 = lVar4;
    } while (lVar4 != 5);
  }
  else {
LAB_18054c2b6:
    if ((iVar1 == 0x10) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13948), iVar2 == 0)
       ) {
      return 6;
    }
    if ((iVar1 == 0x11) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13978), iVar2 == 0)
       ) {
      return 7;
    }
    if ((iVar1 != 0xc) || (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13968), iVar2 != 0))
    {
      if ((iVar1 == 0x14) &&
         (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13910), iVar2 == 0)) {
        return 6;
      }
      if ((iVar1 == 0x15) &&
         (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a138f8), iVar2 == 0)) {
        return 7;
      }
      if ((iVar1 != 0x10) ||
         (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13930), iVar2 != 0)) {
        if (iVar1 == 4) {
          lVar3 = lVar6;
          while (lVar4 = lVar3 + 1,
                *(char *)(*(longlong *)(param_1 + 8) + lVar3) == (&UNK_180a13928)[lVar3]) {
            lVar3 = lVar4;
            if (lVar4 == 5) {
              return 0;
            }
          }
          puVar7 = *(void **)(param_1 + 8);
          do {
            lVar3 = lVar6;
            if (puVar7[lVar3] != (&UNK_180a138f0)[lVar3]) goto LAB_18054c400;
            lVar6 = lVar3 + 1;
          } while (lVar3 + 1 != 5);
          if (puVar7[lVar3] == (&UNK_180a138f0)[lVar3]) {
            return 1;
          }
        }
        else {
          puVar7 = *(void **)(param_1 + 8);
        }
LAB_18054c400:
        puVar5 = &system_buffer_ptr;
        if (puVar7 != (void *)0x0) {
          puVar5 = puVar7;
        }
        FUN_180626f80(&UNK_180a34500,puVar5);
        return 0xff;
      }
    }
  }
  return 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18054c430(void)
void FUN_18054c430(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar5;
  ulonglong uVar4;
  
  iVar5 = 0;
  uVar4 = (_DAT_180c96158 - _DAT_180c96150) / 0x68;
  uVar3 = (uint)uVar4;
  iVar1 = uVar3 - 1;
  _DAT_180bfbc98 = 0;
  while (uVar3 != 0) {
    _DAT_180bfbc98 = _DAT_180bfbc98 + 1;
    uVar3 = (uint)uVar4 >> 1;
    uVar4 = (ulonglong)uVar3;
  }
  _DAT_180bfbc90 = CONCAT44(iVar1,0xffffffff);
  _DAT_180bfbcb8 = 0;
  uVar2 = *(int *)(_DAT_180c8aa00 + 0x40) - 1;
  for (uVar3 = uVar2; uVar3 != 0; uVar3 = uVar3 >> 1) {
    _DAT_180bfbcb8 = _DAT_180bfbcb8 + 1;
  }
  _DAT_180bfbcb0 = (ulonglong)uVar2 << 0x20;
  uVar3 = (**(code **)(*_DAT_180c86878 + 0xe8))();
  iVar1 = uVar3 - 1;
  _DAT_180bfbcc8 = 0;
  for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
    _DAT_180bfbcc8 = _DAT_180bfbcc8 + 1;
  }
  _DAT_180bfbcc0 = CONCAT44(iVar1,0xffffffff);
  uVar3 = *(uint *)(_DAT_180c86970 + 0x40);
  iVar1 = uVar3 - 1;
  _DAT_180bfbca8 = 0;
  for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
    _DAT_180bfbca8 = _DAT_180bfbca8 + 1;
  }
  _DAT_180bfbca0 = CONCAT44(iVar1,0xffffffff);
  uVar4 = (_DAT_180c960c8 - _DAT_180c960c0) / 0x38;
  uVar3 = (uint)uVar4;
  iVar1 = uVar3 - 1;
  _DAT_180bfbcd8 = 0;
  while (uVar3 != 0) {
    _DAT_180bfbcd8 = _DAT_180bfbcd8 + 1;
    uVar3 = (uint)uVar4 >> 1;
    uVar4 = (ulonglong)uVar3;
  }
  _DAT_180bfbcd0 = CONCAT44(iVar1,0xffffffff);
  iVar1 = (**(code **)(*_DAT_180c86878 + 0xf0))();
  for (uVar3 = iVar1 - 1U; uVar3 != 0; uVar3 = uVar3 >> 1) {
    iVar5 = iVar5 + 1;
  }
  _DAT_180bfbce0 = (ulonglong)(iVar1 - 1U) << 0x20;
  _DAT_180bfbce8 = iVar5;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18054c5e0(longlong param_1,longlong param_2)
void FUN_18054c5e0(longlong param_1,longlong param_2)

{
  void *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  uint64_t *puVar9;
  void *puVar10;
  char *pcVar11;
  int8_t auStack_4b8 [32];
  void *puStack_498;
  longlong lStack_490;
  int iStack_488;
  ulonglong uStack_480;
  void *puStack_478;
  void *puStack_470;
  int iStack_468;
  ulonglong uStack_460;
  uint64_t uStack_458;
  int8_t auStack_448 [1024];
  ulonglong uStack_48;
  
  uStack_458 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_4b8;
  pcVar8 = "flag";
  do {
    pcVar5 = pcVar8;
    pcVar8 = pcVar5 + 1;
  } while (*pcVar8 != '\0');
  pcVar11 = (char *)0x0;
  for (pcVar8 = *(char **)(param_2 + 0x30); pcVar7 = pcVar11, pcVar8 != (char *)0x0;
      pcVar8 = *(char **)(pcVar8 + 0x58)) {
    pcVar4 = *(char **)pcVar8;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)0x180d48d24;
      pcVar3 = pcVar11;
    }
    else {
      pcVar3 = *(char **)(pcVar8 + 0x10);
    }
    if (pcVar3 == pcVar5 + -0x180a06ba3) {
      pcVar3 = pcVar3 + (longlong)pcVar4;
      pcVar7 = pcVar8;
      if (pcVar3 <= pcVar4) break;
      lVar6 = (longlong)&UNK_180a06ba4 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar6]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar3 <= pcVar4) goto LAB_18054c696;
      }
    }
  }
LAB_18054c696:
  *(int8_t *)(param_1 + 0x140) = 0;
  do {
    if (pcVar7 == (char *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_4b8);
    }
    puStack_478 = &UNK_180a3c3e0;
    uStack_460 = 0;
    puStack_470 = (void *)0x0;
    iStack_468 = 0;
    puStack_498 = &UNK_180a3c3e0;
    uStack_480 = 0;
    lStack_490 = 0;
    iStack_488 = 0;
    pcVar8 = "name";
    do {
      pcVar5 = pcVar8;
      pcVar8 = pcVar5 + 1;
    } while (*pcVar8 != '\0');
    for (puVar9 = *(uint64_t **)(pcVar7 + 0x40); puVar9 != (uint64_t *)0x0;
        puVar9 = (uint64_t *)puVar9[6]) {
      pcVar8 = (char *)*puVar9;
      if (pcVar8 == (char *)0x0) {
        pcVar8 = (char *)0x180d48d24;
        pcVar4 = pcVar11;
      }
      else {
        pcVar4 = (char *)puVar9[2];
      }
      if (pcVar4 == pcVar5 + -0x180a03a83) {
        pcVar4 = pcVar4 + (longlong)pcVar8;
        if (pcVar4 <= pcVar8) {
LAB_18054c770:
          lVar6 = 0x180d48d24;
          if (puVar9[1] != 0) {
            lVar6 = puVar9[1];
          }
          FUN_180627c50(&puStack_478,lVar6);
          break;
        }
        lVar6 = (longlong)&system_flag_3a84 - (longlong)pcVar8;
        while (*pcVar8 == pcVar8[lVar6]) {
          pcVar8 = pcVar8 + 1;
          if (pcVar4 <= pcVar8) goto LAB_18054c770;
        }
      }
    }
    pcVar8 = "value";
    do {
      pcVar5 = pcVar8;
      pcVar8 = pcVar5 + 1;
    } while (*pcVar8 != '\0');
    for (puVar9 = *(uint64_t **)(pcVar7 + 0x40); puVar9 != (uint64_t *)0x0;
        puVar9 = (uint64_t *)puVar9[6]) {
      pcVar8 = (char *)*puVar9;
      if (pcVar8 == (char *)0x0) {
        pcVar8 = (char *)0x180d48d24;
        pcVar4 = pcVar11;
      }
      else {
        pcVar4 = (char *)puVar9[2];
      }
      if (pcVar4 == pcVar5 + -0x180a0696b) {
        pcVar4 = pcVar4 + (longlong)pcVar8;
        if (pcVar4 <= pcVar8) {
LAB_18054c7f5:
          lVar6 = 0x180d48d24;
          if (puVar9[1] != 0) {
            lVar6 = puVar9[1];
          }
          (**(code **)(puStack_498 + 0x10))(&puStack_498,lVar6);
          break;
        }
        lVar6 = (longlong)&UNK_180a0696c - (longlong)pcVar8;
        while (*pcVar8 == pcVar8[lVar6]) {
          pcVar8 = pcVar8 + 1;
          if (pcVar4 <= pcVar8) goto LAB_18054c7f5;
        }
      }
    }
    puVar1 = puStack_470;
    if (iStack_468 == 0xe) {
      iVar2 = strcmp(puStack_470,&UNK_180a34528);
      if (iVar2 == 0) {
        pcVar8 = pcVar11;
        if (iStack_488 != 5) {
LAB_18054c8ce:
          *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | 1;
          goto LAB_18054c888;
        }
        do {
          pcVar5 = pcVar8 + 1;
          if (pcVar8[lStack_490] != pcVar8[0x180a06420]) goto LAB_18054c8ce;
          pcVar8 = pcVar5;
        } while (pcVar5 != (char *)0x6);
      }
LAB_18054c864:
      puVar10 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar10 = puVar1;
      }
      FUN_180626eb0(auStack_448,0x400,&UNK_180a345c8,puVar10);
    }
    else {
      if (iStack_468 == 0x11) {
        iVar2 = strcmp(puStack_470,&UNK_180a34548);
        if (iVar2 == 0) {
          pcVar8 = pcVar11;
          if (iStack_488 != 5) {
LAB_18054c91b:
            *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | 2;
            goto LAB_18054c888;
          }
          do {
            pcVar5 = pcVar8 + 1;
            if (pcVar8[lStack_490] != pcVar8[0x180a06420]) goto LAB_18054c91b;
            pcVar8 = pcVar5;
          } while (pcVar5 != (char *)0x6);
        }
        goto LAB_18054c864;
      }
      if (iStack_468 == 0xf) {
        iVar2 = strcmp(puStack_470,&UNK_180a34538);
        if (iVar2 == 0) {
          pcVar8 = pcVar11;
          if (iStack_488 != 5) {
LAB_18054c96b:
            *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | 4;
            goto LAB_18054c888;
          }
          do {
            pcVar5 = pcVar8 + 1;
            if (pcVar8[lStack_490] != pcVar8[0x180a06420]) goto LAB_18054c96b;
            pcVar8 = pcVar5;
          } while (pcVar5 != (char *)0x6);
        }
        goto LAB_18054c864;
      }
      if (iStack_468 != 0x12) {
        if ((iStack_468 == 0xd) && (iVar2 = strcmp(puStack_470,&UNK_180a34590), iVar2 == 0)) {
          pcVar8 = pcVar11;
          if (iStack_488 != 5) {
LAB_18054ca19:
            *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | 0x10;
            goto LAB_18054c888;
          }
          do {
            pcVar5 = pcVar8 + 1;
            if (pcVar8[lStack_490] != pcVar8[0x180a06420]) goto LAB_18054ca19;
            pcVar8 = pcVar5;
          } while (pcVar5 != (char *)0x6);
        }
        goto LAB_18054c864;
      }
      iVar2 = strcmp(puStack_470,&UNK_180a345a0);
      if (iVar2 != 0) goto LAB_18054c864;
      pcVar8 = pcVar11;
      if (iStack_488 == 5) {
        do {
          pcVar5 = pcVar8 + 1;
          if (pcVar8[lStack_490] != pcVar8[0x180a06420]) goto LAB_18054c9bb;
          pcVar8 = pcVar5;
        } while (pcVar5 != (char *)0x6);
        goto LAB_18054c864;
      }
LAB_18054c9bb:
      *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | 8;
    }
LAB_18054c888:
    pcVar8 = "flag";
    do {
      pcVar5 = pcVar8;
      pcVar8 = pcVar5 + 1;
    } while (*pcVar8 != '\0');
    for (pcVar8 = *(char **)(pcVar7 + 0x58); pcVar7 = pcVar11, pcVar8 != (char *)0x0;
        pcVar8 = *(char **)(pcVar8 + 0x58)) {
      pcVar4 = *(char **)pcVar8;
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x180d48d24;
        pcVar3 = pcVar11;
      }
      else {
        pcVar3 = *(char **)(pcVar8 + 0x10);
      }
      if (pcVar3 == pcVar5 + -0x180a06ba3) {
        pcVar3 = pcVar3 + (longlong)pcVar4;
        pcVar7 = pcVar8;
        if (pcVar3 <= pcVar4) break;
        lVar6 = (longlong)&UNK_180a06ba4 - (longlong)pcVar4;
        while (*pcVar4 == pcVar4[lVar6]) {
          pcVar4 = pcVar4 + 1;
          if (pcVar3 <= pcVar4) goto LAB_18054ca62;
        }
      }
    }
LAB_18054ca62:
    puStack_498 = &UNK_180a3c3e0;
    if (lStack_490 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_490 = 0;
    uStack_480 = uStack_480 & 0xffffffff00000000;
    puStack_498 = &UNK_18098bcb0;
    puStack_478 = &UNK_180a3c3e0;
    if (puStack_470 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_470 = (void *)0x0;
    uStack_460 = uStack_460 & 0xffffffff00000000;
    puStack_478 = &UNK_18098bcb0;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




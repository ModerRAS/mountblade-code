#include "TaleWorlds.Native.Split.h"

// 03_rendering_part532.c - 10 个函数

// 函数: void FUN_180559530(int32_t *param_1,longlong param_2)
void FUN_180559530(int32_t *param_1,longlong param_2)

{
  void *puVar1;
  int32_t uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  void *puVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  void *puStack_d8;
  longlong lStack_d0;
  int iStack_c8;
  ulonglong uStack_c0;
  void *puStack_b8;
  void *puStack_b0;
  int iStack_a8;
  ulonglong uStack_a0;
  void *puStack_98;
  void *puStack_90;
  int iStack_88;
  ulonglong uStack_80;
  void *puStack_78;
  longlong lStack_70;
  int iStack_68;
  ulonglong uStack_60;
  void *puStack_58;
  void *puStack_50;
  int iStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pcVar11 = (char *)0x0;
  puStack_58 = &unknown_var_3456_ptr;
  uStack_40 = 0;
  puStack_50 = (void *)0x0;
  iStack_48 = 0;
  pcVar10 = "direction";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a35197) {
      pcVar10 = pcVar10 + (longlong)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180559600:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_58,lVar7);
        break;
      }
      lVar7 = (longlong)&unknown_var_4200_ptr - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180559600;
      }
    }
  }
  puVar1 = puStack_50;
  pcVar6 = pcVar11;
  pcVar10 = pcVar11;
  if (iStack_48 == 4) {
    do {
      pcVar5 = pcVar6 + 1;
      if (pcVar6[(longlong)puStack_50] != pcVar6[0x180a34bc8]) goto LAB_1805596e2;
      pcVar6 = pcVar5;
    } while (pcVar5 != (char *)0x5);
    param_1[3] = 0;
  }
  else if (iStack_48 == 5) {
    do {
      pcVar5 = pcVar10 + 1;
      if (pcVar10[(longlong)puStack_50] != pcVar10[0x180a34b7c]) goto LAB_1805596b0;
      pcVar10 = pcVar5;
    } while (pcVar5 != (char *)0x6);
    param_1[3] = 1;
  }
  else if (iStack_48 == 4) {
LAB_1805596e2:
    do {
      pcVar6 = pcVar10 + 1;
      if (pcVar10[(longlong)puStack_50] != pcVar10[0x180a35288]) goto LAB_180559780;
      pcVar10 = pcVar6;
    } while (pcVar6 != (char *)0x5);
    param_1[3] = 5;
  }
  else if (iStack_48 == 0xb) {
    iVar3 = strcmp(puStack_50,&unknown_var_4472_ptr);
    if (iVar3 == 0) {
      param_1[3] = 4;
    }
    else {
LAB_180559780:
      puVar8 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar8 = puVar1;
      }
      FUN_180626f80(&unknown_var_4416_ptr,puVar8);
    }
  }
  else if (iStack_48 == 10) {
    iVar3 = strcmp(puStack_50,&unknown_var_4456_ptr);
    if (iVar3 == 0) {
      param_1[3] = 3;
    }
    else {
      iVar3 = strcmp(puVar1,&unknown_var_4392_ptr);
      if (iVar3 != 0) goto LAB_180559780;
      param_1[3] = 7;
    }
  }
  else {
    if ((iStack_48 != 9) || (iVar3 = strcmp(puStack_50,&unknown_var_4376_ptr), iVar3 != 0))
    goto LAB_180559780;
    param_1[3] = 6;
  }
  goto LAB_180559796;
  while (pcVar6 = pcVar10, pcVar10 != (char *)0x6) {
LAB_1805596b0:
    pcVar10 = pcVar6 + 1;
    if (pcVar6[(longlong)puStack_50] != pcVar6[0x180a35290]) goto LAB_180559780;
  }
  param_1[3] = 2;
LAB_180559796:
  puStack_78 = &unknown_var_3456_ptr;
  uStack_60 = 0;
  lStack_70 = 0;
  iStack_68 = 0;
  pcVar10 = "action";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a339df) {
      pcVar10 = pcVar10 + (longlong)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180559824:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_78,lVar7);
        break;
      }
      lVar7 = (longlong)&unknown_var_8128_ptr - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180559824;
      }
    }
  }
  if (0 < iStack_68) {
    uVar2 = FUN_18055b2f0(&system_data_6150,&puStack_78);
    *param_1 = uVar2;
  }
  FUN_180631000(param_2,&unknown_var_1800_ptr,(longlong)param_1 + 0x11);
  FUN_180631000(param_2,&unknown_var_4560_ptr,param_1 + 4);
  FUN_180631000(param_2,&unknown_var_4544_ptr,(longlong)param_1 + 0x12);
  puStack_98 = &unknown_var_3456_ptr;
  uStack_80 = 0;
  puStack_90 = (void *)0x0;
  iStack_88 = 0;
  pcVar10 = "death_type";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a35377) {
      pcVar10 = pcVar10 + (longlong)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180559911:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_98,lVar7);
        break;
      }
      lVar7 = (longlong)&unknown_var_4680_ptr - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180559911;
      }
    }
  }
  puVar1 = puStack_90;
  pcVar6 = pcVar11;
  pcVar10 = pcVar11;
  if (iStack_88 == 5) {
    do {
      pcVar5 = pcVar6 + 1;
      if (pcVar6[(longlong)puStack_90] != pcVar6[0x180a35370]) goto LAB_1805599e2;
      pcVar6 = pcVar5;
    } while (pcVar5 != (char *)0x6);
    param_1[2] = 0;
  }
  else if (iStack_88 == 4) {
    do {
      pcVar5 = pcVar6 + 1;
      if (pcVar6[(longlong)puStack_90] != pcVar6[0x180a3538c]) goto LAB_180559a20;
      pcVar6 = pcVar5;
    } while (pcVar5 != (char *)0x5);
    param_1[2] = 4;
  }
  else if (iStack_88 == 6) {
    do {
      pcVar6 = pcVar10 + 1;
      if (pcVar10[(longlong)puStack_90] != pcVar10[0x180a21b0c]) goto LAB_180559a7e;
      pcVar10 = pcVar6;
    } while (pcVar6 != (char *)0x7);
    param_1[2] = 5;
  }
  else if (iStack_88 == 5) {
LAB_1805599e2:
    do {
      pcVar6 = pcVar10 + 1;
      if (pcVar10[(longlong)puStack_90] != pcVar10[0x180a139e0]) goto LAB_180559a7e;
      pcVar10 = pcVar6;
    } while (pcVar6 != (char *)0x6);
    param_1[2] = 0xffffffff;
  }
  else if (iStack_88 == 4) {
LAB_180559a20:
    do {
      pcVar6 = pcVar10 + 1;
      if (pcVar10[(longlong)puStack_90] != pcVar10[0x180a35384]) goto LAB_180559a7e;
      pcVar10 = pcVar6;
    } while (pcVar6 != (char *)0x5);
    param_1[2] = 1;
  }
  else if (iStack_88 == 9) {
    iVar3 = strcmp(puStack_90,&unknown_var_4624_ptr);
    if (iVar3 == 0) {
      param_1[2] = 2;
    }
    else {
LAB_180559a7e:
      puVar8 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar8 = puVar1;
      }
      FUN_180626f80(&unknown_var_4648_ptr,puVar8);
    }
  }
  else {
    if ((iStack_88 != 10) || (iVar3 = strcmp(puStack_90,&unknown_var_4608_ptr), iVar3 != 0))
    goto LAB_180559a7e;
    param_1[2] = 3;
  }
  puStack_b8 = &unknown_var_3456_ptr;
  uStack_a0 = 0;
  puStack_b0 = (void *)0x0;
  iStack_a8 = 0;
  pcVar10 = "body_part";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a35157) {
      pcVar10 = pcVar4 + (longlong)pcVar10;
      if (pcVar10 <= pcVar4) {
LAB_180559b15:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_b8,lVar7);
        break;
      }
      lVar7 = (longlong)&unknown_var_4136_ptr - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180559b15;
      }
    }
  }
  puVar1 = puStack_b0;
  if (iStack_a8 == 8) {
    iVar3 = strcmp(puStack_b0,&unknown_var_7024_ptr);
    if (iVar3 == 0) {
      *(int8_t *)(param_1 + 1) = 6;
      goto LAB_180559cff;
    }
  }
  else if (iStack_a8 == 9) {
    iVar3 = strcmp(puStack_b0,&unknown_var_7008_ptr);
    if (iVar3 == 0) {
      *(int8_t *)(param_1 + 1) = 7;
      goto LAB_180559cff;
    }
  }
  else {
    pcVar6 = pcVar11;
    pcVar10 = pcVar11;
    if (iStack_a8 == 4) {
      do {
        pcVar5 = pcVar6 + 1;
        if (pcVar6[(longlong)puStack_b0] != pcVar6[0x180a1395c]) goto LAB_180559c80;
        pcVar6 = pcVar5;
      } while (pcVar5 != (char *)0x5);
      *(int8_t *)(param_1 + 1) = 8;
      goto LAB_180559cff;
    }
    if (iStack_a8 == 7) {
      do {
        pcVar6 = pcVar10 + 1;
        if (pcVar10[(longlong)puStack_b0] != pcVar10[0x180a139d8]) goto LAB_180559ce9;
        pcVar10 = pcVar6;
      } while (pcVar6 != &system_data_0008);
      *(int8_t *)(param_1 + 1) = 3;
      goto LAB_180559cff;
    }
    if (iStack_a8 == 0xd) {
      iVar3 = strcmp(puStack_b0,&unknown_var_6992_ptr);
      if (iVar3 == 0) {
        *(int8_t *)(param_1 + 1) = 4;
        goto LAB_180559cff;
      }
    }
    else if (iStack_a8 == 0xe) {
      iVar3 = strcmp(puStack_b0,&unknown_var_6976_ptr);
      if (iVar3 == 0) {
        *(int8_t *)(param_1 + 1) = 5;
        goto LAB_180559cff;
      }
    }
    else {
      if (iStack_a8 == 5) {
        do {
          pcVar6 = pcVar10 + 1;
          if (pcVar10[(longlong)puStack_b0] != pcVar10[0x180a139cc]) goto LAB_180559ce9;
          pcVar10 = pcVar6;
        } while (pcVar6 != (char *)0x6);
        *(int8_t *)(param_1 + 1) = 2;
        goto LAB_180559cff;
      }
      if (iStack_a8 == 4) {
LAB_180559c80:
        do {
          pcVar5 = pcVar10 + 1;
          pcVar6 = pcVar11;
          if (pcVar10[(longlong)puStack_b0] != pcVar10[0x180a13928]) goto LAB_180559ca3;
          pcVar10 = pcVar5;
        } while (pcVar5 != (char *)0x5);
        *(int8_t *)(param_1 + 1) = 0;
        goto LAB_180559cff;
      }
    }
  }
LAB_180559ce9:
  puVar8 = &system_buffer_ptr;
  if (puVar1 != (void *)0x0) {
    puVar8 = puVar1;
  }
  FUN_180626f80(&unknown_var_4216_ptr,puVar8);
LAB_180559cff:
  puStack_d8 = &unknown_var_3456_ptr;
  uStack_c0 = 0;
  lStack_d0 = 0;
  iStack_c8 = 0;
  pcVar10 = "mount_id";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar9 == (uint64_t *)0x0) {
LAB_180559dad:
      if (0 < iStack_c8) {
        uVar2 = FUN_180555eb0(&system_data_60a0,&puStack_d8);
        param_1[5] = uVar2;
      }
      puStack_d8 = &unknown_var_3456_ptr;
      if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_d0 = 0;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      puStack_d8 = &unknown_var_720_ptr;
      puStack_b8 = &unknown_var_3456_ptr;
      if (puStack_b0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_b0 = (void *)0x0;
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      puStack_b8 = &unknown_var_720_ptr;
      puStack_98 = &unknown_var_3456_ptr;
      if (puStack_90 == (void *)0x0) {
        puStack_90 = (void *)0x0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        puStack_98 = &unknown_var_720_ptr;
        puStack_78 = &unknown_var_3456_ptr;
        if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_70 = 0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        puStack_78 = &unknown_var_720_ptr;
        puStack_58 = &unknown_var_3456_ptr;
        if (puStack_50 == (void *)0x0) {
          return;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a34c07) {
      pcVar10 = pcVar10 + (longlong)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180559d94:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_d8,lVar7);
        goto LAB_180559dad;
      }
      lVar7 = (longlong)&unknown_var_2776_ptr - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180559d94;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
  while (pcVar6 = pcVar5, pcVar5 != (char *)0x5) {
LAB_180559ca3:
    pcVar5 = pcVar6 + 1;
    pcVar10 = pcVar11;
    if (pcVar6[(longlong)puStack_b0] != pcVar6[0x180a138f0]) goto LAB_180559cd0;
  }
  *(int8_t *)(param_1 + 1) = 1;
  goto LAB_180559cff;
  while (pcVar10 = pcVar6, pcVar6 != (char *)0x5) {
LAB_180559cd0:
    pcVar6 = pcVar10 + 1;
    if (pcVar10[(longlong)puStack_b0] != pcVar10[0x180a0b57c]) goto LAB_180559ce9;
  }
  *(int8_t *)(param_1 + 1) = 0xff;
  goto LAB_180559cff;
}





// 函数: void FUN_180559e90(int32_t *param_1,longlong param_2)
void FUN_180559e90(int32_t *param_1,longlong param_2)

{
  void *puVar1;
  int iVar2;
  int32_t uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  void *puVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  void *puStack_90;
  longlong lStack_88;
  int iStack_80;
  ulonglong uStack_78;
  void *puStack_70;
  longlong lStack_68;
  int iStack_60;
  ulonglong uStack_58;
  void *puStack_50;
  void *puStack_48;
  int iStack_40;
  uint64_t uStack_38;
  
  pcVar11 = (char *)0x0;
  puStack_50 = &unknown_var_3456_ptr;
  uStack_38 = 0;
  puStack_48 = (void *)0x0;
  iStack_40 = 0;
  pcVar10 = "direction";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a35197) {
      pcVar10 = pcVar10 + (longlong)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180559f60:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_50,lVar7,pcVar10,puVar9,0xfffffffffffffffe);
        break;
      }
      lVar7 = (longlong)&unknown_var_4200_ptr - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180559f60;
      }
    }
  }
  puVar1 = puStack_48;
  pcVar5 = pcVar11;
  pcVar10 = pcVar11;
  pcVar6 = pcVar11;
  if (iStack_40 == 4) {
    do {
      pcVar4 = pcVar5 + 1;
      if (pcVar5[(longlong)puStack_48] != pcVar5[0x180a34bc8]) goto LAB_18055a032;
      pcVar5 = pcVar4;
    } while (pcVar4 != (char *)0x5);
    param_1[2] = 0;
  }
  else if (iStack_40 == 5) {
    do {
      pcVar5 = pcVar10 + 1;
      if (pcVar10[(longlong)puStack_48] != pcVar10[0x180a34b7c]) goto LAB_18055a000;
      pcVar10 = pcVar5;
    } while (pcVar5 != (char *)0x6);
    param_1[2] = 1;
  }
  else if (iStack_40 == 4) {
LAB_18055a032:
    do {
      pcVar5 = pcVar6 + 1;
      if (pcVar6[(longlong)puStack_48] != pcVar6[0x180a35288]) goto LAB_18055a0f0;
      pcVar6 = pcVar5;
    } while (pcVar5 != (char *)0x5);
    param_1[2] = 5;
  }
  else {
    if (iStack_40 == 0xb) {
      iVar2 = strcmp(puStack_48,&unknown_var_4472_ptr);
      if (iVar2 == 0) {
        param_1[2] = 4;
        goto LAB_18055a126;
      }
    }
    else if (iStack_40 == 10) {
      iVar2 = strcmp(puStack_48,&unknown_var_4456_ptr);
      if (iVar2 == 0) {
        param_1[2] = 3;
        goto LAB_18055a126;
      }
      iVar2 = strcmp(puVar1,&unknown_var_4392_ptr);
      if (iVar2 == 0) {
        param_1[2] = 7;
        goto LAB_18055a126;
      }
    }
    else if (iStack_40 == 9) {
      iVar2 = strcmp(puStack_48,&unknown_var_4376_ptr);
      if (iVar2 == 0) {
        param_1[2] = 6;
        goto LAB_18055a126;
      }
    }
    else if (iStack_40 == 4) {
LAB_18055a0f0:
      do {
        pcVar6 = pcVar10 + 1;
        if (pcVar10[(longlong)puStack_48] != pcVar10[0x180a0b57c]) goto LAB_18055a10c;
        pcVar10 = pcVar6;
      } while (pcVar6 != (char *)0x5);
      param_1[2] = 0xffffffff;
      goto LAB_18055a126;
    }
LAB_18055a10c:
    puVar8 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar8 = puVar1;
    }
    FUN_180626f80(&unknown_var_4416_ptr,puVar8);
  }
  goto LAB_18055a126;
  while (pcVar6 = pcVar10, pcVar10 != (char *)0x6) {
LAB_18055a000:
    pcVar10 = pcVar6 + 1;
    if (pcVar6[(longlong)puStack_48] != pcVar6[0x180a35290]) goto LAB_18055a10c;
  }
  param_1[2] = 2;
LAB_18055a126:
  FUN_180631000(param_2,&unknown_var_1728_ptr,param_1 + 1);
  FUN_180631000(param_2,&unknown_var_4640_ptr,(longlong)param_1 + 5);
  puStack_70 = &unknown_var_3456_ptr;
  uStack_58 = 0;
  lStack_68 = 0;
  iStack_60 = 0;
  pcVar10 = "action";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a339df) {
      pcVar10 = pcVar10 + (longlong)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_18055a1d4:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_70,lVar7);
        break;
      }
      lVar7 = (longlong)&unknown_var_8128_ptr - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_18055a1d4;
      }
    }
  }
  if (0 < iStack_60) {
    uVar3 = FUN_18055b2f0(&system_data_6150,&puStack_70);
    param_1[3] = uVar3;
  }
  puStack_90 = &unknown_var_3456_ptr;
  uStack_78 = 0;
  lStack_88 = 0;
  iStack_80 = 0;
  pcVar10 = "mount_id";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar9 == (uint64_t *)0x0) {
LAB_18055a2ae:
      if (0 < iStack_80) {
        uVar3 = FUN_180555eb0(&system_data_60a0,&puStack_90);
        *param_1 = uVar3;
      }
      puStack_90 = &unknown_var_3456_ptr;
      if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_88 = 0;
      uStack_78 = uStack_78 & 0xffffffff00000000;
      puStack_90 = &unknown_var_720_ptr;
      puStack_70 = &unknown_var_3456_ptr;
      if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_68 = 0;
      uStack_58 = uStack_58 & 0xffffffff00000000;
      puStack_70 = &unknown_var_720_ptr;
      puStack_50 = &unknown_var_3456_ptr;
      if (puStack_48 == (void *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a34c07) {
      pcVar10 = pcVar10 + (longlong)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_18055a295:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_90,lVar7);
        goto LAB_18055a2ae;
      }
      lVar7 = (longlong)&unknown_var_2776_ptr - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_18055a295;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
}





// 函数: void FUN_18055a350(longlong param_1)
void FUN_18055a350(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  uVar1 = *(ulonglong *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      FUN_18055a3c0(uVar3 + param_1);
      uVar3 = (ulonglong)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1 + -0x10);
}





// 函数: void FUN_18055a35a(longlong param_1)
void FUN_18055a35a(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = *(ulonglong *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      FUN_18055a3c0(uVar3 + param_1);
      uVar3 = (ulonglong)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1 + -0x10);
}





// 函数: void FUN_18055a37d(void)
void FUN_18055a37d(void)

{
  longlong in_RAX;
  uint unaff_EBX;
  int unaff_EBP;
  longlong unaff_RDI;
  
  do {
    FUN_18055a3c0((ulonglong)unaff_EBX + unaff_RDI);
    unaff_EBX = unaff_EBX + unaff_EBP;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
                    // WARNING: Subroutine does not return
  FUN_18064e900(unaff_RDI + -0x10);
}





// 函数: void FUN_18055a39c(void)
void FUN_18055a39c(void)

{
  longlong unaff_RDI;
  
                    // WARNING: Subroutine does not return
  FUN_18064e900(unaff_RDI + -0x10);
}





// 函数: void FUN_18055a3b9(void)
void FUN_18055a3b9(void)

{
  return;
}





// 函数: void FUN_18055a3c0(uint64_t *param_1)
void FUN_18055a3c0(uint64_t *param_1)

{
  FUN_18033b1a0(param_1 + 0x29);
  if ((1 < (ulonglong)param_1[0x2b]) && (param_1[0x2a] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18033b1a0(param_1 + 0x23);
  if ((1 < (ulonglong)param_1[0x25]) && (param_1[0x24] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18033b1a0(param_1 + 0x1d);
  if ((1 < (ulonglong)param_1[0x1f]) && (param_1[0x1e] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18033b1a0(param_1 + 0x17);
  if ((1 < (ulonglong)param_1[0x19]) && (param_1[0x18] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18033b1a0(param_1 + 0x11);
  if ((1 < (ulonglong)param_1[0x13]) && (param_1[0x12] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18033b1a0(param_1 + 0xb);
  if ((1 < (ulonglong)param_1[0xd]) && (param_1[0xc] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18033b1a0(param_1 + 5);
  if ((1 < (ulonglong)param_1[7]) && (param_1[6] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &unknown_var_3456_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &unknown_var_720_ptr;
  return;
}





// 函数: void FUN_18055a540(void)
void FUN_18055a540(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



int32_t FUN_18055b2f0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lStack_18;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  pbVar4 = *(byte **)(param_2 + 8);
  if ((uVar3 != 8) || (iVar6 = strcmp(pbVar4,&unknown_var_4744_ptr), iVar6 != 0)) {
    uVar8 = 0xcbf29ce484222325;
    pbVar7 = &system_buffer_ptr;
    if (pbVar4 != (byte *)0x0) {
      pbVar7 = pbVar4;
    }
    uVar9 = 0;
    if (uVar3 != 0) {
      do {
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar9 = uVar9 + 1;
        uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
      } while (uVar9 < uVar3);
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    for (lStack_18 = *(longlong *)(lVar5 + (uVar8 % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        lStack_18 != 0; lStack_18 = *(longlong *)(lStack_18 + 0x28)) {
      uVar9 = *(uint *)(lStack_18 + 0x10);
      if (uVar3 == uVar9) {
        if (uVar3 != 0) {
          pbVar7 = pbVar4;
          do {
            pbVar1 = pbVar7 + (*(longlong *)(lStack_18 + 8) - (longlong)pbVar4);
            uVar9 = (uint)*pbVar7 - (uint)*pbVar1;
            if (uVar9 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18055b3bd:
        if (uVar9 == 0) goto LAB_18055b3cb;
      }
      else if (uVar3 == 0) goto LAB_18055b3bd;
    }
    lStack_18 = 0;
LAB_18055b3cb:
    if (lStack_18 == 0) {
      lStack_18 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x30) * 8);
    }
    if (lStack_18 != *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x30) * 8)) {
      return *(int32_t *)(lStack_18 + 0x20);
    }
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055b430(longlong *param_1,longlong param_2)
void FUN_18055b430(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  void *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int8_t auStack_c8 [32];
  void **ppuStack_a8;
  uint64_t uStack_a0;
  void *apuStack_98 [11];
  int32_t uStack_40;
  int32_t uStack_3c;
  int8_t uStack_38;
  ulonglong uStack_28;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)(param_2 + 0x10);
  if ((iVar2 != 8) || (iVar4 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_4744_ptr), iVar4 != 0)) {
    iVar4 = (int)((param_1[1] - *param_1) / 0x68);
    if (0 < iVar4) {
      lVar10 = 0;
      plVar9 = (longlong *)(*param_1 + 8);
      do {
        iVar6 = (int)plVar9[1];
        if (iVar2 == iVar6) {
          if (iVar2 != 0) {
            pbVar5 = *(byte **)(param_2 + 8);
            lVar8 = *plVar9 - (longlong)pbVar5;
            do {
              pbVar1 = pbVar5 + lVar8;
              iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
              if (iVar6 != 0) break;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar1 != 0);
          }
LAB_18055b4fd:
          if (iVar6 == 0) goto LAB_18055b5d4;
        }
        else if (iVar2 == 0) goto LAB_18055b4fd;
        lVar10 = lVar10 + 1;
        plVar9 = plVar9 + 0xd;
      } while (lVar10 < iVar4);
    }
    puVar7 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_2 + 8);
    }
    FUN_180049eb0(apuStack_98,puVar7);
    uStack_40 = 0;
    uStack_3c = 0xffffffff;
    uStack_38 = 0xff;
    uVar3 = param_1[1];
    if (uVar3 < (ulonglong)param_1[2]) {
      param_1[1] = uVar3 + 0x68;
      ppuStack_a8 = (void **)uVar3;
      FUN_1800b8300(uVar3);
      *(int32_t *)(uVar3 + 0x58) = uStack_40;
      *(int32_t *)(uVar3 + 0x5c) = uStack_3c;
      *(int8_t *)(uVar3 + 0x60) = uStack_38;
    }
    else {
      FUN_18055bc50(param_1,apuStack_98);
    }
    ppuStack_a8 = apuStack_98;
    apuStack_98[0] = &unknown_var_720_ptr;
  }
LAB_18055b5d4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}






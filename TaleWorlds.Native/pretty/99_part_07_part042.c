#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part042.c - 5 个函数

// 函数: void FUN_1804c1f50(uint64_t param_1,uint64_t *param_2)
void FUN_1804c1f50(uint64_t param_1,uint64_t *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint64_t uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbStackX_10;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  pbVar6 = (byte *)*param_2;
  cVar2 = (&unknown_var_8448_ptr)[*pbVar6];
  while (cVar2 != '\0') {
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    cVar2 = (&unknown_var_8448_ptr)[*pbVar1];
  }
  *param_2 = pbVar6;
  uVar5 = (uint64_t)*pbVar6;
  cVar2 = (&unknown_var_9728_ptr)[uVar5];
  pbStackX_10 = pbVar6;
  do {
    if (cVar2 == '\0') {
      *param_2 = pbVar6;
      return;
    }
    bVar4 = (byte)uVar5;
    if (bVar4 == 0x26) {
      bVar3 = pbVar6[1];
      if (bVar3 != 0x23) {
        if (bVar3 == 0x61) {
          if (pbVar6[2] == 0x6d) {
            if ((pbVar6[3] != 0x70) || (pbVar6[4] != 0x3b)) {
LAB_1804c2086:
              bVar4 = 0x26;
              goto LAB_1804c2088;
            }
            *pbStackX_10 = 0x26;
            pbVar6 = pbVar6 + 5;
          }
          else {
            if ((((pbVar6[2] != 0x70) || (pbVar6[3] != 0x6f)) || (pbVar6[4] != 0x73)) ||
               (pbVar6[5] != 0x3b)) goto LAB_1804c2086;
            *pbStackX_10 = 0x27;
            pbVar6 = pbVar6 + 6;
          }
        }
        else if (bVar3 == 0x67) {
          if ((pbVar6[2] != 0x74) || (pbVar6[3] != 0x3b)) goto LAB_1804c2086;
          *pbStackX_10 = 0x3e;
          pbVar6 = pbVar6 + 4;
        }
        else if (bVar3 == 0x6c) {
          if ((pbVar6[2] != 0x74) || (pbVar6[3] != 0x3b)) goto LAB_1804c2086;
          *pbStackX_10 = 0x3c;
          pbVar6 = pbVar6 + 4;
        }
        else {
          if (bVar3 != 0x71) goto LAB_1804c2088;
          if ((((pbVar6[2] != 0x75) || (pbVar6[3] != 0x6f)) || (pbVar6[4] != 0x74)) ||
             (pbVar6[5] != 0x3b)) goto LAB_1804c2086;
          *pbStackX_10 = 0x22;
          pbVar6 = pbVar6 + 6;
        }
        goto LAB_1804c2090;
      }
      pbVar1 = pbVar6 + 2;
      iVar7 = 0;
      if (*pbVar1 == 0x78) {
        pbVar1 = pbVar6 + 3;
        pbVar6 = pbVar6 + 3;
        bVar4 = (&unknown_var_240_ptr)[*pbVar1];
        while (bVar4 != 0xff) {
          pbVar6 = pbVar6 + 1;
          iVar7 = iVar7 * 0x10 + (uint)bVar4;
          bVar4 = (&unknown_var_240_ptr)[*pbVar6];
        }
      }
      else {
        pbVar6 = pbVar6 + 2;
        bVar4 = (&unknown_var_240_ptr)[*pbVar1];
        while (bVar4 != 0xff) {
          pbVar6 = pbVar6 + 1;
          iVar7 = (uint)bVar4 + iVar7 * 10;
          bVar4 = (&unknown_var_240_ptr)[*pbVar6];
        }
      }
      FUN_1804c21a0(param_1,&pbStackX_10,iVar7);
      if (*pbVar6 == 0x3b) {
        pbVar6 = pbVar6 + 1;
      }
      else {
        uStack_18 = *param_2;
        uStack_10 = param_1;
        FUN_18062e140(&unknown_var_8120_ptr,&uStack_18);
      }
    }
    else {
LAB_1804c2088:
      pbVar6 = pbVar6 + 1;
      *pbStackX_10 = bVar4;
LAB_1804c2090:
      pbStackX_10 = pbStackX_10 + 1;
    }
    uVar5 = (uint64_t)*pbVar6;
    cVar2 = (&unknown_var_9728_ptr)[*pbVar6];
  } while( true );
}






// 函数: void FUN_1804c21a0(uint64_t param_1,int64_t *param_2,uint param_3)
void FUN_1804c21a0(uint64_t param_1,int64_t *param_2,uint param_3)

{
  byte bVar1;
  byte *pbStack_18;
  uint64_t uStack_10;
  
  pbStack_18 = (byte *)*param_2;
  bVar1 = (byte)param_3;
  if (param_3 < 0x80) {
    *pbStack_18 = bVar1;
    *param_2 = *param_2 + 1;
    return;
  }
  if (param_3 < 0x800) {
    pbStack_18[1] = bVar1 & 0x3f | 0x80;
    *(byte *)*param_2 = (byte)(param_3 >> 6) | 0xc0;
    *param_2 = *param_2 + 2;
    return;
  }
  if (param_3 < 0x10000) {
    pbStack_18[2] = bVar1 & 0x3f | 0x80;
    *(byte *)(*param_2 + 1) = (byte)(param_3 >> 6) & 0x3f | 0x80;
    *(byte *)*param_2 = (byte)(param_3 >> 0xc) | 0xe0;
    *param_2 = *param_2 + 3;
    return;
  }
  if (param_3 < 0x110000) {
    pbStack_18[3] = bVar1 & 0x3f | 0x80;
    *(byte *)(*param_2 + 2) = (byte)(param_3 >> 6) & 0x3f | 0x80;
    *(byte *)(*param_2 + 1) = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
    *(byte *)*param_2 = (byte)(param_3 >> 0x12) | 0xf0;
    *param_2 = *param_2 + 4;
    return;
  }
  uStack_10 = param_1;
  FUN_18062e140(&unknown_var_8080_ptr,&pbStack_18);
  return;
}






// 函数: void FUN_1804c22a0(uint64_t param_1,uint64_t *param_2)
void FUN_1804c22a0(uint64_t param_1,uint64_t *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint64_t uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbStackX_10;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  pbVar6 = (byte *)*param_2;
  cVar2 = (&unknown_var_8704_ptr)[*pbVar6];
  while (cVar2 != '\0') {
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    cVar2 = (&unknown_var_8704_ptr)[*pbVar1];
  }
  *param_2 = pbVar6;
  uVar5 = (uint64_t)*pbVar6;
  cVar2 = (&unknown_var_8960_ptr)[uVar5];
  pbStackX_10 = pbVar6;
  do {
    if (cVar2 == '\0') {
      *param_2 = pbVar6;
      return;
    }
    bVar4 = (byte)uVar5;
    if (bVar4 == 0x26) {
      bVar3 = pbVar6[1];
      if (bVar3 != 0x23) {
        if (bVar3 == 0x61) {
          if (pbVar6[2] == 0x6d) {
            if ((pbVar6[3] != 0x70) || (pbVar6[4] != 0x3b)) {
LAB_1804c23d6:
              bVar4 = 0x26;
              goto LAB_1804c23d8;
            }
            *pbStackX_10 = 0x26;
            pbVar6 = pbVar6 + 5;
          }
          else {
            if ((((pbVar6[2] != 0x70) || (pbVar6[3] != 0x6f)) || (pbVar6[4] != 0x73)) ||
               (pbVar6[5] != 0x3b)) goto LAB_1804c23d6;
            *pbStackX_10 = 0x27;
            pbVar6 = pbVar6 + 6;
          }
        }
        else if (bVar3 == 0x67) {
          if ((pbVar6[2] != 0x74) || (pbVar6[3] != 0x3b)) goto LAB_1804c23d6;
          *pbStackX_10 = 0x3e;
          pbVar6 = pbVar6 + 4;
        }
        else if (bVar3 == 0x6c) {
          if ((pbVar6[2] != 0x74) || (pbVar6[3] != 0x3b)) goto LAB_1804c23d6;
          *pbStackX_10 = 0x3c;
          pbVar6 = pbVar6 + 4;
        }
        else {
          if (bVar3 != 0x71) goto LAB_1804c23d8;
          if ((((pbVar6[2] != 0x75) || (pbVar6[3] != 0x6f)) || (pbVar6[4] != 0x74)) ||
             (pbVar6[5] != 0x3b)) goto LAB_1804c23d6;
          *pbStackX_10 = 0x22;
          pbVar6 = pbVar6 + 6;
        }
        goto LAB_1804c23e0;
      }
      pbVar1 = pbVar6 + 2;
      iVar7 = 0;
      if (*pbVar1 == 0x78) {
        pbVar1 = pbVar6 + 3;
        pbVar6 = pbVar6 + 3;
        bVar4 = (&unknown_var_240_ptr)[*pbVar1];
        while (bVar4 != 0xff) {
          pbVar6 = pbVar6 + 1;
          iVar7 = iVar7 * 0x10 + (uint)bVar4;
          bVar4 = (&unknown_var_240_ptr)[*pbVar6];
        }
      }
      else {
        pbVar6 = pbVar6 + 2;
        bVar4 = (&unknown_var_240_ptr)[*pbVar1];
        while (bVar4 != 0xff) {
          pbVar6 = pbVar6 + 1;
          iVar7 = (uint)bVar4 + iVar7 * 10;
          bVar4 = (&unknown_var_240_ptr)[*pbVar6];
        }
      }
      FUN_1804c21a0(param_1,&pbStackX_10,iVar7);
      if (*pbVar6 == 0x3b) {
        pbVar6 = pbVar6 + 1;
      }
      else {
        uStack_18 = *param_2;
        uStack_10 = param_1;
        FUN_18062e140(&unknown_var_8120_ptr,&uStack_18);
      }
    }
    else {
LAB_1804c23d8:
      pbVar6 = pbVar6 + 1;
      *pbStackX_10 = bVar4;
LAB_1804c23e0:
      pbStackX_10 = pbStackX_10 + 1;
    }
    uVar5 = (uint64_t)*pbVar6;
    cVar2 = (&unknown_var_8960_ptr)[*pbVar6];
  } while( true );
}



uint64_t *
FUN_1804c24f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  param_1[0x15] = &system_data_buffer_ptr;
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x15] = &system_state_ptr;
  param_1[0x11] = &system_data_buffer_ptr;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  param_1[0x11] = &system_state_ptr;
  param_1[0xd] = &system_data_buffer_ptr;
  if (param_1[0xe] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  param_1[0xd] = &system_state_ptr;
  param_1[9] = &system_data_buffer_ptr;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  param_1[9] = &system_state_ptr;
  *param_1 = &unknown_var_5912_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,200,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c2600(int64_t param_1,int64_t param_2,int32_t param_3)
void FUN_1804c2600(int64_t param_1,int64_t param_2,int32_t param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  int iVar5;
  int32_t uVar6;
  uint64_t *puVar7;
  char *pcVar8;
  int64_t lVar9;
  uint64_t uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char acStackX_10 [8];
  void *puStack_168;
  int64_t lStack_160;
  int iStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t *puStack_140;
  int32_t uStack_138;
  uint64_t uStack_130;
  void *puStack_128;
  int64_t lStack_120;
  uint uStack_118;
  uint64_t uStack_110;
  void *puStack_108;
  int64_t lStack_100;
  int iStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  int64_t lStack_e0;
  uint uStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  int64_t lStack_c0;
  uint uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  
  if (param_2 != 0) {
    uStack_38 = 0xfffffffffffffffe;
    pcVar13 = (char *)0x0;
    *(int32_t *)(param_1 + 0x2c) = param_3;
    pcVar11 = "id";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
        puVar7 = (uint64_t *)puVar7[6]) {
      pcVar11 = (char *)*puVar7;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar8 = pcVar13;
      }
      else {
        pcVar8 = (char *)puVar7[2];
      }
      if (pcVar8 == pcVar12 + -0x180a0ae27) {
        pcVar8 = pcVar11 + (int64_t)pcVar8;
        if (pcVar8 <= pcVar11) {
LAB_1804c26b4:
          lVar9 = 0x180d48d24;
          if (puVar7[1] != 0) {
            lVar9 = puVar7[1];
          }
          (**(code **)(*(int64_t *)(param_1 + 0x48) + 0x10))(param_1 + 0x48,lVar9);
          break;
        }
        lVar9 = (int64_t)&unknown_var_1288_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar9]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) goto LAB_1804c26b4;
        }
      }
    }
    puStack_128 = &system_data_buffer_ptr;
    uStack_110 = 0;
    lStack_120 = 0;
    uStack_118 = 0;
    pcVar11 = "base_set";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
        puVar7 = (uint64_t *)puVar7[6]) {
      pcVar11 = (char *)*puVar7;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar8 = pcVar13;
      }
      else {
        pcVar8 = (char *)puVar7[2];
      }
      if (pcVar8 == pcVar12 + -0x180a2f62f) {
        pcVar8 = pcVar8 + (int64_t)pcVar11;
        if (pcVar8 <= pcVar11) {
LAB_1804c2774:
          lVar9 = 0x180d48d24;
          if (puVar7[1] != 0) {
            lVar9 = puVar7[1];
          }
          FUN_180627c50(&puStack_128,lVar9);
          break;
        }
        lVar9 = (int64_t)&unknown_var_800_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar9]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) goto LAB_1804c2774;
        }
      }
    }
    uVar4 = uStack_118;
    uVar10 = (uint64_t)uStack_118;
    if (0 < (int)uStack_118) {
      if (lStack_120 != 0) {
        FUN_1806277c0(param_1 + 0x68,uStack_118);
      }
      if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(param_1 + 0x70),lStack_120,uVar10);
      }
      *(int32_t *)(param_1 + 0x78) = 0;
      if (*(int64_t *)(param_1 + 0x70) != 0) {
        *(int8_t *)(uVar10 + *(int64_t *)(param_1 + 0x70)) = 0;
      }
      *(int32_t *)(param_1 + 0x84) = uStack_110._4_4_;
      iVar5 = FUN_1804c3680(&system_data_61b0,&puStack_128);
      if (-1 < iVar5) {
        lVar9 = (int64_t)iVar5 * 200 + system_system_memory;
        *(int8_t *)(param_1 + 0x30) = *(int8_t *)(lVar9 + 0x30);
        FUN_180627be0(param_1 + 0x88,lVar9 + 0x88);
        FUN_180627be0(param_1 + 0xa8,lVar9 + 0xa8);
        *(int8_t *)(param_1 + 8) = *(int8_t *)(lVar9 + 8);
        uVar3 = *(uint64_t *)(lVar9 + 0x14);
        *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(lVar9 + 0xc);
        *(uint64_t *)(param_1 + 0x14) = uVar3;
        uVar6 = *(int32_t *)(lVar9 + 0x20);
        uVar1 = *(int32_t *)(lVar9 + 0x24);
        uVar2 = *(int32_t *)(lVar9 + 0x28);
        *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(lVar9 + 0x1c);
        *(int32_t *)(param_1 + 0x20) = uVar6;
        *(int32_t *)(param_1 + 0x24) = uVar1;
        *(int32_t *)(param_1 + 0x28) = uVar2;
        *(int32_t *)(param_1 + 0x2c) = *(int32_t *)(lVar9 + 0x2c);
      }
    }
    acStackX_10[0] = '\0';
    FUN_180631000(param_2,&unknown_var_928_ptr,acStackX_10);
    if (acStackX_10[0] != '\0') {
      *(char *)(param_1 + 0x30) = acStackX_10[0];
    }
    puStack_c8 = &system_data_buffer_ptr;
    uStack_b0 = 0;
    lStack_c0 = 0;
    uStack_b8 = 0;
    pcVar11 = "group_name";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
        puVar7 = (uint64_t *)puVar7[6]) {
      pcVar11 = (char *)*puVar7;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar8 = pcVar13;
      }
      else {
        pcVar8 = (char *)puVar7[2];
      }
      if (pcVar8 == pcVar12 + -0x180a2f69f) {
        pcVar8 = pcVar8 + (int64_t)pcVar11;
        if (pcVar8 <= pcVar11) {
LAB_1804c2914:
          lVar9 = 0x180d48d24;
          if (puVar7[1] != 0) {
            lVar9 = puVar7[1];
          }
          FUN_180627c50(&puStack_c8,lVar9);
          break;
        }
        lVar9 = (int64_t)&unknown_var_912_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar9]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) goto LAB_1804c2914;
        }
      }
    }
    uVar4 = uStack_b8;
    uVar10 = (uint64_t)uStack_b8;
    if (0 < (int)uStack_b8) {
      if (lStack_c0 != 0) {
        FUN_1806277c0(param_1 + 0x88,uStack_b8);
      }
      if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(param_1 + 0x90),lStack_c0,uVar10);
      }
      *(int32_t *)(param_1 + 0x98) = 0;
      if (*(int64_t *)(param_1 + 0x90) != 0) {
        *(int8_t *)(uVar10 + *(int64_t *)(param_1 + 0x90)) = 0;
      }
      *(int32_t *)(param_1 + 0xa4) = uStack_b0._4_4_;
      *(int32_t *)(param_1 + 0x2c) = param_3;
    }
    puStack_e8 = &system_data_buffer_ptr;
    uStack_d0 = 0;
    lStack_e0 = 0;
    uStack_d8 = 0;
    pcVar11 = "holster_skeleton";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
        puVar7 = (uint64_t *)puVar7[6]) {
      pcVar11 = (char *)*puVar7;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar8 = pcVar13;
      }
      else {
        pcVar8 = (char *)puVar7[2];
      }
      if (pcVar8 == pcVar12 + -0x180a2f6d7) {
        pcVar8 = pcVar8 + (int64_t)pcVar11;
        if (pcVar8 <= pcVar11) {
LAB_1804c2a24:
          lVar9 = 0x180d48d24;
          if (puVar7[1] != 0) {
            lVar9 = puVar7[1];
          }
          FUN_180627c50(&puStack_e8,lVar9);
          break;
        }
        lVar9 = (int64_t)&unknown_var_968_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar9]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) goto LAB_1804c2a24;
        }
      }
    }
    uVar4 = uStack_d8;
    uVar10 = (uint64_t)uStack_d8;
    if (0 < (int)uStack_d8) {
      if (lStack_e0 != 0) {
        FUN_1806277c0(param_1 + 0xa8,uStack_d8);
      }
      if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(param_1 + 0xb0),lStack_e0,uVar10);
      }
      *(int32_t *)(param_1 + 0xb8) = 0;
      if (*(int64_t *)(param_1 + 0xb0) != 0) {
        *(int8_t *)(uVar10 + *(int64_t *)(param_1 + 0xb0)) = 0;
      }
      *(int32_t *)(param_1 + 0xc4) = uStack_d0._4_4_;
    }
    puStack_108 = &system_data_buffer_ptr;
    uStack_f0 = 0;
    lStack_100 = 0;
    iStack_f8 = 0;
    pcVar11 = "holster_bone";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
        puVar7 = (uint64_t *)puVar7[6]) {
      pcVar11 = (char *)*puVar7;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar8 = pcVar13;
      }
      else {
        pcVar8 = (char *)puVar7[2];
      }
      if (pcVar8 == pcVar12 + -0x180a2f6c7) {
        pcVar8 = pcVar8 + (int64_t)pcVar11;
        if (pcVar8 <= pcVar11) {
LAB_1804c2b24:
          lVar9 = 0x180d48d24;
          if (puVar7[1] != 0) {
            lVar9 = puVar7[1];
          }
          FUN_180627c50(&puStack_108,lVar9);
          break;
        }
        lVar9 = (int64_t)&unknown_var_952_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar9]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) goto LAB_1804c2b24;
        }
      }
    }
    if (0 < iStack_f8) {
      uStack_148 = &system_data_buffer_ptr;
      uStack_130 = 0;
      puStack_140 = (uint64_t *)0x0;
      uStack_138 = 0;
      puVar7 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar7 = 0;
      puStack_140 = puVar7;
      uVar6 = FUN_18064e990(puVar7);
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar6);
      *puVar7 = 0x6b735f6e616d7568;
      *(int32_t *)(puVar7 + 1) = 0x74656c65;
      *(int16_t *)((int64_t)puVar7 + 0xc) = 0x6e6f;
      *(int8_t *)((int64_t)puVar7 + 0xe) = 0;
      uStack_138 = 0xe;
      FUN_1800b3970(0,acStackX_10,&uStack_148,0);
      uStack_148 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar7);
    }
    *(int8_t *)(param_1 + 0x33) = 1;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    lVar9 = FUN_180631960(param_2,&unknown_var_840_ptr,&uStack_90);
    if (lVar9 == 0) {
      *(int8_t *)(param_1 + 0x32) = 1;
    }
    else {
      *(int32_t *)(param_1 + 0xc) = uStack_90;
      *(int32_t *)(param_1 + 0x10) = uStack_8c;
      *(int32_t *)(param_1 + 0x14) = uStack_88;
      *(int32_t *)(param_1 + 0x18) = uStack_84;
    }
    lVar9 = FUN_180631960(param_2,&unknown_var_816_ptr,&uStack_a8);
    if (lVar9 == 0) {
      lVar9 = FUN_180631960(param_2,&unknown_var_880_ptr,&uStack_a8);
      if (lVar9 == 0) {
        *(int8_t *)(param_1 + 0x31) = 1;
      }
      else {
        *(int32_t *)(param_1 + 0x1c) = uStack_a8;
        *(int32_t *)(param_1 + 0x20) = uStack_a4;
        *(int32_t *)(param_1 + 0x24) = uStack_a0;
        *(int32_t *)(param_1 + 0x28) = uStack_9c;
      }
    }
    else {
      *(uint64_t *)(param_1 + 0x1c) = CONCAT44(uStack_a4,uStack_a8);
      *(uint64_t *)(param_1 + 0x24) = CONCAT44(uStack_9c,uStack_a0);
      uStack_78 = 0x3f800000;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_64 = 0x3f800000;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_50 = 0x3f800000;
      FUN_180085970(&uStack_78,*(float *)(param_1 + 0x1c) * 0.017453292);
      FUN_180085c10(&uStack_78,*(float *)(param_1 + 0x24) * 0.017453292);
      FUN_180085ac0(&uStack_78,*(float *)(param_1 + 0x20) * 0.017453292);
      uStack_48 = *(int32_t *)(param_1 + 0xc);
      uStack_44 = *(int32_t *)(param_1 + 0x10);
      uStack_40 = *(int32_t *)(param_1 + 0x14);
      uStack_3c = 0x3f800000;
      FUN_1801c1720(&uStack_78,&uStack_148);
      *(float *)(param_1 + 0x1c) = (float)uStack_148 * 57.29578;
      *(float *)(param_1 + 0x20) = uStack_148._4_4_ * 57.29578;
      *(float *)(param_1 + 0x24) = puStack_140._0_4_ * 57.29578;
      *(int32_t *)(param_1 + 0x28) = 0x7f7fffff;
    }
    puStack_168 = &system_data_buffer_ptr;
    uStack_150 = 0;
    lStack_160 = 0;
    iStack_158 = 0;
    pcVar11 = "equip_action";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
        puVar7 = (uint64_t *)puVar7[6]) {
      pcVar11 = (char *)*puVar7;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar8 = pcVar13;
      }
      else {
        pcVar8 = (char *)puVar7[2];
      }
      if (pcVar8 == pcVar12 + -0x180a2f66f) {
        pcVar8 = pcVar8 + (int64_t)pcVar11;
        if (pcVar8 <= pcVar11) {
LAB_1804c2e95:
          lVar9 = 0x180d48d24;
          if (puVar7[1] != 0) {
            lVar9 = puVar7[1];
          }
          FUN_180627c50(&puStack_168,lVar9);
          break;
        }
        lVar9 = (int64_t)&unknown_var_864_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar9]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) goto LAB_1804c2e95;
        }
      }
    }
    if (0 < iStack_158) {
      uVar6 = FUN_18055b2f0(&system_data_6150,&puStack_168);
      *(int32_t *)(param_1 + 0x34) = uVar6;
    }
    pcVar11 = "equip_action_left_stance";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
        puVar7 = (uint64_t *)puVar7[6]) {
      pcVar11 = (char *)*puVar7;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar8 = pcVar13;
      }
      else {
        pcVar8 = (char *)puVar7[2];
      }
      if (pcVar8 == pcVar12 + -0x180a2f72f) {
        pcVar8 = pcVar8 + (int64_t)pcVar11;
        if (pcVar8 <= pcVar11) {
LAB_1804c2f30:
          lVar9 = 0x180d48d24;
          if (puVar7[1] != 0) {
            lVar9 = puVar7[1];
          }
          (**(code **)(puStack_168 + 0x10))(&puStack_168,lVar9);
          break;
        }
        lVar9 = (int64_t)&unknown_var_1056_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar9]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) goto LAB_1804c2f30;
        }
      }
    }
    if (0 < iStack_158) {
      uVar6 = FUN_18055b2f0(&system_data_6150,&puStack_168);
      *(int32_t *)(param_1 + 0x38) = uVar6;
    }
    pcVar11 = "unequip_action";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
        puVar7 = (uint64_t *)puVar7[6]) {
      pcVar11 = (char *)*puVar7;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar8 = pcVar13;
      }
      else {
        pcVar8 = (char *)puVar7[2];
      }
      if (pcVar8 == pcVar12 + -0x180a2f71f) {
        pcVar8 = pcVar8 + (int64_t)pcVar11;
        if (pcVar8 <= pcVar11) {
LAB_1804c2fd0:
          lVar9 = 0x180d48d24;
          if (puVar7[1] != 0) {
            lVar9 = puVar7[1];
          }
          (**(code **)(puStack_168 + 0x10))(&puStack_168,lVar9);
          break;
        }
        lVar9 = (int64_t)&unknown_var_1040_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar9]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) goto LAB_1804c2fd0;
        }
      }
    }
    if (0 < iStack_158) {
      uVar6 = FUN_18055b2f0(&system_data_6150,&puStack_168);
      *(int32_t *)(param_1 + 0x3c) = uVar6;
    }
    pcVar11 = "unequip_action_left_stance";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    for (puVar7 = *(uint64_t **)(param_2 + 0x40); puVar7 != (uint64_t *)0x0;
        puVar7 = (uint64_t *)puVar7[6]) {
      pcVar11 = (char *)*puVar7;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x180d48d24;
        pcVar8 = pcVar13;
      }
      else {
        pcVar8 = (char *)puVar7[2];
      }
      if (pcVar8 == pcVar12 + -0x180a2f75f) {
        pcVar8 = pcVar8 + (int64_t)pcVar11;
        if (pcVar8 <= pcVar11) {
LAB_1804c3074:
          lVar9 = 0x180d48d24;
          if (puVar7[1] != 0) {
            lVar9 = puVar7[1];
          }
          (**(code **)(puStack_168 + 0x10))(&puStack_168,lVar9);
          break;
        }
        lVar9 = (int64_t)&unknown_var_1104_ptr - (int64_t)pcVar11;
        while (*pcVar11 == pcVar11[lVar9]) {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) goto LAB_1804c3074;
        }
      }
    }
    if (0 < iStack_158) {
      uVar6 = FUN_18055b2f0(&system_data_6150,&puStack_168);
      *(int32_t *)(param_1 + 0x40) = uVar6;
    }
    puStack_168 = &system_data_buffer_ptr;
    if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_160 = 0;
    uStack_150 = uStack_150 & 0xffffffff00000000;
    puStack_168 = &system_state_ptr;
    puStack_108 = &system_data_buffer_ptr;
    if (lStack_100 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_100 = 0;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    puStack_108 = &system_state_ptr;
    puStack_e8 = &system_data_buffer_ptr;
    if (lStack_e0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_e0 = 0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    puStack_e8 = &system_state_ptr;
    puStack_c8 = &system_data_buffer_ptr;
    if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_c0 = 0;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    puStack_c8 = &system_state_ptr;
    puStack_128 = &system_data_buffer_ptr;
    if (lStack_120 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_1804c3180(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  
  if (*(char *)(param_1 + 0x33) != '\0') {
    iVar1 = FUN_1804c3680(&system_data_61b0,param_1 + 0x68);
    lVar2 = (int64_t)iVar1 * 200 + system_system_memory;
    if (lVar2 != 0) {
      return *(int8_t *)(lVar2 + 8);
    }
  }
  return *(int8_t *)(param_1 + 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c31d0(int64_t param_1,int32_t *param_2,int8_t *param_3)
void FUN_1804c31d0(int64_t param_1,int32_t *param_2,int8_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  float fVar3;
  int32_t uVar4;
  float fVar5;
  int32_t uVar6;
  float fVar7;
  int32_t uVar8;
  int32_t uVar9;
  
  *param_3 = *(int8_t *)(param_1 + 8);
  if (*(char *)(param_1 + 0x31) == '\0') {
LAB_1804c3216:
    fVar3 = *(float *)(param_1 + 0x1c);
    fVar5 = *(float *)(param_1 + 0x20);
    fVar7 = *(float *)(param_1 + 0x24);
  }
  else {
    iVar1 = FUN_1804c3680(&system_data_61b0,param_1 + 0x68);
    lVar2 = (int64_t)iVar1 * 200 + system_system_memory;
    if (lVar2 == 0) goto LAB_1804c3216;
    fVar3 = *(float *)(lVar2 + 0x1c);
    fVar5 = *(float *)(lVar2 + 0x20);
    fVar7 = *(float *)(lVar2 + 0x24);
  }
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_18040f420(param_2,fVar7 * 0.017453292);
  FUN_18040f590(param_2,fVar3 * 0.017453292);
  FUN_18040f4d0(param_2,fVar5 * 0.017453292);
  if (*(char *)(param_1 + 0x32) != '\0') {
    iVar1 = FUN_1804c3680(&system_data_61b0,param_1 + 0x68);
    lVar2 = (int64_t)iVar1 * 200 + system_system_memory;
    if (lVar2 != 0) {
      uVar4 = *(int32_t *)(lVar2 + 0xc);
      uVar6 = *(int32_t *)(lVar2 + 0x10);
      uVar8 = *(int32_t *)(lVar2 + 0x14);
      uVar9 = *(int32_t *)(lVar2 + 0x18);
      goto LAB_1804c329f;
    }
  }
  uVar4 = *(int32_t *)(param_1 + 0xc);
  uVar6 = *(int32_t *)(param_1 + 0x10);
  uVar8 = *(int32_t *)(param_1 + 0x14);
  uVar9 = *(int32_t *)(param_1 + 0x18);
LAB_1804c329f:
  param_2[4] = uVar4;
  param_2[5] = uVar6;
  param_2[6] = uVar8;
  param_2[7] = uVar9;
  param_2[7] = 0x3f800000;
  return;
}







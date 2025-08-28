#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part019.c - 2 个函数

// 函数: void FUN_1804ad730(int64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_1804ad730(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int64_t lVar11;
  void *puVar12;
  uint64_t uVar13;
  char *pcVar14;
  char *pcVar15;
  
  pcVar14 = "id";
  do {
    pcVar15 = pcVar14;
    pcVar14 = pcVar15 + 1;
  } while (*pcVar14 != '\0');
  pcVar14 = (char *)0x0;
  uVar8 = 0;
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar9 = (char *)*puVar2;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar5 = pcVar14;
    }
    else {
      pcVar5 = (char *)puVar2[2];
    }
    if (pcVar5 == pcVar15 + -0x180a0ae27) {
      pcVar5 = pcVar9 + (int64_t)pcVar5;
      if (pcVar5 <= pcVar9) {
LAB_1804ad7b8:
        lVar11 = 0x180d48d24;
        if (puVar2[1] != 0) {
          lVar11 = puVar2[1];
        }
        (**(code **)(param_1[4] + 0x10))(param_1 + 4,lVar11);
        break;
      }
      lVar11 = (int64_t)&unknown_var_1288_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar11]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar5 <= pcVar9) goto LAB_1804ad7b8;
      }
    }
  }
  pcVar15 = "key_time_point";
  do {
    pcVar9 = pcVar15;
    pcVar15 = pcVar9 + 1;
  } while (*pcVar15 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); pcVar15 = pcVar14, puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar15 = (char *)*puVar2;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar5 = pcVar14;
    }
    else {
      pcVar5 = (char *)puVar2[2];
    }
    if (pcVar5 == pcVar9 + -0x180a2e1e7) {
      pcVar5 = pcVar5 + (int64_t)pcVar15;
      if (pcVar5 <= pcVar15) {
LAB_1804ad840:
        pcVar15 = (char *)0x180d48d24;
        if ((char *)puVar2[1] != (char *)0x0) {
          pcVar15 = (char *)puVar2[1];
        }
        break;
      }
      lVar11 = (int64_t)&unknown_var_5608_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar11]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar5 <= pcVar15) goto LAB_1804ad840;
      }
    }
  }
  uVar13 = 0xffffffffffffffff;
  if (((int64_t)param_1 + 0x44 != 0) && (pcVar15 != (char *)0x0)) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (pcVar15[uVar3] != '\0');
    if (((uVar3 < 3) || (*pcVar15 != '0')) ||
       (puVar12 = &unknown_var_5412_ptr, (pcVar15[1] + 0xa8U & 0xdf) != 0)) {
      puVar12 = &unknown_var_2208_ptr;
    }
    FUN_18010cbc0(pcVar15,puVar12,(int64_t)param_1 + 0x44);
  }
  pcVar15 = "key_min";
  do {
    pcVar9 = pcVar15;
    pcVar15 = pcVar9 + 1;
  } while (*pcVar15 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); pcVar15 = pcVar14, puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar15 = (char *)*puVar2;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar5 = pcVar14;
    }
    else {
      pcVar5 = (char *)puVar2[2];
    }
    if (pcVar5 == pcVar9 + -0x180a2e157) {
      pcVar5 = pcVar5 + (int64_t)pcVar15;
      if (pcVar5 <= pcVar15) {
LAB_1804ad900:
        pcVar15 = (char *)0x180d48d24;
        if ((char *)puVar2[1] != (char *)0x0) {
          pcVar15 = (char *)puVar2[1];
        }
        break;
      }
      lVar11 = (int64_t)&unknown_var_5464_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar11]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar5 <= pcVar15) goto LAB_1804ad900;
      }
    }
  }
  if ((param_1 + 9 != (int64_t *)0x0) && (pcVar15 != (char *)0x0)) {
    FUN_18010cbc0(pcVar15,&system_data_6430,param_1 + 9);
  }
  pcVar15 = "key_max";
  do {
    pcVar9 = pcVar15;
    pcVar15 = pcVar9 + 1;
  } while (*pcVar15 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); pcVar15 = pcVar14, puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar15 = (char *)*puVar2;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar5 = pcVar14;
    }
    else {
      pcVar5 = (char *)puVar2[2];
    }
    if (pcVar5 == pcVar9 + -0x180a2e14f) {
      pcVar5 = pcVar5 + (int64_t)pcVar15;
      if (pcVar5 <= pcVar15) {
LAB_1804ad9a0:
        pcVar15 = (char *)0x180d48d24;
        if ((char *)puVar2[1] != (char *)0x0) {
          pcVar15 = (char *)puVar2[1];
        }
        break;
      }
      lVar11 = (int64_t)&unknown_var_5456_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar11]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar5 <= pcVar15) goto LAB_1804ad9a0;
      }
    }
  }
  if (((int64_t)param_1 + 0x4c != 0) && (pcVar15 != (char *)0x0)) {
    FUN_18010cbc0(pcVar15,&system_data_6430,(int64_t)param_1 + 0x4c);
  }
  pcVar15 = "name";
  do {
    pcVar9 = pcVar15;
    pcVar15 = pcVar9 + 1;
  } while (*pcVar15 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar15 = (char *)*puVar2;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar5 = pcVar14;
    }
    else {
      pcVar5 = (char *)puVar2[2];
    }
    if (pcVar5 == pcVar9 + -0x180a03a83) {
      pcVar5 = pcVar15 + (int64_t)pcVar5;
      if (pcVar5 <= pcVar15) {
LAB_1804ada40:
        lVar11 = 0x180d48d24;
        if (puVar2[1] != 0) {
          lVar11 = puVar2[1];
        }
        (**(code **)(*param_1 + 0x10))(param_1,lVar11);
        break;
      }
      lVar11 = (int64_t)&system_data_3a84 - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar11]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar5 <= pcVar15) goto LAB_1804ada40;
      }
    }
  }
  pcVar15 = "group_id";
  do {
    pcVar9 = pcVar15;
    pcVar15 = pcVar9 + 1;
  } while (*pcVar15 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); pcVar15 = pcVar14, puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar15 = (char *)*puVar2;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar5 = pcVar14;
    }
    else {
      pcVar5 = (char *)puVar2[2];
    }
    if (pcVar5 == pcVar9 + -0x180a2e1d7) {
      pcVar5 = pcVar5 + (int64_t)pcVar15;
      if (pcVar5 <= pcVar15) {
LAB_1804adac7:
        pcVar15 = (char *)0x180d48d24;
        if ((char *)puVar2[1] != (char *)0x0) {
          pcVar15 = (char *)puVar2[1];
        }
        break;
      }
      lVar11 = (int64_t)&unknown_var_5592_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar11]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar5 <= pcVar15) goto LAB_1804adac7;
      }
    }
  }
  if ((param_1 + 8 != (int64_t *)0x0) && (pcVar15 != (char *)0x0)) {
    do {
      uVar13 = uVar13 + 1;
    } while (pcVar15[uVar13] != '\0');
    if (((uVar13 < 3) || (*pcVar15 != '0')) ||
       (puVar12 = &unknown_var_5412_ptr, (pcVar15[1] + 0xa8U & 0xdf) != 0)) {
      puVar12 = &unknown_var_2208_ptr;
    }
    FUN_18010cbc0(pcVar15,puVar12,param_1 + 8);
  }
  FUN_180631000(param_2,&unknown_var_5664_ptr,param_1 + 10);
  FUN_180631000(param_2,&unknown_var_5624_ptr,(int64_t)param_1 + 0x51);
  *(int8_t *)((int64_t)param_1 + 0x52) = 0;
  *(int32_t *)((int64_t)param_1 + 0x54) = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  *(int32_t *)((int64_t)param_1 + 0x5c) = 0;
  *(int32_t *)(param_1 + 0xc) = 0x7f7fffff;
  *(int32_t *)((int64_t)param_1 + 100) = 0;
  *(int32_t *)(param_1 + 0xd) = 0;
  *(int32_t *)((int64_t)param_1 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0xe) = 0x7f7fffff;
  lVar11 = FUN_180631960(param_2,0);
  if (lVar11 != 0) {
    *(int8_t *)((int64_t)param_1 + 0x52) = 1;
  }
  lVar11 = FUN_180631960(param_2,&unknown_var_5496_ptr,(int64_t)param_1 + 100);
  if (lVar11 != 0) {
    *(int8_t *)((int64_t)param_1 + 0x52) = 1;
  }
  puVar1 = (int32_t *)((int64_t)param_1 + 0x74);
  pcVar15 = "deforms_hair";
  do {
    pcVar9 = pcVar15;
    pcVar15 = pcVar9 + 1;
  } while (*pcVar15 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); pcVar15 = pcVar14, puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar15 = (char *)*puVar2;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar5 = pcVar14;
    }
    else {
      pcVar5 = (char *)puVar2[2];
    }
    if (pcVar5 == pcVar9 + -0x180a2e1c7) {
      pcVar5 = pcVar5 + (int64_t)pcVar15;
      if (pcVar5 <= pcVar15) {
LAB_1804adc00:
        pcVar15 = (char *)0x180d48d24;
        if ((char *)puVar2[1] != (char *)0x0) {
          pcVar15 = (char *)puVar2[1];
        }
        break;
      }
      lVar11 = (int64_t)&unknown_var_5576_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar11]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar5 <= pcVar15) goto LAB_1804adc00;
      }
    }
  }
  if (puVar1 == (int32_t *)0x0) {
LAB_1804adc38:
    if (pcVar15 != (char *)0x0) goto LAB_1804adc3f;
  }
  else if (pcVar15 != (char *)0x0) {
    FUN_18010cbc0(pcVar15,&system_data_6430,puVar1);
    goto LAB_1804adc38;
  }
  *puVar1 = 0;
LAB_1804adc3f:
  if (((*(char *)((int64_t)param_1 + 0x52) != '\0') &&
      (*(int64_t *)(*(int64_t *)(param_3 + 0x10) + 0xb0) != 0)) &&
     (*(short *)(*(int64_t *)(param_3 + 0x10) + 0xc0) != 0)) {
    FUN_1804adf50(param_1,param_3);
  }
  pcVar15 = "bone_scales";
  do {
    pcVar9 = pcVar15;
    pcVar15 = pcVar9 + 1;
  } while (*pcVar15 != '\0');
  for (pcVar15 = *(char **)(param_2 + 0x30); pcVar5 = pcVar14, pcVar15 != (char *)0x0;
      pcVar15 = *(char **)(pcVar15 + 0x58)) {
    pcVar10 = *(char **)pcVar15;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar4 = pcVar14;
    }
    else {
      pcVar4 = *(char **)(pcVar15 + 0x10);
    }
    if (pcVar4 == pcVar9 + -0x180a2e1b7) {
      pcVar4 = pcVar4 + (int64_t)pcVar10;
      pcVar5 = pcVar15;
      if (pcVar4 <= pcVar10) break;
      lVar11 = (int64_t)&unknown_var_5560_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar11]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar4 <= pcVar10) goto LAB_1804adcce;
      }
    }
  }
LAB_1804adcce:
  *(int32_t *)(param_1 + 0xf) = 0;
  if (pcVar5 == (char *)0x0) {
    param_1[0x12] = 0;
  }
  else {
    pcVar15 = pcVar14;
    uVar6 = uVar8;
    for (lVar11 = *(int64_t *)(pcVar5 + 0x30); lVar11 != 0; lVar11 = *(int64_t *)(lVar11 + 0x58))
    {
      uVar6 = (int)pcVar15 + 1;
      pcVar15 = (char *)(uint64_t)uVar6;
    }
    *(uint *)(param_1 + 0xf) = uVar6;
    if (0 < (int)uVar6) {
      lVar11 = *(int64_t *)(pcVar5 + 0x30);
      if (uVar6 == 0) {
        iVar7 = 0;
        pcVar15 = pcVar14;
      }
      else {
        pcVar15 = (char *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar6 << 4,
                                        CONCAT71((int7)((uint64_t)pcVar5 >> 8),0x12));
        iVar7 = (int)param_1[0xf];
      }
      param_1[0x12] = (int64_t)pcVar15;
      pcVar15 = pcVar14;
      if (0 < iVar7) {
        do {
          FUN_1804ad370((int64_t)(int)pcVar15 * 0x10 + param_1[0x12],lVar11);
          lVar11 = *(int64_t *)(lVar11 + 0x58);
          uVar6 = (int)pcVar15 + 1;
          pcVar15 = (char *)(uint64_t)uVar6;
        } while ((int)uVar6 < (int)param_1[0xf]);
      }
    }
  }
  pcVar15 = "large_bone_scales";
  do {
    pcVar9 = pcVar15;
    pcVar15 = pcVar9 + 1;
  } while (*pcVar15 != '\0');
  puVar2 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar2 == (uint64_t *)0x0) {
      param_1[0x13] = 0;
LAB_1804addf4:
      pcVar15 = "skinny_bone_scales";
      do {
        pcVar9 = pcVar15;
        pcVar15 = pcVar9 + 1;
      } while (*pcVar15 != '\0');
      puVar2 = *(uint64_t **)(param_2 + 0x30);
      do {
        if (puVar2 == (uint64_t *)0x0) {
          param_1[0x14] = 0;
          return;
        }
        pcVar15 = (char *)*puVar2;
        if (pcVar15 == (char *)0x0) {
          pcVar15 = (char *)0x180d48d24;
          pcVar5 = pcVar14;
        }
        else {
          pcVar5 = (char *)puVar2[2];
        }
        if (pcVar5 == pcVar9 + -0x180a2e28f) {
          pcVar5 = pcVar5 + (int64_t)pcVar15;
          if (pcVar5 <= pcVar15) {
LAB_1804adea0:
            pcVar15 = pcVar14;
            for (lVar11 = puVar2[6]; lVar11 != 0; lVar11 = *(int64_t *)(lVar11 + 0x58)) {
              uVar8 = (int)pcVar15 + 1;
              pcVar15 = (char *)(uint64_t)uVar8;
            }
            *(uint *)(param_1 + 0xf) = uVar8;
            if ((int)uVar8 < 1) {
              return;
            }
            lVar11 = puVar2[6];
            if (uVar8 == 0) {
              iVar7 = 0;
              pcVar15 = pcVar14;
            }
            else {
              pcVar15 = (char *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar8 << 4,
                                              CONCAT71((int7)((uint64_t)puVar2 >> 8),0x12));
              iVar7 = (int)param_1[0xf];
            }
            param_1[0x14] = (int64_t)pcVar15;
            if (0 < iVar7) {
              do {
                FUN_1804ad370((int64_t)(int)pcVar14 * 0x10 + param_1[0x14],lVar11);
                lVar11 = *(int64_t *)(lVar11 + 0x58);
                uVar8 = (int)pcVar14 + 1;
                pcVar14 = (char *)(uint64_t)uVar8;
              } while ((int)uVar8 < (int)param_1[0xf]);
              return;
            }
            return;
          }
          lVar11 = (int64_t)&unknown_var_5776_ptr - (int64_t)pcVar15;
          while (*pcVar15 == pcVar15[lVar11]) {
            pcVar15 = pcVar15 + 1;
            if (pcVar5 <= pcVar15) goto LAB_1804adea0;
          }
        }
        puVar2 = (uint64_t *)puVar2[0xb];
      } while( true );
    }
    pcVar15 = (char *)*puVar2;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar5 = pcVar14;
    }
    else {
      pcVar5 = (char *)puVar2[2];
    }
    if (pcVar5 == pcVar9 + -0x180a2e2a7) {
      pcVar5 = pcVar5 + (int64_t)pcVar15;
      if (pcVar5 <= pcVar15) {
LAB_1804addb8:
        pcVar15 = pcVar14;
        uVar6 = uVar8;
        for (lVar11 = puVar2[6]; lVar11 != 0; lVar11 = *(int64_t *)(lVar11 + 0x58)) {
          uVar6 = (int)pcVar15 + 1;
          pcVar15 = (char *)(uint64_t)uVar6;
        }
        *(uint *)(param_1 + 0xf) = uVar6;
        if (0 < (int)uVar6) {
          lVar11 = puVar2[6];
          if (uVar6 == 0) {
            iVar7 = 0;
            pcVar15 = pcVar14;
          }
          else {
            pcVar15 = (char *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar6 << 4,
                                            CONCAT71((int7)((uint64_t)puVar2 >> 8),0x12));
            iVar7 = (int)param_1[0xf];
          }
          param_1[0x13] = (int64_t)pcVar15;
          pcVar15 = pcVar14;
          if (0 < iVar7) {
            do {
              FUN_1804ad370((int64_t)(int)pcVar15 * 0x10 + param_1[0x13],lVar11);
              lVar11 = *(int64_t *)(lVar11 + 0x58);
              uVar6 = (int)pcVar15 + 1;
              pcVar15 = (char *)(uint64_t)uVar6;
            } while ((int)uVar6 < (int)param_1[0xf]);
          }
        }
        goto LAB_1804addf4;
      }
      lVar11 = (int64_t)&unknown_var_5800_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar11]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar5 <= pcVar15) goto LAB_1804addb8;
      }
    }
    puVar2 = (uint64_t *)puVar2[0xb];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804adf50(int64_t param_1,int64_t param_2)
void FUN_1804adf50(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  float *pfVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int64_t lVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int64_t lVar15;
  int iVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int64_t lStackX_20;
  uint64_t uVar23;
  float afStack_120 [4];
  float *pfStack_110;
  float *pfStack_108;
  float *pfStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  
  uVar23 = 0xfffffffffffffffe;
  lVar1 = *(int64_t *)(param_2 + 0x10);
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 3;
  iVar16 = *(int *)(*(int64_t *)(param_2 + 0x10) + 0x10);
  lVar17 = (int64_t)iVar16;
  lVar19 = (int64_t)*(int *)(param_1 + 0x44) * 0x50 +
           *(int64_t *)(*(int64_t *)(param_2 + 0x10) + 0xb0);
  lVar5 = 0;
  afStack_120[2] = 0.0;
  if (3 < lVar17) {
    pfVar6 = (float *)(*(int64_t *)(lVar1 + 0x18) + 8);
    pfVar2 = (float *)(*(int64_t *)(lVar1 + 0x18) + 0x18);
    lVar11 = (lVar17 - 4U >> 2) + 1;
    lVar5 = lVar11 * 4;
    do {
      afStack_120[2] = afStack_120[2] + *pfVar6 + *pfVar2 + pfVar2[4] + pfVar2[8];
      pfVar6 = pfVar6 + 0x10;
      pfVar2 = pfVar2 + 0x10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (lVar5 < lVar17) {
    lVar11 = lVar5 * 0x10 + *(int64_t *)(lVar1 + 0x18);
    lVar5 = lVar17 - lVar5;
    do {
      afStack_120[2] = afStack_120[2] + *(float *)(lVar11 + 8);
      lVar11 = lVar11 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  afStack_120[3] = 3.4028235e+38;
  afStack_120[2] = afStack_120[2] / (float)iVar16;
  afStack_120[0] = 0.0;
  afStack_120[1] = 0.0;
  *(uint64_t *)(param_1 + 0x7c) = 0;
  *(uint64_t *)(param_1 + 0x84) = 0x7f7fffff00000000;
  lVar18 = 0;
  lVar11 = 0x20 - (int64_t)afStack_120;
  lStackX_20 = 3;
  lVar5 = lVar17;
  do {
    pfStack_110 = (float *)0x0;
    pfStack_108 = (float *)0x0;
    pfStack_100 = (float *)0x0;
    uStack_f8 = 3;
    if (lVar5 != 0) {
      pfStack_110 = (float *)FUN_18062b420(system_memory_pool_ptr);
      pfStack_108 = pfStack_110;
      pfStack_100 = pfStack_110 + lVar5 * 2;
    }
    fVar20 = 0.0;
    iVar16 = 0;
    lVar4 = 0;
    if (3 < lVar5) {
      lVar15 = *(int64_t *)(lVar1 + 0x18);
      pfVar9 = (float *)((int64_t)afStack_120 + lVar18);
      pfVar2 = (float *)(lVar18 + 0x10 + lVar15);
      pfVar6 = (float *)((int64_t)pfVar9 + lVar15 + lVar11);
      lVar15 = *(int64_t *)(lVar19 + 8) - lVar15;
      lVar3 = (lVar5 - 4U >> 2) + 1;
      lVar4 = lVar3 * 4;
      do {
        fVar21 = *(float *)(lVar15 + -0x20 + (int64_t)pfVar6);
        if (0.001 < fVar21 - pfVar6[-8]) {
          fVar20 = (ABS(fVar21 - *pfVar9) / ABS(pfVar6[-8] - *pfVar9) + fVar20) - 1.0;
          iVar16 = iVar16 + 1;
        }
        if (0.001 < *(float *)(lVar15 + (int64_t)pfVar2) - *pfVar2) {
          fVar20 = (ABS(*(float *)(lVar15 + (int64_t)pfVar2) - *pfVar9) / ABS(*pfVar2 - *pfVar9) +
                   fVar20) - 1.0;
          iVar16 = iVar16 + 1;
        }
        if (0.001 < *(float *)(lVar15 + (int64_t)pfVar6) - *pfVar6) {
          fVar20 = (ABS(*(float *)(lVar15 + (int64_t)pfVar6) - *pfVar9) / ABS(*pfVar6 - *pfVar9) +
                   fVar20) - 1.0;
          iVar16 = iVar16 + 1;
        }
        fVar21 = *(float *)(lVar15 + 0x20 + (int64_t)pfVar2);
        if (0.001 < fVar21 - pfVar2[8]) {
          fVar20 = (ABS(fVar21 - *pfVar9) / ABS(pfVar2[8] - *pfVar9) + fVar20) - 1.0;
          iVar16 = iVar16 + 1;
        }
        pfVar6 = pfVar6 + 0x10;
        pfVar2 = pfVar2 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 < lVar5) {
      pfVar6 = (float *)(*(int64_t *)(lVar1 + 0x18) + lVar4 * 0x10 + lVar18);
      pfVar2 = (float *)(*(int64_t *)(lVar19 + 8) + lVar4 * 0x10 + lVar18);
      lVar4 = lVar5 - lVar4;
      do {
        if (0.001 < *pfVar2 - *pfVar6) {
          fVar20 = (ABS(*pfVar2 - *(float *)((int64_t)afStack_120 + lVar18)) /
                    ABS(*pfVar6 - *(float *)((int64_t)afStack_120 + lVar18)) + fVar20) - 1.0;
          iVar16 = iVar16 + 1;
        }
        pfVar6 = pfVar6 + 4;
        pfVar2 = pfVar2 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    pfVar2 = pfStack_108;
    pfVar6 = pfStack_108;
    lVar4 = lVar5;
    pfStack_110 = pfStack_108;
    if (0 < lVar5) {
      lVar15 = 0;
      pfVar13 = pfStack_108;
      pfVar8 = pfStack_108;
      pfVar9 = pfStack_100;
      lVar4 = lVar17;
      do {
        pfVar7 = (float *)(*(int64_t *)(lVar1 + 0x18) + lVar15);
        pfVar12 = (float *)(*(int64_t *)(lVar19 + 8) + lVar15);
        pfVar2 = pfVar13;
        pfVar6 = pfVar8;
        if (1e-09 < (*pfVar12 - *pfVar7) * (*pfVar12 - *pfVar7) +
                    (pfVar12[1] - pfVar7[1]) * (pfVar12[1] - pfVar7[1]) +
                    (pfVar12[2] - pfVar7[2]) * (pfVar12[2] - pfVar7[2])) {
          fVar22 = ABS(*(float *)((int64_t)pfVar7 + lVar18) -
                       *(float *)((int64_t)afStack_120 + lVar18));
          fVar21 = ABS(*(float *)((int64_t)pfVar12 + lVar18) -
                       *(float *)((int64_t)afStack_120 + lVar18)) / fVar22 - 1.0;
          if ((0.25 / (float)iVar16) * fVar20 < fVar21) {
            if (pfVar8 < pfVar9) {
              pfVar6 = pfVar8 + 2;
              pfStack_108 = pfVar6;
              *pfVar8 = fVar22;
              pfVar8[1] = fVar21;
            }
            else {
              lVar17 = (int64_t)pfVar8 - (int64_t)pfVar13 >> 3;
              pfVar9 = pfVar13;
              if (lVar17 == 0) {
                lVar17 = 1;
LAB_1804ae454:
                pfVar6 = (float *)FUN_18062b420(system_memory_pool_ptr,lVar17 * 8,3);
                pfVar2 = pfVar6;
              }
              else {
                lVar17 = lVar17 * 2;
                if (lVar17 != 0) goto LAB_1804ae454;
                pfVar6 = (float *)0x0;
                pfVar2 = pfVar6;
              }
              for (; pfVar9 != pfVar8; pfVar9 = pfVar9 + 2) {
                *(uint64_t *)pfVar6 = *(uint64_t *)pfVar9;
                pfVar6 = pfVar6 + 2;
              }
              *pfVar6 = fVar22;
              pfVar6[1] = fVar21;
              pfVar6 = pfVar6 + 2;
              if (pfVar13 != (float *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(pfVar13);
              }
              pfStack_110 = pfVar2;
              pfStack_108 = pfVar6;
              pfVar9 = pfVar2 + lVar17 * 2;
              pfStack_100 = pfVar9;
            }
          }
        }
        lVar15 = lVar15 + 0x10;
        lVar5 = lVar5 + -1;
        pfVar13 = pfVar2;
        pfVar8 = pfVar6;
        lVar17 = lVar4;
      } while (lVar5 != 0);
    }
    if (pfVar2 != pfVar6) {
      iVar16 = 0;
      lVar15 = (int64_t)pfVar6 - (int64_t)pfVar2 >> 3;
      for (lVar5 = lVar15; lVar5 != 0; lVar5 = lVar5 >> 1) {
        iVar16 = iVar16 + 1;
      }
      FUN_1804c13d0(pfVar2,pfVar6,(int64_t)(iVar16 + -1) * 2,0,lVar11,lVar17,uVar23);
      pfVar9 = pfVar2;
      if (lVar15 < 0x1d) {
        while (pfVar9 = pfVar9 + 2, pfVar9 != pfVar6) {
          fVar20 = *pfVar9;
          fVar21 = pfVar9[1];
          pfVar13 = pfVar9;
          pfVar8 = pfVar9;
          while (pfVar8 != pfVar2) {
            fVar22 = pfVar8[-2];
            if (fVar20 <= fVar22) break;
            *pfVar13 = fVar22;
            pfVar13[1] = pfVar8[-1];
            pfVar13 = pfVar13 + -2;
            pfVar8 = pfVar8 + -2;
          }
          *pfVar13 = fVar20;
          pfVar13[1] = fVar21;
        }
      }
      else {
        pfVar9 = pfVar2 + 0x38;
        pfVar13 = pfVar2;
        if (pfVar2 != pfVar9) {
          while (pfVar8 = pfVar13 + 2, pfVar8 != pfVar9) {
            fVar20 = *pfVar8;
            fVar21 = pfVar13[3];
            pfVar13 = pfVar8;
            pfVar7 = pfVar8;
            while (pfVar13 != pfVar2) {
              fVar22 = pfVar13[-2];
              if (fVar20 <= fVar22) break;
              *pfVar7 = fVar22;
              pfVar7[1] = pfVar13[-1];
              pfVar7 = pfVar7 + -2;
              pfVar13 = pfVar13 + -2;
            }
            *pfVar7 = fVar20;
            pfVar7[1] = fVar21;
            pfVar13 = pfVar8;
          }
        }
        if (pfVar9 != pfVar6) {
          pfVar13 = pfVar2 + 0x36;
          do {
            fVar20 = pfVar13[2];
            fVar21 = pfVar13[3];
            fVar22 = *pfVar13;
            pfVar8 = pfVar9;
            if (fVar22 < fVar20) {
              do {
                *pfVar8 = fVar22;
                pfVar8[1] = *(float *)(((int64_t)pfVar13 - (int64_t)pfVar9) + 4 + (int64_t)pfVar8
                                      );
                pfVar8 = pfVar8 + -2;
                fVar22 = *(float *)(((int64_t)pfVar13 - (int64_t)pfVar9) + (int64_t)pfVar8);
              } while (fVar22 < fVar20);
            }
            *pfVar8 = fVar20;
            pfVar8[1] = fVar21;
            pfVar9 = pfVar9 + 2;
            pfVar13 = pfVar13 + 2;
          } while (pfVar9 != pfVar6);
        }
      }
    }
    iVar14 = (int)((int64_t)pfVar6 - (int64_t)pfVar2 >> 3);
    iVar16 = 5;
    if (iVar14 < 5) {
      iVar16 = iVar14;
    }
    if (iVar16 != 0) {
      fVar20 = 0.0;
      iVar14 = 0;
      iVar10 = 0;
      pfVar9 = pfVar2;
      if (3 < iVar16) {
        do {
          if (pfVar9 == pfVar6) goto LAB_1804ae6f4;
          fVar20 = fVar20 + pfVar9[1];
          if (pfVar9 + 2 == pfVar6) {
            iVar14 = iVar14 + 1;
            goto LAB_1804ae6f4;
          }
          fVar20 = fVar20 + pfVar9[3];
          if (pfVar9 + 4 == pfVar6) {
            iVar14 = iVar14 + 2;
            goto LAB_1804ae6f4;
          }
          fVar20 = fVar20 + pfVar9[5];
          if (pfVar9 + 6 == pfVar6) {
            iVar14 = iVar14 + 3;
            goto LAB_1804ae6f4;
          }
          fVar20 = fVar20 + pfVar9[7];
          pfVar9 = pfVar9 + 8;
          iVar14 = iVar14 + 4;
          iVar10 = iVar10 + 4;
        } while (iVar10 < iVar16 + -3);
      }
      for (; (iVar10 < iVar16 && (pfVar9 != pfVar6)); pfVar9 = pfVar9 + 2) {
        fVar20 = fVar20 + pfVar9[1];
        iVar14 = iVar14 + 1;
        iVar10 = iVar10 + 1;
      }
LAB_1804ae6f4:
      *(float *)(param_1 + 0x7c + lVar18) = fVar20 / (float)iVar14;
    }
    if (pfVar2 != (float *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(pfVar2);
    }
    lVar18 = lVar18 + 4;
    lStackX_20 = lStackX_20 + -1;
    lVar5 = lVar4;
    if (lStackX_20 == 0) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





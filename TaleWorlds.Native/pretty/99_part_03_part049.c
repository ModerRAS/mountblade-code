#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part049.c - 6 个函数

// 函数: void FUN_1801fe2f0(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1801fe2f0(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  byte bVar1;
  int32_t uVar2;
  uint64_t *****pppppuVar3;
  uint64_t *****pppppuVar4;
  bool bVar5;
  uint64_t *puVar6;
  char *pcVar7;
  byte *pbVar8;
  uint64_t *****pppppuVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t ****ppppuVar12;
  uint64_t *puVar13;
  int32_t *puVar14;
  uint uVar15;
  int iVar16;
  int64_t lVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  char *pcVar21;
  char *pcVar22;
  int8_t auStackX_20 [8];
  uint64_t ****ppppuStack_70;
  uint64_t ****ppppuStack_68;
  uint64_t ***pppuStack_60;
  uint64_t uStack_58;
  uint64_t ***pppuStack_50;
  int32_t uStack_48;
  
  puVar6 = system_system_data_config;
  pcVar22 = "layer_flora_sets";
  do {
    pcVar21 = pcVar22;
    pcVar22 = pcVar21 + 1;
  } while (*pcVar22 != '\0');
  for (puVar19 = *(uint64_t **)(param_2 + 0x30); puVar19 != (uint64_t *)0x0;
      puVar19 = (uint64_t *)puVar19[0xb]) {
    pcVar22 = (char *)*puVar19;
    if (pcVar22 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar22 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar19[2];
    }
    if (pcVar7 == pcVar21 + -0x180a0f6bf) {
      pcVar7 = pcVar7 + (int64_t)pcVar22;
      if (pcVar7 <= pcVar22) goto LAB_1801fe395;
      lVar17 = (int64_t)&unknown_var_9872_ptr - (int64_t)pcVar22;
      while (*pcVar22 == pcVar22[lVar17]) {
        pcVar22 = pcVar22 + 1;
        if (pcVar7 <= pcVar22) goto LAB_1801fe395;
      }
    }
  }
  puVar19 = (uint64_t *)0x0;
LAB_1801fe395:
  pcVar22 = "layer_flora_set";
  do {
    pcVar21 = pcVar22;
    pcVar22 = pcVar21 + 1;
  } while (*pcVar22 != '\0');
  for (puVar19 = (uint64_t *)puVar19[6]; puVar19 != (uint64_t *)0x0;
      puVar19 = (uint64_t *)puVar19[0xb]) {
    pcVar22 = (char *)*puVar19;
    if (pcVar22 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar22 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar19[2];
    }
    if (pcVar7 == pcVar21 + -0x180a0f68f) {
      pcVar7 = pcVar7 + (int64_t)pcVar22;
      if (pcVar7 <= pcVar22) goto LAB_1801fe3fe;
      lVar17 = (int64_t)&unknown_var_9824_ptr - (int64_t)pcVar22;
      while (*pcVar22 == pcVar22[lVar17]) {
        pcVar22 = pcVar22 + 1;
        if (pcVar7 <= pcVar22) goto LAB_1801fe3fe;
      }
    }
  }
  puVar19 = (uint64_t *)0x0;
LAB_1801fe3fe:
  if ((uint64_t *)system_system_data_config[2] != (uint64_t *)0x0) {
    puVar20 = (uint64_t *)system_system_data_config[2];
    puVar10 = system_system_data_config;
    do {
      if (*(int *)(param_3 + 0x10) == 0) {
        bVar5 = false;
        puVar18 = (uint64_t *)puVar20[1];
      }
      else {
        if (*(int *)(puVar20 + 6) == 0) {
          bVar5 = true;
        }
        else {
          pbVar8 = *(byte **)(param_3 + 8);
          lVar17 = puVar20[5] - (int64_t)pbVar8;
          do {
            uVar15 = (uint)pbVar8[lVar17];
            iVar16 = *pbVar8 - uVar15;
            if (*pbVar8 != uVar15) break;
            pbVar8 = pbVar8 + 1;
          } while (uVar15 != 0);
          bVar5 = 0 < iVar16;
          if (iVar16 < 1) {
            puVar18 = (uint64_t *)puVar20[1];
            goto LAB_1801fe459;
          }
        }
        puVar18 = (uint64_t *)*puVar20;
      }
LAB_1801fe459:
      puVar11 = puVar20;
      if (bVar5) {
        puVar11 = puVar10;
      }
      puVar20 = puVar18;
      puVar10 = puVar11;
    } while (puVar18 != (uint64_t *)0x0);
    if (puVar11 != system_system_data_config) {
      if (*(int *)(puVar11 + 6) == 0) goto joined_r0x0001801fe616;
      if (*(int *)(param_3 + 0x10) != 0) {
        pbVar8 = (byte *)puVar11[5];
        lVar17 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar8;
        do {
          bVar1 = *pbVar8;
          uVar15 = (uint)pbVar8[lVar17];
          if (bVar1 != uVar15) break;
          pbVar8 = pbVar8 + 1;
        } while (uVar15 != 0);
        if ((int)(bVar1 - uVar15) < 1) goto joined_r0x0001801fe616;
      }
    }
  }
  uStack_48 = 3;
  ppppuStack_70 = &ppppuStack_70;
  ppppuStack_68 = &ppppuStack_70;
  pppuStack_60 = (uint64_t ****)0x0;
  uStack_58 = 0;
  pppuStack_50 = (uint64_t ****)0x0;
  pppppuVar9 = (uint64_t *****)FUN_1801fed10(system_system_data_config,param_3);
  if (pppppuVar9 != &ppppuStack_70) {
    FUN_180058710(pppppuVar9,pppppuVar9[2]);
    *pppppuVar9 = pppppuVar9;
    pppppuVar9[1] = pppppuVar9;
    pppppuVar9[2] = (uint64_t ****)0x0;
    *(int8_t *)(pppppuVar9 + 3) = 0;
    pppppuVar9[4] = (uint64_t ****)0x0;
    pppppuVar9[4] = (uint64_t ****)pppuStack_50;
    pppuStack_50 = (uint64_t ****)0x0;
    uVar2 = *(int32_t *)(pppppuVar9 + 5);
    *(int32_t *)(pppppuVar9 + 5) = uStack_48;
    uStack_48 = uVar2;
    if (pppppuVar9[2] == (uint64_t ****)0x0) {
      if ((uint64_t ****)pppuStack_60 != (uint64_t ****)0x0) {
        *pppppuVar9 = ppppuStack_70;
        pppppuVar9[1] = ppppuStack_68;
        pppppuVar9[2] = (uint64_t ****)pppuStack_60;
        pppuStack_60[2] = pppppuVar9;
        ppppuStack_70 = &ppppuStack_70;
        ppppuStack_68 = &ppppuStack_70;
        pppuStack_60 = (uint64_t ****)0x0;
      }
    }
    else if ((uint64_t ****)pppuStack_60 == (uint64_t ****)0x0) {
      ppppuStack_70 = *pppppuVar9;
      ppppuStack_68 = pppppuVar9[1];
      pppuStack_60 = pppppuVar9[2];
      ((uint64_t ****)pppuStack_60)[2] = &ppppuStack_70;
      *pppppuVar9 = pppppuVar9;
      pppppuVar9[1] = pppppuVar9;
      pppppuVar9[2] = (uint64_t ****)0x0;
    }
    else {
      pppppuVar3 = (uint64_t *****)*pppppuVar9;
      *pppppuVar9 = ppppuStack_70;
      pppppuVar4 = (uint64_t *****)pppppuVar9[1];
      pppppuVar9[1] = ppppuStack_68;
      ppppuVar12 = pppppuVar9[2];
      pppppuVar9[2] = (uint64_t ****)pppuStack_60;
      pppppuVar9[2][2] = pppppuVar9;
      ppppuVar12[2] = &ppppuStack_70;
      ppppuStack_70 = pppppuVar3;
      ppppuStack_68 = pppppuVar4;
      pppuStack_60 = ppppuVar12;
    }
  }
  FUN_180058710(&ppppuStack_70,pppuStack_60);
joined_r0x0001801fe616:
  do {
    if (puVar19 == (uint64_t *)0x0) {
      return;
    }
    pcVar22 = "layer_flora";
    do {
      pcVar21 = pcVar22;
      pcVar22 = pcVar21 + 1;
    } while (*pcVar22 != '\0');
    for (puVar20 = (uint64_t *)puVar19[6]; puVar20 != (uint64_t *)0x0;
        puVar20 = (uint64_t *)puVar20[0xb]) {
      pcVar22 = (char *)*puVar20;
      if (pcVar22 == (char *)0x0) {
        pcVar7 = (char *)0x0;
        pcVar22 = (char *)0x180d48d24;
      }
      else {
        pcVar7 = (char *)puVar20[2];
      }
      if (pcVar7 == pcVar21 + -0x180a0f69f) {
        pcVar7 = pcVar7 + (int64_t)pcVar22;
        if (pcVar7 <= pcVar22) goto LAB_1801fe6bd;
        lVar17 = (int64_t)&unknown_var_9840_ptr - (int64_t)pcVar22;
        while (*pcVar22 == pcVar22[lVar17]) {
          pcVar22 = pcVar22 + 1;
          if (pcVar7 <= pcVar22) goto LAB_1801fe6bd;
        }
      }
    }
    puVar20 = (uint64_t *)0x0;
LAB_1801fe6bd:
    ppppuStack_70 = (uint64_t ****)&system_data_buffer_ptr;
    uStack_58 = 0;
    ppppuStack_68 = (uint64_t ****)0x0;
    pppuStack_60 = (uint64_t ***)((uint64_t)pppuStack_60 & 0xffffffff00000000);
    pcVar22 = "name";
    do {
      pcVar21 = pcVar22;
      pcVar22 = pcVar21 + 1;
    } while (*pcVar22 != '\0');
    for (puVar10 = (uint64_t *)puVar19[8]; puVar10 != (uint64_t *)0x0;
        puVar10 = (uint64_t *)puVar10[6]) {
      pcVar22 = (char *)*puVar10;
      if (pcVar22 == (char *)0x0) {
        pcVar7 = (char *)0x0;
        pcVar22 = (char *)0x180d48d24;
      }
      else {
        pcVar7 = (char *)puVar10[2];
      }
      if (pcVar7 == pcVar21 + -0x180a03a83) {
        pcVar7 = pcVar7 + (int64_t)pcVar22;
        if (pcVar7 <= pcVar22) {
LAB_1801fe740:
          lVar17 = 0x180d48d24;
          if (puVar10[1] != 0) {
            lVar17 = puVar10[1];
          }
          FUN_180627c50(&ppppuStack_70,lVar17);
          break;
        }
        lVar17 = (int64_t)&system_data_3a84 - (int64_t)pcVar22;
        while (*pcVar22 == pcVar22[lVar17]) {
          pcVar22 = pcVar22 + 1;
          if (pcVar7 <= pcVar22) goto LAB_1801fe740;
        }
      }
    }
    puVar10 = (uint64_t *)puVar6[1];
    while (puVar10 != puVar6) {
      if ((uint64_t *)puVar10[10] != (uint64_t *)0x0) {
        puVar18 = puVar10 + 8;
        puVar11 = (uint64_t *)puVar10[10];
        do {
          if ((int)pppuStack_60 == 0) {
            bVar5 = false;
            puVar13 = (uint64_t *)puVar11[1];
          }
          else {
            if (*(int *)(puVar11 + 6) == 0) {
              bVar5 = true;
            }
            else {
              pbVar8 = (byte *)ppppuStack_68;
              do {
                uVar15 = (uint)pbVar8[puVar11[5] - (int64_t)ppppuStack_68];
                iVar16 = *pbVar8 - uVar15;
                if (*pbVar8 != uVar15) break;
                pbVar8 = pbVar8 + 1;
              } while (uVar15 != 0);
              bVar5 = 0 < iVar16;
              if (iVar16 < 1) {
                puVar13 = (uint64_t *)puVar11[1];
                goto LAB_1801fe7eb;
              }
            }
            puVar13 = (uint64_t *)*puVar11;
          }
LAB_1801fe7eb:
          if (bVar5) {
            puVar11 = puVar18;
          }
          puVar18 = puVar11;
          puVar11 = puVar13;
        } while (puVar13 != (uint64_t *)0x0);
        if (puVar18 != puVar10 + 8) {
          if (*(int *)(puVar18 + 6) == 0) goto LAB_1801feb41;
          if ((int)pppuStack_60 != 0) {
            pbVar8 = (byte *)puVar18[5];
            lVar17 = (int64_t)ppppuStack_68 - (int64_t)pbVar8;
            do {
              bVar1 = *pbVar8;
              uVar15 = (uint)pbVar8[lVar17];
              if (bVar1 != uVar15) break;
              pbVar8 = pbVar8 + 1;
            } while (uVar15 != 0);
            if ((int)(bVar1 - uVar15) < 1) goto LAB_1801feb41;
          }
        }
      }
      puVar10 = (uint64_t *)func_0x00018066bd70();
    }
    puVar11 = (uint64_t *)FUN_1801fed10(puVar6,param_3);
    puVar10 = (uint64_t *)puVar11[2];
    puVar18 = puVar11;
    while (puVar13 = puVar18, puVar18 = puVar10, puVar18 != (uint64_t *)0x0) {
      if ((int)pppuStack_60 == 0) {
        bVar5 = false;
        puVar10 = (uint64_t *)puVar18[1];
      }
      else {
        if (*(int *)(puVar18 + 6) == 0) {
          bVar5 = true;
        }
        else {
          ppppuVar12 = ppppuStack_68;
          do {
            uVar15 = (uint)*(byte *)((int64_t)ppppuVar12 + (puVar18[5] - (int64_t)ppppuStack_68));
            iVar16 = *(byte *)ppppuVar12 - uVar15;
            if (*(byte *)ppppuVar12 != uVar15) break;
            ppppuVar12 = (uint64_t ****)((int64_t)ppppuVar12 + 1);
          } while (uVar15 != 0);
          bVar5 = 0 < iVar16;
          if (iVar16 < 1) {
            puVar10 = (uint64_t *)puVar18[1];
            goto LAB_1801fe8b7;
          }
        }
        puVar10 = (uint64_t *)*puVar18;
      }
LAB_1801fe8b7:
      if (bVar5) {
        puVar18 = puVar13;
      }
    }
    if (puVar13 == puVar11) {
LAB_1801fe8f7:
      puVar13 = (uint64_t *)FUN_1801fefd0(puVar11,auStackX_20,0,puVar13,&ppppuStack_70);
      puVar13 = (uint64_t *)*puVar13;
    }
    else if (*(int *)(puVar13 + 6) != 0) {
      if ((int)pppuStack_60 != 0) {
        pbVar8 = (byte *)puVar13[5];
        lVar17 = (int64_t)ppppuStack_68 - (int64_t)pbVar8;
        do {
          bVar1 = *pbVar8;
          uVar15 = (uint)pbVar8[lVar17];
          if (bVar1 != uVar15) break;
          pbVar8 = pbVar8 + 1;
        } while (uVar15 != 0);
        if ((int)(bVar1 - uVar15) < 1) goto LAB_1801fe912;
      }
      goto LAB_1801fe8f7;
    }
LAB_1801fe912:
    if (puVar20 != (uint64_t *)0x0) {
LAB_1801fe922:
      pcVar22 = "mesh";
      do {
        pcVar21 = pcVar22;
        pcVar22 = pcVar21 + 1;
      } while (*pcVar22 != '\0');
      pcVar21 = pcVar21 + -0x180a0f3e7;
      for (puVar10 = (uint64_t *)puVar20[6]; puVar10 != (uint64_t *)0x0;
          puVar10 = (uint64_t *)puVar10[0xb]) {
        pcVar22 = (char *)*puVar10;
        if (pcVar22 == (char *)0x0) {
          pcVar7 = (char *)0x0;
          pcVar22 = (char *)0x180d48d24;
        }
        else {
          pcVar7 = (char *)puVar10[2];
        }
        if (pcVar7 == pcVar21) {
          pcVar7 = pcVar7 + (int64_t)pcVar22;
          if (pcVar7 <= pcVar22) {
LAB_1801fe986:
            puVar14 = (int32_t *)
                      FUN_18062b1e0(system_memory_pool_ptr,0x48,4,
                                    CONCAT71((int7)((uint64_t)pcVar21 >> 8),3));
            *puVar14 = 0xffffffff;
            puVar14[1] = 0xbf800000;
            puVar14[2] = 0;
            puVar14[3] = 0x43480000;
            puVar14[4] = 0x3e99999a;
            *(uint64_t *)(puVar14 + 6) = 0x3f2666663f266666;
            *(uint64_t *)(puVar14 + 8) = 0x7f7fffff3f266666;
            puVar14[10] = 0x3fc66666;
            puVar14[0xb] = 0x3fc66666;
            puVar14[0xc] = 0x3fe00000;
            puVar14[0xd] = 0x7f7fffff;
            puVar14[5] = 0x3f000000;
            puVar14[0xe] = 0x3f800000;
            puVar14[0xf] = 0x3f800000;
            puVar14[0x10] = 0x3f800000;
            puVar14[0x11] = 0x7f7fffff;
            FUN_18037dc60(puVar14,puVar10);
            puVar10 = (uint64_t *)puVar13[9];
            if (puVar10 < (uint64_t *)puVar13[10]) {
              puVar13[9] = puVar10 + 1;
              *puVar10 = puVar14;
            }
            else {
              puVar18 = (uint64_t *)puVar13[8];
              lVar17 = (int64_t)puVar10 - (int64_t)puVar18 >> 3;
              if (lVar17 == 0) {
                lVar17 = 1;
LAB_1801fea46:
                puVar11 = (uint64_t *)
                          FUN_18062b420(system_memory_pool_ptr,lVar17 * 8,*(int8_t *)(puVar13 + 0xb));
                puVar10 = (uint64_t *)puVar13[9];
                puVar18 = (uint64_t *)puVar13[8];
              }
              else {
                lVar17 = lVar17 * 2;
                if (lVar17 != 0) goto LAB_1801fea46;
                puVar11 = (uint64_t *)0x0;
              }
              if (puVar18 != puVar10) {
                    // WARNING: Subroutine does not return
                memmove(puVar11,puVar18,(int64_t)puVar10 - (int64_t)puVar18);
              }
              *puVar11 = puVar14;
              if (puVar13[8] != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              puVar13[8] = puVar11;
              puVar13[9] = puVar11 + 1;
              puVar13[10] = puVar11 + lVar17;
            }
            break;
          }
          lVar17 = (int64_t)&unknown_var_9144_ptr - (int64_t)pcVar22;
          while (*pcVar22 == pcVar22[lVar17]) {
            pcVar22 = pcVar22 + 1;
            if (pcVar7 <= pcVar22) goto LAB_1801fe986;
          }
        }
      }
      pcVar22 = "layer_flora";
      do {
        pcVar21 = pcVar22;
        pcVar22 = pcVar21 + 1;
      } while (*pcVar22 != '\0');
      puVar20 = (uint64_t *)puVar20[0xb];
      if (puVar20 != (uint64_t *)0x0) {
        do {
          pcVar22 = (char *)*puVar20;
          if (pcVar22 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar22 = (char *)0x180d48d24;
          }
          else {
            pcVar7 = (char *)puVar20[2];
          }
          if (pcVar7 == pcVar21 + -0x180a0f69f) {
            pcVar7 = pcVar22 + (int64_t)pcVar7;
            if (pcVar7 <= pcVar22) goto LAB_1801fe922;
            lVar17 = (int64_t)&unknown_var_9840_ptr - (int64_t)pcVar22;
            while (*pcVar22 == pcVar22[lVar17]) {
              pcVar22 = pcVar22 + 1;
              if (pcVar7 <= pcVar22) goto LAB_1801fe922;
            }
          }
          puVar20 = (uint64_t *)puVar20[0xb];
          if (puVar20 == (uint64_t *)0x0) break;
        } while( true );
      }
    }
LAB_1801feb41:
    pcVar22 = "layer_flora_set";
    do {
      pcVar21 = pcVar22;
      pcVar22 = pcVar21 + 1;
    } while (*pcVar22 != '\0');
    for (puVar19 = (uint64_t *)puVar19[0xb]; puVar19 != (uint64_t *)0x0;
        puVar19 = (uint64_t *)puVar19[0xb]) {
      pcVar22 = (char *)*puVar19;
      if (pcVar22 == (char *)0x0) {
        pcVar7 = (char *)0x0;
        pcVar22 = (char *)0x180d48d24;
      }
      else {
        pcVar7 = (char *)puVar19[2];
      }
      if (pcVar7 == pcVar21 + -0x180a0f68f) {
        pcVar7 = pcVar22 + (int64_t)pcVar7;
        if (pcVar7 <= pcVar22) goto LAB_1801febb6;
        lVar17 = (int64_t)&unknown_var_9824_ptr - (int64_t)pcVar22;
        while (*pcVar22 == pcVar22[lVar17]) {
          pcVar22 = pcVar22 + 1;
          if (pcVar7 <= pcVar22) goto LAB_1801febb6;
        }
      }
    }
    puVar19 = (uint64_t *)0x0;
LAB_1801febb6:
    ppppuStack_70 = (uint64_t ****)&system_data_buffer_ptr;
    if (ppppuStack_68 != (uint64_t ****)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  } while( true );
}






// 函数: void FUN_1801fec30(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801fec30(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180627be0();
  FUN_180627be0(param_1 + 0x20,param_2,param_3,param_4,uVar1);
  *(int8_t *)(param_1 + 0x40) = 0;
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &system_state_ptr;
  return;
}



uint64_t * FUN_1801feca0(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[4] = &system_state_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[4] = &system_data_buffer_ptr;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *(int8_t *)(param_1 + 8) = 0;
  return param_1;
}



int64_t * FUN_1801fed10(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint uVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lStackX_8;
  int8_t auStack_18 [16];
  
  plVar5 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar4 = (int64_t *)param_1[2];
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        plVar8 = (int64_t *)plVar4[1];
        bVar2 = false;
      }
      else {
        if ((int)plVar4[6] == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          param_4 = plVar4[5] - (int64_t)pbVar3;
          do {
            uVar6 = (uint)pbVar3[param_4];
            iVar7 = *pbVar3 - uVar6;
            if (*pbVar3 != uVar6) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < iVar7;
          if (iVar7 < 1) {
            plVar8 = (int64_t *)plVar4[1];
            goto LAB_1801fed87;
          }
        }
        plVar8 = (int64_t *)*plVar4;
      }
LAB_1801fed87:
      if (bVar2) {
        plVar4 = plVar5;
      }
      plVar5 = plVar4;
      plVar4 = plVar8;
    } while (plVar8 != (int64_t *)0x0);
  }
  if (plVar5 != param_1) {
    if ((int)plVar5[6] == 0) {
LAB_1801fedc8:
      return plVar5 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)plVar5[5];
      lVar9 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar6 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar6) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1801fedc8;
    }
  }
  plVar4 = (int64_t *)*param_1;
  if ((plVar5 == plVar4) || (plVar5 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_2 + 0x10) != 0)) {
      plVar5 = plVar4;
      if ((int)plVar4[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        param_4 = plVar4[5] - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[param_4];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1801feec8;
      }
LAB_1801feea7:
      param_4 = param_4 & 0xffffffffffffff00;
      plVar4 = plVar5;
LAB_1801feeaa:
      if (plVar4 != (int64_t *)0x0) {
        FUN_1801ff2f0(param_1,&lStackX_8,plVar4,param_4,param_2);
        goto LAB_1801feedb;
      }
    }
  }
  else {
    plVar4 = (int64_t *)func_0x00018066bd70(plVar5);
    if (*(int *)(param_2 + 0x10) != 0) {
      if ((int)plVar5[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        lVar9 = plVar5[5] - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[lVar9];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1801feec8;
      }
      if ((int)plVar4[6] != 0) {
        pbVar3 = (byte *)plVar4[5];
        param_4 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[param_4];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          if (*plVar5 == 0) goto LAB_1801feea7;
          param_4 = CONCAT71((int7)(param_4 >> 8),1);
          goto LAB_1801feeaa;
        }
      }
    }
  }
LAB_1801feec8:
  plVar5 = (int64_t *)FUN_1801ff120(param_1,auStack_18,plVar4,param_2);
  lStackX_8 = *plVar5;
LAB_1801feedb:
  return (int64_t *)(lStackX_8 + 0x40);
}






// 函数: void FUN_1801feef0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801feef0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801fef10(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1801fef10(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801fef10(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_1801fef10(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_180058710(param_2 + 8,param_2[10]);
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}



uint64_t *
FUN_1801fefd0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int64_t param_5)

{
  byte bVar1;
  int64_t *plVar2;
  byte *pbVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int8_t auStack_18 [16];
  
  plVar2 = (int64_t *)*param_1;
  if ((param_4 == plVar2) || (param_4 == param_1)) {
    if ((param_1[4] == 0) || (*(int *)(param_5 + 0x10) == 0)) goto LAB_1801ff0e4;
    param_4 = plVar2;
    if (*(int *)(plVar2 + 6) != 0) {
      pbVar3 = *(byte **)(param_5 + 8);
      lVar6 = plVar2[5] - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar6];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_1801ff0e4;
    }
LAB_1801ff0c7:
    uVar7 = 0;
  }
  else {
    plVar2 = (int64_t *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_1801ff0e4;
    if ((int)param_4[6] != 0) {
      pbVar3 = *(byte **)(param_5 + 8);
      lVar6 = param_4[5] - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar6];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_1801ff0e4;
    }
    if ((int)plVar2[6] == 0) goto LAB_1801ff0e4;
    pbVar3 = (byte *)plVar2[5];
    lVar6 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar3;
    do {
      bVar1 = *pbVar3;
      uVar5 = (uint)pbVar3[lVar6];
      if (bVar1 != uVar5) break;
      pbVar3 = pbVar3 + 1;
    } while (uVar5 != 0);
    if ((int)(bVar1 - uVar5) < 1) goto LAB_1801ff0e4;
    if (*param_4 == 0) goto LAB_1801ff0c7;
    uVar7 = 1;
    param_4 = plVar2;
  }
  if (param_4 != (int64_t *)0x0) {
    FUN_18009cde0(param_1,param_2,param_4,uVar7,param_5);
    return param_2;
  }
LAB_1801ff0e4:
  puVar4 = (uint64_t *)FUN_18009cc10(param_1,auStack_18);
  *param_2 = *puVar4;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801ff120(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t param_4)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  byte *pbVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  bVar2 = true;
  puVar4 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  while (puVar4 != (uint64_t *)0x0) {
    puVar3 = puVar4;
    if (*(int *)(puVar4 + 6) == 0) {
      bVar2 = false;
LAB_1801ff170:
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      if (*(int *)(param_4 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar5 = (byte *)puVar4[5];
        lVar8 = *(int64_t *)(param_4 + 8) - (int64_t)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar8];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_1801ff170;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  puVar4 = puVar3;
  if (bVar2) {
    if (puVar3 != (uint64_t *)param_1[1]) {
      puVar4 = (uint64_t *)func_0x00018066b9a0(puVar3);
      goto LAB_1801ff190;
    }
  }
  else {
LAB_1801ff190:
    if (*(int *)(param_4 + 0x10) == 0) {
LAB_1801ff2c7:
      *param_2 = puVar4;
      *(int8_t *)(param_2 + 1) = 0;
      return param_2;
    }
    if (*(int *)(puVar4 + 6) != 0) {
      pbVar5 = *(byte **)(param_4 + 8);
      lVar8 = puVar4[5] - (int64_t)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar8];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1801ff2c7;
    }
  }
  if (puVar3 != param_1) {
    if (*(int *)(puVar3 + 6) == 0) {
LAB_1801ff207:
      uVar9 = 1;
      goto LAB_1801ff250;
    }
    if (*(int *)(param_4 + 0x10) != 0) {
      pbVar5 = (byte *)puVar3[5];
      lVar8 = *(int64_t *)(param_4 + 8) - (int64_t)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar8];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1801ff207;
    }
  }
  uVar9 = 0;
LAB_1801ff250:
  lVar8 = FUN_18062b420(system_memory_pool_ptr,0x70,*(int8_t *)(param_1 + 5));
  FUN_180627ae0(lVar8 + 0x20,param_4);
  lVar7 = lVar8 + 0x40;
  *(uint64_t *)(lVar8 + 0x58) = 0;
  *(int32_t *)(lVar8 + 0x68) = 3;
  *(int64_t *)lVar7 = lVar7;
  *(int64_t *)(lVar8 + 0x48) = lVar7;
  *(uint64_t *)(lVar8 + 0x50) = 0;
  *(int8_t *)(lVar8 + 0x58) = 0;
  *(uint64_t *)(lVar8 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar8,puVar3,param_1,uVar9,uVar10,lVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ff2f0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1801ff2f0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_1801ff35a:
      uVar6 = 1;
      goto LAB_1801ff365;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar5 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_1801ff35a;
    }
  }
  uVar6 = 0;
LAB_1801ff365:
  lVar5 = FUN_18062b420(system_memory_pool_ptr,0x70,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar5 + 0x20,param_5);
  lVar4 = lVar5 + 0x40;
  *(uint64_t *)(lVar5 + 0x58) = 0;
  *(int32_t *)(lVar5 + 0x68) = 3;
  *(int64_t *)lVar4 = lVar4;
  *(int64_t *)(lVar5 + 0x48) = lVar4;
  *(uint64_t *)(lVar5 + 0x50) = 0;
  *(int8_t *)(lVar5 + 0x58) = 0;
  *(uint64_t *)(lVar5 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,param_3,param_1,uVar6);
}






// 函数: void FUN_1801ff3f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ff3f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058710(param_1 + 4,param_1[6],param_3,param_4,0xfffffffffffffffe);
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





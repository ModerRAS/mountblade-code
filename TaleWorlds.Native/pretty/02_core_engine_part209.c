#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part209.c - 2 个函数

// 函数: void FUN_18018c360(uint64_t param_1,uint64_t param_2,uint64_t *param_3,longlong param_4,
void FUN_18018c360(uint64_t param_1,uint64_t param_2,uint64_t *param_3,longlong param_4,
                  longlong *param_5)

{
  uint64_t *puVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char *pcVar7;
  byte *pbVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  longlong lVar15;
  uint64_t *puVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  ulonglong uVar20;
  uint64_t *puVar21;
  char *pcVar22;
  char *pcVar23;
  uint64_t uStackX_8;
  int8_t auStackX_20 [8];
  void *puStack_60;
  byte *pbStack_58;
  int iStack_50;
  uint64_t uStack_48;
  
  lVar6 = core_system_data_ui;
  pcVar22 = "base";
  do {
    pcVar23 = pcVar22;
    pcVar22 = pcVar23 + 1;
  } while (*pcVar22 != '\0');
  pcVar12 = (char *)0x0;
  for (pcVar22 = *(char **)(param_4 + 0x30); pcVar19 = pcVar12, pcVar22 != (char *)0x0;
      pcVar22 = *(char **)(pcVar22 + 0x58)) {
    pcVar13 = *(char **)pcVar22;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = (char *)0x180d48d24;
      pcVar7 = pcVar12;
    }
    else {
      pcVar7 = *(char **)(pcVar22 + 0x10);
    }
    if (pcVar7 == pcVar23 + -0x180a04ee3) {
      pcVar7 = pcVar7 + (longlong)pcVar13;
      pcVar19 = pcVar22;
      if (pcVar7 <= pcVar13) break;
      lVar14 = (longlong)&system_data_4ee4 - (longlong)pcVar13;
      while (*pcVar13 == pcVar13[lVar14]) {
        pcVar13 = pcVar13 + 1;
        if (pcVar7 <= pcVar13) goto LAB_18018c406;
      }
    }
  }
LAB_18018c406:
  *param_3 = pcVar19;
  pcVar22 = "face_animation_records";
  do {
    pcVar23 = pcVar22;
    pcVar22 = pcVar23 + 1;
  } while (*pcVar22 != '\0');
  for (pcVar22 = *(char **)(pcVar19 + 0x30); pcVar19 = pcVar12, pcVar22 != (char *)0x0;
      pcVar22 = *(char **)(pcVar22 + 0x58)) {
    pcVar13 = *(char **)pcVar22;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = (char *)0x180d48d24;
      pcVar7 = pcVar12;
    }
    else {
      pcVar7 = *(char **)(pcVar22 + 0x10);
    }
    if (pcVar7 == pcVar23 + -0x180a0ae0f) {
      pcVar7 = pcVar7 + (longlong)pcVar13;
      pcVar19 = pcVar22;
      if (pcVar7 <= pcVar13) break;
      lVar14 = (longlong)&unknown_var_1264_ptr - (longlong)pcVar13;
      while (*pcVar13 == pcVar13[lVar14]) {
        pcVar13 = pcVar13 + 1;
        if (pcVar7 <= pcVar13) goto LAB_18018c46e;
      }
    }
  }
LAB_18018c46e:
  *param_5 = (longlong)pcVar19;
  pcVar22 = "face_animation_record";
  do {
    pcVar23 = pcVar22;
    pcVar22 = pcVar23 + 1;
  } while (*pcVar22 != '\0');
  for (pcVar22 = *(char **)(pcVar19 + 0x30); pcVar19 = pcVar12, pcVar22 != (char *)0x0;
      pcVar22 = *(char **)(pcVar22 + 0x58)) {
    pcVar13 = *(char **)pcVar22;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = (char *)0x180d48d24;
      pcVar7 = pcVar12;
    }
    else {
      pcVar7 = *(char **)(pcVar22 + 0x10);
    }
    if (pcVar7 == pcVar23 + -0x180a0ae2f) {
      pcVar7 = pcVar13 + (longlong)pcVar7;
      pcVar19 = pcVar22;
      if (pcVar7 <= pcVar13) break;
      lVar14 = (longlong)&unknown_var_1296_ptr - (longlong)pcVar13;
      while (*pcVar13 == pcVar13[lVar14]) {
        pcVar13 = pcVar13 + 1;
        if (pcVar7 <= pcVar13) goto LAB_18018c4de;
      }
    }
  }
LAB_18018c4de:
  *param_5 = (longlong)pcVar19;
  if (pcVar19 != (char *)0x0) {
    puVar1 = (uint64_t *)(lVar6 + 0x50);
    uStackX_8 = param_1;
    do {
      puStack_60 = &system_data_buffer_ptr;
      uStack_48 = 0;
      pbStack_58 = (byte *)0x0;
      iStack_50 = 0;
      pcVar22 = "id";
      do {
        pcVar23 = pcVar22;
        pcVar22 = pcVar23 + 1;
      } while (*pcVar22 != '\0');
      for (puVar10 = *(uint64_t **)(*param_5 + 0x40); puVar10 != (uint64_t *)0x0;
          puVar10 = (uint64_t *)puVar10[6]) {
        pcVar22 = (char *)*puVar10;
        if (pcVar22 == (char *)0x0) {
          pcVar22 = (char *)0x180d48d24;
          pcVar12 = (char *)0x0;
        }
        else {
          pcVar12 = (char *)puVar10[2];
        }
        if (pcVar12 == pcVar23 + -0x180a0ae27) {
          pcVar12 = pcVar12 + (longlong)pcVar22;
          if (pcVar12 <= pcVar22) {
LAB_18018c580:
            lVar14 = 0x180d48d24;
            if (puVar10[1] != 0) {
              lVar14 = puVar10[1];
            }
            FUN_180627c50(&puStack_60,lVar14);
            break;
          }
          lVar14 = (longlong)&unknown_var_1288_ptr - (longlong)pcVar22;
          while (*pcVar22 == pcVar22[lVar14]) {
            pcVar22 = pcVar22 + 1;
            if (pcVar12 <= pcVar22) goto LAB_18018c580;
          }
        }
      }
      puVar10 = *(uint64_t **)(lVar6 + 0x60);
      puVar16 = puVar1;
      puVar9 = puVar10;
      if (puVar10 == (uint64_t *)0x0) {
LAB_18018c727:
        puVar10 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x48,8,3);
        *puVar10 = &system_state_ptr;
        puVar10[1] = 0;
        *(int32_t *)(puVar10 + 2) = 0;
        *puVar10 = &system_data_buffer_ptr;
        puVar10[3] = 0;
        puVar10[1] = 0;
        *(int32_t *)(puVar10 + 2) = 0;
        puVar10[4] = &system_state_ptr;
        puVar10[5] = 0;
        *(int32_t *)(puVar10 + 6) = 0;
        puVar10[4] = &system_data_buffer_ptr;
        puVar10[7] = 0;
        puVar10[5] = 0;
        *(int32_t *)(puVar10 + 6) = 0;
        *(int8_t *)(puVar10 + 8) = 0;
        lVar14 = *(longlong *)(lVar6 + 0x38);
        lVar4 = *(longlong *)(lVar6 + 0x30);
        puVar9 = puVar1;
        puVar16 = *(uint64_t **)(lVar6 + 0x60);
        while (puVar11 = puVar9, puVar16 != (uint64_t *)0x0) {
          if (iStack_50 == 0) {
            bVar5 = false;
            puVar21 = (uint64_t *)puVar16[1];
          }
          else {
            if (*(int *)(puVar16 + 6) == 0) {
              bVar5 = true;
            }
            else {
              pbVar8 = pbStack_58;
              do {
                uVar17 = (uint)pbVar8[puVar16[5] - (longlong)pbStack_58];
                iVar18 = *pbVar8 - uVar17;
                if (*pbVar8 != uVar17) break;
                pbVar8 = pbVar8 + 1;
              } while (uVar17 != 0);
              bVar5 = 0 < iVar18;
              if (iVar18 < 1) {
                puVar21 = (uint64_t *)puVar16[1];
                goto LAB_18018c80b;
              }
            }
            puVar21 = (uint64_t *)*puVar16;
          }
LAB_18018c80b:
          puVar9 = puVar16;
          puVar16 = puVar21;
          if (bVar5) {
            puVar9 = puVar11;
          }
        }
        if (puVar11 == puVar1) {
LAB_18018c849:
          puVar11 = (uint64_t *)FUN_1800c2ab0(puVar1,auStackX_20);
          puVar11 = (uint64_t *)*puVar11;
        }
        else if (*(int *)(puVar11 + 6) != 0) {
          if (iStack_50 != 0) {
            pbVar8 = (byte *)puVar11[5];
            lVar15 = (longlong)pbStack_58 - (longlong)pbVar8;
            do {
              bVar3 = *pbVar8;
              uVar17 = (uint)pbVar8[lVar15];
              if (bVar3 != uVar17) break;
              pbVar8 = pbVar8 + 1;
            } while (uVar17 != 0);
            if ((int)(bVar3 - uVar17) < 1) goto LAB_18018c864;
          }
          goto LAB_18018c849;
        }
LAB_18018c864:
        *(int *)(puVar11 + 8) = (int)(lVar14 - lVar4 >> 3);
        puVar16 = *(uint64_t **)(lVar6 + 0x38);
        if (puVar16 < *(uint64_t **)(lVar6 + 0x40)) {
          *(uint64_t **)(lVar6 + 0x38) = puVar16 + 1;
          *puVar16 = puVar10;
        }
        else {
          puVar9 = *(uint64_t **)(lVar6 + 0x30);
          lVar14 = (longlong)puVar16 - (longlong)puVar9 >> 3;
          if (lVar14 == 0) {
            lVar14 = 1;
LAB_18018c8a6:
            puVar11 = (uint64_t *)
                      FUN_18062b420(system_memory_pool_ptr,lVar14 * 8,*(int8_t *)(lVar6 + 0x48));
            puVar16 = *(uint64_t **)(lVar6 + 0x38);
            puVar9 = *(uint64_t **)(lVar6 + 0x30);
          }
          else {
            lVar14 = lVar14 * 2;
            if (lVar14 != 0) goto LAB_18018c8a6;
            puVar11 = (uint64_t *)0x0;
          }
          if (puVar9 != puVar16) {
                    // WARNING: Subroutine does not return
            memmove(puVar11,puVar9,(longlong)puVar16 - (longlong)puVar9);
          }
          *puVar11 = puVar10;
          if (*(longlong *)(lVar6 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t **)(lVar6 + 0x30) = puVar11;
          *(uint64_t **)(lVar6 + 0x38) = puVar11 + 1;
          *(uint64_t **)(lVar6 + 0x40) = puVar11 + lVar14;
        }
      }
      else {
        do {
          if (iStack_50 == 0) {
            bVar5 = false;
            puVar11 = (uint64_t *)puVar9[1];
          }
          else {
            if (*(int *)(puVar9 + 6) == 0) {
              bVar5 = true;
            }
            else {
              pbVar8 = pbStack_58;
              do {
                uVar17 = (uint)pbVar8[puVar9[5] - (longlong)pbStack_58];
                iVar18 = *pbVar8 - uVar17;
                if (*pbVar8 != uVar17) break;
                pbVar8 = pbVar8 + 1;
              } while (uVar17 != 0);
              bVar5 = 0 < iVar18;
              if (iVar18 < 1) {
                puVar11 = (uint64_t *)puVar9[1];
                goto LAB_18018c60a;
              }
            }
            puVar11 = (uint64_t *)*puVar9;
          }
LAB_18018c60a:
          puVar21 = puVar9;
          if (bVar5) {
            puVar21 = puVar16;
          }
          puVar16 = puVar21;
          puVar9 = puVar11;
        } while (puVar11 != (uint64_t *)0x0);
        if (puVar21 == puVar1) goto LAB_18018c727;
        uVar20 = 0;
        puVar16 = puVar1;
        if (*(int *)(puVar21 + 6) != 0) {
          if (iStack_50 != 0) {
            pbVar8 = (byte *)puVar21[5];
            uVar20 = (longlong)pbStack_58 - (longlong)pbVar8;
            do {
              bVar3 = *pbVar8;
              uVar17 = (uint)pbVar8[uVar20];
              if (bVar3 != uVar17) break;
              pbVar8 = pbVar8 + 1;
            } while (uVar17 != 0);
            if ((int)(bVar3 - uVar17) < 1) goto joined_r0x00018018c661;
          }
          goto LAB_18018c727;
        }
joined_r0x00018018c661:
        while (puVar9 = puVar16, puVar10 != (uint64_t *)0x0) {
          if (iStack_50 == 0) {
            bVar5 = false;
            puVar11 = (uint64_t *)puVar10[1];
          }
          else {
            if (*(int *)(puVar10 + 6) == 0) {
              bVar5 = true;
            }
            else {
              pbVar8 = pbStack_58;
              do {
                pbVar2 = pbVar8 + (puVar10[5] - (longlong)pbStack_58);
                uVar17 = (uint)*pbVar8 - (uint)*pbVar2;
                uVar20 = (ulonglong)uVar17;
                if (uVar17 != 0) break;
                pbVar8 = pbVar8 + 1;
              } while (*pbVar2 != 0);
              bVar5 = 0 < (int)uVar17;
              if ((int)uVar17 < 1) {
                puVar11 = (uint64_t *)puVar10[1];
                goto LAB_18018c6bb;
              }
            }
            puVar11 = (uint64_t *)*puVar10;
          }
LAB_18018c6bb:
          puVar16 = puVar10;
          puVar10 = puVar11;
          if (bVar5) {
            puVar16 = puVar9;
          }
        }
        if (puVar9 == puVar1) {
LAB_18018c6f9:
          puVar9 = (uint64_t *)FUN_1800c2ab0(puVar1,&uStackX_8,uVar20,puVar9,&puStack_60);
          puVar9 = (uint64_t *)*puVar9;
        }
        else if (*(int *)(puVar9 + 6) != 0) {
          if (iStack_50 != 0) {
            pbVar8 = (byte *)puVar9[5];
            lVar14 = (longlong)pbStack_58 - (longlong)pbVar8;
            do {
              pbVar2 = pbVar8 + lVar14;
              uVar17 = (uint)*pbVar8 - (uint)*pbVar2;
              uVar20 = (ulonglong)uVar17;
              if (uVar17 != 0) break;
              pbVar8 = pbVar8 + 1;
            } while (*pbVar2 != 0);
            if ((int)uVar17 < 1) goto LAB_18018c714;
          }
          goto LAB_18018c6f9;
        }
LAB_18018c714:
        puVar10 = *(uint64_t **)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(puVar9 + 8) * 8)
        ;
      }
      (**(code **)(**(longlong **)(system_main_module_state + 0x2b0) + 0x58))
                (*(longlong **)(system_main_module_state + 0x2b0),puVar10,*param_5);
      pcVar22 = "face_animation_record";
      do {
        pcVar23 = pcVar22;
        pcVar22 = pcVar23 + 1;
      } while (*pcVar22 != '\0');
      for (puVar10 = *(uint64_t **)(*param_5 + 0x58); puVar10 != (uint64_t *)0x0;
          puVar10 = (uint64_t *)puVar10[0xb]) {
        pcVar12 = (char *)*puVar10;
        pcVar22 = (char *)0x0;
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x180d48d24;
        }
        else {
          pcVar22 = (char *)puVar10[2];
        }
        if (pcVar22 == pcVar23 + -0x180a0ae2f) {
          pcVar22 = pcVar22 + (longlong)pcVar12;
          if (pcVar22 <= pcVar12) goto LAB_18018c9b2;
          lVar14 = (longlong)&unknown_var_1296_ptr - (longlong)pcVar12;
          while (*pcVar12 == pcVar12[lVar14]) {
            pcVar12 = pcVar12 + 1;
            if (pcVar22 <= pcVar12) goto LAB_18018c9b2;
          }
        }
      }
      puVar10 = (uint64_t *)0x0;
LAB_18018c9b2:
      *param_5 = (longlong)puVar10;
      puStack_60 = &system_data_buffer_ptr;
      if (pbStack_58 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    } while (*param_5 != 0);
  }
  return;
}



longlong * FUN_18018ca20(longlong *param_1,longlong param_2,uint64_t param_3,ulonglong param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lStackX_8;
  int8_t auStack_18 [16];
  
  plVar5 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        plVar8 = (longlong *)plVar4[1];
        bVar2 = false;
      }
      else {
        if ((int)plVar4[6] == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          param_4 = plVar4[5] - (longlong)pbVar3;
          do {
            uVar6 = (uint)pbVar3[param_4];
            iVar7 = *pbVar3 - uVar6;
            if (*pbVar3 != uVar6) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < iVar7;
          if (iVar7 < 1) {
            plVar8 = (longlong *)plVar4[1];
            goto LAB_18018ca97;
          }
        }
        plVar8 = (longlong *)*plVar4;
      }
LAB_18018ca97:
      if (bVar2) {
        plVar4 = plVar5;
      }
      plVar5 = plVar4;
      plVar4 = plVar8;
    } while (plVar8 != (longlong *)0x0);
  }
  if (plVar5 != param_1) {
    if ((int)plVar5[6] == 0) {
LAB_18018cad8:
      return plVar5 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)plVar5[5];
      lVar9 = *(longlong *)(param_2 + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar6 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar6) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18018cad8;
    }
  }
  plVar4 = (longlong *)*param_1;
  if ((plVar5 == plVar4) || (plVar5 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_2 + 0x10) != 0)) {
      plVar5 = plVar4;
      if ((int)plVar4[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        param_4 = plVar4[5] - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[param_4];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18018cbd8;
      }
LAB_18018cbb7:
      param_4 = param_4 & 0xffffffffffffff00;
      plVar4 = plVar5;
LAB_18018cbba:
      if (plVar4 != (longlong *)0x0) {
        FUN_18018cde0(param_1,&lStackX_8,plVar4,param_4,param_2);
        goto LAB_18018cbeb;
      }
    }
  }
  else {
    plVar4 = (longlong *)func_0x00018066bd70(plVar5);
    if (*(int *)(param_2 + 0x10) != 0) {
      if ((int)plVar5[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        lVar9 = plVar5[5] - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[lVar9];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18018cbd8;
      }
      if ((int)plVar4[6] != 0) {
        pbVar3 = (byte *)plVar4[5];
        param_4 = *(longlong *)(param_2 + 8) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[param_4];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          if (*plVar5 == 0) goto LAB_18018cbb7;
          param_4 = CONCAT71((int7)(param_4 >> 8),1);
          goto LAB_18018cbba;
        }
      }
    }
  }
LAB_18018cbd8:
  plVar5 = (longlong *)FUN_18018cc00(param_1,auStack_18,plVar4,param_2);
  lStackX_8 = *plVar5;
LAB_18018cbeb:
  return (longlong *)(lStackX_8 + 0x40);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18018cc00(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,longlong param_4)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  bVar2 = true;
  puVar4 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  while (puVar4 != (uint64_t *)0x0) {
    puVar3 = puVar4;
    if (*(int *)(puVar4 + 6) == 0) {
      bVar2 = false;
LAB_18018cc50:
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      if (*(int *)(param_4 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar5 = (byte *)puVar4[5];
        lVar7 = *(longlong *)(param_4 + 8) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_18018cc50;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  puVar4 = puVar3;
  if (bVar2) {
    if (puVar3 != (uint64_t *)param_1[1]) {
      puVar4 = (uint64_t *)func_0x00018066b9a0(puVar3);
      goto LAB_18018cc70;
    }
  }
  else {
LAB_18018cc70:
    if (*(int *)(param_4 + 0x10) == 0) {
LAB_18018cdaa:
      *param_2 = puVar4;
      *(int8_t *)(param_2 + 1) = 0;
      return param_2;
    }
    if (*(int *)(puVar4 + 6) != 0) {
      pbVar5 = *(byte **)(param_4 + 8);
      lVar7 = puVar4[5] - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar7];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18018cdaa;
    }
  }
  uVar8 = 0;
  if (puVar3 == param_1) goto LAB_18018cd30;
  if (*(int *)(puVar3 + 6) != 0) {
    if (*(int *)(param_4 + 0x10) == 0) goto LAB_18018cd30;
    pbVar5 = (byte *)puVar3[5];
    lVar7 = *(longlong *)(param_4 + 8) - (longlong)pbVar5;
    do {
      bVar1 = *pbVar5;
      uVar6 = (uint)pbVar5[lVar7];
      if (bVar1 != uVar6) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    if (0 < (int)(bVar1 - uVar6)) goto LAB_18018cd30;
  }
  uVar8 = 1;
LAB_18018cd30:
  lVar7 = FUN_18062b420(system_memory_pool_ptr,0x68,*(int8_t *)(param_1 + 5));
  FUN_180627ae0(lVar7 + 0x20,param_4);
  puVar4 = (uint64_t *)(lVar7 + 0x40);
  *puVar4 = 0;
  *(uint64_t *)(lVar7 + 0x48) = 0;
  *(uint64_t *)(lVar7 + 0x50) = 0;
  *(int32_t *)(lVar7 + 0x58) = 3;
  *(uint64_t *)(lVar7 + 0x48) = *puVar4;
  *(int32_t *)(lVar7 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,puVar3,param_1,uVar8,uVar9,puVar4,puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18018cde0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_18018cde0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar6 = 0;
  if (((char)param_4 != '\0') || (param_3 == param_1)) goto LAB_18018ce62;
  if (*(int *)(param_3 + 0x30) != 0) {
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_18018ce62;
    pbVar2 = *(byte **)(param_3 + 0x28);
    lVar5 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      uVar3 = (uint)pbVar2[lVar5];
      if (bVar1 != uVar3) break;
      pbVar2 = pbVar2 + 1;
    } while (uVar3 != 0);
    if (0 < (int)(bVar1 - uVar3)) goto LAB_18018ce62;
  }
  uVar6 = 1;
LAB_18018ce62:
  lVar5 = FUN_18062b420(system_memory_pool_ptr,0x68,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar5 + 0x20,param_5);
  puVar4 = (uint64_t *)(lVar5 + 0x40);
  *puVar4 = 0;
  *(uint64_t *)(lVar5 + 0x48) = 0;
  *(uint64_t *)(lVar5 + 0x50) = 0;
  *(int32_t *)(lVar5 + 0x58) = 3;
  *(uint64_t *)(lVar5 + 0x48) = *puVar4;
  *(int32_t *)(lVar5 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,param_3,param_1,uVar6,uVar7,puVar4);
}



// WARNING: Removing unreachable block (ram,0x00018018d6f3)
// WARNING: Removing unreachable block (ram,0x00018018d6fc)
// WARNING: Removing unreachable block (ram,0x00018018d702)
// WARNING: Removing unreachable block (ram,0x00018018d713)
// WARNING: Removing unreachable block (ram,0x00018018d748)
// WARNING: Removing unreachable block (ram,0x00018018d71c)
// WARNING: Removing unreachable block (ram,0x00018018d724)
// WARNING: Removing unreachable block (ram,0x00018018d6ae)
// WARNING: Removing unreachable block (ram,0x00018018d444)
// WARNING: Removing unreachable block (ram,0x00018018d3a1)
// WARNING: Removing unreachable block (ram,0x00018018d4ee)
// WARNING: Removing unreachable block (ram,0x00018018d530)
// WARNING: Removing unreachable block (ram,0x00018018d539)
// WARNING: Removing unreachable block (ram,0x00018018d53d)
// WARNING: Removing unreachable block (ram,0x00018018d5dd)
// WARNING: Removing unreachable block (ram,0x00018018d69e)
// WARNING: Removing unreachable block (ram,0x00018018d6a3)
// WARNING: Removing unreachable block (ram,0x00018018d6b1)
// WARNING: Removing unreachable block (ram,0x00018018d6e1)
// WARNING: Removing unreachable block (ram,0x00018018d6e5)
// WARNING: Removing unreachable block (ram,0x00018018d551)
// WARNING: Removing unreachable block (ram,0x00018018d55a)
// WARNING: Removing unreachable block (ram,0x00018018d58b)
// WARNING: Removing unreachable block (ram,0x00018018d593)
// WARNING: Removing unreachable block (ram,0x00018018d596)
// WARNING: Removing unreachable block (ram,0x00018018d563)
// WARNING: Removing unreachable block (ram,0x00018018d567)
// WARNING: Removing unreachable block (ram,0x00018018d5b0)
// WARNING: Removing unreachable block (ram,0x00018018d5bf)
// WARNING: Removing unreachable block (ram,0x00018018d750)
// WARNING: Removing unreachable block (ram,0x00018018d753)
// WARNING: Removing unreachable block (ram,0x00018018d76d)
// WARNING: Removing unreachable block (ram,0x00018018d77c)
// WARNING: Removing unreachable block (ram,0x00018018d7af)
// WARNING: Removing unreachable block (ram,0x00018018d7aa)
// WARNING: Removing unreachable block (ram,0x00018018d7b9)
// WARNING: Removing unreachable block (ram,0x00018018d7db)
// WARNING: Removing unreachable block (ram,0x00018018d7e3)
// WARNING: Removing unreachable block (ram,0x00018018d3f1)
// WARNING: Removing unreachable block (ram,0x00018018d3f9)
// WARNING: Removing unreachable block (ram,0x00018018d400)
// WARNING: Removing unreachable block (ram,0x00018018d441)
// WARNING: Removing unreachable block (ram,0x00018018d41c)
// WARNING: Removing unreachable block (ram,0x00018018d421)
// WARNING: Removing unreachable block (ram,0x00018018d461)
// WARNING: Removing unreachable block (ram,0x00018018d46f)
// WARNING: Removing unreachable block (ram,0x00018018d4e4)
// WARNING: Removing unreachable block (ram,0x00018018d51e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




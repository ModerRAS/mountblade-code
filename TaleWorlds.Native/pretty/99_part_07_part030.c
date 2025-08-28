#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part030.c - 2 个函数

// 函数: void FUN_1804b7da0(int64_t param_1,int64_t param_2)
void FUN_1804b7da0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int64_t lVar9;
  void *puVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint uVar13;
  uint64_t *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  int aiStackX_18 [2];
  uint uStackX_20;
  uint64_t uVar19;
  
  uVar19 = 0xfffffffffffffffe;
  pcVar15 = "presets";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  puVar12 = *(uint64_t **)(param_2 + 0x30);
  if (puVar12 == (uint64_t *)0x0) {
    return;
  }
  pcVar15 = (char *)0x0;
LAB_1804b7df3:
  pcVar6 = (char *)*puVar12;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)0x180d48d24;
    pcVar17 = pcVar15;
  }
  else {
    pcVar17 = (char *)puVar12[2];
  }
  if (pcVar17 == pcVar16 + -0x180a2e827) {
    pcVar17 = pcVar17 + (int64_t)pcVar6;
    if (pcVar17 <= pcVar6) {
LAB_1804b7e30:
      pcVar16 = "preset";
      do {
        pcVar6 = pcVar16;
        pcVar16 = pcVar6 + 1;
      } while (*pcVar16 != '\0');
      pcVar16 = (char *)puVar12[6];
      for (pcVar17 = pcVar16; pcVar17 != (char *)0x0; pcVar17 = *(char **)(pcVar17 + 0x58)) {
        pcVar7 = *(char **)pcVar17;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = (char *)0x180d48d24;
          pcVar8 = pcVar15;
        }
        else {
          pcVar8 = *(char **)(pcVar17 + 0x10);
        }
        if (pcVar8 == pcVar6 + -0x180a2e81b) {
          pcVar8 = pcVar8 + (int64_t)pcVar7;
          pcVar18 = pcVar15;
          if (pcVar8 <= pcVar7) {
LAB_1804b7eb0:
            do {
              uStackX_20 = (int)pcVar18 + 1;
              pcVar18 = (char *)(uint64_t)uStackX_20;
              pcVar6 = "preset";
              do {
                pcVar7 = pcVar6;
                pcVar6 = pcVar7 + 1;
              } while (*pcVar6 != '\0');
              while( true ) {
                do {
                  pcVar17 = *(char **)(pcVar17 + 0x58);
                  if (pcVar17 == (char *)0x0) goto LAB_1804b7f2e;
                  pcVar6 = *(char **)pcVar17;
                  if (pcVar6 == (char *)0x0) {
                    pcVar6 = (char *)0x180d48d24;
                    pcVar8 = pcVar15;
                  }
                  else {
                    pcVar8 = *(char **)(pcVar17 + 0x10);
                  }
                } while (pcVar8 != pcVar7 + -0x180a2e81b);
                pcVar8 = pcVar8 + (int64_t)pcVar6;
                if (pcVar8 <= pcVar6) break;
                lVar9 = (int64_t)&unknown_var_7196_ptr - (int64_t)pcVar6;
                while (*pcVar6 == pcVar6[lVar9]) {
                  pcVar6 = pcVar6 + 1;
                  if (pcVar8 <= pcVar6) goto LAB_1804b7eb0;
                }
              }
            } while( true );
          }
          lVar9 = (int64_t)&unknown_var_7196_ptr - (int64_t)pcVar7;
          while (*pcVar7 == pcVar7[lVar9]) {
            pcVar7 = pcVar7 + 1;
            if (pcVar8 <= pcVar7) goto LAB_1804b7eb0;
          }
        }
      }
      uStackX_20 = 0;
      pcVar18 = pcVar15;
LAB_1804b7f2e:
      pcVar6 = "preset";
      do {
        pcVar17 = pcVar6;
        pcVar6 = pcVar17 + 1;
      } while (*pcVar6 != '\0');
      for (; pcVar6 = pcVar15, pcVar16 != (char *)0x0; pcVar16 = *(char **)(pcVar16 + 0x58)) {
        pcVar7 = *(char **)pcVar16;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = (char *)0x180d48d24;
          pcVar8 = pcVar15;
        }
        else {
          pcVar8 = *(char **)(pcVar16 + 0x10);
        }
        if (pcVar8 == pcVar17 + -0x180a2e81b) {
          pcVar8 = pcVar7 + (int64_t)pcVar8;
          pcVar6 = pcVar16;
          if (pcVar8 <= pcVar7) break;
          lVar9 = (int64_t)&unknown_var_7196_ptr - (int64_t)pcVar7;
          while (*pcVar7 == pcVar7[lVar9]) {
            pcVar7 = pcVar7 + 1;
            if (pcVar8 <= pcVar7) goto LAB_1804b7f8e;
          }
        }
      }
LAB_1804b7f8e:
      pcVar16 = pcVar15;
      if ((int)pcVar18 < 1) {
        return;
      }
      do {
        aiStackX_18[0] = 0;
        pcVar17 = "group_id";
        do {
          pcVar7 = pcVar17;
          pcVar17 = pcVar7 + 1;
        } while (*pcVar17 != '\0');
        puVar12 = *(uint64_t **)(pcVar6 + 0x40);
LAB_1804b7fc0:
        if (puVar12 == (uint64_t *)0x0) goto LAB_1804b8060;
        pcVar17 = (char *)*puVar12;
        if (pcVar17 == (char *)0x0) {
          pcVar17 = (char *)0x180d48d24;
          pcVar8 = pcVar15;
        }
        else {
          pcVar8 = (char *)puVar12[2];
        }
        if (pcVar8 != pcVar7 + -0x180a2e1d7) {
LAB_1804b80ae:
          puVar12 = (uint64_t *)puVar12[6];
          goto LAB_1804b7fc0;
        }
        pcVar8 = pcVar8 + (int64_t)pcVar17;
        if (pcVar17 < pcVar8) {
          lVar9 = (int64_t)&unknown_var_5592_ptr - (int64_t)pcVar17;
          while (*pcVar17 == pcVar17[lVar9]) {
            pcVar17 = pcVar17 + 1;
            if (pcVar8 <= pcVar17) goto LAB_1804b8006;
          }
          goto LAB_1804b80ae;
        }
LAB_1804b8006:
        pcVar17 = (char *)0x180d48d24;
        if ((char *)puVar12[1] != (char *)0x0) {
          pcVar17 = (char *)puVar12[1];
        }
        uVar3 = 0xffffffffffffffff;
        do {
          uVar3 = uVar3 + 1;
        } while (pcVar17[uVar3] != '\0');
        if (((uVar3 < 3) || (*pcVar17 != '0')) ||
           (puVar10 = &unknown_var_5412_ptr, (pcVar17[1] + 0xa8U & 0xdf) != 0)) {
          puVar10 = &unknown_var_2208_ptr;
        }
        FUN_18010cbc0(pcVar17,puVar10,aiStackX_18,puVar12,uVar19);
LAB_1804b8060:
        lVar9 = param_1 + (int64_t)aiStackX_18[0] * 0x28;
        pcVar17 = "key";
        do {
          pcVar7 = pcVar17;
          pcVar17 = pcVar7 + 1;
        } while (*pcVar17 != '\0');
        for (puVar12 = *(uint64_t **)(pcVar6 + 0x30); puVar12 != (uint64_t *)0x0;
            puVar12 = (uint64_t *)puVar12[0xb]) {
          pcVar17 = (char *)*puVar12;
          if (pcVar17 == (char *)0x0) {
            pcVar17 = (char *)0x180d48d24;
            pcVar8 = pcVar15;
          }
          else {
            pcVar8 = (char *)puVar12[2];
          }
          if (pcVar8 == pcVar7 + -0x180a18107) {
            pcVar8 = pcVar17 + (int64_t)pcVar8;
            if (pcVar8 <= pcVar17) {
LAB_1804b80f0:
              iVar1 = *(int *)(lVar9 + 0x74);
              iVar2 = *(int *)(lVar9 + 0x70);
              if (iVar1 <= iVar2) {
                if (iVar1 < 2) {
                  *(int32_t *)(lVar9 + 0x74) = 8;
                }
                else {
                  *(int *)(lVar9 + 0x74) = (iVar1 >> 1) + iVar1;
                }
                FUN_1804c0b30(lVar9 + 0x70);
                iVar2 = *(int *)(lVar9 + 0x70);
              }
              puVar14 = (uint64_t *)((int64_t)iVar2 * 0xa8 + *(int64_t *)(lVar9 + 0x78));
              *puVar14 = &system_state_ptr;
              puVar14[1] = 0;
              *(int32_t *)(puVar14 + 2) = 0;
              *puVar14 = &unknown_var_760_ptr;
              puVar14[1] = puVar14 + 3;
              *(int32_t *)(puVar14 + 2) = 0;
              *(int8_t *)(puVar14 + 3) = 0;
              *(int *)(lVar9 + 0x70) = *(int *)(lVar9 + 0x70) + 1;
              lVar11 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar11 = puVar12[1];
              }
              if ((void *)*puVar14 == &unknown_var_760_ptr) {
                if (lVar11 == 0) {
                  *(int32_t *)(puVar14 + 2) = 0;
                  *(int8_t *)puVar14[1] = 0;
                }
                else {
                  lVar4 = -1;
                  do {
                    lVar4 = lVar4 + 1;
                  } while (*(char *)(lVar11 + lVar4) != '\0');
                  if ((int)lVar4 < 0x90) {
                    *(int *)(puVar14 + 2) = (int)lVar4;
                    strcpy_s(puVar14[1],0x90);
                  }
                  else {
                    FUN_180626f80(&unknown_var_616_ptr,0x90,lVar11);
                    *(int32_t *)(puVar14 + 2) = 0;
                    *(int8_t *)puVar14[1] = 0;
                  }
                }
              }
              else {
                (**(code **)((void *)*puVar14 + 0x10))(puVar14);
              }
              pcVar17 = "key";
              do {
                pcVar7 = pcVar17;
                pcVar17 = pcVar7 + 1;
              } while (*pcVar17 != '\0');
              puVar12 = (uint64_t *)puVar12[0xb];
              if (puVar12 != (uint64_t *)0x0) {
                do {
                  pcVar17 = (char *)*puVar12;
                  if (pcVar17 == (char *)0x0) {
                    pcVar17 = (char *)0x180d48d24;
                    pcVar8 = pcVar15;
                  }
                  else {
                    pcVar8 = (char *)puVar12[2];
                  }
                  if (pcVar8 == pcVar7 + -0x180a18107) {
                    pcVar8 = pcVar8 + (int64_t)pcVar17;
                    if (pcVar8 <= pcVar17) goto LAB_1804b80f0;
                    lVar11 = (int64_t)&unknown_var_5272_ptr - (int64_t)pcVar17;
                    while (*pcVar17 == pcVar17[lVar11]) {
                      pcVar17 = pcVar17 + 1;
                      if (pcVar8 <= pcVar17) goto LAB_1804b80f0;
                    }
                  }
                  puVar12 = (uint64_t *)puVar12[0xb];
                  if (puVar12 == (uint64_t *)0x0) break;
                } while( true );
              }
              pcVar18 = (char *)(uint64_t)uStackX_20;
              break;
            }
            lVar11 = (int64_t)&unknown_var_5272_ptr - (int64_t)pcVar17;
            while (*pcVar17 == pcVar17[lVar11]) {
              pcVar17 = pcVar17 + 1;
              if (pcVar8 <= pcVar17) goto LAB_1804b80f0;
            }
          }
        }
        pcVar17 = "preset";
        do {
          pcVar7 = pcVar17;
          pcVar17 = pcVar7 + 1;
        } while (*pcVar17 != '\0');
        for (pcVar17 = *(char **)(pcVar6 + 0x58); pcVar6 = pcVar15, pcVar17 != (char *)0x0;
            pcVar17 = *(char **)(pcVar17 + 0x58)) {
          pcVar8 = *(char **)pcVar17;
          if (pcVar8 == (char *)0x0) {
            pcVar8 = (char *)0x180d48d24;
            pcVar5 = pcVar15;
          }
          else {
            pcVar5 = *(char **)(pcVar17 + 0x10);
          }
          if (pcVar5 == pcVar7 + -0x180a2e81b) {
            pcVar5 = pcVar5 + (int64_t)pcVar8;
            pcVar6 = pcVar17;
            if (pcVar5 <= pcVar8) break;
            lVar9 = (int64_t)&unknown_var_7196_ptr - (int64_t)pcVar8;
            while (*pcVar8 == pcVar8[lVar9]) {
              pcVar8 = pcVar8 + 1;
              if (pcVar5 <= pcVar8) goto LAB_1804b82ce;
            }
          }
        }
LAB_1804b82ce:
        uVar13 = (int)pcVar16 + 1;
        pcVar16 = (char *)(uint64_t)uVar13;
        if ((int)pcVar18 <= (int)uVar13) {
          return;
        }
      } while( true );
    }
    lVar9 = (int64_t)&unknown_var_7208_ptr - (int64_t)pcVar6;
    while (*pcVar6 == pcVar6[lVar9]) {
      pcVar6 = pcVar6 + 1;
      if (pcVar17 <= pcVar6) goto LAB_1804b7e30;
    }
  }
  puVar12 = (uint64_t *)puVar12[0xb];
  if (puVar12 == (uint64_t *)0x0) {
    return;
  }
  goto LAB_1804b7df3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804b8300(int64_t param_1,int64_t param_2)
void FUN_1804b8300(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int iVar4;
  uint uVar5;
  int32_t uVar6;
  char *pcVar7;
  uint64_t *puVar8;
  int8_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  char *pcVar20;
  uint uVar21;
  int iStackX_8;
  int64_t lStackX_18;
  void *puStack_b0;
  int8_t *puStack_a8;
  uint uStack_a0;
  uint64_t uStack_98;
  void *puStack_90;
  int8_t *puStack_88;
  uint uStack_80;
  uint64_t uStack_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  int64_t *plStack_60;
  int64_t *plStack_58;
  int64_t *plStack_50;
  int64_t *plStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pcVar10 = (char *)0x0;
  uVar21 = 0;
  *(int32_t *)(param_1 + 0xa68) = 0;
  pcVar20 = "face_textures";
  do {
    pcVar14 = pcVar20;
    pcVar20 = pcVar14 + 1;
  } while (*pcVar20 != '\0');
  for (pcVar20 = *(char **)(param_2 + 0x30); pcVar11 = pcVar10, pcVar20 != (char *)0x0;
      pcVar20 = *(char **)(pcVar20 + 0x58)) {
    pcVar12 = *(char **)pcVar20;
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x180d48d24;
      pcVar13 = pcVar10;
    }
    else {
      pcVar13 = *(char **)(pcVar20 + 0x10);
    }
    if (pcVar13 == pcVar14 + -0x180a2e7d7) {
      pcVar13 = pcVar13 + (int64_t)pcVar12;
      pcVar11 = pcVar20;
      if (pcVar13 <= pcVar12) break;
      lVar15 = (int64_t)&unknown_var_7128_ptr - (int64_t)pcVar12;
      while (*pcVar12 == pcVar12[lVar15]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar13 <= pcVar12) goto LAB_1804b83a6;
      }
    }
  }
LAB_1804b83a6:
  FUN_180631330(pcVar11,&unknown_var_5592_ptr,param_1 + 0xa68);
  if (pcVar11 != (char *)0x0) {
    pcVar20 = "face_texture";
    do {
      pcVar14 = pcVar20;
      pcVar20 = pcVar14 + 1;
    } while (*pcVar20 != '\0');
    pcVar11 = *(char **)(pcVar11 + 0x30);
    for (pcVar20 = pcVar11; pcVar12 = pcVar10, pcVar20 != (char *)0x0;
        pcVar20 = *(char **)(pcVar20 + 0x58)) {
      pcVar13 = *(char **)pcVar20;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x180d48d24;
        pcVar7 = pcVar10;
      }
      else {
        pcVar7 = *(char **)(pcVar20 + 0x10);
      }
      if (pcVar7 == pcVar14 + -0x180a2e7c7) {
        pcVar7 = pcVar7 + (int64_t)pcVar13;
        pcVar12 = pcVar20;
        if (pcVar7 <= pcVar13) break;
        lVar15 = (int64_t)&unknown_var_7112_ptr - (int64_t)pcVar13;
        while (*pcVar13 == pcVar13[lVar15]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar7 <= pcVar13) goto LAB_1804b843c;
        }
      }
    }
LAB_1804b843c:
    pcVar20 = "face_texture";
    do {
      pcVar14 = pcVar20;
      pcVar20 = pcVar14 + 1;
    } while (*pcVar20 != '\0');
    for (; pcVar11 != (char *)0x0; pcVar11 = *(char **)(pcVar11 + 0x58)) {
      pcVar20 = *(char **)pcVar11;
      if (pcVar20 == (char *)0x0) {
        pcVar20 = (char *)0x180d48d24;
        pcVar13 = pcVar10;
      }
      else {
        pcVar13 = *(char **)(pcVar11 + 0x10);
      }
      if (pcVar13 == pcVar14 + -0x180a2e7c7) {
        pcVar13 = pcVar20 + (int64_t)pcVar13;
        pcVar7 = pcVar10;
        if (pcVar13 <= pcVar20) {
LAB_1804b84a0:
          do {
            uVar21 = (int)pcVar7 + 1;
            pcVar7 = (char *)(uint64_t)uVar21;
            pcVar20 = "face_texture";
            do {
              pcVar14 = pcVar20;
              pcVar20 = pcVar14 + 1;
            } while (*pcVar20 != '\0');
            while( true ) {
              do {
                pcVar11 = *(char **)(pcVar11 + 0x58);
                if (pcVar11 == (char *)0x0) goto LAB_1804b8515;
                pcVar20 = *(char **)pcVar11;
                if (pcVar20 == (char *)0x0) {
                  pcVar20 = (char *)0x180d48d24;
                  pcVar13 = pcVar10;
                }
                else {
                  pcVar13 = *(char **)(pcVar11 + 0x10);
                }
              } while (pcVar13 != pcVar14 + -0x180a2e7c7);
              pcVar13 = pcVar13 + (int64_t)pcVar20;
              if (pcVar13 <= pcVar20) break;
              lVar15 = (int64_t)&unknown_var_7112_ptr - (int64_t)pcVar20;
              while (*pcVar20 == pcVar20[lVar15]) {
                pcVar20 = pcVar20 + 1;
                if (pcVar13 <= pcVar20) goto LAB_1804b84a0;
              }
            }
          } while( true );
        }
        lVar15 = (int64_t)&unknown_var_7112_ptr - (int64_t)pcVar20;
        while (*pcVar20 == pcVar20[lVar15]) {
          pcVar20 = pcVar20 + 1;
          if (pcVar13 <= pcVar20) goto LAB_1804b84a0;
        }
      }
    }
LAB_1804b8515:
    plVar1 = (int64_t *)(param_1 + 0xa20);
    uVar19 = (uint64_t)(int)uVar21;
    puVar8 = *(uint64_t **)(param_1 + 0xa28);
    lVar15 = *plVar1;
    uVar18 = ((int64_t)puVar8 - lVar15) / 0x50;
    if (uVar18 < uVar19) {
      FUN_1804c01f0(plVar1,uVar19 - uVar18);
    }
    else {
      puVar17 = (uint64_t *)(lVar15 + uVar19 * 0x50);
      if (puVar17 != puVar8) {
        do {
          puVar17[6] = &system_data_buffer_ptr;
          if (puVar17[7] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar17[7] = 0;
          *(int32_t *)(puVar17 + 9) = 0;
          puVar17[6] = &system_state_ptr;
          if ((int64_t *)puVar17[5] != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)puVar17[5] + 0x38))();
          }
          if ((int64_t *)puVar17[4] != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)puVar17[4] + 0x38))();
          }
          *puVar17 = &system_data_buffer_ptr;
          if (puVar17[1] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar17[1] = 0;
          *(int32_t *)(puVar17 + 3) = 0;
          *puVar17 = &system_state_ptr;
          puVar17 = puVar17 + 10;
        } while (puVar17 != puVar8);
        lVar15 = *plVar1;
      }
      *(uint64_t *)(param_1 + 0xa28) = lVar15 + uVar19 * 0x50;
    }
    iStackX_8 = 0;
    if (pcVar12 != (char *)0x0) {
      lStackX_18 = 0;
      do {
        pcVar10 = (char *)0x0;
        lVar15 = lStackX_18 * 0x50;
        pcVar20 = "name";
        do {
          pcVar14 = pcVar20;
          pcVar20 = pcVar14 + 1;
        } while (*pcVar20 != '\0');
        for (puVar8 = *(uint64_t **)(pcVar12 + 0x40); puVar8 != (uint64_t *)0x0;
            puVar8 = (uint64_t *)puVar8[6]) {
          pcVar20 = (char *)*puVar8;
          if (pcVar20 == (char *)0x0) {
            pcVar20 = (char *)0x180d48d24;
            pcVar11 = pcVar10;
          }
          else {
            pcVar11 = (char *)puVar8[2];
          }
          if (pcVar11 == pcVar14 + -0x180a03a83) {
            pcVar11 = pcVar11 + (int64_t)pcVar20;
            if (pcVar11 <= pcVar20) {
LAB_1804b86c0:
              lVar16 = 0x180d48d24;
              if (puVar8[1] != 0) {
                lVar16 = puVar8[1];
              }
              (**(code **)(*(int64_t *)(*plVar1 + lVar15) + 0x10))
                        ((int64_t *)(*plVar1 + lVar15),lVar16);
              break;
            }
            lVar16 = (int64_t)&system_data_3a84 - (int64_t)pcVar20;
            while (*pcVar20 == pcVar20[lVar16]) {
              pcVar20 = pcVar20 + 1;
              if (pcVar11 <= pcVar20) goto LAB_1804b86c0;
            }
          }
        }
        pcVar20 = "tags";
        do {
          pcVar14 = pcVar20;
          pcVar20 = pcVar14 + 1;
        } while (*pcVar20 != '\0');
        for (puVar8 = *(uint64_t **)(pcVar12 + 0x40); puVar8 != (uint64_t *)0x0;
            puVar8 = (uint64_t *)puVar8[6]) {
          pcVar20 = (char *)*puVar8;
          if (pcVar20 == (char *)0x0) {
            pcVar20 = (char *)0x180d48d24;
            pcVar11 = pcVar10;
          }
          else {
            pcVar11 = (char *)puVar8[2];
          }
          if (pcVar11 == pcVar14 + -0x180a23573) {
            pcVar11 = pcVar11 + (int64_t)pcVar20;
            if (pcVar11 <= pcVar20) {
LAB_1804b8745:
              lVar16 = 0x180d48d24;
              if (puVar8[1] != 0) {
                lVar16 = puVar8[1];
              }
              (**(code **)(*(int64_t *)(*plVar1 + 0x30 + lVar15) + 0x10))
                        (*plVar1 + 0x30 + lVar15,lVar16);
              break;
            }
            lVar16 = (int64_t)&unknown_var_1460_ptr - (int64_t)pcVar20;
            while (*pcVar20 == pcVar20[lVar16]) {
              pcVar20 = pcVar20 + 1;
              if (pcVar11 <= pcVar20) goto LAB_1804b8745;
            }
          }
        }
        puVar8 = (uint64_t *)
                 FUN_1800b30d0(system_resource_state,&plStack_70,(int64_t)iStackX_8 * 0x50 + *plVar1,1);
        lVar16 = *plVar1;
        uVar2 = *puVar8;
        *puVar8 = 0;
        plVar3 = *(int64_t **)(lVar16 + lVar15 + 0x20);
        *(uint64_t *)(lVar16 + lVar15 + 0x20) = uVar2;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        if (plStack_70 != (int64_t *)0x0) {
          (**(code **)(*plStack_70 + 0x38))();
        }
        puStack_b0 = &system_data_buffer_ptr;
        uStack_98._0_4_ = 0;
        uStack_98._4_4_ = 0;
        puStack_a8 = (int8_t *)0x0;
        uStack_a0 = 0;
        pcVar20 = "lod_material";
        do {
          pcVar14 = pcVar20;
          pcVar20 = pcVar14 + 1;
        } while (*pcVar20 != '\0');
        for (puVar8 = *(uint64_t **)(pcVar12 + 0x40); puVar8 != (uint64_t *)0x0;
            puVar8 = (uint64_t *)puVar8[6]) {
          pcVar20 = (char *)*puVar8;
          if (pcVar20 == (char *)0x0) {
            pcVar20 = (char *)0x180d48d24;
            pcVar11 = pcVar10;
          }
          else {
            pcVar11 = (char *)puVar8[2];
          }
          if (pcVar11 == pcVar14 + -0x180a2e7f7) {
            pcVar11 = pcVar11 + (int64_t)pcVar20;
            if (pcVar11 <= pcVar20) {
LAB_1804b8864:
              lVar16 = 0x180d48d24;
              if (puVar8[1] != 0) {
                lVar16 = puVar8[1];
              }
              FUN_180627c50(&puStack_b0,lVar16);
              puVar8 = (uint64_t *)FUN_1800b30d0(system_resource_state,&plStack_60,&puStack_b0,1);
              lVar16 = *plVar1;
              uVar2 = *puVar8;
              *puVar8 = 0;
              plStack_68 = *(int64_t **)(lVar16 + 0x28 + lVar15);
              *(uint64_t *)(lVar16 + 0x28 + lVar15) = uVar2;
              if (plStack_68 != (int64_t *)0x0) {
                (**(code **)(*plStack_68 + 0x38))();
              }
              if (plStack_60 != (int64_t *)0x0) {
                (**(code **)(*plStack_60 + 0x38))();
              }
              goto LAB_1804b88d7;
            }
            lVar16 = (int64_t)&unknown_var_7160_ptr - (int64_t)pcVar20;
            while (*pcVar20 == pcVar20[lVar16]) {
              pcVar20 = pcVar20 + 1;
              if (pcVar11 <= pcVar20) goto LAB_1804b8864;
            }
          }
        }
        lVar16 = *plVar1 + lVar15;
        uVar21 = *(uint *)(lVar16 + 0x10);
        if (*(int64_t *)(lVar16 + 8) == 0) {
LAB_1804b8965:
          if (uVar21 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puStack_a8,*(uint64_t *)(lVar16 + 8),(uint64_t)uVar21);
          }
        }
        else if (uVar21 != 0) {
          iVar4 = uVar21 + 1;
          if (iVar4 < 0x10) {
            iVar4 = 0x10;
          }
          puStack_a8 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar4,0x13);
          *puStack_a8 = 0;
          uStack_98._0_4_ = FUN_18064e990(puStack_a8);
          goto LAB_1804b8965;
        }
        if (puStack_a8 != (int8_t *)0x0) {
          puStack_a8[uVar21] = 0;
        }
        uStack_98._4_4_ = *(uint *)(lVar16 + 0x1c);
        puStack_90 = &system_data_buffer_ptr;
        uStack_78 = 0;
        puVar9 = (int8_t *)0x0;
        puStack_88 = (int8_t *)0x0;
        uStack_80 = 0;
        uVar18 = (uint64_t)uVar21;
        uStack_a0 = uVar21;
        if (puStack_a8 == (int8_t *)0x0) {
LAB_1804b8a0b:
          if (uVar21 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puVar9,puStack_a8,uVar18);
          }
        }
        else if (uVar21 != 0) {
          iVar4 = uVar21 + 1;
          if (iVar4 < 0x10) {
            iVar4 = 0x10;
          }
          puVar9 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar4,0x13);
          *puVar9 = 0;
          puStack_88 = puVar9;
          pcVar10 = (char *)FUN_18064e990(puVar9);
          uStack_78 = CONCAT44(uStack_78._4_4_,(int)pcVar10);
          goto LAB_1804b8a0b;
        }
        if (puVar9 != (int8_t *)0x0) {
          puVar9[uVar18] = 0;
        }
        uStack_78 = CONCAT44(uStack_98._4_4_,(int32_t)uStack_78);
        if (uVar21 + 4 != 0) {
          uVar5 = uVar21 + 5;
          uStack_80 = uVar21;
          if (puVar9 == (int8_t *)0x0) {
            if ((int)uVar5 < 0x10) {
              uVar5 = 0x10;
            }
            puVar9 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)(int)uVar5,0x13);
            *puVar9 = 0;
          }
          else {
            if (uVar5 <= (uint)pcVar10) goto LAB_1804b8a97;
            puVar9 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar9,uVar5,0x10,0x13);
          }
          puStack_88 = puVar9;
          uVar6 = FUN_18064e990(puVar9);
          uStack_78 = CONCAT44(uStack_78._4_4_,uVar6);
        }
LAB_1804b8a97:
        *(int32_t *)(puVar9 + uVar18) = 0x646f6c2e;
        puVar9[uVar18 + 4] = 0;
        uStack_80 = uVar21 + 4;
        puVar8 = (uint64_t *)FUN_1800b30d0(system_resource_state,&plStack_50,&puStack_90,0);
        lVar16 = *plVar1;
        uVar2 = *puVar8;
        *puVar8 = 0;
        plStack_58 = *(int64_t **)(lVar16 + 0x28 + lVar15);
        *(uint64_t *)(lVar16 + 0x28 + lVar15) = uVar2;
        if (plStack_58 != (int64_t *)0x0) {
          (**(code **)(*plStack_58 + 0x38))();
        }
        if (plStack_50 != (int64_t *)0x0) {
          (**(code **)(*plStack_50 + 0x38))();
        }
        puStack_90 = &system_data_buffer_ptr;
        if (puVar9 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar9);
        }
        puStack_88 = (int8_t *)0x0;
        uStack_78 = uStack_78 & 0xffffffff00000000;
        puStack_90 = &system_state_ptr;
        lVar15 = *plVar1 + lVar15;
        if (*(int64_t *)(lVar15 + 0x28) == 0) {
          plVar3 = *(int64_t **)(lVar15 + 0x20);
          if (plVar3 != (int64_t *)0x0) {
            plStack_48 = plVar3;
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          plStack_48 = *(int64_t **)(lVar15 + 0x28);
          *(int64_t **)(lVar15 + 0x28) = plVar3;
          if (plStack_48 != (int64_t *)0x0) {
            (**(code **)(*plStack_48 + 0x38))();
          }
        }
LAB_1804b88d7:
        pcVar20 = "face_texture";
        do {
          pcVar10 = pcVar20;
          pcVar20 = pcVar10 + 1;
        } while (*pcVar20 != '\0');
        for (pcVar20 = *(char **)(pcVar12 + 0x58); pcVar12 = (char *)0x0, pcVar20 != (char *)0x0;
            pcVar20 = *(char **)(pcVar20 + 0x58)) {
          pcVar14 = *(char **)pcVar20;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            pcVar11 = (char *)0x0;
          }
          else {
            pcVar11 = *(char **)(pcVar20 + 0x10);
          }
          if (pcVar11 == pcVar10 + -0x180a2e7c7) {
            pcVar11 = pcVar14 + (int64_t)pcVar11;
            pcVar12 = pcVar20;
            if (pcVar11 <= pcVar14) break;
            lVar15 = (int64_t)&unknown_var_7112_ptr - (int64_t)pcVar14;
            while (*pcVar14 == pcVar14[lVar15]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar11 <= pcVar14) goto LAB_1804b8bbb;
            }
          }
        }
LAB_1804b8bbb:
        puStack_b0 = &system_data_buffer_ptr;
        if (puStack_a8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_a8 = (int8_t *)0x0;
        uStack_98 = (uint64_t)uStack_98._4_4_ << 0x20;
        puStack_b0 = &system_state_ptr;
        iStackX_8 = iStackX_8 + 1;
        lStackX_18 = lStackX_18 + 1;
      } while (pcVar12 != (char *)0x0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





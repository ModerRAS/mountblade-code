#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part031.c - 1 个函数

// 函数: void FUN_1804b8c20(longlong param_1,longlong param_2)
void FUN_1804b8c20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plVar3;
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
  longlong lVar15;
  longlong lVar16;
  uint64_t *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  char *pcVar20;
  uint uVar21;
  int iStackX_8;
  longlong lStackX_18;
  void *puStack_b0;
  int8_t *puStack_a8;
  uint uStack_a0;
  uint64_t uStack_98;
  void *puStack_90;
  int8_t *puStack_88;
  uint uStack_80;
  uint64_t uStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pcVar10 = (char *)0x0;
  uVar21 = 0;
  *(int32_t *)(param_1 + 0xa6c) = 0;
  pcVar20 = "mouth_textures";
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
    if (pcVar13 == pcVar14 + -0x180a2e7e7) {
      pcVar13 = pcVar13 + (longlong)pcVar12;
      pcVar11 = pcVar20;
      if (pcVar13 <= pcVar12) break;
      lVar15 = (longlong)&unknown_var_7144_ptr - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar15]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar13 <= pcVar12) goto LAB_1804b8cc6;
      }
    }
  }
LAB_1804b8cc6:
  FUN_180631330(pcVar11,&unknown_var_5592_ptr,param_1 + 0xa6c);
  if (pcVar11 != (char *)0x0) {
    pcVar20 = "mouth_texture";
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
      if (pcVar7 == pcVar14 + -0x180a2e8cf) {
        pcVar7 = pcVar7 + (longlong)pcVar13;
        pcVar12 = pcVar20;
        if (pcVar7 <= pcVar13) break;
        lVar15 = (longlong)&unknown_var_7376_ptr - (longlong)pcVar13;
        while (*pcVar13 == pcVar13[lVar15]) {
          pcVar13 = pcVar13 + 1;
          if (pcVar7 <= pcVar13) goto LAB_1804b8d5c;
        }
      }
    }
LAB_1804b8d5c:
    pcVar20 = "mouth_texture";
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
      if (pcVar13 == pcVar14 + -0x180a2e8cf) {
        pcVar13 = pcVar20 + (longlong)pcVar13;
        pcVar7 = pcVar10;
        if (pcVar13 <= pcVar20) {
LAB_1804b8dc0:
          do {
            uVar21 = (int)pcVar7 + 1;
            pcVar7 = (char *)(ulonglong)uVar21;
            pcVar20 = "mouth_texture";
            do {
              pcVar14 = pcVar20;
              pcVar20 = pcVar14 + 1;
            } while (*pcVar20 != '\0');
            while( true ) {
              do {
                pcVar11 = *(char **)(pcVar11 + 0x58);
                if (pcVar11 == (char *)0x0) goto LAB_1804b8e35;
                pcVar20 = *(char **)pcVar11;
                if (pcVar20 == (char *)0x0) {
                  pcVar20 = (char *)0x180d48d24;
                  pcVar13 = pcVar10;
                }
                else {
                  pcVar13 = *(char **)(pcVar11 + 0x10);
                }
              } while (pcVar13 != pcVar14 + -0x180a2e8cf);
              pcVar13 = pcVar13 + (longlong)pcVar20;
              if (pcVar13 <= pcVar20) break;
              lVar15 = (longlong)&unknown_var_7376_ptr - (longlong)pcVar20;
              while (*pcVar20 == pcVar20[lVar15]) {
                pcVar20 = pcVar20 + 1;
                if (pcVar13 <= pcVar20) goto LAB_1804b8dc0;
              }
            }
          } while( true );
        }
        lVar15 = (longlong)&unknown_var_7376_ptr - (longlong)pcVar20;
        while (*pcVar20 == pcVar20[lVar15]) {
          pcVar20 = pcVar20 + 1;
          if (pcVar13 <= pcVar20) goto LAB_1804b8dc0;
        }
      }
    }
LAB_1804b8e35:
    plVar1 = (longlong *)(param_1 + 0xa40);
    uVar19 = (ulonglong)(int)uVar21;
    puVar8 = *(uint64_t **)(param_1 + 0xa48);
    lVar15 = *plVar1;
    uVar18 = ((longlong)puVar8 - lVar15) / 0x50;
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
          if ((longlong *)puVar17[5] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar17[5] + 0x38))();
          }
          if ((longlong *)puVar17[4] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar17[4] + 0x38))();
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
      *(ulonglong *)(param_1 + 0xa48) = lVar15 + uVar19 * 0x50;
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
            pcVar11 = pcVar11 + (longlong)pcVar20;
            if (pcVar11 <= pcVar20) {
LAB_1804b8fe0:
              lVar16 = 0x180d48d24;
              if (puVar8[1] != 0) {
                lVar16 = puVar8[1];
              }
              (**(code **)(*(longlong *)(*plVar1 + lVar15) + 0x10))
                        ((longlong *)(*plVar1 + lVar15),lVar16);
              break;
            }
            lVar16 = (longlong)&system_data_3a84 - (longlong)pcVar20;
            while (*pcVar20 == pcVar20[lVar16]) {
              pcVar20 = pcVar20 + 1;
              if (pcVar11 <= pcVar20) goto LAB_1804b8fe0;
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
            pcVar11 = pcVar11 + (longlong)pcVar20;
            if (pcVar11 <= pcVar20) {
LAB_1804b9065:
              lVar16 = 0x180d48d24;
              if (puVar8[1] != 0) {
                lVar16 = puVar8[1];
              }
              (**(code **)(*(longlong *)(*plVar1 + 0x30 + lVar15) + 0x10))
                        (*plVar1 + 0x30 + lVar15,lVar16);
              break;
            }
            lVar16 = (longlong)&unknown_var_1460_ptr - (longlong)pcVar20;
            while (*pcVar20 == pcVar20[lVar16]) {
              pcVar20 = pcVar20 + 1;
              if (pcVar11 <= pcVar20) goto LAB_1804b9065;
            }
          }
        }
        puVar8 = (uint64_t *)
                 FUN_1800b30d0(system_resource_state,&plStack_70,(longlong)iStackX_8 * 0x50 + *plVar1,1);
        lVar16 = *plVar1;
        uVar2 = *puVar8;
        *puVar8 = 0;
        plVar3 = *(longlong **)(lVar16 + lVar15 + 0x20);
        *(uint64_t *)(lVar16 + lVar15 + 0x20) = uVar2;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        if (plStack_70 != (longlong *)0x0) {
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
            pcVar11 = pcVar11 + (longlong)pcVar20;
            if (pcVar11 <= pcVar20) {
LAB_1804b9184:
              lVar16 = 0x180d48d24;
              if (puVar8[1] != 0) {
                lVar16 = puVar8[1];
              }
              FUN_180627c50(&puStack_b0,lVar16);
              puVar8 = (uint64_t *)FUN_1800b30d0(system_resource_state,&plStack_60,&puStack_b0,1);
              lVar16 = *plVar1;
              uVar2 = *puVar8;
              *puVar8 = 0;
              plStack_68 = *(longlong **)(lVar16 + 0x28 + lVar15);
              *(uint64_t *)(lVar16 + 0x28 + lVar15) = uVar2;
              if (plStack_68 != (longlong *)0x0) {
                (**(code **)(*plStack_68 + 0x38))();
              }
              if (plStack_60 != (longlong *)0x0) {
                (**(code **)(*plStack_60 + 0x38))();
              }
              goto LAB_1804b91f7;
            }
            lVar16 = (longlong)&unknown_var_7160_ptr - (longlong)pcVar20;
            while (*pcVar20 == pcVar20[lVar16]) {
              pcVar20 = pcVar20 + 1;
              if (pcVar11 <= pcVar20) goto LAB_1804b9184;
            }
          }
        }
        lVar16 = *plVar1 + lVar15;
        uVar21 = *(uint *)(lVar16 + 0x10);
        if (*(longlong *)(lVar16 + 8) == 0) {
LAB_1804b9285:
          if (uVar21 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puStack_a8,*(uint64_t *)(lVar16 + 8),(ulonglong)uVar21);
          }
        }
        else if (uVar21 != 0) {
          iVar4 = uVar21 + 1;
          if (iVar4 < 0x10) {
            iVar4 = 0x10;
          }
          puStack_a8 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar4,0x13);
          *puStack_a8 = 0;
          uStack_98._0_4_ = FUN_18064e990(puStack_a8);
          goto LAB_1804b9285;
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
        uVar18 = (ulonglong)uVar21;
        uStack_a0 = uVar21;
        if (puStack_a8 == (int8_t *)0x0) {
LAB_1804b932b:
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
          puVar9 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar4,0x13);
          *puVar9 = 0;
          puStack_88 = puVar9;
          pcVar10 = (char *)FUN_18064e990(puVar9);
          uStack_78 = CONCAT44(uStack_78._4_4_,(int)pcVar10);
          goto LAB_1804b932b;
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
            puVar9 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar5,0x13);
            *puVar9 = 0;
          }
          else {
            if (uVar5 <= (uint)pcVar10) goto LAB_1804b93b7;
            puVar9 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar9,uVar5,0x10,0x13);
          }
          puStack_88 = puVar9;
          uVar6 = FUN_18064e990(puVar9);
          uStack_78 = CONCAT44(uStack_78._4_4_,uVar6);
        }
LAB_1804b93b7:
        *(int32_t *)(puVar9 + uVar18) = 0x646f6c2e;
        puVar9[uVar18 + 4] = 0;
        uStack_80 = uVar21 + 4;
        puVar8 = (uint64_t *)FUN_1800b30d0(system_resource_state,&plStack_50,&puStack_90,0);
        lVar16 = *plVar1;
        uVar2 = *puVar8;
        *puVar8 = 0;
        plStack_58 = *(longlong **)(lVar16 + 0x28 + lVar15);
        *(uint64_t *)(lVar16 + 0x28 + lVar15) = uVar2;
        if (plStack_58 != (longlong *)0x0) {
          (**(code **)(*plStack_58 + 0x38))();
        }
        if (plStack_50 != (longlong *)0x0) {
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
        if (*(longlong *)(lVar15 + 0x28) == 0) {
          plVar3 = *(longlong **)(lVar15 + 0x20);
          if (plVar3 != (longlong *)0x0) {
            plStack_48 = plVar3;
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          plStack_48 = *(longlong **)(lVar15 + 0x28);
          *(longlong **)(lVar15 + 0x28) = plVar3;
          if (plStack_48 != (longlong *)0x0) {
            (**(code **)(*plStack_48 + 0x38))();
          }
        }
LAB_1804b91f7:
        pcVar20 = "mouth_texture";
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
          if (pcVar11 == pcVar10 + -0x180a2e8cf) {
            pcVar11 = pcVar14 + (longlong)pcVar11;
            pcVar12 = pcVar20;
            if (pcVar11 <= pcVar14) break;
            lVar15 = (longlong)&unknown_var_7376_ptr - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar15]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar11 <= pcVar14) goto LAB_1804b94db;
            }
          }
        }
LAB_1804b94db:
        puStack_b0 = &system_data_buffer_ptr;
        if (puStack_a8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_a8 = (int8_t *)0x0;
        uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
        puStack_b0 = &system_state_ptr;
        iStackX_8 = iStackX_8 + 1;
        lStackX_18 = lStackX_18 + 1;
      } while (pcVar12 != (char *)0x0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





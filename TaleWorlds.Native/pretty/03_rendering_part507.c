#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part507.c - 4 个函数

// 函数: void FUN_18053aa90(longlong *param_1,longlong param_2,longlong *param_3)
void FUN_18053aa90(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  void *puVar11;
  void *puVar12;
  uint64_t *puVar13;
  char *pcVar14;
  char *pcVar15;
  int8_t auStack_1a8 [32];
  int iStack_188;
  int iStack_184;
  void *puStack_180;
  void *puStack_178;
  int32_t uStack_170;
  ulonglong uStack_168;
  void *puStack_160;
  void *puStack_158;
  int iStack_150;
  ulonglong uStack_148;
  void *puStack_140;
  longlong lStack_138;
  int iStack_130;
  ulonglong uStack_128;
  uint64_t uStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int iStack_f8;
  int8_t auStack_f0 [72];
  void *puStack_a8;
  void *puStack_a0;
  int iStack_98;
  uint8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1a8;
  pcVar15 = (char *)0x0;
  if (param_2 == 0) {
LAB_18053b3c0:
    param_1[0x14] = param_1[0x13];
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1a8);
  }
  *(int32_t *)(param_1 + 0xc) = 0xffffffff;
  pcVar14 = "id";
  do {
    pcVar7 = pcVar14;
    pcVar14 = pcVar7 + 1;
  } while (*pcVar14 != '\0');
  for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
      puVar13 = (uint64_t *)puVar13[6]) {
    pcVar14 = (char *)*puVar13;
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)0x180d48d24;
      pcVar8 = pcVar15;
    }
    else {
      pcVar8 = (char *)puVar13[2];
    }
    if (pcVar8 == pcVar7 + -0x180a0ae27) {
      pcVar8 = pcVar14 + (longlong)pcVar8;
      if (pcVar8 <= pcVar14) {
LAB_18053ab43:
        lVar10 = 0x180d48d24;
        if (puVar13[1] != 0) {
          lVar10 = puVar13[1];
        }
        (**(code **)(*param_1 + 0x10))(param_1,lVar10);
        break;
      }
      lVar10 = (longlong)&unknown_var_1288_ptr - (longlong)pcVar14;
      while (*pcVar14 == pcVar14[lVar10]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar8 <= pcVar14) goto LAB_18053ab43;
      }
    }
  }
  pcVar14 = "base_set";
  do {
    pcVar7 = pcVar14;
    pcVar14 = pcVar7 + 1;
  } while (*pcVar14 != '\0');
  puVar13 = *(uint64_t **)(param_2 + 0x40);
LAB_18053ab81:
  if (puVar13 == (uint64_t *)0x0) goto LAB_18053aca8;
  pcVar14 = (char *)*puVar13;
  if (pcVar14 == (char *)0x0) {
    pcVar14 = (char *)0x180d48d24;
    pcVar8 = pcVar15;
  }
  else {
    pcVar8 = (char *)puVar13[2];
  }
  if (pcVar8 == pcVar7 + -0x180a2f62f) {
    pcVar8 = pcVar8 + (longlong)pcVar14;
    if (pcVar8 <= pcVar14) {
LAB_18053abd4:
      lVar10 = 0x180d48d24;
      if (puVar13[1] != 0) {
        lVar10 = puVar13[1];
      }
      puStack_108 = &unknown_var_3480_ptr;
      puStack_100 = auStack_f0;
      auStack_f0[0] = 0;
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(lVar10 + lVar4) != '\0');
      iStack_f8 = (int)lVar4;
      strcpy_s(auStack_f0,0x40);
      iVar1 = FUN_18053a5e0(&system_counter_5f30,&puStack_108);
      lVar10 = (longlong)iVar1 * 0xe0 + render_system_memory;
      puStack_108 = &unknown_var_720_ptr;
      param_1[0xb] = *(longlong *)(lVar10 + 0x58);
      *(int32_t *)(param_1 + 0xc) = *(int32_t *)(lVar10 + 0x60);
      iVar1 = (int)(param_1[0x10] - param_1[0xf] >> 3);
      pcVar14 = pcVar15;
      if (0 < iVar1) {
        do {
          iStack_184 = *(int *)(*(longlong *)(lVar10 + 0x78) + 4 + (longlong)pcVar14 * 8);
          iStack_188 = *(int *)(*(longlong *)(lVar10 + 0x78) + (longlong)pcVar14 * 8);
          *(ulonglong *)(param_1[0xf] + (longlong)pcVar14 * 8) = CONCAT44(iStack_184,iStack_188);
          pcVar14 = pcVar14 + 1;
        } while ((longlong)pcVar14 < (longlong)iVar1);
      }
LAB_18053aca8:
      puStack_140 = &unknown_var_3456_ptr;
      uStack_128 = 0;
      lStack_138 = 0;
      iStack_130 = 0;
      pcVar14 = "skeleton";
      do {
        pcVar7 = pcVar14;
        pcVar14 = pcVar7 + 1;
      } while (*pcVar14 != '\0');
      for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
          puVar13 = (uint64_t *)puVar13[6]) {
        pcVar14 = (char *)*puVar13;
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)0x180d48d24;
          pcVar8 = pcVar15;
        }
        else {
          pcVar8 = (char *)puVar13[2];
        }
        if (pcVar8 == pcVar7 + -0x180a19cb7) {
          pcVar8 = pcVar8 + (longlong)pcVar14;
          if (pcVar8 <= pcVar14) {
LAB_18053ad36:
            lVar10 = 0x180d48d24;
            if (puVar13[1] != 0) {
              lVar10 = puVar13[1];
            }
            FUN_180627c50(&puStack_140,lVar10);
            break;
          }
          lVar10 = (longlong)&unknown_var_2360_ptr - (longlong)pcVar14;
          while (*pcVar14 == pcVar14[lVar10]) {
            pcVar14 = pcVar14 + 1;
            if (pcVar8 <= pcVar14) goto LAB_18053ad36;
          }
        }
      }
      if (iStack_130 < 1) {
        if (param_1[0xb] == 0) {
          puVar12 = &system_buffer_ptr;
          if ((void *)param_1[1] != (void *)0x0) {
            puVar12 = (void *)param_1[1];
          }
          FUN_180626f80(&unknown_var_8136_ptr,puVar12);
        }
      }
      else {
        plVar5 = (longlong *)FUN_1800b3970();
        lVar10 = *plVar5;
        if ((longlong *)CONCAT44(iStack_184,iStack_188) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(iStack_184,iStack_188) + 0x38))();
        }
        param_1[0xb] = lVar10;
      }
      puStack_160 = &unknown_var_3456_ptr;
      uStack_148 = 0;
      puStack_158 = (void *)0x0;
      iStack_150 = 0;
      pcVar14 = "movement_system";
      do {
        pcVar7 = pcVar14;
        pcVar14 = pcVar7 + 1;
      } while (*pcVar14 != '\0');
      for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
          puVar13 = (uint64_t *)puVar13[6]) {
        pcVar14 = (char *)*puVar13;
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)0x180d48d24;
          pcVar8 = pcVar15;
        }
        else {
          pcVar8 = (char *)puVar13[2];
        }
        if (pcVar8 == pcVar7 + -0x180a33a5f) {
          pcVar8 = pcVar8 + (longlong)pcVar14;
          if (pcVar8 <= pcVar14) {
LAB_18053ae33:
            lVar10 = 0x180d48d24;
            if (puVar13[1] != 0) {
              lVar10 = puVar13[1];
            }
            FUN_180627c50(&puStack_160,lVar10);
            break;
          }
          lVar10 = (longlong)&unknown_var_8256_ptr - (longlong)pcVar14;
          while (*pcVar14 == pcVar14[lVar10]) {
            pcVar14 = pcVar14 + 1;
            if (pcVar8 <= pcVar14) goto LAB_18053ae33;
          }
        }
      }
      puVar12 = puStack_158;
      pcVar14 = pcVar15;
      if (iStack_150 == 7) {
        do {
          pcVar7 = pcVar14 + 1;
          if (pcVar14[(longlong)puStack_158] != pcVar14[0x180a33a58]) goto LAB_18053aeb4;
          pcVar14 = pcVar7;
        } while (pcVar7 != &system_counter_0008);
        *(int32_t *)(param_1 + 0xc) = 0;
      }
      else {
        if ((iStack_150 != 0xb) || (iVar1 = strcmp(puStack_158,&unknown_var_8080_ptr), iVar1 != 0))
        goto LAB_18053aeb4;
        *(int32_t *)(param_1 + 0xc) = 1;
      }
      goto LAB_18053aed5;
    }
    lVar10 = (longlong)&unknown_var_800_ptr - (longlong)pcVar14;
    while (*pcVar14 == pcVar14[lVar10]) {
      pcVar14 = pcVar14 + 1;
      if (pcVar8 <= pcVar14) goto LAB_18053abd4;
    }
  }
  puVar13 = (uint64_t *)puVar13[6];
  goto LAB_18053ab81;
LAB_18053aeb4:
  if ((int)param_1[0xc] == -1) {
    puVar11 = &system_buffer_ptr;
    if (puVar12 != (void *)0x0) {
      puVar11 = puVar12;
    }
    FUN_180626f80(&unknown_var_8040_ptr,puVar11);
  }
LAB_18053aed5:
  pcVar14 = "action";
  do {
    pcVar7 = pcVar14;
    pcVar14 = pcVar7 + 1;
  } while (*pcVar14 != '\0');
  for (pcVar14 = *(char **)(param_2 + 0x30); pcVar14 != (char *)0x0;
      pcVar14 = *(char **)(pcVar14 + 0x58)) {
    pcVar8 = *(char **)pcVar14;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar6 = pcVar15;
    }
    else {
      pcVar6 = *(char **)(pcVar14 + 0x10);
    }
    if (pcVar6 == pcVar7 + -0x180a339df) {
      pcVar6 = pcVar8 + (longlong)pcVar6;
      if (pcVar6 <= pcVar8) {
LAB_18053af50:
        do {
          puStack_180 = &unknown_var_3456_ptr;
          uStack_168 = 0;
          puStack_178 = (void *)0x0;
          uStack_170 = 0;
          pcVar7 = "type";
          do {
            pcVar8 = pcVar7;
            pcVar7 = pcVar8 + 1;
          } while (*pcVar7 != '\0');
          for (puVar13 = *(uint64_t **)(pcVar14 + 0x40); puVar13 != (uint64_t *)0x0;
              puVar13 = (uint64_t *)puVar13[6]) {
            pcVar7 = (char *)*puVar13;
            if (pcVar7 == (char *)0x0) {
              pcVar7 = (char *)0x180d48d24;
              pcVar6 = pcVar15;
            }
            else {
              pcVar6 = (char *)puVar13[2];
            }
            if (pcVar6 == pcVar8 + -0x180a0ee2f) {
              pcVar6 = pcVar7 + (longlong)pcVar6;
              if (pcVar6 <= pcVar7) {
LAB_18053afe4:
                lVar10 = 0x180d48d24;
                if (puVar13[1] != 0) {
                  lVar10 = puVar13[1];
                }
                FUN_180627c50(&puStack_180,lVar10);
                break;
              }
              lVar10 = (longlong)&unknown_var_7680_ptr - (longlong)pcVar7;
              while (*pcVar7 == pcVar7[lVar10]) {
                pcVar7 = pcVar7 + 1;
                if (pcVar6 <= pcVar7) goto LAB_18053afe4;
              }
            }
          }
          iVar1 = FUN_18055b2f0(&system_counter_6150,&puStack_180);
          if (iVar1 == -1) {
            puVar12 = &system_buffer_ptr;
            if (puStack_178 != (void *)0x0) {
              puVar12 = puStack_178;
            }
            FUN_180626f80(&unknown_var_8688_ptr,puVar12);
LAB_18053b2bb:
            puStack_180 = &unknown_var_3456_ptr;
            if (puStack_178 != (void *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
          }
          else {
            puStack_a8 = &unknown_var_3480_ptr;
            puStack_a0 = auStack_90;
            iStack_98 = 0;
            auStack_90[0] = 0;
            pcVar7 = "animation";
            do {
              pcVar8 = pcVar7;
              pcVar7 = pcVar8 + 1;
            } while (*pcVar7 != '\0');
            for (puVar13 = *(uint64_t **)(pcVar14 + 0x40); puVar13 != (uint64_t *)0x0;
                puVar13 = (uint64_t *)puVar13[6]) {
              pcVar7 = (char *)*puVar13;
              if (pcVar7 == (char *)0x0) {
                pcVar7 = (char *)0x180d48d24;
                pcVar6 = pcVar15;
              }
              else {
                pcVar6 = (char *)puVar13[2];
              }
              if (pcVar6 == pcVar8 + -0x180a2c967) {
                pcVar6 = pcVar6 + (longlong)pcVar7;
                if (pcVar6 <= pcVar7) {
LAB_18053b0b5:
                  lVar10 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar10 = puVar13[1];
                  }
                  FUN_180049bf0(&puStack_a8,lVar10);
                  break;
                }
                lVar10 = (longlong)&unknown_var_9336_ptr - (longlong)pcVar7;
                while (*pcVar7 == pcVar7[lVar10]) {
                  pcVar7 = pcVar7 + 1;
                  if (pcVar6 <= pcVar7) goto LAB_18053b0b5;
                }
              }
            }
            if ((0 < iStack_98) && (iVar2 = FUN_18053a2e0(&system_counter_5f30,&puStack_a8), iVar2 != -1))
            {
              puStack_108 = &unknown_var_3480_ptr;
              puStack_100 = auStack_f0;
              iStack_f8 = 0;
              auStack_f0[0] = 0;
              pcVar7 = "alternative_group";
              do {
                pcVar8 = pcVar7;
                pcVar7 = pcVar8 + 1;
              } while (*pcVar7 != '\0');
              for (puVar13 = *(uint64_t **)(pcVar14 + 0x40); puVar13 != (uint64_t *)0x0;
                  puVar13 = (uint64_t *)puVar13[6]) {
                pcVar7 = (char *)*puVar13;
                if (pcVar7 == (char *)0x0) {
                  pcVar7 = (char *)0x180d48d24;
                  pcVar6 = pcVar15;
                }
                else {
                  pcVar6 = (char *)puVar13[2];
                }
                if (pcVar6 == pcVar8 + -0x180a33c8f) {
                  pcVar6 = pcVar7 + (longlong)pcVar6;
                  if (pcVar6 <= pcVar7) {
LAB_18053b194:
                    lVar10 = 0x180d48d24;
                    if (puVar13[1] != 0) {
                      lVar10 = puVar13[1];
                    }
                    FUN_180049bf0(&puStack_108,lVar10);
                    break;
                  }
                  lVar10 = (longlong)&unknown_var_8816_ptr - (longlong)pcVar7;
                  while (*pcVar7 == pcVar7[lVar10]) {
                    pcVar7 = pcVar7 + 1;
                    if (pcVar6 <= pcVar7) goto LAB_18053b194;
                  }
                }
              }
              iVar3 = -1;
              if ((iStack_f8 != 0) && (iVar3 = FUN_180371910(param_3,&puStack_108), iVar3 == -1)) {
                iVar3 = (int)((param_3[1] - *param_3) / 0x58);
                FUN_1800b8370(param_3,&puStack_108);
              }
              *(ulonglong *)(param_1[0xf] + (longlong)iVar1 * 8) = CONCAT44(iVar3,iVar2);
              puStack_108 = &unknown_var_720_ptr;
              puStack_a8 = &unknown_var_720_ptr;
              iStack_188 = iVar2;
              iStack_184 = iVar3;
              goto LAB_18053b2bb;
            }
            puVar12 = &system_buffer_ptr;
            if (puStack_a0 != (void *)0x0) {
              puVar12 = puStack_a0;
            }
            FUN_180626f80(&unknown_var_8096_ptr,puVar12);
            puStack_a8 = &unknown_var_720_ptr;
            puStack_180 = &unknown_var_3456_ptr;
            if (puStack_178 != (void *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
          }
          uStack_168 = uStack_168 & 0xffffffff00000000;
          puStack_178 = (void *)0x0;
          puStack_180 = &unknown_var_720_ptr;
          pcVar7 = "action";
          do {
            pcVar8 = pcVar7;
            pcVar7 = pcVar8 + 1;
          } while (*pcVar7 != '\0');
          for (pcVar7 = *(char **)(pcVar14 + 0x58); pcVar14 = pcVar15, pcVar7 != (char *)0x0;
              pcVar7 = *(char **)(pcVar7 + 0x58)) {
            pcVar6 = *(char **)pcVar7;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = (char *)0x180d48d24;
              pcVar9 = pcVar15;
            }
            else {
              pcVar9 = *(char **)(pcVar7 + 0x10);
            }
            if (pcVar9 == pcVar8 + -0x180a339df) {
              pcVar9 = pcVar9 + (longlong)pcVar6;
              pcVar14 = pcVar7;
              if (pcVar9 <= pcVar6) break;
              lVar10 = (longlong)&unknown_var_8128_ptr - (longlong)pcVar6;
              while (*pcVar6 == pcVar6[lVar10]) {
                pcVar6 = pcVar6 + 1;
                if (pcVar9 <= pcVar6) goto LAB_18053b356;
              }
            }
          }
LAB_18053b356:
        } while (pcVar14 != (char *)0x0);
        break;
      }
      lVar10 = (longlong)&unknown_var_8128_ptr - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar10]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar6 <= pcVar8) goto LAB_18053af50;
      }
    }
  }
  puStack_160 = &unknown_var_3456_ptr;
  if (puStack_158 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_158 = (void *)0x0;
  uStack_148 = uStack_148 & 0xffffffff00000000;
  puStack_160 = &unknown_var_720_ptr;
  puStack_140 = &unknown_var_3456_ptr;
  if (lStack_138 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_138 = 0;
  uStack_128 = uStack_128 & 0xffffffff00000000;
  puStack_140 = &unknown_var_720_ptr;
  goto LAB_18053b3c0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053b400(longlong param_1,int param_2,longlong param_3,longlong param_4)
void FUN_18053b400(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar7 = *(ulonglong *)(param_1 + 0xa0);
  uVar3 = *(ulonglong *)(param_1 + 0x98);
  uVar6 = (ulonglong)(param_2 + 1);
  uVar11 = (longlong)(uVar7 - uVar3) >> 3;
  uVar8 = 0;
  if (uVar11 < uVar6) {
    uVar9 = uVar6 - uVar11;
    if ((ulonglong)((longlong)(*(longlong *)(param_1 + 0xa8) - uVar7) >> 3) < uVar9) {
      uVar13 = uVar11 * 2;
      if (uVar11 == 0) {
        uVar13 = 1;
      }
      if (uVar13 < uVar6) {
        uVar13 = uVar6;
      }
      uVar6 = uVar8;
      uVar12 = uVar7;
      if (uVar13 != 0) {
        uVar6 = FUN_18062b420(system_memory_pool_ptr,uVar13 * 8,*(int8_t *)(param_1 + 0xb0));
        uVar3 = *(ulonglong *)(param_1 + 0x98);
        uVar12 = *(ulonglong *)(param_1 + 0xa0);
      }
      uVar7 = uVar6;
      if (uVar3 != uVar12) {
                    // WARNING: Subroutine does not return
        memmove(uVar7,uVar3,uVar12 - uVar3);
      }
      if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
        memset(uVar7,0,uVar9 * 8);
      }
      if (*(longlong *)(param_1 + 0x98) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(ulonglong *)(param_1 + 0x98) = uVar7;
      *(ulonglong *)(param_1 + 0xa8) = uVar7 + uVar13 * 8;
    }
    else if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
      memset(uVar7,0,uVar9 * 8);
    }
  }
  else {
    uVar7 = uVar3 + uVar6 * 8;
  }
  *(ulonglong *)(param_1 + 0xa0) = uVar7;
  if ((ulonglong)(longlong)(int)uVar11 <
      (ulonglong)((longlong)(uVar7 - *(longlong *)(param_1 + 0x98)) >> 3)) {
    lVar2 = (longlong)(int)uVar11 * 8;
    do {
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      *(uint64_t *)(lVar2 + *(longlong *)(param_1 + 0x98)) = 0;
      lVar2 = lVar2 + 8;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98) >> 3));
  }
  plVar1 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,8,8,3);
  lVar2 = FUN_18062b420(system_memory_pool_ptr,0x2a0,3);
  puVar4 = (uint64_t *)(lVar2 + 8);
  uVar7 = uVar8;
  do {
    puVar4[-1] = 0;
    uVar10 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar10;
    puVar4[5] = 0;
    *puVar4 = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    puVar4[7] = 0;
    puVar4[2] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[9] = 0;
    puVar4[4] = 0;
    puVar4[10] = 0;
    puVar4 = puVar4 + 0xc;
  } while (uVar10 < 7);
  *plVar1 = lVar2;
  param_3 = param_3 - param_4;
  *(longlong **)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x98)) = plVar1;
  plVar1 = *(longlong **)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x98));
  puVar4 = (uint64_t *)(param_4 + 8);
  do {
    puVar5 = (uint64_t *)(*plVar1 + uVar8);
    uVar8 = uVar8 + 0x60;
    *puVar5 = *(uint64_t *)((longlong)puVar4 + param_3 + -8);
    puVar5[6] = puVar4[-1];
    puVar5[1] = *(uint64_t *)((longlong)puVar4 + param_3);
    puVar5[7] = *puVar4;
    puVar5[2] = *(uint64_t *)((longlong)puVar4 + param_3 + 8);
    puVar5[8] = puVar4[1];
    puVar5[3] = *(uint64_t *)((longlong)puVar4 + param_3 + 0x10);
    puVar5[9] = puVar4[2];
    puVar5[4] = *(uint64_t *)((longlong)puVar4 + param_3 + 0x18);
    puVar5[10] = puVar4[3];
    puVar5[5] = *(uint64_t *)((longlong)puVar4 + param_3 + 0x20);
    puVar5[0xb] = puVar4[4];
    puVar4 = puVar4 + 6;
  } while ((longlong)uVar8 < 0x2a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053b6e0(longlong param_1)
void FUN_18053b6e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ulonglong uStackX_18;
  uint64_t *puStackX_20;
  int8_t auStack_78 [8];
  void *puStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  
  uVar14 = 0;
  uStack_58 = 0x3f800000;
  uStack_54 = 0x40000000;
  uStack_4c = 3;
  uStack_68 = 1;
  puStack_70 = &system_counter_0000;
  uStack_60 = 0;
  uStack_50 = 0;
  iVar17 = (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3);
  uVar11 = uVar14;
  if (0 < iVar17) {
    do {
      lVar13 = *(longlong *)(param_1 + 0x78);
      iVar12 = *(int *)(lVar13 + 4 + uVar14 * 8);
      iVar16 = (int)uVar11;
      if (iVar12 != -1) {
        for (piVar6 = *(int **)(puStack_70 +
                               ((ulonglong)(longlong)iVar12 % (uStack_68 & 0xffffffff)) * 8);
            piVar6 != (int *)0x0; piVar6 = *(int **)(piVar6 + 2)) {
          if (iVar12 == *piVar6) goto LAB_18053b7c3;
        }
        piVar6 = *(int **)(puStack_70 + uStack_68 * 8);
LAB_18053b7c3:
        if (piVar6 == *(int **)(puStack_70 + uStack_68 * 8)) {
          puVar4 = *(uint64_t **)(param_1 + 0xc0);
          iVar12 = (int)((longlong)puVar4 - *(longlong *)(param_1 + 0xb8) >> 5);
          if (puVar4 < *(uint64_t **)(param_1 + 200)) {
            puVar4[3] = 0;
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            *(int32_t *)(puVar4 + 3) = 3;
            *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 0x20;
            puStackX_20 = puVar4;
          }
          else {
            FUN_18053e550();
          }
          iVar2 = *(int *)(lVar13 + 4 + uVar14 * 8);
          uVar11 = (ulonglong)(longlong)iVar2 % (uStack_68 & 0xffffffff);
          for (piVar6 = *(int **)(puStack_70 + uVar11 * 8); piVar6 != (int *)0x0;
              piVar6 = *(int **)(piVar6 + 2)) {
            if (iVar2 == *piVar6) {
              if (piVar6 != (int *)0x0) goto LAB_18053b8cf;
              break;
            }
          }
          FUN_18066c220(&uStack_58,&uStackX_18,uStack_68 & 0xffffffff,uStack_60 & 0xffffffff,1);
          piVar6 = (int *)FUN_18062b420(system_memory_pool_ptr,0x10,(int8_t)uStack_4c);
          *piVar6 = *(int *)(lVar13 + 4 + uVar14 * 8);
          piVar6[1] = 0;
          piVar6[2] = 0;
          piVar6[3] = 0;
          if ((char)uStackX_18 != '\0') {
            uVar11 = (ulonglong)(longlong)iVar2 % (uStackX_18 >> 0x20);
            FUN_18053e470(auStack_78);
          }
          *(uint64_t *)(piVar6 + 2) = *(uint64_t *)(puStack_70 + uVar11 * 8);
          *(int **)(puStack_70 + uVar11 * 8) = piVar6;
          uStack_60 = uStack_60 + 1;
LAB_18053b8cf:
          piVar6[1] = iVar12;
        }
        else {
          iVar12 = piVar6[1];
        }
        piVar7 = (int *)0x0;
        *(int *)(lVar13 + 4 + uVar14 * 8) = iVar12;
        lVar10 = (longlong)iVar12 * 0x20;
        lVar13 = *(longlong *)(param_1 + 0xb8);
        piVar6 = *(int **)(lVar10 + 8 + lVar13);
        if (piVar6 < *(int **)(lVar10 + 0x10 + lVar13)) {
          *(int **)(lVar10 + 8 + lVar13) = piVar6 + 1;
          *piVar6 = iVar16;
        }
        else {
          piVar9 = *(int **)(lVar10 + lVar13);
          lVar15 = (longlong)piVar6 - (longlong)piVar9 >> 2;
          if (lVar15 == 0) {
            lVar15 = 1;
LAB_18053b930:
            piVar7 = (int *)FUN_18062b420(system_memory_pool_ptr,lVar15 * 4,
                                          *(int8_t *)(lVar10 + 0x18 + lVar13));
            piVar6 = *(int **)(lVar10 + 8 + lVar13);
            piVar9 = *(int **)(lVar10 + lVar13);
          }
          else {
            lVar15 = lVar15 * 2;
            if (lVar15 != 0) goto LAB_18053b930;
          }
          if (piVar9 != piVar6) {
                    // WARNING: Subroutine does not return
            memmove(piVar7,piVar9,(longlong)piVar6 - (longlong)piVar9);
          }
          *piVar7 = iVar16;
          if (*(longlong *)(lVar10 + lVar13) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(int **)(lVar10 + lVar13) = piVar7;
          *(int **)(lVar10 + 8 + lVar13) = piVar7 + 1;
          *(int **)(lVar10 + 0x10 + lVar13) = piVar7 + lVar15;
        }
      }
      uVar14 = uVar14 + 1;
      uVar11 = (ulonglong)(iVar16 + 1);
    } while ((longlong)uVar14 < (longlong)iVar17);
  }
  FUN_18053d8f0((longlong *)(param_1 + 0xb8));
  iVar17 = 0;
  lVar13 = *(longlong *)(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xc0) - lVar13 >> 5 != 0) {
    lVar10 = 0;
    do {
      piVar6 = *(int **)(lVar13 + 8 + lVar10);
      piVar7 = *(int **)(lVar13 + lVar10);
      if (((longlong)piVar6 - (longlong)piVar7 & 0xfffffffffffffffcU) == 4) {
        *(int32_t *)(*(longlong *)(param_1 + 0x78) + 4 + (longlong)*piVar7 * 8) = 0xffffffff;
        plVar1 = (longlong *)(lVar13 + 8 + lVar10);
        *plVar1 = *plVar1 + -4;
        piVar6 = *(int **)(lVar13 + 8 + lVar10);
        piVar7 = *(int **)(lVar13 + lVar10);
      }
      uVar3 = *(uint *)(lVar13 + 0x18 + lVar10);
      uStackX_18 = (longlong)piVar6 - (longlong)piVar7;
      lVar15 = (longlong)uStackX_18 >> 2;
      if (lVar15 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = FUN_18062b420(system_memory_pool_ptr,lVar15 * 4,uVar3 & 0xff);
      }
      lVar15 = lVar8 + lVar15 * 4;
      if (piVar7 != piVar6) {
                    // WARNING: Subroutine does not return
        memmove(lVar8,piVar7,uStackX_18);
      }
      lVar5 = *(longlong *)(lVar13 + lVar10);
      *(longlong *)(lVar13 + lVar10) = lVar8;
      *(longlong *)(lVar13 + 8 + lVar10) = lVar15;
      *(longlong *)(lVar13 + 0x10 + lVar10) = lVar15;
      *(uint *)(lVar13 + 0x18 + lVar10) = uVar3;
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      iVar17 = iVar17 + 1;
      lVar10 = lVar10 + 0x20;
      lVar13 = *(longlong *)(param_1 + 0xb8);
    } while ((ulonglong)(longlong)iVar17 < (ulonglong)(*(longlong *)(param_1 + 0xc0) - lVar13 >> 5))
    ;
  }
  FUN_180057790(auStack_78);
  return;
}





// 函数: void FUN_18053bb30(longlong param_1)
void FUN_18053bb30(longlong param_1)

{
  longlong *plVar1;
  longlong alStack_50 [2];
  code *pcStack_40;
  void *puStack_38;
  longlong alStack_30 [2];
  code *pcStack_20;
  void *puStack_18;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 0x88);
  pcStack_20 = (code *)&unknown_var_1936_ptr;
  puStack_18 = &unknown_var_1888_ptr;
  pcStack_40 = (code *)&unknown_var_2016_ptr;
  puStack_38 = &unknown_var_2000_ptr;
  alStack_50[0] = param_1;
  alStack_30[0] = param_1;
  (**(code **)(*plVar1 + 0x70))
            (plVar1,&system_counter_d590,*(longlong *)(param_1 + 0x200) + 0xc,0,alStack_50,alStack_30,
             0xfffffffffffffffe);
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(alStack_50,0,0);
  }
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(alStack_30,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18053bc10(longlong *param_1,uint64_t param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  longlong **pplVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  longlong **applStackX_8 [2];
  longlong *aplStackX_18 [2];
  longlong alStack_48 [2];
  uint64_t *puStack_38;
  uint64_t *puStack_30;
  longlong lStack_28;
  
  alStack_48[1] = 0xfffffffffffffffe;
  lVar1 = *param_1;
  pplVar5 = render_system_data_memory;
  aplStackX_18[0] = param_3;
  if (render_system_data_memory == (longlong **)0x0) {
    QueryPerformanceCounter(applStackX_8);
    pplVar5 = applStackX_8[0];
  }
  *(int *)(lVar1 + 0x84) =
       (int)((double)((longlong)pplVar5 - render_system_data_memory) * render_system_data_memory * 100.0);
  puVar6 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x60,0x10,3);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(int32_t *)(puVar6 + 3) = 4;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(int32_t *)(puVar6 + 6) = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(int32_t *)(puVar6 + 9) = 0;
  *(uint64_t *)((longlong)puVar6 + 0x4c) = 0xffffffffffffffff;
  *(int32_t *)((longlong)puVar6 + 0x54) = 0;
  puStack_38 = puVar6;
  puStack_30 = puVar6;
  FUN_180562920(puVar6,param_2);
  lVar2 = *param_1;
  *(uint64_t **)(lVar2 + 0x88) = puVar6;
  *(int32_t *)(lVar2 + 0x80) = *(int32_t *)((longlong)puVar6 + 0x54);
  *(int8_t *)(lVar2 + 0xdc) = 1;
  lVar1 = lVar2 + 0x130;
  lStack_28 = lVar1;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  *(int8_t *)(lVar2 + 0x180) = 1;
  iVar4 = _Cnd_broadcast(lVar2 + 0xe8);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  *(int32_t *)(lVar2 + 0xe0) = 2;
  alStack_48[0] = lVar2;
  FUN_180405950(0x180c919f0,alStack_48);
  uVar7 = _Cnd_signal(0x180c91c58);
  if ((int)uVar7 != 0) {
    uVar7 = __Throw_C_error_std__YAXH_Z(uVar7 & 0xffffffff);
  }
  uVar3 = system_context_ptr;
  LOCK();
  iVar4 = render_system_memory + *(int *)(lVar2 + 0x80);
  UNLOCK();
  iVar8 = render_system_memory + *(int *)(lVar2 + 0x80);
  render_system_memory = iVar4;
  if (0xf00000 < iVar8) {
    uVar7 = 0;
    LOCK();
    bVar9 = system_counter_1d14 == 0;
    if (bVar9) {



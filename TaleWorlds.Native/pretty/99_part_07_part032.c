#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part032.c - 2 个函数

// 函数: void FUN_1804b9540(longlong param_1,longlong param_2)
void FUN_1804b9540(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  char *pcVar9;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  char *pcVar10;
  
  pcVar9 = "tattoo_color_gradient_points";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  puVar8 = *(uint64_t **)(param_2 + 0x30);
  if (puVar8 != (uint64_t *)0x0) {
LAB_1804b9583:
    pcVar9 = (char *)*puVar8;
    if (pcVar9 == (char *)0x0) {
      pcVar11 = (char *)0x0;
      pcVar9 = (char *)0x180d48d24;
    }
    else {
      pcVar11 = (char *)puVar8[2];
    }
    if (pcVar11 != pcVar10 + -0x180a2e8af) goto LAB_1804b95fe;
    pcVar11 = pcVar9 + (longlong)pcVar11;
    if (pcVar9 < pcVar11) {
      lVar3 = (longlong)&unknown_var_7344_ptr - (longlong)pcVar9;
      while (*pcVar9 == pcVar9[lVar3]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar11 <= pcVar9) goto LAB_1804b95c0;
      }
      goto LAB_1804b95fe;
    }
LAB_1804b95c0:
    pcVar9 = "tattoo_color_gradient_point";
    do {
      pcVar10 = pcVar9;
      pcVar9 = pcVar10 + 1;
    } while (*pcVar9 != '\0');
    for (puVar4 = (uint64_t *)puVar8[6]; puVar4 != (uint64_t *)0x0;
        puVar4 = (uint64_t *)puVar4[0xb]) {
      pcVar9 = (char *)*puVar4;
      if (pcVar9 == (char *)0x0) {
        pcVar11 = (char *)0x0;
        pcVar9 = (char *)0x180d48d24;
      }
      else {
        pcVar11 = (char *)puVar4[2];
      }
      if (pcVar11 == pcVar10 + -0x180a2e8ff) {
        pcVar11 = pcVar11 + (longlong)pcVar9;
        if (pcVar11 <= pcVar9) {
LAB_1804b9641:
          iVar12 = 0;
LAB_1804b9650:
          iVar12 = iVar12 + 1;
          pcVar9 = "tattoo_color_gradient_point";
          do {
            pcVar10 = pcVar9;
            pcVar9 = pcVar10 + 1;
          } while (*pcVar9 != '\0');
          puVar4 = (uint64_t *)puVar4[0xb];
          if (puVar4 != (uint64_t *)0x0) {
            do {
              pcVar9 = (char *)*puVar4;
              if (pcVar9 == (char *)0x0) {
                pcVar11 = (char *)0x0;
                pcVar9 = (char *)0x180d48d24;
              }
              else {
                pcVar11 = (char *)puVar4[2];
              }
              if (pcVar11 == pcVar10 + -0x180a2e8ff) {
                pcVar11 = pcVar9 + (longlong)pcVar11;
                if (pcVar11 <= pcVar9) goto LAB_1804b9650;
                lVar3 = (longlong)&unknown_var_7424_ptr - (longlong)pcVar9;
                while (*pcVar9 == pcVar9[lVar3]) {
                  pcVar9 = pcVar9 + 1;
                  if (pcVar11 <= pcVar9) goto LAB_1804b9650;
                }
              }
              puVar4 = (uint64_t *)puVar4[0xb];
              if (puVar4 == (uint64_t *)0x0) break;
            } while( true );
          }
          goto LAB_1804b9695;
        }
        lVar3 = (longlong)&unknown_var_7424_ptr - (longlong)pcVar9;
        while (*pcVar9 == pcVar9[lVar3]) {
          pcVar9 = pcVar9 + 1;
          if (pcVar11 <= pcVar9) goto LAB_1804b9641;
        }
      }
    }
    iVar12 = 0;
LAB_1804b9695:
    *(int *)(param_1 + 0x5c4) = iVar12;
    if (iVar12 != 0) {
      lVar3 = puVar8[6];
      iVar5 = 0;
      if (0 < iVar12) {
        do {
          FUN_180631960(lVar3,&system_data_be48,param_1 + 0x3c4 + (longlong)iVar5 * 0x10);
          lVar3 = *(longlong *)(lVar3 + 0x58);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x5c4));
      }
    }
  }
LAB_1804b96df:
  pcVar9 = "skin_color_gradient_points";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  puVar8 = *(uint64_t **)(param_2 + 0x30);
  if (puVar8 != (uint64_t *)0x0) {
LAB_1804b9710:
    pcVar9 = (char *)*puVar8;
    if (pcVar9 == (char *)0x0) {
      pcVar11 = (char *)0x0;
      pcVar9 = (char *)0x180d48d24;
    }
    else {
      pcVar11 = (char *)puVar8[2];
    }
    if (pcVar11 != pcVar10 + -0x180a2e8df) goto LAB_1804b97ce;
    pcVar11 = pcVar9 + (longlong)pcVar11;
    if (pcVar9 < pcVar11) {
      lVar3 = (longlong)&unknown_var_7392_ptr - (longlong)pcVar9;
      while (*pcVar9 == pcVar9[lVar3]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar11 <= pcVar9) goto LAB_1804b9791;
      }
      goto LAB_1804b97ce;
    }
LAB_1804b9791:
    pcVar9 = "skin_color_gradient_point";
    do {
      pcVar10 = pcVar9;
      pcVar9 = pcVar10 + 1;
    } while (*pcVar9 != '\0');
    for (puVar4 = (uint64_t *)puVar8[6]; puVar4 != (uint64_t *)0x0;
        puVar4 = (uint64_t *)puVar4[0xb]) {
      pcVar9 = (char *)*puVar4;
      if (pcVar9 == (char *)0x0) {
        pcVar1 = (char *)0x0;
        pcVar9 = (char *)0x180d48d24;
      }
      else {
        pcVar1 = (char *)puVar4[2];
      }
      if (pcVar1 == pcVar10 + -0x180a2e84f) {
        pcVar1 = pcVar1 + (longlong)pcVar9;
        if (pcVar1 <= pcVar9) {
LAB_1804b9811:
          uVar7 = 0;
LAB_1804b9820:
          uVar7 = (ulonglong)((int)uVar7 + 1);
          pcVar9 = "skin_color_gradient_point";
          do {
            pcVar10 = pcVar9;
            pcVar9 = pcVar10 + 1;
          } while (*pcVar9 != '\0');
          puVar4 = (uint64_t *)puVar4[0xb];
          if (puVar4 != (uint64_t *)0x0) {
            do {
              pcVar9 = (char *)*puVar4;
              if (pcVar9 == (char *)0x0) {
                pcVar1 = (char *)0x0;
                pcVar9 = (char *)0x180d48d24;
              }
              else {
                pcVar1 = (char *)puVar4[2];
              }
              if (pcVar1 == pcVar10 + -0x180a2e84f) {
                pcVar1 = pcVar1 + (longlong)pcVar9;
                if (pcVar1 <= pcVar9) goto LAB_1804b9820;
                pcVar11 = &unknown_var_7248_ptr + -(longlong)pcVar9;
                while (*pcVar9 == pcVar11[(longlong)pcVar9]) {
                  pcVar9 = pcVar9 + 1;
                  if (pcVar1 <= pcVar9) goto LAB_1804b9820;
                }
              }
              puVar4 = (uint64_t *)puVar4[0xb];
              if (puVar4 == (uint64_t *)0x0) break;
            } while( true );
          }
          goto LAB_1804b985d;
        }
        pcVar11 = &unknown_var_7248_ptr + -(longlong)pcVar9;
        while (*pcVar9 == pcVar11[(longlong)pcVar9]) {
          pcVar9 = pcVar9 + 1;
          if (pcVar1 <= pcVar9) goto LAB_1804b9811;
        }
      }
    }
    uVar7 = 0;
LAB_1804b985d:
    iVar12 = (int)uVar7;
    *(int *)(param_1 + 0x5d0) = iVar12;
    lVar3 = puVar8[6];
    if (iVar12 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_18062b420(system_memory_pool_ptr,(longlong)iVar12 << 4,
                            CONCAT71((int7)((ulonglong)pcVar11 >> 8),0x12));
    }
    *(uint64_t *)(param_1 + 0x5c8) = uVar2;
    if (0 < iVar12) {
      lVar6 = 0;
      do {
        FUN_180631960(lVar3,&system_data_be48,*(longlong *)(param_1 + 0x5c8) + lVar6);
        lVar3 = *(longlong *)(lVar3 + 0x58);
        lVar6 = lVar6 + 0x10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
LAB_1804b98f8:
  pcVar9 = "eye_color_gradient_points";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  puVar8 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar8 == (uint64_t *)0x0) goto LAB_1804b9a50;
    pcVar9 = (char *)*puVar8;
    if (pcVar9 == (char *)0x0) {
      pcVar11 = (char *)0x0;
      pcVar9 = (char *)0x180d48d24;
    }
    else {
      pcVar11 = (char *)puVar8[2];
    }
    if (pcVar11 == pcVar10 + -0x180a2e82f) {
      pcVar11 = pcVar11 + (longlong)pcVar9;
      if (pcVar11 <= pcVar9) {
LAB_1804b9957:
        pcVar9 = "eye_color_gradient_point";
        do {
          pcVar10 = pcVar9;
          pcVar9 = pcVar10 + 1;
        } while (*pcVar9 != '\0');
        for (puVar4 = (uint64_t *)puVar8[6]; puVar4 != (uint64_t *)0x0;
            puVar4 = (uint64_t *)puVar4[0xb]) {
          pcVar9 = (char *)*puVar4;
          if (pcVar9 == (char *)0x0) {
            pcVar11 = (char *)0x0;
            pcVar9 = (char *)0x180d48d24;
          }
          else {
            pcVar11 = (char *)puVar4[2];
          }
          if (pcVar11 == pcVar10 + -0x180a2e88f) {
            pcVar11 = pcVar9 + (longlong)pcVar11;
            if (pcVar11 <= pcVar9) {
LAB_1804b99c6:
              uVar7 = 0;
LAB_1804b99d0:
              uVar13 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar13;
              pcVar9 = "eye_color_gradient_point";
              do {
                pcVar10 = pcVar9;
                pcVar9 = pcVar10 + 1;
              } while (*pcVar9 != '\0');
              puVar4 = (uint64_t *)puVar4[0xb];
              do {
                if (puVar4 == (uint64_t *)0x0) {
                  if (1 < (int)uVar13) {
                    *(uint *)(param_1 + 0x7d4) = uVar13;
                  }
                  goto LAB_1804b9a15;
                }
                pcVar9 = (char *)*puVar4;
                if (pcVar9 == (char *)0x0) {
                  pcVar11 = (char *)0x0;
                  pcVar9 = (char *)0x180d48d24;
                }
                else {
                  pcVar11 = (char *)puVar4[2];
                }
                if (pcVar11 == pcVar10 + -0x180a2e88f) {
                  pcVar11 = pcVar11 + (longlong)pcVar9;
                  if (pcVar11 <= pcVar9) goto LAB_1804b99d0;
                  lVar3 = (longlong)&unknown_var_7312_ptr - (longlong)pcVar9;
                  while (*pcVar9 == pcVar9[lVar3]) {
                    pcVar9 = pcVar9 + 1;
                    if (pcVar11 <= pcVar9) goto LAB_1804b99d0;
                  }
                }
                puVar4 = (uint64_t *)puVar4[0xb];
              } while( true );
            }
            lVar3 = (longlong)&unknown_var_7312_ptr - (longlong)pcVar9;
            while (*pcVar9 == pcVar9[lVar3]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar11 <= pcVar9) goto LAB_1804b99c6;
            }
          }
        }
        uVar7 = 0;
LAB_1804b9a15:
        lVar3 = puVar8[6];
        if (0 < (int)uVar7) {
          lVar6 = param_1 + 0x5d4;
          do {
            FUN_180631960(lVar3,&system_data_be48,lVar6);
            lVar3 = *(longlong *)(lVar3 + 0x58);
            lVar6 = lVar6 + 0x10;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
LAB_1804b9a50:
        pcVar9 = "hair_color_gradient_points";
        do {
          pcVar10 = pcVar9;
          pcVar9 = pcVar10 + 1;
        } while (*pcVar9 != '\0');
        puVar8 = *(uint64_t **)(param_2 + 0x30);
        do {
          if (puVar8 == (uint64_t *)0x0) {
            return;
          }
          pcVar9 = (char *)*puVar8;
          if (pcVar9 == (char *)0x0) {
            pcVar11 = (char *)0x0;
            pcVar9 = (char *)0x180d48d24;
          }
          else {
            pcVar11 = (char *)puVar8[2];
          }
          if (pcVar11 == pcVar10 + -0x180a2e86f) {
            pcVar11 = pcVar11 + (longlong)pcVar9;
            if (pcVar11 <= pcVar9) {
LAB_1804b9b12:
              pcVar9 = "hair_color_gradient_point";
              do {
                pcVar10 = pcVar9;
                pcVar9 = pcVar10 + 1;
              } while (*pcVar9 != '\0');
              puVar4 = (uint64_t *)puVar8[6];
              do {
                if (puVar4 == (uint64_t *)0x0) {
                  uVar13 = 0;
LAB_1804b9bde:
                  lVar3 = puVar8[6];
                  if (0 < (int)uVar13) {
                    param_1 = param_1 + 0x7d8;
                    uVar7 = (ulonglong)uVar13;
                    do {
                      FUN_180631960(lVar3,&system_data_be48,param_1);
                      lVar3 = *(longlong *)(lVar3 + 0x58);
                      param_1 = param_1 + 0x10;
                      uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                  }
                  return;
                }
                pcVar9 = (char *)*puVar4;
                if (pcVar9 == (char *)0x0) {
                  pcVar11 = (char *)0x0;
                  pcVar9 = (char *)0x180d48d24;
                }
                else {
                  pcVar11 = (char *)puVar4[2];
                }
                if (pcVar11 == pcVar10 + -0x180a2e98f) {
                  pcVar11 = pcVar11 + (longlong)pcVar9;
                  if (pcVar11 <= pcVar9) {
LAB_1804b9b91:
                    uVar13 = 0;
LAB_1804b9ba0:
                    uVar13 = uVar13 + 1;
                    pcVar9 = "hair_color_gradient_point";
                    do {
                      pcVar10 = pcVar9;
                      pcVar9 = pcVar10 + 1;
                    } while (*pcVar9 != '\0');
                    puVar4 = (uint64_t *)puVar4[0xb];
                    do {
                      if (puVar4 == (uint64_t *)0x0) {
                        if (1 < (int)uVar13) {
                          *(uint *)(param_1 + 0x9d8) = uVar13;
                        }
                        goto LAB_1804b9bde;
                      }
                      pcVar9 = (char *)*puVar4;
                      if (pcVar9 == (char *)0x0) {
                        pcVar11 = (char *)0x0;
                        pcVar9 = (char *)0x180d48d24;
                      }
                      else {
                        pcVar11 = (char *)puVar4[2];
                      }
                      if (pcVar11 == pcVar10 + -0x180a2e98f) {
                        pcVar11 = pcVar9 + (longlong)pcVar11;
                        if (pcVar11 <= pcVar9) goto LAB_1804b9ba0;
                        lVar3 = (longlong)&unknown_var_7568_ptr - (longlong)pcVar9;
                        while (*pcVar9 == pcVar9[lVar3]) {
                          pcVar9 = pcVar9 + 1;
                          if (pcVar11 <= pcVar9) goto LAB_1804b9ba0;
                        }
                      }
                      puVar4 = (uint64_t *)puVar4[0xb];
                    } while( true );
                  }
                  lVar3 = (longlong)&unknown_var_7568_ptr - (longlong)pcVar9;
                  while (*pcVar9 == pcVar9[lVar3]) {
                    pcVar9 = pcVar9 + 1;
                    if (pcVar11 <= pcVar9) goto LAB_1804b9b91;
                  }
                }
                puVar4 = (uint64_t *)puVar4[0xb];
              } while( true );
            }
            lVar3 = (longlong)&unknown_var_7280_ptr - (longlong)pcVar9;
            while (*pcVar9 == pcVar9[lVar3]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar11 <= pcVar9) goto LAB_1804b9b12;
            }
          }
          puVar8 = (uint64_t *)puVar8[0xb];
        } while( true );
      }
      lVar3 = (longlong)&unknown_var_7216_ptr - (longlong)pcVar9;
      while (*pcVar9 == pcVar9[lVar3]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar11 <= pcVar9) goto LAB_1804b9957;
      }
    }
    puVar8 = (uint64_t *)puVar8[0xb];
  } while( true );
LAB_1804b95fe:
  puVar8 = (uint64_t *)puVar8[0xb];
  if (puVar8 == (uint64_t *)0x0) goto LAB_1804b96df;
  goto LAB_1804b9583;
LAB_1804b97ce:
  puVar8 = (uint64_t *)puVar8[0xb];
  if (puVar8 == (uint64_t *)0x0) goto LAB_1804b98f8;
  goto LAB_1804b9710;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804b9555(longlong param_1,longlong param_2)
void FUN_1804b9555(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint64_t uVar2;
  char *pcVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *in_R10;
  int iVar12;
  uint uVar13;
  
  pcVar10 = in_R10;
  do {
    pcVar10 = pcVar10 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x30);
  if (puVar9 != (uint64_t *)0x0) {
LAB_1804b9583:
    pcVar3 = (char *)*puVar9;
    if (pcVar3 == (char *)0x0) {
      lVar4 = 0;
      pcVar3 = (char *)0x180d48d24;
    }
    else {
      lVar4 = puVar9[2];
    }
    if (lVar4 != (longlong)pcVar10 - (longlong)in_R10) goto LAB_1804b95fe;
    pcVar11 = pcVar3 + lVar4;
    if (pcVar3 < pcVar11) {
      lVar4 = (longlong)in_R10 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar11 <= pcVar3) goto LAB_1804b95c0;
      }
      goto LAB_1804b95fe;
    }
LAB_1804b95c0:
    pcVar10 = "tattoo_color_gradient_point";
    do {
      pcVar3 = pcVar10;
      pcVar10 = pcVar3 + 1;
    } while (*pcVar10 != '\0');
    for (puVar5 = (uint64_t *)puVar9[6]; puVar5 != (uint64_t *)0x0;
        puVar5 = (uint64_t *)puVar5[0xb]) {
      pcVar10 = (char *)*puVar5;
      if (pcVar10 == (char *)0x0) {
        pcVar11 = (char *)0x0;
        pcVar10 = (char *)0x180d48d24;
      }
      else {
        pcVar11 = (char *)puVar5[2];
      }
      if (pcVar11 == pcVar3 + -0x180a2e8ff) {
        pcVar11 = pcVar11 + (longlong)pcVar10;
        if (pcVar11 <= pcVar10) {
LAB_1804b9641:
          iVar12 = 0;
LAB_1804b9650:
          iVar12 = iVar12 + 1;
          pcVar10 = "tattoo_color_gradient_point";
          do {
            pcVar3 = pcVar10;
            pcVar10 = pcVar3 + 1;
          } while (*pcVar10 != '\0');
          puVar5 = (uint64_t *)puVar5[0xb];
          if (puVar5 != (uint64_t *)0x0) {
            do {
              pcVar10 = (char *)*puVar5;
              if (pcVar10 == (char *)0x0) {
                pcVar11 = (char *)0x0;
                pcVar10 = (char *)0x180d48d24;
              }
              else {
                pcVar11 = (char *)puVar5[2];
              }
              if (pcVar11 == pcVar3 + -0x180a2e8ff) {
                pcVar11 = pcVar10 + (longlong)pcVar11;
                if (pcVar11 <= pcVar10) goto LAB_1804b9650;
                lVar4 = (longlong)&unknown_var_7424_ptr - (longlong)pcVar10;
                while (*pcVar10 == pcVar10[lVar4]) {
                  pcVar10 = pcVar10 + 1;
                  if (pcVar11 <= pcVar10) goto LAB_1804b9650;
                }
              }
              puVar5 = (uint64_t *)puVar5[0xb];
              if (puVar5 == (uint64_t *)0x0) break;
            } while( true );
          }
          goto LAB_1804b9695;
        }
        lVar4 = (longlong)&unknown_var_7424_ptr - (longlong)pcVar10;
        while (*pcVar10 == pcVar10[lVar4]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar11 <= pcVar10) goto LAB_1804b9641;
        }
      }
    }
    iVar12 = 0;
LAB_1804b9695:
    *(int *)(param_1 + 0x5c4) = iVar12;
    if (iVar12 != 0) {
      lVar4 = puVar9[6];
      iVar6 = 0;
      if (0 < iVar12) {
        do {
          FUN_180631960(lVar4,&system_data_be48,param_1 + 0x3c4 + (longlong)iVar6 * 0x10);
          lVar4 = *(longlong *)(lVar4 + 0x58);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0x5c4));
      }
    }
  }
LAB_1804b96df:
  pcVar10 = "skin_color_gradient_points";
  do {
    pcVar3 = pcVar10;
    pcVar10 = pcVar3 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x30);
  if (puVar9 != (uint64_t *)0x0) {
LAB_1804b9710:
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar11 = (char *)0x0;
      pcVar10 = (char *)0x180d48d24;
    }
    else {
      pcVar11 = (char *)puVar9[2];
    }
    if (pcVar11 != pcVar3 + -0x180a2e8df) goto LAB_1804b97ce;
    pcVar11 = pcVar10 + (longlong)pcVar11;
    if (pcVar10 < pcVar11) {
      lVar4 = (longlong)&unknown_var_7392_ptr - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar4]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar11 <= pcVar10) goto LAB_1804b9791;
      }
      goto LAB_1804b97ce;
    }
LAB_1804b9791:
    pcVar10 = "skin_color_gradient_point";
    do {
      pcVar3 = pcVar10;
      pcVar10 = pcVar3 + 1;
    } while (*pcVar10 != '\0');
    for (puVar5 = (uint64_t *)puVar9[6]; puVar5 != (uint64_t *)0x0;
        puVar5 = (uint64_t *)puVar5[0xb]) {
      pcVar10 = (char *)*puVar5;
      if (pcVar10 == (char *)0x0) {
        pcVar1 = (char *)0x0;
        pcVar10 = (char *)0x180d48d24;
      }
      else {
        pcVar1 = (char *)puVar5[2];
      }
      if (pcVar1 == pcVar3 + -0x180a2e84f) {
        pcVar1 = pcVar1 + (longlong)pcVar10;
        if (pcVar1 <= pcVar10) {
LAB_1804b9811:
          uVar8 = 0;
LAB_1804b9820:
          uVar8 = (ulonglong)((int)uVar8 + 1);
          pcVar10 = "skin_color_gradient_point";
          do {
            pcVar3 = pcVar10;
            pcVar10 = pcVar3 + 1;
          } while (*pcVar10 != '\0');
          puVar5 = (uint64_t *)puVar5[0xb];
          if (puVar5 != (uint64_t *)0x0) {
            do {
              pcVar10 = (char *)*puVar5;
              if (pcVar10 == (char *)0x0) {
                pcVar1 = (char *)0x0;
                pcVar10 = (char *)0x180d48d24;
              }
              else {
                pcVar1 = (char *)puVar5[2];
              }
              if (pcVar1 == pcVar3 + -0x180a2e84f) {
                pcVar1 = pcVar1 + (longlong)pcVar10;
                if (pcVar1 <= pcVar10) goto LAB_1804b9820;
                pcVar11 = &unknown_var_7248_ptr + -(longlong)pcVar10;
                while (*pcVar10 == pcVar11[(longlong)pcVar10]) {
                  pcVar10 = pcVar10 + 1;
                  if (pcVar1 <= pcVar10) goto LAB_1804b9820;
                }
              }
              puVar5 = (uint64_t *)puVar5[0xb];
              if (puVar5 == (uint64_t *)0x0) break;
            } while( true );
          }
          goto LAB_1804b985d;
        }
        pcVar11 = &unknown_var_7248_ptr + -(longlong)pcVar10;
        while (*pcVar10 == pcVar11[(longlong)pcVar10]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar1 <= pcVar10) goto LAB_1804b9811;
        }
      }
    }
    uVar8 = 0;
LAB_1804b985d:
    iVar12 = (int)uVar8;
    *(int *)(param_1 + 0x5d0) = iVar12;
    lVar4 = puVar9[6];
    if (iVar12 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_18062b420(system_memory_pool_ptr,(longlong)iVar12 << 4,
                            CONCAT71((int7)((ulonglong)pcVar11 >> 8),0x12));
    }
    *(uint64_t *)(param_1 + 0x5c8) = uVar2;
    if (0 < iVar12) {
      lVar7 = 0;
      do {
        FUN_180631960(lVar4,&system_data_be48,*(longlong *)(param_1 + 0x5c8) + lVar7);
        lVar4 = *(longlong *)(lVar4 + 0x58);
        lVar7 = lVar7 + 0x10;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
LAB_1804b98f8:
  pcVar10 = "eye_color_gradient_points";
  do {
    pcVar3 = pcVar10;
    pcVar10 = pcVar3 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar9 == (uint64_t *)0x0) goto LAB_1804b9a50;
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar11 = (char *)0x0;
      pcVar10 = (char *)0x180d48d24;
    }
    else {
      pcVar11 = (char *)puVar9[2];
    }
    if (pcVar11 == pcVar3 + -0x180a2e82f) {
      pcVar11 = pcVar11 + (longlong)pcVar10;
      if (pcVar11 <= pcVar10) {
LAB_1804b9957:
        pcVar10 = "eye_color_gradient_point";
        do {
          pcVar3 = pcVar10;
          pcVar10 = pcVar3 + 1;
        } while (*pcVar10 != '\0');
        for (puVar5 = (uint64_t *)puVar9[6]; puVar5 != (uint64_t *)0x0;
            puVar5 = (uint64_t *)puVar5[0xb]) {
          pcVar10 = (char *)*puVar5;
          if (pcVar10 == (char *)0x0) {
            pcVar11 = (char *)0x0;
            pcVar10 = (char *)0x180d48d24;
          }
          else {
            pcVar11 = (char *)puVar5[2];
          }
          if (pcVar11 == pcVar3 + -0x180a2e88f) {
            pcVar11 = pcVar10 + (longlong)pcVar11;
            if (pcVar11 <= pcVar10) {
LAB_1804b99c6:
              uVar8 = 0;
LAB_1804b99d0:
              uVar13 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar13;
              pcVar10 = "eye_color_gradient_point";
              do {
                pcVar3 = pcVar10;
                pcVar10 = pcVar3 + 1;
              } while (*pcVar10 != '\0');
              puVar5 = (uint64_t *)puVar5[0xb];
              do {
                if (puVar5 == (uint64_t *)0x0) {
                  if (1 < (int)uVar13) {
                    *(uint *)(param_1 + 0x7d4) = uVar13;
                  }
                  goto LAB_1804b9a15;
                }
                pcVar10 = (char *)*puVar5;
                if (pcVar10 == (char *)0x0) {
                  pcVar11 = (char *)0x0;
                  pcVar10 = (char *)0x180d48d24;
                }
                else {
                  pcVar11 = (char *)puVar5[2];
                }
                if (pcVar11 == pcVar3 + -0x180a2e88f) {
                  pcVar11 = pcVar11 + (longlong)pcVar10;
                  if (pcVar11 <= pcVar10) goto LAB_1804b99d0;
                  lVar4 = (longlong)&unknown_var_7312_ptr - (longlong)pcVar10;
                  while (*pcVar10 == pcVar10[lVar4]) {
                    pcVar10 = pcVar10 + 1;
                    if (pcVar11 <= pcVar10) goto LAB_1804b99d0;
                  }
                }
                puVar5 = (uint64_t *)puVar5[0xb];
              } while( true );
            }
            lVar4 = (longlong)&unknown_var_7312_ptr - (longlong)pcVar10;
            while (*pcVar10 == pcVar10[lVar4]) {
              pcVar10 = pcVar10 + 1;
              if (pcVar11 <= pcVar10) goto LAB_1804b99c6;
            }
          }
        }
        uVar8 = 0;
LAB_1804b9a15:
        lVar4 = puVar9[6];
        if (0 < (int)uVar8) {
          lVar7 = param_1 + 0x5d4;
          do {
            FUN_180631960(lVar4,&system_data_be48,lVar7);
            lVar4 = *(longlong *)(lVar4 + 0x58);
            lVar7 = lVar7 + 0x10;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
LAB_1804b9a50:
        pcVar10 = "hair_color_gradient_points";
        do {
          pcVar3 = pcVar10;
          pcVar10 = pcVar3 + 1;
        } while (*pcVar10 != '\0');
        puVar9 = *(uint64_t **)(param_2 + 0x30);
        do {
          if (puVar9 == (uint64_t *)0x0) {
            return;
          }
          pcVar10 = (char *)*puVar9;
          if (pcVar10 == (char *)0x0) {
            pcVar11 = (char *)0x0;
            pcVar10 = (char *)0x180d48d24;
          }
          else {
            pcVar11 = (char *)puVar9[2];
          }
          if (pcVar11 == pcVar3 + -0x180a2e86f) {
            pcVar11 = pcVar11 + (longlong)pcVar10;
            if (pcVar11 <= pcVar10) {
LAB_1804b9b12:
              pcVar10 = "hair_color_gradient_point";
              do {
                pcVar3 = pcVar10;
                pcVar10 = pcVar3 + 1;
              } while (*pcVar10 != '\0');
              puVar5 = (uint64_t *)puVar9[6];
              do {
                if (puVar5 == (uint64_t *)0x0) {
                  uVar13 = 0;
LAB_1804b9bde:
                  lVar4 = puVar9[6];
                  if (0 < (int)uVar13) {
                    param_1 = param_1 + 0x7d8;
                    uVar8 = (ulonglong)uVar13;
                    do {
                      FUN_180631960(lVar4,&system_data_be48,param_1);
                      lVar4 = *(longlong *)(lVar4 + 0x58);
                      param_1 = param_1 + 0x10;
                      uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                  }
                  return;
                }
                pcVar10 = (char *)*puVar5;
                if (pcVar10 == (char *)0x0) {
                  pcVar11 = (char *)0x0;
                  pcVar10 = (char *)0x180d48d24;
                }
                else {
                  pcVar11 = (char *)puVar5[2];
                }
                if (pcVar11 == pcVar3 + -0x180a2e98f) {
                  pcVar11 = pcVar11 + (longlong)pcVar10;
                  if (pcVar11 <= pcVar10) {
LAB_1804b9b91:
                    uVar13 = 0;
LAB_1804b9ba0:
                    uVar13 = uVar13 + 1;
                    pcVar10 = "hair_color_gradient_point";
                    do {
                      pcVar3 = pcVar10;
                      pcVar10 = pcVar3 + 1;
                    } while (*pcVar10 != '\0');
                    puVar5 = (uint64_t *)puVar5[0xb];
                    do {
                      if (puVar5 == (uint64_t *)0x0) {
                        if (1 < (int)uVar13) {
                          *(uint *)(param_1 + 0x9d8) = uVar13;
                        }
                        goto LAB_1804b9bde;
                      }
                      pcVar10 = (char *)*puVar5;
                      if (pcVar10 == (char *)0x0) {
                        pcVar11 = (char *)0x0;
                        pcVar10 = (char *)0x180d48d24;
                      }
                      else {
                        pcVar11 = (char *)puVar5[2];
                      }
                      if (pcVar11 == pcVar3 + -0x180a2e98f) {
                        pcVar11 = pcVar10 + (longlong)pcVar11;
                        if (pcVar11 <= pcVar10) goto LAB_1804b9ba0;
                        lVar4 = (longlong)&unknown_var_7568_ptr - (longlong)pcVar10;
                        while (*pcVar10 == pcVar10[lVar4]) {
                          pcVar10 = pcVar10 + 1;
                          if (pcVar11 <= pcVar10) goto LAB_1804b9ba0;
                        }
                      }
                      puVar5 = (uint64_t *)puVar5[0xb];
                    } while( true );
                  }
                  lVar4 = (longlong)&unknown_var_7568_ptr - (longlong)pcVar10;
                  while (*pcVar10 == pcVar10[lVar4]) {
                    pcVar10 = pcVar10 + 1;
                    if (pcVar11 <= pcVar10) goto LAB_1804b9b91;
                  }
                }
                puVar5 = (uint64_t *)puVar5[0xb];
              } while( true );
            }
            lVar4 = (longlong)&unknown_var_7280_ptr - (longlong)pcVar10;
            while (*pcVar10 == pcVar10[lVar4]) {
              pcVar10 = pcVar10 + 1;
              if (pcVar11 <= pcVar10) goto LAB_1804b9b12;
            }
          }
          puVar9 = (uint64_t *)puVar9[0xb];
        } while( true );
      }
      lVar4 = (longlong)&unknown_var_7216_ptr - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar4]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar11 <= pcVar10) goto LAB_1804b9957;
      }
    }
    puVar9 = (uint64_t *)puVar9[0xb];
  } while( true );
LAB_1804b95fe:
  puVar9 = (uint64_t *)puVar9[0xb];
  if (puVar9 == (uint64_t *)0x0) goto LAB_1804b96df;
  goto LAB_1804b9583;
LAB_1804b97ce:
  puVar9 = (uint64_t *)puVar9[0xb];
  if (puVar9 == (uint64_t *)0x0) goto LAB_1804b98f8;
  goto LAB_1804b9710;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part034.c - 8 个函数

// 函数: void FUN_1804b9768(void)
void FUN_1804b9768(void)

{
  uint64_t uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t unaff_RBP;
  int iVar9;
  uint64_t uVar10;
  uint64_t *unaff_RDI;
  char *pcVar11;
  int64_t in_R9;
  int64_t in_R10;
  uint uVar12;
  int64_t unaff_R14;
  char *unaff_R15;
  
code_r0x0001804b9768:
  lVar5 = 0;
  pcVar2 = unaff_R15;
LAB_1804b976d:
  if (lVar5 == in_R9) {
    pcVar11 = pcVar2 + lVar5;
    if (pcVar11 <= pcVar2) {
LAB_1804b9791:
      pcVar2 = "skin_color_gradient_point";
      do {
        pcVar4 = pcVar2;
        pcVar2 = pcVar4 + 1;
      } while (*pcVar2 != '\0');
      puVar6 = (uint64_t *)unaff_RDI[6];
joined_r0x0001804b97b3:
      if (puVar6 == (uint64_t *)0x0) {
        uVar10 = 0;
      }
      else {
        if ((char *)*puVar6 == (char *)0x0) {
          pcVar2 = (char *)0x0;
          pcVar3 = unaff_R15;
        }
        else {
          pcVar2 = (char *)puVar6[2];
          pcVar3 = (char *)*puVar6;
        }
        if (pcVar2 != pcVar4 + -0x180a2e84f) goto LAB_1804b984e;
        pcVar2 = pcVar2 + (int64_t)pcVar3;
        if (pcVar3 < pcVar2) {
          pcVar11 = &unknown_var_7248_ptr + -(int64_t)pcVar3;
          do {
            if (*pcVar3 != pcVar11[(int64_t)pcVar3]) goto LAB_1804b984e;
            pcVar3 = pcVar3 + 1;
          } while (pcVar3 < pcVar2);
        }
        uVar10 = 0;
LAB_1804b9820:
        uVar10 = (uint64_t)((int)uVar10 + 1);
        pcVar2 = "skin_color_gradient_point";
        do {
          pcVar4 = pcVar2;
          pcVar2 = pcVar4 + 1;
        } while (*pcVar2 != '\0');
        puVar6 = (uint64_t *)puVar6[0xb];
        if (puVar6 != (uint64_t *)0x0) {
          do {
            if ((char *)*puVar6 == (char *)0x0) {
              pcVar2 = (char *)0x0;
              pcVar3 = unaff_R15;
            }
            else {
              pcVar2 = (char *)puVar6[2];
              pcVar3 = (char *)*puVar6;
            }
            if (pcVar2 == pcVar4 + -0x180a2e84f) {
              pcVar2 = pcVar2 + (int64_t)pcVar3;
              if (pcVar2 <= pcVar3) goto LAB_1804b9820;
              pcVar11 = &unknown_var_7248_ptr + -(int64_t)pcVar3;
              while (*pcVar3 == pcVar11[(int64_t)pcVar3]) {
                pcVar3 = pcVar3 + 1;
                if (pcVar2 <= pcVar3) goto LAB_1804b9820;
              }
            }
            puVar6 = (uint64_t *)puVar6[0xb];
            if (puVar6 == (uint64_t *)0x0) break;
          } while( true );
        }
      }
      iVar9 = (int)uVar10;
      *(int *)(unaff_R14 + 0x5d0) = iVar9;
      lVar5 = unaff_RDI[6];
      if (iVar9 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar9 << 4,
                              CONCAT71((int7)((uint64_t)pcVar11 >> 8),0x12));
      }
      *(uint64_t *)(unaff_R14 + 0x5c8) = uVar1;
      if (0 < iVar9) {
        lVar8 = 0;
        do {
          FUN_180631960(lVar5,&system_data_be48,*(int64_t *)(unaff_R14 + 0x5c8) + lVar8);
          lVar5 = *(int64_t *)(lVar5 + 0x58);
          lVar8 = lVar8 + 0x10;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
LAB_1804b98f8:
      pcVar2 = "eye_color_gradient_points";
      do {
        pcVar11 = pcVar2;
        pcVar2 = pcVar11 + 1;
      } while (*pcVar2 != '\0');
      puVar6 = *(uint64_t **)(unaff_RBP + 0x30);
      while( true ) {
        if (puVar6 == (uint64_t *)0x0) goto LAB_1804b9a50;
        if ((char *)*puVar6 == (char *)0x0) {
          pcVar2 = (char *)0x0;
          pcVar4 = unaff_R15;
        }
        else {
          pcVar2 = (char *)puVar6[2];
          pcVar4 = (char *)*puVar6;
        }
        if (pcVar2 == pcVar11 + -0x180a2e82f) break;
LAB_1804b998e:
        puVar6 = (uint64_t *)puVar6[0xb];
      }
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar4 < pcVar2) {
        lVar5 = (int64_t)&unknown_var_7216_ptr - (int64_t)pcVar4;
        do {
          if (*pcVar4 != pcVar4[lVar5]) goto LAB_1804b998e;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < pcVar2);
      }
      pcVar2 = "eye_color_gradient_point";
      do {
        pcVar11 = pcVar2;
        pcVar2 = pcVar11 + 1;
      } while (*pcVar2 != '\0');
      puVar7 = (uint64_t *)puVar6[6];
      if (puVar7 != (uint64_t *)0x0) {
        while( true ) {
          if ((char *)*puVar7 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar4 = unaff_R15;
          }
          else {
            pcVar2 = (char *)puVar7[2];
            pcVar4 = (char *)*puVar7;
          }
          if (pcVar2 == pcVar11 + -0x180a2e88f) break;
LAB_1804b9a05:
          puVar7 = (uint64_t *)puVar7[0xb];
          if (puVar7 == (uint64_t *)0x0) goto LAB_1804b9a12;
        }
        pcVar2 = pcVar4 + (int64_t)pcVar2;
        if (pcVar4 < pcVar2) {
          lVar5 = (int64_t)&unknown_var_7312_ptr - (int64_t)pcVar4;
          do {
            if (*pcVar4 != pcVar4[lVar5]) goto LAB_1804b9a05;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 < pcVar2);
        }
        uVar10 = 0;
LAB_1804b99d0:
        uVar12 = (int)uVar10 + 1;
        uVar10 = (uint64_t)uVar12;
        pcVar2 = "eye_color_gradient_point";
        do {
          pcVar11 = pcVar2;
          pcVar2 = pcVar11 + 1;
        } while (*pcVar2 != '\0');
        puVar7 = (uint64_t *)puVar7[0xb];
        do {
          if (puVar7 == (uint64_t *)0x0) {
            if (1 < (int)uVar12) {
              *(uint *)(unaff_R14 + 0x7d4) = uVar12;
            }
            goto LAB_1804b9a15;
          }
          if ((char *)*puVar7 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar4 = unaff_R15;
          }
          else {
            pcVar2 = (char *)puVar7[2];
            pcVar4 = (char *)*puVar7;
          }
          if (pcVar2 == pcVar11 + -0x180a2e88f) {
            pcVar2 = pcVar2 + (int64_t)pcVar4;
            if (pcVar2 <= pcVar4) goto LAB_1804b99d0;
            lVar5 = (int64_t)&unknown_var_7312_ptr - (int64_t)pcVar4;
            while (*pcVar4 == pcVar4[lVar5]) {
              pcVar4 = pcVar4 + 1;
              if (pcVar2 <= pcVar4) goto LAB_1804b99d0;
            }
          }
          puVar7 = (uint64_t *)puVar7[0xb];
        } while( true );
      }
LAB_1804b9a12:
      uVar10 = 0;
LAB_1804b9a15:
      lVar5 = puVar6[6];
      if (0 < (int)uVar10) {
        lVar8 = unaff_R14 + 0x5d4;
        do {
          FUN_180631960(lVar5,&system_data_be48,lVar8);
          lVar5 = *(int64_t *)(lVar5 + 0x58);
          lVar8 = lVar8 + 0x10;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
LAB_1804b9a50:
      pcVar2 = "hair_color_gradient_points";
      do {
        pcVar11 = pcVar2;
        pcVar2 = pcVar11 + 1;
      } while (*pcVar2 != '\0');
      puVar6 = *(uint64_t **)(unaff_RBP + 0x30);
      while( true ) {
        if (puVar6 == (uint64_t *)0x0) {
          return;
        }
        if ((char *)*puVar6 == (char *)0x0) {
          pcVar2 = (char *)0x0;
          pcVar4 = unaff_R15;
        }
        else {
          pcVar2 = (char *)puVar6[2];
          pcVar4 = (char *)*puVar6;
        }
        if (pcVar2 == pcVar11 + -0x180a2e86f) break;
LAB_1804b9b4e:
        puVar6 = (uint64_t *)puVar6[0xb];
      }
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar4 < pcVar2) {
        lVar5 = (int64_t)&unknown_var_7280_ptr - (int64_t)pcVar4;
        do {
          if (*pcVar4 != pcVar4[lVar5]) goto LAB_1804b9b4e;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < pcVar2);
      }
      pcVar2 = "hair_color_gradient_point";
      do {
        pcVar11 = pcVar2;
        pcVar2 = pcVar11 + 1;
      } while (*pcVar2 != '\0');
      puVar7 = (uint64_t *)puVar6[6];
      while( true ) {
        if (puVar7 == (uint64_t *)0x0) {
          uVar12 = 0;
          goto LAB_1804b9bde;
        }
        if ((char *)*puVar7 == (char *)0x0) {
          pcVar2 = (char *)0x0;
          pcVar4 = unaff_R15;
        }
        else {
          pcVar2 = (char *)puVar7[2];
          pcVar4 = (char *)*puVar7;
        }
        if (pcVar2 == pcVar11 + -0x180a2e98f) break;
LAB_1804b9bce:
        puVar7 = (uint64_t *)puVar7[0xb];
      }
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar4 < pcVar2) {
        lVar5 = (int64_t)&unknown_var_7568_ptr - (int64_t)pcVar4;
        do {
          if (*pcVar4 != pcVar4[lVar5]) goto LAB_1804b9bce;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < pcVar2);
      }
      uVar12 = 0;
LAB_1804b9ba0:
      uVar12 = uVar12 + 1;
      pcVar2 = "hair_color_gradient_point";
      do {
        pcVar11 = pcVar2;
        pcVar2 = pcVar11 + 1;
      } while (*pcVar2 != '\0');
      puVar7 = (uint64_t *)puVar7[0xb];
      do {
        if (puVar7 == (uint64_t *)0x0) {
          if (1 < (int)uVar12) {
            *(uint *)(unaff_R14 + 0x9d8) = uVar12;
          }
LAB_1804b9bde:
          lVar5 = puVar6[6];
          if (0 < (int)uVar12) {
            lVar8 = unaff_R14 + 0x7d8;
            uVar10 = (uint64_t)uVar12;
            do {
              FUN_180631960(lVar5,&system_data_be48,lVar8);
              lVar5 = *(int64_t *)(lVar5 + 0x58);
              lVar8 = lVar8 + 0x10;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          return;
        }
        if ((char *)*puVar7 == (char *)0x0) {
          pcVar2 = (char *)0x0;
          pcVar4 = unaff_R15;
        }
        else {
          pcVar2 = (char *)puVar7[2];
          pcVar4 = (char *)*puVar7;
        }
        if (pcVar2 == pcVar11 + -0x180a2e98f) {
          pcVar2 = pcVar4 + (int64_t)pcVar2;
          if (pcVar2 <= pcVar4) goto LAB_1804b9ba0;
          lVar5 = (int64_t)&unknown_var_7568_ptr - (int64_t)pcVar4;
          while (*pcVar4 == pcVar4[lVar5]) {
            pcVar4 = pcVar4 + 1;
            if (pcVar2 <= pcVar4) goto LAB_1804b9ba0;
          }
        }
        puVar7 = (uint64_t *)puVar7[0xb];
      } while( true );
    }
    lVar5 = in_R10 - (int64_t)pcVar2;
    while (*pcVar2 == pcVar2[lVar5]) {
      pcVar2 = pcVar2 + 1;
      if (pcVar11 <= pcVar2) goto LAB_1804b9791;
    }
  }
  unaff_RDI = (uint64_t *)unaff_RDI[0xb];
  if (unaff_RDI == (uint64_t *)0x0) goto LAB_1804b98f8;
  pcVar2 = (char *)*unaff_RDI;
  if (pcVar2 == (char *)0x0) goto code_r0x0001804b9768;
  lVar5 = unaff_RDI[2];
  goto LAB_1804b976d;
LAB_1804b984e:
  puVar6 = (uint64_t *)puVar6[0xb];
  goto joined_r0x0001804b97b3;
}






// 函数: void FUN_1804b9a80(void)
void FUN_1804b9a80(void)

{
  char *pcVar1;
  char *pcVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *unaff_RBX;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t in_R9;
  int64_t in_R10;
  char *pcVar7;
  uint uVar8;
  int64_t unaff_R14;
  char *unaff_R15;
  
  do {
    if ((char *)*unaff_RBX == (char *)0x0) {
      lVar3 = 0;
      pcVar1 = unaff_R15;
    }
    else {
      lVar3 = unaff_RBX[2];
      pcVar1 = (char *)*unaff_RBX;
    }
    if (lVar3 == in_R9) {
      pcVar7 = pcVar1 + lVar3;
      if (pcVar7 <= pcVar1) {
LAB_1804b9b12:
        pcVar1 = "hair_color_gradient_point";
        do {
          pcVar7 = pcVar1;
          pcVar1 = pcVar7 + 1;
        } while (*pcVar1 != '\0');
        puVar4 = (uint64_t *)unaff_RBX[6];
        do {
          if (puVar4 == (uint64_t *)0x0) {
            uVar8 = 0;
LAB_1804b9bde:
            lVar3 = unaff_RBX[6];
            if (0 < (int)uVar8) {
              lVar6 = unaff_R14 + 0x7d8;
              uVar5 = (uint64_t)uVar8;
              do {
                FUN_180631960(lVar3,&system_data_be48,lVar6);
                lVar3 = *(int64_t *)(lVar3 + 0x58);
                lVar6 = lVar6 + 0x10;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            return;
          }
          if ((char *)*puVar4 == (char *)0x0) {
            pcVar1 = (char *)0x0;
            pcVar2 = unaff_R15;
          }
          else {
            pcVar1 = (char *)puVar4[2];
            pcVar2 = (char *)*puVar4;
          }
          if (pcVar1 == pcVar7 + -0x180a2e98f) {
            pcVar1 = pcVar1 + (int64_t)pcVar2;
            if (pcVar1 <= pcVar2) {
LAB_1804b9b91:
              uVar8 = 0;
LAB_1804b9ba0:
              uVar8 = uVar8 + 1;
              pcVar1 = "hair_color_gradient_point";
              do {
                pcVar7 = pcVar1;
                pcVar1 = pcVar7 + 1;
              } while (*pcVar1 != '\0');
              puVar4 = (uint64_t *)puVar4[0xb];
              do {
                if (puVar4 == (uint64_t *)0x0) {
                  if (1 < (int)uVar8) {
                    *(uint *)(unaff_R14 + 0x9d8) = uVar8;
                  }
                  goto LAB_1804b9bde;
                }
                if ((char *)*puVar4 == (char *)0x0) {
                  pcVar1 = (char *)0x0;
                  pcVar2 = unaff_R15;
                }
                else {
                  pcVar1 = (char *)puVar4[2];
                  pcVar2 = (char *)*puVar4;
                }
                if (pcVar1 == pcVar7 + -0x180a2e98f) {
                  pcVar1 = pcVar2 + (int64_t)pcVar1;
                  if (pcVar1 <= pcVar2) goto LAB_1804b9ba0;
                  lVar3 = (int64_t)&unknown_var_7568_ptr - (int64_t)pcVar2;
                  while (*pcVar2 == pcVar2[lVar3]) {
                    pcVar2 = pcVar2 + 1;
                    if (pcVar1 <= pcVar2) goto LAB_1804b9ba0;
                  }
                }
                puVar4 = (uint64_t *)puVar4[0xb];
              } while( true );
            }
            lVar3 = (int64_t)&unknown_var_7568_ptr - (int64_t)pcVar2;
            while (*pcVar2 == pcVar2[lVar3]) {
              pcVar2 = pcVar2 + 1;
              if (pcVar1 <= pcVar2) goto LAB_1804b9b91;
            }
          }
          puVar4 = (uint64_t *)puVar4[0xb];
        } while( true );
      }
      lVar3 = in_R10 - (int64_t)pcVar1;
      while (*pcVar1 == pcVar1[lVar3]) {
        pcVar1 = pcVar1 + 1;
        if (pcVar7 <= pcVar1) goto LAB_1804b9b12;
      }
    }
    unaff_RBX = (uint64_t *)unaff_RBX[0xb];
    if (unaff_RBX == (uint64_t *)0x0) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1804b9a8e(uint64_t param_1,uint64_t *param_2)
void FUN_1804b9a8e(uint64_t param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  char *pcVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  char *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar6;
  int64_t unaff_RDI;
  int64_t lVar7;
  char *pcVar8;
  int64_t in_R10;
  uint in_R11D;
  uint uVar9;
  int64_t unaff_R14;
  char *unaff_R15;
  
code_r0x0001804b9a8e:
  lVar7 = 0;
  pcVar2 = unaff_R15;
LAB_1804b9a93:
  if (lVar7 == in_R10) {
    pcVar8 = pcVar2 + lVar7;
    if (pcVar2 < pcVar8) {
      lVar7 = (int64_t)unaff_RBX - (int64_t)pcVar2;
      do {
        if (*pcVar2 != pcVar2[lVar7]) goto LAB_1804b9ac6;
        pcVar2 = pcVar2 + 1;
      } while (pcVar2 < pcVar8);
    }
    in_R11D = in_R11D + 1;
    pcVar2 = unaff_RBX;
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    param_2 = (uint64_t *)param_2[0xb];
    in_R10 = (int64_t)pcVar2 - (int64_t)unaff_RBX;
  }
  else {
LAB_1804b9ac6:
    param_2 = (uint64_t *)param_2[0xb];
  }
  if (param_2 != (uint64_t *)0x0) {
    pcVar2 = (char *)*param_2;
    if (pcVar2 == (char *)0x0) goto code_r0x0001804b9a8e;
    lVar7 = param_2[2];
    goto LAB_1804b9a93;
  }
  if (1 < (int)in_R11D) {
    *(uint *)(unaff_R14 + 0x7d4) = in_R11D;
  }
  lVar7 = *(int64_t *)(unaff_RDI + 0x30);
  if (0 < (int)in_R11D) {
    lVar5 = unaff_R14 + 0x5d4;
    uVar6 = (uint64_t)in_R11D;
    do {
      FUN_180631960(lVar7,&system_data_be48,lVar5);
      lVar7 = *(int64_t *)(lVar7 + 0x58);
      lVar5 = lVar5 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  pcVar2 = "hair_color_gradient_points";
  do {
    pcVar8 = pcVar2;
    pcVar2 = pcVar8 + 1;
  } while (*pcVar2 != '\0');
  puVar1 = *(uint64_t **)(unaff_RBP + 0x30);
  while( true ) {
    if (puVar1 == (uint64_t *)0x0) {
      return;
    }
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_R15;
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar3 = (char *)*puVar1;
    }
    if (pcVar2 == pcVar8 + -0x180a2e86f) break;
LAB_1804b9b4e:
    puVar1 = (uint64_t *)puVar1[0xb];
  }
  pcVar2 = pcVar2 + (int64_t)pcVar3;
  if (pcVar3 < pcVar2) {
    lVar7 = (int64_t)&unknown_var_7280_ptr - (int64_t)pcVar3;
    do {
      if (*pcVar3 != pcVar3[lVar7]) goto LAB_1804b9b4e;
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 < pcVar2);
  }
  pcVar2 = "hair_color_gradient_point";
  do {
    pcVar8 = pcVar2;
    pcVar2 = pcVar8 + 1;
  } while (*pcVar2 != '\0');
  puVar4 = (uint64_t *)puVar1[6];
  while( true ) {
    if (puVar4 == (uint64_t *)0x0) {
      uVar9 = 0;
      goto LAB_1804b9bde;
    }
    if ((char *)*puVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_R15;
    }
    else {
      pcVar2 = (char *)puVar4[2];
      pcVar3 = (char *)*puVar4;
    }
    if (pcVar2 == pcVar8 + -0x180a2e98f) break;
LAB_1804b9bce:
    puVar4 = (uint64_t *)puVar4[0xb];
  }
  pcVar2 = pcVar2 + (int64_t)pcVar3;
  if (pcVar3 < pcVar2) {
    lVar7 = (int64_t)&unknown_var_7568_ptr - (int64_t)pcVar3;
    do {
      if (*pcVar3 != pcVar3[lVar7]) goto LAB_1804b9bce;
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 < pcVar2);
  }
  uVar9 = 0;
LAB_1804b9ba0:
  uVar9 = uVar9 + 1;
  pcVar2 = "hair_color_gradient_point";
  do {
    pcVar8 = pcVar2;
    pcVar2 = pcVar8 + 1;
  } while (*pcVar2 != '\0');
  puVar4 = (uint64_t *)puVar4[0xb];
  do {
    if (puVar4 == (uint64_t *)0x0) {
      if (1 < (int)uVar9) {
        *(uint *)(unaff_R14 + 0x9d8) = uVar9;
      }
LAB_1804b9bde:
      lVar7 = puVar1[6];
      if (0 < (int)uVar9) {
        lVar5 = unaff_R14 + 0x7d8;
        uVar6 = (uint64_t)uVar9;
        do {
          FUN_180631960(lVar7,&system_data_be48,lVar5);
          lVar7 = *(int64_t *)(lVar7 + 0x58);
          lVar5 = lVar5 + 0x10;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      return;
    }
    if ((char *)*puVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_R15;
    }
    else {
      pcVar2 = (char *)puVar4[2];
      pcVar3 = (char *)*puVar4;
    }
    if (pcVar2 == pcVar8 + -0x180a2e98f) {
      pcVar2 = pcVar3 + (int64_t)pcVar2;
      if (pcVar2 <= pcVar3) goto LAB_1804b9ba0;
      lVar7 = (int64_t)&unknown_var_7568_ptr - (int64_t)pcVar3;
      while (*pcVar3 == pcVar3[lVar7]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1804b9ba0;
      }
    }
    puVar4 = (uint64_t *)puVar4[0xb];
  } while( true );
}






// 函数: void FUN_1804b9ae9(void)
void FUN_1804b9ae9(void)

{
  char *pcVar1;
  char *pcVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *unaff_RBX;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t in_R9;
  int64_t in_R10;
  char *pcVar7;
  uint uVar8;
  int64_t unaff_R14;
  char *unaff_R15;
  
code_r0x0001804b9ae9:
  lVar3 = 0;
  pcVar1 = unaff_R15;
LAB_1804b9aee:
  if (lVar3 == in_R9) {
    pcVar7 = pcVar1 + lVar3;
    if (pcVar7 <= pcVar1) {
LAB_1804b9b12:
      pcVar1 = "hair_color_gradient_point";
      do {
        pcVar7 = pcVar1;
        pcVar1 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
      puVar4 = (uint64_t *)unaff_RBX[6];
      while( true ) {
        if (puVar4 == (uint64_t *)0x0) {
          uVar8 = 0;
          goto LAB_1804b9bde;
        }
        if ((char *)*puVar4 == (char *)0x0) {
          pcVar1 = (char *)0x0;
          pcVar2 = unaff_R15;
        }
        else {
          pcVar1 = (char *)puVar4[2];
          pcVar2 = (char *)*puVar4;
        }
        if (pcVar1 == pcVar7 + -0x180a2e98f) break;
LAB_1804b9bce:
        puVar4 = (uint64_t *)puVar4[0xb];
      }
      pcVar1 = pcVar1 + (int64_t)pcVar2;
      if (pcVar2 < pcVar1) {
        lVar3 = (int64_t)&unknown_var_7568_ptr - (int64_t)pcVar2;
        do {
          if (*pcVar2 != pcVar2[lVar3]) goto LAB_1804b9bce;
          pcVar2 = pcVar2 + 1;
        } while (pcVar2 < pcVar1);
      }
      uVar8 = 0;
LAB_1804b9ba0:
      uVar8 = uVar8 + 1;
      pcVar1 = "hair_color_gradient_point";
      do {
        pcVar7 = pcVar1;
        pcVar1 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
      puVar4 = (uint64_t *)puVar4[0xb];
      do {
        if (puVar4 == (uint64_t *)0x0) {
          if (1 < (int)uVar8) {
            *(uint *)(unaff_R14 + 0x9d8) = uVar8;
          }
LAB_1804b9bde:
          lVar3 = unaff_RBX[6];
          if (0 < (int)uVar8) {
            lVar6 = unaff_R14 + 0x7d8;
            uVar5 = (uint64_t)uVar8;
            do {
              FUN_180631960(lVar3,&system_data_be48,lVar6);
              lVar3 = *(int64_t *)(lVar3 + 0x58);
              lVar6 = lVar6 + 0x10;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          return;
        }
        if ((char *)*puVar4 == (char *)0x0) {
          pcVar1 = (char *)0x0;
          pcVar2 = unaff_R15;
        }
        else {
          pcVar1 = (char *)puVar4[2];
          pcVar2 = (char *)*puVar4;
        }
        if (pcVar1 == pcVar7 + -0x180a2e98f) {
          pcVar1 = pcVar2 + (int64_t)pcVar1;
          if (pcVar1 <= pcVar2) goto LAB_1804b9ba0;
          lVar3 = (int64_t)&unknown_var_7568_ptr - (int64_t)pcVar2;
          while (*pcVar2 == pcVar2[lVar3]) {
            pcVar2 = pcVar2 + 1;
            if (pcVar1 <= pcVar2) goto LAB_1804b9ba0;
          }
        }
        puVar4 = (uint64_t *)puVar4[0xb];
      } while( true );
    }
    lVar3 = in_R10 - (int64_t)pcVar1;
    while (*pcVar1 == pcVar1[lVar3]) {
      pcVar1 = pcVar1 + 1;
      if (pcVar7 <= pcVar1) goto LAB_1804b9b12;
    }
  }
  unaff_RBX = (uint64_t *)unaff_RBX[0xb];
  if (unaff_RBX == (uint64_t *)0x0) {
    return;
  }
  pcVar1 = (char *)*unaff_RBX;
  if (pcVar1 == (char *)0x0) goto code_r0x0001804b9ae9;
  lVar3 = unaff_RBX[2];
  goto LAB_1804b9aee;
}



int64_t FUN_1804b9ce0(int64_t param_1)

{
  int64_t lVar1;
  
  *(uint64_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x30) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x34) = 0x40000000;
  *(int32_t *)(param_1 + 0x3c) = 3;
  *(uint64_t *)(param_1 + 0x20) = 1;
  *(void **)(param_1 + 0x18) = &system_data_0000;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(int32_t *)(param_1 + 0x60) = 0x3f800000;
  *(uint64_t *)(param_1 + 100) = 0x40000000;
  *(int32_t *)(param_1 + 0x6c) = 3;
  *(uint64_t *)(param_1 + 0x50) = 1;
  *(void **)(param_1 + 0x48) = &system_data_0000;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x70) = 0x500000;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x80) = 0x41c64e6d;
  lVar1 = param_1 + 0x88;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(int32_t *)(param_1 + 0xb0) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x90) = lVar1;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(int8_t *)(param_1 + 0xa0) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  lVar1 = param_1 + 0xb8;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int32_t *)(param_1 + 0xe0) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0xc0) = lVar1;
  *(uint64_t *)(param_1 + 200) = 0;
  *(int8_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  FUN_1800572d0();
  return param_1;
}






// 函数: void FUN_1804b9df0(int64_t param_1)
void FUN_1804b9df0(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  FUN_18033b1a0(param_1 + 0x38);
  if ((1 < *(uint64_t *)(param_1 + 0x48)) && (*(int64_t *)(param_1 + 0x40) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uVar6 = *(uint64_t *)(param_1 + 0x18);
  lVar4 = *(int64_t *)(param_1 + 0x10);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x18);
  }
  *(uint64_t *)(param_1 + 0x20) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 0x10), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804b9e50(int64_t param_1)
void FUN_1804b9e50(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_18033b1a0();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804b9e90(int64_t param_1)
void FUN_1804b9e90(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_18033b1a0();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804b9ed0(void)
void FUN_1804b9ed0(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}







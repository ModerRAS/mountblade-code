#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part048.c - 2 个函数

// 函数: void FUN_1802b4fb0(float param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_1802b4fb0(float param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,int32_t param_10,int32_t param_11)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  float *pfVar6;
  uint64_t uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int64_t *plVar11;
  int64_t lVar12;
  void *puVar13;
  uint64_t *unaff_RBX;
  uint64_t *puVar14;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t *puVar15;
  char *pcVar16;
  void *puVar17;
  int64_t in_R10;
  char *unaff_R14;
  float extraout_XMM0_Da;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int aiStackX_20 [2];
  
  if (unaff_RBX != (uint64_t *)0x0) {
    do {
      if ((char *)*unaff_RBX == (char *)0x0) {
        lVar12 = 0;
        pcVar9 = unaff_R14;
      }
      else {
        lVar12 = unaff_RBX[2];
        pcVar9 = (char *)*unaff_RBX;
      }
      if (lVar12 == param_4) {
        pcVar16 = pcVar9 + lVar12;
        if (pcVar16 <= pcVar9) {
LAB_1802b5007:
          pcVar9 = "emitter";
          do {
            pcVar16 = pcVar9;
            pcVar9 = pcVar16 + 1;
          } while (*pcVar9 != '\0');
          for (puVar14 = (uint64_t *)unaff_RBX[6]; puVar14 != (uint64_t *)0x0;
              puVar14 = (uint64_t *)puVar14[0xb]) {
            if ((char *)*puVar14 == (char *)0x0) {
              pcVar9 = (char *)0x0;
              pcVar10 = unaff_R14;
            }
            else {
              pcVar9 = (char *)puVar14[2];
              pcVar10 = (char *)*puVar14;
            }
            if (pcVar9 == pcVar16 + -0x180a18047) {
              pcVar9 = pcVar9 + (int64_t)pcVar10;
              if (pcVar9 <= pcVar10) {
LAB_1802b50e0:
                pcVar9 = "guid";
                do {
                  pcVar16 = pcVar9;
                  pcVar9 = pcVar16 + 1;
                } while (*pcVar9 != '\0');
                for (puVar15 = (uint64_t *)puVar14[8]; puVar15 != (uint64_t *)0x0;
                    puVar15 = (uint64_t *)puVar15[6]) {
                  if ((char *)*puVar15 == (char *)0x0) {
                    pcVar9 = (char *)0x0;
                    pcVar10 = unaff_R14;
                  }
                  else {
                    pcVar9 = (char *)puVar15[2];
                    pcVar10 = (char *)*puVar15;
                  }
                  if (pcVar9 == pcVar16 + -0x180a04c43) {
                    pcVar9 = pcVar9 + (int64_t)pcVar10;
                    if (pcVar9 <= pcVar10) break;
                    lVar12 = (int64_t)&unknown_var_6228_ptr - (int64_t)pcVar10;
                    while (*pcVar10 == pcVar10[lVar12]) {
                      pcVar10 = pcVar10 + 1;
                      if (pcVar9 <= pcVar10) goto LAB_1802b515c;
                    }
                  }
                }
LAB_1802b515c:
                pfVar6 = (float *)FUN_1802c0460(&param_5);
                plVar1 = *(int64_t **)(unaff_RSI + 200);
                param_1 = *pfVar6;
                param_7._4_4_ = pfVar6[1];
                param_8._0_4_ = pfVar6[2];
                param_8._4_4_ = pfVar6[3];
                lVar12 = 0;
                iVar8 = (int)(*(int64_t *)(unaff_RSI + 0xd0) - (int64_t)plVar1 >> 3);
                param_7._0_4_ = param_1;
                if (0 < iVar8) {
                  plVar11 = plVar1;
                  do {
                    if ((*(int64_t *)*plVar11 == *(int64_t *)pfVar6) &&
                       (((int64_t *)*plVar11)[1] == *(int64_t *)(pfVar6 + 2))) {
                      if (plVar1[lVar12] != 0) {
                        param_1 = (float)FUN_180264330(plVar1[lVar12],puVar14);
                      }
                      break;
                    }
                    lVar12 = lVar12 + 1;
                    plVar11 = plVar11 + 1;
                  } while (lVar12 < iVar8);
                }
                pcVar9 = "emitter";
                do {
                  pcVar16 = pcVar9;
                  pcVar9 = pcVar16 + 1;
                } while (*pcVar9 != '\0');
                puVar14 = (uint64_t *)puVar14[0xb];
                if (puVar14 != (uint64_t *)0x0) {
                  do {
                    if ((char *)*puVar14 == (char *)0x0) {
                      pcVar9 = (char *)0x0;
                      pcVar10 = unaff_R14;
                    }
                    else {
                      pcVar9 = (char *)puVar14[2];
                      pcVar10 = (char *)*puVar14;
                    }
                    if (pcVar9 == pcVar16 + -0x180a18047) {
                      pcVar9 = pcVar9 + (int64_t)pcVar10;
                      if (pcVar9 <= pcVar10) goto LAB_1802b50e0;
                      lVar12 = (int64_t)&unknown_var_5080_ptr - (int64_t)pcVar10;
                      while (*pcVar10 == pcVar10[lVar12]) {
                        pcVar10 = pcVar10 + 1;
                        if (pcVar9 <= pcVar10) goto LAB_1802b50e0;
                      }
                    }
                    puVar14 = (uint64_t *)puVar14[0xb];
                    if (puVar14 == (uint64_t *)0x0) break;
                  } while( true );
                }
                break;
              }
              lVar12 = (int64_t)&unknown_var_5080_ptr - (int64_t)pcVar10;
              while (*pcVar10 == pcVar10[lVar12]) {
                pcVar10 = pcVar10 + 1;
                if (pcVar9 <= pcVar10) goto LAB_1802b50e0;
              }
            }
          }
          goto FUN_1802b54b3;
        }
        lVar12 = in_R10 - (int64_t)pcVar9;
        while (*pcVar9 == pcVar9[lVar12]) {
          pcVar9 = pcVar9 + 1;
          if (pcVar16 <= pcVar9) goto LAB_1802b5007;
        }
      }
      unaff_RBX = (uint64_t *)unaff_RBX[0xb];
    } while (unaff_RBX != (uint64_t *)0x0);
  }
  cVar5 = FUN_1802b61b0(*(uint64_t *)(unaff_RSI + 0x68));
  if (cVar5 == '\0') {
    puVar13 = *(void **)(*(int64_t *)(unaff_RSI + 0x68) + 0x50);
    puVar17 = &system_buffer_ptr;
    if (puVar13 != (void *)0x0) {
      puVar17 = puVar13;
    }
    puVar13 = &system_buffer_ptr;
    if (*(void **)(unaff_RSI + 0x50) != (void *)0x0) {
      puVar13 = *(void **)(unaff_RSI + 0x50);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_5104_ptr,puVar13,puVar17);
  }
  pcVar9 = "emitters";
  do {
    pcVar16 = pcVar9;
    pcVar9 = pcVar16 + 1;
  } while (*pcVar9 != '\0');
  puVar14 = *(uint64_t **)(unaff_RDI + 0x30);
  do {
    param_1 = extraout_XMM0_Da;
    if (puVar14 == (uint64_t *)0x0) goto FUN_1802b54b3;
    if ((char *)*puVar14 == (char *)0x0) {
      pcVar9 = (char *)0x0;
      pcVar10 = unaff_R14;
    }
    else {
      pcVar9 = (char *)puVar14[2];
      pcVar10 = (char *)*puVar14;
    }
    if (pcVar9 == pcVar16 + -0x180a1804f) {
      pcVar9 = pcVar10 + (int64_t)pcVar9;
      if (pcVar9 <= pcVar10) {
LAB_1802b5270:
        pcVar9 = "emitter";
        do {
          pcVar16 = pcVar9;
          pcVar9 = pcVar16 + 1;
        } while (*pcVar9 != '\0');
        for (puVar14 = (uint64_t *)puVar14[6]; puVar14 != (uint64_t *)0x0;
            puVar14 = (uint64_t *)puVar14[0xb]) {
          if ((char *)*puVar14 == (char *)0x0) {
            pcVar9 = (char *)0x0;
            pcVar10 = unaff_R14;
          }
          else {
            pcVar9 = (char *)puVar14[2];
            pcVar10 = (char *)*puVar14;
          }
          if (pcVar9 == pcVar16 + -0x180a18047) {
            pcVar9 = pcVar9 + (int64_t)pcVar10;
            uVar3 = unaff_XMM6_Da;
            uVar4 = unaff_XMM6_Dc;
            if (pcVar9 <= pcVar10) {
LAB_1802b5304:
              param_11 = uVar4;
              param_10 = uVar3;
              pcVar9 = "_index_";
              do {
                pcVar16 = pcVar9;
                pcVar9 = pcVar16 + 1;
              } while (*pcVar9 != '\0');
              puVar15 = (uint64_t *)puVar14[8];
              if (puVar15 != (uint64_t *)0x0) {
LAB_1802b5320:
                if ((char *)*puVar15 == (char *)0x0) {
                  pcVar9 = (char *)0x0;
                  pcVar10 = unaff_R14;
                }
                else {
                  pcVar9 = (char *)puVar15[2];
                  pcVar10 = (char *)*puVar15;
                }
                if (pcVar9 != pcVar16 + -0x180a1692f) goto LAB_1802b545e;
                pcVar9 = pcVar9 + (int64_t)pcVar10;
                if (pcVar10 < pcVar9) {
                  lVar12 = (int64_t)&unknown_var_9168_ptr - (int64_t)pcVar10;
                  while (*pcVar10 == pcVar10[lVar12]) {
                    pcVar10 = pcVar10 + 1;
                    if (pcVar9 <= pcVar10) goto LAB_1802b5374;
                  }
                  goto LAB_1802b545e;
                }
LAB_1802b5374:
                pcVar9 = unaff_R14;
                if ((char *)puVar15[1] != (char *)0x0) {
                  pcVar9 = (char *)puVar15[1];
                }
                uVar7 = 0xffffffffffffffff;
                do {
                  uVar7 = uVar7 + 1;
                } while (pcVar9[uVar7] != '\0');
                if (((uVar7 < 3) || (*pcVar9 != '0')) ||
                   (puVar13 = &unknown_var_5412_ptr, (pcVar9[1] + 0xa8U & 0xdf) != 0)) {
                  puVar13 = &unknown_var_2208_ptr;
                }
                param_1 = (float)FUN_18010cbc0(param_1,puVar13,aiStackX_20);
                if ((uint64_t)(int64_t)aiStackX_20[0] <
                    (uint64_t)
                    (*(int64_t *)(unaff_RSI + 0xd0) - *(int64_t *)(unaff_RSI + 200) >> 3)) {
                  FUN_180264330(*(uint64_t *)
                                 (*(int64_t *)(unaff_RSI + 200) + (int64_t)aiStackX_20[0] * 8),
                                puVar14);
                  lVar12 = *(int64_t *)(unaff_RSI + 200);
                  lVar2 = *(int64_t *)(lVar12 + (int64_t)aiStackX_20[0] * 8);
                  *(float *)(lVar2 + 0x8c) = *(float *)(lVar2 + 0x8c) * 0.0016666667;
                  lVar12 = *(int64_t *)(lVar12 + (int64_t)aiStackX_20[0] * 8);
                  param_1 = *(float *)(lVar12 + 0x90) * 0.0016666667;
                  *(float *)(lVar12 + 0x90) = param_1;
                }
              }
LAB_1802b5432:
              pcVar9 = "emitter";
              do {
                pcVar16 = pcVar9;
                pcVar9 = pcVar16 + 1;
              } while (*pcVar9 != '\0');
              puVar14 = (uint64_t *)puVar14[0xb];
              if (puVar14 != (uint64_t *)0x0) {
                do {
                  if ((char *)*puVar14 == (char *)0x0) {
                    pcVar9 = (char *)0x0;
                    pcVar10 = unaff_R14;
                  }
                  else {
                    pcVar9 = (char *)puVar14[2];
                    pcVar10 = (char *)*puVar14;
                  }
                  if (pcVar9 == pcVar16 + -0x180a18047) {
                    pcVar9 = pcVar9 + (int64_t)pcVar10;
                    uVar3 = param_10;
                    uVar4 = param_11;
                    if (pcVar9 <= pcVar10) goto LAB_1802b5304;
                    lVar12 = (int64_t)&unknown_var_5080_ptr - (int64_t)pcVar10;
                    while (*pcVar10 == pcVar10[lVar12]) {
                      pcVar10 = pcVar10 + 1;
                      if (pcVar9 <= pcVar10) goto LAB_1802b5304;
                    }
                  }
                  puVar14 = (uint64_t *)puVar14[0xb];
                  if (puVar14 == (uint64_t *)0x0) break;
                } while( true );
              }
              break;
            }
            lVar12 = (int64_t)&unknown_var_5080_ptr - (int64_t)pcVar10;
            while (*pcVar10 == pcVar10[lVar12]) {
              pcVar10 = pcVar10 + 1;
              uVar3 = unaff_XMM6_Da;
              uVar4 = unaff_XMM6_Dc;
              if (pcVar9 <= pcVar10) goto LAB_1802b5304;
            }
          }
        }
FUN_1802b54b3:
        FUN_18026a670(param_1,unaff_RSI + 0xa8);
        *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
                    // WARNING: Subroutine does not return
        FUN_1808fc050(param_9 ^ (uint64_t)&stack0x00000000);
      }
      lVar12 = (int64_t)&unknown_var_5088_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar12]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar9 <= pcVar10) goto LAB_1802b5270;
      }
    }
    puVar14 = (uint64_t *)puVar14[0xb];
  } while( true );
LAB_1802b545e:
  puVar15 = (uint64_t *)puVar15[6];
  if (puVar15 == (uint64_t *)0x0) goto LAB_1802b5432;
  goto LAB_1802b5320;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b4fcf(float param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
void FUN_1802b4fcf(float param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,int32_t param_10,int32_t param_11)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  float *pfVar6;
  uint64_t uVar7;
  int iVar8;
  char *pcVar9;
  int64_t *plVar10;
  int64_t lVar11;
  void *puVar12;
  uint64_t *puVar13;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  char *pcVar14;
  uint64_t *puVar15;
  char *pcVar16;
  void *puVar17;
  int64_t in_R10;
  int64_t in_R11;
  char *unaff_R14;
  float extraout_XMM0_Da;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int aiStackX_20 [2];
  
  while (param_4 = (uint64_t *)param_4[6], param_4 != (uint64_t *)0x0) {
    if ((char *)*param_4 == (char *)0x0) {
      lVar11 = 0;
      pcVar14 = unaff_R14;
    }
    else {
      lVar11 = param_4[2];
      pcVar14 = (char *)*param_4;
    }
    if (lVar11 == in_R10) {
      pcVar16 = pcVar14 + lVar11;
      if (pcVar16 <= pcVar14) {
LAB_1802b4f77:
        param_1 = (float)(**(code **)(*(int64_t *)(unaff_RSI + 0xa8) + 0x10))();
        break;
      }
      lVar11 = in_R11 - (int64_t)pcVar14;
      while (*pcVar14 == pcVar14[lVar11]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar16 <= pcVar14) goto LAB_1802b4f77;
      }
    }
  }
  pcVar14 = "emitter_overrides";
  do {
    pcVar16 = pcVar14;
    pcVar14 = pcVar16 + 1;
  } while (*pcVar14 != '\0');
  for (puVar13 = *(uint64_t **)(unaff_RDI + 0x30); puVar13 != (uint64_t *)0x0;
      puVar13 = (uint64_t *)puVar13[0xb]) {
    if ((char *)*puVar13 == (char *)0x0) {
      pcVar14 = (char *)0x0;
      pcVar9 = unaff_R14;
    }
    else {
      pcVar14 = (char *)puVar13[2];
      pcVar9 = (char *)*puVar13;
    }
    if (pcVar14 == pcVar16 + -0x180a18097) {
      pcVar14 = pcVar9 + (int64_t)pcVar14;
      if (pcVar14 <= pcVar9) {
LAB_1802b5007:
        pcVar14 = "emitter";
        do {
          pcVar16 = pcVar14;
          pcVar14 = pcVar16 + 1;
        } while (*pcVar14 != '\0');
        for (puVar13 = (uint64_t *)puVar13[6]; puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[0xb]) {
          if ((char *)*puVar13 == (char *)0x0) {
            pcVar14 = (char *)0x0;
            pcVar9 = unaff_R14;
          }
          else {
            pcVar14 = (char *)puVar13[2];
            pcVar9 = (char *)*puVar13;
          }
          if (pcVar14 == pcVar16 + -0x180a18047) {
            pcVar14 = pcVar14 + (int64_t)pcVar9;
            if (pcVar14 <= pcVar9) {
LAB_1802b50e0:
              pcVar14 = "guid";
              do {
                pcVar16 = pcVar14;
                pcVar14 = pcVar16 + 1;
              } while (*pcVar14 != '\0');
              for (puVar15 = (uint64_t *)puVar13[8]; puVar15 != (uint64_t *)0x0;
                  puVar15 = (uint64_t *)puVar15[6]) {
                if ((char *)*puVar15 == (char *)0x0) {
                  pcVar14 = (char *)0x0;
                  pcVar9 = unaff_R14;
                }
                else {
                  pcVar14 = (char *)puVar15[2];
                  pcVar9 = (char *)*puVar15;
                }
                if (pcVar14 == pcVar16 + -0x180a04c43) {
                  pcVar14 = pcVar14 + (int64_t)pcVar9;
                  if (pcVar14 <= pcVar9) break;
                  lVar11 = (int64_t)&unknown_var_6228_ptr - (int64_t)pcVar9;
                  while (*pcVar9 == pcVar9[lVar11]) {
                    pcVar9 = pcVar9 + 1;
                    if (pcVar14 <= pcVar9) goto LAB_1802b515c;
                  }
                }
              }
LAB_1802b515c:
              pfVar6 = (float *)FUN_1802c0460(&param_5);
              plVar1 = *(int64_t **)(unaff_RSI + 200);
              param_1 = *pfVar6;
              param_7._4_4_ = pfVar6[1];
              param_8._0_4_ = pfVar6[2];
              param_8._4_4_ = pfVar6[3];
              lVar11 = 0;
              iVar8 = (int)(*(int64_t *)(unaff_RSI + 0xd0) - (int64_t)plVar1 >> 3);
              param_7._0_4_ = param_1;
              if (0 < iVar8) {
                plVar10 = plVar1;
                do {
                  if ((*(int64_t *)*plVar10 == *(int64_t *)pfVar6) &&
                     (((int64_t *)*plVar10)[1] == *(int64_t *)(pfVar6 + 2))) {
                    if (plVar1[lVar11] != 0) {
                      param_1 = (float)FUN_180264330(plVar1[lVar11],puVar13);
                    }
                    break;
                  }
                  lVar11 = lVar11 + 1;
                  plVar10 = plVar10 + 1;
                } while (lVar11 < iVar8);
              }
              pcVar14 = "emitter";
              do {
                pcVar16 = pcVar14;
                pcVar14 = pcVar16 + 1;
              } while (*pcVar14 != '\0');
              puVar13 = (uint64_t *)puVar13[0xb];
              if (puVar13 != (uint64_t *)0x0) {
                do {
                  if ((char *)*puVar13 == (char *)0x0) {
                    pcVar14 = (char *)0x0;
                    pcVar9 = unaff_R14;
                  }
                  else {
                    pcVar14 = (char *)puVar13[2];
                    pcVar9 = (char *)*puVar13;
                  }
                  if (pcVar14 == pcVar16 + -0x180a18047) {
                    pcVar14 = pcVar14 + (int64_t)pcVar9;
                    if (pcVar14 <= pcVar9) goto LAB_1802b50e0;
                    lVar11 = (int64_t)&unknown_var_5080_ptr - (int64_t)pcVar9;
                    while (*pcVar9 == pcVar9[lVar11]) {
                      pcVar9 = pcVar9 + 1;
                      if (pcVar14 <= pcVar9) goto LAB_1802b50e0;
                    }
                  }
                  puVar13 = (uint64_t *)puVar13[0xb];
                  if (puVar13 == (uint64_t *)0x0) break;
                } while( true );
              }
              break;
            }
            lVar11 = (int64_t)&unknown_var_5080_ptr - (int64_t)pcVar9;
            while (*pcVar9 == pcVar9[lVar11]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar14 <= pcVar9) goto LAB_1802b50e0;
            }
          }
        }
        goto FUN_1802b54b3;
      }
      lVar11 = (int64_t)&unknown_var_5160_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar11]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar14 <= pcVar9) goto LAB_1802b5007;
      }
    }
  }
  cVar5 = FUN_1802b61b0(*(uint64_t *)(unaff_RSI + 0x68));
  if (cVar5 == '\0') {
    puVar12 = *(void **)(*(int64_t *)(unaff_RSI + 0x68) + 0x50);
    puVar17 = &system_buffer_ptr;
    if (puVar12 != (void *)0x0) {
      puVar17 = puVar12;
    }
    puVar12 = &system_buffer_ptr;
    if (*(void **)(unaff_RSI + 0x50) != (void *)0x0) {
      puVar12 = *(void **)(unaff_RSI + 0x50);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_5104_ptr,puVar12,puVar17);
  }
  pcVar14 = "emitters";
  do {
    pcVar16 = pcVar14;
    pcVar14 = pcVar16 + 1;
  } while (*pcVar14 != '\0');
  puVar13 = *(uint64_t **)(unaff_RDI + 0x30);
  do {
    param_1 = extraout_XMM0_Da;
    if (puVar13 == (uint64_t *)0x0) goto FUN_1802b54b3;
    if ((char *)*puVar13 == (char *)0x0) {
      pcVar14 = (char *)0x0;
      pcVar9 = unaff_R14;
    }
    else {
      pcVar14 = (char *)puVar13[2];
      pcVar9 = (char *)*puVar13;
    }
    if (pcVar14 == pcVar16 + -0x180a1804f) {
      pcVar14 = pcVar9 + (int64_t)pcVar14;
      if (pcVar14 <= pcVar9) {
LAB_1802b5270:
        pcVar14 = "emitter";
        do {
          pcVar16 = pcVar14;
          pcVar14 = pcVar16 + 1;
        } while (*pcVar14 != '\0');
        for (puVar13 = (uint64_t *)puVar13[6]; puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[0xb]) {
          if ((char *)*puVar13 == (char *)0x0) {
            pcVar14 = (char *)0x0;
            pcVar9 = unaff_R14;
          }
          else {
            pcVar14 = (char *)puVar13[2];
            pcVar9 = (char *)*puVar13;
          }
          if (pcVar14 == pcVar16 + -0x180a18047) {
            pcVar14 = pcVar14 + (int64_t)pcVar9;
            uVar3 = unaff_XMM6_Da;
            uVar4 = unaff_XMM6_Dc;
            if (pcVar14 <= pcVar9) {
LAB_1802b5304:
              param_11 = uVar4;
              param_10 = uVar3;
              pcVar14 = "_index_";
              do {
                pcVar16 = pcVar14;
                pcVar14 = pcVar16 + 1;
              } while (*pcVar14 != '\0');
              puVar15 = (uint64_t *)puVar13[8];
              if (puVar15 != (uint64_t *)0x0) {
LAB_1802b5320:
                if ((char *)*puVar15 == (char *)0x0) {
                  pcVar14 = (char *)0x0;
                  pcVar9 = unaff_R14;
                }
                else {
                  pcVar14 = (char *)puVar15[2];
                  pcVar9 = (char *)*puVar15;
                }
                if (pcVar14 != pcVar16 + -0x180a1692f) goto LAB_1802b545e;
                pcVar14 = pcVar14 + (int64_t)pcVar9;
                if (pcVar9 < pcVar14) {
                  lVar11 = (int64_t)&unknown_var_9168_ptr - (int64_t)pcVar9;
                  while (*pcVar9 == pcVar9[lVar11]) {
                    pcVar9 = pcVar9 + 1;
                    if (pcVar14 <= pcVar9) goto LAB_1802b5374;
                  }
                  goto LAB_1802b545e;
                }
LAB_1802b5374:
                pcVar14 = unaff_R14;
                if ((char *)puVar15[1] != (char *)0x0) {
                  pcVar14 = (char *)puVar15[1];
                }
                uVar7 = 0xffffffffffffffff;
                do {
                  uVar7 = uVar7 + 1;
                } while (pcVar14[uVar7] != '\0');
                if (((uVar7 < 3) || (*pcVar14 != '0')) ||
                   (puVar12 = &unknown_var_5412_ptr, (pcVar14[1] + 0xa8U & 0xdf) != 0)) {
                  puVar12 = &unknown_var_2208_ptr;
                }
                param_1 = (float)FUN_18010cbc0(param_1,puVar12,aiStackX_20);
                if ((uint64_t)(int64_t)aiStackX_20[0] <
                    (uint64_t)
                    (*(int64_t *)(unaff_RSI + 0xd0) - *(int64_t *)(unaff_RSI + 200) >> 3)) {
                  FUN_180264330(*(uint64_t *)
                                 (*(int64_t *)(unaff_RSI + 200) + (int64_t)aiStackX_20[0] * 8),
                                puVar13);
                  lVar11 = *(int64_t *)(unaff_RSI + 200);
                  lVar2 = *(int64_t *)(lVar11 + (int64_t)aiStackX_20[0] * 8);
                  *(float *)(lVar2 + 0x8c) = *(float *)(lVar2 + 0x8c) * 0.0016666667;
                  lVar11 = *(int64_t *)(lVar11 + (int64_t)aiStackX_20[0] * 8);
                  param_1 = *(float *)(lVar11 + 0x90) * 0.0016666667;
                  *(float *)(lVar11 + 0x90) = param_1;
                }
              }
LAB_1802b5432:
              pcVar14 = "emitter";
              do {
                pcVar16 = pcVar14;
                pcVar14 = pcVar16 + 1;
              } while (*pcVar14 != '\0');
              puVar13 = (uint64_t *)puVar13[0xb];
              if (puVar13 != (uint64_t *)0x0) {
                do {
                  if ((char *)*puVar13 == (char *)0x0) {
                    pcVar14 = (char *)0x0;
                    pcVar9 = unaff_R14;
                  }
                  else {
                    pcVar14 = (char *)puVar13[2];
                    pcVar9 = (char *)*puVar13;
                  }
                  if (pcVar14 == pcVar16 + -0x180a18047) {
                    pcVar14 = pcVar14 + (int64_t)pcVar9;
                    uVar3 = param_10;
                    uVar4 = param_11;
                    if (pcVar14 <= pcVar9) goto LAB_1802b5304;
                    lVar11 = (int64_t)&unknown_var_5080_ptr - (int64_t)pcVar9;
                    while (*pcVar9 == pcVar9[lVar11]) {
                      pcVar9 = pcVar9 + 1;
                      if (pcVar14 <= pcVar9) goto LAB_1802b5304;
                    }
                  }
                  puVar13 = (uint64_t *)puVar13[0xb];
                  if (puVar13 == (uint64_t *)0x0) break;
                } while( true );
              }
              break;
            }
            lVar11 = (int64_t)&unknown_var_5080_ptr - (int64_t)pcVar9;
            while (*pcVar9 == pcVar9[lVar11]) {
              pcVar9 = pcVar9 + 1;
              uVar3 = unaff_XMM6_Da;
              uVar4 = unaff_XMM6_Dc;
              if (pcVar14 <= pcVar9) goto LAB_1802b5304;
            }
          }
        }
FUN_1802b54b3:
        FUN_18026a670(param_1,unaff_RSI + 0xa8);
        *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
                    // WARNING: Subroutine does not return
        FUN_1808fc050(param_9 ^ (uint64_t)&stack0x00000000);
      }
      lVar11 = (int64_t)&unknown_var_5088_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar11]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar14 <= pcVar9) goto LAB_1802b5270;
      }
    }
    puVar13 = (uint64_t *)puVar13[0xb];
  } while( true );
LAB_1802b545e:
  puVar15 = (uint64_t *)puVar15[6];
  if (puVar15 == (uint64_t *)0x0) goto LAB_1802b5432;
  goto LAB_1802b5320;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





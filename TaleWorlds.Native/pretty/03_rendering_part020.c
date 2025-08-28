#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part020.c - 2 个函数

// 函数: void FUN_18027a810(int64_t *param_1,int64_t *param_2)
void FUN_18027a810(int64_t *param_1,int64_t *param_2)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  uint64_t uVar4;
  int64_t lVar5;
  char *pcVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  void *puVar10;
  uint64_t *puVar11;
  void *puVar12;
  uint64_t *puVar13;
  char *pcVar14;
  char *pcVar15;
  uint64_t uVar16;
  uint uVar17;
  bool bVar18;
  int8_t auStack_2d8 [32];
  uint auStack_2b8 [4];
  int64_t *plStack_2a8;
  void *puStack_2a0;
  int64_t lStack_298;
  uint uStack_290;
  uint64_t uStack_288;
  uint64_t uStack_280;
  uint64_t uStack_278;
  float fStack_270;
  float fStack_26c;
  uint64_t uStack_268;
  uint64_t uStack_260;
  uint64_t uStack_258;
  void *puStack_250;
  int64_t lStack_248;
  int iStack_240;
  uint64_t uStack_238;
  void *puStack_230;
  int64_t lStack_228;
  int32_t uStack_220;
  uint64_t uStack_218;
  int64_t *aplStack_210 [3];
  int32_t uStack_1f8;
  int32_t uStack_1f4;
  int32_t uStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int32_t uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  int64_t *plStack_198;
  int32_t uStack_190;
  int32_t uStack_18c;
  int32_t uStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  uint64_t uStack_170;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  void *puStack_158;
  char *pcStack_150;
  int iStack_148;
  char acStack_140 [72];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [136];
  uint64_t uStack_58;
  
  uStack_170 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2d8;
  auStack_2b8[1] = 0;
  puStack_2a0 = &system_data_buffer_ptr;
  uStack_288 = 0;
  lStack_298 = 0;
  uStack_290 = 0;
  pcVar15 = "name";
  do {
    pcVar14 = pcVar15;
    pcVar15 = pcVar14 + 1;
  } while (*pcVar15 != '\0');
  for (puVar11 = (uint64_t *)param_2[8]; plStack_2a8 = param_2, puVar11 != (uint64_t *)0x0;
      puVar11 = (uint64_t *)puVar11[6]) {
    pcVar15 = (char *)*puVar11;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)puVar11[2];
    }
    if (pcVar6 == pcVar14 + -0x180a03a83) {
      pcVar6 = pcVar6 + (int64_t)pcVar15;
      if (pcVar6 <= pcVar15) {
LAB_18027a8f4:
        lVar9 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar9 = puVar11[1];
        }
        CoreSystem_ConfigValidator0(&puStack_2a0,lVar9);
        break;
      }
      lVar9 = (int64_t)&system_data_3a84 - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar9]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar6 <= pcVar15) goto LAB_18027a8f4;
      }
    }
  }
  if (0 < (int)uStack_290) {
    lVar9 = FUN_1800b6de0(system_resource_state,&puStack_2a0,1);
    uVar17 = uStack_290;
    if (lVar9 == 0) {
      uVar7 = (uint64_t)uStack_290;
      if (lStack_298 != 0) {
        CoreEngineDataBufferProcessor(param_1 + 0x3e,uVar7);
      }
      if (uVar17 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(param_1[0x3f],lStack_298,uVar7);
      }
      *(int32_t *)(param_1 + 0x40) = 0;
      if (param_1[0x3f] != 0) {
        *(int8_t *)(uVar7 + param_1[0x3f]) = 0;
      }
      *(int32_t *)((int64_t)param_1 + 0x20c) = uStack_288._4_4_;
    }
    else {
      FUN_180275a60(lVar9,param_1,1);
    }
  }
  puStack_250 = &system_data_buffer_ptr;
  uStack_238 = 0;
  lStack_248 = 0;
  iStack_240 = 0;
  pcVar15 = "material";
  do {
    pcVar14 = pcVar15;
    pcVar15 = pcVar14 + 1;
  } while (*pcVar15 != '\0');
  for (puVar11 = (uint64_t *)param_2[8]; puVar11 != (uint64_t *)0x0;
      puVar11 = (uint64_t *)puVar11[6]) {
    pcVar15 = (char *)*puVar11;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)puVar11[2];
    }
    if (pcVar6 == pcVar14 + -0x180a04ebf) {
      pcVar6 = pcVar15 + (int64_t)pcVar6;
      if (pcVar6 <= pcVar15) {
LAB_18027aa35:
        lVar9 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar9 = puVar11[1];
        }
        CoreSystem_ConfigValidator0(&puStack_250,lVar9);
        break;
      }
      lVar9 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar9]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar6 <= pcVar15) goto LAB_18027aa35;
      }
    }
  }
  if (0 < iStack_240) {
    pcVar3 = *(code **)(*param_1 + 0x118);
    uVar4 = FUN_1800b30d0(system_resource_state,&plStack_198,&puStack_250,1);
    (*pcVar3)(param_1,uVar4);
    if (plStack_198 != (int64_t *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
  }
  puStack_250 = &system_data_buffer_ptr;
  if (lStack_248 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_248 = 0;
  uStack_238 = uStack_238 & 0xffffffff00000000;
  puStack_250 = &system_state_ptr;
  puVar11 = (uint64_t *)param_2[6];
  if (puVar11 != (uint64_t *)0x0) {
LAB_18027aad4:
    do {
      uStack_280 = &system_data_buffer_ptr;
      uStack_268 = 0;
      uStack_278 = 0;
      fStack_270 = 0.0;
      pcVar15 = "name";
      do {
        pcVar14 = pcVar15;
        pcVar15 = pcVar14 + 1;
      } while (*pcVar15 != '\0');
      for (puVar13 = (uint64_t *)puVar11[8]; puVar13 != (uint64_t *)0x0;
          puVar13 = (uint64_t *)puVar13[6]) {
        pcVar15 = (char *)*puVar13;
        if (pcVar15 == (char *)0x0) {
          pcVar15 = (char *)0x180d48d24;
          pcVar6 = (char *)0x0;
        }
        else {
          pcVar6 = (char *)puVar13[2];
        }
        if (pcVar6 == pcVar14 + -0x180a03a83) {
          pcVar6 = pcVar15 + (int64_t)pcVar6;
          if (pcVar6 <= pcVar15) {
LAB_18027ab65:
            lVar9 = 0x180d48d24;
            if (puVar13[1] != 0) {
              lVar9 = puVar13[1];
            }
            CoreSystem_ConfigValidator0(&uStack_280,lVar9);
            break;
          }
          lVar9 = (int64_t)&system_data_3a84 - (int64_t)pcVar15;
          while (*pcVar15 == pcVar15[lVar9]) {
            pcVar15 = pcVar15 + 1;
            if (pcVar6 <= pcVar15) goto LAB_18027ab65;
          }
        }
      }
      uVar16 = 0;
      lVar9 = param_1[7];
      uVar7 = uVar16;
      if (param_1[8] - lVar9 >> 4 != 0) {
        do {
          puVar10 = &memory_allocator_3480_ptr;
          lVar9 = *(int64_t *)(lVar9 + uVar16 * 0x10);
          if (*(int64_t *)(lVar9 + 0x1b0) == 0) {
            lVar5 = lVar9 + 0x10;
          }
          else {
            lVar5 = func_0x000180079240();
          }
          pcStack_150 = acStack_140;
          acStack_140[0] = '\0';
          iStack_148 = *(int *)(lVar5 + 0x10);
          puVar12 = &system_buffer_ptr;
          if (*(void **)(lVar5 + 8) != (void *)0x0) {
            puVar12 = *(void **)(lVar5 + 8);
          }
          puStack_158 = puVar10;
          strcpy_s(acStack_140,0x40,puVar12);
          if ((float)iStack_148 == fStack_270) {
            if (iStack_148 == 0) {
LAB_18027ac8e:
              if (fStack_270 != 0.0) goto LAB_18027ac96;
              bVar18 = true;
            }
            else {
              pcVar15 = pcStack_150;
              do {
                cVar1 = *pcVar15;
                cVar2 = pcVar15[uStack_278 - (int64_t)pcStack_150];
                if (cVar1 != cVar2) break;
                pcVar15 = pcVar15 + 1;
              } while (cVar2 != '\0');
              bVar18 = cVar1 == cVar2;
            }
          }
          else {
            if (iStack_148 == 0) goto LAB_18027ac8e;
LAB_18027ac96:
            bVar18 = false;
          }
          if (bVar18) {
            auStack_2b8[0] = 0;
            puStack_f8 = &memory_allocator_3432_ptr;
            puStack_f0 = auStack_e0;
            uStack_e8 = 0;
            auStack_e0[0] = 0;
            pcVar15 = "material";
            do {
              pcVar14 = pcVar15;
              pcVar15 = pcVar14 + 1;
            } while (*pcVar15 != '\0');
            for (puVar13 = (uint64_t *)puVar11[8]; puVar13 != (uint64_t *)0x0;
                puVar13 = (uint64_t *)puVar13[6]) {
              pcVar15 = (char *)*puVar13;
              if (pcVar15 == (char *)0x0) {
                pcVar15 = (char *)0x180d48d24;
                pcVar6 = (char *)0x0;
              }
              else {
                pcVar6 = (char *)puVar13[2];
              }
              if (pcVar6 == pcVar14 + -0x180a04ebf) {
                pcVar6 = pcVar6 + (int64_t)pcVar15;
                if (pcVar6 <= pcVar15) {
LAB_18027ad47:
                  lVar5 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar5 = puVar13[1];
                  }
                  FUN_18004a180(&puStack_f8,lVar5);
                  uVar4 = FUN_1800b30d0(system_resource_state,aplStack_210,&puStack_f8,1);
                  FUN_180076910(lVar9,uVar4);
                  if (aplStack_210[0] != (int64_t *)0x0) {
                    (**(code **)(*aplStack_210[0] + 0x38))();
                  }
                  break;
                }
                lVar5 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar15;
                while (*pcVar15 == pcVar15[lVar5]) {
                  pcVar15 = pcVar15 + 1;
                  if (pcVar6 <= pcVar15) goto LAB_18027ad47;
                }
              }
            }
            pcVar15 = "factor";
            do {
              pcVar14 = pcVar15;
              pcVar15 = pcVar14 + 1;
            } while (*pcVar15 != '\0');
            for (puVar13 = (uint64_t *)puVar11[8]; puVar13 != (uint64_t *)0x0;
                puVar13 = (uint64_t *)puVar13[6]) {
              pcVar15 = (char *)*puVar13;
              if (pcVar15 == (char *)0x0) {
                pcVar15 = (char *)0x180d48d24;
                pcVar6 = (char *)0x0;
              }
              else {
                pcVar6 = (char *)puVar13[2];
              }
              if (pcVar6 == pcVar14 + -0x180a1674b) {
                pcVar6 = pcVar15 + (int64_t)pcVar6;
                if (pcVar6 <= pcVar15) {
LAB_18027ae16:
                  lVar5 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar5 = puVar13[1];
                  }
                  FUN_18010cbc0(lVar5,&rendering_buffer_2208_ptr,auStack_2b8);
                  *(float *)(lVar9 + 0x238) = (float)(auStack_2b8[0] >> 0x10 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x23c) = (float)(auStack_2b8[0] >> 8 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x240) = (float)(auStack_2b8[0] & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x244) = (float)(auStack_2b8[0] >> 0x18) * 0.003921569;
                  break;
                }
                lVar5 = (int64_t)&processed_var_8684_ptr - (int64_t)pcVar15;
                while (*pcVar15 == pcVar15[lVar5]) {
                  pcVar15 = pcVar15 + 1;
                  if (pcVar6 <= pcVar15) goto LAB_18027ae16;
                }
              }
            }
            pcVar15 = "factor2";
            do {
              pcVar14 = pcVar15;
              pcVar15 = pcVar14 + 1;
            } while (*pcVar15 != '\0');
            for (puVar13 = (uint64_t *)puVar11[8]; puVar13 != (uint64_t *)0x0;
                puVar13 = (uint64_t *)puVar13[6]) {
              pcVar15 = (char *)*puVar13;
              if (pcVar15 == (char *)0x0) {
                pcVar6 = (char *)0x0;
                pcVar15 = (char *)0x180d48d24;
              }
              else {
                pcVar6 = (char *)puVar13[2];
              }
              if (pcVar6 == pcVar14 + -0x180a167ff) {
                pcVar6 = pcVar6 + (int64_t)pcVar15;
                if (pcVar6 <= pcVar15) {
LAB_18027af15:
                  lVar5 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar5 = puVar13[1];
                  }
                  FUN_18010cbc0(lVar5,&rendering_buffer_2208_ptr,auStack_2b8);
                  *(float *)(lVar9 + 0x248) = (float)(auStack_2b8[0] >> 0x10 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x24c) = (float)(auStack_2b8[0] >> 8 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x250) = (float)(auStack_2b8[0] & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x254) = (float)(auStack_2b8[0] >> 0x18) * 0.003921569;
                  break;
                }
                lVar5 = (int64_t)&processed_var_8864_ptr - (int64_t)pcVar15;
                while (*pcVar15 == pcVar15[lVar5]) {
                  pcVar15 = pcVar15 + 1;
                  if (pcVar6 <= pcVar15) goto LAB_18027af15;
                }
              }
            }
            lVar5 = FUN_180631b90(puVar11,&processed_var_8832_ptr,&uStack_190);
            if (lVar5 != 0) {
              *(int32_t *)(lVar9 + 0x2a8) = uStack_190;
              *(int32_t *)(lVar9 + 0x2ac) = uStack_18c;
              *(int32_t *)(lVar9 + 0x2b0) = uStack_188;
              *(int32_t *)(lVar9 + 0x2b4) = uStack_184;
            }
            lVar5 = FUN_180631b90(puVar11,&processed_var_8848_ptr,&uStack_190);
            if (lVar5 != 0) {
              *(int32_t *)(lVar9 + 0x2b8) = uStack_190;
              *(int32_t *)(lVar9 + 700) = uStack_18c;
              *(int32_t *)(lVar9 + 0x2c0) = uStack_188;
              *(int32_t *)(lVar9 + 0x2c4) = uStack_184;
            }
            puStack_f8 = &system_state_ptr;
          }
          puStack_158 = &system_state_ptr;
          uVar17 = (int)uVar7 + 1;
          uVar16 = uVar16 + 1;
          lVar9 = param_1[7];
          uVar7 = (uint64_t)uVar17;
        } while ((uint64_t)(int64_t)(int)uVar17 < (uint64_t)(param_1[8] - lVar9 >> 4));
      }
      uStack_280 = &system_data_buffer_ptr;
      if (uStack_278 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      uStack_278 = 0;
      uStack_268 = uStack_268 & 0xffffffff00000000;
      uStack_280 = &system_state_ptr;
      pcVar15 = "mesh";
      do {
        pcVar14 = pcVar15;
        pcVar15 = pcVar14 + 1;
      } while (*pcVar15 != '\0');
      while( true ) {
        do {
          puVar11 = (uint64_t *)puVar11[0xb];
          param_2 = plStack_2a8;
          if (puVar11 == (uint64_t *)0x0) goto LAB_18027b0de;
          pcVar15 = (char *)*puVar11;
          if (pcVar15 == (char *)0x0) {
            pcVar15 = (char *)0x180d48d24;
            pcVar6 = (char *)0x0;
          }
          else {
            pcVar6 = (char *)puVar11[2];
          }
        } while (pcVar6 != pcVar14 + -0x180a0f3e7);
        pcVar6 = pcVar15 + (int64_t)pcVar6;
        if (pcVar6 <= pcVar15) break;
        lVar9 = (int64_t)&processed_var_9144_ptr - (int64_t)pcVar15;
        while (*pcVar15 == pcVar15[lVar9]) {
          pcVar15 = pcVar15 + 1;
          if (pcVar6 <= pcVar15) goto LAB_18027aad4;
        }
      }
    } while( true );
  }
LAB_18027b0de:
  auStack_2b8[2] = 0;
  pcVar15 = "modified_id";
  do {
    pcVar14 = pcVar15;
    pcVar15 = pcVar14 + 1;
  } while (*pcVar15 != '\0');
  puVar11 = (uint64_t *)param_2[8];
  do {
    if (puVar11 == (uint64_t *)0x0) goto LAB_18027b1b5;
    pcVar15 = (char *)*puVar11;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)puVar11[2];
    }
    if (pcVar6 == pcVar14 + -0x180a16827) {
      pcVar6 = pcVar6 + (int64_t)pcVar15;
      if (pcVar6 <= pcVar15) {
LAB_18027b154:
        pcVar15 = (char *)0x180d48d24;
        if ((char *)puVar11[1] != (char *)0x0) {
          pcVar15 = (char *)puVar11[1];
        }
        uVar7 = 0xffffffffffffffff;
        do {
          uVar7 = uVar7 + 1;
        } while (pcVar15[uVar7] != '\0');
        if (((uVar7 < 3) || (*pcVar15 != '0')) ||
           (puVar10 = &processed_var_5412_ptr, (pcVar15[1] + 0xa8U & 0xdf) != 0)) {
          puVar10 = &rendering_buffer_2208_ptr;
        }
        FUN_18010cbc0(pcVar15,puVar10,auStack_2b8 + 2);
        *(uint *)((int64_t)param_1 + 0x324) = auStack_2b8[2];
LAB_18027b1b5:
        *(int8_t *)((int64_t)param_1 + 0x32c) = 0;
        puStack_230 = &system_data_buffer_ptr;
        uStack_218 = 0;
        lStack_228 = 0;
        uStack_220 = 0;
        pcVar15 = "second_material";
        do {
          pcVar14 = pcVar15;
          pcVar15 = pcVar14 + 1;
        } while (*pcVar15 != '\0');
        puVar11 = (uint64_t *)param_2[8];
        do {
          if (puVar11 == (uint64_t *)0x0) {
LAB_18027b312:
            uStack_180 = (int32_t)param_1[0x6c];
            uStack_17c = *(int32_t *)((int64_t)param_1 + 0x364);
            uStack_178 = (int32_t)param_1[0x6d];
            uStack_174 = *(int32_t *)((int64_t)param_1 + 0x36c);
            FUN_1801c1720(param_1 + 0x66,&uStack_1f8);
            FUN_180085020(param_1 + 0x66,&fStack_1e8);
            FUN_180631960(param_2,&processed_var_8872_ptr,&uStack_180);
            FUN_180631960(param_2,&processed_var_8888_ptr,&uStack_1f8);
            FUN_180631960(param_2,&processed_var_8408_ptr,&fStack_1e8);
            uStack_1a8 = CONCAT44(uStack_17c,uStack_180);
            uStack_1a0 = CONCAT44(uStack_174,uStack_178);
            uStack_280 = (void *)0x3f800000;
            uStack_278 = 0;
            fStack_270 = 0.0;
            fStack_26c = 1.0;
            uStack_268 = 0;
            uStack_260 = 0;
            uStack_258 = 0x3f800000;
            FUN_180085c10(&uStack_280,uStack_1f0);
            FUN_180085970(&uStack_280,uStack_1f8);
            FUN_180085ac0(&uStack_280,uStack_1f4);
            uStack_1cc = uStack_278._4_4_;
            uStack_1bc = uStack_268._4_4_;
            uStack_1ac = uStack_258._4_4_;
            fStack_1d8 = (float)uStack_280 * fStack_1e8;
            fStack_1d4 = uStack_280._4_4_ * fStack_1e8;
            fStack_1d0 = (float)uStack_278 * fStack_1e8;
            fStack_1c8 = fStack_270 * fStack_1e4;
            fStack_1c4 = fStack_26c * fStack_1e4;
            fStack_1c0 = (float)uStack_268 * fStack_1e4;
            fStack_1b8 = (float)uStack_260 * fStack_1e0;
            fStack_1b4 = uStack_260._4_4_ * fStack_1e0;
            fStack_1b0 = (float)uStack_258 * fStack_1e0;
            (**(code **)(*param_1 + 0x148))(param_1,&fStack_1d8);
            FUN_180276f30(param_1,(int64_t)param_1 + 0x214,1);
            lVar9 = FUN_180631b90(param_2,&processed_var_8848_ptr,&uStack_168);
            if ((lVar9 != 0) && (plVar8 = (int64_t *)param_1[7], plVar8 < (int64_t *)param_1[8]))
            {
              do {
                lVar9 = *plVar8;
                *(int32_t *)(lVar9 + 0x2b8) = uStack_168;
                *(int32_t *)(lVar9 + 700) = uStack_164;
                *(int32_t *)(lVar9 + 0x2c0) = uStack_160;
                *(int32_t *)(lVar9 + 0x2c4) = uStack_15c;
                plVar8 = plVar8 + 2;
              } while (plVar8 < (int64_t *)param_1[8]);
            }
            puStack_230 = &system_data_buffer_ptr;
            if (lStack_228 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lStack_228 = 0;
            uStack_218 = uStack_218 & 0xffffffff00000000;
            puStack_230 = &system_state_ptr;
            puStack_2a0 = &system_data_buffer_ptr;
            if (lStack_298 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lStack_298 = 0;
            uStack_288 = uStack_288 & 0xffffffff00000000;
            puStack_2a0 = &system_state_ptr;
                    // WARNING: Subroutine does not return
            SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_2d8);
          }
          pcVar15 = (char *)*puVar11;
          if (pcVar15 == (char *)0x0) {
            pcVar15 = (char *)0x180d48d24;
            pcVar6 = (char *)0x0;
          }
          else {
            pcVar6 = (char *)puVar11[2];
          }
          if (pcVar6 == pcVar14 + -0x180a1683f) {
            pcVar6 = pcVar15 + (int64_t)pcVar6;
            if (pcVar6 <= pcVar15) {
LAB_18027b254:
              lVar9 = 0x180d48d24;
              if (puVar11[1] != 0) {
                lVar9 = puVar11[1];
              }
              CoreSystem_ConfigValidator0(&puStack_230,lVar9);
              plVar8 = (int64_t *)FUN_1800b30d0(system_resource_state,aplStack_210,&puStack_230,1);
              auStack_2b8[1] = 4;
              plVar8 = (int64_t *)*plVar8;
              if (plVar8 != (int64_t *)0x0) {
                plStack_2a8 = plVar8;
                (**(code **)(*plVar8 + 0x28))(plVar8);
              }
              plStack_2a8 = (int64_t *)param_1[0x77];
              param_1[0x77] = (int64_t)plVar8;
              if (plStack_2a8 != (int64_t *)0x0) {
                (**(code **)(*plStack_2a8 + 0x38))();
              }
              auStack_2b8[1] = 0;
              if (aplStack_210[0] != (int64_t *)0x0) {
                (**(code **)(*aplStack_210[0] + 0x38))();
              }
              FUN_1800b30d0(system_resource_state,&plStack_2a8,&puStack_230,1);
              auStack_2b8[1] = 0;
              if (plStack_2a8 != (int64_t *)0x0) {
                (**(code **)(*plStack_2a8 + 0x38))();
              }
              goto LAB_18027b312;
            }
            lVar9 = (int64_t)&processed_var_8928_ptr - (int64_t)pcVar15;
            while (*pcVar15 == pcVar15[lVar9]) {
              pcVar15 = pcVar15 + 1;
              if (pcVar6 <= pcVar15) goto LAB_18027b254;
            }
          }
          puVar11 = (uint64_t *)puVar11[6];
        } while( true );
      }
      lVar9 = (int64_t)&processed_var_8904_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar9]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar6 <= pcVar15) goto LAB_18027b154;
      }
    }
    puVar11 = (uint64_t *)puVar11[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18027b5d0(int64_t param_1,int64_t param_2)
void FUN_18027b5d0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  void *puVar5;
  uint64_t uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int aiStackX_10 [2];
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  int iStack_98;
  int iStack_94;
  uint auStack_90 [2];
  void *puStack_88;
  int64_t lStack_80;
  uint uStack_78;
  int32_t uStack_70;
  void *puStack_68;
  int64_t lStack_60;
  uint uStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [4];
  int8_t auStack_44 [4];
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  iVar1 = 0;
  *puVar2 = 0;
  *(int8_t *)(puVar2 + 2) = 0;
  FUN_18062dee0(puVar2,puVar5,&processed_var_4880_ptr);
  if (puVar2[1] != 0) {
    fread(auStack_90,4,1);
    if (auStack_90[0] == 0x31444d4d) {
      fread(&iStack_94,4,1,puVar2[1]);
      if (0 < iStack_94) {
        do {
          fread(aiStackX_18,4,1,puVar2[1]);
          lVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)(aiStackX_18[0] + 1),0x10,3);
          fread(lVar3,1,(int64_t)aiStackX_18[0],puVar2[1]);
          *(int8_t *)(aiStackX_18[0] + lVar3) = 0;
          FUN_180627910(&puStack_68,lVar3);
          while ((0 < (int)uStack_58 && (lVar4 = strstr(lStack_60,&system_data_ff10), lVar4 != 0))) {
            iVar9 = 6;
            iVar8 = (int)lVar4 - (int)lStack_60;
            if (uStack_58 < iVar8 + 6U) {
              iVar9 = uStack_58 - iVar8;
            }
            uVar7 = iVar8 + iVar9;
            if (uVar7 < uStack_58) {
              lVar4 = (int64_t)(int)uVar7;
              do {
                *(int8_t *)((lVar4 - iVar9) + lStack_60) = *(int8_t *)(lVar4 + lStack_60);
                uVar7 = uVar7 + 1;
                lVar4 = lVar4 + 1;
              } while (uVar7 < uStack_58);
            }
            uStack_58 = uStack_58 - iVar9;
            *(int8_t *)((uint64_t)uStack_58 + lStack_60) = 0;
          }
          if (*(uint64_t *)(param_1 + 8) < *(uint64_t *)(param_1 + 0x10)) {
            *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_1 + 8) + 0x20;
            CoreEngineDataTransformer();
          }
          else {
            FUN_180059820(param_1,&puStack_68);
          }
          fread(auStack_44,4,1,puVar2[1]);
          fread(&iStack_98,4,1,puVar2[1]);
          lVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)iStack_98 << 2,0x10,3);
          fread(lVar4,4,(int64_t)iStack_98,puVar2[1]);
          if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(lVar4);
          }
          if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(lVar3);
          }
          puStack_68 = &system_data_buffer_ptr;
          if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_60 = 0;
          uStack_50 = 0;
          puStack_68 = &system_state_ptr;
          iVar1 = iVar1 + 1;
        } while (iVar1 < iStack_94);
      }
    }
    else if (0 < (int)auStack_90[0]) {
      uVar6 = (uint64_t)auStack_90[0];
      do {
        fread(aiStackX_10,4,1,puVar2[1]);
        lVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)(aiStackX_10[0] + 1),0x10,3);
        fread(lVar3,1,(int64_t)aiStackX_10[0],puVar2[1]);
        *(int8_t *)(aiStackX_10[0] + lVar3) = 0;
        fread(auStack_48,4,1,puVar2[1]);
        FUN_180627910(&puStack_88,lVar3);
        while ((0 < (int)uStack_78 && (lVar4 = strstr(lStack_80,&system_data_ff10), lVar4 != 0))) {
          iVar8 = 6;
          iVar1 = (int)lVar4 - (int)lStack_80;
          if (uStack_78 < iVar1 + 6U) {
            iVar8 = uStack_78 - iVar1;
          }
          uVar7 = iVar1 + iVar8;
          if (uVar7 < uStack_78) {
            lVar4 = (int64_t)(int)uVar7;
            do {
              *(int8_t *)((lVar4 - iVar8) + lStack_80) = *(int8_t *)(lVar4 + lStack_80);
              uVar7 = uVar7 + 1;
              lVar4 = lVar4 + 1;
            } while (uVar7 < uStack_78);
          }
          uStack_78 = uStack_78 - iVar8;
          *(int8_t *)((uint64_t)uStack_78 + lStack_80) = 0;
        }
        if (*(uint64_t *)(param_1 + 8) < *(uint64_t *)(param_1 + 0x10)) {
          *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_1 + 8) + 0x20;
          CoreEngineDataTransformer();
        }
        else {
          FUN_180059820(param_1,&puStack_88);
        }
        fread(aiStackX_20,4,1,puVar2[1]);
        lVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)aiStackX_20[0] << 2,0x10,3);
        fread(lVar4,4,(int64_t)aiStackX_20[0],puVar2[1]);
        if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar4);
        }
        if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar3);
        }
        puStack_88 = &system_data_buffer_ptr;
        if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_80 = 0;
        uStack_70 = 0;
        puStack_88 = &system_state_ptr;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (puVar2[1] != 0) {
      fclose();
      puVar2[1] = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




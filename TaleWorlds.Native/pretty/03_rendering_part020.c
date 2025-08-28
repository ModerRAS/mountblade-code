#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part020.c - 2 个函数
// 函数: void DataStructure_7a810(int64_t *param_1,int64_t *param_2)
void DataStructure_7a810(int64_t *param_1,int64_t *param_2)
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
  int8_t stack_array_2d8 [32];
  uint stack_array_2b8 [4];
  int64_t *plStack_2a8;
  void *plocal_var_2a0;
  int64_t lStack_298;
  uint local_var_290;
  uint64_t local_var_288;
  uint64_t local_var_280;
  uint64_t local_var_278;
  float fStack_270;
  float fStack_26c;
  uint64_t local_var_268;
  uint64_t local_var_260;
  uint64_t local_var_258;
  void *plocal_var_250;
  int64_t lStack_248;
  int iStack_240;
  uint64_t local_var_238;
  void *plocal_var_230;
  int64_t lStack_228;
  int32_t local_var_220;
  uint64_t local_var_218;
  int64_t *aplStack_210 [3];
  int32_t local_var_1f8;
  int32_t local_var_1f4;
  int32_t local_var_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t local_var_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int32_t local_var_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t local_var_1ac;
  uint64_t local_var_1a8;
  uint64_t local_var_1a0;
  int64_t *plStack_198;
  int32_t local_var_190;
  int32_t local_var_18c;
  int32_t local_var_188;
  int32_t local_var_184;
  int32_t local_var_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  int32_t local_var_174;
  uint64_t local_var_170;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  void *plocal_var_158;
  char *pcStack_150;
  int iStack_148;
  char acStack_140 [72];
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int8_t stack_array_e0 [136];
  uint64_t local_var_58;
  local_var_170 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2d8;
  stack_array_2b8[1] = 0;
  plocal_var_2a0 = &system_data_buffer_ptr;
  local_var_288 = 0;
  lStack_298 = 0;
  local_var_290 = 0;
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
        CoreSystem_ConfigValidator0(&plocal_var_2a0,lVar9);
        break;
      }
      lVar9 = (int64_t)&system_data_3a84 - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar9]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar6 <= pcVar15) goto LAB_18027a8f4;
      }
    }
  }
  if (0 < (int)local_var_290) {
    lVar9 = RenderingSystem_VertexProcessor(system_resource_state,&plocal_var_2a0,1);
    uVar17 = local_var_290;
    if (lVar9 == 0) {
      uVar7 = (uint64_t)local_var_290;
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
      *(int32_t *)((int64_t)param_1 + 0x20c) = local_var_288._4_4_;
    }
    else {
      RenderingSystem_275A60(lVar9,param_1,1);
    }
  }
  plocal_var_250 = &system_data_buffer_ptr;
  local_var_238 = 0;
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
        CoreSystem_ConfigValidator0(&plocal_var_250,lVar9);
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
    uVar4 = SystemCore_PerformanceMonitor(system_resource_state,&plStack_198,&plocal_var_250,1);
    (*pcVar3)(param_1,uVar4);
    if (plStack_198 != (int64_t *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
  }
  plocal_var_250 = &system_data_buffer_ptr;
  if (lStack_248 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_248 = 0;
  local_var_238 = local_var_238 & 0xffffffff00000000;
  plocal_var_250 = &system_state_ptr;
  puVar11 = (uint64_t *)param_2[6];
  if (puVar11 != (uint64_t *)0x0) {
LAB_18027aad4:
    do {
      local_var_280 = &system_data_buffer_ptr;
      local_var_268 = 0;
      local_var_278 = 0;
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
            CoreSystem_ConfigValidator0(&local_var_280,lVar9);
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
            lVar5 = SystemFunction_000180079240();
          }
          pcStack_150 = acStack_140;
          acStack_140[0] = '\0';
          iStack_148 = *(int *)(lVar5 + 0x10);
          puVar12 = &system_buffer_ptr;
          if (*(void **)(lVar5 + 8) != (void *)0x0) {
            puVar12 = *(void **)(lVar5 + 8);
          }
          plocal_var_158 = puVar10;
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
                cVar2 = pcVar15[local_var_278 - (int64_t)pcStack_150];
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
            stack_array_2b8[0] = 0;
            plocal_var_f8 = &memory_allocator_3432_ptr;
            plocal_var_f0 = stack_array_e0;
            local_var_e8 = 0;
            stack_array_e0[0] = 0;
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
                  GenericFunction_18004a180(&plocal_var_f8,lVar5);
                  uVar4 = SystemCore_PerformanceMonitor(system_resource_state,aplStack_210,&plocal_var_f8,1);
                  UltraHighFreq_SecurityValidator1(lVar9,uVar4);
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
                  SystemCore_NetworkHandler(lVar5,&rendering_buffer_2208_ptr,stack_array_2b8);
                  *(float *)(lVar9 + 0x238) = (float)(stack_array_2b8[0] >> 0x10 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x23c) = (float)(stack_array_2b8[0] >> 8 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x240) = (float)(stack_array_2b8[0] & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x244) = (float)(stack_array_2b8[0] >> 0x18) * 0.003921569;
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
                  SystemCore_NetworkHandler(lVar5,&rendering_buffer_2208_ptr,stack_array_2b8);
                  *(float *)(lVar9 + 0x248) = (float)(stack_array_2b8[0] >> 0x10 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x24c) = (float)(stack_array_2b8[0] >> 8 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x250) = (float)(stack_array_2b8[0] & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x254) = (float)(stack_array_2b8[0] >> 0x18) * 0.003921569;
                  break;
                }
                lVar5 = (int64_t)&processed_var_8864_ptr - (int64_t)pcVar15;
                while (*pcVar15 == pcVar15[lVar5]) {
                  pcVar15 = pcVar15 + 1;
                  if (pcVar6 <= pcVar15) goto LAB_18027af15;
                }
              }
            }
            lVar5 = UtilitiesSystem_31b90(puVar11,&processed_var_8832_ptr,&local_var_190);
            if (lVar5 != 0) {
              *(int32_t *)(lVar9 + 0x2a8) = local_var_190;
              *(int32_t *)(lVar9 + 0x2ac) = local_var_18c;
              *(int32_t *)(lVar9 + 0x2b0) = local_var_188;
              *(int32_t *)(lVar9 + 0x2b4) = local_var_184;
            }
            lVar5 = UtilitiesSystem_31b90(puVar11,&processed_var_8848_ptr,&local_var_190);
            if (lVar5 != 0) {
              *(int32_t *)(lVar9 + 0x2b8) = local_var_190;
              *(int32_t *)(lVar9 + 700) = local_var_18c;
              *(int32_t *)(lVar9 + 0x2c0) = local_var_188;
              *(int32_t *)(lVar9 + 0x2c4) = local_var_184;
            }
            plocal_var_f8 = &system_state_ptr;
          }
          plocal_var_158 = &system_state_ptr;
          uVar17 = (int)uVar7 + 1;
          uVar16 = uVar16 + 1;
          lVar9 = param_1[7];
          uVar7 = (uint64_t)uVar17;
        } while ((uint64_t)(int64_t)(int)uVar17 < (uint64_t)(param_1[8] - lVar9 >> 4));
      }
      local_var_280 = &system_data_buffer_ptr;
      if (local_var_278 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      local_var_278 = 0;
      local_var_268 = local_var_268 & 0xffffffff00000000;
      local_var_280 = &system_state_ptr;
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
  stack_array_2b8[2] = 0;
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
        SystemCore_NetworkHandler(pcVar15,puVar10,stack_array_2b8 + 2);
        *(uint *)((int64_t)param_1 + 0x324) = stack_array_2b8[2];
LAB_18027b1b5:
        *(int8_t *)((int64_t)param_1 + 0x32c) = 0;
        plocal_var_230 = &system_data_buffer_ptr;
        local_var_218 = 0;
        lStack_228 = 0;
        local_var_220 = 0;
        pcVar15 = "second_material";
        do {
          pcVar14 = pcVar15;
          pcVar15 = pcVar14 + 1;
        } while (*pcVar15 != '\0');
        puVar11 = (uint64_t *)param_2[8];
        do {
          if (puVar11 == (uint64_t *)0x0) {
LAB_18027b312:
            local_var_180 = (int32_t)param_1[0x6c];
            local_var_17c = *(int32_t *)((int64_t)param_1 + 0x364);
            local_var_178 = (int32_t)param_1[0x6d];
            local_var_174 = *(int32_t *)((int64_t)param_1 + 0x36c);
            CoreEngine_1C1720(param_1 + 0x66,&local_var_1f8);
            RenderingSystem_LightSystem(param_1 + 0x66,&fStack_1e8);
            StringProcessor(param_2,&processed_var_8872_ptr,&local_var_180);
            StringProcessor(param_2,&processed_var_8888_ptr,&local_var_1f8);
            StringProcessor(param_2,&processed_var_8408_ptr,&fStack_1e8);
            local_var_1a8 = CONCAT44(local_var_17c,local_var_180);
            local_var_1a0 = CONCAT44(local_var_174,local_var_178);
            local_var_280 = (void *)0x3f800000;
            local_var_278 = 0;
            fStack_270 = 0.0;
            fStack_26c = 1.0;
            local_var_268 = 0;
            local_var_260 = 0;
            local_var_258 = 0x3f800000;
            GenericFunction_180085c10(&local_var_280,local_var_1f0);
            GenericFunction_180085970(&local_var_280,local_var_1f8);
            GenericFunction_180085ac0(&local_var_280,local_var_1f4);
            local_var_1cc = local_var_278._4_4_;
            local_var_1bc = local_var_268._4_4_;
            local_var_1ac = local_var_258._4_4_;
            fStack_1d8 = (float)local_var_280 * fStack_1e8;
            fStack_1d4 = local_var_280._4_4_ * fStack_1e8;
            fStack_1d0 = (float)local_var_278 * fStack_1e8;
            fStack_1c8 = fStack_270 * fStack_1e4;
            fStack_1c4 = fStack_26c * fStack_1e4;
            fStack_1c0 = (float)local_var_268 * fStack_1e4;
            fStack_1b8 = (float)local_var_260 * fStack_1e0;
            fStack_1b4 = local_var_260._4_4_ * fStack_1e0;
            fStack_1b0 = (float)local_var_258 * fStack_1e0;
            (**(code **)(*param_1 + 0x148))(param_1,&fStack_1d8);
            SystemCore_UpdateState(param_1,(int64_t)param_1 + 0x214,1);
            lVar9 = UtilitiesSystem_31b90(param_2,&processed_var_8848_ptr,&local_var_168);
            if ((lVar9 != 0) && (plVar8 = (int64_t *)param_1[7], plVar8 < (int64_t *)param_1[8]))
            {
              do {
                lVar9 = *plVar8;
                *(int32_t *)(lVar9 + 0x2b8) = local_var_168;
                *(int32_t *)(lVar9 + 700) = local_var_164;
                *(int32_t *)(lVar9 + 0x2c0) = local_var_160;
                *(int32_t *)(lVar9 + 0x2c4) = local_var_15c;
                plVar8 = plVar8 + 2;
              } while (plVar8 < (int64_t *)param_1[8]);
            }
            plocal_var_230 = &system_data_buffer_ptr;
            if (lStack_228 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lStack_228 = 0;
            local_var_218 = local_var_218 & 0xffffffff00000000;
            plocal_var_230 = &system_state_ptr;
            plocal_var_2a0 = &system_data_buffer_ptr;
            if (lStack_298 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lStack_298 = 0;
            local_var_288 = local_var_288 & 0xffffffff00000000;
            plocal_var_2a0 = &system_state_ptr;
// WARNING: Subroutine does not return
            SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_2d8);
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
              CoreSystem_ConfigValidator0(&plocal_var_230,lVar9);
              plVar8 = (int64_t *)SystemCore_PerformanceMonitor(system_resource_state,aplStack_210,&plocal_var_230,1);
              stack_array_2b8[1] = 4;
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
              stack_array_2b8[1] = 0;
              if (aplStack_210[0] != (int64_t *)0x0) {
                (**(code **)(*aplStack_210[0] + 0x38))();
              }
              SystemCore_PerformanceMonitor(system_resource_state,&plStack_2a8,&plocal_var_230,1);
              stack_array_2b8[1] = 0;
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
// 函数: void DataStructure_7b5d0(int64_t param_1,int64_t param_2)
void DataStructure_7b5d0(int64_t param_1,int64_t param_2)
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
  uint stack_array_90 [2];
  void *plocal_var_88;
  int64_t lStack_80;
  uint local_var_78;
  int32_t local_var_70;
  void *plocal_var_68;
  int64_t lStack_60;
  uint local_var_58;
  int32_t local_var_50;
  int8_t stack_array_48 [4];
  int8_t stack_array_44 [4];
  uint64_t local_var_40;
  local_var_40 = 0xfffffffffffffffe;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  iVar1 = 0;
  *puVar2 = 0;
  *(int8_t *)(puVar2 + 2) = 0;
  SystemCore_Validator(puVar2,puVar5,&processed_var_4880_ptr);
  if (puVar2[1] != 0) {
    fread(stack_array_90,4,1);
    if (stack_array_90[0] == 0x31444d4d) {
      fread(&iStack_94,4,1,puVar2[1]);
      if (0 < iStack_94) {
        do {
          fread(aiStackX_18,4,1,puVar2[1]);
          lVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)(aiStackX_18[0] + 1),0x10,3);
          fread(lVar3,1,(int64_t)aiStackX_18[0],puVar2[1]);
          *(int8_t *)(aiStackX_18[0] + lVar3) = 0;
          SystemCore_CacheManager(&plocal_var_68,lVar3);
          while ((0 < (int)local_var_58 && (lVar4 = strstr(lStack_60,&system_data_ff10), lVar4 != 0))) {
            iVar9 = 6;
            iVar8 = (int)lVar4 - (int)lStack_60;
            if (local_var_58 < iVar8 + 6U) {
              iVar9 = local_var_58 - iVar8;
            }
            uVar7 = iVar8 + iVar9;
            if (uVar7 < local_var_58) {
              lVar4 = (int64_t)(int)uVar7;
              do {
                *(int8_t *)((lVar4 - iVar9) + lStack_60) = *(int8_t *)(lVar4 + lStack_60);
                uVar7 = uVar7 + 1;
                lVar4 = lVar4 + 1;
              } while (uVar7 < local_var_58);
            }
            local_var_58 = local_var_58 - iVar9;
            *(int8_t *)((uint64_t)local_var_58 + lStack_60) = 0;
          }
          if (*(uint64_t *)(param_1 + 8) < *(uint64_t *)(param_1 + 0x10)) {
            *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_1 + 8) + 0x20;
            CoreEngineDataTransformer();
          }
          else {
            SystemCore_BackupSystem(param_1,&plocal_var_68);
          }
          fread(stack_array_44,4,1,puVar2[1]);
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
          plocal_var_68 = &system_data_buffer_ptr;
          if (lStack_60 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_60 = 0;
          local_var_50 = 0;
          plocal_var_68 = &system_state_ptr;
          iVar1 = iVar1 + 1;
        } while (iVar1 < iStack_94);
      }
    }
    else if (0 < (int)stack_array_90[0]) {
      uVar6 = (uint64_t)stack_array_90[0];
      do {
        fread(aiStackX_10,4,1,puVar2[1]);
        lVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)(aiStackX_10[0] + 1),0x10,3);
        fread(lVar3,1,(int64_t)aiStackX_10[0],puVar2[1]);
        *(int8_t *)(aiStackX_10[0] + lVar3) = 0;
        fread(stack_array_48,4,1,puVar2[1]);
        SystemCore_CacheManager(&plocal_var_88,lVar3);
        while ((0 < (int)local_var_78 && (lVar4 = strstr(lStack_80,&system_data_ff10), lVar4 != 0))) {
          iVar8 = 6;
          iVar1 = (int)lVar4 - (int)lStack_80;
          if (local_var_78 < iVar1 + 6U) {
            iVar8 = local_var_78 - iVar1;
          }
          uVar7 = iVar1 + iVar8;
          if (uVar7 < local_var_78) {
            lVar4 = (int64_t)(int)uVar7;
            do {
              *(int8_t *)((lVar4 - iVar8) + lStack_80) = *(int8_t *)(lVar4 + lStack_80);
              uVar7 = uVar7 + 1;
              lVar4 = lVar4 + 1;
            } while (uVar7 < local_var_78);
          }
          local_var_78 = local_var_78 - iVar8;
          *(int8_t *)((uint64_t)local_var_78 + lStack_80) = 0;
        }
        if (*(uint64_t *)(param_1 + 8) < *(uint64_t *)(param_1 + 0x10)) {
          *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_1 + 8) + 0x20;
          CoreEngineDataTransformer();
        }
        else {
          SystemCore_BackupSystem(param_1,&plocal_var_88);
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
        plocal_var_88 = &system_data_buffer_ptr;
        if (lStack_80 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_80 = 0;
        local_var_70 = 0;
        plocal_var_88 = &system_state_ptr;
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
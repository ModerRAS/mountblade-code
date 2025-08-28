#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part043.c - 2 个函数

// 函数: void FUN_1801f6650(int64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
void FUN_1801f6650(int64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  void *puVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int32_t uVar10;
  int64_t *plVar11;
  int *piVar12;
  uint uVar13;
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t auStack_2b8 [32];
  int32_t uStack_298;
  int32_t uStack_290;
  char acStack_288 [8];
  int32_t uStack_280;
  int32_t uStack_27c;
  void *puStack_278;
  void **ppuStack_270;
  uint64_t uStack_268;
  int32_t uStack_260;
  int64_t *plStack_258;
  void *puStack_250;
  int64_t lStack_248;
  int32_t uStack_240;
  uint64_t uStack_238;
  int32_t uStack_230;
  int32_t uStack_22c;
  int32_t uStack_228;
  int32_t uStack_224;
  int64_t *plStack_220;
  int8_t auStack_218 [4];
  int8_t auStack_214 [4];
  uint64_t uStack_210;
  void *puStack_208;
  void **ppuStack_200;
  uint64_t uStack_1f8;
  int32_t uStack_1f0;
  uint64_t uStack_1e8;
  int8_t auStack_1e0 [32];
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  int64_t *plStack_1b0;
  void **ppuStack_1a8;
  int iStack_1a0;
  int iStack_19c;
  uint64_t uStack_198;
  float fStack_190;
  int16_t uStack_18c;
  int16_t uStack_18a;
  int32_t uStack_188;
  int32_t uStack_184;
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [72];
  void *puStack_118;
  void *puStack_110;
  uint uStack_108;
  uint8_t auStack_100 [136];
  uint64_t uStack_78;
  
  uStack_210 = 0xfffffffffffffffe;
  uStack_78 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2b8;
  plVar11 = (int64_t *)0x0;
  uVar10 = 0;
  puStack_118 = &memory_allocator_3432_ptr;
  puStack_110 = auStack_100;
  auStack_100[0] = 0;
  uStack_108 = 0xc;
  uStack_280 = param_4;
  strcpy_s(auStack_100,0x80,&system_data_eb68);
  puVar5 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar5 = (void *)param_1[3];
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (puVar5[lVar3] != '\0');
  iVar2 = (int)lVar3;
  if ((0 < iVar2) && (uStack_108 + iVar2 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_110 + uStack_108,puVar5,(int64_t)(iVar2 + 1));
  }
  puVar5 = &system_buffer_ptr;
  if (puStack_110 != (void *)0x0) {
    puVar5 = puStack_110;
  }
  FUN_1802c22a0(acStack_288,puVar5);
  puVar5 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar5 = (void *)param_1[3];
  }
  ppuStack_1a8 = &puStack_178;
  puStack_178 = &memory_allocator_3480_ptr;
  puStack_170 = auStack_160;
  uStack_168 = 0;
  auStack_160[0] = 0;
  if (puVar5 != (void *)0x0) {
    FUN_180049bf0(&puStack_178);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_178);
  }
  if (*(code **)(*param_1 + 0x30) != _guard_check_icall) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  lVar3 = system_main_module_state;
  if ((int)param_1[9] < 1) {
    lVar8 = param_1[0x85];
    if ((lVar8 == 0) || (lVar9 = *(int64_t *)(lVar8 + 0x1d8), lVar9 == 0)) {
      lVar9 = 0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    lVar8 = param_1[0x89];
    plVar7 = plVar11;
    if ((lVar8 != 0) && (*(int64_t *)(lVar8 + 0x1e0) != 0)) {
      if (lVar3 != 0) {
        *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
      }
      plVar7 = (int64_t *)(*(int64_t *)(lVar8 + 0x1e0) + 0x10);
    }
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),0,lVar9);
    plVar1 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar7 != (int64_t *)0x0) && (*plVar7 != 0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar7,4);
    }
    lVar3 = system_message_buffer;
    plVar1[0x107e] = (int64_t)plVar7;
    FUN_18029de40(*(uint64_t *)(lVar3 + 0x1cd8),1);
    fVar18 = 0.0;
    if (*(char *)((int64_t)param_1 + 0x4d) == '\0') {
      fVar18 = (float)(int)*(float *)(param_3 + 0x11c18);
      fVar19 = (float)(int)*(float *)(param_3 + 0x11c1c);
      if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
        fVar21 = (float)(double)param_1[0xb];
        fVar20 = (float)(double)param_1[0xc];
      }
      else {
        iVar2 = (int)*(float *)(param_3 + 0x11c20);
        auVar14._0_8_ = (double)iVar2 * (double)param_1[0xb];
        lVar3 = (int64_t)auVar14._0_8_;
        if (auVar14._0_8_ <= 0.0) {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar14._0_8_)) {
            auVar15._8_8_ = auVar14._0_8_;
            auVar15._0_8_ = auVar14._0_8_;
            uVar13 = movmskpd(iVar2,auVar15);
            auVar14._0_8_ = (double)(int64_t)(lVar3 + (uint64_t)(uVar13 & 1 ^ 1));
          }
          auVar14._0_8_ = auVar14._0_8_ - 1e-08;
        }
        else {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar14._0_8_)) {
            auVar14._8_8_ = auVar14._0_8_;
            uVar13 = movmskpd(iVar2,auVar14);
            auVar14._0_8_ = (double)(int64_t)(lVar3 + (uint64_t)(uVar13 & 1 ^ 1));
          }
          auVar14._0_8_ = auVar14._0_8_ + 1e-08;
        }
        fVar21 = (float)(int64_t)auVar14._0_8_;
        iVar2 = (int)*(float *)(param_3 + 0x11c24);
        auVar16._0_8_ = (double)iVar2 * (double)param_1[0xc];
        lVar3 = (int64_t)auVar16._0_8_;
        if (auVar16._0_8_ <= 0.0) {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar16._0_8_)) {
            auVar17._8_8_ = auVar16._0_8_;
            auVar17._0_8_ = auVar16._0_8_;
            uVar13 = movmskpd(iVar2,auVar17);
            auVar16._0_8_ = (double)(int64_t)(lVar3 + (uint64_t)(uVar13 & 1 ^ 1));
          }
          fVar20 = (float)(int64_t)(auVar16._0_8_ - 1e-08);
        }
        else {
          if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != auVar16._0_8_)) {
            auVar16._8_8_ = auVar16._0_8_;
            uVar13 = movmskpd(iVar2,auVar16);
            auVar16._0_8_ = (double)(int64_t)(lVar3 + (uint64_t)(uVar13 & 1 ^ 1));
          }
          fVar20 = (float)(int64_t)(auVar16._0_8_ + 1e-08);
        }
      }
    }
    else {
      fVar19 = 0.0;
      fVar21 = (float)*(int *)(param_3 + 0x3588);
      fVar20 = (float)*(int *)(param_3 + 0x358c);
    }
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_198 = (void **)CONCAT44(fVar19,fVar18);
    uStack_18c = SUB42(fVar20,0);
    uStack_18a = (int16_t)((uint)fVar20 >> 0x10);
    uStack_188 = 0;
    uStack_184 = 0x3f800000;
    plVar7 = *(int64_t **)(lVar3 + 0x8400);
    fStack_190 = fVar21;
    (**(code **)(*plVar7 + 0x160))(plVar7,1,&uStack_198);
    ppuStack_1a8 = (void **)0x0;
    plVar7 = *(int64_t **)(lVar3 + 0x8400);
    iStack_1a0 = (int)fVar21;
    iStack_19c = (int)fVar20;
    (**(code **)(*plVar7 + 0x168))(plVar7,1,&ppuStack_1a8);
    if ((*(char *)((int64_t)param_1 + 0x4e) != '\0') ||
       ((param_1[0x85] != 0 && (*(char *)(param_1[0x85] + 0xc9) != '\0')))) {
      uVar6 = 1;
      if ((param_1[0x89] != 0) && (uVar6 = 1, *(char *)((int64_t)param_1 + 0x4f) == '\0')) {
        uVar6 = 3;
      }
      uStack_290 = 0;
      uStack_298 = 0;
      FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar6,0);
    }
    lVar8 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1df0) =
         *(uint64_t *)(param_3 + 0x35a8);
    *(uint64_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1df8) = *(uint64_t *)(param_3 + 0x35b0);
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be0) = 0.5 / fVar21;
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be4) = 0.5 / fVar20;
    plVar7 = param_1 + 0x27;
    lVar3 = *plVar7;
    if (lVar3 == 0) {
      *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be8) = (float)(1.0 / (double)param_1[0xb]);
      *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1bec) = (float)(1.0 / (double)param_1[0xc]);
    }
    else {
      *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar3 + 0x32c);
      *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar3 + 0x32e);
    }
    lVar3 = system_parameter_buffer;
    if (*(char *)(system_parameter_buffer + 0x12f8) == '\x01') {
      *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c78) =
           *(int32_t *)(system_parameter_buffer + 0x1304);
      *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c7c) = *(int32_t *)(lVar3 + 0x12fc);
      *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c74) = *(int32_t *)(lVar3 + 0x1300);
      *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar3 + 0x1308);
    }
    (**(code **)(*param_1 + 0x10))(param_1,auStack_214,auStack_218);
    FUN_18029fc10(*(int64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(system_message_buffer + 0x1c88),
                  *(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0,0x230);
    ppuStack_1a8 = (void **)0x0;
    uStack_298 = param_5;
    FUN_1801f7d20(param_1,param_3,&uStack_280,&ppuStack_1a8);
    uStack_198 = ppuStack_1a8;
    fStack_190 = (float)uStack_280;
    uStack_18c = 4;
    puStack_278 = (void *)param_1[6];
    plStack_258 = (int64_t *)0x0;
    puStack_250 = &system_data_buffer_ptr;
    uStack_238 = 0;
    lStack_248 = 0;
    uStack_240 = 0;
    plStack_220 = (int64_t *)0x0;
    uStack_268 = CONCAT26(uStack_18a,CONCAT24(4,uStack_280));
    ppuStack_270 = ppuStack_1a8;
    uStack_260 = 2;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    uVar6 = *(uint64_t *)(param_1[6] + 0x15b8);
    ppuStack_200 = ppuStack_1a8;
    uStack_1f0 = 2;
    uStack_1e8 = 0;
    puStack_208 = puStack_278;
    uStack_1f8 = uStack_268;
    ppuStack_1a8 = &puStack_208;
    CoreEngineDataTransformer(auStack_1e0,&puStack_250);
    uStack_1c0 = CONCAT44(uStack_22c,uStack_230);
    uStack_1b8 = CONCAT44(uStack_224,uStack_228);
    plStack_1b0 = plStack_220;
    if (plStack_220 != (int64_t *)0x0) {
      (**(code **)(*plStack_220 + 0x28))();
    }
    lVar3 = FUN_180299eb0(uVar6,param_3,&puStack_208,acStack_288);
    if (acStack_288[0] == '\0') {
      param_1[0x1f] = lVar3;
      *(int8_t *)((int64_t)param_1 + 0x132) = 0;
      *(int32_t *)((int64_t)param_1 + 0x134) = 1;
      *(int32_t *)((int64_t)param_1 + 0x114) = *(int32_t *)(param_1[0x85] + 0x324);
      if (param_1[0x89] != 0) {
        uVar10 = *(int32_t *)(param_1[0x89] + 0x324);
      }
      *(int32_t *)(param_1 + 0x22) = uVar10;
      piVar12 = (int *)((int64_t)param_1 + 0x74);
      do {
        if (*plVar7 != 0) {
          uStack_298 = 0xffffffff;
          FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),plVar11,*plVar7,0x10);
        }
        if (*piVar12 == -0x12) {
          lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
          lVar8 = *plVar7;
          if (lVar8 != 0) {
            *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
            lVar8 = lVar8 + 0x1a0;
          }
          if ((((*(int64_t *)(lVar3 + 0x8540) != lVar8) || (*(int *)(lVar3 + 0x88bc) != -1)) ||
              (*(int *)(lVar3 + 0x8abc) != 0x10)) &&
             (((lVar8 == 0 || (*(int64_t *)(lVar8 + 8) != 0)) || (*(int64_t *)(lVar8 + 0x10) != 0)
              ))) {
            ppuStack_1a8 = (void **)0x0;
            if (lVar8 != 0) {
              ppuStack_1a8 = *(void ***)(lVar8 + 0x10);
            }
            (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x40))
                      (*(int64_t **)(lVar3 + 0x8400),0x21,1,&ppuStack_1a8);
            *(int64_t *)(lVar3 + 0x8540) = lVar8;
            *(int32_t *)(lVar3 + 0x88bc) = 0xffffffff;
            *(int32_t *)(lVar3 + 0x8abc) = 0x10;
            *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
          }
        }
        uVar13 = (int)plVar11 + 1;
        plVar11 = (int64_t *)(uint64_t)uVar13;
        piVar12 = piVar12 + 1;
        plVar7 = plVar7 + 1;
      } while ((int)uVar13 < 0x10);
      if ((int)param_1[4] == 0x19) {
        iVar2 = strcmp(param_1[3],&processed_var_7136_ptr);
        if (iVar2 == 0) {
          uVar6 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          puVar4 = (uint64_t *)FUN_1802c8e90(*(uint64_t *)(param_3 + 0x99b8),&uStack_280);
          uStack_298 = 0xffffffff;
          FUN_18029d150(uVar6,1,*puVar4);
          if ((int64_t *)CONCAT44(uStack_27c,uStack_280) != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)CONCAT44(uStack_27c,uStack_280) + 0x38))();
          }
        }
      }
      FUN_18029d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
      FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0x1f);
      lVar3 = system_message_buffer;
      puVar5 = &system_buffer_ptr;
      if (puStack_110 != (void *)0x0) {
        puVar5 = puStack_110;
      }
      if (puVar5 != (void *)0x0) {
        lVar8 = strnlen(puVar5,0x3f);
        strncpy(lVar3 + 0x1ce0,puVar5,lVar8);
        *(int8_t *)(lVar8 + 0x1ce0 + lVar3) = 0;
      }
      FUN_18029e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
      if (*(code **)(*param_1 + 0x28) != _guard_check_icall) {
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      iVar2 = 0;
      lVar8 = 0x8a38;
      lVar3 = 0x8438;
      do {
        if ((*(int64_t *)((int64_t)param_1 + lVar3 + -0x8300) != 0) &&
           (((lVar9 = *(int64_t *)(system_message_buffer + 0x1cd8), *(int64_t *)(lVar3 + lVar9) != 0 ||
             (*(int *)(lVar9 + -0x200 + lVar8) != -1)) || (*(int *)(lVar8 + lVar9) != 0x10)))) {
          ppuStack_1a8 = (void **)0x0;
          (**(code **)(**(int64_t **)(lVar9 + 0x8400) + 0x40))
                    (*(int64_t **)(lVar9 + 0x8400),iVar2,1,&ppuStack_1a8);
          *(uint64_t *)(lVar3 + lVar9) = 0;
          *(int32_t *)(lVar9 + -0x200 + lVar8) = 0xffffffff;
          *(int32_t *)(lVar8 + lVar9) = 0x10;
          *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
        }
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
        lVar8 = lVar8 + 4;
      } while (iVar2 < 0x10);
    }
    if (plStack_220 != (int64_t *)0x0) {
      (**(code **)(*plStack_220 + 0x38))();
    }
    ppuStack_1a8 = &puStack_250;
    puStack_250 = &system_data_buffer_ptr;
    if (lStack_248 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_248 = 0;
    uStack_238 = uStack_238 & 0xffffffff00000000;
    puStack_250 = &system_state_ptr;
    if (plStack_258 != (int64_t *)0x0) {
      (**(code **)(*plStack_258 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  FUN_1802c2ac0(&puStack_178);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  puStack_118 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_78 ^ (uint64_t)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801f7200(int64_t *param_1,int64_t param_2,int32_t param_3,int param_4,
void FUN_1801f7200(int64_t *param_1,int64_t param_2,int32_t param_3,int param_4,
                  int32_t param_5,int32_t param_6,uint64_t param_7)

{
  int64_t *plVar1;
  code *pcVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  void *puVar8;
  uint64_t uVar9;
  int iVar10;
  int iVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int8_t auStack_298 [32];
  uint64_t uStack_278;
  int32_t uStack_270;
  char acStack_268 [4];
  float fStack_264;
  float fStack_260;
  int iStack_25c;
  void **ppuStack_258;
  uint64_t uStack_250;
  int64_t lStack_248;
  uint64_t uStack_240;
  uint64_t uStack_238;
  int32_t uStack_230;
  int64_t *plStack_228;
  void *puStack_220;
  int64_t lStack_218;
  int32_t uStack_210;
  uint64_t uStack_208;
  int32_t uStack_200;
  int32_t uStack_1fc;
  int32_t uStack_1f8;
  int32_t uStack_1f4;
  int64_t *plStack_1f0;
  uint64_t uStack_1e8;
  int32_t uStack_1e0;
  int16_t uStack_1dc;
  int16_t uStack_1da;
  uint64_t uStack_1d8;
  void *puStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  int32_t uStack_1b8;
  uint64_t uStack_1b0;
  int8_t auStack_1a8 [32];
  uint64_t uStack_188;
  uint64_t uStack_180;
  int64_t *plStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [72];
  void *puStack_108;
  void *puStack_100;
  uint uStack_f8;
  uint8_t auStack_f0 [136];
  uint64_t uStack_68;
  
  uStack_1d8 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_298;
  uStack_250 = CONCAT44(uStack_250._4_4_,param_3);
  plVar13 = (int64_t *)0x0;
  puStack_108 = &memory_allocator_3432_ptr;
  puStack_100 = auStack_f0;
  auStack_f0[0] = 0;
  uStack_f8 = 0xc;
  iStack_25c = param_4;
  strcpy_s(auStack_f0,0x80,&system_data_eb68);
  puVar8 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar8 = (void *)param_1[3];
  }
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (puVar8[lVar6] != '\0');
  iVar4 = (int)lVar6;
  if ((0 < iVar4) && (uStack_f8 + iVar4 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_100 + uStack_f8,puVar8,(int64_t)(iVar4 + 1));
  }
  puVar8 = &system_buffer_ptr;
  if (puStack_100 != (void *)0x0) {
    puVar8 = puStack_100;
  }
  FUN_1802c22a0(acStack_268,puVar8);
  puVar8 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar8 = (void *)param_1[3];
  }
  ppuStack_258 = &puStack_168;
  puStack_168 = &memory_allocator_3480_ptr;
  puStack_160 = auStack_150;
  uStack_158 = 0;
  auStack_150[0] = 0;
  if (puVar8 != (void *)0x0) {
    FUN_180049bf0(&puStack_168,puVar8);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_168);
  }
  if (*(code **)(*param_1 + 0x30) != _guard_check_icall) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  lVar7 = system_main_module_state;
  plVar14 = param_1 + 0x85;
  lVar6 = *plVar14;
  if ((lVar6 == 0) || (plVar12 = *(int64_t **)(lVar6 + 0x1d8), plVar12 == (int64_t *)0x0)) {
    plVar12 = (int64_t *)0x0;
  }
  else if (system_main_module_state != 0) {
    *(int64_t *)(lVar6 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  }
  lVar6 = param_1[0x89];
  if ((lVar6 != 0) && (*(int64_t *)(lVar6 + 0x1e0) != 0)) {
    if (lVar7 != 0) {
      *(int64_t *)(lVar6 + 0x340) = (int64_t)*(int *)(lVar7 + 0x224);
    }
    plVar13 = (int64_t *)(*(int64_t *)(lVar6 + 0x1e0) + 0x10);
  }
  if ((*(char *)((int64_t)param_1 + 0x4e) != '\0') ||
     ((*plVar14 != 0 && (*(char *)(*plVar14 + 0xc9) != '\0')))) {
    plVar1 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar12 != (int64_t *)0x0) && (*plVar12 != 0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar12,1);
    }
    lVar6 = system_message_buffer;
    plVar1[0x1077] = (int64_t)plVar12;
    plVar12 = *(int64_t **)(lVar6 + 0x1cd8);
    if ((plVar13 != (int64_t *)0x0) && (*plVar13 != 0)) {
      (**(code **)(*plVar12 + 0x70))(plVar12,*plVar13,4);
      lVar6 = system_message_buffer;
    }
    plVar12[0x107e] = (int64_t)plVar13;
    FUN_18029de40(*(uint64_t *)(lVar6 + 0x1cd8),1);
    uVar9 = 1;
    if ((param_1[0x89] != 0) && (uVar9 = 1, *(char *)((int64_t)param_1 + 0x4f) == '\0')) {
      uVar9 = 3;
    }
    uStack_270 = 0;
    uStack_278 = (int *)((uint64_t)uStack_278._4_4_ << 0x20);
    FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar9,0,0x3f800000);
    lVar6 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
    *(uint64_t *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x83f0) = 0;
    FUN_18029de40(*(uint64_t *)(lVar6 + 0x1cd8),1);
  }
  lVar6 = system_message_buffer;
  if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
    fStack_264 = (float)(double)param_1[0xb];
    fStack_260 = (float)(double)param_1[0xc];
  }
  else {
    iVar4 = (int)*(float *)(param_2 + 0x11c20);
    auVar15._0_8_ = (double)iVar4 * (double)param_1[0xb];
    lVar7 = (int64_t)auVar15._0_8_;
    if (auVar15._0_8_ <= 0.0) {
      if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != auVar15._0_8_)) {
        auVar16._8_8_ = auVar15._0_8_;
        auVar16._0_8_ = auVar15._0_8_;
        uVar5 = movmskpd(iVar4,auVar16);
        auVar15._0_8_ = (double)(int64_t)(lVar7 + (uint64_t)(uVar5 & 1 ^ 1));
      }
      auVar15._0_8_ = auVar15._0_8_ - 1e-08;
    }
    else {
      if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != auVar15._0_8_)) {
        auVar15._8_8_ = auVar15._0_8_;
        uVar5 = movmskpd(iVar4,auVar15);
        auVar15._0_8_ = (double)(int64_t)(lVar7 + (uint64_t)(uVar5 & 1 ^ 1));
      }
      auVar15._0_8_ = auVar15._0_8_ + 1e-08;
    }
    fStack_264 = (float)(int64_t)auVar15._0_8_;
    iVar4 = (int)*(float *)(param_2 + 0x11c24);
    auVar17._0_8_ = (double)iVar4 * (double)param_1[0xc];
    lVar7 = (int64_t)auVar17._0_8_;
    if (auVar17._0_8_ <= 0.0) {
      if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != auVar17._0_8_)) {
        auVar18._8_8_ = auVar17._0_8_;
        auVar18._0_8_ = auVar17._0_8_;
        uVar5 = movmskpd(iVar4,auVar18);
        auVar17._0_8_ = (double)(int64_t)(lVar7 + (uint64_t)(uVar5 & 1 ^ 1));
      }
      auVar17._0_8_ = auVar17._0_8_ - 1e-08;
    }
    else {
      if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != auVar17._0_8_)) {
        auVar17._8_8_ = auVar17._0_8_;
        uVar5 = movmskpd(iVar4,auVar17);
        auVar17._0_8_ = (double)(int64_t)(lVar7 + (uint64_t)(uVar5 & 1 ^ 1));
      }
      auVar17._0_8_ = auVar17._0_8_ + 1e-08;
    }
    fStack_260 = (float)(int64_t)auVar17._0_8_;
  }
  *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1df0) =
       *(uint64_t *)(param_2 + 0x35a8);
  *(uint64_t *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1df8) = *(uint64_t *)(param_2 + 0x35b0);
  *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1be0) = 0.5 / fStack_264;
  *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1be4) = 0.5 / fStack_260;
  plVar13 = param_1 + 0x27;
  lVar7 = *plVar13;
  if (lVar7 == 0) {
    *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1be8) = (float)(1.0 / (double)param_1[0xb]);
    *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1bec) = (float)(1.0 / (double)param_1[0xc]);
  }
  else {
    *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar7 + 0x32c);
    *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar7 + 0x32e);
  }
  (**(code **)(*param_1 + 0x10))(param_1,&fStack_264,&fStack_260);
  FUN_18029fc10(*(int64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(system_message_buffer + 0x1c88),
                *(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0,0x230);
  lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lVar7 = *(int64_t *)(system_message_buffer + 0x1c70);
  plVar12 = *(int64_t **)(lVar6 + 0x8400);
  pcVar2 = *(code **)(*plVar12 + 0x38);
  *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  (*pcVar2)(plVar12,0,1,lVar7 + 0x10);
  plVar12 = *(int64_t **)(lVar6 + 0x8400);
  pcVar2 = *(code **)(*plVar12 + 0x1f0);
  *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  (*pcVar2)(plVar12,0,1,lVar7 + 0x10);
  plVar12 = *(int64_t **)(lVar6 + 0x8400);
  pcVar2 = *(code **)(*plVar12 + 0x210);
  *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  (*pcVar2)(plVar12,0,1,lVar7 + 0x10);
  plVar12 = *(int64_t **)(lVar6 + 0x8400);
  pcVar2 = *(code **)(*plVar12 + 0x80);
  *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  (*pcVar2)(plVar12,0,1,lVar7 + 0x10);
  plVar12 = *(int64_t **)(lVar6 + 0x8400);
  pcVar2 = *(code **)(*plVar12 + 0x238);
  *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  (*pcVar2)(plVar12,0,1,lVar7 + 0x10);
  uStack_278 = (int *)CONCAT44(uStack_278._4_4_,param_6);
  FUN_1801f7d20(param_1,param_2,&param_5,&param_7);
  uStack_1e8 = param_7;
  uStack_1e0 = param_5;
  uStack_1dc = 4;
  lStack_248 = param_1[6];
  plStack_228 = (int64_t *)0x0;
  puStack_220 = &system_data_buffer_ptr;
  uStack_208 = 0;
  lStack_218 = 0;
  uStack_210 = 0;
  plStack_1f0 = (int64_t *)0x0;
  uStack_238 = CONCAT26(uStack_1da,CONCAT24(4,param_5));
  uStack_240 = param_7;
  uStack_230 = 2;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uVar9 = *(uint64_t *)(param_1[6] + 0x15b8);
  ppuStack_258 = &puStack_1d0;
  uStack_1c8 = param_7;
  uStack_1b8 = 2;
  uStack_1b0 = 0;
  puStack_1d0 = (void *)lStack_248;
  uStack_1c0 = uStack_238;
  CoreEngineDataTransformer(auStack_1a8,&puStack_220);
  uStack_188 = CONCAT44(uStack_1fc,uStack_200);
  uStack_180 = CONCAT44(uStack_1f4,uStack_1f8);
  plStack_178 = plStack_1f0;
  if (plStack_1f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1f0 + 0x28))();
  }
  lVar6 = FUN_180299eb0(uVar9,param_2,&puStack_1d0,acStack_268);
  iVar11 = 0;
  plVar12 = plVar14;
  iVar4 = iVar11;
  if (acStack_268[0] == '\0') {
    do {
      if (*plVar12 != 0) {
        uStack_270 = CONCAT31(uStack_270._1_3_,1);
        uStack_278 = (int *)((uint64_t)uStack_278 & 0xffffffff00000000);
        FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),iVar4,1);
      }
      iVar4 = iVar4 + 1;
      plVar12 = plVar12 + 1;
      iVar10 = iVar11;
    } while (iVar4 < 4);
    do {
      if (*plVar13 != 0) {
        uStack_278 = (int *)CONCAT44(uStack_278._4_4_,0xffffffff);
        FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),iVar10,*plVar13,0x20);
      }
      iVar10 = iVar10 + 1;
      plVar13 = plVar13 + 1;
    } while (iVar10 < 0x10);
    lVar7 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((lVar6 != 0) && (*(int64_t *)(lVar7 + 0x82a0) != (int64_t)**(int **)(lVar6 + 0x10))) {
      (**(code **)(**(int64_t **)(lVar7 + 0x8400) + 0x228))
                (*(int64_t **)(lVar7 + 0x8400),*(uint64_t *)(*(int **)(lVar6 + 0x10) + 6),0,0);
      *(int64_t *)(lVar7 + 0x82a0) = (int64_t)**(int **)(lVar6 + 0x10);
    }
    plVar13 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar13 + 0x148))
              (plVar13,(int)((((float)(int)uStack_250 + fStack_264) - 1.0) / (float)(int)uStack_250)
               ,(int)((((float)iStack_25c + fStack_260) - 1.0) / (float)iStack_25c),1);
    if (*(code **)(*param_1 + 0x28) != _guard_check_icall) {
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    lVar7 = 0x8a38;
    lVar6 = 0x8438;
    iVar4 = iVar11;
    do {
      if ((*(int64_t *)((int64_t)param_1 + lVar6 + -0x8300) != 0) &&
         (((lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8), *(int64_t *)(lVar6 + lVar3) != 0 ||
           (*(int *)(lVar7 + -0x200 + lVar3) != -1)) || (*(int *)(lVar7 + lVar3) != 0x20)))) {
        uStack_250 = 0;
        (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x218))
                  (*(int64_t **)(lVar3 + 0x8400),iVar4,1,&uStack_250);
        *(uint64_t *)(lVar6 + lVar3) = 0;
        *(int32_t *)(lVar7 + -0x200 + lVar3) = 0xffffffff;
        *(int32_t *)(lVar7 + lVar3) = 0x20;
        *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      lVar7 = lVar7 + 4;
    } while (iVar4 < 0x10);
    do {
      if (*plVar14 != 0) {
        iStack_25c = -1;
        ppuStack_258 = (void **)0x0;
        plVar13 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
        uStack_278 = &iStack_25c;
        (**(code **)(*plVar13 + 0x220))(plVar13,iVar11,1,&ppuStack_258);
      }
      iVar11 = iVar11 + 1;
      plVar14 = plVar14 + 1;
    } while (iVar11 < 4);
  }
  if (plStack_1f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1f0 + 0x38))();
  }
  ppuStack_258 = &puStack_220;
  puStack_220 = &system_data_buffer_ptr;
  if (lStack_218 == 0) {
    lStack_218 = 0;
    uStack_208 = uStack_208 & 0xffffffff00000000;
    puStack_220 = &system_state_ptr;
    if (plStack_228 != (int64_t *)0x0) {
      (**(code **)(*plStack_228 + 0x38))();
    }
    FUN_1802c2ac0(&puStack_168);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
    puStack_108 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_298);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





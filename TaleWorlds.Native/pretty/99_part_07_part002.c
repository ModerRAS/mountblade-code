#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part002.c - 6 个函数

// 函数: void FUN_1803fad40(int64_t *param_1,int64_t param_2)
void FUN_1803fad40(int64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int8_t auStack_1e8 [32];
  int64_t *plStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int iStack_1b0;
  int iStack_1ac;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  uint64_t uStack_19c;
  uint64_t uStack_194;
  uint64_t uStack_18c;
  int8_t uStack_184;
  int32_t uStack_180;
  int8_t uStack_17c;
  uint64_t uStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [136];
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  uint64_t uStack_28;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  FUN_1801f9270();
  uStack_19c = 0;
  uStack_194 = 0x3f80000000000000;
  uStack_18c = 0x100;
  uStack_184 = 0;
  uStack_17c = 0;
  uStack_1a8 = 1;
  uStack_1a0 = 7;
  uStack_1a4 = 1;
  uStack_180 = *(int32_t *)(param_2 + 0x1bd4);
  iVar3 = (int)((float)(double)param_1[0xb] * (float)*(int *)(param_2 + 0x3588) *
               *(float *)(param_2 + 0x3598));
  iStack_1b0 = 4;
  if (4 < iVar3) {
    iStack_1b0 = iVar3;
  }
  iVar3 = (int)((float)(double)param_1[0xc] * (float)*(int *)(param_2 + 0x358c) *
               *(float *)(param_2 + 0x359c));
  iStack_1ac = 4;
  if (4 < iVar3) {
    iStack_1ac = iVar3;
  }
  puStack_168 = &unknown_var_3432_ptr;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0x18;
  strcpy_s(auStack_150,0x80,&unknown_var_3056_ptr);
  plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1c0,&puStack_168,&iStack_1b0);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_1c8 = (int64_t *)param_1[0x8b];
  param_1[0x8b] = lVar1;
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
  if (plStack_1c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c0 + 0x38))();
  }
  puStack_168 = &system_state_ptr;
  puStack_c8 = &unknown_var_3432_ptr;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = 0x18;
  strcpy_s(auStack_b0,0x80,&unknown_var_3088_ptr);
  plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1b8,&puStack_c8,&iStack_1b0);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_1c8 = (int64_t *)param_1[0x8c];
  param_1[0x8c] = lVar1;
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
  if (plStack_1b8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1b8 + 0x38))();
  }
  puStack_c8 = &system_state_ptr;
  puStack_168 = &unknown_var_3432_ptr;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0x18;
  strcpy_s(auStack_150,0x80,&unknown_var_3120_ptr);
  plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1c8,&puStack_168,&iStack_1b0);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_1c0 = (int64_t *)param_1[0x8d];
  param_1[0x8d] = lVar1;
  if (plStack_1c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c0 + 0x38))();
  }
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
  puStack_168 = &system_state_ptr;
  (**(code **)(*param_1 + 0x40))(param_1,0,0);
  plStack_1b8 = (int64_t *)param_1[0x89];
  param_1[0x89] = 0;
  if (plStack_1b8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1b8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_1e8);
}






// 函数: void FUN_1803fb050(int64_t param_1)
void FUN_1803fb050(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  
  plVar1 = *(int64_t **)(param_1 + 0x458 + (int64_t)*(int *)(param_1 + 0x450) * 8);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x428);
  *(int64_t **)(param_1 + 0x428) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  iVar3 = *(int *)(param_1 + 0x450) + 1;
  *(int *)(param_1 + 0x450) =
       iVar3 + (iVar3 / 3 + (iVar3 >> 0x1f) +
               (int)(((int64_t)iVar3 / 3 + ((int64_t)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fb0e0(uint64_t *param_1,uint64_t param_2,void **param_3,int32_t param_4,
void FUN_1803fb0e0(uint64_t *param_1,uint64_t param_2,void **param_3,int32_t param_4,
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
  float fVar14;
  float fVar15;
  int8_t auStack_2b8 [32];
  int32_t uStack_298;
  int32_t uStack_290;
  char acStack_288 [8];
  void **ppuStack_280;
  void **ppuStack_278;
  int32_t uStack_270;
  int16_t uStack_26c;
  int16_t uStack_26a;
  void *puStack_268;
  void **ppuStack_260;
  uint64_t uStack_258;
  int32_t uStack_250;
  int64_t *plStack_248;
  void *puStack_240;
  int64_t lStack_238;
  int32_t uStack_230;
  uint64_t uStack_228;
  int32_t uStack_220;
  int32_t uStack_21c;
  int32_t uStack_218;
  int32_t uStack_214;
  int64_t *plStack_210;
  uint64_t uStack_208;
  void *puStack_200;
  void **ppuStack_1f8;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  uint64_t uStack_1e0;
  int8_t auStack_1d8 [32];
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  int64_t *plStack_1a8;
  void **ppuStack_1a0;
  int iStack_198;
  int iStack_194;
  uint64_t uStack_190;
  float fStack_188;
  float fStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [72];
  void *puStack_118;
  void *puStack_110;
  uint uStack_108;
  uint8_t auStack_100 [136];
  uint64_t uStack_78;
  
  uStack_208 = 0xfffffffffffffffe;
  uStack_78 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2b8;
  ppuStack_278 = (void **)CONCAT44(ppuStack_278._4_4_,param_4);
  plVar11 = (int64_t *)0x0;
  uVar10 = 0;
  puStack_118 = &unknown_var_3432_ptr;
  puStack_110 = auStack_100;
  auStack_100[0] = 0;
  uStack_108 = 0xc;
  ppuStack_280 = param_3;
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
  if ((0 < iVar2) && (iVar2 + uStack_108 < 0x7f)) {
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
  ppuStack_1a0 = &puStack_178;
  puStack_178 = &unknown_var_3480_ptr;
  puStack_170 = auStack_160;
  uStack_168 = 0;
  auStack_160[0] = 0;
  if (puVar5 != (void *)0x0) {
    FUN_180049bf0(&puStack_178);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_178);
  }
  lVar3 = system_main_module_state;
  if (*(int *)(param_1 + 9) < 1) {
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
    fVar14 = (float)*(ushort *)(param_1[0x85] + 0x32c);
    fVar15 = (float)*(ushort *)(param_1[0x85] + 0x32e);
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_190 = 0;
    uStack_180 = 0;
    uStack_17c = 0x3f800000;
    plVar7 = *(int64_t **)(lVar3 + 0x8400);
    fStack_188 = fVar14;
    fStack_184 = fVar15;
    (**(code **)(*plVar7 + 0x160))(plVar7,1,&uStack_190);
    ppuStack_1a0 = (void **)0x0;
    plVar7 = *(int64_t **)(lVar3 + 0x8400);
    iStack_198 = (int)fVar14;
    iStack_194 = (int)fVar15;
    (**(code **)(*plVar7 + 0x168))(plVar7,1,&ppuStack_1a0);
    if (*(char *)((int64_t)param_1 + 0x4e) != '\0') {
      uVar6 = 3;
      if (param_1[0x89] == 0) {
        uVar6 = 1;
      }
      uStack_290 = 0;
      uStack_298 = 0;
      FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar6,0,0x3f800000);
    }
    lVar8 = system_message_buffer;
    *(void **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1df0) = param_3[0x6b5];
    *(void **)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1df8) = param_3[0x6b6];
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be0) = 0.5 / fVar14;
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be4) = 0.5 / fVar15;
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
    FUN_18029fc10(*(int64_t *)(lVar8 + 0x1cd8),*(uint64_t *)(lVar8 + 0x1c88),
                  *(int64_t *)(lVar8 + 0x1cd8) + 0x1be0,0x230);
    ppuStack_1a0 = (void **)0x0;
    uStack_298 = param_5;
    FUN_1801f7d20(param_1,param_3,&ppuStack_278,&ppuStack_1a0);
    ppuStack_278 = ppuStack_1a0;
    uStack_270 = 0;
    uStack_26c = 4;
    puStack_268 = (void *)param_1[6];
    plStack_248 = (int64_t *)0x0;
    puStack_240 = &system_data_buffer_ptr;
    uStack_228 = 0;
    lStack_238 = 0;
    uStack_230 = 0;
    plStack_210 = (int64_t *)0x0;
    uStack_258 = CONCAT26(uStack_26a,0x400000000);
    ppuStack_260 = ppuStack_1a0;
    uStack_250 = 2;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    uVar6 = *(uint64_t *)(param_1[6] + 0x15b8);
    ppuStack_1f8 = ppuStack_1a0;
    uStack_1e8 = 2;
    uStack_1e0 = 0;
    puStack_200 = puStack_268;
    uStack_1f0 = uStack_258;
    ppuStack_1a0 = &puStack_200;
    FUN_180627ae0(auStack_1d8,&puStack_240);
    uStack_1b8 = CONCAT44(uStack_21c,uStack_220);
    uStack_1b0 = CONCAT44(uStack_214,uStack_218);
    plStack_1a8 = plStack_210;
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x28))();
    }
    uVar6 = FUN_180299eb0(uVar6,param_3,&puStack_200,acStack_288);
    if (acStack_288[0] == '\0') {
      param_1[0x1f] = uVar6;
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
            ppuStack_1a0 = (void **)0x0;
            if (lVar8 != 0) {
              ppuStack_1a0 = *(void ***)(lVar8 + 0x10);
            }
            (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x40))
                      (*(int64_t **)(lVar3 + 0x8400),0x21,1,&ppuStack_1a0);
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
      if (*(int *)(param_1 + 4) == 0x19) {
        iVar2 = strcmp(param_1[3],&unknown_var_7136_ptr);
        if (iVar2 == 0) {
          uVar6 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          puVar4 = (uint64_t *)FUN_1802c8e90(ppuStack_280[0x1337],&ppuStack_278);
          uStack_298 = 0xffffffff;
          FUN_18029d150(uVar6,1,*puVar4);
          if (ppuStack_278 != (void **)0x0) {
            (**(code **)(*ppuStack_278 + 0x38))();
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
      if ((void *)*param_1 != &unknown_var_7888_ptr) {
        (**(code **)((void *)*param_1 + 0x28))(param_1);
      }
      iVar2 = 0;
      lVar8 = 0x8a38;
      lVar3 = 0x8438;
      do {
        if ((*(int64_t *)((int64_t)param_1 + lVar3 + -0x8300) != 0) &&
           (((lVar9 = *(int64_t *)(system_message_buffer + 0x1cd8), *(int64_t *)(lVar9 + lVar3) != 0 ||
             (*(int *)(lVar8 + -0x200 + lVar9) != -1)) || (*(int *)(lVar9 + lVar8) != 0x10)))) {
          ppuStack_280 = (void **)0x0;
          (**(code **)(**(int64_t **)(lVar9 + 0x8400) + 0x40))
                    (*(int64_t **)(lVar9 + 0x8400),iVar2,1,&ppuStack_280);
          *(uint64_t *)(lVar9 + lVar3) = 0;
          *(int32_t *)(lVar8 + -0x200 + lVar9) = 0xffffffff;
          *(int32_t *)(lVar9 + lVar8) = 0x10;
          *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
        }
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
        lVar8 = lVar8 + 4;
      } while (iVar2 < 0x10);
    }
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    ppuStack_280 = &puStack_240;
    puStack_240 = &system_data_buffer_ptr;
    if (lStack_238 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_238 = 0;
    uStack_228 = uStack_228 & 0xffffffff00000000;
    puStack_240 = &system_state_ptr;
    if (plStack_248 != (int64_t *)0x0) {
      (**(code **)(*plStack_248 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  FUN_1802c2ac0(&puStack_178);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  puStack_118 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_78 ^ (uint64_t)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fbab0(int64_t param_1,int64_t param_2)
void FUN_1803fbab0(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int8_t auVar8 [16];
  double dVar9;
  int8_t auStack_168 [32];
  int64_t *plStack_148;
  int64_t *plStack_140;
  uint64_t uStack_138;
  void *puStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int8_t auStack_114 [8];
  uint64_t uStack_10c;
  int8_t uStack_104;
  uint64_t uStack_103;
  int32_t uStack_f8;
  int8_t uStack_f4;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  uint64_t uStack_28;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  *(double *)(param_1 + 0x58) = (double)*(int *)(param_2 + 0x3590);
  *(double *)(param_1 + 0x60) = (double)*(int *)(param_2 + 0x3594);
  FUN_1801f9270();
  puStack_128 = &unknown_var_3480_ptr;
  uStack_120 = auStack_114 + 4;
  auStack_114[4] = 0;
  uStack_118 = 0xb;
  strcpy_s(auStack_114 + 4,0x40,&unknown_var_4032_ptr);
  puVar4 = (uint64_t *)FUN_1800b4910(system_resource_state,&plStack_140,&puStack_128);
  uVar1 = *puVar4;
  *puVar4 = 0;
  plStack_148 = *(int64_t **)(param_1 + 0x450);
  *(uint64_t *)(param_1 + 0x450) = uVar1;
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  if (plStack_140 != (int64_t *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
  puStack_128 = &system_state_ptr;
  iVar5 = (int)*(double *)(param_1 + 0x60);
  iVar7 = (int)*(double *)(param_1 + 0x58);
  if (iVar5 < iVar7) {
    iVar2 = 1;
    if (1 < iVar7) {
      iVar2 = iVar7;
    }
  }
  else {
    iVar2 = 1;
    if (1 < iVar5) {
      iVar2 = iVar5;
    }
  }
  auVar8._0_8_ = (double)log2((double)iVar2);
  lVar6 = (int64_t)auVar8._0_8_;
  dVar9 = 0.0;
  if ((lVar6 != -0x8000000000000000) && (dVar9 = (double)lVar6, dVar9 != auVar8._0_8_)) {
    auVar8._8_8_ = auVar8._0_8_;
    uVar3 = movmskpd(0,auVar8);
    auVar8._0_8_ = (double)(int64_t)(lVar6 - (uint64_t)(uVar3 & 1));
  }
  auStack_114 = (int8_t  [8])0x0;
  uStack_10c = 0x3f80000000000000;
  uStack_103 = 1;
  uStack_104 = 0;
  uStack_f8 = 0xffffffff;
  uStack_f4 = 0;
  puStack_128 = (void *)
                CONCAT44((int)(int64_t)*(double *)(param_1 + 0x60),
                         (int)(int64_t)*(double *)(param_1 + 0x58));
  uStack_120 = (int8_t *)CONCAT44((int)(auVar8._0_8_ + 1.0),1);
  uStack_118 = 0xd;
  puStack_c8 = &unknown_var_3432_ptr;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = 7;
  strcpy_s(auStack_b0,dVar9,&unknown_var_4048_ptr);
  puVar4 = (uint64_t *)FUN_1800b1230(system_resource_state,&plStack_148,&puStack_c8,&puStack_128);
  uVar1 = *puVar4;
  *puVar4 = 0;
  plStack_140 = *(int64_t **)(param_1 + 0x428);
  *(uint64_t *)(param_1 + 0x428) = uVar1;
  if (plStack_140 != (int64_t *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  puStack_c8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fbd40(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1803fbd40(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint uVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  int8_t auStack_1b8 [32];
  int iStack_198;
  char acStack_188 [4];
  int iStack_184;
  void **ppuStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  int32_t uStack_160;
  int64_t *plStack_158;
  void *puStack_150;
  int64_t lStack_148;
  int32_t uStack_140;
  uint64_t uStack_138;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int64_t *plStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  int8_t auStack_e8 [32];
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int64_t *plStack_b8;
  uint64_t uStack_b0;
  int iStack_a8;
  int16_t uStack_a4;
  int16_t uStack_a2;
  uint64_t uStack_a0;
  float fStack_98;
  float fStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  uint64_t uStack_88;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_88 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1b8;
  *(int16_t *)(param_1 + 0x100) = 0x101;
  *(int8_t *)(param_1 + 0x103) = 1;
  uStack_a4 = 4;
  iVar9 = 0;
  iStack_a8 = 0;
  uStack_b0 = 0;
  uStack_178 = *(uint64_t *)(param_1 + 0x450);
  plStack_158 = (int64_t *)0x0;
  puStack_150 = &system_data_buffer_ptr;
  uStack_138 = 0;
  lStack_148 = 0;
  uStack_140 = 0;
  plStack_120 = (int64_t *)0x0;
  uStack_168 = CONCAT26(uStack_a2,0x400000000);
  uStack_170 = 0;
  uStack_160 = 2;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uVar4 = *(uint64_t *)(*(int64_t *)(param_1 + 0x450) + 0x15b8);
  ppuStack_180 = (void **)&uStack_110;
  uStack_108 = 0;
  uStack_f8 = 2;
  uStack_f0 = 0;
  uStack_110 = uStack_178;
  uStack_100 = uStack_168;
  FUN_180627ae0(auStack_e8,&puStack_150);
  uStack_c8 = CONCAT44(uStack_12c,uStack_130);
  uStack_c0 = CONCAT44(uStack_124,uStack_128);
  plStack_b8 = plStack_120;
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x28))();
  }
  uVar4 = FUN_180299eb0(uVar4,param_3,&uStack_110,acStack_188);
  *(uint64_t *)(param_1 + 0x458) = uVar4;
  if (acStack_188[0] == '\0') {
    *(uint64_t *)(param_1 + 0xf8) = uVar4;
    lVar7 = system_message_buffer;
    uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x428) + 0x35c);
    uVar10 = (uint)*(byte *)(*(int64_t *)(param_1 + 0x428) + 0x335);
    if ((int)uVar1 < (int)uVar10) {
      uVar10 = uVar1;
    }
    ppuStack_180 = (void **)CONCAT44(ppuStack_180._4_4_,(int)*(double *)(param_1 + 0x58));
    iStack_184 = (int)*(double *)(param_1 + 0x60);
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
    if (0 < (int)uVar10) {
      do {
        plVar2 = *(int64_t **)(lVar7 + 0x1cd8);
        lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x428) + 0x1d8);
        if (lVar6 == 0) {
          plVar8 = (int64_t *)0x0;
        }
        else {
          if (system_main_module_state != 0) {
            *(int64_t *)(*(int64_t *)(param_1 + 0x428) + 0x340) =
                 (int64_t)*(int *)(system_main_module_state + 0x224);
          }
          plVar8 = (int64_t *)((int64_t)iVar9 * 0x10 + lVar6);
          if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
            (**(code **)(*plVar2 + 0x70))(plVar2,*plVar8,1);
            lVar7 = system_message_buffer;
          }
        }
        plVar2[0x1077] = (int64_t)plVar8;
        FUN_18029de40(*(uint64_t *)(lVar7 + 0x1cd8),1);
        if (iVar9 == 0) {
          uVar4 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          uVar5 = FUN_180245280(param_3);
          iStack_198 = -1;
        }
        else {
          uVar4 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          iStack_198 = iVar9 + -1;
          uVar5 = *(uint64_t *)(param_1 + 0x428);
        }
        FUN_18029d150(uVar4,0,uVar5,0x10);
        iVar3 = (int)ppuStack_180;
        fVar11 = (float)(int)ppuStack_180;
        fVar12 = (float)iStack_184;
        lVar7 = *(int64_t *)(system_message_buffer + 0x1cd8);
        uStack_a0 = 0;
        uStack_90 = 0;
        uStack_8c = 0x3f800000;
        plVar2 = *(int64_t **)(lVar7 + 0x8400);
        fStack_98 = fVar11;
        fStack_94 = fVar12;
        (**(code **)(*plVar2 + 0x160))(plVar2,1,&uStack_a0);
        uStack_a4 = (int16_t)iStack_184;
        uStack_a2 = (int16_t)((uint)iStack_184 >> 0x10);
        uStack_b0 = 0;
        iStack_a8 = iVar3;
        plVar2 = *(int64_t **)(lVar7 + 0x8400);
        (**(code **)(*plVar2 + 0x168))(plVar2,1,&uStack_b0);
        lVar7 = system_message_buffer;
        fVar11 = 1.0 / fVar11;
        *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0) = fVar11 * 0.5;
        fVar12 = 1.0 / fVar12;
        *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1be4) = fVar12 * 0.5;
        *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1be8) = fVar11;
        *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1bec) = fVar12;
        *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1c70) = (float)iVar9;
        FUN_18029fc10(*(int64_t *)(lVar7 + 0x1cd8),*(uint64_t *)(lVar7 + 0x1c88),
                      *(int64_t *)(lVar7 + 0x1cd8) + 0x1be0,0x230);
        FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0xf8);
        lVar7 = system_message_buffer;
        lVar6 = strnlen(&unknown_var_4056_ptr,0x3f);
        strncpy(lVar7 + 0x1ce0,&unknown_var_4056_ptr,lVar6);
        *(int8_t *)(lVar6 + 0x1ce0 + lVar7) = 0;
        FUN_18029e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
        iVar3 = 1;
        if (1 < (int)ppuStack_180 / 2) {
          iVar3 = (int)ppuStack_180 / 2;
        }
        ppuStack_180 = (void **)CONCAT44(ppuStack_180._4_4_,iVar3);
        iVar3 = iStack_184 / 2;
        iStack_184 = 1;
        if (1 < iVar3) {
          iStack_184 = iVar3;
        }
        iVar9 = iVar9 + 1;
        lVar7 = system_message_buffer;
      } while (iVar9 < (int)uVar10);
    }
  }
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  ppuStack_180 = &puStack_150;
  puStack_150 = &system_data_buffer_ptr;
  if (lStack_148 == 0) {
    lStack_148 = 0;
    uStack_138 = uStack_138 & 0xffffffff00000000;
    puStack_150 = &system_state_ptr;
    if (plStack_158 != (int64_t *)0x0) {
      (**(code **)(*plStack_158 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_88 ^ (uint64_t)auStack_1b8);
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fc260(uint64_t *param_1,int32_t param_2,int32_t param_3)
void FUN_1803fc260(uint64_t *param_1,int32_t param_2,int32_t param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_168 [32];
  int64_t *plStack_148;
  int64_t *aplStack_140 [2];
  int64_t *plStack_130;
  uint64_t uStack_128;
  uint64_t *puStack_120;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [24];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  puStack_120 = param_1;
  FUN_1801fa180();
  *param_1 = &unknown_var_7976_ptr;
  *(int32_t *)(param_1 + 0x8a) = param_2;
  *(int32_t *)((int64_t)param_1 + 0x454) = param_3;
  *param_1 = &unknown_var_4152_ptr;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  puStack_118 = &system_config_ptr;
  puStack_110 = auStack_100;
  auStack_100[0] = 0;
  uStack_108 = 0xe;
  strcpy_s(auStack_100,0x10,&unknown_var_1984_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,aplStack_140,&puStack_118,1);
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_148 = (int64_t *)param_1[0x8d];
  param_1[0x8d] = uVar1;
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  if (aplStack_140[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_140[0] + 0x38))();
  }
  puStack_118 = &system_state_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x14;
  strcpy_s(auStack_d0,0x40,&unknown_var_2176_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_130,&puStack_e8,1);
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_148 = (int64_t *)param_1[0x8b];
  param_1[0x8b] = uVar1;
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  if (plStack_130 != (int64_t *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  puStack_e8 = &system_state_ptr;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x14;
  strcpy_s(auStack_70,0x40,&unknown_var_2200_ptr);
  puVar2 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_148,&puStack_88,1);
  uVar1 = *puVar2;
  *puVar2 = 0;
  aplStack_140[0] = (int64_t *)param_1[0x8c];
  param_1[0x8c] = uVar1;
  if (aplStack_140[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_140[0] + 0x38))();
  }
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_168);
}



int64_t FUN_1803fc4f0(int64_t param_1,uint64_t param_2)

{
  if (*(int64_t **)(param_1 + 0x470) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x470) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x468) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x468) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x460) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x460) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x458) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x458) + 0x38))();
  }
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x490);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





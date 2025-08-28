#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part240.c - 6 个函数

// 函数: void FUN_180402a70(int64_t param_1,uint64_t param_2,int64_t param_3,float param_4,
void FUN_180402a70(int64_t param_1,uint64_t param_2,int64_t param_3,float param_4,
                  int32_t param_5)

{
  float fVar1;
  float fVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void *puVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint uVar13;
  int64_t lVar14;
  uint uVar15;
  int iVar16;
  int8_t auStack_288 [32];
  int32_t uStack_268;
  char acStack_258 [8];
  float afStack_250 [2];
  uint64_t uStack_248;
  uint64_t uStack_240;
  uint64_t uStack_238;
  int32_t uStack_230;
  int64_t *plStack_228;
  void *puStack_220;
  int64_t lStack_218;
  int32_t uStack_210;
  uint64_t uStack_208;
  uint64_t uStack_200;
  uint64_t uStack_1f8;
  int64_t *plStack_1f0;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  int32_t uStack_1c8;
  uint64_t uStack_1c0;
  int8_t auStack_1b8 [32];
  uint64_t uStack_198;
  uint64_t uStack_190;
  int64_t *plStack_188;
  uint64_t uStack_180;
  uint uStack_178;
  uint uStack_174;
  uint64_t uStack_170;
  float fStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  int8_t auStack_140 [72];
  void *puStack_f8;
  void *puStack_f0;
  uint uStack_e8;
  uint8_t auStack_e0 [136];
  uint64_t uStack_58;
  
  uStack_1e8 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_288;
  puStack_f8 = &memory_allocator_3432_ptr;
  puStack_f0 = auStack_e0;
  auStack_e0[0] = 0;
  uStack_e8 = 0xc;
  afStack_250[0] = param_4;
  strcpy_s(auStack_e0,0x80,&system_data_eb68);
  puVar7 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar7 = *(void **)(param_1 + 0x18);
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (puVar7[lVar4] != '\0');
  iVar16 = (int)lVar4;
  if ((0 < iVar16) && (uStack_e8 + iVar16 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_f0 + uStack_e8,puVar7,(int64_t)(iVar16 + 1));
  }
  puVar7 = &system_buffer_ptr;
  if (puStack_f0 != (void *)0x0) {
    puVar7 = puStack_f0;
  }
  FUN_1802c22a0(acStack_258,puVar7);
  puVar7 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar7 = *(void **)(param_1 + 0x18);
  }
  uStack_180 = &puStack_158;
  puStack_158 = &memory_allocator_3480_ptr;
  puStack_150 = auStack_140;
  uStack_148 = 0;
  auStack_140[0] = 0;
  if (puVar7 != (void *)0x0) {
    FUN_180049bf0(&puStack_158,puVar7);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_158);
  }
  lVar4 = system_main_module_state;
  if (*(int *)(param_1 + 0x48) < 1) {
    lVar6 = *(int64_t *)(param_1 + 0x428);
    if ((lVar6 == 0) || (lVar12 = *(int64_t *)(lVar6 + 0x1d8), lVar12 == 0)) {
      lVar12 = 0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(lVar6 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    lVar6 = *(int64_t *)(param_1 + 0x430);
    if ((lVar6 == 0) || (lVar14 = *(int64_t *)(lVar6 + 0x1d8), lVar14 == 0)) {
      lVar14 = 0;
    }
    else if (lVar4 != 0) {
      *(int64_t *)(lVar6 + 0x340) = (int64_t)*(int *)(lVar4 + 0x224);
    }
    lVar6 = *(int64_t *)(param_1 + 0x438);
    if ((lVar6 == 0) || (lVar10 = *(int64_t *)(lVar6 + 0x1d8), lVar10 == 0)) {
      lVar10 = 0;
    }
    else if (lVar4 != 0) {
      *(int64_t *)(lVar6 + 0x340) = (int64_t)*(int *)(lVar4 + 0x224);
    }
    lVar6 = *(int64_t *)(param_1 + 0x440);
    if ((lVar6 == 0) || (lVar11 = *(int64_t *)(lVar6 + 0x1d8), lVar11 == 0)) {
      lVar11 = 0;
    }
    else if (lVar4 != 0) {
      *(int64_t *)(lVar6 + 0x340) = (int64_t)*(int *)(lVar4 + 0x224);
    }
    lVar6 = *(int64_t *)(param_1 + 0x448);
    if ((lVar6 == 0) || (plVar9 = *(int64_t **)(lVar6 + 0x1e0), plVar9 == (int64_t *)0x0)) {
      plVar9 = (int64_t *)0x0;
    }
    else if (lVar4 != 0) {
      *(int64_t *)(lVar6 + 0x340) = (int64_t)*(int *)(lVar4 + 0x224);
    }
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),0,lVar12);
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),1,lVar14);
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),2,lVar10);
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),3,lVar11);
    plVar3 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar9 != (int64_t *)0x0) && (*plVar9 != 0)) {
      (**(code **)(*plVar3 + 0x70))(plVar3,*plVar9,2);
    }
    lVar4 = system_message_buffer;
    plVar3[0x107e] = (int64_t)plVar9;
    FUN_18029de40(*(uint64_t *)(lVar4 + 0x1cd8),4);
    if (*(char *)(param_1 + 0x4d) == '\0') {
      uVar13 = (uint)*(ushort *)(*(int64_t *)(param_1 + 0x428) + 0x32c);
      uVar15 = (uint)*(ushort *)(*(int64_t *)(param_1 + 0x428) + 0x32e);
      fStack_168 = (float)uVar13;
      uStack_164 = (float)uVar15;
      fVar1 = *(float *)(param_3 + 0x11c18);
      fVar2 = *(float *)(param_3 + 0x11c1c);
      lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
      uStack_170 = 0;
      uStack_160 = 0;
      uStack_15c = 0x3f800000;
      plVar9 = *(int64_t **)(lVar4 + 0x8400);
      (**(code **)(*plVar9 + 0x160))(plVar9,1,&uStack_170);
      uStack_180 = (void **)CONCAT44((int)fVar1,(int)fVar2);
      plVar9 = *(int64_t **)(lVar4 + 0x8400);
      uStack_178 = uVar13;
      uStack_174 = uVar15;
      (**(code **)(*plVar9 + 0x168))(plVar9,1,&uStack_180);
    }
    else {
      uVar13 = (uint)*(float *)(param_3 + 0x11c20);
      uVar15 = (uint)*(float *)(param_3 + 0x11c24);
      uStack_180 = (void **)
                   CONCAT44((int)*(float *)(param_3 + 0x11c18),(int)*(float *)(param_3 + 0x11c1c));
      uStack_178 = uVar13;
      uStack_174 = uVar15;
      FUN_18029d0a0(*(uint64_t *)(system_message_buffer + 0x1cd8),(float *)(param_3 + 0x11c18),
                    &uStack_180);
    }
    lVar6 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1df0) =
         *(uint64_t *)(param_3 + 0x35a8);
    *(uint64_t *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1df8) = *(uint64_t *)(param_3 + 0x35b0);
    *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1be0) = 0.5 / (float)(int)uVar13;
    *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1be4) = 0.5 / (float)(int)uVar15;
    plVar9 = (int64_t *)(param_1 + 0x138);
    lVar4 = *plVar9;
    if (lVar4 == 0) {
      *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1be8) =
           (float)(1.0 / *(double *)(param_1 + 0x58));
      *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1bec) =
           (float)(1.0 / *(double *)(param_1 + 0x60));
    }
    else {
      *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar4 + 0x32c);
      *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar4 + 0x32e);
    }
    lVar4 = system_parameter_buffer;
    if (*(char *)(system_parameter_buffer + 0x12f8) == '\x01') {
      *(int32_t *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1c78) =
           *(int32_t *)(system_parameter_buffer + 0x1304);
      *(int32_t *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1c7c) = *(int32_t *)(lVar4 + 0x12fc);
      *(int32_t *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1c74) = *(int32_t *)(lVar4 + 0x1300);
      *(int32_t *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar4 + 0x1308);
    }
    FUN_18029fc10(*(int64_t *)(lVar6 + 0x1cd8),*(uint64_t *)(lVar6 + 0x1c88),
                  *(int64_t *)(lVar6 + 0x1cd8) + 0x1be0,0x230);
    iVar16 = 0;
    uStack_180 = (void **)0x0;
    uStack_268 = param_5;
    FUN_1801f7d20(param_1,param_3,afStack_250,&uStack_180);
    uStack_170 = uStack_180;
    fStack_168 = afStack_250[0];
    uStack_164._0_2_ = 4;
    uStack_248 = *(uint64_t *)(param_1 + 0x30);
    plStack_228 = (int64_t *)0x0;
    puStack_220 = &system_data_buffer_ptr;
    uStack_208 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    plStack_1f0 = (int64_t *)0x0;
    uStack_238 = CONCAT26(uStack_164._2_2_,CONCAT24(4,afStack_250[0]));
    uStack_240 = uStack_180;
    uStack_230 = 2;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uVar5 = *(uint64_t *)(*(int64_t *)(param_1 + 0x30) + 0x15b8);
    uStack_1d8 = uStack_180;
    uStack_1c8 = 2;
    uStack_1c0 = 0;
    uStack_1e0 = uStack_248;
    uStack_1d0 = uStack_238;
    uStack_180 = (void **)&uStack_1e0;
    SystemCore_NetworkHandler0(auStack_1b8,&puStack_220);
    uStack_198 = uStack_200;
    uStack_190 = uStack_1f8;
    plStack_188 = plStack_1f0;
    if (plStack_1f0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1f0 + 0x28))();
    }
    uVar5 = FUN_180299eb0(uVar5,param_3,&uStack_1e0,acStack_258);
    if (acStack_258[0] == '\0') {
      *(uint64_t *)(param_1 + 0xf8) = uVar5;
      *(int32_t *)(param_1 + 0x134) = 4;
      *(int32_t *)(param_1 + 0x114) = *(int32_t *)(*(int64_t *)(param_1 + 0x428) + 0x324);
      *(int32_t *)(param_1 + 0x118) = *(int32_t *)(*(int64_t *)(param_1 + 0x430) + 0x324);
      *(int32_t *)(param_1 + 0x11c) = *(int32_t *)(*(int64_t *)(param_1 + 0x438) + 0x324);
      *(int32_t *)(param_1 + 0x120) = *(int32_t *)(*(int64_t *)(param_1 + 0x440) + 0x324);
      iVar8 = iVar16;
      do {
        if (*plVar9 != 0) {
          uStack_268 = 0xffffffff;
          FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),iVar8,*plVar9,0x10);
        }
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 1;
      } while (iVar8 < 0x10);
      FUN_18029d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
      FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0xf8);
      FUN_18029e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
      lVar4 = system_message_buffer;
      lVar6 = strnlen(&processed_var_6480_ptr,0x3f);
      strncpy(lVar4 + 0x1ce0,&processed_var_6480_ptr,lVar6);
      *(int8_t *)(lVar6 + 0x1ce0 + lVar4) = 0;
      lVar12 = 0x8a38;
      lVar6 = 0x8438;
      lVar4 = system_message_buffer;
      do {
        if ((*(int64_t *)(param_1 + -0x8300 + lVar6) != 0) &&
           (((lVar14 = *(int64_t *)(lVar4 + 0x1cd8), *(int64_t *)(lVar14 + lVar6) != 0 ||
             (*(int *)(lVar12 + -0x200 + lVar14) != -1)) || (*(int *)(lVar14 + lVar12) != 0x10)))) {
          uStack_180 = (void **)0x0;
          (**(code **)(**(int64_t **)(lVar14 + 0x8400) + 0x40))
                    (*(int64_t **)(lVar14 + 0x8400),iVar16,1,&uStack_180);
          *(uint64_t *)(lVar14 + lVar6) = 0;
          *(int32_t *)(lVar12 + -0x200 + lVar14) = 0xffffffff;
          *(int32_t *)(lVar14 + lVar12) = 0x10;
          *(int *)(lVar14 + 0x82b4) = *(int *)(lVar14 + 0x82b4) + 1;
          lVar4 = system_message_buffer;
        }
        iVar16 = iVar16 + 1;
        lVar6 = lVar6 + 8;
        lVar12 = lVar12 + 4;
      } while (iVar16 < 0x10);
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83b8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83d0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83f0) = 0;
      FUN_18029de40(*(uint64_t *)(lVar4 + 0x1cd8),4);
    }
    if (plStack_1f0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1f0 + 0x38))();
    }
    uStack_180 = &puStack_220;
    puStack_220 = &system_data_buffer_ptr;
    if (lStack_218 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_218 = 0;
    uStack_208 = uStack_208 & 0xffffffff00000000;
    puStack_220 = &system_state_ptr;
    if (plStack_228 != (int64_t *)0x0) {
      (**(code **)(*plStack_228 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  }
  FUN_1802c2ac0(&puStack_158);
  render_system_data_memory = render_system_data_memory + -1;
  (**(code **)(*render_system_data_memory + 0x20))();
  puStack_f8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_288);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180403440(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_180403440(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int32_t param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  int8_t uVar3;
  int8_t uVar4;
  int16_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint uVar14;
  int8_t auStackX_8 [8];
  
  FUN_1801f6650();
  uVar11 = system_parameter_buffer;
  lVar6 = *(int64_t *)(param_1 + 0x428);
  FUN_1802c22a0(auStackX_8,&processed_var_4424_ptr);
  lVar13 = system_message_buffer;
  plVar7 = *(int64_t **)(system_message_buffer + 0x1cd8);
  plVar8 = *(int64_t **)(lVar6 + 0x1d8);
  if (plVar8 != (int64_t *)0x0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar6 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    if (*plVar8 != 0) {
      (**(code **)(*plVar7 + 0x70))(plVar7,*plVar8,1,param_4,param_5);
      lVar13 = system_message_buffer;
    }
  }
  plVar7[0x1077] = (int64_t)plVar8;
  FUN_18029de40(*(uint64_t *)(lVar13 + 0x1cd8),1);
  for (uVar14 = 0; (uint64_t)(int64_t)(int)uVar14 < (uint64_t)*(uint *)(param_3 + 0x2480);
      uVar14 = uVar14 + 1) {
    lVar13 = (uint64_t)(uVar14 >> 0xb) * 8;
    lVar1 = (uint64_t)(uVar14 & 0x7ff) * 0x18;
    lVar9 = *(int64_t *)(*(int64_t *)(lVar13 + 0x2488 + param_3) + 0x10 + lVar1);
    if (*(char *)(lVar9 + 0x330) != '\x03') {
      uVar3 = *(int8_t *)(lVar9 + 0xc0);
      uVar2 = *(uint64_t *)(lVar9 + 0x90);
      uVar5 = *(int16_t *)(lVar9 + 0x98);
      uVar10 = *(uint64_t *)(lVar9 + 0x88);
      uVar4 = *(int8_t *)(lVar9 + 0x9b);
      *(int32_t *)(lVar9 + 0x90) = 0x1020101;
      *(int8_t *)(lVar9 + 0xc0) = 0;
      *(int32_t *)(lVar9 + 0xc4) = 1;
      *(int32_t *)(lVar9 + 0xa4) = *(int32_t *)(lVar6 + 0x324);
      lVar12 = FUN_180245280(param_3);
      *(int32_t *)(lVar9 + 0xa0) = *(int32_t *)(lVar12 + 0x324);
      *(int32_t *)(lVar9 + 0x21c) = 1;
      FUN_1800e8640(uVar11,*(uint64_t *)(*(int64_t *)(lVar13 + 0x2488 + param_3) + lVar1 + 0x10))
      ;
      *(int8_t *)(lVar9 + 0xc0) = uVar3;
      *(uint64_t *)(lVar9 + 0x90) = uVar2;
      *(int16_t *)(lVar9 + 0x98) = uVar5;
      *(int8_t *)(lVar9 + 0x9b) = uVar4;
      *(uint64_t *)(lVar9 + 0x88) = uVar10;
      *(int32_t *)(lVar9 + 0x21c) = 0;
    }
  }
  render_system_data_memory = render_system_data_memory + -1;
                    // WARNING: Could not recover jumptable at 0x00018040366d. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*render_system_data_memory + 0x20))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180403680(uint64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180403680(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int8_t auStack_d8 [32];
  uint64_t uStack_b8;
  int8_t auStack_a8 [8];
  void **ppuStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  lVar1 = param_1[0x27];
  lVar2 = *(int64_t *)(lVar1 + 0x1d8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (system_main_module_state != 0) {
    *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  }
  FUN_1800cfb40(lVar1,param_3,lVar2);
  ppuStack_a0 = &puStack_88;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  uStack_78 = 0;
  auStack_70[0] = 0;
  FUN_180049bf0(&puStack_88,&rendering_buffer_2080_ptr);
  FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_88);
  FUN_1802c22a0(auStack_a8,&rendering_buffer_2064_ptr);
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (*(int *)(lVar1 + 0x8a78) != 0x10)) {
    uStack_98 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x10,1,&uStack_98);
    *(uint64_t *)(lVar1 + 0x84b8) = 0;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    ppuStack_a0 = (void **)0x0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x21,1,&ppuStack_a0);
    *(uint64_t *)(lVar1 + 0x8540) = 0;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  uStack_b8 = param_1[0x27];
  FUN_1800d0950(system_parameter_buffer,param_3,1);
  uStack_b8 = param_1[0x27];
  FUN_1800d0950(system_parameter_buffer,param_3,0,0);
  uStack_b8 = param_1[0x27];
  FUN_1800d0950(system_parameter_buffer,param_3,1,0);
  render_system_data_memory = render_system_data_memory + -1;
  (**(code **)(*render_system_data_memory + 0x20))();
  FUN_1802c2ac0(&puStack_88);
  if ((void *)*param_1 != &processed_var_7424_ptr) {
    (**(code **)((void *)*param_1 + 0x28))(param_1);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_d8);
}





// 函数: void FUN_180403910(int64_t param_1,int64_t param_2,uint64_t param_3,float param_4,float param_5,
void FUN_180403910(int64_t param_1,int64_t param_2,uint64_t param_3,float param_4,float param_5,
                  int64_t param_6)

{
  char cVar1;
  int32_t uVar2;
  int iVar3;
  byte bVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  float *pfVar7;
  uint64_t uVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  
  fVar16 = (float)(*(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c)) * param_4 +
           (float)*(int *)(param_1 + 0x18c);
  if (((*(byte *)(param_2 + 0x810) & 1) != 0) && (cVar1 = FUN_1804044a0(), cVar1 != '\0')) {
    FUN_180404500(param_1,&fStack_68,fVar16);
    fStack_6c = *(float *)(param_2 + 0x102c);
    *(uint64_t *)(param_2 + 0x800) =
         *(uint64_t *)(param_2 + 0x800) | *(uint64_t *)(param_2 + 0x810);
    fStack_78 = fStack_68 * param_5 + *(float *)(param_2 + 0x1020);
    fStack_74 = *(float *)(param_2 + 0x1024) + fStack_64 * param_5;
    fStack_70 = *(float *)(param_2 + 0x1028) + fStack_60 * param_5;
    *(float *)(param_2 + 0x1020) = fStack_78;
    *(float *)(param_2 + 0x1024) = fStack_74;
    *(float *)(param_2 + 0x1028) = fStack_70;
    *(float *)(param_2 + 0x102c) = fStack_6c;
  }
  cVar1 = FUN_180404420(param_1);
  uVar5 = 0;
  if ('\0' < cVar1) {
    uVar6 = 0;
    pfVar7 = (float *)(param_2 + 0x820);
    uVar8 = uVar6;
    do {
      if ((*(uint64_t *)(param_2 + 0x810) >> (uVar5 & 0x3f) & 1) != 0) {
        uVar2 = FUN_180404730(param_1,&fStack_78,fVar16,uVar5);
        fVar9 = *pfVar7 * fStack_78;
        fVar11 = pfVar7[1] * fStack_74;
        fVar12 = pfVar7[2] * fStack_70;
        fVar13 = pfVar7[3] * fStack_6c;
        fVar14 = fVar13 + fVar9;
        fVar15 = fVar12 + fVar11;
        auVar10._0_4_ = fVar15 + fVar14;
        auVar10._4_4_ = fVar14 + fVar15;
        auVar10._8_4_ = fVar14 + fVar11 + fVar12;
        auVar10._12_4_ = fVar15 + fVar9 + fVar13;
        iVar3 = movmskps(uVar2,auVar10);
        if (iVar3 != 0) {
          fStack_70 = -fStack_70;
          fStack_6c = -fStack_6c;
          fStack_78 = -fStack_78;
          fStack_74 = -fStack_74;
        }
        *pfVar7 = *pfVar7 + param_5 * fStack_78;
        pfVar7[1] = pfVar7[1] + param_5 * fStack_74;
        pfVar7[2] = pfVar7[2] + param_5 * fStack_70;
        pfVar7[3] = pfVar7[3] + param_5 * fStack_6c;
        *(uint64_t *)(param_2 + 0x800) =
             *(uint64_t *)(param_2 + 0x800) |
             *(uint64_t *)(*(int64_t *)(param_6 + 0x140) + 0xe8 + uVar8);
        *(uint64_t *)(param_2 + 0x808) = *(uint64_t *)(param_2 + 0x808) | 1L << (uVar6 & 0x3f);
      }
      bVar4 = (char)uVar5 + 1;
      uVar5 = (uint64_t)bVar4;
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + 4;
      uVar8 = uVar8 + 0x1b0;
    } while ((char)bVar4 < cVar1);
  }
  return;
}





// 函数: void FUN_180403a19(float param_1)
void FUN_180403a19(float param_1)

{
  int8_t auVar1 [16];
  int32_t uVar2;
  int iVar3;
  byte bVar4;
  uint64_t unaff_RBX;
  uint64_t uVar5;
  float *pfVar6;
  int64_t unaff_RDI;
  uint64_t uVar7;
  char unaff_R15B;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM8_Da;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  int64_t in_stack_000000c8;
  
  uVar5 = 0;
  pfVar6 = (float *)(unaff_RDI + 0x820);
  uVar7 = uVar5;
  do {
    if ((*(uint64_t *)(unaff_RDI + 0x810) >> (unaff_RBX & 0x3f) & 1) != 0) {
      uVar2 = FUN_180404730(param_1,&fStackX_20);
      fVar8 = *pfVar6 * fStackX_20;
      fVar9 = pfVar6[1] * fStackX_24;
      fVar10 = pfVar6[2] * fStack0000000000000028;
      fVar11 = pfVar6[3] * fStack000000000000002c;
      fVar12 = fVar11 + fVar8;
      fVar13 = fVar10 + fVar9;
      auVar1._4_4_ = fVar12 + fVar13;
      auVar1._0_4_ = fVar13 + fVar12;
      auVar1._8_4_ = fVar12 + fVar9 + fVar10;
      auVar1._12_4_ = fVar13 + fVar8 + fVar11;
      iVar3 = movmskps(uVar2,auVar1);
      if (iVar3 != 0) {
        fStack0000000000000028 = -fStack0000000000000028;
        fStack000000000000002c = -fStack000000000000002c;
        fStackX_20 = -fStackX_20;
        fStackX_24 = -fStackX_24;
      }
      param_1 = unaff_XMM8_Da * fStackX_20;
      *pfVar6 = *pfVar6 + param_1;
      pfVar6[1] = pfVar6[1] + unaff_XMM8_Da * fStackX_24;
      pfVar6[2] = pfVar6[2] + unaff_XMM8_Da * fStack0000000000000028;
      pfVar6[3] = pfVar6[3] + unaff_XMM8_Da * fStack000000000000002c;
      *(uint64_t *)(unaff_RDI + 0x800) =
           *(uint64_t *)(unaff_RDI + 0x800) |
           *(uint64_t *)(*(int64_t *)(in_stack_000000c8 + 0x140) + 0xe8 + uVar7);
      *(uint64_t *)(unaff_RDI + 0x808) = *(uint64_t *)(unaff_RDI + 0x808) | 1L << (uVar5 & 0x3f);
    }
    bVar4 = (char)unaff_RBX + 1;
    unaff_RBX = (uint64_t)bVar4;
    uVar5 = uVar5 + 1;
    pfVar6 = pfVar6 + 4;
    uVar7 = uVar7 + 0x1b0;
  } while ((char)bVar4 < unaff_R15B);
  return;
}





// 函数: void FUN_180403b6b(void)
void FUN_180403b6b(void)

{
  return;
}



uint64_t FUN_180403b90(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int64_t *aplStackX_8 [4];
  
  puVar2 = (uint64_t *)
           FUN_1800b3670(param_1,aplStackX_8,(*(byte *)(param_1 + 0x1a8) >> 4) - 1,
                         (*(byte *)(param_1 + 0x1a8) & 0xf) - 1,0xfffffffffffffffe);
  uVar1 = *puVar2;
  if (aplStackX_8[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




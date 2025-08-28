#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part087.c - 4 个函数

// 函数: void FUN_1803198f0(uint64_t param_1,int64_t param_2,int param_3,int param_4,int32_t param_5)
void FUN_1803198f0(uint64_t param_1,int64_t param_2,int param_3,int param_4,int32_t param_5)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int32_t uVar6;
  float fVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int8_t auStack_228 [32];
  int32_t uStack_208;
  int32_t uStack_200;
  int8_t auStack_1f8 [8];
  int64_t *plStack_1f0;
  int64_t *aplStack_1e8 [2];
  int64_t *plStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  int32_t uStack_1c0;
  int64_t *plStack_1b8;
  int64_t *plStack_1b0;
  int64_t lStack_1a8;
  int32_t uStack_1a0;
  uint64_t uStack_198;
  int32_t uStack_190;
  int32_t uStack_18c;
  int32_t uStack_188;
  int32_t uStack_184;
  int64_t *plStack_180;
  uint64_t uStack_178;
  int64_t *plStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  int32_t uStack_158;
  uint64_t uStack_150;
  int8_t auStack_148 [32];
  uint64_t uStack_128;
  uint64_t uStack_120;
  int64_t *plStack_118;
  int64_t **pplStack_110;
  int iStack_108;
  int iStack_104;
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e4 [8];
  uint64_t uStack_dc;
  uint64_t uStack_d4;
  uint64_t uStack_cc;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  uint64_t uStack_98;
  float fStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  uint64_t uStack_80;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_80 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_228;
  FUN_1802c22a0(auStack_1f8,&unknown_var_6264_ptr);
  lVar3 = system_message_buffer;
  iVar5 = 0x80 >> ((byte)param_3 & 0x1f);
  plVar1 = *(int64_t **)(system_message_buffer + 0x1cd8);
  if (*(int64_t *)(param_2 + 0x1d8) == 0) {
    plVar4 = (int64_t *)0x0;
  }
  else {
    if (system_main_module_state != 0) {
      *(int64_t *)(param_2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar4 = (int64_t *)
             ((int64_t)(int)((uint)*(byte *)(param_2 + 0x335) * param_4 + param_3) * 0x10 +
             *(int64_t *)(param_2 + 0x1d8));
    if ((plVar4 != (int64_t *)0x0) && (*plVar4 != 0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar4,1);
      lVar3 = system_message_buffer;
    }
  }
  plVar1[0x1077] = (int64_t)plVar4;
  *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(uint64_t *)(lVar3 + 0x1cd8),1);
  uStack_200 = 0;
  uStack_208 = 0;
  FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0xff000000,0x3f800000);
  lVar3 = system_message_buffer;
  fStack_90 = (float)iVar5;
  fVar7 = 1.0 / fStack_90;
  *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0) = fVar7 * 0.5;
  *(float *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1be4) = fVar7 * 0.5;
  *(float *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1be8) = fVar7;
  *(float *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1bec) = fVar7;
  lVar3 = *(int64_t *)(lVar3 + 0x1cd8);
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_84 = 0x3f800000;
  plVar1 = *(int64_t **)(lVar3 + 0x8400);
  uStack_8c = fStack_90;
  (**(code **)(*plVar1 + 0x160))(plVar1,1,&uStack_98);
  pplStack_110 = (int64_t **)0x0;
  plVar1 = *(int64_t **)(lVar3 + 0x8400);
  iStack_108 = iVar5;
  iStack_104 = iVar5;
  (**(code **)(*plVar1 + 0x168))(plVar1,1,&pplStack_110);
  lVar3 = system_message_buffer;
  uVar6 = 0x7fc00000;
  uVar8 = 0x7fc00000;
  uVar9 = 0x7fc00000;
  uVar14 = 0x7fc00000;
  uVar10 = uVar8;
  uVar11 = uVar8;
  uVar12 = uVar8;
  uVar13 = uVar8;
  switch(param_4) {
  case 0:
    uVar8 = 0x3f800000;
    uVar12 = 0;
    uVar9 = 0xbf800000;
    goto code_r0x000180319bb4;
  case 1:
    uVar6 = 0xbf800000;
    uVar8 = 0xbf800000;
    uVar12 = 0;
    uVar9 = 0x3f800000;
    break;
  case 2:
    uVar6 = 0xbf800000;
    uVar8 = 0xbf800000;
    uVar12 = 0x3f800000;
    uVar9 = 0;
    uVar13 = 0x3f800000;
    uVar14 = 0;
    goto code_r0x000180319bba;
  case 3:
    uVar6 = 0xbf800000;
    uVar8 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar12 = 0x3f800000;
    uVar9 = 0;
    uVar14 = 0;
    uVar13 = uVar11;
    goto code_r0x000180319bbd;
  case 4:
    uVar6 = 0xbf800000;
    uVar8 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar9 = 0;
    break;
  case 5:
    uVar8 = 0xbf800000;
    uVar12 = 0xbf800000;
    uVar9 = 0;
code_r0x000180319bb4:
    uVar6 = 0x3f800000;
    break;
  default:
    goto LAB_180319bc0;
  }
  uVar14 = 0xbf800000;
  uVar13 = 0;
code_r0x000180319bba:
  uVar11 = 0x3f800000;
code_r0x000180319bbd:
  uVar10 = 0;
LAB_180319bc0:
  *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1bf0) = uVar6;
  *(int32_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1bf4) = uVar8;
  *(int32_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1bf8) = uVar11;
  *(int32_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1bfc) = 0x3f800000;
  *(int32_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1c10) = uVar12;
  *(int32_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1c14) = uVar9;
  *(int32_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1c18) = uVar10;
  *(float *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1c1c) = (float)param_3;
  *(int32_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1c20) = uVar10;
  *(int32_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1c24) = uVar13;
  *(int32_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1c28) = uVar14;
  *(int32_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1c2c) = 0x3f800000;
  FUN_18031a240(aplStack_1e8,param_5);
  FUN_18029fc10(*(int64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(system_message_buffer + 0x1c88),
                *(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0,0x230);
  puStack_f8 = &unknown_var_3480_ptr;
  puStack_f0 = auStack_e4 + 4;
  auStack_e4[4] = 0;
  uStack_e8 = 0xd;
  strcpy_s(auStack_e4 + 4,0x40,&unknown_var_984_ptr);
  FUN_1800b4910(system_resource_state,&plStack_1f0,&puStack_f8);
  puStack_f8 = &system_state_ptr;
  uStack_98 = 0;
  fStack_90 = 0.0;
  uStack_8c._0_2_ = 4;
  plStack_1b8 = (int64_t *)0x0;
  plStack_1b0 = (int64_t *)&system_data_buffer_ptr;
  uStack_198 = 0;
  lStack_1a8 = 0;
  uStack_1a0 = 0;
  plStack_180 = (int64_t *)0x0;
  plStack_1d8 = plStack_1f0;
  uStack_1c8 = CONCAT26(uStack_8c._2_2_,0x400000000);
  uStack_1d0 = 0;
  uStack_1c0 = 2;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  lVar3 = plStack_1f0[0x2b7];
  pplStack_110 = &plStack_170;
  plStack_170 = plStack_1f0;
  uStack_168 = 0;
  uStack_158 = 2;
  uStack_150 = 0;
  uStack_160 = uStack_1c8;
  FUN_180627ae0(auStack_148,&plStack_1b0);
  uStack_128 = CONCAT44(uStack_18c,uStack_190);
  uStack_120 = CONCAT44(uStack_184,uStack_188);
  plStack_118 = plStack_180;
  if (plStack_180 != (int64_t *)0x0) {
    (**(code **)(*plStack_180 + 0x28))();
  }
  puStack_f8 = (void *)FUN_180299eb0(lVar3,0,&plStack_170,auStack_1f8);
  uStack_e8 = 0xff;
  auStack_e4 = (int8_t  [8])0x4000300;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0x400;
  uStack_bc = 1;
  uStack_dc = (uint64_t)*(uint *)(param_2 + 0x324);
  puStack_f0 = (int8_t *)0xff00000001060101;
  uStack_208 = 0xffffffff;
  FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),5,param_1,0x10);
  uStack_208 = 0xffffffff;
  FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0,aplStack_1e8[0],0x10);
  FUN_18029d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
  FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),&puStack_f8);
  lVar3 = system_message_buffer;
  lVar2 = strnlen(&unknown_var_6216_ptr,0x3f);
  strncpy(lVar3 + 0x1ce0,&unknown_var_6216_ptr,lVar2);
  *(int8_t *)(lVar2 + 0x1ce0 + lVar3) = 0;
  FUN_18029e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  if (plStack_180 != (int64_t *)0x0) {
    (**(code **)(*plStack_180 + 0x38))();
  }
  pplStack_110 = &plStack_1b0;
  plStack_1b0 = (int64_t *)&system_data_buffer_ptr;
  if (lStack_1a8 == 0) {
    lStack_1a8 = 0;
    uStack_198 = uStack_198 & 0xffffffff00000000;
    plStack_1b0 = (int64_t *)&system_state_ptr;
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    if (plStack_1f0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1f0 + 0x38))();
    }
    if (aplStack_1e8[0] != (int64_t *)0x0) {
      (**(code **)(*aplStack_1e8[0] + 0x38))();
    }
    render_system_data_memory = render_system_data_memory + -1;
    (**(code **)(*render_system_data_memory + 0x20))();
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_80 ^ (uint64_t)auStack_228);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031a020(uint64_t *param_1,int64_t param_2,int32_t param_3)
void FUN_18031a020(uint64_t *param_1,int64_t param_2,int32_t param_3)

{
  uint uVar1;
  int32_t *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *puVar7;
  int8_t auStack_188 [32];
  int32_t uStack_168;
  void *puStack_158;
  void *puStack_150;
  uint uStack_148;
  int32_t uStack_140;
  int32_t uStack_138;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  uint uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int8_t uStack_10c;
  uint64_t uStack_10b;
  int32_t uStack_100;
  int8_t uStack_fc;
  uint64_t uStack_f8;
  uint64_t *puStack_f0;
  void *puStack_e8;
  int8_t *puStack_e0;
  int iStack_d8;
  int8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  uStack_138 = 0;
  uVar1 = 0x80;
  iVar4 = -1;
  do {
    iVar5 = iVar4;
    uVar1 = uVar1 >> 1;
    iVar4 = iVar5 + 1;
  } while (uVar1 != 0);
  uVar6 = iVar5 + 2;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0x3f800000;
  uStack_10b = 0x1000001;
  uStack_fc = 0;
  uStack_130 = 0x80;
  uStack_12c = 0x80;
  uStack_128 = 6;
  uStack_120 = 0x1e;
  uStack_10c = 1;
  uStack_124 = uVar6;
  uStack_100 = param_3;
  puStack_f0 = param_1;
  FUN_1806279c0(&puStack_158,param_2 + 0x10);
  uVar1 = uStack_148;
  uVar3 = uStack_148 + 1;
  FUN_1806277c0(&puStack_158,uVar3);
  *(int16_t *)(puStack_150 + uStack_148) = 0x5f;
  iVar4 = uVar1 + 0x11;
  uStack_148 = uVar3;
  FUN_1806277c0(&puStack_158,iVar4);
  puVar2 = (int32_t *)(puStack_150 + uStack_148);
  *puVar2 = 0x746c6966;
  puVar2[1] = 0x64657265;
  puVar2[2] = 0x6275635f;
  puVar2[3] = 0x70616d65;
  *(int8_t *)(puVar2 + 4) = 0;
  puStack_e8 = &unknown_var_3432_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  puVar7 = &system_buffer_ptr;
  if (puStack_150 != (void *)0x0) {
    puVar7 = puStack_150;
  }
  uStack_148 = iVar4;
  iStack_d8 = iVar4;
  strcpy_s(auStack_d0,0x80,puVar7);
  FUN_1800b1230(system_resource_state,param_1,&puStack_e8,&uStack_130);
  uStack_138 = 1;
  puStack_e8 = &system_state_ptr;
  uVar1 = 0;
  do {
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        uStack_168 = param_3;
        FUN_1803198f0(param_2,*param_1,uVar3,uVar1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 6);
  puStack_158 = &system_data_buffer_ptr;
  if (puStack_150 == (void *)0x0) {
    puStack_150 = (void *)0x0;
    uStack_140 = 0;
    puStack_158 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_188);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031a240(uint64_t *param_1,int32_t param_2)
void FUN_18031a240(uint64_t *param_1,int32_t param_2)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  int8_t auStack_f8 [32];
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t *puStack_b8;
  float *pfStack_a8;
  uint64_t uStack_a0;
  int16_t uStack_98;
  int8_t uStack_96;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  int32_t uStack_4c;
  int16_t uStack_48;
  int16_t uStack_46;
  int16_t uStack_44;
  int8_t uStack_42;
  uint64_t uStack_38;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_c8 = 0;
  pfStack_a8 = (float *)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_96 = 3;
  uStack_42 = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_48 = 1;
  uStack_46 = 1;
  uStack_4c = 0x200020;
  uStack_54 = 0x21;
  uStack_44 = 0x102;
  puStack_b8 = param_1;
  FUN_1802a1bc0(&pfStack_a8);
  fVar11 = 0.0;
  pfVar5 = pfStack_a8;
  iVar7 = 0;
  do {
    fVar8 = 0.0;
    iVar6 = 0;
    do {
      uVar4 = (uint)(fVar11 * 32.0 + fVar8);
      *pfVar5 = (float)(int)uVar4 * 0.0009765625;
      dVar10 = 0.0;
      dVar9 = 0.5;
      for (; uVar4 != 0; uVar4 = (int)uVar4 / 2) {
        uVar1 = uVar4 & 0x80000001;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
        }
        dVar10 = dVar10 + (double)(int)uVar1 * dVar9;
        dVar9 = dVar9 * 0.5;
      }
      pfVar5[1] = (float)dVar10;
      pfVar5[2] = 0.0;
      pfVar5[3] = 1.0;
      pfVar5 = pfVar5 + 4;
      iVar6 = iVar6 + 1;
      fVar8 = (float)iVar6;
    } while (fVar8 < 32.0);
    iVar7 = iVar7 + 1;
    fVar11 = (float)iVar7;
  } while (fVar11 < 32.0);
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x3b0,0x10,CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),3));
  plVar3 = (int64_t *)FUN_18023a2e0(uVar2,0);
  *param_1 = plVar3;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_c8 = 1;
  uStack_d8 = *param_1;
  uStack_d0 = param_2;
  FUN_1800a5810(system_message_buffer,&pfStack_a8,1,0);
  if (uStack_98._1_1_ == '\0') {
    if (((char)uStack_98 == '\0') && (pfStack_a8 != (float *)0x0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pfStack_a8 = (float *)0x0;
    uStack_a0 = 0;
    uStack_98 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_f8);
}





// 函数: void FUN_18031a470(int64_t param_1,int64_t param_2)
void FUN_18031a470(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  
  plVar5 = (int64_t *)0x0;
  plVar3 = *(int64_t **)(param_1 + 0x58);
  iVar4 = (int)(*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 3);
  if (iVar4 < 1) {
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(int64_t **)(param_2 + 0x9970);
    *(int64_t **)(param_2 + 0x9970) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = *(int64_t **)(param_1 + 0x40);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(int64_t **)(param_2 + 0x9720);
    *(int64_t **)(param_2 + 0x9720) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = *(int64_t **)(param_1 + 0x48);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(int64_t **)(param_2 + 0x9728);
    *(int64_t **)(param_2 + 0x9728) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(int32_t *)(param_2 + 0x124c0) = 0;
  }
  else {
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(int64_t **)(param_2 + 0x9970);
    *(int64_t **)(param_2 + 0x9970) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = *(int64_t **)(param_1 + 0x40);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(int64_t **)(param_2 + 0x9720);
    *(int64_t **)(param_2 + 0x9720) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = *(int64_t **)(param_1 + 0x48);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(int64_t **)(param_2 + 0x9728);
    *(int64_t **)(param_2 + 0x9728) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(int *)(param_2 + 0x124c0) = iVar4;
  }
  if (*(int64_t *)(param_2 + 0x9970) == 0) {
    plVar3 = (int64_t *)FUN_1800bde30();
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(int64_t **)(param_2 + 0x9970);
    *(int64_t **)(param_2 + 0x9970) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(int32_t *)(param_2 + 0x124c0) = 0;
  }
  if ((*(char *)(*(int64_t *)(param_1 + 0x38) + 0x331d) == '\0') &&
     (*(int *)(param_1 + 0x30) != -1)) {
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + (int64_t)*(int *)(param_1 + 0x30) * 8);
    if (*(int64_t *)(lVar2 + 0x40) == 0) {
      plVar5 = *(int64_t **)(lVar2 + 0x128);
    }
    else {
      plVar5 = *(int64_t **)(lVar2 + 0x28);
    }
  }
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar3 = *(int64_t **)(param_2 + 0x9988);
  *(int64_t **)(param_2 + 0x9988) = plVar5;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




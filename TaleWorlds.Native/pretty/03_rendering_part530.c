#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part530.c - 2 个函数

// 函数: void FUN_1805575d0(int64_t param_1)
void FUN_1805575d0(int64_t param_1)

{
  *(int32_t *)(param_1 + 0x20) = 0xffffffff;
  FUN_18033b1a0(param_1 + 0x28);
  FUN_18033b1a0(param_1 + 0x58);
  FUN_18033b1a0(param_1 + 0x88);
  FUN_18033b1a0(param_1 + 0xb8);
  FUN_18033b1a0(param_1 + 0xe8);
  FUN_18033b1a0(param_1 + 0x118);
  FUN_18033b1a0(param_1 + 0x148);
  *(uint64_t *)(param_1 + 0x178) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x180) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x188) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 400) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x198) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x1a0) = 0xffffffffffffffff;
  return;
}



uint64_t * FUN_180557680(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 9) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x4c) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x54) = 3;
  param_1[7] = 1;
  param_1[6] = &system_data_0000;
  param_1[8] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  *(int32_t *)(param_1 + 0xf) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x7c) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x84) = 3;
  param_1[0xd] = 1;
  param_1[0xc] = &system_data_0000;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x15) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0xac) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0xb4) = 3;
  param_1[0x13] = 1;
  param_1[0x12] = &system_data_0000;
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x16) = 0;
  *(int32_t *)(param_1 + 0x1b) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0xdc) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0xe4) = 3;
  param_1[0x19] = 1;
  param_1[0x18] = &system_data_0000;
  param_1[0x1a] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  *(int32_t *)(param_1 + 0x21) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x10c) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x114) = 3;
  param_1[0x1f] = 1;
  param_1[0x1e] = &system_data_0000;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x22) = 0;
  *(int32_t *)(param_1 + 0x27) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x13c) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x144) = 3;
  param_1[0x25] = 1;
  param_1[0x24] = &system_data_0000;
  param_1[0x26] = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x2d) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x16c) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x174) = 3;
  param_1[0x2b] = 1;
  param_1[0x2a] = &system_data_0000;
  param_1[0x2c] = 0;
  *(int32_t *)(param_1 + 0x2e) = 0;
  FUN_1805575d0(param_1);
  return param_1;
}



uint FUN_180557850(int64_t param_1,int param_2,int param_3,char param_4,byte param_5,byte param_6,
                  uint param_7,byte param_8)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = *(int64_t *)(param_1 + 0x30);
  uVar5 = (param_2 + 1) * 0x4000;
  uVar6 = (param_3 + 1) * 0x200;
  uVar7 = (param_4 + 1) * 0x20;
  uVar4 = (((uint)param_8 << 0xb | param_7) * 2 | (uint)param_5) * 2 | uVar7 | (uint)param_6 | uVar5
          | uVar6;
  for (puVar3 = *(uint **)(lVar2 + ((uint64_t)(int64_t)(int)uVar4 %
                                   (uint64_t)*(uint *)(param_1 + 0x38)) * 8); puVar3 != (uint *)0x0
      ; puVar3 = *(uint **)(puVar3 + 2)) {
    if (uVar4 == *puVar3) goto LAB_1805578df;
  }
  puVar3 = (uint *)0x0;
LAB_1805578df:
  if (puVar3 == (uint *)0x0) {
    puVar3 = *(uint **)(lVar2 + *(int64_t *)(param_1 + 0x38) * 8);
  }
  puVar1 = (uint64_t *)(lVar2 + *(int64_t *)(param_1 + 0x38) * 8);
  if ((puVar3 == (uint *)*puVar1) && (param_8 != 0)) {
    uVar6 = (param_7 * 2 | (uint)param_5) * 2 | uVar7 | (uint)param_6 | uVar5 | uVar6;
    for (puVar3 = *(uint **)(lVar2 + ((uint64_t)(int64_t)(int)uVar6 %
                                     (uint64_t)*(uint *)(param_1 + 0x38)) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
      if (uVar6 == *puVar3) goto LAB_18055794f;
    }
    puVar3 = (uint *)0x0;
LAB_18055794f:
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)*puVar1;
    }
  }
  return puVar3[1];
}



uint FUN_180557990(int64_t param_1,int param_2,int param_3,int param_4,byte param_5)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = param_2 * 8 + 8U | param_4 * 2 + 2U | param_3 << 7 | (uint)param_5;
  for (puVar1 = *(uint **)(*(int64_t *)(param_1 + 0x60) +
                          ((uint64_t)(int64_t)(int)uVar2 % (uint64_t)*(uint *)(param_1 + 0x68)) *
                          8); puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 2)) {
    if (uVar2 == *puVar1) goto LAB_1805579e7;
  }
  puVar1 = (uint *)0x0;
LAB_1805579e7:
  if (puVar1 == (uint *)0x0) {
    puVar1 = *(uint **)(*(int64_t *)(param_1 + 0x60) + *(int64_t *)(param_1 + 0x68) * 8);
  }
  return puVar1[1];
}



uint FUN_180557a10(int64_t param_1,int param_2,int param_3,int param_4,byte param_5)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = param_2 * 8 + 8U | param_4 * 2 + 2U | param_3 << 7 | (uint)param_5;
  for (puVar1 = *(uint **)(*(int64_t *)(param_1 + 0x90) +
                          ((uint64_t)(int64_t)(int)uVar2 % (uint64_t)*(uint *)(param_1 + 0x98)) *
                          8); puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 2)) {
    if (uVar2 == *puVar1) goto LAB_180557a70;
  }
  puVar1 = (uint *)0x0;
LAB_180557a70:
  if (puVar1 == (uint *)0x0) {
    puVar1 = *(uint **)(*(int64_t *)(param_1 + 0x90) + *(int64_t *)(param_1 + 0x98) * 8);
  }
  return puVar1[1];
}



uint FUN_180557aa0(int64_t param_1,uint param_2,int param_3,char param_4,byte param_5)

{
  int64_t lVar1;
  uint uVar2;
  uint *puVar3;
  
  if (param_4 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = ((param_5 ^ 1) + 1) * 0x10;
  }
  lVar1 = *(int64_t *)(param_1 + 0xc0);
  param_2 = (param_3 + 1) * 0x40 | uVar2 | param_2;
  for (puVar3 = *(uint **)(lVar1 + ((uint64_t)(int64_t)(int)param_2 %
                                   (uint64_t)*(uint *)(param_1 + 200)) * 8); puVar3 != (uint *)0x0;
      puVar3 = *(uint **)(puVar3 + 2)) {
    if (param_2 == *puVar3) goto LAB_180557b00;
  }
  puVar3 = (uint *)0x0;
LAB_180557b00:
  if (puVar3 == (uint *)0x0) {
    puVar3 = *(uint **)(lVar1 + *(int64_t *)(param_1 + 200) * 8);
  }
  if (puVar3 == *(uint **)(lVar1 + *(int64_t *)(param_1 + 200) * 8)) {
    return 0xffffffff;
  }
  return puVar3[1];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180557b40(int64_t param_1,int param_2,int param_3,int param_4,byte param_5,byte param_6,
                  byte param_7)

{
  uint uVar1;
  int64_t lVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_stack_ffffffffffffff98;
  uint in_stack_ffffffffffffffa0;
  
  uVar1 = param_4 * 2 + 2;
  lVar2 = *(int64_t *)(param_1 + 0xf0);
  uVar6 = (param_3 + 1) * 0x40;
  uVar7 = (param_2 + 1) * 0x200;
  uVar8 = ((uint)param_7 << 3 | (uint)param_5) << 5 | (uint)param_6 | uVar1 | uVar6 | uVar7;
  for (puVar4 = *(uint **)(lVar2 + ((uint64_t)(int64_t)(int)uVar8 %
                                   (uint64_t)*(uint *)(param_1 + 0xf8)) * 8); puVar4 != (uint *)0x0
      ; puVar4 = *(uint **)(puVar4 + 2)) {
    if (uVar8 == *puVar4) goto LAB_180557be4;
  }
  puVar4 = (uint *)0x0;
LAB_180557be4:
  if (puVar4 == (uint *)0x0) {
    puVar4 = *(uint **)(lVar2 + *(int64_t *)(param_1 + 0xf8) * 8);
  }
  puVar3 = *(uint **)(lVar2 + *(int64_t *)(param_1 + 0xf8) * 8);
  if (puVar4 == puVar3) {
    if (param_7 != 0) {
      uVar7 = (uint)param_5 << 5 | (uint)param_6 | uVar1 | uVar6 | uVar7;
      for (puVar5 = *(uint **)(lVar2 + ((uint64_t)(int64_t)(int)uVar7 %
                                       (uint64_t)*(uint *)(param_1 + 0xf8)) * 8);
          puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
        if (uVar7 == *puVar5) goto LAB_180557c56;
      }
      puVar5 = (uint *)0x0;
LAB_180557c56:
      puVar4 = puVar3;
      if (puVar5 != (uint *)0x0) {
        puVar4 = puVar5;
      }
    }
    if (puVar4 == puVar3) {
      (**(code **)(*(int64_t *)*render_system_data_config + 0x28))
                ((int64_t *)*render_system_data_config,&processed_var_4280_ptr,0x26a,&processed_var_4344_ptr,
                 in_stack_ffffffffffffff98 & 0xffffff00,in_stack_ffffffffffffffa0 & 0xffffff00);
    }
  }
  if (puVar4 == *(uint **)(*(int64_t *)(param_1 + 0xf0) + *(int64_t *)(param_1 + 0xf8) * 8)) {
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&processed_var_4152_ptr,param_2,param_3,param_4,param_5,param_6);
  }
  return puVar4[1];
}



uint FUN_180557d20(int64_t param_1,int param_2,byte param_3,byte param_4,float *param_5,
                  char param_6,int param_7,char param_8)

{
  int64_t lVar1;
  int64_t lVar2;
  uint **ppuVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  uint uStack_a8;
  uint *puStack_a0;
  int64_t lStack_98;
  uint *puStack_90;
  int64_t lStack_88;
  uint *puStack_80;
  int64_t lStack_78;
  uint *puStack_70;
  int64_t lStack_68;
  uint *puStack_60;
  
  pfVar9 = (float *)&processed_var_6788_ptr;
  fVar12 = -3.4028235e+38;
  uVar7 = 0xffffffff;
  uVar10 = 0x80;
  uStack_a8 = 0xffffffff;
  do {
    fVar11 = -(*param_5 * pfVar9[-1] + param_5[1] * *pfVar9);
    if (fVar12 < fVar11) {
      uVar8 = (param_7 + 1) * 0x400;
      uVar7 = param_6 * 2 + 2;
      uVar6 = (param_2 + 1) * 0x4000;
      lVar1 = *(int64_t *)(param_1 + 0x120);
      uVar4 = (uint)CONCAT11(param_8,param_4) << 5 | uVar6 | uVar8 | uVar10 - 0x40 | (uint)param_3 |
              uVar7;
      uVar5 = (uint64_t)(int64_t)(int)uVar4 % (uint64_t)*(uint *)(param_1 + 0x128);
      for (puStack_a0 = *(uint **)(lVar1 + uVar5 * 8); puStack_a0 != (uint *)0x0;
          puStack_a0 = *(uint **)(puStack_a0 + 2)) {
        if (uVar4 == *puStack_a0) goto LAB_180557e36;
      }
      puStack_a0 = (uint *)0x0;
LAB_180557e36:
      lVar2 = *(int64_t *)(param_1 + 0x128);
      if (puStack_a0 == (uint *)0x0) {
        puStack_90 = *(uint **)(lVar1 + lVar2 * 8);
        ppuVar3 = &puStack_90;
        lStack_88 = lVar1 + lVar2 * 8;
      }
      else {
        ppuVar3 = &puStack_a0;
        lStack_98 = lVar1 + uVar5 * 8;
      }
      puStack_70 = *(uint **)(lVar1 + lVar2 * 8);
      puStack_60 = *ppuVar3;
      if (puStack_60 == puStack_70) {
        if (param_8 != '\0') {
          uVar7 = (uint)param_4 << 5 | uVar6 | uVar8 | uVar10 - 0x40 | (uint)param_3 | uVar7;
          uVar5 = (uint64_t)(int64_t)(int)uVar7 % (uint64_t)*(uint *)(param_1 + 0x128);
          for (puStack_80 = *(uint **)(lVar1 + uVar5 * 8); puStack_80 != (uint *)0x0;
              puStack_80 = *(uint **)(puStack_80 + 2)) {
            if (uVar7 == *puStack_80) goto LAB_180557eb8;
          }
          puStack_80 = (uint *)0x0;
LAB_180557eb8:
          if (puStack_80 == (uint *)0x0) {
            ppuVar3 = &puStack_70;
            lStack_68 = lVar1 + lVar2 * 8;
          }
          else {
            ppuVar3 = &puStack_80;
            lStack_78 = lVar1 + uVar5 * 8;
          }
          puStack_60 = *ppuVar3;
        }
        uVar7 = uStack_a8;
        if (puStack_60 == puStack_70) goto LAB_180557f0f;
      }
      uStack_a8 = puStack_60[1];
      fVar12 = fVar11;
      uVar7 = uStack_a8;
    }
LAB_180557f0f:
    fVar11 = -(param_5[1] * pfVar9[2] + *param_5 * pfVar9[1]);
    if (fVar12 < fVar11) {
      uVar8 = (param_7 + 1) * 0x400;
      uVar6 = (param_2 + 1) * 0x4000;
      uVar7 = param_6 * 2 + 2;
      lVar1 = *(int64_t *)(param_1 + 0x120);
      uVar4 = (uint)CONCAT11(param_8,param_4) << 5 | uVar6 | uVar8 | uVar10 | (uint)param_3 | uVar7;
      uVar5 = (uint64_t)(int64_t)(int)uVar4 % (uint64_t)*(uint *)(param_1 + 0x128);
      for (puStack_a0 = *(uint **)(lVar1 + uVar5 * 8); puStack_a0 != (uint *)0x0;
          puStack_a0 = *(uint **)(puStack_a0 + 2)) {
        if (uVar4 == *puStack_a0) goto LAB_180557fa2;
      }
      puStack_a0 = (uint *)0x0;
LAB_180557fa2:
      lVar2 = *(int64_t *)(param_1 + 0x128);
      if (puStack_a0 == (uint *)0x0) {
        puStack_90 = *(uint **)(lVar1 + lVar2 * 8);
        ppuVar3 = &puStack_90;
        lStack_88 = lVar1 + lVar2 * 8;
      }
      else {
        ppuVar3 = &puStack_a0;
        lStack_98 = lVar1 + uVar5 * 8;
      }
      puStack_70 = *(uint **)(lVar1 + lVar2 * 8);
      puStack_60 = *ppuVar3;
      if (puStack_60 == puStack_70) {
        if (param_8 != '\0') {
          uVar7 = (uint)param_4 << 5 | uVar6 | uVar8 | uVar10 | (uint)param_3 | uVar7;
          uVar5 = (uint64_t)(int64_t)(int)uVar7 % (uint64_t)*(uint *)(param_1 + 0x128);
          for (puStack_80 = *(uint **)(lVar1 + uVar5 * 8); puStack_80 != (uint *)0x0;
              puStack_80 = *(uint **)(puStack_80 + 2)) {
            if (uVar7 == *puStack_80) goto LAB_180558023;
          }
          puStack_80 = (uint *)0x0;
LAB_180558023:
          if (puStack_80 == (uint *)0x0) {
            ppuVar3 = &puStack_70;
            lStack_68 = lVar1 + lVar2 * 8;
          }
          else {
            ppuVar3 = &puStack_80;
            lStack_78 = lVar1 + uVar5 * 8;
          }
          puStack_60 = *ppuVar3;
        }
        uVar7 = uStack_a8;
        if (puStack_60 == puStack_70) goto LAB_180558060;
      }
      uStack_a8 = puStack_60[1];
      fVar12 = fVar11;
      uVar7 = uStack_a8;
    }
LAB_180558060:
    uVar10 = uVar10 + 0x80;
    pfVar9 = pfVar9 + 4;
    if (0x27f < (int)uVar10) {
      return uVar7;
    }
  } while( true );
}



uint FUN_1805580b0(int64_t param_1,uint param_2,byte param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = (param_5 + 1) * 0x40 | (uint)param_3 << 5 | param_4 * 2 + 2U | param_2 & 0xff;
  for (puVar1 = *(uint **)(*(int64_t *)(param_1 + 0x150) +
                          ((uint64_t)(int64_t)(int)uVar2 % (uint64_t)*(uint *)(param_1 + 0x158))
                          * 8); puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 2)) {
    if (uVar2 == *puVar1) goto LAB_180558112;
  }
  puVar1 = (uint *)0x0;
LAB_180558112:
  if (puVar1 == (uint *)0x0) {
    puVar1 = *(uint **)(*(int64_t *)(param_1 + 0x150) + *(int64_t *)(param_1 + 0x158) * 8);
  }
  return puVar1[1];
}





// 函数: void FUN_180558140(int32_t *param_1,int64_t param_2)
void FUN_180558140(int32_t *param_1,int64_t param_2)

{
  void *puVar1;
  int iVar2;
  int32_t uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t lVar7;
  void *puVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  void *puStack_b8;
  int64_t lStack_b0;
  int iStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int64_t lStack_90;
  int iStack_88;
  uint64_t uStack_80;
  void *puStack_78;
  void *puStack_70;
  int iStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  void *puStack_50;
  int iStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pcVar11 = (char *)0x0;
  puStack_58 = &system_data_buffer_ptr;
  uStack_40 = 0;
  puStack_50 = (void *)0x0;
  iStack_48 = 0;
  pcVar10 = "body_part";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a35157) {
      pcVar10 = pcVar10 + (int64_t)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180558210:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_58,lVar7);
        break;
      }
      lVar7 = (int64_t)&processed_var_4136_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180558210;
      }
    }
  }
  puVar1 = puStack_50;
  if (iStack_48 == 8) {
    iVar2 = strcmp(puStack_50,&processed_var_7024_ptr);
    if (iVar2 == 0) {
      *(int8_t *)(param_1 + 3) = 6;
    }
    else {
LAB_1805583da:
      puVar8 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar8 = puVar1;
      }
      SystemDataInitializer(&processed_var_4216_ptr,puVar8);
    }
  }
  else if (iStack_48 == 9) {
    iVar2 = strcmp(puStack_50,&processed_var_7008_ptr);
    if (iVar2 != 0) goto LAB_1805583da;
    *(int8_t *)(param_1 + 3) = 7;
  }
  else {
    pcVar6 = pcVar11;
    pcVar10 = pcVar11;
    if (iStack_48 == 4) {
      do {
        pcVar5 = pcVar6 + 1;
        if (pcVar6[(int64_t)puStack_50] != pcVar6[0x180a1395c]) goto LAB_180558380;
        pcVar6 = pcVar5;
      } while (pcVar5 != (char *)0x5);
      *(int8_t *)(param_1 + 3) = 8;
    }
    else if (iStack_48 == 7) {
      do {
        pcVar6 = pcVar10 + 1;
        if (pcVar10[(int64_t)puStack_50] != pcVar10[0x180a139d8]) goto LAB_1805583da;
        pcVar10 = pcVar6;
      } while (pcVar6 != &system_data_0008);
      *(int8_t *)(param_1 + 3) = 3;
    }
    else if (iStack_48 == 0xd) {
      iVar2 = strcmp(puStack_50,&processed_var_6992_ptr);
      if (iVar2 != 0) goto LAB_1805583da;
      *(int8_t *)(param_1 + 3) = 4;
    }
    else if (iStack_48 == 0xe) {
      iVar2 = strcmp(puStack_50,&processed_var_6976_ptr);
      if (iVar2 != 0) goto LAB_1805583da;
      *(int8_t *)(param_1 + 3) = 5;
    }
    else if (iStack_48 == 5) {
      do {
        pcVar6 = pcVar10 + 1;
        if (pcVar10[(int64_t)puStack_50] != pcVar10[0x180a139cc]) goto LAB_1805583da;
        pcVar10 = pcVar6;
      } while (pcVar6 != (char *)0x6);
      *(int8_t *)(param_1 + 3) = 2;
    }
    else {
      if (iStack_48 != 4) goto LAB_1805583da;
LAB_180558380:
      do {
        pcVar5 = pcVar10 + 1;
        pcVar6 = pcVar11;
        if (pcVar10[(int64_t)puStack_50] != pcVar10[0x180a13928]) goto LAB_1805583a3;
        pcVar10 = pcVar5;
      } while (pcVar5 != (char *)0x5);
      *(int8_t *)(param_1 + 3) = 0;
    }
  }
  goto LAB_1805583f0;
  while (pcVar6 = pcVar5, pcVar5 != (char *)0x5) {
LAB_1805583a3:
    pcVar5 = pcVar6 + 1;
    pcVar10 = pcVar11;
    if (pcVar6[(int64_t)puStack_50] != pcVar6[0x180a138f0]) goto LAB_1805583c0;
  }
  *(int8_t *)(param_1 + 3) = 1;
  goto LAB_1805583f0;
  while (pcVar10 = pcVar6, pcVar6 != (char *)0x5) {
LAB_1805583c0:
    pcVar6 = pcVar10 + 1;
    if (pcVar10[(int64_t)puStack_50] != pcVar10[0x180a0b57c]) goto LAB_1805583da;
  }
  *(int8_t *)(param_1 + 3) = 0xff;
LAB_1805583f0:
  puStack_78 = &system_data_buffer_ptr;
  uStack_60 = 0;
  puStack_70 = (void *)0x0;
  iStack_68 = 0;
  pcVar10 = "direction";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a35197) {
      pcVar10 = pcVar10 + (int64_t)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180558478:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_78,lVar7);
        break;
      }
      lVar7 = (int64_t)&processed_var_4200_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180558478;
      }
    }
  }
  puVar1 = puStack_70;
  pcVar5 = pcVar11;
  pcVar10 = pcVar11;
  pcVar6 = pcVar11;
  if (iStack_68 == 4) {
    do {
      pcVar4 = pcVar5 + 1;
      if (pcVar5[(int64_t)puStack_70] != pcVar5[0x180a34bc8]) goto LAB_180558552;
      pcVar5 = pcVar4;
    } while (pcVar4 != (char *)0x5);
    param_1[2] = 0;
  }
  else if (iStack_68 == 5) {
    do {
      pcVar5 = pcVar10 + 1;
      if (pcVar10[(int64_t)puStack_70] != pcVar10[0x180a34b7c]) goto LAB_180558520;
      pcVar10 = pcVar5;
    } while (pcVar5 != (char *)0x6);
    param_1[2] = 1;
  }
  else if (iStack_68 == 4) {
LAB_180558552:
    do {
      pcVar5 = pcVar6 + 1;
      if (pcVar6[(int64_t)puStack_70] != pcVar6[0x180a35288]) goto LAB_180558600;
      pcVar6 = pcVar5;
    } while (pcVar5 != (char *)0x5);
    param_1[2] = 5;
  }
  else {
    if (iStack_68 == 0xb) {
      iVar2 = strcmp(puStack_70,&processed_var_4472_ptr);
      if (iVar2 == 0) {
        param_1[2] = 4;
        goto LAB_180558633;
      }
    }
    else if (iStack_68 == 10) {
      iVar2 = strcmp(puStack_70,&processed_var_4456_ptr);
      if (iVar2 == 0) {
        param_1[2] = 3;
        goto LAB_180558633;
      }
      iVar2 = strcmp(puVar1,&processed_var_4392_ptr);
      if (iVar2 == 0) {
        param_1[2] = 7;
        goto LAB_180558633;
      }
    }
    else if (iStack_68 == 9) {
      iVar2 = strcmp(puStack_70,&processed_var_4376_ptr);
      if (iVar2 == 0) {
        param_1[2] = 6;
        goto LAB_180558633;
      }
    }
    else if (iStack_68 == 4) {
LAB_180558600:
      do {
        pcVar6 = pcVar10 + 1;
        if (pcVar10[(int64_t)puStack_70] != pcVar10[0x180a0b57c]) goto LAB_18055861d;
        pcVar10 = pcVar6;
      } while (pcVar6 != (char *)0x5);
      param_1[2] = 0xffffffff;
      goto LAB_180558633;
    }
LAB_18055861d:
    puVar8 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar8 = puVar1;
    }
    SystemDataInitializer(&processed_var_4416_ptr,puVar8);
  }
LAB_180558633:
  FUN_180631330(param_2,&processed_var_4404_ptr,param_1 + 4);
  FUN_180631000(param_2,&processed_var_4560_ptr,(int64_t)param_1 + 0x15);
  FUN_180631000(param_2,&ui_system_data_1800_ptr,param_1 + 5);
  FUN_180631000(param_2,&processed_var_4544_ptr,(int64_t)param_1 + 0x16);
  puStack_98 = &system_data_buffer_ptr;
  uStack_80 = 0;
  lStack_90 = 0;
  iStack_88 = 0;
  pcVar10 = "action";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a339df) {
      pcVar10 = pcVar10 + (int64_t)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180558714:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_98,lVar7);
        break;
      }
      lVar7 = (int64_t)&processed_var_8128_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180558714;
      }
    }
  }
  if (0 < iStack_88) {
    uVar3 = FUN_18055b2f0(&system_data_6150,&puStack_98);
    param_1[1] = uVar3;
  }
  puStack_b8 = &system_data_buffer_ptr;
  uStack_a0 = 0;
  lStack_b0 = 0;
  iStack_a8 = 0;
  pcVar10 = "mount_id";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar9 == (uint64_t *)0x0) {
LAB_1805587ee:
      if (0 < iStack_a8) {
        uVar3 = FUN_180555eb0(&system_data_60a0,&puStack_b8);
        *param_1 = uVar3;
      }
      puStack_b8 = &system_data_buffer_ptr;
      if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_b0 = 0;
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      puStack_b8 = &system_state_ptr;
      puStack_98 = &system_data_buffer_ptr;
      if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_90 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      puStack_98 = &system_state_ptr;
      puStack_78 = &system_data_buffer_ptr;
      if (puStack_70 == (void *)0x0) {
        puStack_70 = (void *)0x0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        puStack_78 = &system_state_ptr;
        puStack_58 = &system_data_buffer_ptr;
        if (puStack_50 == (void *)0x0) {
          return;
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a34c07) {
      pcVar10 = pcVar10 + (int64_t)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_1805587d5:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        FUN_180627c50(&puStack_b8,lVar7);
        goto LAB_1805587ee;
      }
      lVar7 = (int64_t)&rendering_buffer_2776_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_1805587d5;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
  while (pcVar6 = pcVar10, pcVar10 != (char *)0x6) {
LAB_180558520:
    pcVar10 = pcVar6 + 1;
    if (pcVar6[(int64_t)puStack_70] != pcVar6[0x180a35290]) goto LAB_18055861d;
  }
  param_1[2] = 2;
  goto LAB_180558633;
}






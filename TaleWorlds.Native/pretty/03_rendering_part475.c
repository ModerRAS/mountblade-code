#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part475.c - 8 个函数

// 函数: void FUN_1805204e0(int64_t param_1,uint64_t param_2)
void FUN_1805204e0(int64_t param_1,uint64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t lVar6;
  byte *pbVar7;
  int iVar8;
  void *puVar9;
  int64_t lVar10;
  int32_t uVar11;
  float fVar12;
  float fVar13;
  int8_t auVar14 [16];
  float fStackX_8;
  float fStackX_c;
  uint64_t uStackX_10;
  void *puStack_c8;
  void *puStack_c0;
  int iStack_b8;
  int32_t uStack_b0;
  uint64_t uStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uStack_58;
  
  uStack_58 = 0xfffffffffffffffe;
  uStackX_10 = param_2;
  FUN_1804f17b0(*(uint64_t *)(param_1 + 0x8d8),param_1);
  if ((*(uint *)(param_1 + 0x56c) & 0x4000) != 0) {
    FUN_18050c1c0(param_1);
  }
  lVar6 = render_system_data_memory;
  iVar2 = *(int *)(param_1 + 0x18);
  _fStackX_8 = CONCAT44(fStackX_c,iVar2);
  if ((iVar2 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(iVar2);
  }
  lVar6 = (**(code **)(lVar6 + 0x40))(iVar2);
  puVar9 = &system_buffer_ptr;
  if (*(void **)(lVar6 + 8) != (void *)0x0) {
    puVar9 = *(void **)(lVar6 + 8);
  }
  CoreMemoryPoolValidator(&puStack_c8,puVar9);
  for (lVar6 = *render_system_data_memory; lVar6 != render_system_data_memory[1]; lVar6 = lVar6 + 0x20) {
    iVar3 = *(int *)(lVar6 + 0x10);
    iVar8 = iStack_b8;
    if (iVar3 == iStack_b8) {
      if (iVar3 != 0) {
        pbVar7 = *(byte **)(lVar6 + 8);
        lVar10 = (int64_t)puStack_c0 - (int64_t)pbVar7;
        do {
          pbVar1 = pbVar7 + lVar10;
          iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
          if (iVar8 != 0) break;
          pbVar7 = pbVar7 + 1;
        } while (*pbVar1 != 0);
      }
LAB_1805205ee:
      if (iVar8 == 0) break;
    }
    else if (iVar3 == 0) goto LAB_1805205ee;
  }
  if (lVar6 == render_system_data_memory[1]) {
    puVar9 = &system_buffer_ptr;
    if (puStack_c0 != (void *)0x0) {
      puVar9 = puStack_c0;
    }
    FUN_180627020(&unknown_var_1648_ptr,puVar9);
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = (int32_t)(lVar6 - *render_system_data_memory >> 5);
  }
  *(int32_t *)(param_1 + 0x740) = uVar11;
  puStack_c8 = &system_data_buffer_ptr;
  if (puStack_c0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_c0 = (void *)0x0;
  uStack_b0 = 0;
  puStack_c8 = &system_state_ptr;
  if ((iVar2 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar2);
  }
  if (*(int *)(param_1 + 0x570) == 2) {
    FUN_1804f41b0(*(uint64_t *)(param_1 + 0x8d8));
  }
  fStackX_c = (float)((uint64_t)*(uint64_t *)(param_1 + 0x49c) >> 0x20);
  fStackX_8 = (float)*(uint64_t *)(param_1 + 0x49c);
  fVar12 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
  auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
  fVar13 = auVar14._0_4_;
  fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
  _fStackX_8 = CONCAT44(fStackX_c * fVar12,fStackX_8 * fVar12);
  puStack_c8 = *(void **)(*(int64_t *)(param_1 + 0x20) + 0xc);
  puStack_c0 = *(void **)(*(int64_t *)(param_1 + 0x20) + 0x14);
  FUN_180509f20(param_1,&puStack_c8,&fStackX_8);
  FUN_18058ada0(*(uint64_t *)(param_1 + 0x590),param_1,
                *(uint64_t *)(*(int64_t *)(param_1 + 0x658) + 0x208),0);
  plVar4 = *(int64_t **)(param_1 + 0x6e0);
  lVar6 = *plVar4;
  lVar10 = *(int64_t *)(lVar6 + 0x4a4);
  plVar4[0x2ac] = *(int64_t *)(lVar6 + 0x49c);
  plVar4[0x2ad] = lVar10;
  uVar11 = atan2f(*(uint *)(lVar6 + 0x49c) ^ 0x80000000,*(int32_t *)(lVar6 + 0x4a0));
  *(int32_t *)(plVar4 + 0x2ae) = uVar11;
  *(int32_t *)((int64_t)plVar4 + 0x1574) = 0;
  lVar6 = *plVar4;
  lStack_98 = *(int64_t *)(lVar6 + 0x9d8);
  if ((lStack_98 == 0) ||
     (cVar5 = FUN_18038d0a0(lStack_98,*(int64_t *)(lVar6 + 0x20) + 0xc), lStack_a0 = lStack_98,
     cVar5 == '\0')) {
    lStack_a0 = 0;
  }
  lVar10 = *(int64_t *)(lVar6 + 0x20);
  uStack_a8 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x8d8) + 0x18);
  uStack_90 = *(uint64_t *)(lVar10 + 0xc);
  uStack_88 = *(uint64_t *)(lVar10 + 0x14);
  uStack_80 = *(int32_t *)(lVar10 + 0xb0);
  uStack_7c = *(int32_t *)(lVar10 + 0xb4);
  uStack_78 = *(int32_t *)(lVar10 + 0xb8);
  uStack_74 = *(int32_t *)(lVar10 + 0xbc);
  uStack_68 = 3;
  uStack_70 = uStack_90;
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(*(int64_t *)(lVar6 + 0x20) + 0x34));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180520b40(int64_t param_1,int64_t param_2)
void FUN_180520b40(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 0x8e8);
  if (lVar1 == param_2) {
    return;
  }
  *(int64_t *)(param_1 + 0x8e8) = param_2;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x570) != 2) goto LAB_180520bbd;
    FUN_1804f1c90(*(uint64_t *)(param_1 + 0x8d8),0xffffffff,system_data_ec8a);
    param_2 = *(int64_t *)(param_1 + 0x8e8);
    if (param_2 == 0) goto LAB_180520bbd;
  }
  if ((system_status_flag == 3) && (*(int *)(param_2 + 0x14) == 0)) {
    FUN_1804f1c90(*(uint64_t *)(param_1 + 0x8d8),*(int32_t *)(param_1 + 0x10),system_data_ec8a);
  }
LAB_180520bbd:
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) == *(int *)(param_1 + 0x10))) {
    FUN_1805eda50(lVar1,0,0xffffffff);
  }
  lVar1 = *(int64_t *)(param_1 + 0x8e8);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) != *(int *)(param_1 + 0x10))) {
    FUN_1805eda50(lVar1,*(uint64_t *)(param_1 + 0x8d8));
  }
  return;
}





// 函数: void FUN_180520c10(int64_t *param_1,int64_t *param_2)
void FUN_180520c10(int64_t *param_1,int64_t *param_2)

{
  byte bVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int32_t uVar8;
  float fVar9;
  int8_t auStackX_10 [8];
  
  if (*(int *)(*param_2 + 0x568) != 1) {
    return;
  }
  uVar7 = *(uint *)(*param_2 + 0x56c) >> 0xe;
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if ((*(uint *)(param_2 + 2) & 0x1000) == 0) {
      FUN_1805d4df0(param_2 + 1);
    }
    uVar8 = *(int32_t *)((int64_t)param_2 + 0x10c);
  }
  *(int32_t *)(param_1 + 4) = uVar8;
  *(int *)(param_1 + 7) = (int)param_2[0x295];
  *(int32_t *)((int64_t)param_1 + 0x3c) = *(int32_t *)((int64_t)param_2 + 0x178c);
  *(int *)(param_1 + 8) = (int)param_2[0x42];
  param_1[3] = *(int64_t *)(*(int64_t *)param_2[0x33] + 0x9d8);
  *(int32_t *)(param_1 + 5) = *(int32_t *)((int64_t)param_2 + 0x173c);
  plVar2 = param_2 + 0x2a1;
  if ((char)param_2[0x29b] == '\0') {
    plVar2 = (int64_t *)&system_data_f0c8;
  }
  *param_1 = *plVar2;
  param_1[1] = param_2[0x25d];
  *(int32_t *)((int64_t)param_1 + 0x2c) = *(int32_t *)((int64_t)param_2 + 0x14e4);
  *(int *)(param_1 + 6) = (int)param_2[0x284];
  plVar2 = (int64_t *)FUN_180507e30(param_2 + 0x2f,auStackX_10);
  param_1[2] = *plVar2;
  if ((char)param_2[0x438] == '\0') {
    uVar8 = *(int32_t *)((int64_t)param_2 + 0x14b4);
  }
  else {
    uVar8 = *(int32_t *)((int64_t)param_2 + 0x21c4);
  }
  *(int32_t *)((int64_t)param_1 + 0x34) = uVar8;
  uVar8 = func_0x000180507ac0();
  *(int32_t *)((int64_t)param_1 + 0x24) = uVar8;
  if (((uVar7 & 1) == 0) || ((char)param_2[0x431] == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  bVar4 = *(byte *)((int64_t)param_1 + 0x44);
  *(byte *)((int64_t)param_1 + 0x44) = bVar4 & 0xfe | bVar6;
  if (((uVar7 & 1) == 0) || (*(char *)((int64_t)param_2 + 0x2189) == '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = 2;
  }
  bVar1 = bVar4 & 0xfc | bVar6 | bVar1;
  *(byte *)((int64_t)param_1 + 0x44) = bVar1;
  if ((uVar7 & 1) != 0) {
    if ((*(uint *)(param_2 + 2) & 0x400000) == 0) {
      uVar3 = *(uint64_t *)(*(int64_t *)param_2[1] + 0x280);
      if (uVar3 != 0) {
        uVar3 = (uint64_t)(*(int *)(uVar3 + 0x104) == 1);
      }
      *(char *)((int64_t)param_2 + 0xc2) = (char)uVar3;
      *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) | 0x400000;
      bVar1 = *(byte *)((int64_t)param_1 + 0x44);
    }
    if (*(char *)((int64_t)param_2 + 0xc2) != '\0') {
      bVar6 = 4;
      goto LAB_180520dad;
    }
  }
  bVar6 = 0;
LAB_180520dad:
  *(byte *)((int64_t)param_1 + 0x44) = bVar1 & 0xfb | bVar6;
  if (((uVar7 & 1) == 0) || ((char)param_2[0x29b] == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)((int64_t)param_1 + 0x44) = bVar1 & 0xf3 | bVar6 | bVar4;
  if ((((uVar7 & 1) == 0) || ((int)param_2[0x2a8] < 0)) ||
     (*(int *)((int64_t)param_2 + 0x1544) < 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x10;
  }
  *(byte *)((int64_t)param_1 + 0x44) = bVar1 & 0xe3 | bVar6 | bVar4 | bVar5;
  fVar9 = (float)func_0x000180507ac0(param_2 + 0x34);
  if ((*(float *)((int64_t)param_2 + 0x20c) <= fVar9 &&
       fVar9 != *(float *)((int64_t)param_2 + 0x20c)) ||
     (fVar9 = (float)FUN_180507b40(param_2 + 0x34), 1.5 <= fVar9)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 0x20;
  }
  bVar6 = *(byte *)((int64_t)param_1 + 0x44) & 0xdf | bVar6;
  *(byte *)((int64_t)param_1 + 0x44) = bVar6;
  *(byte *)((int64_t)param_1 + 0x44) =
       ((char)(*(uint *)((int64_t)param_2 + 0x1484) >> 1) << 6 ^ bVar6) & 0x40 ^ bVar6;
  return;
}





// 函数: void FUN_180520c30(uint64_t param_1,int64_t param_2)
void FUN_180520c30(uint64_t param_1,int64_t param_2)

{
  byte bVar1;
  int64_t in_RAX;
  uint64_t *puVar2;
  uint64_t uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int64_t unaff_RBX;
  uint uVar7;
  uint64_t *unaff_RDI;
  int32_t uVar8;
  float fVar9;
  
  uVar7 = *(uint *)(in_RAX + 0x56c) >> 0xe;
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if ((*(uint *)(param_2 + 0x10) & 0x1000) == 0) {
      FUN_1805d4df0(param_2 + 8);
    }
    uVar8 = *(int32_t *)(unaff_RBX + 0x10c);
  }
  *(int32_t *)(unaff_RDI + 4) = uVar8;
  *(int32_t *)(unaff_RDI + 7) = *(int32_t *)(unaff_RBX + 0x14a8);
  *(int32_t *)((int64_t)unaff_RDI + 0x3c) = *(int32_t *)(unaff_RBX + 0x178c);
  *(int32_t *)(unaff_RDI + 8) = *(int32_t *)(unaff_RBX + 0x210);
  unaff_RDI[3] = *(uint64_t *)(**(int64_t **)(unaff_RBX + 0x198) + 0x9d8);
  *(int32_t *)(unaff_RDI + 5) = *(int32_t *)(unaff_RBX + 0x173c);
  puVar2 = (uint64_t *)(unaff_RBX + 0x1508);
  if (*(char *)(unaff_RBX + 0x14d8) == '\0') {
    puVar2 = (uint64_t *)&system_data_f0c8;
  }
  *unaff_RDI = *puVar2;
  unaff_RDI[1] = *(uint64_t *)(unaff_RBX + 0x12e8);
  *(int32_t *)((int64_t)unaff_RDI + 0x2c) = *(int32_t *)(unaff_RBX + 0x14e4);
  *(int32_t *)(unaff_RDI + 6) = *(int32_t *)(unaff_RBX + 0x1420);
  puVar2 = (uint64_t *)FUN_180507e30(unaff_RBX + 0x178,&stack0x00000038);
  unaff_RDI[2] = *puVar2;
  if (*(char *)(unaff_RBX + 0x21c0) == '\0') {
    uVar8 = *(int32_t *)(unaff_RBX + 0x14b4);
  }
  else {
    uVar8 = *(int32_t *)(unaff_RBX + 0x21c4);
  }
  *(int32_t *)((int64_t)unaff_RDI + 0x34) = uVar8;
  uVar8 = func_0x000180507ac0();
  *(int32_t *)((int64_t)unaff_RDI + 0x24) = uVar8;
  if (((uVar7 & 1) == 0) || (*(char *)(unaff_RBX + 0x2188) == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  bVar4 = *(byte *)((int64_t)unaff_RDI + 0x44);
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar4 & 0xfe | bVar6;
  if (((uVar7 & 1) == 0) || (*(char *)(unaff_RBX + 0x2189) == '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = 2;
  }
  bVar1 = bVar4 & 0xfc | bVar6 | bVar1;
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1;
  if ((uVar7 & 1) == 0) {
LAB_180520dab:
    bVar6 = 0;
  }
  else {
    if ((*(uint *)(unaff_RBX + 0x10) & 0x400000) == 0) {
      uVar3 = *(uint64_t *)(**(int64_t **)(unaff_RBX + 8) + 0x280);
      if (uVar3 != 0) {
        uVar3 = (uint64_t)(*(int *)(uVar3 + 0x104) == 1);
      }
      *(char *)(unaff_RBX + 0xc2) = (char)uVar3;
      *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | 0x400000;
      bVar1 = *(byte *)((int64_t)unaff_RDI + 0x44);
    }
    if (*(char *)(unaff_RBX + 0xc2) == '\0') goto LAB_180520dab;
    bVar6 = 4;
  }
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1 & 0xfb | bVar6;
  if (((uVar7 & 1) == 0) || (*(char *)(unaff_RBX + 0x14d8) == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1 & 0xf3 | bVar6 | bVar4;
  if ((((uVar7 & 1) == 0) || (*(int *)(unaff_RBX + 0x1540) < 0)) ||
     (*(int *)(unaff_RBX + 0x1544) < 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x10;
  }
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1 & 0xe3 | bVar6 | bVar4 | bVar5;
  fVar9 = (float)func_0x000180507ac0(unaff_RBX + 0x1a0);
  if (fVar9 < *(float *)(unaff_RBX + 0x20c) || fVar9 == *(float *)(unaff_RBX + 0x20c)) {
    fVar9 = (float)FUN_180507b40(unaff_RBX + 0x1a0);
    if (fVar9 < 1.5) {
      bVar6 = 0x20;
      goto LAB_180520e28;
    }
  }
  bVar6 = 0;
LAB_180520e28:
  bVar6 = *(byte *)((int64_t)unaff_RDI + 0x44) & 0xdf | bVar6;
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar6;
  *(byte *)((int64_t)unaff_RDI + 0x44) =
       ((char)(*(uint *)(unaff_RBX + 0x1484) >> 1) << 6 ^ bVar6) & 0x40 ^ bVar6;
  return;
}





// 函数: void FUN_180520c4b(uint64_t param_1,int64_t param_2)
void FUN_180520c4b(uint64_t param_1,int64_t param_2)

{
  byte bVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int64_t unaff_RBX;
  char unaff_SIL;
  uint64_t *unaff_RDI;
  bool in_ZF;
  int32_t uVar7;
  float fVar8;
  
  if (in_ZF) {
    FUN_1805d4df0(param_2 + 8);
  }
  *(int32_t *)(unaff_RDI + 4) = *(int32_t *)(unaff_RBX + 0x10c);
  *(int32_t *)(unaff_RDI + 7) = *(int32_t *)(unaff_RBX + 0x14a8);
  *(int32_t *)((int64_t)unaff_RDI + 0x3c) = *(int32_t *)(unaff_RBX + 0x178c);
  *(int32_t *)(unaff_RDI + 8) = *(int32_t *)(unaff_RBX + 0x210);
  unaff_RDI[3] = *(uint64_t *)(**(int64_t **)(unaff_RBX + 0x198) + 0x9d8);
  *(int32_t *)(unaff_RDI + 5) = *(int32_t *)(unaff_RBX + 0x173c);
  puVar2 = (uint64_t *)(unaff_RBX + 0x1508);
  if (*(char *)(unaff_RBX + 0x14d8) == '\0') {
    puVar2 = (uint64_t *)&system_data_f0c8;
  }
  *unaff_RDI = *puVar2;
  unaff_RDI[1] = *(uint64_t *)(unaff_RBX + 0x12e8);
  *(int32_t *)((int64_t)unaff_RDI + 0x2c) = *(int32_t *)(unaff_RBX + 0x14e4);
  *(int32_t *)(unaff_RDI + 6) = *(int32_t *)(unaff_RBX + 0x1420);
  puVar2 = (uint64_t *)FUN_180507e30(unaff_RBX + 0x178,&stack0x00000038);
  unaff_RDI[2] = *puVar2;
  if (*(char *)(unaff_RBX + 0x21c0) == '\0') {
    uVar7 = *(int32_t *)(unaff_RBX + 0x14b4);
  }
  else {
    uVar7 = *(int32_t *)(unaff_RBX + 0x21c4);
  }
  *(int32_t *)((int64_t)unaff_RDI + 0x34) = uVar7;
  uVar7 = func_0x000180507ac0();
  *(int32_t *)((int64_t)unaff_RDI + 0x24) = uVar7;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x2188) == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  bVar4 = *(byte *)((int64_t)unaff_RDI + 0x44);
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar4 & 0xfe | bVar6;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x2189) == '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = 2;
  }
  bVar1 = bVar4 & 0xfc | bVar6 | bVar1;
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1;
  if (unaff_SIL == '\0') {
LAB_180520dab:
    bVar6 = 0;
  }
  else {
    if ((*(uint *)(unaff_RBX + 0x10) & 0x400000) == 0) {
      uVar3 = *(uint64_t *)(**(int64_t **)(unaff_RBX + 8) + 0x280);
      if (uVar3 != 0) {
        uVar3 = (uint64_t)(*(int *)(uVar3 + 0x104) == 1);
      }
      *(char *)(unaff_RBX + 0xc2) = (char)uVar3;
      *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | 0x400000;
      bVar1 = *(byte *)((int64_t)unaff_RDI + 0x44);
    }
    if (*(char *)(unaff_RBX + 0xc2) == '\0') goto LAB_180520dab;
    bVar6 = 4;
  }
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1 & 0xfb | bVar6;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x14d8) == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1 & 0xf3 | bVar6 | bVar4;
  if (((unaff_SIL == '\0') || (*(int *)(unaff_RBX + 0x1540) < 0)) ||
     (*(int *)(unaff_RBX + 0x1544) < 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x10;
  }
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1 & 0xe3 | bVar6 | bVar4 | bVar5;
  fVar8 = (float)func_0x000180507ac0(unaff_RBX + 0x1a0);
  if (fVar8 < *(float *)(unaff_RBX + 0x20c) || fVar8 == *(float *)(unaff_RBX + 0x20c)) {
    fVar8 = (float)FUN_180507b40(unaff_RBX + 0x1a0);
    if (fVar8 < 1.5) {
      bVar6 = 0x20;
      goto LAB_180520e28;
    }
  }
  bVar6 = 0;
LAB_180520e28:
  bVar6 = *(byte *)((int64_t)unaff_RDI + 0x44) & 0xdf | bVar6;
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar6;
  *(byte *)((int64_t)unaff_RDI + 0x44) =
       ((char)(*(uint *)(unaff_RBX + 0x1484) >> 1) << 6 ^ bVar6) & 0x40 ^ bVar6;
  return;
}





// 函数: void FUN_180520c6a(void)
void FUN_180520c6a(void)

{
  byte bVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int64_t unaff_RBX;
  char unaff_SIL;
  uint64_t *unaff_RDI;
  int32_t uVar7;
  float fVar8;
  
  *(int32_t *)(unaff_RDI + 4) = 0;
  *(int32_t *)(unaff_RDI + 7) = *(int32_t *)(unaff_RBX + 0x14a8);
  *(int32_t *)((int64_t)unaff_RDI + 0x3c) = *(int32_t *)(unaff_RBX + 0x178c);
  *(int32_t *)(unaff_RDI + 8) = *(int32_t *)(unaff_RBX + 0x210);
  unaff_RDI[3] = *(uint64_t *)(**(int64_t **)(unaff_RBX + 0x198) + 0x9d8);
  *(int32_t *)(unaff_RDI + 5) = *(int32_t *)(unaff_RBX + 0x173c);
  puVar2 = (uint64_t *)(unaff_RBX + 0x1508);
  if (*(char *)(unaff_RBX + 0x14d8) == '\0') {
    puVar2 = (uint64_t *)&system_data_f0c8;
  }
  *unaff_RDI = *puVar2;
  unaff_RDI[1] = *(uint64_t *)(unaff_RBX + 0x12e8);
  *(int32_t *)((int64_t)unaff_RDI + 0x2c) = *(int32_t *)(unaff_RBX + 0x14e4);
  *(int32_t *)(unaff_RDI + 6) = *(int32_t *)(unaff_RBX + 0x1420);
  puVar2 = (uint64_t *)FUN_180507e30(unaff_RBX + 0x178,&stack0x00000038);
  unaff_RDI[2] = *puVar2;
  if (*(char *)(unaff_RBX + 0x21c0) == '\0') {
    uVar7 = *(int32_t *)(unaff_RBX + 0x14b4);
  }
  else {
    uVar7 = *(int32_t *)(unaff_RBX + 0x21c4);
  }
  *(int32_t *)((int64_t)unaff_RDI + 0x34) = uVar7;
  uVar7 = func_0x000180507ac0();
  *(int32_t *)((int64_t)unaff_RDI + 0x24) = uVar7;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x2188) == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  bVar4 = *(byte *)((int64_t)unaff_RDI + 0x44);
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar4 & 0xfe | bVar6;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x2189) == '\0')) {
    bVar1 = 0;
  }
  else {
    bVar1 = 2;
  }
  bVar1 = bVar4 & 0xfc | bVar6 | bVar1;
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1;
  if (unaff_SIL == '\0') {
LAB_180520dab:
    bVar6 = 0;
  }
  else {
    if ((*(uint *)(unaff_RBX + 0x10) & 0x400000) == 0) {
      uVar3 = *(uint64_t *)(**(int64_t **)(unaff_RBX + 8) + 0x280);
      if (uVar3 != 0) {
        uVar3 = (uint64_t)(*(int *)(uVar3 + 0x104) == 1);
      }
      *(char *)(unaff_RBX + 0xc2) = (char)uVar3;
      *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | 0x400000;
      bVar1 = *(byte *)((int64_t)unaff_RDI + 0x44);
    }
    if (*(char *)(unaff_RBX + 0xc2) == '\0') goto LAB_180520dab;
    bVar6 = 4;
  }
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1 & 0xfb | bVar6;
  if ((unaff_SIL == '\0') || (*(char *)(unaff_RBX + 0x14d8) == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1 & 0xf3 | bVar6 | bVar4;
  if (((unaff_SIL == '\0') || (*(int *)(unaff_RBX + 0x1540) < 0)) ||
     (*(int *)(unaff_RBX + 0x1544) < 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x10;
  }
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar1 & 0xe3 | bVar6 | bVar4 | bVar5;
  fVar8 = (float)func_0x000180507ac0(unaff_RBX + 0x1a0);
  if (fVar8 < *(float *)(unaff_RBX + 0x20c) || fVar8 == *(float *)(unaff_RBX + 0x20c)) {
    fVar8 = (float)FUN_180507b40(unaff_RBX + 0x1a0);
    if (fVar8 < 1.5) {
      bVar6 = 0x20;
      goto LAB_180520e28;
    }
  }
  bVar6 = 0;
LAB_180520e28:
  bVar6 = *(byte *)((int64_t)unaff_RDI + 0x44) & 0xdf | bVar6;
  *(byte *)((int64_t)unaff_RDI + 0x44) = bVar6;
  *(byte *)((int64_t)unaff_RDI + 0x44) =
       ((char)(*(uint *)(unaff_RBX + 0x1484) >> 1) << 6 ^ bVar6) & 0x40 ^ bVar6;
  return;
}





// 函数: void FUN_180520dd9(void)
void FUN_180520dd9(void)

{
  byte in_AL;
  byte bVar1;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float fVar2;
  
  if ((*(int *)(unaff_RBX + 0x1540) < 0) || (*(int *)(unaff_RBX + 0x1544) < 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 0x10;
  }
  *(byte *)(unaff_RDI + 0x44) = in_AL & 0xef | bVar1;
  fVar2 = (float)func_0x000180507ac0(unaff_RBX + 0x1a0);
  if (fVar2 < *(float *)(unaff_RBX + 0x20c) || fVar2 == *(float *)(unaff_RBX + 0x20c)) {
    fVar2 = (float)FUN_180507b40(unaff_RBX + 0x1a0);
    if (fVar2 < 1.5) {
      bVar1 = 0x20;
      goto LAB_180520e28;
    }
  }
  bVar1 = 0;
LAB_180520e28:
  bVar1 = *(byte *)(unaff_RDI + 0x44) & 0xdf | bVar1;
  *(byte *)(unaff_RDI + 0x44) = bVar1;
  *(byte *)(unaff_RDI + 0x44) =
       ((char)(*(uint *)(unaff_RBX + 0x1484) >> 1) << 6 ^ bVar1) & 0x40 ^ bVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180520e60(int64_t param_1,int32_t *param_2,int64_t param_3,uint param_4)
void FUN_180520e60(int64_t param_1,int32_t *param_2,int64_t param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int64_t lVar10;
  char cVar11;
  float fVar12;
  uint uVar13;
  uint64_t uStack_2c8;
  int32_t uStack_2c0;
  int32_t uStack_2bc;
  uint64_t uStack_2b8;
  int32_t uStack_2b0;
  char cStack_2ac;
  int8_t uStack_2ab;
  int8_t uStack_2aa;
  int32_t uStack_2a8;
  int32_t uStack_2a4;
  int8_t uStack_2a0;
  int32_t uStack_29c;
  int32_t uStack_298;
  int32_t uStack_294;
  int32_t uStack_290;
  int32_t uStack_28c;
  int32_t uStack_288;
  int32_t uStack_284;
  uint uStack_280;
  uint64_t uStack_27c;
  uint64_t uStack_274;
  uint64_t uStack_26c;
  uint64_t uStack_264;
  int32_t uStack_25c;
  int32_t uStack_258;
  float fStack_254;
  int32_t uStack_250;
  uint64_t uStack_24c;
  uint64_t uStack_244;
  uint64_t uStack_23c;
  uint64_t uStack_234;
  int32_t uStack_22c;
  int32_t uStack_228;
  uint uStack_224;
  int32_t uStack_220;
  int32_t uStack_21c;
  int32_t uStack_218;
  int32_t uStack_214;
  int32_t uStack_210;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  uint64_t uStack_1b0;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  int32_t uStack_19c;
  int16_t uStack_198;
  uint8_t uStack_196;
  int32_t uStack_190;
  int32_t uStack_18c;
  float fStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int32_t uStack_164;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int32_t uStack_148;
  uint64_t uStack_144;
  int32_t uStack_13c;
  int iStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  uint64_t uStack_118;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int iStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x568) == 1) {
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a4 = CONCAT31(uStack_1a4._1_3_,0xff);
    uStack_1a0 = 0xffffffff;
    uStack_19c = 0;
    uStack_198 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_144 = 1;
    uStack_134 = CONCAT22(uStack_134._2_2_,0xff00);
    uStack_128 = 0;
    uStack_12c = CONCAT13(uStack_12c._3_1_,0x10000);
    uStack_13c = 0;
    lVar3 = *(int64_t *)(param_1 + 0x20);
    fVar12 = *(float *)(lVar3 + 0x14) + 0.01;
    uVar8 = *(int32_t *)(lVar3 + 0xc);
    uVar9 = *(int32_t *)(lVar3 + 0x10);
    uStack_190 = *(int32_t *)(lVar3 + 0xc);
    uStack_18c = *(int32_t *)(lVar3 + 0x10);
    uStack_184 = 0x7f7fffff;
    uStack_180 = *param_2;
    uStack_17c = param_2[1];
    uStack_178 = param_2[2];
    uStack_174 = param_2[3];
    cVar11 = *(char *)(*(int64_t *)
                        (*(int64_t *)
                          (*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0x260) + 0x210) +
                      0xe6);
    uStack_134 = CONCAT31(uStack_134._1_3_,cVar11);
    if (cVar11 < '\0') {
      uStack_2ab = 0xff;
    }
    else if ((*(int64_t *)(param_1 + 0x658) == 0) ||
            (lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x208), lVar4 == 0)) {
      uStack_2ab = 8;
    }
    else {
      uStack_2ab = *(int8_t *)((int64_t)cVar11 * 0x1b0 + 0x104 + *(int64_t *)(lVar4 + 0x140));
    }
    uStack_130 = 2;
    iStack_138 = *(int *)(param_1 + 0x560);
    if (iStack_138 < 0) {
      iStack_138 = *(int *)(param_1 + 0x10);
    }
    if (-1 < *(int *)(param_1 + 0x670)) {
      iStack_138 = *(int *)(param_1 + 0x670);
    }
    lVar10 = (int64_t)iStack_138;
    lVar4 = *(int64_t *)(param_1 + 0x8d8);
    if (param_3 == 0) {
      uStack_2a4 = 0xffffffff;
    }
    else {
      uStack_2a4 = *(int32_t *)(param_3 + 100);
    }
    uVar5 = *(int32_t *)(lVar3 + 0x24);
    uVar6 = *(int32_t *)(lVar3 + 0x28);
    uVar7 = *(int32_t *)(lVar3 + 0x30);
    uVar13 = param_4 ^ 0x80000000;
    fStack_188 = fVar12;
    uStack_170 = uStack_180;
    uStack_16c = uStack_17c;
    uStack_168 = uStack_178;
    uStack_164 = uStack_174;
    func_0x0001805345e0(&uStack_2c8);
    lVar3 = render_system_data_memory;
    uStack_2c8 = 0x1000000;
    uStack_2c0 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0xffffffffffffffff;
    uStack_2aa = 0xff;
    uStack_2a8 = 0xffffffff;
    uStack_29c = 0xffc00000;
    uStack_298 = 0xffc00000;
    uStack_294 = 0xffc00000;
    uStack_290 = 0xffc00000;
    uStack_28c = 0xffc00000;
    uStack_288 = 0xffc00000;
    uStack_284 = 0xffc00000;
    uStack_27c = 0x7fc000007fc00000;
    uStack_274 = 0x7fc000007fc00000;
    uStack_26c = 0x7fc000007fc00000;
    uStack_264 = 0x7fc000007fc00000;
    uStack_24c = 0x7fc000007fc00000;
    uStack_244 = 0x7fc000007fc00000;
    uStack_23c = 0x7fc000007fc00000;
    uStack_234 = 0x7fc000007fc00000;
    uStack_2bc = 1;
    uStack_2b0 = 2;
    uStack_250 = 0x7f7fffff;
    uStack_21c = *param_2;
    uStack_218 = param_2[1];
    uStack_214 = param_2[2];
    uStack_210 = param_2[3];
    iVar1 = *(int *)(param_1 + 0x18);
    cStack_2ac = cVar11;
    uStack_280 = param_4;
    uStack_25c = uVar8;
    uStack_258 = uVar9;
    fStack_254 = fVar12;
    uStack_22c = uVar5;
    uStack_228 = uVar6;
    uStack_224 = uVar13;
    uStack_220 = uVar7;
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar1);
    }
    iVar2 = *(int *)(lVar10 * 0xa60 + lVar4 + 0x30b8);
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar2);
    }
    uStack_108 = uStack_1e8;
    uStack_100 = uStack_1e0;
    uStack_f8 = uStack_1d8;
    uStack_f0 = uStack_1d0;
    uStack_e8 = uStack_1c8;
    uStack_e0 = uStack_1c0;
    uStack_d8 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_d0 = uStack_1b0;
    uStack_c8 = CONCAT44(uStack_1a4,uStack_1a8);
    uStack_c0 = CONCAT44(uStack_19c,uStack_1a0);
    uStack_b8 = CONCAT62(uStack_196,uStack_198);
    uStack_b0 = CONCAT44(uStack_18c,uStack_190);
    uStack_a8 = CONCAT44(uStack_184,fStack_188);
    uStack_a0 = CONCAT44(uStack_17c,uStack_180);
    uStack_98 = CONCAT44(uStack_174,uStack_178);
    uStack_90 = CONCAT44(uStack_16c,uStack_170);
    uStack_88 = CONCAT44(uStack_164,uStack_168);
    uStack_80 = uStack_160;
    uStack_78 = uStack_158;
    uStack_70 = uStack_150;
    uStack_68 = uStack_148;
    uStack_64 = (int32_t)uStack_144;
    uStack_60 = uStack_144._4_4_;
    uStack_5c = uStack_13c;
    iStack_58 = iStack_138;
    uStack_54 = uStack_134;
    uStack_50 = uStack_130;
    uStack_4c = uStack_12c;
    uStack_48 = CONCAT44(uStack_124,uStack_128);
    (**(code **)(lVar3 + 0x1e0))
              (*(int32_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x98d928),&uStack_2c8,&uStack_108,
               iVar2,iVar1);
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar2);
    }
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




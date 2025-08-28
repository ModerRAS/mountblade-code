n//  的语义化别名
#define SystemCore_DataSerializer
n//  的语义化别名
#define SystemCore_Decoder
// $fun 的语义化别名
#define $alias_name $fun
/* UtilitiesSystem_272a0 - RenderingSystem_ResourceRegistrar */
#define RenderingSystem_ResourceRegistrar UtilitiesSystem_272a0
// 03_rendering_part393_sub002_sub002.c - 1 个函数
// 函数: void UISystem_856a0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void UISystem_856a0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int8_t stack_array_60 [24];
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  plVar1 = (int64_t *)*param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4,0xfffffffffffffffe);
  }
  plVar2 = *(int64_t **)(param_1 + 0x150);
  *(int64_t **)(param_1 + 0x150) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    local_var_48 = *(uint64_t *)(lVar3 + 0x70);
    local_var_40 = *(uint64_t *)(lVar3 + 0x78);
    local_var_38 = *(uint64_t *)(lVar3 + 0x80);
    local_var_30 = *(uint64_t *)(lVar3 + 0x88);
    local_var_28 = *(int32_t *)(lVar3 + 0x90);
    local_var_24 = *(int32_t *)(lVar3 + 0x94);
    local_var_20 = *(int32_t *)(lVar3 + 0x98);
    local_var_1c = *(int32_t *)(lVar3 + 0x9c);
    local_var_18 = *(int32_t *)(lVar3 + 0xa0);
    local_var_14 = *(int32_t *)(lVar3 + 0xa4);
    local_var_10 = *(int32_t *)(lVar3 + 0xa8);
    local_var_c = *(int32_t *)(lVar3 + 0xac);
    DataStructure_bfc90(&local_var_48,stack_array_60);
    *(uint64_t *)(param_1 + 0xd0) = local_var_48;
    *(uint64_t *)(param_1 + 0xd8) = local_var_40;
    *(uint64_t *)(param_1 + 0xe0) = local_var_38;
    *(uint64_t *)(param_1 + 0xe8) = local_var_30;
    *(int32_t *)(param_1 + 0xf0) = local_var_28;
    *(int32_t *)(param_1 + 0xf4) = local_var_24;
    *(int32_t *)(param_1 + 0xf8) = local_var_20;
    *(int32_t *)(param_1 + 0xfc) = local_var_1c;
    *(int32_t *)(param_1 + 0x100) = local_var_18;
    *(int32_t *)(param_1 + 0x104) = local_var_14;
    *(int32_t *)(param_1 + 0x108) = local_var_10;
    *(int32_t *)(param_1 + 0x10c) = local_var_c;
    DataStructure_864f0();
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
uint64_t *
UISystem_857a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  if ((int64_t *)param_1[0x2a] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x2a] + 0x38))();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x160,param_3,param_4,uVar1);
  }
  return param_1;
}
int UISystem_85810(int64_t param_1,float *param_2,float *param_3,int32_t *param_4,
                 uint64_t param_5,float *param_6)
{
  int64_t lVar1;
  int iVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int32_t local_var_2c;
  lVar1 = param_1 + 0x10;
  uVar9 = (uint)(int64_t)(param_6[3] * 256.0);
  uVar12 = 0xff;
  if (uVar9 < 0xff) {
    uVar12 = uVar9;
  }
  uVar11 = (uint)(int64_t)(*param_6 * 256.0);
  uVar9 = 0xff;
  if (uVar11 < 0xff) {
    uVar9 = uVar11;
  }
  uVar10 = (uint)(int64_t)(param_6[1] * 256.0);
  uVar11 = 0xff;
  if (uVar10 < 0xff) {
    uVar11 = uVar10;
  }
  uVar10 = (uint)(int64_t)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar10 < 0xff) {
    param_6._0_4_ = uVar10;
  }
  param_6._0_4_ = ((uVar12 << 8 | uVar9) << 8 | uVar11) << 8 | (uint)param_6;
  uVar5 = SystemCore_DataSerializer(lVar1,param_2);
  fStack_38 = *param_2 + *param_3;
  local_var_2c = 0x7f7fffff;
  fStack_34 = param_2[1] + param_3[1];
  fStack_30 = param_2[2];
  uVar6 = SystemCore_DataSerializer(lVar1,&fStack_38);
  fStack_38 = *param_2 + *param_3;
  fStack_34 = param_2[1] + param_3[1];
  local_var_2c = 0x7f7fffff;
  fStack_30 = param_2[2] + param_3[2];
  uVar7 = SystemCore_DataSerializer(lVar1,&fStack_38);
  fStack_38 = *param_2;
  fStack_34 = param_2[1];
  fStack_30 = param_2[2] + param_3[2];
  local_var_2c = 0x7f7fffff;
  uVar8 = SystemCore_DataSerializer(lVar1,&fStack_38);
  fStack_38 = 0.0;
  fStack_34 = 0.0;
  fStack_30 = 1.0;
  local_var_2c = 0x7f7fffff;
  uVar5 = SystemCore_Decoder(lVar1,uVar5,param_4,&param_6,&fStack_38);
  puVar3 = (int32_t *)CONCAT44(param_5._4_4_,(int32_t)param_5);
  param_5._4_4_ = param_4[1];
  param_5._0_4_ = *puVar3;
  uVar6 = SystemCore_Decoder(lVar1,uVar6,&param_5,&param_6,&fStack_38);
  uVar7 = SystemCore_Decoder(lVar1,uVar7,puVar3,&param_6,&fStack_38);
  param_5._0_4_ = *param_4;
  param_5._4_4_ = puVar3[1];
  uVar8 = SystemCore_Decoder(lVar1,uVar8,&param_5,&param_6,&fStack_38);
  SystemCore_RenderFrame(lVar1,uVar5,uVar6,uVar7);
  lVar1 = *(int64_t *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar1 + 0x88);
  iVar4 = *(int *)(lVar1 + 0x8c);
  if (iVar4 < iVar2 + 1) {
    if (iVar4 < 2) {
      iVar4 = 8;
    }
    else {
      iVar4 = (iVar4 >> 1) + iVar4;
    }
    *(int *)(lVar1 + 0x8c) = iVar4;
    GenericFunction_180085f20(lVar1 + 0x88);
  }
  *(int *)(lVar1 + 0x88) = iVar2 + 1;
  lVar1 = (int64_t)iVar2 * 0xc;
  *(int32_t *)(lVar1 + *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x90)) = uVar5;
  *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x90) + 4 + lVar1) = uVar7;
  *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x90) + 8 + lVar1) = uVar8;
  *(int16_t *)(param_1 + 0x41) = 0x101;
  return iVar2;
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t *
UISystem_85a80(int64_t *param_1,int64_t param_2,float *param_3,float *param_4,float *param_5,
             float *param_6)
{
  float *pfVar1;
  float fVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  void *puVar13;
  byte bVar14;
  int64_t *plVar15;
  float *pfVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  uint64_t local_var_370;
  int64_t *plStack_368;
  int64_t *plStack_360;
  uint64_t local_var_358;
  float fStack_350;
  float fStack_34c;
  int aiStack_348 [2];
  uint64_t local_var_340;
  int64_t *plStack_338;
  int64_t *plStack_330;
  float afStack_328 [2];
  int64_t *plStack_320;
  int32_t local_var_318;
  int64_t *plStack_310;
  int16_t local_var_308;
  char cStack_306;
  int64_t *plStack_300;
  int64_t *plStack_2f8;
  int64_t *plStack_2f0;
  int64_t *plStack_2e8;
  int64_t *plStack_2e0;
  int64_t *plStack_2d8;
  int64_t *plStack_2d0;
  int8_t stack_array_2c8 [8];
  int64_t *plStack_2c0;
  int32_t local_var_2b8;
  int64_t *plStack_2b0;
  int16_t local_var_2a8;
  char cStack_2a6;
  int64_t *plStack_2a0;
  float *pfStack_298;
  uint64_t local_var_290;
  int64_t *plStack_288;
  int64_t *plStack_280;
  int64_t *plStack_278;
  int64_t *plStack_270;
  int64_t *plStack_268;
  int64_t *plStack_260;
  int64_t *plStack_258;
  int64_t *plStack_250;
  int64_t *plStack_248;
  int64_t *plStack_240;
  int64_t *plStack_238;
  int64_t *plStack_230;
  int64_t *plStack_228;
  int64_t *plStack_218;
  int64_t *plStack_210;
  void *plocal_var_208;
  int64_t lStack_200;
  int32_t local_var_1f0;
  void *plocal_var_1e8;
  int64_t lStack_1e0;
  int32_t local_var_1d0;
  void *plocal_var_1c8;
  int64_t lStack_1c0;
  int32_t local_var_1b0;
  void *plocal_var_1a8;
  int64_t lStack_1a0;
  int32_t local_var_190;
  void *plocal_var_188;
  int64_t lStack_180;
  int32_t local_var_170;
  void *plocal_var_168;
  int64_t lStack_160;
  int32_t local_var_150;
  void *plocal_var_148;
  int64_t lStack_140;
  int32_t local_var_130;
  void *plocal_var_128;
  int64_t lStack_120;
  int32_t local_var_110;
  void *plocal_var_108;
  int64_t lStack_100;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  float fStack_b8;
  float fStack_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int64_t *plStack_a8;
  uint64_t local_var_a0;
  int64_t *plStack_98;
  int64_t *plStack_90;
  int64_t *plStack_88;
  local_var_a0 = 0xfffffffffffffffe;
  stack_special_x_18 = param_3;
  stack_special_x_20 = param_4;
  UtilitiesSystem_CacheManager(param_2,&plocal_var_108,&processed_var_6816_ptr);
  UtilitiesSystem_CacheManager(param_2,&plocal_var_128,&processed_var_6824_ptr);
  UtilitiesSystem_CacheManager(param_2,&plocal_var_148,&processed_var_6832_ptr);
  UtilitiesSystem_CacheManager(param_2,&plocal_var_208,&processed_var_6944_ptr);
  UtilitiesSystem_CacheManager(param_2,&plocal_var_168,&processed_var_6952_ptr);
  UtilitiesSystem_CacheManager(param_2,&plocal_var_188,&processed_var_6968_ptr);
  UtilitiesSystem_CacheManager(param_2,&plocal_var_1a8,&processed_var_6984_ptr);
  UtilitiesSystem_CacheManager(param_2,&plocal_var_1c8,&processed_var_6840_ptr);
  UtilitiesSystem_CacheManager(param_2,&plocal_var_1e8,&processed_var_6852_ptr);
  plStack_218 = (int64_t *)0x0;
  plStack_210 = (int64_t *)0x0;
  plStack_288 = (int64_t *)0x0;
  *param_1 = 0;
  plStack_278 = (int64_t *)0x0;
  plStack_280 = (int64_t *)0x0;
  plStack_270 = (int64_t *)0x0;
  plStack_268 = (int64_t *)0x0;
  RenderingSystem_ShaderCompiler0(system_resource_state,&plStack_2a0,param_2);
  if (plStack_2a0 == (int64_t *)0x0) {
    puVar10 = (uint64_t *)GenericFunction_1800bf050(0,&local_var_358);
    puVar10 = (uint64_t *)SystemCore_BufferManager(*puVar10,&plStack_368);
    bVar14 = 0xd;
  }
  else {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plStack_2a0,&fStack_350);
    bVar14 = 3;
  }
  plVar15 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_230 = plVar15;
  plStack_98 = plVar15;
  if (((bVar14 & 8) != 0) && (bVar14 = bVar14 & 0xf7, plStack_368 != (int64_t *)0x0)) {
    (**(code **)(*plStack_368 + 0x38))();
  }
  if (((bVar14 & 4) != 0) && (bVar14 = bVar14 & 0xfb, local_var_358 != (int64_t *)0x0)) {
    (**(code **)(*local_var_358 + 0x38))();
  }
  if ((bVar14 & 2) != 0) {
    bVar14 = bVar14 & 0xfd;
    if ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
    }
  }
  RenderingSystem_ShaderCompiler0(system_resource_state,&plStack_360,&plocal_var_108);
  if (plStack_360 == (int64_t *)0x0) {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plVar15,&local_var_358);
    bVar14 = bVar14 | 0x20;
  }
  else {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plStack_360,&fStack_350);
    bVar14 = bVar14 | 0x10;
  }
  plVar11 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = (int64_t *)0x0;
  plStack_2e0 = plVar11;
  plStack_218 = plVar11;
  if (((bVar14 & 0x20) != 0) && (bVar14 = bVar14 & 0xdf, local_var_358 != (int64_t *)0x0)) {
    (**(code **)(*local_var_358 + 0x38))();
  }
  if ((bVar14 & 0x10) != 0) {
    bVar14 = bVar14 & 0xef;
    if ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
    }
  }
  puVar10 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&local_var_370,&plocal_var_128);
  plVar12 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (int64_t *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar12;
    (**(code **)(lVar3 + 0x38))();
    plVar12 = plStack_360;
  }
  plStack_360 = plVar12;
  if (local_var_370 != (int64_t *)0x0) {
    (**(code **)(*local_var_370 + 0x38))();
  }
  if (plStack_360 == (int64_t *)0x0) {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plVar11,&local_var_358);
    bVar14 = bVar14 | 0x80;
  }
  else {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plStack_360,&fStack_350);
    bVar14 = bVar14 | 0x40;
  }
  plStack_2e8 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = (int64_t *)0x0;
  plStack_210 = plStack_2e8;
  if (((char)bVar14 < '\0') && (bVar14 = bVar14 & 0x7f, local_var_358 != (int64_t *)0x0)) {
    (**(code **)(*local_var_358 + 0x38))();
  }
  if (((bVar14 & 0x40) != 0) && ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  puVar10 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&local_var_370,&plocal_var_148);
  plVar11 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (int64_t *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar11;
    (**(code **)(lVar3 + 0x38))();
    plVar11 = plStack_360;
  }
  plStack_360 = plVar11;
  if (local_var_370 != (int64_t *)0x0) {
    (**(code **)(*local_var_370 + 0x38))();
  }
  bVar18 = plStack_360 == (int64_t *)0x0;
  if (bVar18) {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plVar15,&local_var_358);
  }
  else {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plStack_360,&fStack_350);
  }
  plVar11 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = (int64_t *)0x0;
  plStack_2f8 = plVar11;
  plStack_288 = plVar11;
  if ((bVar18) && (local_var_358 != (int64_t *)0x0)) {
    (**(code **)(*local_var_358 + 0x38))();
  }
  if ((!bVar18) && ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  puVar10 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&local_var_370,&plocal_var_208);
  plVar12 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (int64_t *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar12;
    (**(code **)(lVar3 + 0x38))();
    plVar12 = plStack_360;
  }
  plStack_360 = plVar12;
  if (local_var_370 != (int64_t *)0x0) {
    (**(code **)(*local_var_370 + 0x38))();
  }
  bVar18 = plStack_360 == (int64_t *)0x0;
  if (bVar18) {
    plVar11 = (int64_t *)SystemCore_BufferManager(plVar11,&local_var_358);
  }
  else {
    plVar11 = (int64_t *)SystemCore_BufferManager(plStack_360,&fStack_350);
  }
  lVar3 = *plVar11;
  *plVar11 = 0;
  plStack_368 = (int64_t *)*param_1;
  *param_1 = lVar3;
  if (plStack_368 != (int64_t *)0x0) {
    (**(code **)(*plStack_368 + 0x38))();
  }
  if ((bVar18) && (local_var_358 != (int64_t *)0x0)) {
    (**(code **)(*local_var_358 + 0x38))();
  }
  if ((!bVar18) && ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  puVar10 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&local_var_370,&plocal_var_168);
  plVar11 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (int64_t *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar11;
    (**(code **)(lVar3 + 0x38))();
    plVar11 = plStack_360;
  }
  plStack_360 = plVar11;
  if (local_var_370 != (int64_t *)0x0) {
    (**(code **)(*local_var_370 + 0x38))();
  }
  bVar18 = plStack_360 == (int64_t *)0x0;
  if (bVar18) {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plVar15,&local_var_358);
  }
  else {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plStack_360,&fStack_350);
  }
  plStack_300 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = (int64_t *)0x0;
  plStack_280 = plStack_300;
  if ((bVar18) && (local_var_358 != (int64_t *)0x0)) {
    (**(code **)(*local_var_358 + 0x38))();
  }
  if ((!bVar18) && ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  puVar10 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&local_var_370,&plocal_var_188);
  plVar11 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (int64_t *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar11;
    (**(code **)(lVar3 + 0x38))();
    plVar11 = plStack_360;
  }
  plStack_360 = plVar11;
  if (local_var_370 != (int64_t *)0x0) {
    (**(code **)(*local_var_370 + 0x38))();
  }
  bVar18 = plStack_360 == (int64_t *)0x0;
  if (bVar18) {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plVar15,&local_var_358);
  }
  else {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plStack_360,&fStack_350);
  }
  plStack_2f0 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = (int64_t *)0x0;
  plStack_278 = plStack_2f0;
  if ((bVar18) && (local_var_358 != (int64_t *)0x0)) {
    (**(code **)(*local_var_358 + 0x38))();
  }
  if ((!bVar18) && ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  puVar10 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&local_var_370,&plocal_var_1c8);
  plVar11 = (int64_t *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (int64_t *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar11;
    (**(code **)(lVar3 + 0x38))();
    plVar11 = plStack_360;
  }
  plStack_360 = plVar11;
  if (local_var_370 != (int64_t *)0x0) {
    (**(code **)(*local_var_370 + 0x38))();
  }
  bVar18 = plStack_360 == (int64_t *)0x0;
  if (bVar18) {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plVar15,&fStack_350);
  }
  else {
    puVar10 = (uint64_t *)SystemCore_BufferManager(plStack_360,&local_var_370);
  }
  plVar11 = (int64_t *)*puVar10;
  *puVar10 = 0;
  local_var_358 = (int64_t *)0x0;
  plStack_368 = plVar11;
  plStack_270 = plVar11;
  if ((bVar18) && ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  if ((!bVar18) && (local_var_370 != (int64_t *)0x0)) {
    (**(code **)(*local_var_370 + 0x38))();
  }
  puVar10 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&local_var_340,&plocal_var_1a8);
  plVar12 = (int64_t *)*puVar10;
  *puVar10 = 0;
  local_var_358 = plStack_360;
  if (plStack_360 != (int64_t *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar12;
    (**(code **)(lVar3 + 0x38))();
    plVar12 = plStack_360;
  }
  plStack_360 = plVar12;
  if (local_var_340 != (int64_t *)0x0) {
    (**(code **)(*local_var_340 + 0x38))();
  }
  bVar18 = plStack_360 == (int64_t *)0x0;
  if (bVar18) {
    plVar12 = (int64_t *)SystemCore_BufferManager(plVar15,&fStack_350);
  }
  else {
    plVar12 = (int64_t *)SystemCore_BufferManager(plStack_360,&local_var_370);
  }
  plVar4 = (int64_t *)*plVar12;
  *plVar12 = 0;
  local_var_358 = (int64_t *)0x0;
  plStack_268 = plVar4;
  plStack_228 = plVar4;
  if ((bVar18) && ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  if ((!bVar18) && (local_var_370 != (int64_t *)0x0)) {
    (**(code **)(*local_var_370 + 0x38))();
  }
  pfVar16 = param_5;
  local_var_370 = (int64_t *)0x0;
  UISystem_87b30(plVar4,&local_var_370,param_5);
  local_var_370 = (int64_t *)0x0;
  UISystem_87b30(plVar11,&local_var_370,pfVar16);
  local_var_370 = (int64_t *)0x0;
  UISystem_87b30(plStack_300,&local_var_370,pfVar16);
  local_var_370 = (int64_t *)0x0;
  UISystem_87b30(plStack_2f0,&local_var_370,pfVar16);
  SystemConfig_Manager(plStack_2e0);
  SystemConfig_Manager(plStack_2e8);
  SystemConfig_Manager(plStack_2f8);
  SystemConfig_Manager(*param_1);
  SystemConfig_Manager(plStack_300);
  SystemConfig_Manager(plStack_2f0);
  SystemConfig_Manager(plVar4);
  SystemConfig_Manager(plVar11);
  pfVar6 = stack_special_x_18;
  fVar21 = *pfVar16;
  fVar20 = fVar21 / pfVar16[1];
  aiStack_348[0] = 1;
  aiStack_348[1] = 0;
  local_var_370 = (int64_t *)CONCAT44(param_4[1],*param_4 - fVar21);
  local_var_340 = (int64_t *)CONCAT44(param_4[1] - pfVar16[1],fVar21 + *stack_special_x_18);
  UISystem_879d0(plStack_2f8,&local_var_340,&local_var_370,aiStack_348 + 1,aiStack_348,fVar20);
  aiStack_348[1] = 0;
  aiStack_348[0] = 0;
  local_var_370 = (int64_t *)CONCAT44(pfVar6[1] + pfVar16[1],*param_4 - *pfVar16);
  local_var_340 = (int64_t *)CONCAT44(pfVar6[1],*pfVar16 + *pfVar6);
  UISystem_879d0(*param_1,&local_var_340,&local_var_370,aiStack_348,aiStack_348 + 1,fVar20);
  aiStack_348[1] = 0;
  aiStack_348[0] = 0;
  local_var_370 = (int64_t *)CONCAT44(param_4[1] - pfVar16[1],*pfVar6 + *pfVar16);
  local_var_340 = (int64_t *)CONCAT44(pfVar16[1] + pfVar6[1],*pfVar6);
  UISystem_87870(plStack_2e0,&local_var_340,&local_var_370,aiStack_348,aiStack_348 + 1,fVar20);
  plVar12 = plStack_2e8;
  aiStack_348[1] = 1;
  aiStack_348[0] = 0;
  local_var_370 = (int64_t *)CONCAT44(param_4[1] - pfVar16[1],*param_4);
  local_var_340 = (int64_t *)CONCAT44(pfVar16[1] + pfVar6[1],*param_4 - *pfVar16);
  UISystem_87870(plStack_2e8,&local_var_340,&local_var_370,aiStack_348,aiStack_348 + 1,fVar20);
  local_var_e8 = 0x3f800000;
  local_var_e0 = 0;
  local_var_d8 = 0x3f80000000000000;
  local_var_d0 = 0;
  local_var_c8 = 0;
  local_var_c0 = 0x3f800000;
  fStack_b8 = 0.0;
  fStack_b4 = 0.0;
  local_var_b0 = 0;
  local_var_ac = 0x3f800000;
  puVar10 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&fStack_350,&plocal_var_1e8);
  plVar11 = (int64_t *)*puVar10;
  *puVar10 = 0;
  local_var_358 = plStack_360;
  if (plStack_360 != (int64_t *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar11;
    (**(code **)(lVar3 + 0x38))();
    plVar11 = plStack_360;
  }
  plStack_360 = plVar11;
  if ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  bVar18 = plStack_360 == (int64_t *)0x0;
  if (bVar18) {
    plVar11 = (int64_t *)SystemCore_BufferManager(plVar15,&local_var_358);
  }
  else {
    plVar11 = (int64_t *)SystemCore_BufferManager(plStack_360,&fStack_350);
  }
  plVar5 = (int64_t *)*plVar11;
  *plVar11 = 0;
  plStack_90 = plVar5;
  if ((bVar18) && (local_var_358 != (int64_t *)0x0)) {
    (**(code **)(*local_var_358 + 0x38))();
  }
  if ((!bVar18) && ((int64_t *)CONCAT44(fStack_34c,fStack_350) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  local_var_370 = (int64_t *)0x3f8000003f800000;
  local_var_340 = (int64_t *)0x0;
  UISystem_87b30(plVar5,&local_var_340,&local_var_370);
  SystemConfig_Manager(plVar5);
  lVar3 = *(int64_t *)(*param_1 + 0x1b8);
  if (((((lVar3 != plVar12[0x37]) || (lVar3 != plStack_2f8[0x37])) || (lVar3 != plStack_300[0x37]))
      || ((lVar3 != plStack_2f0[0x37] || (lVar3 != plStack_368[0x37])))) ||
     ((lVar3 != plVar4[0x37] || (lVar3 != plVar5[0x37])))) {
    RenderingSystem_ResourceRegistrar(&processed_var_6864_ptr);
  }
  pfVar6 = param_6;
  fVar21 = ((stack_special_x_20[1] - pfVar16[1]) - (pfVar16[1] + stack_special_x_18[1])) / param_6[1];
  aiStack_348[0] = (int)fVar21;
  iVar17 = 0;
  if (0 < aiStack_348[0]) {
    aiStack_348[1] = 0;
    local_var_340 = (int64_t *)((uint64_t)local_var_340 & 0xffffffff00000000);
    do {
      pfVar1 = stack_special_x_20;
      SystemCore_BufferManager(plVar5,&local_var_370);
      plVar15 = local_var_370;
      fVar20 = pfVar6[1];
      fVar2 = *pfVar6;
      fVar19 = pfVar1[1] - pfVar16[1];
      fStack_34c = fVar19 - (float)iVar17 * fVar20;
      fStack_350 = *pfVar1 - *pfVar16;
      iVar17 = iVar17 + 1;
      local_var_358 = (int64_t *)CONCAT44(fVar19 - (float)iVar17 * fVar20,*pfVar16 + *stack_special_x_18);
      plStack_a8 = local_var_370;
      if (local_var_370 != (int64_t *)0x0) {
        (**(code **)(*local_var_370 + 0x28))(local_var_370);
      }
      plStack_338 = (int64_t *)0x0;
      plStack_330 = (int64_t *)0x0;
      pfStack_298 = afStack_328;
      plStack_310 = (int64_t *)0x0;
      plStack_320 = (int64_t *)0x0;
      afStack_328[0]._0_1_ = 0;
      plStack_260 = plVar15;
      if (plVar15 != (int64_t *)0x0) {
        (**(code **)(*plVar15 + 0x28))(plVar15);
      }
      plVar11 = plStack_338;
      plStack_260 = plStack_338;
      plStack_338 = plVar15;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x38))();
      }
      plStack_320 = plVar15;
      local_var_318 = 0;
      CoreEngine_07F4C0(afStack_328);
      plVar11 = plStack_310;
      plStack_258 = plStack_310;
      if (plStack_310 != (int64_t *)0x0) {
        (**(code **)(*plStack_310 + 0x28))(plStack_310);
      }
      plVar12 = plStack_330;
      plStack_258 = plStack_330;
      plStack_330 = plVar11;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x38))();
      }
      local_var_308 = 0;
      cStack_306 = '\0';
      if (plVar15 != (int64_t *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15);
      }
      DataStructure_325e0(&plStack_338,&local_var_358,&fStack_350,&local_var_340,aiStack_348 + 1,fVar2 / fVar20)
      ;
      if ((plStack_338 != (int64_t *)0x0) && (plStack_330 != (int64_t *)0x0)) {
        if (cStack_306 != '\0') {
          SystemConfig_Manager();
        }
        SystemSecurityManager(afStack_328);
        if ((char)local_var_308 != '\0') {
          SystemInitializer(plStack_338);
        }
        if (local_var_308._1_1_ != '\0') {
          SystemInitializer(plStack_338);
        }
        plVar15 = plStack_330;
        plStack_250 = plStack_330;
        plStack_330 = (int64_t *)0x0;
        if (plVar15 != (int64_t *)0x0) {
          (**(code **)(*plVar15 + 0x38))();
        }
      }
      pfStack_298 = afStack_328;
      SystemSecurityManager(afStack_328);
      if (plStack_310 != (int64_t *)0x0) {
        (**(code **)(*plStack_310 + 0x38))();
      }
      if (plStack_330 != (int64_t *)0x0) {
        (**(code **)(*plStack_330 + 0x38))();
      }
      if (plStack_338 != (int64_t *)0x0) {
        (**(code **)(*plStack_338 + 0x38))();
      }
      plVar11 = local_var_370;
      plVar15 = (int64_t *)*param_1;
      plStack_88 = plVar15;
      if (plVar15 != (int64_t *)0x0) {
        (**(code **)(*plVar15 + 0x28))(plVar15);
      }
      plStack_2d8 = (int64_t *)0x0;
      plStack_2d0 = (int64_t *)0x0;
      plStack_2b0 = (int64_t *)0x0;
      plStack_2c0 = (int64_t *)0x0;
      stack_array_2c8[0] = 0;
      pfStack_298 = (float *)stack_array_2c8;
      if (plVar15 != (int64_t *)0x0) {
        plStack_248 = plVar15;
        (**(code **)(*plVar15 + 0x28))(plVar15);
      }
      plStack_248 = plStack_2d8;
      plVar12 = plVar15;
      if (plStack_2d8 != (int64_t *)0x0) {
        lVar3 = *plStack_2d8;
        plStack_2d8 = plVar15;
        (**(code **)(lVar3 + 0x38))();
        plVar12 = plStack_2d8;
      }
      plStack_2d8 = plVar12;
      local_var_2b8 = 0;
      plStack_2c0 = plVar15;
      CoreEngine_07F4C0(stack_array_2c8);
      plVar12 = plStack_2b0;
      plStack_240 = plStack_2b0;
      if (plStack_2b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_2b0 + 0x28))(plStack_2b0);
      }
      plVar4 = plStack_2d0;
      plStack_240 = plStack_2d0;
      plStack_2d0 = plVar12;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      local_var_2a8 = 0;
      cStack_2a6 = '\0';
      if (plVar15 != (int64_t *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15);
      }
      pfStack_298 = (float *)0x3f8000003f800000;
      local_var_290 = 0x3f8000003f800000;
      DataStructure_35ca0(&plStack_2d8,plVar11,&local_var_e8,0xff,&pfStack_298,1,0,0,1);
      if ((plStack_2d8 != (int64_t *)0x0) && (plStack_2d0 != (int64_t *)0x0)) {
        if (cStack_2a6 != '\0') {
          SystemConfig_Manager();
        }
        SystemSecurityManager(stack_array_2c8);
        if ((char)local_var_2a8 != '\0') {
          SystemInitializer(plStack_2d8);
        }
        if (local_var_2a8._1_1_ != '\0') {
          SystemInitializer(plStack_2d8);
        }
        plVar15 = plStack_2d0;
        plStack_238 = plStack_2d0;
        plStack_2d0 = (int64_t *)0x0;
        if (plVar15 != (int64_t *)0x0) {
          (**(code **)(*plVar15 + 0x38))();
        }
      }
      pfStack_298 = (float *)stack_array_2c8;
      SystemSecurityManager(stack_array_2c8);
      if (plStack_2b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_2b0 + 0x38))();
      }
      if (plStack_2d0 != (int64_t *)0x0) {
        (**(code **)(*plStack_2d0 + 0x38))();
      }
      if (plStack_2d8 != (int64_t *)0x0) {
        (**(code **)(*plStack_2d8 + 0x38))();
      }
      if (local_var_370 != (int64_t *)0x0) {
        (**(code **)(*local_var_370 + 0x38))();
      }
      plVar15 = plStack_230;
      pfVar16 = param_5;
    } while (iVar17 < aiStack_348[0]);
  }
  pfVar6 = param_6;
  fVar20 = (float)aiStack_348[0];
  fVar21 = fVar21 - fVar20;
  if (0.0 < fVar21) {
    SystemCore_BufferManager(plVar5,&local_var_370);
    plVar11 = local_var_370;
    plStack_338 = (int64_t *)0x0;
    plStack_330 = (int64_t *)0x0;
    param_5 = afStack_328;
    plStack_310 = (int64_t *)0x0;
    plStack_320 = (int64_t *)0x0;
    afStack_328[0]._0_1_ = 0;
    param_6 = (float *)local_var_370;
    if (local_var_370 != (int64_t *)0x0) {
      (**(code **)(*local_var_370 + 0x28))(local_var_370);
    }
    plVar12 = plStack_338;
    param_6 = (float *)plStack_338;
    plStack_338 = plVar11;
    if (plVar12 != (int64_t *)0x0) {
      (**(code **)(*plVar12 + 0x38))();
    }
    plStack_320 = plVar11;
    local_var_318 = 0;
    CoreEngine_07F4C0(afStack_328);
    plVar11 = plStack_310;
    param_6 = (float *)plStack_310;
    if (plStack_310 != (int64_t *)0x0) {
      (**(code **)(*plStack_310 + 0x28))(plStack_310);
    }
    plVar12 = plStack_330;
    param_6 = (float *)plStack_330;
    plStack_330 = plVar11;
    if (plVar12 != (int64_t *)0x0) {
      (**(code **)(*plVar12 + 0x38))();
    }
    pfVar8 = stack_special_x_20;
    pfVar7 = stack_special_x_18;
    local_var_308 = 0;
    cStack_306 = '\0';
    fVar2 = pfVar6[1];
    param_6 = (float *)((uint64_t)param_6 & 0xffffffff00000000);
    param_5 = (float *)((uint64_t)param_5 & 0xffffffff00000000);
    pfVar1 = stack_special_x_20 + 1;
    stack_special_x_20 = (float *)CONCAT44((*pfVar1 - pfVar16[1]) - fVar2 * fVar20,*stack_special_x_20 - *pfVar16);
    stack_special_x_18 = (float *)CONCAT44((*pfVar1 - pfVar16[1]) - (float)(aiStack_348[0] + 1) * fVar2,
                                   *pfVar16 + *stack_special_x_18);
    DataStructure_325e0(&plStack_338,&stack_special_x_18,&stack_special_x_20,&param_5,&param_6,*pfVar6 / fVar2);
    fVar20 = pfVar16[1] + pfVar7[1];
    stack_special_x_18 = (float *)CONCAT44(fVar21 * pfVar6[1] + fVar20,*pfVar8 - *pfVar16);
    stack_special_x_20 = (float *)CONCAT44(fVar20,*pfVar16 + *pfVar7);
    DataStructure_31fa0(&plStack_338,&stack_special_x_20,&stack_special_x_18,fVar21);
    if ((plStack_338 != (int64_t *)0x0) && (plStack_330 != (int64_t *)0x0)) {
      if (cStack_306 != '\0') {
        SystemConfig_Manager();
      }
      SystemSecurityManager(afStack_328);
      if ((char)local_var_308 != '\0') {
        SystemInitializer(plStack_338);
      }
      if (local_var_308._1_1_ != '\0') {
        SystemInitializer(plStack_338);
      }
      plVar11 = plStack_330;
      stack_special_x_18 = (float *)plStack_330;
      plStack_330 = (int64_t *)0x0;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x38))();
      }
    }
    stack_special_x_18 = afStack_328;
    SystemSecurityManager(afStack_328);
    if (plStack_310 != (int64_t *)0x0) {
      (**(code **)(*plStack_310 + 0x38))();
    }
    if (plStack_330 != (int64_t *)0x0) {
      (**(code **)(*plStack_330 + 0x38))();
    }
    if (plStack_338 != (int64_t *)0x0) {
      (**(code **)(*plStack_338 + 0x38))();
    }
    GenericFunction_180095100(*param_1,local_var_370,&local_var_e8);
    if (local_var_370 != (int64_t *)0x0) {
      (**(code **)(*local_var_370 + 0x38))();
    }
  }
  plVar12 = plStack_2f8;
  GenericFunction_180095100(*param_1,plStack_2f8,&system_data_0300);
  GenericFunction_180095100(*param_1,plStack_2e0,&system_data_0300);
  GenericFunction_180095100(*param_1,plStack_2e8,&system_data_0300);
  SystemConfig_Manager(*param_1);
  plVar9 = plStack_228;
  GenericFunction_180095100(*param_1,plStack_228,&local_var_e8);
  fStack_b4 = *(float *)(*param_1 + 0x288) - *(float *)(plStack_300 + 0x51);
  GenericFunction_180095100(*param_1,plStack_300,&local_var_e8);
  plVar4 = plStack_2f0;
  fStack_b8 = *(float *)(*param_1 + 0x284) - *(float *)((int64_t)plStack_2f0 + 0x284);
  GenericFunction_180095100(*param_1,plStack_2f0,&local_var_e8);
  plVar11 = plStack_368;
  fStack_b4 = 0.0;
  GenericFunction_180095100(*param_1,plStack_368,&local_var_e8);
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 8);
  }
  (**(code **)(*(int64_t *)(*param_1 + 0x10) + 0x10))((int64_t *)(*param_1 + 0x10),puVar13);
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  if (plStack_360 != (int64_t *)0x0) {
    (**(code **)(*plStack_360 + 0x38))();
  }
  if (plVar15 != (int64_t *)0x0) {
    (**(code **)(*plVar15 + 0x38))(plVar15);
  }
  if (plStack_2a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_2a0 + 0x38))();
  }
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x38))(plVar11);
  }
  (**(code **)(*plStack_300 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4);
  if (plVar12 != (int64_t *)0x0) {
    (**(code **)(*plVar12 + 0x38))(plVar12);
  }
  if (plStack_2e8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2e8 + 0x38))();
  }
  if (plStack_2e0 != (int64_t *)0x0) {
    (**(code **)(*plStack_2e0 + 0x38))();
  }
  plocal_var_1e8 = &system_data_buffer_ptr;
  if (lStack_1e0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_1e0 = 0;
  local_var_1d0 = 0;
  plocal_var_1e8 = &system_state_ptr;
  plocal_var_1c8 = &system_data_buffer_ptr;
  if (lStack_1c0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_1c0 = 0;
  local_var_1b0 = 0;
  plocal_var_1c8 = &system_state_ptr;
  plocal_var_1a8 = &system_data_buffer_ptr;
  if (lStack_1a0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_1a0 = 0;
  local_var_190 = 0;
  plocal_var_1a8 = &system_state_ptr;
  plocal_var_188 = &system_data_buffer_ptr;
  if (lStack_180 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_180 = 0;
  local_var_170 = 0;
  plocal_var_188 = &system_state_ptr;
  plocal_var_168 = &system_data_buffer_ptr;
  if (lStack_160 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_160 = 0;
  local_var_150 = 0;
  plocal_var_168 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  if (lStack_200 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_200 = 0;
  local_var_1f0 = 0;
  plocal_var_208 = &system_state_ptr;
  plocal_var_148 = &system_data_buffer_ptr;
  if (lStack_140 == 0) {
    lStack_140 = 0;
    local_var_130 = 0;
    plocal_var_148 = &system_state_ptr;
    plocal_var_128 = &system_data_buffer_ptr;
    if (lStack_120 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_120 = 0;
    local_var_110 = 0;
    plocal_var_128 = &system_state_ptr;
    plocal_var_108 = &system_data_buffer_ptr;
    if (lStack_100 == 0) {
      return param_1;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Removing unreachable block (ram,0x0001804875dd)
// WARNING: Removing unreachable block (ram,0x0001804875f1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t *
UISystem_871c0(int64_t *param_1,int64_t param_2,uint64_t *param_3,int32_t *param_4,
             uint64_t param_5)
{
  float fVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  float *pfVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  void *puVar10;
  bool bVar11;
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  int64_t *plStack_140;
  int64_t *plStack_138;
  int64_t *plStack_130;
  int64_t *plStack_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  int64_t *plStack_110;
  int64_t *plStack_108;
  void *plocal_var_100;
  int64_t lStack_f8;
  int32_t local_var_e8;
  void *plocal_var_e0;
  int64_t lStack_d8;
  int32_t local_var_c8;
  void *plocal_var_c0;
  int64_t lStack_b8;
  uint64_t local_var_a0;
  int64_t *plStack_98;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  local_var_a0 = 0xfffffffffffffffe;
  stack_special_x_18 = param_3;
  stack_special_x_20 = param_4;
  UtilitiesSystem_CacheManager(param_2,&plocal_var_c0,&processed_var_6816_ptr);
  UtilitiesSystem_CacheManager(param_2,&plocal_var_e0,&processed_var_6824_ptr);
  UtilitiesSystem_CacheManager(param_2,&plocal_var_100,&processed_var_6936_ptr);
  plStack_110 = (int64_t *)0x0;
  plStack_108 = (int64_t *)0x0;
  RenderingSystem_ShaderCompiler0(system_resource_state,&plStack_118,param_2);
  bVar11 = plStack_118 == (int64_t *)0x0;
  if (bVar11) {
    puVar9 = (uint64_t *)GenericFunction_1800bf050(0,&plStack_120);
    plVar8 = (int64_t *)SystemCore_BufferManager(*puVar9,&stack_special_x_10);
  }
  else {
    plVar8 = (int64_t *)SystemCore_BufferManager(plStack_118,&plStack_130);
  }
  plVar2 = (int64_t *)*plVar8;
  *plVar8 = 0;
  plStack_98 = plVar2;
  if ((bVar11) && (stack_special_x_10 != (int64_t *)0x0)) {
    (**(code **)(*stack_special_x_10 + 0x38))();
  }
  if ((bVar11) && (plStack_120 != (int64_t *)0x0)) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  if ((!bVar11) && (plStack_130 != (int64_t *)0x0)) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  RenderingSystem_ShaderCompiler0(system_resource_state,&plStack_140,&plocal_var_c0);
  bVar11 = plStack_140 == (int64_t *)0x0;
  if (bVar11) {
    plVar8 = (int64_t *)SystemCore_BufferManager(plVar2,&plStack_130);
  }
  else {
    plVar8 = (int64_t *)SystemCore_BufferManager(plStack_140,&plStack_120);
  }
  plVar3 = (int64_t *)*plVar8;
  *plVar8 = 0;
  stack_special_x_10 = (int64_t *)0x0;
  plStack_110 = plVar3;
  if ((bVar11) && (plStack_130 != (int64_t *)0x0)) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  if ((!bVar11) && (plStack_120 != (int64_t *)0x0)) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  puVar9 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&plStack_138,&plocal_var_e0);
  plVar8 = (int64_t *)*puVar9;
  *puVar9 = 0;
  stack_special_x_10 = plStack_140;
  if (plStack_140 != (int64_t *)0x0) {
    lVar4 = *plStack_140;
    plStack_140 = plVar8;
    (**(code **)(lVar4 + 0x38))();
    plVar8 = plStack_140;
  }
  plStack_140 = plVar8;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  bVar11 = plStack_140 == (int64_t *)0x0;
  if (bVar11) {
    plVar8 = (int64_t *)SystemCore_BufferManager(plVar3,&plStack_138);
  }
  else {
    plVar8 = (int64_t *)SystemCore_BufferManager(plStack_140,&plStack_130);
  }
  plVar5 = (int64_t *)*plVar8;
  *plVar8 = 0;
  stack_special_x_10 = (int64_t *)0x0;
  plStack_108 = plVar5;
  if ((bVar11) && (plStack_138 != (int64_t *)0x0)) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if ((!bVar11) && (plStack_130 != (int64_t *)0x0)) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  pfVar7 = (float *)CONCAT44(param_5._4_4_,(int32_t)param_5);
  param_5._4_4_ = *(float *)((int64_t)stack_special_x_18 + 4) + pfVar7[1];
  param_5._0_4_ = *param_4;
  stack_special_x_10 = (int64_t *)*stack_special_x_18;
  UISystem_87b30(plVar3,&stack_special_x_10,&param_5);
  param_5._4_4_ = (float)param_4[1];
  param_5._0_4_ = *param_4;
  stack_special_x_10 = (int64_t *)CONCAT44(param_5._4_4_ - *pfVar7,*(int32_t *)stack_special_x_18);
  UISystem_87b30(plVar5,&stack_special_x_10,&param_5);
  puVar9 = (uint64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&param_5,&plocal_var_100);
  plVar8 = (int64_t *)*puVar9;
  *puVar9 = 0;
  plStack_138 = plStack_140;
  if (plStack_140 != (int64_t *)0x0) {
    lVar4 = *plStack_140;
    plStack_140 = plVar8;
    (**(code **)(lVar4 + 0x38))();
    plVar8 = plStack_140;
  }
  plStack_140 = plVar8;
  if ((int64_t *)CONCAT44(param_5._4_4_,(int32_t)param_5) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)CONCAT44(param_5._4_4_,(int32_t)param_5) + 0x38))();
  }
  bVar11 = plStack_140 == (int64_t *)0x0;
  if (bVar11) {
    plVar8 = (int64_t *)SystemCore_BufferManager(plVar2,&param_5);
  }
  else {
    plVar8 = (int64_t *)SystemCore_BufferManager(plStack_140,&stack_special_x_10);
  }
  plVar6 = (int64_t *)*plVar8;
  *plVar8 = 0;
  plStack_138 = plVar6;
  if ((bVar11) && ((int64_t *)CONCAT44(param_5._4_4_,(int32_t)param_5) != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)CONCAT44(param_5._4_4_,(int32_t)param_5) + 0x38))();
  }
  param_5._0_4_ = 0x3f800000;
  param_5._4_4_ = 1.0;
  stack_special_x_10 = (int64_t *)0x0;
  UISystem_87b30(plVar6,&stack_special_x_10,&param_5);
  SystemConfig_Manager(plVar6);
  if ((plVar3[0x37] != plVar5[0x37]) || (plVar3[0x37] != plVar6[0x37])) {
    RenderingSystem_ResourceRegistrar(&processed_var_7008_ptr);
  }
  local_var_88 = 0x3f800000;
  local_var_80 = 0;
  local_var_78 = 0x3f80000000000000;
  local_var_70 = 0;
  local_var_68 = 0;
  local_var_64 = 0;
  local_var_60 = 0x3f800000;
  local_var_5c = 0;
  local_var_58 = 0;
  local_var_54 = 0;
  local_var_50 = 0;
  local_var_4c = 0x3f800000;
  GenericFunction_180095100(plVar3,plVar5,&local_var_88);
  SystemCore_BufferManager(plVar6,&plStack_128);
  fVar1 = pfVar7[1];
  param_5._0_4_ = 0;
  stack_special_x_10 = (int64_t *)((uint64_t)stack_special_x_10 & 0xffffffff00000000);
  stack_special_x_20 = (int32_t *)CONCAT44((float)stack_special_x_20[1] - fVar1,*stack_special_x_20);
  stack_special_x_18 = (uint64_t *)
               CONCAT44(fVar1 + *(float *)((int64_t)stack_special_x_18 + 4),*(int32_t *)stack_special_x_18);
  UISystem_87870(plStack_128,&stack_special_x_18,&stack_special_x_20,&stack_special_x_10,&param_5,*pfVar7 / fVar1);
  GenericFunction_180095100(plVar3,plStack_128,&local_var_88);
  puVar10 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar10 = *(void **)(param_2 + 8);
  }
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,puVar10);
  *param_1 = (int64_t)plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (plStack_128 != (int64_t *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if (plStack_140 != (int64_t *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if (plStack_118 != (int64_t *)0x0) {
    (**(code **)(*plStack_118 + 0x38))();
  }
  (**(code **)(*plVar5 + 0x38))(plVar5);
  (**(code **)(*plVar3 + 0x38))(plVar3);
  plocal_var_100 = &system_data_buffer_ptr;
  if (lStack_f8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_f8 = 0;
  local_var_e8 = 0;
  plocal_var_100 = &system_state_ptr;
  plocal_var_e0 = &system_data_buffer_ptr;
  if (lStack_d8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_d8 = 0;
  local_var_c8 = 0;
  plocal_var_e0 = &system_state_ptr;
  plocal_var_c0 = &system_data_buffer_ptr;
  if (lStack_b8 == 0) {
    return param_1;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
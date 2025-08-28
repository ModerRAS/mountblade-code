#define SystemInitializer FUN_1808fcb90  // 系统初始化器

// 渲染系统数据处理相关函数
#define RenderDataProcessor RenderDataProcessor  // 渲染数据处理器
#define RenderDataAllocator RenderDataAllocator  // 渲染数据分配器
#define RenderDataValidator RenderDataValidator  // 渲染数据验证器

// 渲染系统内存管理相关函数
#define RenderMemoryManager RenderMemoryManager  // 渲染内存管理器
#define RenderMemoryAllocator RenderMemoryAllocator  // 渲染内存分配器
#define RenderMemoryCleaner RenderMemoryCleaner  // 渲染内存清理器
#define RenderMemoryInitializer RenderMemoryInitializer  // 渲染内存初始化器

// 渲染系统资源管理相关函数
#define RenderResourceManager RenderResourceManager  // 渲染资源管理器
#define RenderResourceInitializer RenderResourceInitializer  // 渲染资源初始化器
#define RenderResourceOptimizer RenderResourceOptimizer  // 渲染资源优化器
#define RenderResourceProcessor RenderResourceProcessor  // 渲染资源处理器
#define RenderResourceValidator RenderResourceValidator  // 渲染资源验证器

// 渲染系统颜色和材质相关函数
#define RenderColorProcessor RenderColorProcessor  // 渲染颜色处理器
#define RenderColorExtractor RenderColorExtractor  // 渲染颜色提取器

// 渲染系统对象管理相关函数
#define RenderObjectManager RenderObjectManager  // 渲染对象管理器
#define RenderObjectInitializer RenderObjectInitializer  // 渲染对象初始化器
#define RenderObjectProcessor RenderObjectProcessor  // 渲染对象处理器

// 渲染系统状态管理相关函数
#define RenderStateManager RenderStateManager  // 渲染状态管理器
#define RenderStateCleaner RenderStateCleaner  // 渲染状态清理器

// 渲染系统高级功能相关函数
#define RenderAdvancedProcessor RenderAdvancedProcessor  // 渲染高级处理器
#define RenderAdvancedInitializer RenderAdvancedInitializer  // 渲染高级初始化器
#define RenderAdvancedOptimizer RenderAdvancedOptimizer  // 渲染高级优化器
#define RenderAdvancedValidator RenderAdvancedValidator  // 渲染高级验证器

// 渲染系统缓冲区管理相关函数
#define RenderBufferManager RenderBufferManager  // 渲染缓冲区管理器
#define RenderBufferCleaner RenderBufferCleaner  // 渲染缓冲区清理器

// 渲染系统控制相关函数
#define RenderSystemController RenderSystemController  // 渲染系统控制器
#define RenderSystemFinalizer RenderSystemFinalizer  // 渲染系统终结器

// 渲染系统几何处理相关函数
#define RenderGeometryProcessor RenderGeometryProcessor  // 渲染几何处理器

// 系统核心功能相关函数
#define SystemCoreProcessor SystemCoreProcessor  // 系统核心处理器

// 主要渲染功能函数
#define RenderMainProcessor FUN_180541920  // 渲染主处理器
#define RenderSceneProcessor FUN_180542260  // 渲染场景处理器
#define RenderWorldProcessor FUN_180542286  // 渲染世界处理器
#define RenderNullProcessor FUN_1805422e2  // 渲染空处理器
#define RenderComplexProcessor FUN_1805422f0  // 渲染复杂处理器
#define RenderFinalProcessor FUN_180542ed0  // 渲染最终处理器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part514_sub001.c - 7 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part514.c - 7 个函数


// 函数: void FUN_180541920(int64_t param_1,int64_t param_2)
void FUN_180541920(int64_t param_1,int64_t param_2)

{
  char cVar1;
  uint64_t uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int32_t *puVar8;
  float *pfVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int32_t uVar17;
  float fVar18;
  int32_t uVar19;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  float fStack_180;
  int32_t uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int32_t uStack_fc;
  uint64_t uStack_f8;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int8_t auStack_c8 [16];
  int8_t auStack_b8 [120];
  
  uStack_f8 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x48) < render_system_config_memory) && (SystemInitializer(&system_ptr_9f68), render_system_config_memory == -1)) {



// 函数: void FUN_180542260(int64_t param_1)
void FUN_180542260(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(int64_t *)(param_1 + 0x818) - *(int64_t *)(param_1 + 0x810) >> 3 != 0) {
    do {
      uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
      RenderGeometryProcessor(*(uint64_t *)(uVar2 + *(int64_t *)(param_1 + 0x810)),0,0,uVar1,uVar1,0);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0x818) - *(int64_t *)(param_1 + 0x810) >> 3));
  }
  return;
}






// 函数: void FUN_180542286(void)
void FUN_180542286(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uint64_t uVar2;
  uint unaff_EDI;
  int8_t uStack0000000000000028;
  
  uVar2 = (uint64_t)unaff_EDI;
  do {
    uStack0000000000000028 = 0;
    uVar1 = *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x8a8) + 0x260);
    RenderGeometryProcessor(*(uint64_t *)(uVar2 + *(int64_t *)(unaff_RBX + 0x810)),0,0,uVar1,uVar1);
    uVar2 = uVar2 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x818) - *(int64_t *)(unaff_RBX + 0x810) >> 3));
  return;
}






// 函数: void FUN_1805422e2(void)
void FUN_1805422e2(void)

{
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805422f0(int64_t param_1,uint *param_2,float *param_3,uint64_t param_4)
void FUN_1805422f0(int64_t param_1,uint *param_2,float *param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t ******pppppplVar2;
  int64_t *****ppppplVar3;
  int64_t *plVar4;
  float *pfVar5;
  int64_t lVar6;
  int64_t *******ppppppplVar7;
  uint uVar8;
  int64_t ******pppppplVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *******ppppppplVar12;
  int64_t lVar13;
  int64_t *******ppppppplVar14;
  int64_t *plVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  int64_t ******pppppplVar18;
  uint64_t *puVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  float fVar22;
  int8_t auStack_1f8 [32];
  int64_t *******ppppppplStack_1d8;
  int64_t *******ppppppplStack_1d0;
  int64_t *******ppppppplStack_1c8;
  uint64_t uStack_1c0;
  uint64_t **ppuStack_1b8;
  int64_t *******ppppppplStack_1a8;
  int32_t uStack_1a0;
  int64_t *plStack_198;
  int64_t *******ppppppplStack_190;
  uint64_t uStack_188;
  float fStack_180;
  float fStack_17c;
  uint64_t uStack_178;
  int64_t *******ppppppplStack_170;
  float *pfStack_168;
  int64_t *******ppppppplStack_160;
  int64_t *******ppppppplStack_158;
  int64_t ******pppppplStack_150;
  uint64_t *puStack_148;
  uint64_t *puStack_140;
  uint64_t *puStack_138;
  int32_t uStack_130;
  int64_t *******ppppppplStack_128;
  int64_t *******ppppppplStack_120;
  int64_t *plStack_118;
  int64_t ******pppppplStack_110;
  float *pfStack_108;
  int64_t *******ppppppplStack_100;
  int64_t ******pppppplStack_f8;
  int64_t lStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  int64_t *******ppppppplStack_d8;
  float **ppfStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_78 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1f8;
  ppppppplVar14 = (int64_t *******)0x0;
  uStack_1a0 = 0;
  fStack_c4 = param_3[1];
  fStack_c0 = param_3[2];
  fStack_bc = param_3[3];
  uStack_b8 = *(uint64_t *)(param_3 + 4);
  uStack_b0 = *(uint64_t *)(param_3 + 6);
  uStack_a8 = *(uint64_t *)(param_3 + 8);
  uStack_a0 = *(uint64_t *)(param_3 + 10);
  uStack_98 = *(uint64_t *)(param_3 + 0xc);
  uStack_90 = *(uint64_t *)(param_3 + 0xe);
  uStack_88 = *(uint64_t *)(param_3 + 0x10);
  uStack_80 = *(uint64_t *)(param_3 + 0x12);
  fStack_c8 = (float)(int)*param_3;
  lStack_f0 = param_1;
  uStack_e8 = param_4;
  pppppplVar9 = (int64_t ******)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x570,4,3);
  *(int32_t *)(pppppplVar9 + 0xad) = 0x41c64e6d;
  *(int8_t *)((int64_t)pppppplVar9 + 0x56c) = 0;
  ppppppplStack_1d8._0_4_ = param_2[7];
  pppppplStack_f8 = pppppplVar9;
  RenderDataProcessor(pppppplVar9,param_2[9],param_2[8],&fStack_c8);
  ppppppplStack_1d8 =
       (int64_t *******)
       CONCAT44(ppppppplStack_1d8._4_4_,*(int32_t *)((int64_t)pppppplVar9 + 0x55c));
  RenderColorProcessor(0x180c95de0,*(int32_t *)(pppppplVar9 + 2),
                *(int32_t *)((int64_t)pppppplVar9 + 0x14),
                *(int32_t *)((int64_t)pppppplVar9 + 0x53c));
  pppppplVar2 = *(int64_t *******)(param_1 + 0x260);
  pppppplStack_150 = pppppplVar2;
  if ((*param_2 & 0x20) != 0) {
    ppppppplStack_1d8 = (int64_t *******)CONCAT44(ppppppplStack_1d8._4_4_,param_2[2]);
    uVar10 = RenderResourceProcessor(0x180c95de0,param_2[9],param_2[8],
                           *(int32_t *)((int64_t)pppppplVar9 + 0x53c));
    uVar11 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    ppppppplVar12 = (int64_t *******)RenderObjectManager(uVar11);
    ppppppplStack_170 = ppppppplVar12;
    if (ppppppplVar12 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    }
    uStack_1a0 = 1;
    RenderObjectProcessor(uVar10,ppppppplVar12,1);
    fVar22 = *(float *)(pppppplVar9 + 0xa8);
    if (0.99 <= fVar22) {
      fVar22 = 0.99;
    }
    ppppplVar3 = (*ppppppplVar12)[0x21];
    uVar8 = RenderColorExtractor(0x180c95de0,pppppplVar9);
    fStack_17c = (float)(uVar8 >> 0x18) * 0.003921569;
    uStack_188 = (int64_t *******)
                 CONCAT44((float)(uVar8 >> 8 & 0xff) * 0.003921569,
                          (float)(uVar8 >> 0x10 & 0xff) * 0.003921569);
    fStack_180 = (float)(uVar8 & 0xff) * 0.003921569;
    (*(code *)ppppplVar3)(ppppppplVar12,&uStack_188);
    fStack_17c = (float)(-(int)(fVar22 * fVar22 * 255.0) - 1U & 0xff) * 0.003921569;
    uStack_188 = (int64_t *******)0x0;
    fStack_180 = 0.0;
    pppppplVar18 = ppppppplVar12[7];
    if (pppppplVar18 < ppppppplVar12[8]) {
      do {
        ppppplVar3 = *pppppplVar18;
        ppppplVar3[0x49] = (int64_t ****)0x0;
        ppppplVar3[0x4a] = (int64_t ****)((uint64_t)(uint)fStack_17c << 0x20);
        pppppplVar18 = pppppplVar18 + 2;
      } while (pppppplVar18 < ppppppplVar12[8]);
    }
    RenderStateManager(pppppplVar2,ppppppplVar12);
    if (param_2[1] != 0) {
      ppppppplStack_1d8 =
           (int64_t *******)
           CONCAT44(ppppppplStack_1d8._4_4_,*(int32_t *)((int64_t)pppppplVar9 + 0x53c));
      lVar13 = RenderResourceValidator(0x180c95de0,param_2[9],param_2[8]);
      if (lVar13 != 0) {
        RenderObjectInitializer(lVar13,&uStack_178);
        ppppppplStack_1a8 = uStack_178;
        if (uStack_178 != (int64_t *******)0x0) {
          (*(code *)(*uStack_178)[5])();
        }
        ppppppplStack_158 = (int64_t *******)&ppppppplStack_1a8;
        RenderStateManager(pppppplVar2,ppppppplStack_1a8);
        if (ppppppplStack_1a8 != (int64_t *******)0x0) {
          (*(code *)(*ppppppplStack_1a8)[7])();
        }
        if (uStack_178 != (int64_t *******)0x0) {
          (*(code *)(*uStack_178)[7])();
        }
      }
    }
    uStack_1a0 = 0;
    (*(code *)(*ppppppplVar12)[7])(ppppppplVar12);
  }
  ppppppplStack_128 = (int64_t *******)0x0;
  ppppppplStack_120 = (int64_t *******)0x0;
  if ((*param_2 & 0x80) != 0) {
    uVar10 = RenderResourceOptimizer(0x180c95de0,param_2[9],param_2[8],
                           *(int32_t *)((int64_t)pppppplVar9 + 0x53c));
    uVar11 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    ppppppplVar14 = (int64_t *******)RenderObjectManager(uVar11);
    ppppppplStack_190 = ppppppplVar14;
    ppppppplStack_128 = ppppppplVar14;
    if (ppppppplVar14 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplVar14)[5])(ppppppplVar14);
    }
    uStack_1a0 = 2;
    RenderObjectProcessor(uVar10,ppppppplVar14,1);
    ppppppplStack_190 = (int64_t *******)0x0;
    plStack_198 = (int64_t *)0x0;
    uStack_1a0 = 0;
    ppppplVar3 = (*ppppppplVar14)[0x21];
    ppppppplStack_120 = ppppppplVar14;
    uVar8 = RenderColorExtractor(0x180c95de0,pppppplVar9);
    fStack_17c = (float)(uVar8 >> 0x18) * 0.003921569;
    uStack_188 = (int64_t *******)
                 CONCAT44((float)(uVar8 >> 8 & 0xff) * 0.003921569,
                          (float)(uVar8 >> 0x10 & 0xff) * 0.003921569);
    fStack_180 = (float)(uVar8 & 0xff) * 0.003921569;
    (*(code *)ppppplVar3)(ppppppplVar14,&uStack_188);
    ppppppplStack_1a8 = ppppppplVar14;
    (*(code *)(*ppppppplVar14)[5])(ppppppplVar14);
    ppppppplStack_170 = (int64_t *******)&ppppppplStack_1a8;
    RenderStateManager(pppppplVar2,ppppppplStack_1a8);
    if (ppppppplStack_1a8 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_1a8)[7])();
    }
  }
  if ((*param_2 & 0x100) != 0) {
    uVar10 = RenderResourceInitializer(0x180c95de0,param_2[9],param_2[8],
                           *(int32_t *)((int64_t)pppppplVar9 + 0x53c));
    uVar11 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    ppppppplVar12 = (int64_t *******)RenderObjectManager(uVar11);
    ppppppplStack_170 = ppppppplVar12;
    if (ppppppplVar12 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    }
    uStack_1a0 = 4;
    RenderObjectProcessor(uVar10,ppppppplVar12,1);
    ppppplVar3 = (*ppppppplVar12)[0x21];
    uVar8 = RenderColorExtractor(0x180c95de0,pppppplVar9);
    fStack_17c = (float)(uVar8 >> 0x18) * 0.003921569;
    uStack_188 = (int64_t *******)
                 CONCAT44((float)(uVar8 >> 8 & 0xff) * 0.003921569,
                          (float)(uVar8 >> 0x10 & 0xff) * 0.003921569);
    fStack_180 = (float)(uVar8 & 0xff) * 0.003921569;
    (*(code *)ppppplVar3)(ppppppplVar12,&uStack_188);
    ppppppplStack_1a8 = ppppppplVar12;
    (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    ppppppplStack_158 = (int64_t *******)&ppppppplStack_1a8;
    RenderStateManager(pppppplVar2,ppppppplStack_1a8);
    if (ppppppplStack_1a8 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_1a8)[7])();
    }
    uStack_1a0 = 0;
    (*(code *)(*ppppppplVar12)[7])(ppppppplVar12);
  }
  ppppppplVar12 = (int64_t *******)0x0;
  ppppppplStack_158 = (int64_t *******)0x0;
  if ((*param_2 & 1) != 0) {
    if (((param_2[3] & 0xfffffffa) == 0) && (param_2[3] != 5)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    uVar10 = RenderDataAllocator(pppppplVar9,uVar10);
    plStack_118 = (int64_t *)0x0;
    pppppplStack_110 = (int64_t ******)0x0;
    pfStack_108 = (float *)0x0;
    ppppppplStack_100 = (int64_t *******)0x0;
    plVar15 = (int64_t *)RenderMemoryManager(uVar10,&plStack_198,pppppplVar9);
    plVar4 = (int64_t *)*plVar15;
    *plVar15 = 0;
    ppppppplStack_190 = (int64_t *******)0x0;
    uVar10 = extraout_XMM0_Qa;
    plStack_118 = plVar4;
    if (plStack_198 != (int64_t *)0x0) {
      uVar10 = (**(code **)(*plStack_198 + 0x38))();
    }
    plVar15 = (int64_t *)RenderMemoryAllocator(uVar10,&plStack_198,pppppplVar9,param_2[3]);
    pppppplVar2 = (int64_t ******)*plVar15;
    *plVar15 = 0;
    ppppppplStack_190 = (int64_t *******)0x0;
    uVar10 = extraout_XMM0_Qa_00;
    pppppplStack_110 = pppppplVar2;
    if (plStack_198 != (int64_t *)0x0) {
      uVar10 = (**(code **)(*plStack_198 + 0x38))();
    }
    puVar16 = (uint64_t *)RenderMemoryCleaner(uVar10,&plStack_198,pppppplVar9,param_2[4]);
    pfVar5 = (float *)*puVar16;
    *puVar16 = 0;
    ppppppplStack_190 = (int64_t *******)0x0;
    uVar10 = extraout_XMM0_Qa_01;
    pfStack_108 = pfVar5;
    if (plStack_198 != (int64_t *)0x0) {
      uVar10 = (**(code **)(*plStack_198 + 0x38))();
    }
    puVar16 = (uint64_t *)RenderMemoryInitializer(uVar10,&ppppppplStack_160,pppppplVar9);
    ppppppplVar12 = (int64_t *******)*puVar16;
    *puVar16 = 0;
    ppppppplStack_190 = (int64_t *******)0x0;
    ppppppplStack_170 = ppppppplVar12;
    ppppppplStack_100 = ppppppplVar12;
    if (ppppppplStack_160 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_160)[7])();
    }
    ppppppplStack_160 = (int64_t *******)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1a8,8,0x12);
    ppppppplStack_190 = (int64_t *******)&uStack_178;
    uStack_178 = ppppppplVar12;
    if (ppppppplVar12 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    }
    ppppppplStack_d8 = (int64_t *******)&ppppppplStack_1a8;
    ppppppplStack_1a8 = (int64_t *******)pppppplVar2;
    if (pppppplVar2 != (int64_t ******)0x0) {
      (*(code *)(*pppppplVar2)[5])(pppppplVar2);
    }
    ppfStack_d0 = &pfStack_168;
    pfStack_168 = pfVar5;
    if (pfVar5 != (float *)0x0) {
      (**(code **)(*(int64_t *)pfVar5 + 0x28))(pfVar5);
    }
    uStack_188 = (int64_t *******)&plStack_198;
    plStack_198 = plVar4;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    uStack_1c0 = CONCAT71(uStack_1c0._1_7_,1);
    ppppppplStack_1c8 = (int64_t *******)CONCAT71(ppppppplStack_1c8._1_7_,1);
    ppppppplStack_1d0 = (int64_t *******)0x0;
    ppppppplStack_1d8 = (int64_t *******)&uStack_178;
    ppppppplVar12 =
         (int64_t *******)
         RenderAdvancedProcessor(ppppppplStack_160,&plStack_198,&pfStack_168,&ppppppplStack_1a8);
    if (ppppppplVar12 != (int64_t *******)0x0) {
      ppppppplStack_160 = ppppppplVar12;
      (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    }
    ppppppplStack_160 = (int64_t *******)0x0;
    ppppppplStack_1a8 = ppppppplVar12;
    ppppppplStack_158 = ppppppplVar12;
    if (ppppppplVar12 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplVar12)[5])(ppppppplVar12);
    }
    uStack_188 = (int64_t *******)&ppppppplStack_1a8;
    RenderStateManager(pppppplStack_150,ppppppplStack_1a8);
    if (ppppppplStack_1a8 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_1a8)[7])();
    }
    *(int8_t *)(ppppppplVar12 + 0x32) = 0;
    (*(code *)(*ppppppplVar12)[0x38])(ppppppplVar12,0x40000000,0xffffffff);
    *(bool *)((int64_t)ppppppplVar12 + 0x194) = *(byte *)((int64_t)param_2 + 0x1a) != 0;
    *(bool *)((int64_t)ppppppplVar12 + 0x193) = *(byte *)((int64_t)param_2 + 0x19) != 0;
    uVar8 = param_2[4];
    uVar1 = param_2[3];
    ppppppplVar12[0x30] = pppppplStack_150;
    *(uint *)((int64_t)ppppppplVar12 + 0x174) = uVar1;
    *(uint *)(ppppppplVar12 + 0x2f) = uVar8;
    ppppppplVar12[0x31] = pppppplVar9;
    *(int8_t *)((int64_t)pppppplVar9 + 0x565) = 0;
    RenderSystemFinalizer(ppppppplVar12,pppppplStack_150,param_2[5]);
    RenderSystemController(ppppppplVar12,1);
    if (ppppppplStack_170 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplStack_170)[7])();
    }
    if (pfVar5 != (float *)0x0) {
      (**(code **)(*(int64_t *)pfVar5 + 0x38))(pfVar5);
    }
    if (pppppplVar2 != (int64_t ******)0x0) {
      (*(code *)(*pppppplVar2)[7])(pppppplVar2);
    }
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
  }
  puStack_148 = (uint64_t *)0x0;
  puStack_140 = (uint64_t *)0x0;
  puStack_138 = (uint64_t *)0x0;
  uStack_130 = 3;
  uVar8 = func_0x0001804bb9d0(*(int32_t *)(pppppplVar9 + 2),
                              *(int32_t *)((int64_t)pppppplVar9 + 0x14),
                              *(int32_t *)((int64_t)pppppplVar9 + 0x53c));
  puVar17 = (uint64_t *)0x180c95e98;
  puVar16 = render_system_memory;
  while (puVar16 != (uint64_t *)0x0) {
    if (*(uint *)(puVar16 + 4) < uVar8) {
      puVar16 = (uint64_t *)*puVar16;
    }
    else {
      puVar17 = puVar16;
      puVar16 = (uint64_t *)puVar16[1];
    }
  }
  ppppppplStack_1a8._0_4_ = uVar8;
  if ((puVar17 == (uint64_t *)0x180c95e98) || (uVar8 < *(uint *)(puVar17 + 4))) {
    ppppppplStack_1d8 = (int64_t *******)&ppppppplStack_1a8;
    puVar17 = (uint64_t *)RenderResourceManager(0x180c95e98,&uStack_188,0x180c95e98,puVar17);
    puVar17 = (uint64_t *)*puVar17;
  }
  ppppppplStack_170 = (int64_t *******)puVar17[5];
  lVar13 = (int64_t)*(int *)((int64_t)ppppppplStack_170 + 0x298);
  ppppppplStack_190 = (int64_t *******)lVar13;
  SystemCoreProcessor(&puStack_148,lVar13);
  ppppppplVar7 = ppppppplStack_170;
  uVar8 = param_2[4];
  ppppppplStack_1a8 = (int64_t *******)CONCAT44(ppppppplStack_1a8._4_4_,uVar8);
  puVar16 = puStack_148;
  if (0 < lVar13) {
    lVar20 = 0;
    pfStack_168 = (float *)((int64_t)pppppplVar9 + 0x3c);
    puVar17 = puStack_138;
    puVar19 = puStack_140;
    puVar21 = puStack_148;
    do {
      fVar22 = *pfStack_168;
      if ((uVar8 == 5) &&
         (*(char *)(*(int64_t *)((int64_t)ppppppplVar7 + 0x290) + 0x51 + lVar20) != '\0')) {
        fVar22 = 0.0;
      }
      lVar6 = *(int64_t *)((int64_t)ppppppplVar7 + 0x290);
      fVar22 = (*(float *)(lVar6 + 0x4c + lVar20) - *(float *)(lVar6 + 0x48 + lVar20)) * fVar22 +
               *(float *)(lVar6 + 0x48 + lVar20);
      puVar16 = puVar21;
      if (fVar22 != 0.0) {
        uStack_178 = (int64_t *******)CONCAT44(fVar22,*(int32_t *)(lVar6 + 0x44 + lVar20));
        if (puVar19 < puVar17) {
          *puVar19 = uStack_178;
          ppppppplStack_190 = (int64_t *******)lVar13;
        }
        else {
          ppppppplStack_170 = (int64_t *******)((int64_t)puVar19 - (int64_t)puVar21);
          if ((int64_t)ppppppplStack_170 >> 3 == 0) {
            plStack_198 = (int64_t *)0x1;
LAB_180542d7d:
            puVar16 = (uint64_t *)
                      CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)plStack_198 * 8,(int8_t)uStack_130)
            ;
          }
          else {
            plStack_198 = (int64_t *)(((int64_t)ppppppplStack_170 >> 3) * 2);
            if (plStack_198 != (int64_t *)0x0) goto LAB_180542d7d;
            puVar16 = (uint64_t *)0x0;
          }
          if (puVar21 != puVar19) {
                    // WARNING: Subroutine does not return
            memmove(puVar16,puVar21,ppppppplStack_170);
          }
          *puVar16 = uStack_178;
          if (puVar21 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar21);
          }
          puVar17 = puVar16 + (int64_t)plStack_198;
          puStack_148 = puVar16;
          puStack_138 = puVar17;
          puVar19 = puVar16;
        }
        puVar19 = puVar19 + 1;
        lVar13 = (int64_t)ppppppplStack_190;
        uVar8 = (uint)ppppppplStack_1a8;
        puStack_140 = puVar19;
      }
      pfStack_168 = pfStack_168 + 1;
      lVar20 = lVar20 + 0xa8;
      lVar13 = lVar13 + -1;
      puVar21 = puVar16;
      ppppppplStack_190 = (int64_t *******)lVar13;
    } while (lVar13 != 0);
    ppppppplStack_190 = (int64_t *******)0x0;
    ppppppplVar14 = ppppppplStack_128;
    pppppplVar9 = pppppplStack_f8;
  }
  ppuStack_1b8 = &puStack_148;
  uStack_1c0 = uStack_e8;
  ppppppplStack_1d8 =
       (int64_t *******)
       CONCAT44(ppppppplStack_1d8._4_4_,*(int32_t *)((int64_t)pppppplVar9 + 0x53c));
  ppppppplStack_1d0 = ppppppplVar12;
  ppppppplStack_1c8 = ppppppplVar14;
  RenderDataValidator(*(uint64_t *)(*(int64_t *)(lStack_f0 + 0x260) + 0x210),pppppplStack_150[0x41],
                *(int32_t *)(pppppplVar9 + 2),*(int32_t *)((int64_t)pppppplVar9 + 0x14));
  if (puVar16 == (uint64_t *)0x0) {
    if (ppppppplVar12 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplVar12)[7])(ppppppplVar12);
    }
    if (ppppppplVar14 != (int64_t *******)0x0) {
      (*(code *)(*ppppppplVar14)[7])(ppppppplVar14);
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_78 ^ (uint64_t)auStack_1f8);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar16);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180542ed0(int64_t param_1,uint *param_2,float *param_3,int8_t param_4)
void FUN_180542ed0(int64_t param_1,uint *param_2,float *param_3,int8_t param_4)

{
  uint64_t *puVar1;
  code *pcVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  float fVar9;
  uint64_t uVar10;
  float fVar11;
  int8_t auStack_f8 [32];
  uint64_t **ppuStack_d8;
  uint64_t uStack_c8;
  float fStack_c0;
  float fStack_bc;
  uint64_t *puStack_b8;
  int64_t *plStack_b0;
  uint64_t uStack_a8;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint64_t uStack_48;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_c8 = (int64_t *)((uint64_t)uStack_c8 & 0xffffffff00000000);
  fStack_94 = param_3[1];
  fStack_90 = param_3[2];
  fStack_8c = param_3[3];
  uStack_88 = *(uint64_t *)(param_3 + 4);
  uStack_80 = *(uint64_t *)(param_3 + 6);
  uStack_78 = *(uint64_t *)(param_3 + 8);
  uStack_70 = *(uint64_t *)(param_3 + 10);
  uStack_68 = *(uint64_t *)(param_3 + 0xc);
  uStack_60 = *(uint64_t *)(param_3 + 0xe);
  fStack_58 = param_3[0x10];
  fStack_54 = param_3[0x11];
  fStack_50 = param_3[0x12];
  fStack_4c = param_3[0x13];
  fStack_98 = (float)(int)*param_3;
  lVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x570,4,3);
  *(int32_t *)(lVar4 + 0x568) = 0x41c64e6d;
  *(int8_t *)(lVar4 + 0x56c) = 0;
  ppuStack_d8._0_4_ = param_2[7];
  RenderDataProcessor(lVar4,param_2[9],param_2[8],&fStack_98);
  ppuStack_d8 = (uint64_t **)CONCAT44(ppuStack_d8._4_4_,*(int32_t *)(lVar4 + 0x55c));
  fVar9 = (float)RenderColorProcessor(0x180c95de0,*(int32_t *)(lVar4 + 0x10),
                               *(int32_t *)(lVar4 + 0x14),*(int32_t *)(lVar4 + 0x53c));
  fVar11 = *(float *)(param_1 + 0x8c0) - fVar9;
  if (((fVar11 <= -0.001) || (0.001 <= fVar11)) &&
     (*(float *)(param_1 + 0x8c0) = fVar9, render_system_memory != 0)) {
    *(int8_t *)(render_system_memory + 0x87b728) = 1;
  }
  *(int32_t *)(param_1 + 0x90c) = *(int32_t *)(lVar4 + 0x53c);
  uVar3 = func_0x0001804bb950(lVar4);
  puStack_b8 = (uint64_t *)CONCAT44(puStack_b8._4_4_,uVar3);
  puVar5 = (uint64_t *)0x180c95e98;
  puVar1 = render_system_memory;
  while (puVar1 != (uint64_t *)0x0) {
    if (*(uint *)(puVar1 + 4) < uVar3) {
      puVar1 = (uint64_t *)*puVar1;
    }
    else {
      puVar5 = puVar1;
      puVar1 = (uint64_t *)puVar1[1];
    }
  }
  if ((puVar5 == (uint64_t *)0x180c95e98) || (uVar3 < *(uint *)(puVar5 + 4))) {
    ppuStack_d8 = &puStack_b8;
    puVar5 = (uint64_t *)RenderResourceManager(0x180c95e98,&plStack_b0,0x180c95e98,puVar5);
    puVar5 = (uint64_t *)*puVar5;
  }
  uVar10 = func_0x000180544b60(param_1,(*(int64_t *)
                                         (*(int64_t *)(puVar5[5] + 0x3b8) +
                                         (int64_t)*(int *)(lVar4 + 0x24) * 8) - render_system_memory) /
                                       0x60,*(int32_t *)(lVar4 + 0x560));
  RenderAdvancedInitializer(uVar10,param_2,lVar4);
  RenderAdvancedOptimizer(param_1,param_2,lVar4);
  if ((*param_2 & 0x100) != 0) {
    uVar10 = RenderResourceInitializer(0x180c95de0,param_2[9],param_2[8],*(int32_t *)(lVar4 + 0x53c));
    uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    plVar7 = (int64_t *)RenderObjectManager(uVar6);
    plStack_b0 = plVar7;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    RenderObjectProcessor(uVar10,plVar7,1);
    pcVar2 = *(code **)(*plVar7 + 0x108);
    uVar3 = RenderColorExtractor(0x180c95de0,lVar4);
    fStack_bc = (float)(uVar3 >> 0x18) * 0.003921569;
    uStack_c8 = (int64_t *)
                CONCAT44((float)(uVar3 >> 8 & 0xff) * 0.003921569,
                         (float)(uVar3 >> 0x10 & 0xff) * 0.003921569);
    fStack_c0 = (float)(uVar3 & 0xff) * 0.003921569;
    (*pcVar2)(plVar7,&uStack_c8);
    puStack_b8 = &uStack_c8;
    uStack_c8 = plVar7;
    (**(code **)(*plVar7 + 0x28))(plVar7);
    RenderBufferManager(param_1,6,&uStack_c8);
    lVar8 = *(int64_t *)(param_1 + 0x8a8);
    if (lVar8 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x260);
    }
    RenderStateManager(lVar8,*(uint64_t *)(param_1 + 0x48));
    uStack_c8 = (int64_t *)((uint64_t)uStack_c8 & 0xffffffff00000000);
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  RenderBufferCleaner(param_1);
  if ((*param_2 & 1) != 0) {
    RenderAdvancedValidator(param_1,param_2,lVar4,param_4);
  }
  RenderBufferCleaner(param_1);
  RenderStateCleaner(*(uint64_t *)(param_1 + 0x8a8));
  RenderBufferCleaner(param_1);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





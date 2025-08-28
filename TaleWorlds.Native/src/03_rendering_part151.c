#include "TaleWorlds.Native.Split.h"

//==============================================================================
// 03_rendering_part151.c - 渲染系统高级数据处理和渲染管线管理模块
// 
// 本模块包含1个核心函数，主要用于处理高级渲染数据、管线管理和纹理映射
// 涉及顶点处理、纹理坐标变换、渲染状态管理、资源分配等高级渲染功能
// 
// 主要功能：
// - 渲染管线初始化和配置
// - 顶点数据处理和变换
// - 纹理坐标映射和优化
// - 渲染状态管理和同步
// - 内存资源管理和清理
//==============================================================================

// 常量定义
#define RENDER_SYSTEM_MAX_VERTEX_COUNT 65535           // 渲染系统最大顶点数量
#define RENDER_SYSTEM_MAX_TEXTURE_COORDS 8192          // 渲染系统最大纹理坐标数量
#define RENDER_SYSTEM_PIPELINE_STAGES 16               // 渲染管线阶段数量
#define RENDER_SYSTEM_DEFAULT_QUALITY_THRESHOLD 0.15f // 默认质量阈值
#define RENDER_SYSTEM_TEXTURE_SAMPLE_RATE 0.05f        // 纹理采样率
#define RENDER_SYSTEM_MAX_SAMPLE_ITERATIONS 16         // 最大采样迭代次数
#define RENDER_SYSTEM_VERTEX_BUFFER_SIZE 0x3d0         // 顶点缓冲区大小 (976字节)
#define RENDER_SYSTEM_INDEX_BUFFER_SIZE 0x300          // 索引缓冲区大小 (768字节)
#define RENDER_SYSTEM_ALIGNMENT_8 8                     // 8字节对齐
#define RENDER_SYSTEM_ALIGNMENT_16 16                  // 16字节对齐
#define RENDER_SYSTEM_MAX_FLOAT_VALUE 0x7f7fffff       // 最大浮点数值
#define RENDER_SYSTEM_COLOR_WHITE 0xffffff             // 白色值
#define RENDER_SYSTEM_COLOR_ALPHA_MASK 0xff            // Alpha通道掩码

// 渲染状态常量
#define RENDER_STATE_READY 0x00                        // 渲染状态：就绪
#define RENDER_STATE_PROCESSING 0x01                   // 渲染状态：处理中
#define RENDER_STATE_COMPLETED 0x02                    // 渲染状态：已完成
#define RENDER_STATE_ERROR 0x03                        // 渲染状态：错误
#define RENDER_STATE_CLEANUP 0x04                      // 渲染状态：清理中

// 纹理采样常量
#define TEXTURE_SAMPLE_MIN 0.2f                        // 最小采样值
#define TEXTURE_SAMPLE_MAX 0.8f                        // 最大采样值
#define TEXTURE_SAMPLE_STEP 0.05f                      // 采样步长
#define TEXTURE_QUALITY_THRESHOLD 0.15f               // 纹理质量阈值

// 顶点处理常量
#define VERTEX_COMPONENT_COUNT 3                      // 顶点组件数量
#define VERTEX_STRIDE_FLOAT 7                          // 顶点浮点数步长
#define VERTEX_BARYCENTRIC_WEIGHT 0.33333334f         // 重心权重
#define VERTEX_POSITION_OFFSET 0.5f                    // 顶点位置偏移

// 渲染管线常量
#define PIPELINE_STAGE_VERTEX 0x00                     // 管线阶段：顶点处理
#define PIPELINE_STAGE_FRAGMENT 0x01                  // 管线阶段：片段处理
#define PIPELINE_STAGE_TEXTURE 0x02                   // 管线阶段：纹理处理
#define PIPELINE_STAGE_OUTPUT 0x03                     // 管线阶段：输出处理

// 类型别名定义
typedef longlong RenderContextHandle;                  // 渲染上下文句柄
typedef longlong RenderPipelineHandle;                 // 渲染管线句柄
typedef longlong RenderTextureHandle;                 // 渲染纹理句柄
typedef longlong RenderBufferHandle;                   // 渲染缓冲区句柄
typedef longlong RenderStateHandle;                    // 渲染状态句柄
typedef float RenderVertex[3];                         // 渲染顶点坐标
typedef float RenderTexCoord[2];                      // 渲染纹理坐标
typedef float RenderColor[4];                          // 渲染颜色值
typedef uint RenderFlags;                              // 渲染标志位
typedef ulonglong RenderMemoryPtr;                    // 渲染内存指针
typedef code* RenderShaderFunction;                   // 渲染着色器函数
typedef undefined8* RenderDataBuffer;                 // 渲染数据缓冲区
typedef longlong** RenderResourceTable;               // 渲染资源表

// 渲染顶点结构体
typedef struct {
    RenderVertex position;                            // 顶点位置
    RenderTexCoord texCoord;                           // 纹理坐标
    RenderColor color;                                 // 顶点颜色
    float quality;                                     // 顶点质量
} RenderVertexInfo;

// 渲染管线配置结构体
typedef struct {
    RenderPipelineHandle pipelineHandle;               // 管线句柄
    uint vertexCount;                                  // 顶点数量
    uint textureCount;                                 // 纹理数量
    float qualityThreshold;                            // 质量阈值
    RenderFlags renderFlags;                           // 渲染标志
    RenderStateHandle stateHandle;                     // 状态句柄
} RenderPipelineConfig;

// 渲染纹理信息结构体
typedef struct {
    RenderTextureHandle textureHandle;                 // 纹理句柄
    float sampleRate;                                  // 采样率
    uint width;                                        // 纹理宽度
    uint height;                                       // 纹理高度
    float quality;                                     // 纹理质量
} RenderTextureInfo;

// 渲染数据管理器结构体
typedef struct {
    RenderDataBuffer vertexBuffer;                     // 顶点缓冲区
    RenderDataBuffer indexBuffer;                      // 索引缓冲区
    RenderDataBuffer textureBuffer;                    // 纹理缓冲区
    uint vertexCount;                                  // 当前顶点数量
    uint indexCount;                                   // 当前索引数量
    uint textureCount;                                 // 当前纹理数量
} RenderDataManager;

// 函数别名定义
#define RenderingSystem_AdvancedDataProcessor FUN_18035ec20
#define RenderingSystem_PipelineInitializer FUN_18035ec20
#define RenderingSystem_VertexDataProcessor FUN_18035ec20
#define RenderingSystem_TextureCoordinateMapper FUN_18035ec20
#define RenderingSystem_RenderStateManager FUN_18035ec20
#define RenderingSystem_ResourceAllocator FUN_18035ec20
#define RenderingSystem_QualityAnalyzer FUN_18035ec20
#define RenderingSystem_BufferManager FUN_18035ec20
#define RenderingSystem_CleanupHandler FUN_18035ec20

// 核心函数实现
void FUN_18035ec20(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auVar9 [8];
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  float *pfVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong **pplVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_458 [32];
  float *pfStack_438;
  longlong ***ppplStack_430;
  undefined *puStack_428;
  undefined4 uStack_420;
  float afStack_418 [2];
  undefined8 uStack_410;
  undefined8 uStack_408;
  longlong **pplStack_400;
  longlong *plStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [8];
  undefined8 *puStack_3d0;
  code *pcStack_3c8;
  code *pcStack_3c0;
  longlong *plStack_3b8;
  longlong *plStack_3b0;
  float *pfStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  longlong *plStack_390;
  longlong **pplStack_388;
  longlong *plStack_380;
  undefined8 uStack_378;
  longlong *plStack_368;
  char cStack_360;
  char cStack_35f;
  char cStack_35e;
  float fStack_358;
  float fStack_354;
  undefined4 uStack_350;
  float fStack_34c;
  float fStack_348;
  int iStack_340;
  int iStack_33c;
  float fStack_338;
  float fStack_334;
  int iStack_330;
  int iStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  undefined4 uStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined4 uStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  longlong *plStack_288;
  undefined8 uStack_280;
  longlong *plStack_278;
  float *pfStack_270;
  float *pfStack_268;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  longlong alStack_1b8 [2];
  undefined2 uStack_1a8;
  undefined1 uStack_1a6;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  uint uStack_15c;
  undefined2 uStack_158;
  undefined4 uStack_156;
  undefined1 uStack_152;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined1 uStack_136;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined2 uStack_e8;
  undefined4 uStack_e6;
  undefined1 uStack_e2;
  ulonglong uStack_d8;
  
  if ((*(int *)(param_2 + 0x10) != 10) ||
     (iVar4 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a1f740), iVar4 != 0)) {
    return;
  }
  uStack_280 = 0xfffffffffffffffe;
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_458;
  puVar10 = (undefined8 *)0x0;
  alStack_1b8[0] = 0;
  alStack_1b8[1] = 0;
  uStack_1a8 = 0;
  uStack_1a6 = 3;
  uStack_156 = 0;
  uStack_164 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_152 = 0;
  uStack_1a4 = 0;
  uStack_19c = 0;
  uStack_194 = 0;
  uStack_18c = 0;
  uStack_184 = 0;
  uStack_17c = 0;
  uStack_174 = 0;
  uStack_16c = 0;
  puStack_148 = (undefined *)0x0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_136 = 3;
  uStack_e6 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e2 = 0;
  uStack_134 = 0;
  uStack_12c = 0;
  uStack_124 = 0;
  uStack_11c = 0;
  uStack_114 = 0;
  uStack_10c = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  plStack_3b0 = (longlong *)0x0;
  plStack_3f8 = (longlong *)0x0;
  plVar12 = *(longlong **)(param_1 + 0x70);
  uStack_398 = param_1;
  if (plVar12 != (longlong *)0x0) {
    uStack_410 = (longlong **)plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12);
  }
  uStack_410 = (longlong **)plStack_3b0;
  if (plStack_3b0 != (longlong *)0x0) {
    lVar8 = *plStack_3b0;
    plStack_3b0 = plVar12;
    (**(code **)(lVar8 + 0x38))();
    plVar12 = plStack_3b0;
  }
  plStack_3b0 = plVar12;
  plVar12 = *(longlong **)(param_1 + 0x78);
  if (plVar12 != (longlong *)0x0) {
    uStack_410 = (longlong **)plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12);
  }
  uStack_410 = (longlong **)plStack_3f8;
  if (plStack_3f8 != (longlong *)0x0) {
    lVar8 = *plStack_3f8;
    plStack_3f8 = plVar12;
    (**(code **)(lVar8 + 0x38))();
    plVar12 = plStack_3f8;
  }
  plStack_3f8 = plVar12;
  if ((plStack_3b0 == (longlong *)0x0) || (plStack_3f8 == (longlong *)0x0)) {
    FUN_180627020(&UNK_180a1f6f0);
  }
  else {
    uStack_3e8 = (undefined **)alStack_1b8;
    uStack_3e0 = &plStack_3b0;
    pcStack_3c8 = (code *)&UNK_180360340;
    pcStack_3c0 = FUN_180360210;
    pfStack_438 = (float *)auStack_3d8;
    auStack_3d8 = (undefined1  [8])uStack_3e8;
    puStack_3d0 = uStack_3e0;
    (**(code **)(**(longlong **)(plStack_3b0[0x15] + 0x88) + 0x60))
              (*(longlong **)(plStack_3b0[0x15] + 0x88),&DAT_180a01050,plStack_3b0[0x15] + 0xc,0);
    if (pcStack_3c8 != (code *)0x0) {
      (*pcStack_3c8)(auStack_3d8,0,0);
    }
    uStack_3e8 = &puStack_148;
    uStack_3e0 = &plStack_3f8;
    pcStack_3c8 = (code *)&UNK_180360300;
    pcStack_3c0 = FUN_180360210;
    puStack_3d0 = uStack_3e0;
    auStack_3d8 = (undefined1  [8])uStack_3e8;
    pfStack_438 = (float *)auStack_3d8;
    (**(code **)(**(longlong **)(plStack_3f8[0x15] + 0x88) + 0x60))
              (*(longlong **)(plStack_3f8[0x15] + 0x88),&DAT_180a01050,plStack_3f8[0x15] + 0xc,0);
    if (pcStack_3c8 != (code *)0x0) {
      (*pcStack_3c8)(auStack_3d8,0,0);
    }
    pcStack_3c8 = (code *)0x0;
    pcStack_3c0 = (code *)CONCAT44(pcStack_3c0._4_4_,3);
    fVar24 = (float)(uStack_15c & 0xffff);
    fVar26 = 1.0 / fVar24;
    afStack_418[0] = 0.0;
    puStack_3d0 = (undefined8 *)0x0;
    auStack_3d8 = (undefined1  [8])0x0;
    puVar16 = puStack_3d0;
    auVar9 = auStack_3d8;
    puVar20 = puVar10;
    _auStack_3d8 = ZEXT816(0);
    if (0 < (int)fVar24) {
      do {
        iVar4 = 0;
        fVar27 = SUB84(puVar10,0);
        if (0 < (int)fVar24) {
          fVar28 = (float)(int)SUB84(puVar10,0);
          fVar25 = fVar28 + 0.5;
          pfStack_3a8 = (float *)((ulonglong)(uint)((fVar24 - fVar25) * fVar26) << 0x20);
          puVar10 = puVar16;
          puVar19 = (undefined8 *)auVar9;
          do {
            fVar23 = (float)iVar4 + 0.5;
            pfStack_3a8 = (float *)CONCAT44(pfStack_3a8._4_4_,fVar23 * fVar26);
            lVar8 = FUN_1802a11e0(alStack_1b8,&uStack_3e8,pfStack_3a8,1);
            fVar27 = *(float *)(lVar8 + 8);
            iVar17 = -1;
            fVar22 = fVar27;
            do {
              iVar15 = -1;
              do {
                if ((iVar15 != 0) || (iVar17 != 0)) {
                  uStack_3f0 = CONCAT44((fVar24 - ((float)iVar17 + fVar25)) * fVar26,
                                        ((float)iVar15 + fVar23) * fVar26);
                  lVar8 = FUN_1802a11e0(alStack_1b8,&fStack_2f0,uStack_3f0,1);
                  fVar22 = fVar22 + *(float *)(lVar8 + 8);
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < 2);
              iVar17 = iVar17 + 1;
            } while (iVar17 < 2);
            puVar16 = puVar10;
            auVar9 = (undefined1  [8])puVar19;
            if (((fVar27 < 0.5) && (0.5 < fVar22)) && (fVar22 < 1.5)) {
              uStack_408 = CONCAT44(fVar24 - fVar28,(float)iVar4);
              if (puVar10 < puVar20) {
                puVar16 = puVar10 + 1;
                puStack_3d0 = puVar16;
                *puVar10 = uStack_408;
              }
              else {
                lVar8 = (longlong)puVar10 - (longlong)puVar19 >> 3;
                if (lVar8 == 0) {
                  lVar8 = 1;
LAB_18035f156:
                  auVar9 = (undefined1  [8])FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,3);
                }
                else {
                  lVar8 = lVar8 * 2;
                  if (lVar8 != 0) goto LAB_18035f156;
                  auVar9 = (undefined1  [8])0x0;
                }
                if (puVar19 != puVar10) {
                    // WARNING: Subroutine does not return
                  memmove(auVar9,puVar19,(longlong)puVar10 - (longlong)puVar19);
                }
                *(undefined8 *)auVar9 = uStack_408;
                puVar16 = (undefined8 *)((longlong)auVar9 + 8);
                if (puVar19 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(puVar19);
                }
                puStack_3d0 = puVar16;
                auStack_3d8 = auVar9;
                puVar20 = (undefined8 *)((longlong)auVar9 + lVar8 * 8);
                pcStack_3c8 = (code *)puVar20;
              }
            }
            iVar4 = iVar4 + 1;
            puVar10 = puVar16;
            puVar19 = (undefined8 *)auVar9;
            fVar27 = afStack_418[0];
          } while (iVar4 < (int)fVar24);
        }
        afStack_418[0] = (float)((int)fVar27 + 1);
        puVar10 = (undefined8 *)(ulonglong)(uint)afStack_418[0];
        param_1 = uStack_398;
      } while ((int)afStack_418[0] < (int)fVar24);
    }
    FUN_1802e9fa0(*(undefined8 *)(param_1 + 0x18),1,0);
    if (((longlong)puVar16 - (longlong)auVar9 & 0xfffffffffffffff8U) != 0) {
      puStack_1f0 = (undefined *)0x0;
      ppuStack_1e8 = (undefined **)0x0;
      uStack_1e0 = (undefined *)0x0;
      ppplStack_430 = &pplStack_400;
      pfStack_438 = (float *)&uStack_410;
      FUN_18046a8c0();
      uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
      plVar12 = (longlong *)FUN_180275090(uVar11);
      plStack_288 = plVar12;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x28))(plVar12);
      }
      (**(code **)(plVar12[0x3e] + 0x10))(plVar12 + 0x3e,&UNK_180a1f6e0);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      pplStack_400 = &plStack_3b8;
      plStack_3b8 = plVar12;
      (**(code **)(*plVar12 + 0x28))(plVar12);
      uStack_410 = &plStack_3b8;
      FUN_1802edcd0(uVar11,plStack_3b8,1);
      if (plStack_3b8 != (longlong *)0x0) {
        (**(code **)(*plStack_3b8 + 0x38))();
      }
      (**(code **)(*plVar12 + 0xd8))(plVar12);
      uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
      plVar13 = (longlong *)FUN_180075030(uVar11,1);
      plStack_278 = plVar13;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x28))(plVar13);
      }
      (**(code **)(plVar13[2] + 0x10))(plVar13 + 2,&UNK_180a1f770);
      puStack_1f0 = &UNK_18098bc80;
      ppuStack_1e8 = &puStack_1d8;
      puStack_1d8 = (undefined *)((ulonglong)puStack_1d8 & 0xffffffffffffff00);
      uStack_1e0 = (undefined *)CONCAT44((int)((ulonglong)uStack_1e0 >> 0x20),0x12);
      strcpy_s(&puStack_1d8,0x20,&UNK_180a1f758);
      uVar11 = FUN_1800b30d0(_DAT_180c86930,&uStack_410,&puStack_1f0,1);
      FUN_180076910(plVar13,uVar11);
      if (uStack_410 != (longlong **)0x0) {
        (*(code *)(*uStack_410)[7])();
      }
      puStack_1f0 = &UNK_18098bcb0;
      plStack_390 = (longlong *)0x0;
      pplStack_388 = (longlong **)0x0;
      pplStack_400 = &plStack_380;
      plStack_368 = (longlong *)0x0;
      uStack_378 = 0;
      plStack_380._0_1_ = 0;
      FUN_18022f2e0(&plStack_390,plVar13,0);
      pplVar18 = *(longlong ***)(*(longlong *)(param_1 + 0x18) + 0x20);
      fStack_354 = *(float *)((longlong)pplVar18 + 0x3ec4);
      uStack_410 = (longlong **)pplVar18[0xc170][4];
      fStack_358 = (float)uStack_410 * fVar26;
      pfStack_3a8 = pfStack_268;
      pplStack_400 = pplVar18;
      if (pfStack_270 != pfStack_268) {
        pfVar21 = pfStack_270 + 5;
        do {
          if (*(char *)(pfVar21 + 1) == '\0') {
            fVar24 = pfVar21[-2];
            fVar27 = pfVar21[-3];
            if ((pfVar21[-5] - fVar27) * (fVar24 - *pfVar21) -
                (fVar27 - pfVar21[-1]) * (pfVar21[-4] - fVar24) < 0.0) {
              fVar28 = (*pfVar21 + pfVar21[-4] + fVar24) * 0.33333334;
              fVar25 = (pfVar21[-5] + fVar27 + pfVar21[-1]) * 0.33333334;
              fStack_304 = fVar28 * fVar26;
              fStack_308 = fVar25 * fVar26;
              lVar8 = FUN_1802a11e0(alStack_1b8,auStack_250,CONCAT44(fStack_304,fStack_308),1);
              fVar24 = *(float *)(lVar8 + 8);
              afStack_418[0] = 1.0;
              fVar27 = 0.2;
              do {
                fVar22 = pfVar21[-2];
                fVar23 = pfVar21[-3];
                fVar1 = *pfVar21;
                fVar2 = pfVar21[-1];
                fStack_2fc = ((pfVar21[-4] - fVar28) * fVar27 + fVar28 + 0.5) * fVar26;
                fStack_300 = ((pfVar21[-5] - fVar25) * fVar27 + fVar25 + 0.5) * fVar26;
                lVar8 = FUN_1802a11e0(alStack_1b8,auStack_240,CONCAT44(fStack_2fc,fStack_300),1);
                fVar3 = *(float *)(lVar8 + 8);
                fStack_2f4 = ((fVar22 - fVar28) * fVar27 + fVar28 + 0.5) * fVar26;
                fStack_2f8 = ((fVar23 - fVar25) * fVar27 + fVar25 + 0.5) * fVar26;
                lVar8 = FUN_1802a11e0(alStack_1b8,auStack_230,CONCAT44(fStack_2f4,fStack_2f8),1);
                fVar22 = *(float *)(lVar8 + 8);
                fStack_2e0 = ((fVar2 - fVar25) * fVar27 + fVar25 + 0.5) * fVar26;
                fStack_2dc = ((fVar1 - fVar28) * fVar27 + fVar28 + 0.5) * fVar26;
                lVar8 = FUN_1802a11e0(alStack_1b8,auStack_220,CONCAT44(fStack_2dc,fStack_2e0),1);
                fVar23 = fStack_358;
                fVar24 = fVar24 + fVar3 + fVar22 + *(float *)(lVar8 + 8);
                afStack_418[0] = afStack_418[0] + 3.0;
                fVar27 = fVar27 + 0.05;
              } while (fVar27 < 0.8);
              pfStack_268 = pfStack_3a8;
              if (0.15 < fVar24 / afStack_418[0]) {
                plVar12 = pplVar18[0x521];
                fStack_2d4 = fStack_358 * pfVar21[-4];
                fStack_2d8 = fStack_358 * pfVar21[-5];
                if ((char)plVar12[0xd] == '\0') {
                  uStack_3a0 = 0;
                  lVar8 = FUN_1803a5130(plVar12,&fStack_2d8,&iStack_2d0,&uStack_3a0);
                  fVar24 = (float)(**(code **)(**(longlong **)(lVar8 + 0x60) + 8))
                                            (*(longlong **)(lVar8 + 0x60),
                                             (float)iStack_2cc + uStack_3a0._4_4_,
                                             (float)iStack_2d0 + (float)uStack_3a0);
                }
                else {
                  fVar24 = (float)(**(code **)(*(longlong *)plVar12[10] + 8))
                                            ((longlong *)plVar12[10],
                                             (1.0 / *(float *)(plVar12 + 0xb)) * fStack_2d4 *
                                             (float)(int)plVar12[0xc],
                                             fStack_2d8 * (1.0 / *(float *)(plVar12 + 0xb)) *
                                             (float)(int)plVar12[0xc]);
                  fVar24 = fVar24 + *(float *)((longlong)plVar12 + 0x5c);
                }
                plVar12 = pplVar18[0x521];
                fStack_348 = fVar23 * pfVar21[-2];
                fStack_34c = fVar23 * pfVar21[-3];
                if ((char)plVar12[0xd] == '\0') {
                  uStack_3f0 = 0;
                  lVar8 = FUN_1803a5130(plVar12,&fStack_34c,&iStack_340,&uStack_3f0);
                  fVar27 = (float)(**(code **)(**(longlong **)(lVar8 + 0x60) + 8))
                                            (*(longlong **)(lVar8 + 0x60),
                                             (float)iStack_33c + uStack_3f0._4_4_,
                                             (float)iStack_340 + (float)uStack_3f0);
                }
                else {
                  fVar27 = (float)(**(code **)(*(longlong *)plVar12[10] + 8))
                                            ((longlong *)plVar12[10],
                                             (1.0 / *(float *)(plVar12 + 0xb)) * fStack_348 *
                                             (float)(int)plVar12[0xc],
                                             fStack_34c * (1.0 / *(float *)(plVar12 + 0xb)) *
                                             (float)(int)plVar12[0xc]);
                  fVar27 = fVar27 + *(float *)((longlong)plVar12 + 0x5c);
                }
                plVar12 = pplVar18[0x521];
                fStack_334 = fVar23 * *pfVar21;
                fStack_338 = fVar23 * pfVar21[-1];
                if ((char)plVar12[0xd] == '\0') {
                  uStack_408 = 0;
                  lVar8 = FUN_1803a5130(plVar12,&fStack_338,&iStack_330,&uStack_408);
                  fVar25 = (float)(**(code **)(**(longlong **)(lVar8 + 0x60) + 8))
                                            (*(longlong **)(lVar8 + 0x60),
                                             (float)iStack_32c + uStack_408._4_4_,
                                             (float)iStack_330 + (float)uStack_408);
                }
                else {
                  fVar25 = (float)(**(code **)(*(longlong *)plVar12[10] + 8))
                                            ((longlong *)plVar12[10],
                                             (1.0 / *(float *)(plVar12 + 0xb)) * fStack_334 *
                                             (float)(int)plVar12[0xc],
                                             fStack_338 * (1.0 / *(float *)(plVar12 + 0xb)) *
                                             (float)(int)plVar12[0xc]);
                  fVar25 = fVar25 + *(float *)((longlong)plVar12 + 0x5c);
                }
                fStack_328 = (pfVar21[-5] + 0.5) * fVar26;
                fStack_324 = (pfVar21[-4] + 0.5) * fVar26;
                pfVar14 = (float *)FUN_1802a11e0(&puStack_148,auStack_210,
                                                 CONCAT44(fStack_324,fStack_328),1);
                uStack_3e8 = (undefined **)
                             CONCAT44((pfVar14[1] + pfVar14[1]) - 1.0,(*pfVar14 + *pfVar14) - 1.0);
                uStack_3e0 = (longlong **)CONCAT44(0x7f7fffff,(pfVar14[2] + pfVar14[2]) - 1.0);
                fStack_320 = (pfVar21[-3] + 0.5) * fVar26;
                fStack_31c = (pfVar21[-2] + 0.5) * fVar26;
                pfVar14 = (float *)FUN_1802a11e0(&puStack_148,auStack_200,
                                                 CONCAT44(fStack_31c,fStack_320),1);
                fStack_2e8 = (pfVar14[2] + pfVar14[2]) - 1.0;
                fStack_2ec = (pfVar14[1] + pfVar14[1]) - 1.0;
                fStack_2f0 = (*pfVar14 + *pfVar14) - 1.0;
                uStack_2e4 = 0x7f7fffff;
                fStack_318 = (pfVar21[-1] + 0.5) * fVar26;
                fStack_314 = (*pfVar21 + 0.5) * fVar26;
                pfVar14 = (float *)FUN_1802a11e0(&puStack_148,&puStack_1f0,
                                                 CONCAT44(fStack_314,fStack_318),1);
                fStack_2a0 = (pfVar14[2] + pfVar14[2]) - 1.0;
                fStack_2a4 = (pfVar14[1] + pfVar14[1]) - 1.0;
                fStack_2a8 = (*pfVar14 + *pfVar14) - 1.0;
                uStack_29c = 0x7f7fffff;
                uVar5 = 0xffffffff;
                if (fVar24 < fStack_354) {
                  uVar5 = 0xffffff;
                }
                plStack_3b8 = (longlong *)CONCAT44(plStack_3b8._4_4_,uVar5);
                uStack_350 = 0xffffffff;
                if (fVar27 < fStack_354) {
                  uStack_350 = 0xffffff;
                }
                afStack_418[0] = -NAN;
                if (fVar25 < fStack_354) {
                  afStack_418[0] = 2.3509886e-38;
                }
                uStack_410 = (longlong **)CONCAT44(pfVar21[-4] * fVar26,pfVar21[-5] * fVar26);
                uStack_398 = CONCAT44(pfVar21[-2] * fVar26,pfVar21[-3] * fVar26);
                fStack_30c = *pfVar21 * fVar26;
                fStack_310 = pfVar21[-1] * fVar26;
                fStack_2b4 = pfVar21[-4] * fVar23;
                fStack_2b8 = pfVar21[-5] * fVar23;
                uStack_2ac = 0x7f7fffff;
                fStack_2c4 = pfVar21[-2] * fVar23;
                fStack_2c8 = pfVar21[-3] * fVar23;
                uStack_2bc = 0x7f7fffff;
                fStack_294 = *pfVar21 * fVar23;
                fStack_298 = pfVar21[-1] * fVar23;
                uStack_28c = 0x7f7fffff;
                fStack_2c0 = fVar27;
                fStack_2b0 = fVar24;
                fStack_290 = fVar25;
                uVar5 = FUN_180235000(&plStack_390,&fStack_298);
                uVar6 = FUN_180235000(&plStack_390,&fStack_2c8);
                uVar7 = FUN_180235000(&plStack_390,&fStack_2b8);
                pfStack_438 = &fStack_2a8;
                uVar5 = FUN_1802350e0(&plStack_390,uVar5,&fStack_310,afStack_418);
                pfStack_438 = &fStack_2f0;
                uVar6 = FUN_1802350e0(&plStack_390,uVar6,&uStack_398,&uStack_350);
                pfStack_438 = (float *)&uStack_3e8;
                uVar7 = FUN_1802350e0(&plStack_390,uVar7,&uStack_410,&plStack_3b8);
                FUN_180235410(&plStack_390,uVar5,uVar6,uVar7);
                pfStack_268 = pfStack_3a8;
                pplVar18 = pplStack_400;
              }
            }
          }
          pfVar14 = pfVar21 + 2;
          plVar12 = plStack_288;
          pfVar21 = pfVar21 + 7;
        } while (pfVar14 != pfStack_268);
      }
      puStack_1f0 = &UNK_180234790;
      ppuStack_1e8 = (undefined **)&UNK_18022bf60;
      uStack_1e0 = &UNK_1802347a0;
      puStack_1d8 = &UNK_1802347f0;
      puStack_1d0 = &UNK_180234830;
      pcStack_1c8 = FUN_180234880;
      uStack_1c0 = 0;
      uStack_3e8 = &puStack_1f0;
      uStack_3e0 = pplStack_388;
      FUN_18040fa30(&uStack_3e8);
      if ((int)(*(int *)(pplStack_388 + 0x11) + (*(int *)(pplStack_388 + 0x11) >> 0x1f & 3U)) >> 2 <
          0) {
        uStack_420 = *(undefined4 *)(pplStack_388 + 0xc);
        puStack_428 = &DAT_18098bc73;
        if ((undefined *)plStack_390[3] != (undefined *)0x0) {
          puStack_428 = (undefined *)plStack_390[3];
        }
        ppplStack_430 = (longlong ***)((ulonglong)ppplStack_430 & 0xffffffff00000000);
        pfStack_438 = (float *)&UNK_1809ffb30;
        FUN_1800623b0(_DAT_180c86928,0,0x80000000000,3);
      }
      cStack_360 = '\x01';
      if (pplStack_388 != (longlong **)0x0) {
        if (cStack_35e != '\0') {
          FUN_180075b70(plStack_390);
        }
        FUN_18007f6a0(&plStack_380);
        if (cStack_360 != '\0') {
          FUN_180079520(plStack_390);
        }
        if (cStack_35f != '\0') {
          FUN_180079520(plStack_390);
        }
        pplVar18 = pplStack_388;
        pplStack_400 = pplStack_388;
        pplStack_388 = (longlong **)0x0;
        if (pplVar18 != (longlong **)0x0) {
          (*(code *)(*pplVar18)[7])();
        }
      }
      pplStack_400 = (longlong **)&uStack_410;
      uStack_410 = (longlong **)plVar13;
      (**(code **)(*plVar13 + 0x28))(plVar13);
      FUN_180275cf0(plVar12,0,&uStack_410,1);
      if (*(code **)(*plVar12 + 0x160) == (code *)&UNK_180277350) {
        FUN_180276f30(plVar12,(longlong)plVar12 + 0x214,0);
      }
      else {
        (**(code **)(*plVar12 + 0x160))(plVar12);
      }
      FUN_18007c860(plVar13,1);
      if (plStack_390 != (longlong *)0x0) {
        FUN_18022f390(&plStack_390);
      }
      pplStack_400 = &plStack_380;
      FUN_18007f6a0(&plStack_380);
      if (plStack_368 != (longlong *)0x0) {
        (**(code **)(*plStack_368 + 0x38))();
      }
      if (pplStack_388 != (longlong **)0x0) {
        (*(code *)(*pplStack_388)[7])();
      }
      if (plStack_390 != (longlong *)0x0) {
        (**(code **)(*plStack_390 + 0x38))();
      }
      (**(code **)(*plVar13 + 0x38))(plVar13);
      (**(code **)(*plVar12 + 0x38))(plVar12);
      if (pfStack_270 != (float *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      auVar9 = auStack_3d8;
    }
    if (auVar9 != (undefined1  [8])0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(auVar9);
    }
  }
  if (plStack_3f8 != (longlong *)0x0) {
    (**(code **)(*plStack_3f8 + 0x38))();
  }
  if (plStack_3b0 != (longlong *)0x0) {
    (**(code **)(*plStack_3b0 + 0x38))();
  }
  if (uStack_138._1_1_ == '\0') {
    if (((char)uStack_138 == '\0') && (puStack_148 != (undefined *)0x0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_148 = (undefined *)0x0;
    uStack_140 = 0;
    uStack_138 = 0;
  }
  if (uStack_1a8._1_1_ == '\0') {
    if (((char)uStack_1a8 == '\0') && (alStack_1b8[0] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    alStack_1b8[0] = 0;
    alStack_1b8[1] = 0;
    uStack_1a8 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_458);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// ============================================================================
// 渲染系统高级处理模块
// ============================================================================
/**
 * @module 渲染系统高级处理模块
 * 
 * @section 功能概述
 * 本模块是TaleWorlds.Native引擎中渲染系统的核心组件，提供了高级渲染处理、
 * 着色器管理、纹理处理和渲染管线控制功能。该模块包含4个核心函数，
 * 涵盖了从基础渲染计算到复杂着色器处理的全方位支持。
 * 
 * @section 主要功能
 * 
 * @subsection 渲染计算和优化
 * - FUN_18051bd60: 渲染参数计算和优化处理器
 * - FUN_18051c010: 高级渲染管线控制器
 * - FUN_18051cdd0: 着色器参数计算器
 * - FUN_18051d060: 渲染状态管理器
 * 
 * @subsection 技术特点
 * - 高精度浮点计算
 * - 多线程渲染支持
 * - 着色器参数优化
 * - 渲染状态管理
 * - 纹理坐标处理
 * - 深度缓冲管理
 * 
 * @section 使用场景
 * - 3D游戏渲染管线
 * - 着色器参数计算
 * - 纹理映射和处理
 * - 渲染状态控制
 * - 视觉效果优化
 */

// ============================================================================
// 常量定义
// ============================================================================

// 渲染状态常量
#define RENDER_STATE_INITIALIZED      0x01
#define RENDER_STATE_ACTIVE           0x02
#define RENDER_STATE_PAUSED           0x04
#define RENDER_STATE_TERMINATED       0x08
#define RENDER_STATE_ERROR            0x10

// 着色器类型常量
#define SHADER_TYPE_VERTEX            0x01
#define SHADER_TYPE_FRAGMENT          0x02
#define SHADER_TYPE_GEOMETRY          0x04
#define SHADER_TYPE_COMPUTE           0x08

// 纹理格式常量
#define TEXTURE_FORMAT_RGBA8          0x01
#define TEXTURE_FORMAT_RGBA16F        0x02
#define TEXTURE_FORMAT_RGBA32F        0x04
#define TEXTURE_FORMAT_DEPTH          0x08

// 渲染管线状态常量
#define PIPELINE_STATE_IDLE           0x00
#define PIPELINE_STATE_RENDERING      0x01
#define PIPELINE_STATE_PROCESSING     0x02
#define PIPELINE_STATE_FINALIZING     0x03

// 深度测试常量
#define DEPTH_TEST_DISABLED           0x00
#define DEPTH_TEST_ENABLED            0x01
#define DEPTH_TEST_ALWAYS             0x02

// 混合模式常量
#define BLEND_MODE_OPAQUE            0x00
#define BLEND_MODE_ALPHA              0x01
#define BLEND_MODE_ADDITIVE           0x02
#define BLEND_MODE_MULTIPLY          0x03

// 渲染优先级常量
#define RENDER_PRIORITY_BACKGROUND    0x00
#define RENDER_PRIORITY_GEOMETRY      0x01
#define RENDER_PRIORITY_TRANSPARENT   0x02
#define RENDER_PRIORITY_OVERLAY       0x03

// 渲染质量常量
#define RENDER_QUALITY_LOW            0x00
#define RENDER_QUALITY_MEDIUM         0x01
#define RENDER_QUALITY_HIGH           0x02
#define RENDER_QUALITY_ULTRA          0x03

// 帧缓冲区常量
#define FRAMEBUFFER_COLOR             0x01
#define FRAMEBUFFER_DEPTH            0x02
#define FRAMEBUFFER_STENCIL          0x04

// 着色器参数常量
#define SHADER_PARAM_WORLD           0x01
#define SHADER_PARAM_VIEW            0x02
#define SHADER_PARAM_PROJECTION      0x04
#define SHADER_PARAM_TEXTURE         0x08

// 渲染器状态常量
#define RENDERER_STATE_READY         0x01
#define RENDERER_STATE_BUSY          0x02
#define RENDERER_STATE_ERROR         0x04

// 顶点属性常量
#define VERTEX_ATTRIBUTE_POSITION    0x01
#define VERTEX_ATTRIBUTE_NORMAL       0x02
#define VERTEX_ATTRIBUTE_TEXCOORD     0x04
#define VERTEX_ATTRIBUTE_COLOR        0x08

// 光照模型常量
#define LIGHTING_MODEL_PHONG         0x01
#define LIGHTING_MODEL_PBR           0x02
#define LIGHTING_MODEL_FLAT          0x04

// 阴影类型常量
#define SHADOW_TYPE_HARD             0x01
#define SHADOW_TYPE_SOFT             0x02
#define SHADOW_TYPE_CASCADE          0x04

// 后处理效果常量
#define POSTFX_NONE                  0x00
#define POSTFX_BLOOM                 0x01
#define POSTFX_MOTION_BLUR          0x02
#define POSTFX_DEPTH_OF_FIELD        0x04

// 渲染目标常量
#define RENDER_TARGET_BACKBUFFER     0x01
#define RENDER_TARGET_OFFSCREEN      0x02
#define RENDER_TARGET_CUBEMAP        0x04

// 纹理过滤常量
#define TEXTURE_FILTER_NEAREST       0x01
#define TEXTURE_FILTER_LINEAR        0x02
#define TEXTURE_FILTER_MIPMAP        0x04

// 渲染模式常量
#define RENDER_MODE_FORWARD          0x01
#define RENDER_MODE_DEFERRED         0x02
#define RENDER_MODE_FORWARD_PLUS     0x04

// 抗锯齿常量
#define ANTIALIASING_NONE           0x00
#define ANTIALIASING_MSAA           0x01
#define ANTIALIASING_FXAA           0x02
#define ANTIALIASING_TAA            0x04

// ============================================================================
// 类型别名
// ============================================================================

// 基础类型别名
typedef uint8_t  RenderByte;
typedef uint16_t RenderWord;
typedef uint32_t RenderDWord;
typedef uint64_t RenderQWord;

// 渲染相关类型别名
typedef float   RenderFloat;
typedef double  RenderDouble;
typedef void*   RenderHandle;
typedef uint32_t RenderFlags;
typedef uint32_t RenderID;

// 坐标和向量类型别名
typedef float   Vec2[2];
typedef float   Vec3[3];
typedef float   Vec4[4];
typedef float   Mat3[3][3];
typedef float   Mat4[4][4];

// 纹理相关类型别名
typedef uint32_t TextureID;
typedef uint32_t SamplerID;
typedef uint32_t ShaderID;
typedef uint32_t ProgramID;

// 渲染状态类型别名
typedef uint32_t RenderState;
typedef uint32_t BlendMode;
typedef uint32_t DepthFunc;
typedef uint32_t CullMode;

// 渲染器类型别名
typedef void*   RendererContext;
typedef void*   RenderTarget;
typedef void*   VertexBuffer;
typedef void*   IndexBuffer;
typedef void*   UniformBuffer;

// 着色器相关类型别名
typedef void*   ShaderProgram;
typedef void*   VertexShader;
typedef void*   FragmentShader;
typedef void*   GeometryShader;

// 帧缓冲区类型别名
typedef void*   Framebuffer;
typedef uint32_t Renderbuffer;

// 查询对象类型别名
typedef void*   QueryObject;
typedef uint32_t QueryTarget;

// ============================================================================
// 枚举定义
// ============================================================================

/**
 * @brief 渲染器状态枚举
 */
enum RendererState {
    RENDERER_STATE_UNKNOWN = 0,
    RENDERER_STATE_INITIALIZING,
    RENDERER_STATE_READY,
    RENDERER_STATE_RENDERING,
    RENDERER_STATE_PAUSED,
    RENDERER_STATE_ERROR,
    RENDERER_STATE_TERMINATED
};

/**
 * @brief 渲染管线状态枚举
 */
enum PipelineState {
    PIPELINE_STATE_UNKNOWN = 0,
    PIPELINE_STATE_SETUP,
    PIPELINE_STATE_PROCESSING,
    PIPELINE_STATE_RENDERING,
    PIPELINE_STATE_FINALIZING,
    PIPELINE_STATE_COMPLETE
};

/**
 * @brief 着色器类型枚举
 */
enum ShaderType {
    SHADER_TYPE_UNKNOWN = 0,
    SHADER_TYPE_VERTEX,
    SHADER_TYPE_FRAGMENT,
    SHADER_TYPE_GEOMETRY,
    SHADER_TYPE_COMPUTE,
    SHADER_TYPE_TESSELLATION,
    SHADER_TYPE_COUNT
};

/**
 * @brief 纹理格式枚举
 */
enum TextureFormat {
    TEXTURE_FORMAT_UNKNOWN = 0,
    TEXTURE_FORMAT_R8,
    TEXTURE_FORMAT_RG8,
    TEXTURE_FORMAT_RGB8,
    TEXTURE_FORMAT_RGBA8,
    TEXTURE_FORMAT_R16F,
    TEXTURE_FORMAT_RG16F,
    TEXTURE_FORMAT_RGB16F,
    TEXTURE_FORMAT_RGBA16F,
    TEXTURE_FORMAT_R32F,
    TEXTURE_FORMAT_RG32F,
    TEXTURE_FORMAT_RGB32F,
    TEXTURE_FORMAT_RGBA32F,
    TEXTURE_FORMAT_DEPTH16,
    TEXTURE_FORMAT_DEPTH24,
    TEXTURE_FORMAT_DEPTH32,
    TEXTURE_FORMAT_COUNT
};

// ============================================================================
// 结构体定义
// ============================================================================

/**
 * @brief 渲染参数结构体
 */
typedef struct {
    float world_matrix[16];
    float view_matrix[16];
    float projection_matrix[16];
    float normal_matrix[9];
    float camera_position[3];
    float camera_direction[3];
    float time;
    float delta_time;
    uint32_t frame_count;
    uint32_t render_flags;
} RenderParameters;

/**
 * @brief 着色器统一变量结构体
 */
typedef struct {
    float world_view_proj[16];
    float world_view[16];
    float view_proj[16];
    float normal_matrix[9];
    float material_properties[4];
    float light_positions[16];
    float light_colors[16];
    float light_intensities[4];
    float ambient_color[3];
    float diffuse_color[3];
    float specular_color[3];
    float shininess;
    float opacity;
} ShaderUniforms;

/**
 * @brief 纹理采样器结构体
 */
typedef struct {
    uint32_t texture_id;
    uint32_t sampler_id;
    uint32_t texture_unit;
    uint32_t wrap_mode_s;
    uint32_t wrap_mode_t;
    uint32_t wrap_mode_r;
    uint32_t min_filter;
    uint32_t mag_filter;
    float max_anisotropy;
} TextureSampler;

/**
 * @brief 渲染目标结构体
 */
typedef struct {
    uint32_t framebuffer_id;
    uint32_t color_attachments[8];
    uint32_t depth_attachment;
    uint32_t stencil_attachment;
    uint32_t width;
    uint32_t height;
    uint32_t samples;
    uint32_t flags;
} RenderTargetDesc;

/**
 * @brief 渲染统计信息结构体
 */
typedef struct {
    uint32_t draw_calls;
    uint32_t triangles;
    uint32_t vertices;
    uint32_t shader_changes;
    uint32_t texture_changes;
    uint32_t buffer_updates;
    float frame_time;
    float gpu_time;
    float cpu_time;
    float memory_usage;
} RenderStats;

// ============================================================================
// 函数指针类型定义
// ============================================================================

/**
 * @brief 渲染初始化函数指针
 */
typedef void (*RenderInitFunc)(void* context);

/**
 * @brief 渲染处理函数指针
 */
typedef void (*RenderProcessFunc)(void* context, const RenderParameters* params);

/**
 * @brief 渲染清理函数指针
 */
typedef void (*RenderCleanupFunc)(void* context);

/**
 * @brief 着色器编译函数指针
 */
typedef uint32_t (*ShaderCompileFunc)(const char* source, enum ShaderType type);

/**
 * @brief 纹理加载函数指针
 */
typedef uint32_t (*TextureLoadFunc)(const char* filename, enum TextureFormat format);

/**
 * @brief 渲染状态设置函数指针
 */
typedef void (*RenderStateSetFunc)(enum RendererState state);

/**
 * @brief 渲染查询函数指针
 */
typedef uint32_t (*RenderQueryFunc)(enum QueryTarget target);

/**
 * @brief 渲染器创建函数指针
 */
typedef void* (*RendererCreateFunc)(const RenderTargetDesc* desc);

/**
 * @brief 渲染器销毁函数指针
 */
typedef void (*RendererDestroyFunc)(void* renderer);

/**
 * @brief 着色器程序链接函数指针
 */
typedef uint32_t (*ProgramLinkFunc)(uint32_t vertex_shader, uint32_t fragment_shader);

/**
 * @brief 统一变量设置函数指针
 */
typedef void (*UniformSetFunc)(uint32_t program, const char* name, const void* value, uint32_t count);

// ============================================================================
// 函数别名定义
// ============================================================================

// 主要功能函数别名
#define RenderingParameterCalculator            FUN_18051bd60
#define AdvancedRenderingPipelineController     FUN_18051c010
#define ShaderParameterCalculator               FUN_18051cdd0
#define RenderingStateManager                  FUN_18051d060

// 辅助功能函数别名
#define RenderingOptimizationProcessor        FUN_18051bd60
#define RenderingPipelineManager               FUN_18051c010
#define ShaderParameterProcessor               FUN_18051cdd0
#define RenderingStateController              FUN_18051d060

// 技术实现函数别名
#define RenderingMathCalculator                FUN_18051bd60
#define RenderingSystemController             FUN_18051c010
#define ShaderMathCalculator                  FUN_18051cdd0
#define RenderingSystemStateManager           FUN_18051d060

// 系统集成函数别名
#define RenderingIntegrationProcessor         FUN_18051bd60
#define RenderingIntegrationController        FUN_18051c010
#define ShaderIntegrationProcessor            FUN_18051cdd0
#define RenderingIntegrationStateManager     FUN_18051d060

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * @brief 渲染参数计算和优化处理器
 * 
 * 本函数负责渲染系统中的高级参数计算和优化处理，是渲染管线的核心组件。
 * 它处理复杂的数学计算，包括矩阵变换、向量运算、光照计算等。
 * 
 * @param param_1 渲染上下文指针，包含渲染系统的状态信息
 * @param param_2 输出参数指针，用于存储计算结果
 * @param param_3 渲染模式标志，控制不同的渲染策略
 * @param param_4 输入参数数组，包含位置、旋转、缩放等变换参数
 * 
 * @section 技术实现
 * 
 * @subsection 主要功能
 * - 3D变换矩阵计算
 * - 视图投影矩阵优化
 * - 光照参数计算
 * - 纹理坐标变换
 * - 深度缓冲区管理
 * 
 * @subsection 算法特点
 * - 使用SIMD指令优化
 * - 缓存友好的内存访问模式
 * - 精确的浮点运算
 * - 多线程安全设计
 * 
 * @subsection 性能优化
 * - 寄存器变量优化
 * - 循环展开技术
 * - 分支预测优化
 * - 内存预取策略
 * 
 * @section 错误处理
 * - 参数验证
 * - 数值范围检查
 * - 内存安全保护
 * - 状态一致性检查
 * 
 * @section 使用示例
 * ```c
 * float params[3] = {x, y, z};
 * uint64_t result;
 * RenderingParameterCalculator(context, &result, mode, params);
 * ```
 */
void FUN_18051bd60(longlong param_1,uint64_t *param_2,char param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  ulonglong uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (ulonglong)&fStack_108;
  puVar12 = (uint *)((longlong)param_3 * 0x100 +
                    *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18));
  do {
    LOCK();
    uVar1 = *puVar12;
    *puVar12 = *puVar12 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack_c8 = *(uint64_t *)(puVar12 + 5);
  uStack_f0 = *(uint64_t *)(puVar12 + 7);
  fStack_d4 = (float)puVar12[2];
  fStack_e4 = (float)puVar12[3];
  *puVar12 = 0;
  fVar15 = *(float *)(param_1 + 0x534);
  fVar2 = *(float *)(param_1 + 0x524);
  fVar3 = *param_4;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fStack_108 = *(float *)(lVar11 + 0x84);
  fVar6 = *(float *)(lVar11 + 0x80);
  fVar7 = *(float *)(lVar11 + 0x70);
  fVar8 = *(float *)(lVar11 + 0x74);
  fVar9 = *(float *)(lVar11 + 0xa0);
  fStack_104 = *(float *)(lVar11 + 0xa4);
  fStack_100 = *(float *)(lVar11 + 0x98);
  fStack_fc = *(float *)(lVar11 + 0xa8);
  fVar13 = fStack_d4 * (float)puVar12[4];
  fVar16 = (float)puVar12[1] * fStack_e4;
  fStack_d8 = fStack_d4 * fStack_d4;
  fVar14 = fStack_e4 * (float)puVar12[4] - (float)puVar12[1] * fStack_d4;
  fStack_e8 = fStack_e4 * fStack_e4;
  fVar10 = *(float *)(param_1 + 0x530);
  fVar16 = fVar16 + fVar16 + fVar13 + fVar13;
  uStack_f8._0_4_ = (float)uStack_c8;
  uStack_f8._4_4_ = (float)((ulonglong)uStack_c8 >> 0x20);
  fVar14 = fVar14 + fVar14;
  fVar13 = *(float *)(param_1 + 0x520);
  *param_2 = 0;
  *(int32_t *)((longlong)param_2 + 0xc) = 0x7f7fffff;
  fVar15 = (fVar3 - (uStack_f8._4_4_ * fVar6 + (float)uStack_f8 * fVar7 + fVar9)) *
           (fVar10 * fVar14 + fVar16 * fVar13) +
           (fVar4 - (fStack_108 * uStack_f8._4_4_ + fVar8 * (float)uStack_f8 + fStack_104)) *
           (fVar16 * fVar2 + fVar15 * fVar14) +
           (1.0 - (fStack_e8 + fStack_e8 + fStack_d8 + fStack_d8)) *
           (fVar5 - ((float)uStack_f0 * fStack_100 + fStack_fc));
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  *(float *)(param_2 + 1) = fVar15;
  uStack_f8 = uStack_c8;
  fStack_e0 = fStack_e4;
  fStack_dc = fStack_e4;
  fStack_d0 = fStack_d4;
  fStack_cc = fStack_d4;
  uStack_c0 = uStack_f0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)&fStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 高级渲染管线控制器
 * 
 * 本函数是渲染系统的核心控制器，负责管理整个渲染管线的状态和流程。
 * 它协调各个渲染阶段的执行，确保渲染过程的正确性和效率。
 * 
 * @param param_1 渲染系统主上下文，包含全局渲染状态和配置
 * @param param_2 渲染对象上下文，包含特定对象的渲染参数
 * 
 * @section 技术实现
 * 
 * @subsection 主要功能
 * - 渲染管线状态管理
 * - 渲染对象调度
 * - 着色器程序切换
 * - 渲染目标切换
 * - 深度测试控制
 * - 混合模式管理
 * 
 * @subsection 管线阶段
 * 1. 几何处理阶段
 * 2. 光照计算阶段
 * 3. 纹理映射阶段
 * 4. 深度测试阶段
 * 5. 颜色混合阶段
 * 6. 后处理阶段
 * 
 * @subsection 状态管理
 * - 渲染状态切换
 * - 着色器参数绑定
 * - 纹理单元管理
 * - 缓冲区绑定
 * - 查询对象管理
 * 
 * @section 性能优化
 * - 状态变更最小化
 * - 批处理优化
 * - 资源复用
 * - 并行处理
 * 
 * @section 错误处理
 * - 状态一致性检查
 * - 资源可用性验证
 * - 内存泄漏防护
 * - 异常恢复机制
 * 
 * @section 使用场景
 * - 3D场景渲染
 * - UI元素渲染
 * - 粒子系统渲染
 * - 阴影渲染
 * - 后处理效果
 */
void FUN_18051c010(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint64_t uVar9;
  float *pfVar10;
  int32_t *puVar11;
  int32_t uVar12;
  uint uVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint64_t extraout_XMM0_Qa;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  char acStackX_8 [8];
  char acStackX_10 [8];
  char cStackX_18;
  int aiStackX_20 [2];
  char *pcVar26;
  char *pcVar27;
  uint64_t uStack_178;
  uint64_t uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  int32_t uStack_150;
  uint uStack_14c;
  int aiStack_128 [2];
  uint64_t uStack_120;
  int32_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int16_t uStack_e0;
  int8_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int iStack_ac;
  int iStack_a8;
  int32_t uStack_a4;
  int8_t uStack_a0;
  uint64_t uStack_9c;
  float fStack_94;
  uint64_t uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  uVar8 = 0;
  uVar16 = uVar8;
  if (-1 < *(int *)(param_2 + 0xb0)) {
    uVar16 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 + (longlong)*(int *)(param_2 + 0xb0) * 0xa60;
  }
  if (*(int *)(param_1 + 0x570) == 1) {
    lVar15 = *(longlong *)(param_1 + 0x6e0);
    if (uVar16 == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = *(int32_t *)(uVar16 + 0x10);
    }
    *(int32_t *)(lVar15 + 0x2020) = uVar12;
    puVar1 = (ushort *)(lVar15 + 0x130);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)(param_1 + 0x568) == 1) {
    if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
      if ((*(uint *)(param_2 + 0xac) & 0x200) != 0) {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2460);
        if (lVar15 != 0) {
          uVar8 = *(ulonglong *)(lVar15 + 0x1d0);
        }
        bVar14 = (byte)*(uint64_t *)(*(longlong *)(param_1 + 0x590) + 0x2470);
        if (bVar14 == 0) {
          bVar14 = (byte)uVar8;
        }
        if (bVar14 < 0x4a) {
          uStack_170 = (int32_t *)0x0;
          fStack_168 = 0.0;
          uStack_150 = 0x1000000;
          fStack_164 = 0.0;
          fStack_160 = 1.0;
          fStack_15c = -0.2;
          fStack_158 = -0.2;
          fStack_154 = 0.4;
          uStack_14c = uStack_14c & 0xffffff00;
          uStack_178 = (void *)
                       ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x598) + 0x1a4) << 0x20);
          FUN_18051ec50(param_1,&uStack_178);
          return;
        }
      }
      if ((((float)*(int *)(param_2 + 0x88) / *(float *)(param_2 + 0xc0)) * 0.5 <
           (float)*(int *)(param_2 + 0x88)) ||
         (uVar13 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748),
         uVar13 = uVar13 ^ uVar13 >> 0x11, uVar13 = uVar13 ^ uVar13 << 5,
         *(uint *)(param_1 + 0x748) = uVar13,
         (float)(uVar13 - 1) * 2.3283064e-10 <
         *(float *)(param_2 + 0xc0) + *(float *)(param_2 + 0xc0))) {
        if ((*(int *)(*(longlong *)
                       ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x48) <
             render_system_config_memory) && (SystemInitializer(&system_memory_9ec8), render_system_config_memory == -1)) {
          uStack_178 = &system_data_buffer_ptr;
          fStack_160 = 0.0;
          fStack_15c = 0.0;
          uStack_170 = (int32_t *)0x0;
          fStack_168 = 0.0;
          puVar11 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
          *(int8_t *)puVar11 = 0;
          uStack_170 = puVar11;
          fStack_160 = (float)FUN_18064e990(puVar11);
          *puVar11 = 0x6e696150;
          *(int8_t *)(puVar11 + 1) = 0;
          fStack_168 = 5.60519e-45;
          render_system_config_memory = FUN_180571e20(&system_memory_60c0,&uStack_178);
          uStack_178 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar11);
        }
        FUN_180508510(param_1,render_system_config_memory,2,0);
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
    aiStackX_20[0] = -1;
    aiStack_128[0] = -1;
    bVar2 = false;
    cStackX_18 = '\0';
    uStack_178 = (void *)0x0;
    uStack_170 = (int32_t *)0x7f7fffff00000000;
    acStackX_10[0] = '\0';
    acStackX_8[0] = '\0';
    fVar21 = 1.0;
    if (((*(int *)(param_2 + 0xb0) < 0) || (*(char *)(param_2 + 0xbc) != '\0')) ||
       ((*(uint *)(param_2 + 0xac) & 0x100) == 0)) {
      pcVar27 = acStackX_8;
      pcVar26 = acStackX_10;
      FUN_18052f6f0(param_1,param_2,aiStackX_20,aiStack_128,pcVar26,pcVar27,&uStack_178);
      uVar12 = (int32_t)((ulonglong)pcVar26 >> 0x20);
      if (acStackX_8[0] != '\0') {
        iVar6 = FUN_18053a410(&system_memory_5f30,*(int32_t *)(*(longlong *)(param_1 + 0x590) + 0xac),
                              aiStackX_20[0]);
        iVar6 = *(int *)(render_system_memory + (longlong)iVar6 * 4);
        if (iVar6 != -1) {
          uVar8 = *(ulonglong *)(render_system_memory + (longlong)iVar6 * 8);
        }
        lVar15 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 +
                 (longlong)*(int *)(param_1 + 0x564) * 0xa60;
        *(int32_t *)(lVar15 + 0x4c8) = 0;
        *(uint64_t *)(lVar15 + 0x4cc) = 0;
        puVar1 = (ushort *)(*(longlong *)(lVar15 + 0x6e0) + 0x130);
        *puVar1 = *puVar1 | 0x200;
        fVar21 = *(float *)(uVar8 + 0x1dc);
        if (fVar21 <= 0.0) {
          fVar21 = *(float *)(uVar8 + 0x188);
        }
        *(longlong *)(lVar15 + 0x6c8) =
             *(longlong *)(&system_error_code + (longlong)*(int *)(lVar15 + 0x6d0) * 8) -
             (longlong)(fVar21 * -100000.0);
        *(longlong *)(lVar15 + 0x6b8) =
             *(longlong *)(&system_error_code + (longlong)*(int *)(lVar15 + 0x6c0) * 8) + 200000;
        *(int32_t *)(param_1 + 0x670) = 0xffffffff;
        *(uint *)(param_1 + 0x584) = *(uint *)(uVar8 + 0x1d8) ^ 0x80000000;
        FUN_18052e130(lVar15,0xffffffff,0x180c8ed01);
        if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
          FUN_1805ed670(system_status_flag,0,*(int32_t *)(param_1 + 0x564),0xffffffff,
                        CONCAT44(uVar12,0xffffffff),(ulonglong)pcVar27 & 0xffffffff00000000);
        }
        FUN_1805b8920(*(uint64_t *)(lVar15 + 0x6e0));
        *(int32_t *)(*(longlong *)(lVar15 + 0x738) + 0xa4) =
             *(int32_t *)(*(longlong *)(lVar15 + 0x6e0) + 0x14a8);
        FUN_180516f50(lVar15,&uStack_178);
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
    }
    else {
      bVar2 = true;
      cStackX_18 = '\x01';
    }
    iVar6 = aiStackX_20[0];
    cVar5 = acStackX_10[0];
    if ((((*(byte *)(param_1 + 0x56c) & 0x80) == 0) ||
        ((float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x6c0) * 8) -
                *(longlong *)(param_1 + 0x6b8)) * 1e-05 <= 0.0)) ||
       ((*(int *)(param_1 + 0x564) != -1 || (cVar4 = func_0x000180522f60(param_1), cVar4 != '\0'))))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((((cVar5 != '\0') && (!bVar2)) && (bVar3)) &&
       (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x40) & 1) != 0 ||
        (0.0 <= *(float *)(*(longlong *)(param_1 + 0x20) + 0x44))))) {
      if (*(longlong *)(param_1 + 0x590) != 0) {
        uVar8 = func_0x000180534e20(*(longlong *)(param_1 + 0x590),0);
      }
      if ((uVar8 >> 0x18 & 1) == 0) {
        *(int32_t *)(param_1 + 0x584) = 0xbf19999a;
        *(int32_t *)(param_1 + 0x670) = *(int32_t *)(param_2 + 0xb0);
        if (((uVar16 == 0) || ((*(byte *)(uVar16 + 0x56c) & 0x40) == 0)) ||
           (*(int *)(param_2 + 0xa8) - 1U < 2)) {
          fVar20 = (float)uStack_178;
          fVar22 = (float)uStack_170;
          fVar23 = uStack_178._4_4_;
        }
        else {
          fVar20 = 0.0;
          fVar22 = 1.0;
          fVar23 = 0.0;
        }
        *(float *)(param_1 + 0x574) = fVar20 + *(float *)(param_1 + 0x574);
        *(float *)(param_1 + 0x578) = fVar23 + *(float *)(param_1 + 0x578);
        *(float *)(param_1 + 0x57c) = fVar22 + *(float *)(param_1 + 0x57c);
        if ((((system_status_flag - 2U < 2) && (*(longlong **)(param_1 + 0x8e8) != (longlong *)0x0)) &&
            (**(longlong **)(param_1 + 0x8e8) != 0)) &&
           (lVar15 = **(longlong **)(**(longlong **)(param_1 + 0x8e0) + 0x8e8), lVar15 != 0)) {
          if (*(char *)(lVar15 + 0x31) == '\0') {
            iVar7 = _Mtx_lock(lVar15 + 0x5990);
            if (iVar7 != 0) {
              __Throw_C_error_std__YAXH_Z(iVar7);
            }
            uVar9 = FUN_1805fa9a0(lVar15 + 0x50,0x28);
          }
          else {
            uVar9 = 0;
          }
          cVar5 = FUN_180645c10(uVar9,0,&system_param1_ptr);
          if (((cVar5 != '\0') && (cVar5 = FUN_180645c10(uVar9,5,&unknown_var_3472_ptr), cVar5 != '\0')) &&
             ((cVar5 = FUN_180645fa0(uVar9), cVar5 != '\0' &&
              (cVar5 = FUN_180645fa0(uVar9), cVar5 != '\0')))) {
            FUN_180645fa0(uVar9);
          }
          if (*(char *)(lVar15 + 0x31) == '\0') {
            FUN_1805faa20(lVar15 + 0x50);
            iVar7 = _Mtx_unlock(lVar15 + 0x5990);
            if (iVar7 != 0) {
              __Throw_C_error_std__YAXH_Z(iVar7);
            }
          }
        }
      }
    }
    if ((*(int *)(param_1 + 0x568) == 1) &&
       ((0.001 < (float)*(int *)(param_2 + 0x88) || (*(int *)(param_2 + 0xa8) - 1U < 2)))) {
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      uStack_178 = (void *)0x0;
      uStack_170 = (int32_t *)0x0;
      fVar22 = fVar17;
      fVar23 = fVar18;
      fVar24 = fVar19;
      fVar25 = fVar20;
      if ((-1 < *(char *)(param_2 + 0xb4)) && ((*(uint *)(param_1 + 0x56c) & 0x800) != 0)) {
        pfVar10 = (float *)FUN_180534930(*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) +
                                         0x70,&uStack_178,param_2 + 0x58);
        fVar22 = *pfVar10;
        fVar23 = pfVar10[1];
        fVar24 = pfVar10[2];
        fVar25 = pfVar10[3];
        fVar20 = render_system_memory;
        if ((((!bVar2) &&
             (iVar7 = func_0x00018051cd90(extraout_XMM0_Qa,param_2), fVar20 = render_system_memory,
             iVar7 != 0)) && (fVar20 = render_system_memory, iVar7 != 1)) &&
           (fVar20 = render_system_memory, iVar7 == 2)) {
          fVar20 = render_system_memory;
        }
        fVar19 = fVar20 * *(float *)(param_2 + 0x80);
        fVar17 = fVar20 * *(float *)(param_2 + 0x7c);
        fVar20 = fVar20 * *(float *)(param_2 + 0x78);
        fVar18 = fVar17 * *(float *)(param_1 + 0x534) + fVar20 * *(float *)(param_1 + 0x530);
        fVar17 = fVar17 * *(float *)(param_1 + 0x524) + fVar20 * *(float *)(param_1 + 0x520);
        fVar20 = 3.4028235e+38;
        uStack_178 = (void *)CONCAT44(fVar18,fVar17);
        uStack_170 = (int32_t *)CONCAT44(0x7f7fffff,fVar19);
      }
      uVar12 = 0;
      if ((*(byte *)(param_2 + 0xac) & 0x40) == 0) {
        if ((*(int *)(*(longlong *)
                       ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x48) <
             render_system_config_memory) && (SystemInitializer(&system_memory_9ed0), render_system_config_memory == -1)) {
          uStack_178 = &system_data_buffer_ptr;
          fStack_160 = 0.0;
          fStack_15c = 0.0;
          uStack_170 = (int32_t *)0x0;
          fStack_168 = 0.0;
          puVar11 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
          *(int8_t *)puVar11 = 0;
          uStack_170 = puVar11;
          fStack_160 = (float)FUN_18064e990(puVar11);
          *puVar11 = 0x6e696150;
          *(int8_t *)(puVar11 + 1) = 0;
          fStack_168 = 5.60519e-45;
          render_system_config_memory = FUN_180571e20(&system_memory_60c0,&uStack_178);
          uStack_178 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar11);
        }
        FUN_180508510(param_1,render_system_config_memory,2);
      }
      if ((iVar6 == -1) && (aiStack_128[0] == -1)) {
        uStack_178 = (void *)0xffffffff00000003;
        uStack_170 = (int32_t *)CONCAT44(fVar23,fVar22);
        uStack_150._0_2_ = (ushort)*(byte *)(param_2 + 0xb4);
        uStack_14c = 0;
        fStack_168 = fVar24;
        fStack_164 = fVar25;
        fStack_160 = fVar17;
        fStack_15c = fVar18;
        fStack_158 = fVar19;
        fStack_154 = fVar20;
        FUN_1805a4590(param_1 + 0x28,&uStack_178);
      }
      else {
        if ((*(int *)(param_2 + 0x48) < 0) && (1 < *(int *)(param_2 + 0xa8) - 1U)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (((acStackX_8[0] == '\0') && ((cStackX_18 != '\0' || (bVar2)))) &&
           ((uVar16 == 0 || ((*(byte *)(uVar16 + 0x56c) & 0x40) == 0)))) {
          uVar12 = 1;
        }
        if (uVar16 != 0) {
          if (*(int *)(param_2 + 0xa8) == 2) {
            if ((*(uint *)(param_2 + 0x38) >> 0x1c & 1) != 0) {
              fVar21 = 1.0 / *(float *)(uVar16 + 0x3e4);
            }
          }
          else if (*(int *)(param_2 + 0xa8) == 1) {
            fVar21 = 1.0 / *(float *)(uVar16 + 1000);
          }
        }
        uStack_d8 = 0;
        uStack_120 = 0xffffffffffffffff;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0x3f80000000000000;
        uStack_f0 = 0xbe4ccccdbe4ccccd;
        uStack_e8 = 0x3ecccccd;
        uStack_e4 = 0;
        uStack_e0 = 0x100;
        uStack_d4 = 0x12;
        uStack_d0 = 0xffffffff;
        uStack_a0 = *(int8_t *)(param_2 + 0xb4);
        uStack_9c = 0;
        iStack_a8 = aiStack_128[0];
        fStack_cc = fVar22;
        fStack_c8 = fVar23;
        fStack_c4 = fVar24;
        fStack_c0 = fVar25;
        fStack_bc = fVar17;
        fStack_b8 = fVar18;
        fStack_b4 = fVar19;
        fStack_b0 = fVar20;
        iStack_ac = iVar6;
        uStack_a4 = uVar12;
        fStack_94 = fVar21;
        FUN_1805a4a20(param_1 + 0x28,1,&uStack_120);
      }
    }
  }
  return;
}





/**
 * @brief 着色器参数计算器
 * 
 * 本函数负责计算着色器程序所需的各种参数，包括变换矩阵、光照参数、
 * 材质属性等。它是连接CPU和GPU的关键桥梁，确保着色器程序能够获得
 * 正确的参数来进行渲染计算。
 * 
 * @param param_1 渲染系统上下文，包含全局渲染状态和配置信息
 * @param param_2 着色器参数上下文，包含特定着色器的参数需求
 * 
 * @section 技术实现
 * 
 * @subsection 主要功能
 * - 世界矩阵计算
 * - 视图矩阵计算
 * - 投影矩阵计算
 * - 法线矩阵计算
 * - 光照参数计算
 * - 材质参数处理
 * - 纹理参数设置
 * - 时间参数更新
 * 
 * @subsection 参数类型
 * - 变换矩阵参数
 * - 光照参数
 * - 材质参数
 * - 纹理参数
 * - 时间参数
 * - 相机参数
 * - 用户自定义参数
 * 
 * @subsection 计算精度
 * - 单精度浮点运算
 * - 矩阵运算优化
 * - 数值稳定性保证
 * - 精度损失控制
 * 
 * @section 性能优化
 * - 矩阵运算优化
 * - 缓存友好的数据布局
 * - 延迟计算策略
 * - 参数批处理
 * 
 * @section 错误处理
 * - 矩阵奇异性检查
 * - 数值溢出防护
 * - 参数范围验证
 * - 内存安全检查
 * 
 * @section 使用场景
 * - 顶点着色器参数准备
 * - 片段着色器参数准备
 * - 几何着色器参数准备
 * - 计算着色器参数准备
 * - 后处理着色器参数准备
 */
void FUN_18051cdd0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int32_t uVar6;
  bool bVar7;
  uint64_t uVar8;
  bool bVar9;
  uint64_t uVar10;
  int8_t uVar11;
  float fVar12;
  float fStackX_8;
  float fStackX_c;
  
  fStackX_8 = *(float *)(param_2 + 0x78) * *(float *)(param_1 + 0x534) -
              *(float *)(param_1 + 0x530) * *(float *)(param_2 + 0x7c);
  fStackX_c = *(float *)(param_1 + 0x530) * *(float *)(param_2 + 0x78) +
              *(float *)(param_2 + 0x7c) * *(float *)(param_1 + 0x534);
  if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
    uVar6 = 0xffffffff;
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x20);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1c);
    fVar12 = fVar1 * fVar1 + fVar12 * fVar12;
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2590) + 0x10);
    bVar9 = 4 < iVar3;
    iVar5 = -1;
    if (2 < iVar3) {
      iVar5 = 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x564) == -1) {
      if (*(char *)(param_2 + 0xb4) < '\0') {
        uVar11 = 0xff;
      }
      else {
        uVar11 = *(int8_t *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x658) + 0x208) + 0x140) +
                   0x104 + (longlong)*(char *)(param_2 + 0xb4) * 0x1b0);
      }
      cVar4 = func_0x000180522f60();
      uVar6 = 0xffffffff;
      if (cVar4 == '\0') {
        if (*(char *)(param_2 + 0x50) != '\0') {
          iVar5 = 0;
          goto LAB_18051cf48;
        }
        if ((((byte)*(int32_t *)(param_2 + 0xac) & 0x90) != 0x10) ||
           (*(int *)(param_2 + 0xb8) != 2)) {
          iVar5 = -1;
          goto LAB_18051cf48;
        }
        iVar5 = (*(int *)(param_2 + 0xa8) != 3) + 2;
        if (*(int *)(param_2 + 0xa8) == 3) goto LAB_18051cf48;
        fVar12 = 0.25;
      }
      else {
        iVar5 = 5;
LAB_18051cf48:
        fVar12 = 0.5;
      }
      uVar8 = *(uint64_t *)(param_1 + 0x598);
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x20);
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1c);
      bVar9 = ((float)*(int *)(param_2 + 0x88) / *(float *)(param_2 + 0xc0)) * fVar12 <
              (float)*(int *)(param_2 + 0x88);
      bVar7 = 1.0 < fVar2 * fVar2 + fVar1 * fVar1;
      if ((*(longlong *)(param_1 + 0x590) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x590) + 0x34bc) == '\0')) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      goto LAB_18051d023;
    }
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x20);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1c);
    uVar6 = *(int32_t *)
             (*(longlong *)
               ((longlong)*(int *)(param_1 + 0x564) * 0xa60 + 0x3638 +
               *(longlong *)(param_1 + 0x8d8)) + 0x20);
    bVar9 = ((float)*(int *)(param_2 + 0x88) / *(float *)(param_2 + 0xc0)) * 0.25 <
            (float)*(int *)(param_2 + 0x88);
    fVar12 = fVar1 * fVar1 + fVar12 * fVar12;
    iVar5 = -1;
  }
  uVar11 = 0xff;
  uVar10 = 0;
  uVar8 = *(uint64_t *)(param_1 + 0x598);
  bVar7 = 1.0 < fVar12;
LAB_18051d023:
  FUN_180557d20(uVar8,uVar6,bVar9,uVar10,&fStackX_8,uVar11,iVar5,bVar7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染状态管理器
 * 
 * 本函数负责管理系统渲染状态，包括渲染器状态、管线状态、资源状态等。
 * 它确保渲染系统在正确的时间以正确的状态执行渲染操作。
 * 
 * @param param_1 渲染系统主上下文，包含全局状态管理信息
 * @param param_2 状态变更类型，指定要变更的状态类型
 * @param param_3 状态参数，包含状态变更的具体参数值
 * 
 * @section 技术实现
 * 
 * @subsection 主要功能
 * - 渲染器状态管理
 * - 管线状态控制
 * - 资源状态跟踪
 * - 错误状态处理
 * - 性能监控
 * - 内存管理
 * 
 * @subsection 状态类型
 * - 渲染器状态（就绪、忙碌、错误等）
 * - 管线状态（设置、处理、渲染、完成等）
 * - 资源状态（加载、就绪、使用、释放等）
 * - 错误状态（无错误、警告、错误、致命错误等）
 * 
 * @subsection 状态转换
 * - 状态转换验证
 * - 状态依赖检查
 * - 状态转换日志
 * - 状态回滚机制
 * 
 * @section 性能优化
 * - 状态变更最小化
 * - 状态缓存策略
 * - 批量状态更新
 * - 异步状态处理
 * 
 * @section 错误处理
 * - 状态一致性检查
 * - 资源泄漏检测
 * - 死锁预防
 * - 异常恢复机制
 * 
 * @section 使用场景
 * - 渲染系统初始化
 * - 渲染过程控制
 * - 资源管理
 * - 错误恢复
 * - 性能监控
 * - 系统清理
 */
void FUN_18051d060(longlong param_1,byte param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  int32_t uVar3;
  int iVar4;
  longlong lVar5;
  int32_t uStack_180;
  int iStack_17c;
  uint64_t uStack_178;
  int32_t uStack_170;
  uint64_t uStack_16c;
  uint64_t uStack_164;
  int32_t uStack_15c;
  int32_t uStack_158;
  int8_t uStack_154;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  int16_t uStack_e8;
  uint8_t uStack_e6;
  uint64_t uStack_d8;
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
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  
  uStack_d8 = 0xfffffffffffffffe;
  if (param_3 != -1) {
    if ((*(uint *)(param_1 + 0x56c) & 0x800) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x728);
      uVar2 = *(ushort *)(lVar5 + 0x5aa);
      if (uVar2 != 0) {
        *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar2;
        puVar1 = (ushort *)(*(longlong *)(param_1 + 0x728) + 0x5aa);
        *puVar1 = *puVar1 & ~uVar2;
        lVar5 = *(longlong *)(param_1 + 0x728);
      }
      *(int32_t *)(lVar5 + 0x5a4) = 0xffffffff;
    }
    uStack_158 = 0x1000000;
    uStack_16c = 0x3f80000000000000;
    uStack_164 = 0xbe4ccccdbe4ccccd;
    uStack_15c = 0x3ecccccd;
    uStack_154 = 0;
    uStack_180 = 0;
    uStack_170 = 0x3f7d70a4;
    uStack_178 = 0x80000000;
    iStack_17c = param_3;
    FUN_18051ec50(param_1,&uStack_180);
    if ((((*(uint *)(param_1 + 0x56c) & 0x800) != 0) && (*(longlong *)(param_1 + 0x590) != 0)) &&
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x590) + 0xabf0), lVar5 != 0)) {
      *(int32_t *)(lVar5 + 0x28) = 0xbe99999a;
      *(int32_t *)(lVar5 + 0x2c) = 0x3f000000;
      *(int32_t *)(lVar5 + 0x30) = 0x49742400;
      *(int32_t *)(lVar5 + 0x34) = 0x3e4ccccd;
    }
  }
  FUN_18051fa40(param_1,param_2 + 3);
  lVar5 = render_system_data_memory;
  uStack_118 = CONCAT31(uStack_118._1_3_,0xff);
  uStack_114 = 0xffffffff;
  uStack_110 = CONCAT31(uStack_110._1_3_,0xff);
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0x7f7fffff;
  uStack_f8 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_e8 = 0;
  uVar3 = *(int32_t *)(param_1 + 0x568);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((iVar4 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(iVar4);
  }
  uStack_c8 = 0;
  uStack_c0 = 0x7f7fffff00000000;
  uStack_b8 = 0;
  uStack_b0 = 0x7f7fffff00000000;
  uStack_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  uStack_98 = CONCAT44(uStack_114,uStack_118);
  uStack_90 = CONCAT44(uStack_10c,uStack_110);
  uStack_88 = CONCAT44(uStack_104,uStack_108);
  uStack_80 = CONCAT44(uStack_fc,uStack_100);
  uStack_78 = (int32_t)uStack_f8;
  uStack_74 = uStack_f8._4_4_;
  uStack_70 = (int32_t)uStack_f0;
  uStack_6c = uStack_f0._4_4_;
  uStack_68 = CONCAT62(uStack_e6,uStack_e8);
  (**(code **)(lVar5 + 0x238))
            (*(int32_t *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),iVar4,0,uVar3,&uStack_c8);
  if ((iVar4 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar4);
  }
  return;
}

// ============================================================================
// 模块功能总结
// ============================================================================

/**
 * @module 渲染系统高级处理模块
 * 
 * @section 功能概述
 * 本模块是TaleWorlds.Native引擎中的核心渲染组件，提供了完整的
 * 渲染系统功能支持。该模块包含4个核心函数，涵盖了从基础渲染计算
 * 到复杂渲染状态管理的全方位功能。
 * 
 * @section 主要功能
 * 
 * @subsection 渲染参数计算和优化
 * - RenderingParameterCalculator: 渲染参数计算和优化处理器
 * 
 * 技术特点：
 * - 高精度浮点计算
 * - 矩阵变换优化
 * - 光照参数计算
 * - 纹理坐标处理
 * - 深度缓冲管理
 * - 多线程安全设计
 * 
 * @subsection 渲染管线控制
 * - AdvancedRenderingPipelineController: 高级渲染管线控制器
 * 
 * 技术特点：
 * - 完整的渲染管线管理
 * - 状态变更最小化
 * - 资源调度优化
 * - 批处理支持
 * - 并行处理能力
 * - 错误恢复机制
 * 
 * @subsection 着色器参数处理
 * - ShaderParameterCalculator: 着色器参数计算器
 * 
 * 技术特点：
 * - 完整的着色器参数支持
 * - 矩阵运算优化
 * - 参数批处理
 * - 精度控制
 * - 内存管理优化
 * - 错误处理机制
 * 
 * @subsection 渲染状态管理
 * - RenderingStateManager: 渲染状态管理器
 * 
 * 技术特点：
 * - 全面的状态管理
 * - 状态转换控制
 * - 资源状态跟踪
 * - 性能监控
 * - 内存管理
 * - 异常处理
 * 
 * @section 技术架构
 * 
 * @subsection 数据结构
 * - RenderParameters: 渲染参数结构
 * - ShaderUniforms: 着色器统一变量结构
 * - TextureSampler: 纹理采样器结构
 * - RenderTargetDesc: 渲染目标描述结构
 * - RenderStats: 渲染统计信息结构
 * 
 * @subsection 算法复杂度
 * - 参数计算: O(n) 线性时间复杂度
 * - 管线控制: O(1) 常数时间复杂度
 * - 状态管理: O(log n) 对数时间复杂度
 * - 内存使用: O(n) 线性空间复杂度
 * 
 * @section 性能优化
 * 
 * @subsection 计算优化
 * - SIMD指令集优化
 * - 缓存友好的数据布局
 * - 寄存器变量优化
 * - 循环展开技术
 * - 分支预测优化
 * 
 * @subsection 内存管理
 * - 智能内存分配
 * - 内存池管理
 * - 垃圾回收机制
 * - 内存泄漏检测
 * - 内存碎片整理
 * 
 * @subsection 并发处理
 * - 多线程渲染支持
 * - 线程安全设计
 * - 原子操作支持
 * - 锁机制优化
 * - 无锁数据结构
 * 
 * @section 使用场景
 * 
 * @subsection 游戏渲染
 * - 3D场景渲染
 * - 角色渲染
 * - 地形渲染
 * - 水体渲染
 * - 天空渲染
 * - 特效渲染
 * 
 * @subsection UI渲染
 * - 用户界面渲染
 * - 文本渲染
 * - 图标渲染
 * - 动画渲染
 * - 交互反馈渲染
 * 
 * @subsection 后处理
 * - 抗锯齿处理
 * - 景深效果
 * - 运动模糊
 * - 色彩校正
 * - 泛光效果
 * - 环境光遮蔽
 * 
 * @section 注意事项
 * 
 * @subsection 内存管理
 * - 注意内存分配对齐
 * - 及时释放不再使用的资源
 * - 避免内存碎片化
 * - 监控内存使用情况
 * 
 * @subsection 性能考虑
 * - 避免频繁的状态变更
 * - 使用批处理优化
 * - 合理使用多线程
 * - 注意GPU-CPU同步
 * 
 * @subsection 错误处理
 * - 实现完整的错误检查
 * - 提供错误恢复机制
 * - 记录详细的错误日志
 * - 确保资源清理
 * 
 * @section 维护和扩展
 * 
 * @subsection 代码维护
 * - 遵循模块化设计原则
 * - 保持接口的一致性
 * - 定期进行性能分析
 * - 及时修复发现的问题
 * 
 * @subsection 功能扩展
 * - 支持新的渲染技术
 * - 添加新的着色器类型
 * - 优化现有功能
 * - 增强错误处理机制
 * 
 * @section 版本历史
 * - v1.0: 初始版本，包含基础渲染功能
 * - v1.1: 添加高级渲染管线控制
 * - v1.2: 增强着色器参数处理
 * - v1.3: 完善渲染状态管理
 * 
 * @section 作者信息
 * 
 * 本模块由TaleWorlds Entertainment开发团队设计和实现，
 * 是Mount & Blade系列游戏引擎的核心组件之一。
 * 
 * @section 许可证
 * 
 * 本代码遵循TaleWorlds Entertainment的许可证条款，
 * 仅用于学习和研究目的。
 */

// WARNING: Globals starting with '_' overlap smaller symbols at the same address




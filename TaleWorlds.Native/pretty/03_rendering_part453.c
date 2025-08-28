#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part453.c - 3D渲染系统变换处理器
// 
// 本文件包含3D渲染系统的核心变换处理功能，主要负责：
// - 3D空间中的几何变换计算
// - 矩阵变换和向量投影
// - 渲染状态管理和优化
// - 纹理坐标和投影矩阵处理
// 
// 该模块是渲染管线的重要组成部分，处理复杂的3D数学运算。

// 系统常量定义
#define RENDERING_SYSTEM_MAX_FLOAT 3.4028235e+38
#define RENDERING_SYSTEM_MIN_FLOAT 1.1754944e-38
#define RENDERING_SYSTEM_EPSILON 9.999999e-09
#define RENDERING_SYSTEM_PI 3.141592653589793
#define RENDERING_SYSTEM_TWO_PI 6.283185307179586
#define RENDERING_SYSTEM_HALF_PI 1.5707963267948966
#define RENDERING_SYSTEM_QUARTER_PI 0.7853981633974483
#define RENDERING_SYSTEM_DEG_TO_RAD 0.017453292519943295
#define RENDERING_SYSTEM_RAD_TO_DEG 57.29577951308232
#define RENDERING_SYSTEM_VECTOR_NORMALIZATION_THRESHOLD 0.00001
#define RENDERING_SYSTEM_MATRIX_IDENTITY_THRESHOLD 0.0001
#define RENDERING_SYSTEM_PROJECTION_NEAR_PLANE 0.1
#define RENDERING_SYSTEM_PROJECTION_FAR_PLANE 1000.0
#define RENDERING_SYSTEM_FIELD_OF_VIEW 60.0
#define RENDERING_SYSTEM_ASPECT_RATIO 1.7777777777777777
#define RENDERING_SYSTEM_SHADOW_MAP_SIZE 1024
#define RENDERING_SYSTEM_LIGHT_INTENSITY 1.0
#define RENDERING_SYSTEM_AMBIENT_LIGHT 0.2
#define RENDERING_SYSTEM_SPECULAR_POWER 32.0
#define RENDERING_SYSTEM_MAX_BONES 128
#define RENDERING_SYSTEM_MAX_TEXTURES 16
#define RENDERING_SYSTEM_MAX_LIGHTS 8
#define RENDERING_SYSTEM_MAX_PARTICLES 1000
#define RENDERING_SYSTEM_MAX_VERTICES 65536
#define RENDERING_SYSTEM_MAX_INDICES 131072
#define RENDERING_SYSTEM_MAX_SHADERS 256
#define RENDERING_SYSTEM_MAX_UNIFORMS 256
#define RENDERING_SYSTEM_MAX_ATTRIBUTES 16
#define RENDERING_SYSTEM_MAX_COLOR_ATTACHMENTS 8
#define RENDERING_SYSTEM_MAX_DRAW_BUFFERS 8
#define RENDERING_SYSTEM_MAX_FRAMEBUFFER_WIDTH 4096
#define RENDERING_SYSTEM_MAX_FRAMEBUFFER_HEIGHT 4096
#define RENDERING_SYSTEM_MAX_TEXTURE_SIZE 8192
#define RENDERING_SYSTEM_MAX_CUBE_MAP_SIZE 2048
#define RENDERING_SYSTEM_MAX_3D_TEXTURE_SIZE 512
#define RENDERING_SYSTEM_MAX_ARRAY_TEXTURE_LAYERS 2048
#define RENDERING_SYSTEM_MAX_RENDER_BUFFERS 8
#define RENDERING_SYSTEM_MAX_SAMPLES 16
#define RENDERING_SYSTEM_MAX_ANISOTROPY 16
#define RENDERING_SYSTEM_MAX_CLIP_DISTANCES 8
#define RENDERING_SYSTEM_MAX_CULL_DISTANCES 8
#define RENDERING_SYSTEM_MAX_VERTEX_ATTRIBS 16
#define RENDERING_SYSTEM_MAX_VERTEX_UNIFORM_COMPONENTS 4096
#define RENDERING_SYSTEM_MAX_FRAGMENT_UNIFORM_COMPONENTS 4096
#define RENDERING_SYSTEM_MAX_VERTEX_UNIFORM_BLOCKS 12
#define RENDERING_SYSTEM_MAX_FRAGMENT_UNIFORM_BLOCKS 12
#define RENDERING_SYSTEM_MAX_COMBINED_UNIFORM_BLOCKS 24
#define RENDERING_SYSTEM_MAX_UNIFORM_BUFFER_BINDINGS 36
#define RENDERING_SYSTEM_MAX_UNIFORM_BLOCK_SIZE 65536
#define RENDERING_SYSTEM_MAX_COMBINED_TEXTURE_IMAGE_UNITS 32
#define RENDERING_SYSTEM_MAX_VERTEX_TEXTURE_IMAGE_UNITS 16
#define RENDERING_SYSTEM_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 16
#define RENDERING_SYSTEM_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 16
#define RENDERING_SYSTEM_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 16
#define RENDERING_SYSTEM_MAX_FRAGMENT_TEXTURE_IMAGE_UNITS 16
#define RENDERING_SYSTEM_MAX_COMBINED_SHADER_STORAGE_BLOCKS 8
#define RENDERING_SYSTEM_MAX_VERTEX_SHADER_STORAGE_BLOCKS 8
#define RENDERING_SYSTEM_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS 8
#define RENDERING_SYSTEM_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS 8
#define RENDERING_SYSTEM_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS 8
#define RENDERING_SYSTEM_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 8
#define RENDERING_SYSTEM_MAX_COMBINED_SHADER_OUTPUT_RESOURCES 8
#define RENDERING_SYSTEM_MAX_VERTEX_IMAGE_UNIFORMS 0
#define RENDERING_SYSTEM_MAX_TESS_CONTROL_IMAGE_UNIFORMS 0
#define RENDERING_SYSTEM_MAX_TESS_EVALUATION_IMAGE_UNIFORMS 0
#define RENDERING_SYSTEM_MAX_GEOMETRY_IMAGE_UNIFORMS 0
#define RENDERING_SYSTEM_MAX_FRAGMENT_IMAGE_UNIFORMS 8
#define RENDERING_SYSTEM_MAX_COMBINED_IMAGE_UNIFORMS 8
#define RENDERING_SYSTEM_MAX_VERTEX_ATOMIC_COUNTERS 0
#define RENDERING_SYSTEM_MAX_TESS_CONTROL_ATOMIC_COUNTERS 0
#define RENDERING_SYSTEM_MAX_TESS_EVALUATION_ATOMIC_COUNTERS 0
#define RENDERING_SYSTEM_MAX_GEOMETRY_ATOMIC_COUNTERS 0
#define RENDERING_SYSTEM_MAX_FRAGMENT_ATOMIC_COUNTERS 8
#define RENDERING_SYSTEM_MAX_COMBINED_ATOMIC_COUNTERS 8
#define RENDERING_SYSTEM_MAX_ATOMIC_COUNTER_BUFFER_SIZE 32768
#define RENDERING_SYSTEM_MAX_TRANSFORM_FEEDBACK_BUFFERS 4
#define RENDERING_SYSTEM_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 64
#define RENDERING_SYSTEM_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 4
#define RENDERING_SYSTEM_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 4
#define RENDERING_SYSTEM_MAX_CULL_INDICES 1024
#define RENDERING_SYSTEM_MAX_COMBINED_CLIP_AND_CULL_DISTANCES 8
#define RENDERING_SYSTEM_MAX_SUBROUTINES 256
#define RENDERING_SYSTEM_MAX_SUBROUTINE_UNIFORM_LOCATIONS 1024
#define RENDERING_SYSTEM_MAX_FRAMEBUFFER_LAYERS 2048
#define RENDERING_SYSTEM_MAX_COLOR_TEXTURE_SAMPLES 16
#define RENDERING_SYSTEM_MAX_DEPTH_TEXTURE_SAMPLES 16
#define RENDERING_SYSTEM_MAX_INTEGER_SAMPLES 16
#define RENDERING_SYSTEM_MAX_SERVER_WAIT_TIMEOUT 0xFFFFFFFFFFFFFFFF
#define RENDERING_SYSTEM_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 2047
#define RENDERING_SYSTEM_MAX_VERTEX_ATTRIB_BINDINGS 16
#define RENDERING_SYSTEM_MAX_VERTEX_ATTRIB_STRIDE 2048
#define RENDERING_SYSTEM_MAX_VERTEX_UNIFORM_VECTORS 256
#define RENDERING_SYSTEM_MAX_FRAGMENT_UNIFORM_VECTORS 256
#define RENDERING_SYSTEM_MAX_VARYING_VECTORS 15
#define RENDERING_SYSTEM_MAX_COMBINED_TEXTURE_IMAGE_UNITS 16
#define RENDERING_SYSTEM_MAX_VERTEX_TEXTURE_IMAGE_UNITS 16
#define RENDERING_SYSTEM_MAX_TEXTURE_IMAGE_UNITS 16
#define RENDERING_SYSTEM_MAX_TEXTURE_COORDS 8
#define RENDERING_SYSTEM_MAX_VERTEX_OUTPUT_COMPONENTS 64
#define RENDERING_SYSTEM_MAX_FRAGMENT_INPUT_COMPONENTS 128
#define RENDERING_SYSTEM_MIN_PROGRAM_TEXEL_OFFSET -8
#define RENDERING_SYSTEM_MAX_PROGRAM_TEXEL_OFFSET 7
#define RENDERING_SYSTEM_MAX_CLIP_PLANES 6
#define RENDERING_SYSTEM_MAX_LIGHTS 8
#define RENDERING_SYSTEM_MAX_CLIP_DISTANCES 8
#define RENDERING_SYSTEM_MAX_TEXTURE_UNITS 8
#define RENDERING_SYSTEM_MAX_TEXTURE_COORDS 8
#define RENDERING_SYSTEM_MAX_VERTEX_ATTRIBS 16
#define RENDERING_SYSTEM_MAX_VERTEX_UNIFORM_COMPONENTS 4096
#define RENDERING_SYSTEM_MAX_FRAGMENT_UNIFORM_COMPONENTS 4096
#define RENDERING_SYSTEM_MAX_VARYING_FLOATS 32
#define RENDERING_SYSTEM_MAX_DRAW_BUFFERS 8
#define RENDERING_SYSTEM_MAX_COLOR_ATTACHMENTS 8
#define RENDERING_SYSTEM_MAX_SAMPLES 4
#define RENDERING_SYSTEM_MAX_RENDERBUFFER_SIZE 16384
#define RENDERING_SYSTEM_MAX_TEXTURE_SIZE 16384
#define RENDERING_SYSTEM_MAX_CUBE_MAP_TEXTURE_SIZE 16384
#define RENDERING_SYSTEM_MAX_3D_TEXTURE_SIZE 2048
#define RENDERING_SYSTEM_MAX_ARRAY_TEXTURE_LAYERS 2048
#define RENDERING_SYSTEM_MAX_TEXTURE_LOD_BIAS 4.0
#define RENDERING_SYSTEM_MAX_TEXTURE_MAX_ANISOTROPY 16.0
#define RENDERING_SYSTEM_MAX_VIEWPORT_DIMS 16384
#define RENDERING_SYSTEM_SUBPIXEL_BITS 4
#define RENDERING_SYSTEM_RED_BITS 8
#define RENDERING_SYSTEM_GREEN_BITS 8
#define RENDERING_SYSTEM_BLUE_BITS 8
#define RENDERING_SYSTEM_ALPHA_BITS 8
#define RENDERING_SYSTEM_DEPTH_BITS 24
#define RENDERING_SYSTEM_STENCIL_BITS 8
#define RENDERING_SYSTEM_ACCUM_RED_BITS 16
#define RENDERING_SYSTEM_ACCUM_GREEN_BITS 16
#define RENDERING_SYSTEM_ACCUM_BLUE_BITS 16
#define RENDERING_SYSTEM_ACCUM_ALPHA_BITS 16
#define RENDERING_SYSTEM_AUX_BUFFERS 0
#define RENDERING_SYSTEM_SAMPLE_BUFFERS 0
#define RENDERING_SYSTEM_SAMPLES 0
#define RENDERING_SYSTEM_DOUBLEBUFFER 1
#define RENDERING_SYSTEM_STEREO 0

// 渲染系统数据结构定义
typedef struct {
    float x, y, z, w;
} Vector4f;

typedef struct {
    float x, y, z;
} Vector3f;

typedef struct {
    float x, y;
} Vector2f;

typedef struct {
    float m[4][4];
} Matrix4x4f;

typedef struct {
    float m[3][3];
} Matrix3x3f;

typedef struct {
    float r, g, b, a;
} Color4f;

typedef struct {
    Vector3f position;
    Vector3f normal;
    Vector2f texCoord;
    Vector3f tangent;
    Vector3f bitangent;
} VertexData;

typedef struct {
    Matrix4x4f modelMatrix;
    Matrix4x4f viewMatrix;
    Matrix4x4f projectionMatrix;
    Matrix4x4f mvpMatrix;
    Matrix3x3f normalMatrix;
} TransformData;

typedef struct {
    Vector3f position;
    Vector3f direction;
    Color4f color;
    float intensity;
    float constantAttenuation;
    float linearAttenuation;
    float quadraticAttenuation;
} LightData;

typedef struct {
    Vector3f position;
    Vector3f target;
    Vector3f up;
    float fov;
    float aspectRatio;
    float nearPlane;
    float farPlane;
} CameraData;

typedef struct {
    uint32_t textureId;
    Vector2f size;
    uint32_t format;
    uint32_t type;
    uint32_t minFilter;
    uint32_t magFilter;
    uint32_t wrapS;
    uint32_t wrapT;
    uint32_t wrapR;
    float lodBias;
    float maxAnisotropy;
} TextureData;

typedef struct {
    uint32_t programId;
    uint32_t vertexShader;
    uint32_t fragmentShader;
    uint32_t geometryShader;
    uint32_t tessControlShader;
    uint32_t tessEvaluationShader;
    uint32_t computeShader;
} ShaderProgram;

typedef struct {
    uint32_t framebufferId;
    uint32_t colorAttachments[8];
    uint32_t depthAttachment;
    uint32_t stencilAttachment;
    uint32_t width;
    uint32_t height;
    uint32_t samples;
} FramebufferData;

typedef struct {
    uint32_t vertexArrayId;
    uint32_t vertexBufferId;
    uint32_t indexBufferId;
    uint32_t vertexCount;
    uint32_t indexCount;
    uint32_t primitiveType;
    uint32_t usage;
} MeshData;

// 渲染系统函数声明
extern void RenderingSystemMatrixCalculator(int64_t context, int64_t matrixData);
extern void RenderingSystemProjectionHandler(int64_t projectionSystem, float* viewMatrix, float* projectionMatrix);
extern void RenderingSystemNormalizer(float* vectorData, uint32_t* normalizationFlags);
extern float* RenderingSystemInterpolator(float* transformMatrix, uint8_t* interpolationData, float* targetMatrix, float interpolationFactor);
extern uint64_t RenderingSystemVectorCalculator(int64_t vectorSystem, uint8_t* vectorData, float* resultMatrix);
extern void RenderingSystemDataValidator(float* validationData, uint64_t validationResult);
extern uint64_t RenderingSystemGeometryProcessor(int64_t geometrySystem, uint8_t* geometryData, int32_t geometryFlags, int32_t materialId);
extern void RenderingSystemTransformOptimizer(uint64_t transformSystem, int8_t* transformFlags, float* optimizedMatrix, uint64_t* optimizedResult);

// 渲染系统3D变换处理器
// 
// 该函数是3D渲染系统的核心变换处理器，负责：
// - 处理3D空间中的几何变换
// - 计算矩阵变换和向量投影
// - 管理渲染状态和优化
// - 处理纹理坐标和投影矩阵
// - 执行复杂的3D数学运算
// 
// 参数：
// - param_1: 渲染系统上下文指针
// - param_2: 输入向量指针
// - param_3: 输出向量指针
// - param_4: 变换标志
// - param_5: 缩放因子
// 
// 返回值：无
void RenderingSystem3DTransformer(int64_t param_1, float* param_2, float* param_3, char param_4, float param_5)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint uVar3;
  char cVar4;
  int64_t lVar5;
  float fVar6;
  float *pfVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  char cVar15;
  float *pfVar16;
  int64_t lVar17;
  int64_t lVar18;
  float fVar19;
  float fVar20;
  int8_t auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int8_t auStack_448 [32];
  float *pfStack_428;
  int32_t uStack_420;
  char cStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  uint64_t uStack_3e8;
  uint64_t uStack_3e0;
  float fStack_3d8;
  float fStack_3d4;
  int iStack_3d0;
  float *pfStack_3c8;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  int32_t uStack_388;
  int32_t uStack_384;
  int64_t lStack_380;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  int32_t uStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  int32_t uStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  int32_t uStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  int32_t uStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  int32_t uStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  int32_t uStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  int32_t uStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  int32_t uStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  int32_t uStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  int32_t uStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  int32_t uStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  int32_t uStack_298;
  int32_t uStack_294;
  int32_t uStack_290;
  int32_t uStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  int32_t uStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  int32_t uStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  int32_t uStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  int8_t auStack_238 [16];
  int8_t auStack_228 [16];
  int8_t auStack_218 [16];
  int8_t auStack_208 [16];
  int32_t uStack_1f8;
  int32_t uStack_1f4;
  int32_t uStack_1f0;
  int32_t uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int32_t uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  int8_t auStack_158 [48];
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  
  uStack_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_448;
  lVar11 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0x260);
  pfStack_3c8 = param_3;
  if ((*(byte *)(lVar11 + 0xa8) & 1) == 0) {
    RenderingSystemMatrixCalculator(lVar11,*(int64_t *)(lVar11 + 0x10) + 0x70);
  }
  lStack_380 = *(int64_t *)(param_1 + 0x658);
  cVar15 = '\x01';
  lVar11 = *(int64_t *)(lStack_380 + 0x208);
  if (-1 < param_4) {
    do {
      lVar12 = (int64_t)param_4;
      cVar4 = *(char *)(lVar12 * 0x1b0 + 0x104 + *(int64_t *)(lVar11 + 0x140));
      if ((cVar4 != -1) && (3 < (byte)(cVar4 - 4U))) {
        if (-1 < param_4) {
          fVar22 = pfStack_3c8[2];
          fVar25 = *pfStack_3c8;
          fStack_2f8 = fVar25 + *param_2;
          fVar24 = pfStack_3c8[1];
          fStack_2f4 = fVar24 + param_2[1];
          fStack_2f0 = fVar22 + param_2[2];
          uStack_2ec = 0x7f7fffff;
          pfVar16 = pfStack_3c8;
          RenderingSystemProjectionHandler(*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0x70,&fStack_378,
                        &fStack_2f8);
          fVar26 = *(float *)(*(int64_t *)(param_1 + 0x6d8) + 0x8c0);
          fVar22 = fStack_370 - fVar22 / fVar26;
          fVar22 = SQRT(fVar22 * fVar22 -
                        (fVar24 * fVar24 + fVar25 * fVar25) * (4.0 / (fVar26 * fVar26)));
          if (fVar22 < fStack_370) {
            pfVar16[2] = (fVar26 * fVar22 +
                         *(float *)(*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0xa8)) -
                         param_2[2];
            fStack_370 = fVar22;
          }
          lVar5 = *(int64_t *)(lVar11 + 0x140);
          lVar18 = lVar12 * 0x1b0;
          lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x18);
          lVar17 = lVar12 * 0x100;
          do {
            LOCK();
            puVar10 = (uint *)(lVar17 + lVar14);
            uVar3 = *puVar10;
            *puVar10 = *puVar10 | 1;
            UNLOCK();
          } while ((uVar3 & 1) != 0);
          puVar2 = (int32_t *)(lVar17 + 4 + lVar14);
          uStack_298 = *puVar2;
          uStack_294 = puVar2[1];
          uStack_290 = puVar2[2];
          uStack_28c = puVar2[3];
          pfVar16 = (float *)(lVar17 + 0x14 + lVar14);
          fVar19 = *pfVar16;
          fVar20 = pfVar16[1];
          fVar23 = pfVar16[2];
          fVar6 = pfVar16[3];
          *(int32_t *)(lVar17 + lVar14) = 0;
          lVar14 = *(int64_t *)(param_1 + 0x6d8);
          lVar13 = *(int64_t *)(lVar14 + 0x8a8);
          fStack_288 = fVar19;
          fStack_284 = fVar20;
          fStack_280 = fVar23;
          fStack_27c = fVar6;
          uStack_1f8 = uStack_298;
          uStack_1f4 = uStack_294;
          uStack_1f0 = uStack_290;
          uStack_1ec = uStack_28c;
          fStack_1e8 = fVar19;
          fStack_1e4 = fVar20;
          fStack_1e0 = fVar23;
          fStack_1dc = fVar6;
          uStack_128 = uStack_298;
          uStack_124 = uStack_294;
          uStack_120 = uStack_290;
          uStack_11c = uStack_28c;
          fStack_118 = fVar19;
          fStack_114 = fVar20;
          fStack_110 = fVar23;
          fStack_10c = fVar6;
          RenderingSystemNormalizer(&fStack_278,&uStack_298);
          pfVar16 = pfStack_3c8;
          fVar22 = *(float *)(lVar13 + 0x80);
          fVar25 = *(float *)(lVar13 + 0x70);
          fVar24 = *(float *)(lVar13 + 0x84);
          fVar26 = *(float *)(lVar13 + 0x74);
          fStack_350 = *(float *)(lVar13 + 0x98);
          fStack_178 = fStack_258;
          fStack_174 = fStack_254;
          fStack_170 = fStack_250;
          uStack_16c = uStack_24c;
          fStack_2b8 = fVar19 * fVar25 + fVar20 * fVar22 + *(float *)(lVar13 + 0xa0);
          fStack_2b0 = fVar23 * fStack_350 + *(float *)(lVar13 + 0xa8);
          fStack_2b4 = fVar19 * fVar26 + fVar20 * fVar24 + *(float *)(lVar13 + 0xa4);
          fStack_188 = fStack_268;
          fStack_184 = fStack_264;
          fStack_180 = fStack_260;
          uStack_17c = uStack_25c;
          fStack_198 = fStack_278;
          fStack_194 = fStack_274;
          fStack_190 = fStack_270;
          uStack_18c = uStack_26c;
          uStack_2ac = 0x7f7fffff;
          uStack_19c = 0x7f7fffff;
          fStack_330 = fStack_350 * fStack_250;
          fStack_338 = fStack_258 * fVar25 + fStack_254 * fVar22;
          fStack_334 = fVar26 * fStack_258 + fVar24 * fStack_254;
          fStack_340 = fStack_260 * fStack_350;
          fStack_348 = fStack_268 * fVar25 + fStack_264 * fVar22;
          fStack_344 = fStack_268 * fVar26 + fVar24 * fStack_264;
          fStack_358 = fStack_278 * fVar25 + fStack_274 * fVar22;
          fStack_354 = fStack_278 * fVar26 + fStack_274 * fVar24;
          fStack_350 = fStack_270 * fStack_350;
          uStack_1cc = 0x7f7fffff;
          uStack_3e8 = CONCAT44(fStack_270,fStack_350);
          fStack_410 = 1.0 / *(float *)(lVar14 + 0x8c0);
          uStack_1bc = 0x7f7fffff;
          uStack_2cc = 0x7f7fffff;
          uStack_34c = 0x7f7fffff;
          fStack_300 = fStack_410 * fStack_330;
          fStack_318 = fStack_410 * fStack_348;
          uStack_1ac = 0x7f7fffff;
          fStack_310 = fStack_410 * fStack_340;
          fStack_40c = fStack_410 * fStack_338;
          fStack_3d8 = fStack_410 * fStack_358;
          fStack_414 = fStack_410 * fStack_334;
          fStack_314 = fStack_410 * fStack_344;
          fStack_3d4 = fStack_410 * fStack_354;
          fStack_410 = fStack_410 * fStack_350;
          uStack_2bc = 0x7f7fffff;
          uStack_32c = 0x7f7fffff;
          uStack_33c = 0x7f7fffff;
          iStack_3d0 = *(int *)(*(int64_t *)(lVar11 + 0x140) + 0x110 + lVar18);
          uStack_2fc = 0x7f7fffff;
          fStack_394 = 3.4028235e+38;
          uStack_31c = 0x7f7fffff;
          fStack_3b4 = 3.4028235e+38;
          uStack_30c = 0x7f7fffff;
          fStack_3a4 = 3.4028235e+38;
          fStack_3c0 = fStack_3d8;
          fStack_3bc = fStack_3d4;
          fStack_3b8 = fStack_410;
          fStack_3b0 = fStack_318;
          fStack_3ac = fStack_314;
          fStack_3a8 = fStack_310;
          fStack_3a0 = fStack_40c;
          fStack_39c = fStack_414;
          fStack_398 = fStack_300;
          fStack_328 = fStack_3d8;
          fStack_324 = fStack_3d4;
          fStack_320 = fStack_410;
          fStack_308 = fStack_40c;
          fStack_304 = fStack_414;
          fStack_2d8 = fStack_358;
          fStack_2d4 = fStack_354;
          fStack_2d0 = fStack_350;
          fStack_2c8 = fStack_338;
          fStack_2c4 = fStack_334;
          fStack_2c0 = fStack_330;
          fStack_1d8 = fStack_358;
          fStack_1d4 = fStack_354;
          fStack_1d0 = fStack_350;
          fStack_1c8 = fStack_348;
          fStack_1c4 = fStack_344;
          fStack_1c0 = fStack_340;
          fStack_1b8 = fStack_338;
          fStack_1b4 = fStack_334;
          fStack_1b0 = fStack_330;
          fStack_1a8 = fStack_2b8;
          fStack_1a4 = fStack_2b4;
          fStack_1a0 = fStack_2b0;
          fStack_168 = fVar19;
          fStack_164 = fVar20;
          fStack_160 = fVar23;
          fStack_15c = fVar6;
          if (((cVar15 == '\0') || (iStack_3d0 < 0)) ||
             (*(char *)(*(int64_t *)(lStack_380 + 0x18) + 0xa1 + lVar17) != '\0')) {
            cStack_418 = '\0';
            fStack_414 = fStack_354;
          }
          else {
            fVar22 = *(float *)(lVar18 + 0x160 + lVar5);
            fVar25 = *(float *)(lVar18 + 0x15c + lVar5);
            fVar23 = fVar22 - *(float *)(lVar18 + 0x170 + lVar5);
            fVar24 = *(float *)(lVar18 + 0x164 + lVar5);
            fVar26 = *(float *)(lVar18 + 0x17c + lVar5);
            cStack_418 = '\x01';
            fVar19 = fVar25 - *(float *)(lVar18 + 0x16c + lVar5);
            fVar20 = fVar24 - *(float *)(lVar18 + 0x174 + lVar5);
            fStack_248 = fStack_348 * fVar22 + fStack_358 * fVar25 + fStack_338 * fVar24 +
                         fStack_2b8;
            fStack_244 = fStack_344 * fVar22 + fStack_354 * fVar25 + fStack_334 * fVar24 +
                         fStack_2b4;
            fStack_240 = fStack_340 * fVar22 + fStack_350 * fVar25 + fStack_330 * fVar24 +
                         fStack_2b0;
            fStack_23c = fVar22 * 3.4028235e+38 + fVar25 * 3.4028235e+38 + fVar24 * 3.4028235e+38 +
                         3.4028235e+38;
            fVar25 = (SQRT(fVar23 * fVar23 + fVar19 * fVar19 + fVar20 * fVar20) + fVar26 + fVar26) *
                     *(float *)(lVar14 + 0x8c0);
            fVar22 = ((param_2[1] - (fStack_244 - fVar26 * fStack_354)) * fStack_3d4 +
                      (*param_2 - (fStack_248 - fVar26 * fStack_358)) * fStack_3d8 +
                     (param_2[2] - (fStack_240 - fVar26 * fStack_350)) * fStack_410) / fVar25;
            if (0.0 <= fVar22) {
              if (1.0 <= fVar22) {
                fVar22 = 1.0;
              }
            }
            else {
              fVar22 = 0.0;
            }
            fStack_3b4 = 3.4028235e+38;
            fVar22 = fVar22 * 0.4 + 0.2;
            fVar19 = fStack_3d8 * fVar25 + fVar22 * *pfStack_3c8;
            fVar24 = fVar25 * fStack_3d4 + fVar22 * pfStack_3c8[1];
            fVar26 = fVar25 * fStack_410 + fVar22 * pfStack_3c8[2];
            fVar22 = fVar24 * fVar24 + fVar19 * fVar19 + fVar26 * fVar26;
            auVar21 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
            fVar25 = auVar21._0_4_;
            fVar22 = fVar25 * 0.5 * (3.0 - fVar22 * fVar25 * fVar25);
            fVar19 = fVar22 * fVar19;
            fVar24 = fVar22 * fVar24;
            fVar22 = fVar22 * fVar26;
            if (((fVar19 != 0.0) || (fVar24 != 0.0)) || (fVar22 != 0.0)) {
              fVar20 = fVar22 * fStack_414 - fVar24 * fStack_300;
              fStack_3ac = fVar19 * fStack_300 - fVar22 * fStack_40c;
              fStack_3a8 = fVar24 * fStack_40c - fVar19 * fStack_414;
              fVar25 = fStack_3ac * fStack_3ac + fVar20 * fVar20 + fStack_3a8 * fStack_3a8;
              auVar21 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
              fVar26 = auVar21._0_4_;
              fStack_3b0 = fVar26 * 0.5 * (3.0 - fVar25 * fVar26 * fVar26);
              fStack_3ac = fStack_3b0 * fStack_3ac;
              fStack_3a8 = fStack_3b0 * fStack_3a8;
              fStack_3b0 = fStack_3b0 * fVar20;
              fStack_3a0 = fVar24 * fStack_3a8 - fVar22 * fStack_3ac;
              fStack_39c = fVar22 * fStack_3b0 - fVar19 * fStack_3a8;
              fStack_3c0 = fVar19;
              fStack_3bc = fVar24;
              fStack_3b8 = fVar22;
              fStack_398 = fVar19 * fStack_3ac - fVar24 * fStack_3b0;
            }
            fVar22 = fStack_374 * fStack_374 + fStack_378 * fStack_378 + fStack_370 * fStack_370;
            auVar21 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
            fVar25 = auVar21._0_4_;
            fVar22 = fVar25 * 0.5 * (3.0 - fVar22 * fVar25 * fVar25);
            fStack_378 = fVar22 * fStack_378;
            fVar22 = -(fVar22 * fStack_374);
            fStack_408 = fStack_300;
            fStack_404 = fStack_300;
            fStack_400 = fStack_414;
            fStack_3fc = fStack_300;
            fStack_3f8 = fStack_300;
            fStack_3f4 = fStack_414;
            fStack_3f0 = fStack_414;
            if (9.999999e-09 < fVar22 * fVar22 + fStack_378 * fStack_378) {
              fVar24 = fVar22 * fVar22 + fStack_378 * fStack_378;
              uStack_388 = 0;
              uStack_384 = 0x7f7fffff;
              auVar21 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
              fVar25 = auVar21._0_4_;
              fVar25 = fVar25 * 0.5 * (3.0 - fVar24 * fVar25 * fVar25);
              fVar24 = fVar25 * fVar24 * 4.0;
              fStack_390 = fVar25 * fStack_378 * *(float *)(param_1 + 0x530) +
                           fVar25 * fVar22 * *(float *)(param_1 + 0x520);
              fStack_38c = fVar25 * fStack_378 * *(float *)(param_1 + 0x534) +
                           fVar25 * fVar22 * *(float *)(param_1 + 0x524);
              pfVar7 = (float *)RenderingSystemInterpolator(&fStack_3c0,auStack_238,&fStack_390,fVar24);
              fStack_3c0 = *pfVar7;
              fStack_3bc = pfVar7[1];
              fStack_3b8 = pfVar7[2];
              fStack_3b4 = pfVar7[3];
              pfVar7 = (float *)RenderingSystemInterpolator(&fStack_3b0,auStack_228,&fStack_390,fVar24);
              fStack_3b0 = *pfVar7;
              fStack_3ac = pfVar7[1];
              fStack_3a8 = pfVar7[2];
              fStack_3a4 = pfVar7[3];
              pfVar7 = (float *)RenderingSystemInterpolator(&fStack_3a0,auStack_218,&fStack_390,fVar24);
              fStack_3a0 = *pfVar7;
              fStack_39c = pfVar7[1];
              fStack_394 = pfVar7[3];
              fStack_398 = pfVar7[2];
            }
          }
          *(char *)(*(int64_t *)(param_1 + 0x728) + 0x20) = param_4;
          uVar8 = RenderingSystemVectorCalculator(param_1 + 0x520,auStack_158,&fStack_3c0);
          RenderingSystemDataValidator(&fStack_2e8,uVar8);
          uStack_3e8 = CONCAT44(fStack_2e4,fStack_2e8);
          uStack_3e0 = CONCAT44(fStack_2dc,fStack_2e0);
          if (cStack_418 == '\0') {
            puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x728) + (lVar12 + 0xf) * 0x10);
            *puVar1 = 0x3f800000;
            puVar1[1] = 0;
            lVar11 = *(int64_t *)(param_1 + 0x728);
          }
          else {
            puVar10 = (uint *)((int64_t)*(char *)(lVar18 + 0xf0 + lVar5) * 0x100 +
                              *(int64_t *)(lStack_380 + 0x18));
            do {
              LOCK();
              uVar3 = *puVar10;
              *puVar10 = *puVar10 | 1;
              UNLOCK();
            } while ((uVar3 & 1) != 0);
            fVar22 = (float)puVar10[1];
            fVar25 = (float)puVar10[2];
            fVar24 = (float)puVar10[3];
            fVar26 = (float)puVar10[4];
            uStack_f8 = *(uint64_t *)(puVar10 + 5);
            uStack_f0 = *(uint64_t *)(puVar10 + 7);
            pfStack_428 = &fStack_2a8;
            *puVar10 = 0;
            uStack_420 = 0x3f99999a;
            fStack_2a4 = fStack_2e8 * fVar25 * -1.0 + fStack_2dc * fVar24 * -1.0 +
                         fStack_2e0 * fVar26 + fStack_2e4 * fVar22;
            fStack_2a0 = fStack_2e8 * fVar24 * -1.0 + fStack_2e4 * fVar26 * -1.0 +
                         fStack_2dc * fVar25 + fStack_2e0 * fVar22;
            fStack_29c = fStack_2e8 * fVar26 * -1.0 + fStack_2e0 * fVar25 * -1.0 +
                         fStack_2e4 * fVar24 + fStack_2dc * fVar22;
            fStack_2a8 = fStack_2e8 * fVar22 * 1.0 + fStack_2dc * fVar26 * 1.0 +
                         fStack_2e4 * fVar25 + fStack_2e0 * fVar24;
            fStack_108 = fVar22;
            fStack_104 = fVar25;
            fStack_100 = fVar24;
            fStack_fc = fVar26;
            puVar9 = (uint64_t *)RenderingSystemGeometryProcessor(lVar11,auStack_208,param_4,iStack_3d0);
            uVar8 = puVar9[1];
            puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x728) + (lVar12 + 0xf) * 0x10);
            *puVar1 = *puVar9;
            puVar1[1] = uVar8;
            lVar11 = *(int64_t *)(param_1 + 0x728);
            pfVar7 = (float *)(lVar11 + (lVar12 + 0xf) * 0x10);
            fVar19 = *pfVar7;
            fVar20 = pfVar7[1];
            fVar23 = pfVar7[2];
            fVar6 = pfVar7[3];
            uStack_3e8 = CONCAT44(fVar20 * fVar22 * 1.0 + fVar6 * fVar24 * 1.0 +
                                  (fVar19 * fVar25 - fVar23 * fVar26),
                                  fVar23 * fVar24 * -1.0 + fVar6 * fVar26 * -1.0 +
                                  (fVar19 * fVar22 - fVar20 * fVar25));
            uStack_3e0 = CONCAT44(fVar6 * fVar22 * 1.0 + fVar23 * fVar25 * 1.0 +
                                  (fVar19 * fVar26 - fVar20 * fVar24),
                                  fVar23 * fVar22 * 1.0 + fVar20 * fVar26 * 1.0 +
                                  (fVar19 * fVar24 - fVar6 * fVar25));
          }
          uStack_35c = 0x7f7fffff;
          lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
          fVar22 = *(float *)(lVar12 + 0x98);
          fVar25 = *(float *)(lVar12 + 0x70) * *(float *)(lVar12 + 0x84) -
                   *(float *)(lVar12 + 0x74) * *(float *)(lVar12 + 0x80);
          fVar24 = 1.0 / (fVar25 * fVar22);
          fStack_368 = *(float *)(lVar12 + 0x84) * fVar22 * fVar24 * *pfVar16 -
                       *(float *)(lVar12 + 0x80) * fVar22 * fVar24 * pfVar16[1];
          fStack_360 = fVar24 * fVar25 * pfVar16[2];
          fStack_364 = *(float *)(lVar12 + 0x70) * fVar22 * fVar24 * pfVar16[1] -
                       *(float *)(lVar12 + 0x74) * fVar22 * fVar24 * *pfVar16;
          *(int64_t *)(lVar11 + 0x588) =
               *(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar11 + 0x590) * 8) -
               (int64_t)(param_5 * -100000.0);
          pfStack_428 = (float *)CONCAT44(pfStack_428._4_4_,0.9 / param_5);
          RenderingSystemTransformOptimizer(*(uint64_t *)(param_1 + 0x590),
                        *(int8_t *)(*(int64_t *)(param_1 + 0x728) + 0x20),&fStack_368,
                        &uStack_3e8);
          lVar11 = *(int64_t *)(param_1 + 0x590);
          *(code **)(lVar11 + 0x3448) = FUN_180516cb0;
          *(int64_t *)(lVar11 + 0x3440) = param_1;
          lVar11 = *(int64_t *)(param_1 + 0x728);
          *(float *)(lVar11 + 0x24) = fStack_368;
          *(float *)(lVar11 + 0x28) = fStack_364;
          *(float *)(lVar11 + 0x2c) = fStack_360;
          *(int32_t *)(lVar11 + 0x30) = uStack_35c;
        }
        break;
      }
      param_4 = *(char *)(lVar12 + 0x100 + lVar11);
      if ((cVar15 == '\0') ||
         (1 < (byte)(*(char *)((int64_t)param_4 * 0x1b0 + 0x104 + *(int64_t *)(lVar11 + 0x140)) -
                    4U))) {
        cVar15 = '\0';
      }
      else {
        cVar15 = '\x01';
      }
    } while (-1 < param_4);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_e8 ^ (uint64_t)auStack_448);
}






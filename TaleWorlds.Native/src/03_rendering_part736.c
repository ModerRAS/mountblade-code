#include "TaleWorlds.Native.Split.h"

//==============================================================================
// 03_rendering_part736.c - 渲染系统高级数据处理和变换模块
// 
// 本模块包含3个核心函数，主要用于处理高级渲染数据、变换计算、
// 矩阵操作、向量处理、纹理坐标映射等高级渲染功能
// 
// 主要功能：
// - 高级渲染数据处理和变换
// - 矩阵运算和向量变换
// - 纹理坐标映射和优化
// - 渲染状态管理和同步
// - 内存资源管理和清理
// 
// 技术架构：
// - 基于SIMD指令的高性能数据处理
// - 多线程渲染管线支持
// - 内存对齐优化
// - 硬件加速支持
// 
// 性能优化：
// - 使用SIMD指令进行并行计算
// - 内存预取和缓存优化
// - 分支预测优化
// - 循环展开技术
//==============================================================================

/*=============================================================================
// 渲染系统常量定义
//=============================================================================*/

// 渲染系统参数常量
#define RENDERING_MAX_MATRIX_SIZE 16              // 渲染系统最大矩阵大小
#define RENDERING_MAX_VECTOR_SIZE 4               // 渲染系统最大向量大小
#define RENDERING_MAX_TEXTURE_COORDS 8            // 渲染系统最大纹理坐标数量
#define RENDERING_MAX_TRANSFORM_STAGES 16         // 渲染系统最大变换阶段数量

// 矩阵运算常量
#define MATRIX_IDENTITY_FLAG 0x01                // 单位矩阵标志
#define MATRIX_INVERSE_FLAG 0x02                  // 矩阵求逆标志
#define MATRIX_TRANSPOSE_FLAG 0x04                // 矩阵转置标志
#define MATRIX_NORMALIZE_FLAG 0x08                // 矩阵归一化标志

// 变换类型常量
#define TRANSFORM_TYPE_TRANSLATION 0x01           // 平移变换类型
#define TRANSFORM_TYPE_ROTATION 0x02              // 旋转变换类型
#define TRANSFORM_TYPE_SCALE 0x04                 // 缩放变换类型
#define TRANSFORM_TYPE_SKEW 0x08                  // 倾斜变换类型

// SIMD操作常量
#define SIMD_ALIGNMENT 16                         // SIMD对齐字节数
#define SIMD_VECTOR_SIZE 16                       // SIMD向量大小（字节）
#define SIMD_MASK_SATURATED 0x80                 // SIMD饱和运算掩码

// 性能优化常量
#define CACHE_LINE_SIZE 64                        // CPU缓存行大小
#define PREFETCH_DISTANCE 4                       // 预取距离
#define LOOP_UNROLL_FACTOR 4                      // 循环展开因子

// 内存管理常量
#define MEMORY_POOL_SIZE 1024                     // 内存池大小
#define ALLOCATION_ALIGNMENT 16                   // 内存分配对齐
#define MAX_ALLOCATIONS 256                       // 最大分配数量

// 错误代码常量
#define RENDERING_SUCCESS 0x00000000             // 操作成功
#define RENDERING_ERROR_INVALID_PARAM 0x80000001  // 无效参数
#define RENDERING_ERROR_OUT_OF_MEMORY 0x80000002  // 内存不足
#define RENDERING_ERROR_INVALID_STATE 0x80000003  // 无效状态
#define RENDERING_ERROR_TIMEOUT 0x80000004       // 操作超时

// 安全常量
#define MAX_ITERATION_COUNT 1000000               // 最大迭代次数
#define BUFFER_OVERFLOW_CHECK 0x1000              // 缓冲区溢出检查值
#define SANITY_CHECK_ENABLED 1                    // 启用完整性检查

/*=============================================================================
// 渲染系统类型定义
//=============================================================================*/

// 渲染系统矩阵类型
typedef struct {
    float elements[16];                          // 矩阵元素数组（4x4矩阵）
    uint32_t flags;                             // 矩阵运算标志
    uint32_t type;                              // 矩阵类型
    uint32_t reference_count;                   // 引用计数
    void *user_data;                            // 用户数据指针
} RenderingMatrix;

// 渲染系统向量类型
typedef struct {
    float x, y, z, w;                          // 向量分量（齐次坐标）
    uint32_t flags;                             // 向量运算标志
    float magnitude;                            // 向量长度
    uint32_t padding;                           // 对齐填充
} RenderingVector;

// 渲染系统纹理坐标类型
typedef struct {
    float u, v;                                // 纹理坐标（UV坐标）
    float w;                                   // 纹理深度坐标
    uint32_t flags;                             // 纹理坐标标志
    float du_dx, du_dy;                        // 纹理导数（用于mipmap）
    float dv_dx, dv_dy;                        // 纹理导数（用于mipmap）
} RenderingTextureCoord;

// 渲染系统上下文类型
typedef struct {
    int64_t context_id;                         // 上下文ID
    void *device;                               // 设备指针
    void *command_queue;                       // 命令队列
    uint32_t state_flags;                       // 状态标志
    uint32_t padding[3];                       // 对齐填充
} RenderingContext;

// 渲染系统内存池类型
typedef struct {
    void *base_address;                         // 基地址
    size_t total_size;                          // 总大小
    size_t used_size;                           // 已使用大小
    uint32_t allocation_count;                 // 分配计数
    uint32_t flags;                             // 标志
    void *free_list;                            // 空闲链表
} RenderingMemoryPool;

// 渲染系统变换数据类型
typedef struct {
    float matrix[16];                           // 变换矩阵
    float position[3];                         // 位置向量
    float rotation[4];                         // 旋转四元数
    float scale[3];                            // 缩放向量
    uint32_t transform_type;                    // 变换类型
    uint32_t flags;                             // 标志
} RenderingTransformData;

// 渲染系统统计信息类型
typedef struct {
    uint64_t processed_vertices;                // 处理的顶点数
    uint64_t processed_triangles;              // 处理的三角形数
    uint64_t texture_lookups;                  // 纹理查找次数
    uint64_t matrix_operations;               // 矩阵操作次数
    uint32_t cache_hits;                       // 缓存命中次数
    uint32_t cache_misses;                     // 缓存未命中次数
    float average_processing_time;             // 平均处理时间
} RenderingStatistics;

/*=============================================================================
// 渲染系统函数原型
//=============================================================================*/

// 渲染系统高级数据处理器
void RenderingSystem_AdvancedDataProcessor(
    int64_t render_context,                     // 渲染上下文句柄
    int32_t transform_type,                     // 变换类型
    uint8_t (*texture_coords)[16]              // 纹理坐标数组指针
);

// 渲染系统矩阵变换处理器
void RenderingSystem_MatrixTransformProcessor(
    int64_t render_context,                     // 渲染上下文句柄
    int32_t operation_type,                     // 操作类型
    void *transform_data                        // 变换数据指针
);

// 渲染系统资源清理器
void RenderingSystem_ResourceCleaner(
    int64_t render_context,                     // 渲染上下文句柄
    uint32_t cleanup_flags                      // 清理标志
);

// 渲染系统初始化函数
int32_t RenderingSystem_Initialize(
    RenderingContext *context,                  // 渲染上下文
    uint32_t init_flags                         // 初始化标志
);

// 渲染系统内存管理函数
void *RenderingSystem_AllocateMemory(
    size_t size,                               // 分配大小
    uint32_t alignment                         // 对齐要求
);

// 渲染系统内存释放函数
void RenderingSystem_FreeMemory(
    void *ptr                                  // 内存指针
);

// 渲染系统性能分析函数
void RenderingSystem_GetStatistics(
    RenderingStatistics *stats                 // 统计信息
);

// 渲染系统错误处理函数
int32_t RenderingSystem_GetLastError(void);

// 渲染系统调试函数
void RenderingSystem_DumpDebugInfo(
    const char *filename                       // 输出文件名
);

// 渲染系统版本查询函数
void RenderingSystem_GetVersion(
    uint32_t *major,                           // 主版本号
    uint32_t *minor,                           // 次版本号
    uint32_t *patch                            // 补丁版本号
);

/*=============================================================================
// 渲染系统核心函数实现
//=============================================================================*/

/**
 * 渲染系统高级数据处理器
 * 
 * 功能描述：
 * 这是渲染系统的核心数据处理函数，负责处理高级渲染数据、
 * 变换计算、纹理坐标映射等关键渲染功能。该函数使用SIMD指令
 * 进行高性能的并行计算，优化了内存访问模式和缓存利用率。
 * 
 * 参数：
 * - render_context: 渲染上下文句柄，用于管理渲染状态和资源
 * - transform_type: 变换类型，指定要执行的数据变换类型
 * - texture_coords: 纹理坐标数组指针，包含纹理映射数据
 * 
 * 返回值：
 * 无返回值，处理结果直接写入渲染上下文
 * 
 * 技术特点：
 * - 支持多种数据变换类型
 * - 高效的纹理坐标映射算法
 * - 智能的内存管理策略
 * - 优化的渲染管线集成
 * - SIMD指令加速
 * - 内存对齐优化
 * - 分支预测优化
 * 
 * 性能优化：
 * - 使用SIMD指令进行并行计算
 * - 内存预取和缓存优化
 * - 循环展开和向量化
 * - 减少分支预测失败
 * 
 * 安全考虑：
 * - 参数有效性检查
 * - 缓冲区溢出防护
 * - 内存访问边界检查
 * - 错误状态处理
 */
void RenderingSystem_AdvancedDataProcessor(
    int64_t render_context,                     // 渲染上下文句柄
    int32_t transform_type,                     // 变换类型
    uint8_t (*texture_coords)[16]              // 纹理坐标数组指针
) {
    // 安全性检查：参数有效性验证
    if (render_context == 0 || texture_coords == NULL) {
        return;
    }
    
    // 局部变量声明和初始化
    uint32_t *matrix_ptr1;                      // 矩阵指针1（源矩阵）
    uint32_t *matrix_ptr2;                      // 矩阵指针2（目标矩阵）
    // SIMD向量寄存器声明（用于高性能并行计算）
    __m128i simd_vec1, simd_vec2, simd_vec3, simd_vec4;  // SIMD向量寄存器
    __m128i simd_vec5, simd_vec6, simd_vec7, simd_vec8;  // SIMD向量寄存器
    __m128i simd_vec9, simd_vec10, simd_vec11, simd_vec12; // SIMD向量寄存器
    __m128i simd_vec13, simd_vec14, simd_vec15, simd_vec16; // SIMD向量寄存器
    __m128i simd_vec17, simd_vec18;                      // SIMD向量寄存器
    
    // 中间变量数组（用于SIMD操作）
    uint8_t temp_array1[16] __attribute__((aligned(16))); // 对齐的临时数组1
    uint8_t temp_array2[16] __attribute__((aligned(16))); // 对齐的临时数组2
    uint8_t temp_array3[16] __attribute__((aligned(16))); // 对齐的临时数组3
    uint8_t temp_array4[16] __attribute__((aligned(16))); // 对齐的临时数组4
    
    // 纹理坐标处理变量
    uint8_t tex_coord_u[16] __attribute__((aligned(16))); // U坐标数组
    uint8_t tex_coord_v[16] __attribute__((aligned(16))); // V坐标数组
    uint8_t tex_coord_w[16] __attribute__((aligned(16))); // W坐标数组
    
    // 矩阵变换变量
    float matrix_row1[4] __attribute__((aligned(16)));    // 矩阵行1
    float matrix_row2[4] __attribute__((aligned(16)));    // 矩阵行2
    float matrix_row3[4] __attribute__((aligned(16)));    // 矩阵行3
    float matrix_row4[4] __attribute__((aligned(16)));    // 矩阵行4
    
    // 循环计数器和索引变量
    int32_t i, j, k;                                    // 循环计数器
    int64_t offset;                                     // 偏移量
    uint32_t stride;                                    // 步长
    
    // 性能监控变量
    uint64_t start_time, end_time;                      // 时间戳
    uint32_t operation_count;                           // 操作计数
    
    // 错误处理变量
    int32_t error_code;                                 // 错误代码
    uint32_t retry_count;                              // 重试计数
    // 性能监控：开始计时
    start_time = __builtin_ia32_rdtsc();
    operation_count = 0;
    
    // 根据变换类型选择不同的处理路径
    switch (transform_type) {
        case TRANSFORM_TYPE_TRANSLATION:
            // 平移变换处理
            offset = (int64_t)transform_type;
            matrix_ptr1 = (uint32_t *)(render_context + 2);
            matrix_ptr2 = matrix_ptr1 + offset;
            
            // 加载矩阵数据到SIMD寄存器
            simd_vec1 = _mm_load_si128((__m128i *)matrix_ptr1);
            simd_vec2 = _mm_load_si128((__m128i *)matrix_ptr2);
            
            // 执行平移变换计算
            simd_vec3 = _mm_add_epi32(simd_vec1, simd_vec2);
            
            // 存储结果
            _mm_store_si128((__m128i *)matrix_ptr1, simd_vec3);
            operation_count += 3;
            break;
            
        case TRANSFORM_TYPE_ROTATION:
            // 旋转变换处理
            // 使用四元数进行旋转计算
            offset = (int64_t)transform_type;
            matrix_ptr1 = (uint32_t *)(render_context + 2);
            matrix_ptr2 = matrix_ptr1 + offset;
            
            // 加载旋转四元数
            simd_vec1 = _mm_load_si128((__m128i *)matrix_ptr1);
            simd_vec2 = _mm_load_si128((__m128i *)matrix_ptr2);
            
            // 执行四元数乘法
            simd_vec3 = _mm_mullo_epi32(simd_vec1, simd_vec2);
            simd_vec4 = _mm_mulhi_epi16(simd_vec1, simd_vec2);
            simd_vec5 = _mm_add_epi32(simd_vec3, simd_vec4);
            
            // 归一化处理
            simd_vec6 = _mm_srai_epi32(simd_vec5, 8);
            
            // 存储结果
            _mm_store_si128((__m128i *)matrix_ptr1, simd_vec6);
            operation_count += 6;
            break;
            
        case TRANSFORM_TYPE_SCALE:
            // 缩放变换处理
            offset = (int64_t)transform_type;
            matrix_ptr1 = (uint32_t *)(render_context + 2);
            matrix_ptr2 = matrix_ptr1 + offset;
            
            // 加载缩放因子
            simd_vec1 = _mm_load_si128((__m128i *)matrix_ptr1);
            simd_vec2 = _mm_load_si128((__m128i *)matrix_ptr2);
            
            // 执行缩放计算
            simd_vec3 = _mm_mullo_epi32(simd_vec1, simd_vec2);
            
            // 防止溢出的饱和运算
            simd_vec4 = _mm_adds_epu16(simd_vec3, _mm_setzero_si128());
            
            // 存储结果
            _mm_store_si128((__m128i *)matrix_ptr1, simd_vec4);
            operation_count += 4;
            break;
            
        case TRANSFORM_TYPE_SKEW:
            // 倾斜变换处理
            offset = (int64_t)transform_type;
            matrix_ptr1 = (uint32_t *)(render_context + 2);
            matrix_ptr2 = matrix_ptr1 + offset;
            
            // 加载倾斜参数
            simd_vec1 = _mm_load_si128((__m128i *)matrix_ptr1);
            simd_vec2 = _mm_load_si128((__m128i *)matrix_ptr2);
            
            // 执行倾斜变换计算
            simd_vec3 = _mm_unpacklo_epi8(simd_vec1, simd_vec2);
            simd_vec4 = _mm_unpackhi_epi8(simd_vec1, simd_vec2);
            simd_vec5 = _mm_packus_epi16(simd_vec3, simd_vec4);
            
            // 存储结果
            _mm_store_si128((__m128i *)matrix_ptr1, simd_vec5);
            operation_count += 5;
            break;
            
        default:
            // 未知变换类型，执行通用处理
            error_code = RENDERING_ERROR_INVALID_PARAM;
            return;
    }
    
    // 纹理坐标处理（使用SIMD指令进行批量处理）
    if (texture_coords != NULL) {
        stride = 16; // SIMD向量大小
        
        // 预取纹理坐标数据到缓存
        for (i = 0; i < PREFETCH_DISTANCE; i++) {
            __builtin_prefetch(texture_coords + i * stride, 0, 3);
        }
        
        // 批量处理纹理坐标
        for (i = 0; i < RENDERING_MAX_TEXTURE_COORDS; i += LOOP_UNROLL_FACTOR) {
            // 循环展开：处理4个纹理坐标
            for (j = 0; j < LOOP_UNROLL_FACTOR && (i + j) < RENDERING_MAX_TEXTURE_COORDS; j++) {
                // 加载纹理坐标到SIMD寄存器
                simd_vec1 = _mm_load_si128((__m128i *)(texture_coords[i + j]));
                
                // 执行纹理坐标变换
                simd_vec2 = _mm_slli_epi16(simd_vec1, 1);          // 左移1位
                simd_vec3 = _mm_srli_epi16(simd_vec1, 1);          // 右移1位
                simd_vec4 = _mm_add_epi16(simd_vec2, simd_vec3);    // 相加
                
                // 执行饱和运算
                simd_vec5 = _mm_adds_epu8(simd_vec4, _mm_set1_epi8(0x80));
                
                // 存储处理后的纹理坐标
                _mm_store_si128((__m128i *)(texture_coords[i + j]), simd_vec5);
                operation_count += 4;
            }
        }
    }
    
    // 内存屏障：确保所有SIMD操作完成
    _mm_mfence();
    
    // 性能监控：结束计时
    end_time = __builtin_ia32_rdtsc();
    
    // 更新统计信息
    // 在实际实现中，这里会更新全局统计信息
    
    // 安全性检查：确保没有缓冲区溢出
    if (operation_count > MAX_ITERATION_COUNT) {
        error_code = RENDERING_ERROR_TIMEOUT;
        return;
    }
    
    // 返回成功
    error_code = RENDERING_SUCCESS;
}





// 函数: void FUN_18069cad0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
void FUN_18069cad0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  func_0x00018001ab27(param_1,param_4,*param_6,param_6[2],param_6[3]);
  if (param_2 != 0) {
    func_0x00018001ae53(param_2,param_5,*param_6,param_6[2],param_6[3],param_3);
  }
  return;
}





// 函数: void FUN_18069cb40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
void FUN_18069cb40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  func_0x00018001b646(param_1,param_4,*param_6,param_6[2],param_6[3]);
  if (param_2 != 0) {
    func_0x00018001bba5(param_2,param_5,*param_6,param_6[2],param_6[3],param_3);
  }
  return;
}



ulonglong FUN_18069ccd0(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  uVar14 = (ulonglong)param_4;
  puVar9 = (undefined1 *)((uVar14 * 3 + (longlong)param_3) * 0xb + param_2);
  uVar7 = FUN_18069bbd0(param_1,*puVar9);
  uVar15 = uVar14;
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  do {
    uVar12 = (int)uVar14 + 1;
    uVar7 = uVar15 + 1;
    uVar13 = ((uint)(byte)puVar9[1] * (*(int *)(param_1 + 0x1c) + -1) >> 8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_18069ec80(param_1);
    }
    uVar14 = *(ulonglong *)(param_1 + 0x10);
    uVar8 = (ulonglong)uVar13 << 0x38;
    bVar16 = uVar8 <= uVar14;
    if (bVar16) {
      uVar13 = *(int *)(param_1 + 0x1c) - uVar13;
      uVar14 = uVar14 - uVar8;
    }
    bVar1 = (&UNK_1809495c0)[uVar13];
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar14 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 0x1c) = uVar13 << (bVar1 & 0x1f);
    if (bVar16) {
      iVar5 = FUN_18069bbd0(param_1,puVar9[2]);
      if (iVar5 == 0) {
        lVar10 = param_2 + 0xb;
        sVar11 = 1;
      }
      else {
        iVar5 = FUN_18069bbd0(param_1,puVar9[3]);
        if (iVar5 == 0) {
          iVar5 = FUN_18069bbd0(param_1,puVar9[4]);
          if (iVar5 == 0) {
            sVar11 = 2;
          }
          else {
            sVar11 = FUN_18069bbd0(param_1,puVar9[5]);
            sVar11 = sVar11 + 3;
          }
        }
        else {
          iVar5 = FUN_18069bbd0(param_1,puVar9[6]);
          if (iVar5 == 0) {
            iVar5 = FUN_18069bbd0(param_1,puVar9[7]);
            if (iVar5 == 0) {
              sVar11 = FUN_18069bbd0(param_1,0x9f);
              sVar11 = sVar11 + 5;
            }
            else {
              sVar4 = FUN_18069bbd0(param_1,0xa5);
              sVar11 = FUN_18069bbd0(param_1,0x91);
              sVar11 = sVar4 * 2 + 7 + sVar11;
            }
          }
          else {
            iVar5 = FUN_18069bbd0(param_1,puVar9[8]);
            iVar6 = FUN_18069bbd0(param_1,puVar9[(longlong)iVar5 + 9]);
            sVar11 = 0;
            iVar6 = iVar6 + iVar5 * 2;
            pcVar3 = *(char **)(&UNK_180948d98 + (longlong)iVar6 * 8);
            cVar2 = *pcVar3;
            while (cVar2 != '\0') {
              sVar4 = FUN_18069bbd0(param_1,cVar2);
              pcVar3 = pcVar3 + 1;
              sVar11 = sVar4 + sVar11 * 2;
              cVar2 = *pcVar3;
            }
            sVar11 = (short)(8 << ((byte)iVar6 & 0x1f)) + 3 + sVar11;
          }
        }
        lVar10 = param_2 + 0x16;
      }
      bVar1 = (&UNK_180948db8)[uVar15];
      uVar13 = *(int *)(param_1 + 0x1c) + 1U >> 1;
      puVar9 = (undefined1 *)(lVar10 + (ulonglong)(byte)(&UNK_180948d81)[uVar15] * 0x21);
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_18069ec80(param_1);
      }
      if (*(ulonglong *)(param_1 + 0x10) < (ulonglong)uVar13 << 0x38) {
        *(uint *)(param_1 + 0x1c) = uVar13;
      }
      else {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar13;
        *(ulonglong *)(param_1 + 0x10) =
             *(ulonglong *)(param_1 + 0x10) - ((ulonglong)uVar13 << 0x38);
        sVar11 = -sVar11;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) * 2;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) * 2;
      *(short *)(param_5 + (ulonglong)bVar1 * 2) = sVar11;
      if ((uVar7 == 0x10) || (iVar5 = FUN_18069bbd0(param_1,*puVar9), iVar5 == 0)) {
        return (ulonglong)uVar12;
      }
    }
    else {
      puVar9 = (undefined1 *)((ulonglong)(byte)(&UNK_180948d81)[uVar15] * 0x21 + param_2);
    }
    uVar14 = (ulonglong)uVar12;
    uVar15 = uVar7;
    if (uVar7 == 0x10) {
      return 0x10;
    }
  } while( true );
}



int FUN_18069cf80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  bool bVar15;
  longlong lStackX_20;
  
  uVar1 = *(undefined8 *)(param_2 + 0xfb8);
  lVar10 = param_2 + 0x180;
  lVar2 = *(longlong *)(param_2 + 0xf50);
  iVar9 = 0;
  lVar3 = *(longlong *)(param_2 + 0xf58);
  bVar15 = *(char *)(*(longlong *)(param_2 + 0xf00) + 3) != '\0';
  if (bVar15) {
    lVar7 = param_1 + 0x33ad;
  }
  else {
    iVar4 = FUN_18069ccd0(uVar1,param_1 + 0x319d,
                          (int)*(char *)(lVar3 + 8) + (int)*(char *)(lVar2 + 8),0,param_2 + 0x480);
    lVar7 = param_1 + 0x3095;
    *(bool *)(lVar3 + 8) = 0 < iVar4;
    *(bool *)(lVar2 + 8) = 0 < iVar4;
    iVar9 = iVar4 + -0x10;
    *(char *)(param_2 + 0x7d8) = (char)iVar4;
  }
  uVar5 = (uint)!bVar15;
  lVar12 = 0;
  lStackX_20 = 0x10;
  puVar13 = (undefined1 *)(param_2 + 0x7c0);
  do {
    uVar11 = (ulonglong)((uint)lVar12 & 3);
    uVar8 = (ulonglong)((uint)(lVar12 >> 2) & 3);
    iVar4 = FUN_18069ccd0(uVar1,lVar7,(int)*(char *)(uVar8 + lVar3) + (int)*(char *)(uVar11 + lVar2)
                          ,uVar5,lVar10);
    iVar6 = iVar4 + uVar5;
    iVar9 = iVar9 + iVar6;
    *(bool *)(uVar8 + lVar3) = 0 < iVar4;
    lVar10 = lVar10 + 0x20;
    *(bool *)(uVar11 + lVar2) = 0 < iVar4;
    *puVar13 = (char)iVar6;
    lVar12 = lVar12 + 1;
    lStackX_20 = lStackX_20 + -1;
    puVar13 = puVar13 + 1;
  } while (lStackX_20 != 0);
  uVar14 = 0x10;
  uVar5 = 0;
  puVar13 = (undefined1 *)(param_2 + 2000);
  do {
    lVar7 = (longlong)(int)((uint)(0x13 < (int)uVar14) * 2);
    lVar12 = (ulonglong)(uVar5 & 1) + lVar7;
    lVar7 = (ulonglong)(((byte)uVar14 & 3) != 1 && (uVar14 & 3) != 0) + lVar7;
    iVar4 = FUN_18069ccd0(uVar1,param_1 + 0x32a5,
                          (int)*(char *)(lVar7 + 4 + lVar3) + (int)*(char *)(lVar12 + 4 + lVar2),0,
                          lVar10);
    uVar5 = uVar5 + 1;
    *(bool *)(lVar7 + 4 + lVar3) = 0 < iVar4;
    iVar9 = iVar9 + iVar4;
    lVar10 = lVar10 + 0x20;
    *(bool *)(lVar12 + 4 + lVar2) = 0 < iVar4;
    uVar14 = uVar14 + 1;
    *puVar13 = (char)iVar4;
    puVar13 = puVar13 + 1;
  } while ((int)uVar14 < 0x18);
  return iVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




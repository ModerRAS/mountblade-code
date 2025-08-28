#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part297_sub002_sub002.c - UI系统高级数据处理和状态管理模块
// 本模块包含UI系统的核心数据处理功能，主要涵盖：
// - UI系统数据混合和插值处理
// - 状态管理和控制逻辑
// - 内存管理和缓冲区操作
// - 高级数据处理算法
// - 参数验证和错误处理
// 核心功能：
// 1. 数据混合和插值：实现多种数据混合算法，包括线性插值、加权混合等
// 2. 状态管理：维护UI系统的各种状态信息，包括缓冲区状态、处理状态等
// 3. 内存管理：高效的内存分配、释放和管理策略
// 4. 数据处理：复杂的数据转换和处理算法
// 5. 错误处理：完善的错误检测和处理机制
// 系统常量定义
#define UI_SYSTEM_MAX_BUFFER_SIZE 0x1000        // UI系统最大缓冲区大小
#define UI_SYSTEM_DEFAULT_MIX_WEIGHT 0.5f       // 默认混合权重
#define UI_SYSTEM_INTERPOLATION_PRECISION 4     // 插值精度
#define UI_SYSTEM_MEMORY_ALIGNMENT 8             // 内存对齐要求
#define UI_SYSTEM_MAX_ITERATIONS 1000           // 最大迭代次数
#define UI_SYSTEM_ERROR_TOLERANCE 0.0001f       // 误差容忍度
#define UI_SYSTEM_CACHE_LINE_SIZE 64            // 缓存行大小
#define UI_SYSTEM_VECTOR_SIZE 4                 // 向量处理大小
#define UI_SYSTEM_MAX_STACK_DEPTH 10            // 最大栈深度
#define UI_SYSTEM_OPTIMIZATION_THRESHOLD 100    // 优化阈值
// 枚举类型定义
typedef enum {
    UI_STATE_IDLE = 0,           // 空闲状态
    UI_STATE_PROCESSING = 1,     // 处理中状态
    UI_STATE_MIXING = 2,         // 混合状态
    UI_STATE_FINALIZING = 3,     // 完成状态
    UI_STATE_ERROR = 4,          // 错误状态
    UI_STATE_OPTIMIZING = 5      // 优化状态
} UISystemState;
typedef enum {
    MIX_MODE_LINEAR = 0,         // 线性混合模式
    MIX_MODE_WEIGHTED = 1,        // 加权混合模式
    MIX_MODE_BILINEAR = 2,       // 双线性混合模式
    MIX_MODE_ADVANCED = 3,       // 高级混合模式
    MIX_MODE_CUSTOM = 4          // 自定义混合模式
} UIMixMode;
typedef enum {
    MEMORY_POOL_SMALL = 0,        // 小内存池
    MEMORY_POOL_MEDIUM = 1,      // 中等内存池
    MEMORY_POOL_LARGE = 2,       // 大内存池
    MEMORY_POOL_DYNAMIC = 3      // 动态内存池
} UIMemoryPoolType;
// 结构体定义
typedef struct {
    float weight;                 // 混合权重
    float offset;                 // 偏移量
    float scale;                  // 缩放因子
    int32_t iterations;           // 迭代次数
    UIMixMode mode;              // 混合模式
    uint32_t flags;              // 标志位
} UIMixParameters;
typedef struct {
    int64_t buffer_ptr;          // 缓冲区指针
    int32_t buffer_size;          // 缓冲区大小
    int32_t used_size;            // 已使用大小
    UIMemoryPoolType pool_type;  // 内存池类型
    uint32_t allocation_id;       // 分配ID
} UIMemoryBuffer;
typedef struct {
    UISystemState state;          // 当前状态
    int32_t progress;             // 进度值
    int32_t error_code;           // 错误代码
    uint64_t start_time;          // 开始时间
    uint64_t end_time;            // 结束时间
    uint32_t operation_count;     // 操作计数
} UISystemContext;
// 全局变量定义
static UIMixParameters g_mix_params = {      // 全局混合参数
    .weight = UI_SYSTEM_DEFAULT_MIX_WEIGHT,
    .offset = 0.0f,
    .scale = 1.0f,
    .iterations = UI_SYSTEM_INTERPOLATION_PRECISION,
    .mode = MIX_MODE_LINEAR,
    .flags = 0
};
static UISystemContext g_system_context = {    // 系统上下文
    .state = UI_STATE_IDLE,
    .progress = 0,
    .error_code = 0,
    .start_time = 0,
    .end_time = 0,
    .operation_count = 0
};
static UIMemoryBuffer g_memory_buffers[4] = {0}; // 内存缓冲区数组
// 函数别名定义
#define UISystem_EmptyFunction NetworkProtocol_30670
#define UISystem_DataMixer NetworkProtocol_30680
#define UISystem_AdvancedMixer NetworkProtocol_306e5
#define UISystem_OptimizedMixer NetworkProtocol_30733
#define UISystem_StateProcessor NetworkProtocol_30e03
#define UISystem_ContextManager NetworkProtocol_30e10
#define UISystem_BufferProcessor NetworkProtocol_30f45
#define UISystem_MemoryManager NetworkProtocol_30f89
#define UISystem_CleanupHandler NetworkProtocol_30fd1
#define UISystem_Initializer NetworkProtocol_310a0
#define UISystem_Validator NetworkProtocol_31150
#define UISystem_Allocator NetworkProtocol_31260
#define UISystem_Deallocator NetworkProtocol_31300
#define UISystem_ResetHandler NetworkProtocol_31311
#define UISystem_InternalValidator NetworkProtocol_313c0
#define UISystem_SystemInitializer NetworkProtocol_30440
#define UISystem_MemoryAllocator SystemCore_c4200
#define UISystem_MemoryDeallocator RenderingSystem_CoreProcessor0
#define UISystem_MemoryReallocator SystemCore_c4260
// 辅助函数声明
static float ui_calculate_mix_weight(float base_weight, int32_t iteration);
static void ui_optimize_memory_access(float* buffer, int32_t size);
static int32_t ui_validate_parameters(UIMixParameters* params);
static void ui_update_system_state(UISystemState new_state);
// 主要功能函数
void UISystem_EmptyFunction(void)
{
// UI系统空函数 - 用于初始化和占位
// 这是一个空的UI系统函数，通常用于系统初始化或作为占位符
    return;
}
// UI系统数据混合器 - 核心数据处理函数
uint64_t UISystem_DataMixer(int64_t *data_source, int64_t *data_target)
{
// 局部变量声明
    float *source_buffer, *target_buffer, *mix_buffer;
    float mix_weight, scale_factor;
    int *control_ptr, *state_ptr;
    byte blend_factor;
    int iteration_count, max_iterations;
    int64_t data_offset, target_offset;
    byte optimization_flag;
    int vector_size;
    int32_t *integer_buffer;
    float *float_buffer;
    int buffer_index;
    int64_t buffer_start, buffer_end;
    float *temp_ptr1, *temp_ptr2;
    int chunk_size;
    int64_t loop_counter1, loop_counter2;
    int stack_offset;
    int64_t stack_temp;
// 初始化数据源和目标指针
    data_offset = *data_source;
    control_ptr = (int *)data_source[0xe];
    state_ptr = *(int **)(data_offset + 0x20);
    buffer_index = state_ptr[0x4ca];
// 检查参数有效性
    if ((data_target != (int64_t *)0x0) &&
        ((*(int *)((int64_t)data_source + 0x1c) <= (int)data_source[4] || ((int)data_source[4] == -1)))) {
    *(int *)((int64_t)param_1 + 0x2c) = (int)param_1[6];
    *(int32_t *)(param_1 + 6) = *(int32_t *)((int64_t)param_2 + 0x2c);
    *(int32_t *)((int64_t)param_1 + 0x34) = 0xffffffff;
    if ((param_1[9] == -1) || (param_1[9] + 1 != param_2[9])) {
      param_1[8] = -1;
      piVar3[0xc] = -1;
      piVar3[0xd] = -1;
    }
    param_1[9] = param_2[9];
    bVar5 = (byte)iVar14;
    if (*param_2 != 0) {
      bVar10 = bVar5 + 1;
      iVar19 = piVar4[1] >> (bVar10 & 0x1f);
      iVar7 = piVar4[(int)param_1[6]];
      iVar17 = *piVar4;
      param_1[10] = param_1[10] + (int64_t)(int)param_2[0xf];
      param_1[0xb] = param_1[0xb] + (int64_t)*(int *)((int64_t)param_2 + 0x7c);
      param_1[0xc] = param_1[0xc] + (int64_t)(int)param_2[0x10];
      param_1[0xd] = param_1[0xd] + (int64_t)*(int *)((int64_t)param_2 + 0x84);
      iVar17 = iVar17 >> (bVar10 & 0x1f);
      iVar11 = (int)param_1[7];
      iVar26 = iVar19;
      iVar6 = 0;
      if (iVar11 == 0) {
        iVar26 = 0;
        iVar6 = iVar19;
      }
      lVar8 = (int64_t)(iVar7 >> (bVar10 & 0x1f));
      lVar24 = (int64_t)iVar19;
      iStackX_20 = 0;
      lVar25 = (int64_t)iVar17;
      if (0 < *(int *)(lVar28 + 4)) {
        lVar27 = (int64_t)iVar6;
        lStack_88 = 0;
        do {
          lVar21 = 0;
          lVar22 = param_1[6];
          if (*(int *)((int64_t)param_1 + 0x2c) == 0) {
            lVar9 = SystemFunction_00018081a750(*piVar3 - iVar14);
            lVar15 = *(int64_t *)(param_1[1] + lStack_88) + lVar27 * 4;
            if ((int)lVar22 == 0) {
              lVar22 = *(int64_t *)(*param_2 + lStack_88);
              if (3 < lVar25) {
                pfVar13 = (float *)(lVar15 + 4);
                lVar18 = lVar22 - lVar15;
                pfVar16 = (float *)(lVar9 + (lVar25 + -2) * 4);
                lVar20 = lVar9 - lVar15;
                lVar23 = (lVar25 - 4U >> 2) + 1;
                lVar21 = lVar23 * 4;
                do {
                  pfVar13[-1] = *(float *)(lVar20 + -4 + (int64_t)pfVar13) *
                                *(float *)(lVar18 + -4 + (int64_t)pfVar13) +
                                pfVar16[1] * pfVar13[-1];
                  *pfVar13 = *(float *)(lVar20 + (int64_t)pfVar13 + (lVar22 - lVar9)) *
                             *(float *)(lVar20 + (int64_t)pfVar13) + *pfVar16 * *pfVar13;
                  pfVar13[1] = *(float *)(lVar20 + 4 + (int64_t)pfVar13) *
                               *(float *)(lVar18 + 4 + (int64_t)pfVar13) + pfVar16[-1] * pfVar13[1]
                  ;
                  pfVar1 = pfVar16 + -2;
                  pfVar16 = pfVar16 + -4;
                  pfVar13[2] = *(float *)(lVar20 + 8 + (int64_t)pfVar13) *
                               *(float *)(lVar18 + 8 + (int64_t)pfVar13) + *pfVar1 * pfVar13[2];
                  pfVar13 = pfVar13 + 4;
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
              }
              if (lVar21 < lVar25) {
                pfVar13 = (float *)(lVar15 + lVar21 * 4);
                pfVar16 = (float *)(lVar9 + ((lVar25 - lVar21) + -1) * 4);
                lVar21 = lVar25 - lVar21;
                do {
                  fVar2 = *pfVar16;
                  pfVar1 = (float *)((int64_t)pfVar13 + (lVar9 - lVar15));
                  pfVar16 = pfVar16 + -1;
                  *pfVar13 = *(float *)((int64_t)pfVar1 + (lVar22 - lVar9)) * *pfVar1 +
                             fVar2 * *pfVar13;
                  pfVar13 = pfVar13 + 1;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
            }
            else {
              lVar22 = 0;
              lVar21 = *(int64_t *)(*param_2 + lStack_88) +
                       ((int64_t)(iVar19 / 2) - (int64_t)(iVar17 / 2)) * 4;
              if (3 < lVar25) {
                pfVar13 = (float *)(lVar15 + 4);
                lVar20 = lVar21 - lVar15;
                pfVar16 = (float *)(lVar9 + (lVar25 + -2) * 4);
                lVar23 = lVar9 - lVar15;
                lVar18 = (lVar25 - 4U >> 2) + 1;
                lVar22 = lVar18 * 4;
                do {
                  pfVar13[-1] = *(float *)(lVar23 + -4 + (int64_t)pfVar13) *
                                *(float *)(lVar20 + -4 + (int64_t)pfVar13) +
                                pfVar16[1] * pfVar13[-1];
                  *pfVar13 = *(float *)(lVar23 + (int64_t)pfVar13 + (lVar21 - lVar9)) *
                             *(float *)(lVar23 + (int64_t)pfVar13) + *pfVar16 * *pfVar13;
                  pfVar13[1] = *(float *)(lVar23 + 4 + (int64_t)pfVar13) *
                               *(float *)(lVar20 + 4 + (int64_t)pfVar13) + pfVar16[-1] * pfVar13[1]
                  ;
                  pfVar1 = pfVar16 + -2;
                  pfVar16 = pfVar16 + -4;
                  pfVar13[2] = *(float *)(lVar23 + 8 + (int64_t)pfVar13) *
                               *(float *)(lVar20 + 8 + (int64_t)pfVar13) + *pfVar1 * pfVar13[2];
                  pfVar13 = pfVar13 + 4;
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
              }
              if (lVar22 < lVar25) {
                pfVar13 = (float *)(lVar15 + lVar22 * 4);
                pfVar16 = (float *)(lVar9 + ((lVar25 - lVar22) + -1) * 4);
                lVar18 = lVar25 - lVar22;
                do {
                  pfVar1 = (float *)((lVar9 - lVar15) + (int64_t)pfVar13);
                  fVar2 = *pfVar16;
                  pfVar16 = pfVar16 + -1;
                  *pfVar13 = *(float *)((lVar21 - lVar9) + (int64_t)pfVar1) * *pfVar1 +
                             *pfVar13 * fVar2;
                  pfVar13 = pfVar13 + 1;
                  lVar18 = lVar18 + -1;
                  lVar22 = lVar25;
                } while (lVar18 != 0);
              }
              lVar9 = (int64_t)(iVar17 / 2 + iVar19 / 2);
              if (lVar22 < lVar9) {
                if (3 < lVar9 - lVar22) {
                  puVar12 = (int32_t *)(lVar15 + (lVar22 + 1) * 4);
                  lVar18 = lVar21 - lVar15;
                  lVar20 = ((lVar9 - lVar22) - 4U >> 2) + 1;
                  lVar22 = lVar22 + lVar20 * 4;
                  do {
                    puVar12[-1] = *(int32_t *)(lVar18 + -4 + (int64_t)puVar12);
                    *puVar12 = *(int32_t *)(lVar18 + (int64_t)puVar12);
                    puVar12[1] = *(int32_t *)(lVar18 + 4 + (int64_t)puVar12);
                    puVar12[2] = *(int32_t *)(lVar18 + 8 + (int64_t)puVar12);
                    puVar12 = puVar12 + 4;
                    lVar20 = lVar20 + -1;
                  } while (lVar20 != 0);
                }
                if (lVar22 < lVar9) {
                  puVar12 = (int32_t *)(lVar15 + lVar22 * 4);
                  lVar9 = lVar9 - lVar22;
                  do {
                    *puVar12 = *(int32_t *)((lVar21 - lVar15) + (int64_t)puVar12);
                    puVar12 = puVar12 + 1;
                    lVar9 = lVar9 + -1;
                  } while (lVar9 != 0);
                }
              }
            }
          }
          else if ((int)lVar22 == 0) {
            lVar9 = SystemFunction_00018081a750(*piVar3 - iVar14);
            lVar22 = *(int64_t *)(param_1[1] + lStack_88) +
                     (((int64_t)(iVar19 / 2) - (int64_t)(iVar17 / 2)) + lVar27) * 4;
            lVar15 = *(int64_t *)(*param_2 + lStack_88);
            if (3 < lVar25) {
              pfVar13 = (float *)(lVar22 + 4);
              lVar18 = lVar15 - lVar22;
              pfVar16 = (float *)(lVar9 + (lVar25 + -2) * 4);
              lVar20 = lVar9 - lVar22;
              lVar23 = (lVar25 - 4U >> 2) + 1;
              lVar21 = lVar23 * 4;
              do {
                pfVar13[-1] = *(float *)(lVar20 + -4 + (int64_t)pfVar13) *
                              *(float *)(lVar18 + -4 + (int64_t)pfVar13) + pfVar16[1] * pfVar13[-1]
                ;
                *pfVar13 = *(float *)(lVar20 + (int64_t)pfVar13 + (lVar15 - lVar9)) *
                           *(float *)(lVar20 + (int64_t)pfVar13) + *pfVar16 * *pfVar13;
                pfVar13[1] = *(float *)(lVar20 + 4 + (int64_t)pfVar13) *
                             *(float *)(lVar18 + 4 + (int64_t)pfVar13) + pfVar16[-1] * pfVar13[1];
                pfVar1 = pfVar16 + -2;
                pfVar16 = pfVar16 + -4;
                pfVar13[2] = *(float *)(lVar20 + 8 + (int64_t)pfVar13) *
                             *(float *)(lVar18 + 8 + (int64_t)pfVar13) + *pfVar1 * pfVar13[2];
                pfVar13 = pfVar13 + 4;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            if (lVar21 < lVar25) {
              pfVar13 = (float *)(lVar22 + lVar21 * 4);
              pfVar16 = (float *)(lVar9 + ((lVar25 - lVar21) + -1) * 4);
              lVar21 = lVar25 - lVar21;
              do {
                fVar2 = *pfVar16;
                pfVar1 = (float *)((int64_t)pfVar13 + (lVar9 - lVar22));
                pfVar16 = pfVar16 + -1;
                *pfVar13 = *(float *)((lVar15 - lVar9) + (int64_t)pfVar1) * *pfVar1 +
                           fVar2 * *pfVar13;
                pfVar13 = pfVar13 + 1;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
          }
          else {
            lVar9 = SystemFunction_00018081a750(piVar3[1] - iVar14);
            lVar22 = *(int64_t *)(param_1[1] + lStack_88) + lVar27 * 4;
            lVar15 = *(int64_t *)(*param_2 + lStack_88);
            if (3 < lVar24) {
              pfVar13 = (float *)(lVar22 + 4);
              lVar18 = lVar15 - lVar22;
              pfVar16 = (float *)(lVar9 + (lVar24 + -2) * 4);
              lVar20 = lVar9 - lVar22;
              lVar23 = (lVar24 - 4U >> 2) + 1;
              lVar21 = lVar23 * 4;
              do {
                pfVar13[-1] = *(float *)((int64_t)pfVar13 + lVar20 + -4) *
                              *(float *)((int64_t)pfVar13 + lVar18 + -4) + pfVar16[1] * pfVar13[-1]
                ;
                *pfVar13 = *(float *)(lVar20 + (int64_t)pfVar13 + (lVar15 - lVar9)) *
                           *(float *)(lVar20 + (int64_t)pfVar13) + *pfVar16 * *pfVar13;
                pfVar13[1] = *(float *)(lVar20 + 4 + (int64_t)pfVar13) *
                             *(float *)(lVar18 + 4 + (int64_t)pfVar13) + pfVar16[-1] * pfVar13[1];
                pfVar1 = pfVar16 + -2;
                pfVar16 = pfVar16 + -4;
                pfVar13[2] = *(float *)(lVar20 + 8 + (int64_t)pfVar13) *
                             *(float *)(lVar18 + 8 + (int64_t)pfVar13) + *pfVar1 * pfVar13[2];
                pfVar13 = pfVar13 + 4;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            if (lVar21 < lVar24) {
              pfVar13 = (float *)(lVar22 + lVar21 * 4);
              pfVar16 = (float *)(lVar9 + ((lVar24 - lVar21) + -1) * 4);
              lVar21 = lVar24 - lVar21;
              do {
                pfVar1 = (float *)((lVar9 - lVar22) + (int64_t)pfVar13);
                fVar2 = *pfVar16;
                pfVar16 = pfVar16 + -1;
                *pfVar13 = *(float *)((lVar15 - lVar9) + (int64_t)pfVar1) * *pfVar1 +
                           *pfVar13 * fVar2;
                pfVar13 = pfVar13 + 1;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
          }
          lVar15 = 0;
          lVar21 = *(int64_t *)(param_1[1] + lStack_88) + (int64_t)iVar26 * 4;
          lVar22 = *(int64_t *)(*param_2 + lStack_88) + lVar8 * 4;
          if (3 < lVar8) {
            lVar9 = lVar22 - lVar21;
            lVar18 = (lVar8 - 4U >> 2) + 1;
            puVar12 = (int32_t *)(lVar21 + 4);
            lVar15 = lVar18 * 4;
            do {
              puVar12[-1] = *(int32_t *)(lVar9 + -4 + (int64_t)puVar12);
              *puVar12 = *(int32_t *)(lVar9 + (int64_t)puVar12);
              puVar12[1] = *(int32_t *)(lVar9 + 4 + (int64_t)puVar12);
              puVar12[2] = *(int32_t *)(lVar9 + 8 + (int64_t)puVar12);
              puVar12 = puVar12 + 4;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          if (lVar15 < lVar8) {
            puVar12 = (int32_t *)(lVar21 + lVar15 * 4);
            lVar15 = lVar8 - lVar15;
            do {
              *puVar12 = *(int32_t *)((int64_t)puVar12 + (lVar22 - lVar21));
              puVar12 = puVar12 + 1;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          lStack_88 = lStack_88 + 8;
          iStackX_20 = iStackX_20 + 1;
        } while (iStackX_20 < *(int *)(lVar28 + 4));
        iVar11 = (int)param_1[7];
      }
      iVar14 = 0;
      if (iVar11 == 0) {
        iVar14 = iVar19;
      }
      *(int *)(param_1 + 7) = iVar14;
      if ((int)param_1[4] == -1) {
        *(int *)(param_1 + 4) = iVar26;
        *(int *)((int64_t)param_1 + 0x1c) = iVar26;
      }
      else {
        *(int *)(param_1 + 4) = iVar6;
        *(int *)((int64_t)param_1 + 0x1c) =
             (((int)((piVar4[*(int *)((int64_t)param_1 + 0x2c)] >> 0x1f & 3U) +
                    piVar4[*(int *)((int64_t)param_1 + 0x2c)]) >> 2) +
              ((int)(piVar4[(int)param_1[6]] + (piVar4[(int)param_1[6]] >> 0x1f & 3U)) >> 2) >>
             (bVar5 & 0x1f)) + iVar6;
      }
    }
    lVar28 = 0;
    if (*(int64_t *)(piVar3 + 0xc) != -1) {
      lVar28 = (int64_t)
               (((int)((piVar4[*(int *)((int64_t)param_1 + 0x2c)] >> 0x1f & 3U) +
                      piVar4[*(int *)((int64_t)param_1 + 0x2c)]) >> 2) +
               ((int)(piVar4[(int)param_1[6]] + (piVar4[(int)param_1[6]] >> 0x1f & 3U)) >> 2)) +
               *(int64_t *)(piVar3 + 0xc);
    }
    *(int64_t *)(piVar3 + 0xc) = lVar28;
    if (param_1[8] == -1) {
      lVar28 = param_2[8];
      if (lVar28 != -1) {
        param_1[8] = lVar28;
        if (lVar28 < *(int64_t *)(piVar3 + 0xc)) {
          iVar14 = *(int *)((int64_t)param_1 + 0x1c);
          iVar7 = (int)(*(int64_t *)(piVar3 + 0xc) - lVar28 >> (bVar5 & 0x3f));
          if (*(int *)((int64_t)param_2 + 0x3c) == 0) {
            *(int *)(param_1 + 4) = (int)param_1[4] + iVar7;
            if (iVar14 < (int)param_1[4]) {
              *(int *)(param_1 + 4) = iVar14;
            }
          }
          else {
            *(int *)((int64_t)param_1 + 0x1c) = iVar14 - iVar7;
          }
        }
      }
    }
    else {
      lVar8 = (int64_t)
              (((int)((piVar4[*(int *)((int64_t)param_1 + 0x2c)] >> 0x1f & 3U) +
                     piVar4[*(int *)((int64_t)param_1 + 0x2c)]) >> 2) +
              ((int)(piVar4[(int)param_1[6]] + (piVar4[(int)param_1[6]] >> 0x1f & 3U)) >> 2)) +
              param_1[8];
      param_1[8] = lVar8;
      lVar28 = param_2[8];
      if ((lVar28 != -1) && (lVar8 != lVar28)) {
        if ((lVar28 < lVar8) &&
           ((iVar14 = (int)lVar8 - (int)lVar28, iVar14 != 0 &&
            (*(int *)((int64_t)param_2 + 0x3c) != 0)))) {
          *(int *)((int64_t)param_1 + 0x1c) =
               *(int *)((int64_t)param_1 + 0x1c) - (iVar14 >> (bVar5 & 0x1f));
          lVar28 = param_2[8];
        }
        param_1[8] = lVar28;
      }
    }
    if (*(int *)((int64_t)param_2 + 0x3c) != 0) {
      *(int32_t *)(param_1 + 5) = 1;
    }
    return 0;
  }
  return 0xffffff7d;
}
uint64_t NetworkProtocol_306e5(int64_t param_1,int64_t *param_2,uint64_t param_3,int param_4)
{
  int64_t lVar1;
  float *pfVar2;
  float fVar3;
  int64_t in_RAX;
  int64_t lVar4;
  byte bVar5;
  int iVar6;
  int32_t *puVar7;
  float *pfVar8;
  int iVar9;
  int64_t lVar10;
  float *pfVar11;
  int64_t unaff_RBX;
  int64_t lVar12;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int *in_R10;
  int *in_R11;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int iVar19;
  int iStackX_20;
  int iStack0000000000000028;
  int64_t lStack0000000000000030;
  int64_t lStack0000000000000038;
  int *local_var_40;
  int64_t lStack0000000000000048;
  int64_t local_buffer_50;
  int64_t lStack0000000000000058;
  int *local_var_60;
  int iStack00000000000000c0;
  int64_t *local_var_c8;
  int iStack00000000000000d0;
  int iStack00000000000000d8;
  *(int32_t *)(param_1 + 0x34) = 0xffffffff;
  if ((in_RAX == -1) || (in_RAX + 1 != param_2[9])) {
    *(uint64_t *)(param_1 + 0x40) = 0xffffffffffffffff;
    in_R10[0xc] = -1;
    in_R10[0xd] = -1;
  }
  *(int64_t *)(param_1 + 0x48) = param_2[9];
  if (*param_2 != 0) {
    bVar5 = (char)param_4 + 1;
    iStack00000000000000c0 = in_R11[1] >> (bVar5 & 0x1f);
    iVar9 = in_R11[*(int *)(unaff_RBX + 0x30)];
    iStack00000000000000d0 = *in_R11;
    *(int64_t *)(unaff_RBX + 0x50) =
         *(int64_t *)(unaff_RBX + 0x50) + (int64_t)(int)unaff_RSI[0xf];
    *(int64_t *)(unaff_RBX + 0x58) =
         *(int64_t *)(unaff_RBX + 0x58) + (int64_t)*(int *)((int64_t)unaff_RSI + 0x7c);
    *(int64_t *)(unaff_RBX + 0x60) =
         *(int64_t *)(unaff_RBX + 0x60) + (int64_t)(int)unaff_RSI[0x10];
    *(int64_t *)(unaff_RBX + 0x68) =
         *(int64_t *)(unaff_RBX + 0x68) + (int64_t)*(int *)((int64_t)unaff_RSI + 0x84);
    iStack0000000000000028 = 0;
    iStack00000000000000d0 = iStack00000000000000d0 >> (bVar5 & 0x1f);
    iVar6 = *(int *)(unaff_RBX + 0x38);
    iVar19 = iStack00000000000000c0;
    if (iVar6 == 0) {
      iVar19 = 0;
      iStack0000000000000028 = iStack00000000000000c0;
    }
    lStack0000000000000048 = (int64_t)(iVar9 >> (bVar5 & 0x1f));
    lVar17 = (int64_t)iStack00000000000000c0;
    iStack00000000000000d8 = 0;
    lVar18 = (int64_t)iStack00000000000000d0;
    if (0 < *(int *)(unaff_RDI + 4)) {
      lStack0000000000000058 = (int64_t)iStack0000000000000028;
      lStack0000000000000030 = 0;
      lStack0000000000000038 = lVar17;
      do {
        lVar1 = lStack0000000000000058;
        lVar12 = lStack0000000000000030;
        lVar15 = 0;
        iVar9 = *(int *)(unaff_RBX + 0x30);
        if (*(int *)(unaff_RBX + 0x2c) == 0) {
          lVar10 = SystemFunction_00018081a750(*in_R10 - param_4);
          lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + lVar12) + lVar1 * 4;
          if (iVar9 == 0) {
            lVar4 = *(int64_t *)(*unaff_RSI + lVar12);
            if (3 < lVar18) {
              pfVar8 = (float *)(lVar1 + 4);
              lVar13 = lVar4 - lVar1;
              pfVar11 = (float *)(lVar10 + (lVar18 + -2) * 4);
              lVar14 = lVar10 - lVar1;
              lVar16 = (lVar18 - 4U >> 2) + 1;
              lVar15 = lVar16 * 4;
              do {
                pfVar8[-1] = *(float *)(lVar14 + -4 + (int64_t)pfVar8) *
                             *(float *)(lVar13 + -4 + (int64_t)pfVar8) + pfVar11[1] * pfVar8[-1];
                *pfVar8 = *(float *)(lVar14 + (int64_t)pfVar8 + (lVar4 - lVar10)) *
                          *(float *)(lVar14 + (int64_t)pfVar8) + *pfVar11 * *pfVar8;
                pfVar8[1] = *(float *)(lVar14 + 4 + (int64_t)pfVar8) *
                            *(float *)(lVar13 + 4 + (int64_t)pfVar8) + pfVar11[-1] * pfVar8[1];
                pfVar2 = pfVar11 + -2;
                pfVar11 = pfVar11 + -4;
                pfVar8[2] = *(float *)(lVar14 + 8 + (int64_t)pfVar8) *
                            *(float *)(lVar13 + 8 + (int64_t)pfVar8) + *pfVar2 * pfVar8[2];
                pfVar8 = pfVar8 + 4;
                lVar16 = lVar16 + -1;
                lVar12 = lStack0000000000000030;
              } while (lVar16 != 0);
            }
            unaff_RSI = local_var_c8;
            if (lVar15 < lVar18) {
              pfVar8 = (float *)(lVar1 + lVar15 * 4);
              pfVar11 = (float *)(lVar10 + ((lVar18 - lVar15) + -1) * 4);
              lVar15 = lVar18 - lVar15;
              do {
                fVar3 = *pfVar11;
                pfVar2 = (float *)((int64_t)pfVar8 + (lVar10 - lVar1));
                pfVar11 = pfVar11 + -1;
                *pfVar8 = *(float *)((int64_t)pfVar2 + (lVar4 - lVar10)) * *pfVar2 +
                          fVar3 * *pfVar8;
                pfVar8 = pfVar8 + 1;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
          }
          else {
            lVar4 = 0;
            lVar15 = *(int64_t *)(*unaff_RSI + lVar12) +
                     ((int64_t)(iStack00000000000000c0 / 2) -
                     (int64_t)(iStack00000000000000d0 / 2)) * 4;
            if (3 < lVar18) {
              pfVar8 = (float *)(lVar1 + 4);
              lVar13 = lVar15 - lVar1;
              pfVar11 = (float *)(lVar10 + (lVar18 + -2) * 4);
              lVar14 = lVar10 - lVar1;
              lVar17 = (lVar18 - 4U >> 2) + 1;
              lVar4 = lVar17 * 4;
              do {
                pfVar8[-1] = *(float *)(lVar14 + -4 + (int64_t)pfVar8) *
                             *(float *)(lVar13 + -4 + (int64_t)pfVar8) + pfVar11[1] * pfVar8[-1];
                *pfVar8 = *(float *)(lVar14 + (int64_t)pfVar8 + (lVar15 - lVar10)) *
                          *(float *)(lVar14 + (int64_t)pfVar8) + *pfVar11 * *pfVar8;
                pfVar8[1] = *(float *)(lVar14 + 4 + (int64_t)pfVar8) *
                            *(float *)(lVar13 + 4 + (int64_t)pfVar8) + pfVar11[-1] * pfVar8[1];
                pfVar2 = pfVar11 + -2;
                pfVar11 = pfVar11 + -4;
                pfVar8[2] = *(float *)(lVar14 + 8 + (int64_t)pfVar8) *
                            *(float *)(lVar13 + 8 + (int64_t)pfVar8) + *pfVar2 * pfVar8[2];
                pfVar8 = pfVar8 + 4;
                lVar17 = lVar17 + -1;
                lVar12 = lStack0000000000000030;
                unaff_RSI = local_var_c8;
              } while (lVar17 != 0);
            }
            if (lVar4 < lVar18) {
              pfVar8 = (float *)(lVar1 + lVar4 * 4);
              pfVar11 = (float *)(lVar10 + ((lVar18 - lVar4) + -1) * 4);
              lVar17 = lVar18 - lVar4;
              do {
                pfVar2 = (float *)((lVar10 - lVar1) + (int64_t)pfVar8);
                fVar3 = *pfVar11;
                pfVar11 = pfVar11 + -1;
                *pfVar8 = *(float *)((lVar15 - lVar10) + (int64_t)pfVar2) * *pfVar2 +
                          *pfVar8 * fVar3;
                pfVar8 = pfVar8 + 1;
                lVar17 = lVar17 + -1;
                lVar4 = lVar18;
              } while (lVar17 != 0);
            }
            lVar10 = (int64_t)(iStack00000000000000d0 / 2 + iStack00000000000000c0 / 2);
            lVar17 = lStack0000000000000038;
            if (lVar4 < lVar10) {
              if (3 < lVar10 - lVar4) {
                puVar7 = (int32_t *)(lVar1 + (lVar4 + 1) * 4);
                lVar13 = lVar15 - lVar1;
                lVar14 = ((lVar10 - lVar4) - 4U >> 2) + 1;
                lVar4 = lVar4 + lVar14 * 4;
                do {
                  puVar7[-1] = *(int32_t *)(lVar13 + -4 + (int64_t)puVar7);
                  *puVar7 = *(int32_t *)(lVar13 + (int64_t)puVar7);
                  puVar7[1] = *(int32_t *)(lVar13 + 4 + (int64_t)puVar7);
                  puVar7[2] = *(int32_t *)(lVar13 + 8 + (int64_t)puVar7);
                  puVar7 = puVar7 + 4;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
              if (lVar4 < lVar10) {
                puVar7 = (int32_t *)(lVar1 + lVar4 * 4);
                lVar10 = lVar10 - lVar4;
                do {
                  *puVar7 = *(int32_t *)((lVar15 - lVar1) + (int64_t)puVar7);
                  puVar7 = puVar7 + 1;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
            }
          }
        }
        else if (iVar9 == 0) {
          lVar4 = SystemFunction_00018081a750(*in_R10 - param_4);
          lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + lVar12) +
                  (((int64_t)(iStack00000000000000c0 / 2) - (int64_t)(iStack00000000000000d0 / 2))
                  + lVar1) * 4;
          lVar10 = *(int64_t *)(*unaff_RSI + lVar12);
          if (3 < lVar18) {
            pfVar8 = (float *)(lVar1 + 4);
            lVar13 = lVar10 - lVar1;
            pfVar11 = (float *)(lVar4 + (lVar18 + -2) * 4);
            lVar14 = lVar4 - lVar1;
            lVar16 = (lVar18 - 4U >> 2) + 1;
            lVar15 = lVar16 * 4;
            do {
              pfVar8[-1] = *(float *)(lVar14 + -4 + (int64_t)pfVar8) *
                           *(float *)(lVar13 + -4 + (int64_t)pfVar8) + pfVar11[1] * pfVar8[-1];
              *pfVar8 = *(float *)(lVar14 + (int64_t)pfVar8 + (lVar10 - lVar4)) *
                        *(float *)(lVar14 + (int64_t)pfVar8) + *pfVar11 * *pfVar8;
              pfVar8[1] = *(float *)(lVar14 + 4 + (int64_t)pfVar8) *
                          *(float *)(lVar13 + 4 + (int64_t)pfVar8) + pfVar11[-1] * pfVar8[1];
              pfVar2 = pfVar11 + -2;
              pfVar11 = pfVar11 + -4;
              pfVar8[2] = *(float *)(lVar14 + 8 + (int64_t)pfVar8) *
                          *(float *)(lVar13 + 8 + (int64_t)pfVar8) + *pfVar2 * pfVar8[2];
              pfVar8 = pfVar8 + 4;
              lVar16 = lVar16 + -1;
              lVar12 = lStack0000000000000030;
            } while (lVar16 != 0);
          }
          unaff_RSI = local_var_c8;
          if (lVar15 < lVar18) {
            pfVar8 = (float *)(lVar1 + lVar15 * 4);
            pfVar11 = (float *)(lVar4 + ((lVar18 - lVar15) + -1) * 4);
            lVar15 = lVar18 - lVar15;
            do {
              fVar3 = *pfVar11;
              pfVar2 = (float *)((int64_t)pfVar8 + (lVar4 - lVar1));
              pfVar11 = pfVar11 + -1;
              *pfVar8 = *(float *)((lVar10 - lVar4) + (int64_t)pfVar2) * *pfVar2 + fVar3 * *pfVar8;
              pfVar8 = pfVar8 + 1;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        else {
          lVar4 = SystemFunction_00018081a750(in_R10[1] - param_4);
          lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + lVar12) + lVar1 * 4;
          lVar10 = *(int64_t *)(*unaff_RSI + lVar12);
          if (3 < lVar17) {
            pfVar8 = (float *)(lVar1 + 4);
            lVar13 = lVar10 - lVar1;
            pfVar11 = (float *)(lVar4 + (lVar17 + -2) * 4);
            lVar14 = lVar4 - lVar1;
            lVar16 = (lVar17 - 4U >> 2) + 1;
            lVar15 = lVar16 * 4;
            do {
              pfVar8[-1] = *(float *)((int64_t)pfVar8 + lVar14 + -4) *
                           *(float *)((int64_t)pfVar8 + lVar13 + -4) + pfVar11[1] * pfVar8[-1];
              *pfVar8 = *(float *)(lVar14 + (int64_t)pfVar8 + (lVar10 - lVar4)) *
                        *(float *)(lVar14 + (int64_t)pfVar8) + *pfVar11 * *pfVar8;
              pfVar8[1] = *(float *)(lVar14 + 4 + (int64_t)pfVar8) *
                          *(float *)(lVar13 + 4 + (int64_t)pfVar8) + pfVar11[-1] * pfVar8[1];
              pfVar2 = pfVar11 + -2;
              pfVar11 = pfVar11 + -4;
              pfVar8[2] = *(float *)(lVar14 + 8 + (int64_t)pfVar8) *
                          *(float *)(lVar13 + 8 + (int64_t)pfVar8) + *pfVar2 * pfVar8[2];
              pfVar8 = pfVar8 + 4;
              lVar16 = lVar16 + -1;
              lVar12 = lStack0000000000000030;
            } while (lVar16 != 0);
          }
          unaff_RSI = local_var_c8;
          if (lVar15 < lVar17) {
            pfVar8 = (float *)(lVar1 + lVar15 * 4);
            pfVar11 = (float *)(lVar4 + ((lVar17 - lVar15) + -1) * 4);
            lVar15 = lVar17 - lVar15;
            do {
              pfVar2 = (float *)((lVar4 - lVar1) + (int64_t)pfVar8);
              fVar3 = *pfVar11;
              pfVar11 = pfVar11 + -1;
              *pfVar8 = *(float *)((lVar10 - lVar4) + (int64_t)pfVar2) * *pfVar2 + *pfVar8 * fVar3;
              pfVar8 = pfVar8 + 1;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        lVar10 = 0;
        lVar15 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + lVar12) + (int64_t)iVar19 * 4;
        lVar1 = *(int64_t *)(*unaff_RSI + lVar12) + lStack0000000000000048 * 4;
        if (3 < lStack0000000000000048) {
          lVar4 = lVar1 - lVar15;
          lVar13 = (lStack0000000000000048 - 4U >> 2) + 1;
          puVar7 = (int32_t *)(lVar15 + 4);
          lVar10 = lVar13 * 4;
          do {
            puVar7[-1] = *(int32_t *)(lVar4 + -4 + (int64_t)puVar7);
            *puVar7 = *(int32_t *)(lVar4 + (int64_t)puVar7);
            puVar7[1] = *(int32_t *)(lVar4 + 4 + (int64_t)puVar7);
            puVar7[2] = *(int32_t *)(lVar4 + 8 + (int64_t)puVar7);
            puVar7 = puVar7 + 4;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        if (lVar10 < lStack0000000000000048) {
          puVar7 = (int32_t *)(lVar15 + lVar10 * 4);
          lVar10 = lStack0000000000000048 - lVar10;
          do {
            *puVar7 = *(int32_t *)((int64_t)puVar7 + (lVar1 - lVar15));
            puVar7 = puVar7 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        lStack0000000000000030 = lVar12 + 8;
        iStack00000000000000d8 = iStack00000000000000d8 + 1;
        in_R10 = local_var_40;
        param_4 = iStackX_20;
      } while (iStack00000000000000d8 < *(int *)(local_buffer_50 + 4));
      iVar6 = *(int *)(unaff_RBX + 0x38);
      in_R11 = local_var_60;
    }
    iVar9 = 0;
    if (iVar6 == 0) {
      iVar9 = iStack00000000000000c0;
    }
    *(int *)(unaff_RBX + 0x38) = iVar9;
    if (*(int *)(unaff_RBX + 0x20) == -1) {
      *(int *)(unaff_RBX + 0x20) = iVar19;
      *(int *)(unaff_RBX + 0x1c) = iVar19;
    }
    else {
      *(int *)(unaff_RBX + 0x20) = iStack0000000000000028;
      *(int *)(unaff_RBX + 0x1c) =
           (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                  in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
            ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                  (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2) >> ((byte)param_4 & 0x1f)
           ) + iStack0000000000000028;
    }
  }
  lVar17 = 0;
  if (*(int64_t *)(in_R10 + 0xc) != -1) {
    lVar17 = (int64_t)
             (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                    in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
             ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                   (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2)) +
             *(int64_t *)(in_R10 + 0xc);
  }
  *(int64_t *)(in_R10 + 0xc) = lVar17;
  if (*(int64_t *)(unaff_RBX + 0x40) == -1) {
    lVar17 = unaff_RSI[8];
    if (lVar17 != -1) {
      *(int64_t *)(unaff_RBX + 0x40) = lVar17;
      if (lVar17 < *(int64_t *)(in_R10 + 0xc)) {
        iVar9 = *(int *)(unaff_RBX + 0x1c);
        iVar6 = (int)(*(int64_t *)(in_R10 + 0xc) - lVar17 >> ((byte)param_4 & 0x3f));
        if (*(int *)((int64_t)unaff_RSI + 0x3c) == 0) {
          *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar6;
          if (iVar9 < *(int *)(unaff_RBX + 0x20)) {
            *(int *)(unaff_RBX + 0x20) = iVar9;
          }
        }
        else {
          *(int *)(unaff_RBX + 0x1c) = iVar9 - iVar6;
        }
      }
    }
  }
  else {
    lVar18 = (int64_t)
             (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                    in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
             ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                   (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2)) +
             *(int64_t *)(unaff_RBX + 0x40);
    *(int64_t *)(unaff_RBX + 0x40) = lVar18;
    lVar17 = unaff_RSI[8];
    if ((lVar17 != -1) && (lVar18 != lVar17)) {
      if ((lVar17 < lVar18) &&
         ((iVar9 = (int)lVar18 - (int)lVar17, iVar9 != 0 &&
          (*(int *)((int64_t)unaff_RSI + 0x3c) != 0)))) {
        *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar9 >> ((byte)param_4 & 0x1f));
        lVar17 = unaff_RSI[8];
      }
      *(int64_t *)(unaff_RBX + 0x40) = lVar17;
    }
  }
  if (*(int *)((int64_t)unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}
uint64_t NetworkProtocol_30733(byte param_1,uint64_t param_2,uint64_t param_3,int param_4)
{
  int64_t lVar1;
  float *pfVar2;
  float fVar3;
  byte bVar4;
  int64_t in_RAX;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int32_t *puVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int64_t unaff_RBX;
  uint64_t uVar12;
  int64_t *unaff_RSI;
  uint64_t uVar13;
  int64_t unaff_RDI;
  int64_t lVar14;
  int64_t lVar15;
  int *in_R10;
  uint64_t uVar16;
  int *in_R11;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  uint uVar20;
  uint64_t unaff_R15;
  int iStackX_20;
  uint local_buffer_28;
  int64_t lStack0000000000000038;
  int *local_var_40;
  int64_t lStack0000000000000048;
  int64_t local_buffer_50;
  int64_t lStack0000000000000058;
  int *local_var_60;
  uint local_buffer_c0;
  int64_t *local_var_c8;
  int iStack00000000000000d0;
  uint local_buffer_d8;
  iVar10 = in_R11[in_RAX];
  iStack00000000000000d0 = *in_R11;
  *(int64_t *)(unaff_RBX + 0x50) = *(int64_t *)(unaff_RBX + 0x50) + (int64_t)(int)unaff_RSI[0xf];
  *(int64_t *)(unaff_RBX + 0x58) =
       *(int64_t *)(unaff_RBX + 0x58) + (int64_t)*(int *)((int64_t)unaff_RSI + 0x7c);
  *(int64_t *)(unaff_RBX + 0x60) = *(int64_t *)(unaff_RBX + 0x60) + (int64_t)(int)unaff_RSI[0x10]
  ;
  *(int64_t *)(unaff_RBX + 0x68) =
       *(int64_t *)(unaff_RBX + 0x68) + (int64_t)*(int *)((int64_t)unaff_RSI + 0x84);
  local_buffer_d8 = (uint)unaff_R15;
  iStack00000000000000d0 = iStack00000000000000d0 >> (param_1 & 0x1f);
  iVar7 = *(int *)(unaff_RBX + 0x38);
  local_buffer_c0 = (uint)param_3;
  uVar20 = local_buffer_c0;
  local_buffer_28 = local_buffer_d8;
  if (iVar7 == 0) {
    uVar20 = local_buffer_d8;
    local_buffer_28 = local_buffer_c0;
  }
  lStack0000000000000048 = (int64_t)(iVar10 >> (param_1 & 0x1f));
  lVar18 = (int64_t)(int)local_buffer_c0;
  lVar19 = (int64_t)iStack00000000000000d0;
  if ((int)local_buffer_d8 < *(int *)(unaff_RDI + 4)) {
    lStack0000000000000058 = (int64_t)(int)local_buffer_28;
    uVar12 = unaff_R15 & 0xffffffff;
    uVar16 = unaff_R15;
    lStack0000000000000038 = lVar18;
    do {
      lVar1 = lStack0000000000000058;
      iVar10 = *(int *)(unaff_RBX + 0x30);
      if (*(int *)(unaff_RBX + 0x2c) == 0) {
        lVar6 = SystemFunction_00018081a750(*in_R10 - param_4);
        lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + uVar12) + lVar1 * 4;
        if (iVar10 == 0) {
          lVar5 = *(int64_t *)(*unaff_RSI + uVar12);
          uVar13 = unaff_R15;
          if (3 < lVar19) {
            pfVar9 = (float *)(lVar1 + 4);
            lVar14 = lVar5 - lVar1;
            pfVar11 = (float *)(lVar6 + (lVar19 + -2) * 4);
            lVar15 = lVar6 - lVar1;
            lVar17 = (lVar19 - 4U >> 2) + 1;
            uVar13 = lVar17 * 4;
            do {
              pfVar9[-1] = *(float *)(lVar15 + -4 + (int64_t)pfVar9) *
                           *(float *)(lVar14 + -4 + (int64_t)pfVar9) + pfVar11[1] * pfVar9[-1];
              *pfVar9 = *(float *)(lVar15 + (int64_t)pfVar9 + (lVar5 - lVar6)) *
                        *(float *)(lVar15 + (int64_t)pfVar9) + *pfVar11 * *pfVar9;
              pfVar9[1] = *(float *)(lVar15 + 4 + (int64_t)pfVar9) *
                          *(float *)(lVar14 + 4 + (int64_t)pfVar9) + pfVar11[-1] * pfVar9[1];
              pfVar2 = pfVar11 + -2;
              pfVar11 = pfVar11 + -4;
              pfVar9[2] = *(float *)(lVar15 + 8 + (int64_t)pfVar9) *
                          *(float *)(lVar14 + 8 + (int64_t)pfVar9) + *pfVar2 * pfVar9[2];
              pfVar9 = pfVar9 + 4;
              lVar17 = lVar17 + -1;
              uVar12 = uVar16;
            } while (lVar17 != 0);
          }
          unaff_RSI = local_var_c8;
          if ((int64_t)uVar13 < lVar19) {
            pfVar9 = (float *)(lVar1 + uVar13 * 4);
            pfVar11 = (float *)(lVar6 + ((lVar19 - uVar13) + -1) * 4);
            lVar14 = lVar19 - uVar13;
            do {
              fVar3 = *pfVar11;
              pfVar2 = (float *)((int64_t)pfVar9 + (lVar6 - lVar1));
              pfVar11 = pfVar11 + -1;
              *pfVar9 = *(float *)((int64_t)pfVar2 + (lVar5 - lVar6)) * *pfVar2 + fVar3 * *pfVar9;
              pfVar9 = pfVar9 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
        }
        else {
          lVar5 = 0;
          lVar18 = *(int64_t *)(*unaff_RSI + uVar12) +
                   ((int64_t)((int)local_buffer_c0 / 2) -
                   (int64_t)(iStack00000000000000d0 / 2)) * 4;
          if (3 < lVar19) {
            pfVar9 = (float *)(lVar1 + 4);
            lVar15 = lVar18 - lVar1;
            pfVar11 = (float *)(lVar6 + (lVar19 + -2) * 4);
            lVar17 = lVar6 - lVar1;
            lVar14 = (lVar19 - 4U >> 2) + 1;
            lVar5 = lVar14 * 4;
            do {
              pfVar9[-1] = *(float *)(lVar17 + -4 + (int64_t)pfVar9) *
                           *(float *)(lVar15 + -4 + (int64_t)pfVar9) + pfVar11[1] * pfVar9[-1];
              *pfVar9 = *(float *)(lVar17 + (int64_t)pfVar9 + (lVar18 - lVar6)) *
                        *(float *)(lVar17 + (int64_t)pfVar9) + *pfVar11 * *pfVar9;
              pfVar9[1] = *(float *)(lVar17 + 4 + (int64_t)pfVar9) *
                          *(float *)(lVar15 + 4 + (int64_t)pfVar9) + pfVar11[-1] * pfVar9[1];
              pfVar2 = pfVar11 + -2;
              pfVar11 = pfVar11 + -4;
              pfVar9[2] = *(float *)(lVar17 + 8 + (int64_t)pfVar9) *
                          *(float *)(lVar15 + 8 + (int64_t)pfVar9) + *pfVar2 * pfVar9[2];
              pfVar9 = pfVar9 + 4;
              lVar14 = lVar14 + -1;
              uVar12 = uVar16;
              unaff_RSI = local_var_c8;
            } while (lVar14 != 0);
          }
          if (lVar5 < lVar19) {
            pfVar9 = (float *)(lVar1 + lVar5 * 4);
            pfVar11 = (float *)(lVar6 + ((lVar19 - lVar5) + -1) * 4);
            lVar14 = lVar19 - lVar5;
            do {
              pfVar2 = (float *)((lVar6 - lVar1) + (int64_t)pfVar9);
              fVar3 = *pfVar11;
              pfVar11 = pfVar11 + -1;
              *pfVar9 = *(float *)((lVar18 - lVar6) + (int64_t)pfVar2) * *pfVar2 + *pfVar9 * fVar3;
              pfVar9 = pfVar9 + 1;
              lVar14 = lVar14 + -1;
              lVar5 = lVar19;
            } while (lVar14 != 0);
          }
          lVar6 = (int64_t)(iStack00000000000000d0 / 2 + (int)local_buffer_c0 / 2);
          if (lVar5 < lVar6) {
            if (3 < lVar6 - lVar5) {
              puVar8 = (int32_t *)(lVar1 + (lVar5 + 1) * 4);
              lVar14 = lVar18 - lVar1;
              lVar15 = ((lVar6 - lVar5) - 4U >> 2) + 1;
              lVar5 = lVar5 + lVar15 * 4;
              do {
                puVar8[-1] = *(int32_t *)(lVar14 + -4 + (int64_t)puVar8);
                *puVar8 = *(int32_t *)(lVar14 + (int64_t)puVar8);
                puVar8[1] = *(int32_t *)(lVar14 + 4 + (int64_t)puVar8);
                puVar8[2] = *(int32_t *)(lVar14 + 8 + (int64_t)puVar8);
                puVar8 = puVar8 + 4;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
            if (lVar5 < lVar6) {
              puVar8 = (int32_t *)(lVar1 + lVar5 * 4);
              lVar6 = lVar6 - lVar5;
              do {
                *puVar8 = *(int32_t *)((lVar18 - lVar1) + (int64_t)puVar8);
                puVar8 = puVar8 + 1;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
          }
          unaff_R15 = 0;
          lVar18 = lStack0000000000000038;
        }
      }
      else if (iVar10 == 0) {
        lVar5 = SystemFunction_00018081a750(*in_R10 - param_4);
        lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + uVar12) +
                (((int64_t)((int)local_buffer_c0 / 2) -
                 (int64_t)(iStack00000000000000d0 / 2)) + lVar1) * 4;
        lVar6 = *(int64_t *)(*unaff_RSI + uVar12);
        uVar13 = unaff_R15;
        if (3 < lVar19) {
          pfVar9 = (float *)(lVar1 + 4);
          lVar14 = lVar6 - lVar1;
          pfVar11 = (float *)(lVar5 + (lVar19 + -2) * 4);
          lVar15 = lVar5 - lVar1;
          lVar17 = (lVar19 - 4U >> 2) + 1;
          uVar13 = lVar17 * 4;
          do {
            pfVar9[-1] = *(float *)(lVar15 + -4 + (int64_t)pfVar9) *
                         *(float *)(lVar14 + -4 + (int64_t)pfVar9) + pfVar11[1] * pfVar9[-1];
            *pfVar9 = *(float *)(lVar15 + (int64_t)pfVar9 + (lVar6 - lVar5)) *
                      *(float *)(lVar15 + (int64_t)pfVar9) + *pfVar11 * *pfVar9;
            pfVar9[1] = *(float *)(lVar15 + 4 + (int64_t)pfVar9) *
                        *(float *)(lVar14 + 4 + (int64_t)pfVar9) + pfVar11[-1] * pfVar9[1];
            pfVar2 = pfVar11 + -2;
            pfVar11 = pfVar11 + -4;
            pfVar9[2] = *(float *)(lVar15 + 8 + (int64_t)pfVar9) *
                        *(float *)(lVar14 + 8 + (int64_t)pfVar9) + *pfVar2 * pfVar9[2];
            pfVar9 = pfVar9 + 4;
            lVar17 = lVar17 + -1;
            uVar12 = uVar16;
          } while (lVar17 != 0);
        }
        unaff_RSI = local_var_c8;
        if ((int64_t)uVar13 < lVar19) {
          pfVar9 = (float *)(lVar1 + uVar13 * 4);
          pfVar11 = (float *)(lVar5 + ((lVar19 - uVar13) + -1) * 4);
          lVar14 = lVar19 - uVar13;
          do {
            fVar3 = *pfVar11;
            pfVar2 = (float *)((int64_t)pfVar9 + (lVar5 - lVar1));
            pfVar11 = pfVar11 + -1;
            *pfVar9 = *(float *)((lVar6 - lVar5) + (int64_t)pfVar2) * *pfVar2 + fVar3 * *pfVar9;
            pfVar9 = pfVar9 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      else {
        lVar5 = SystemFunction_00018081a750(in_R10[1] - param_4);
        lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + uVar12) + lVar1 * 4;
        lVar6 = *(int64_t *)(*unaff_RSI + uVar12);
        uVar13 = unaff_R15;
        if (3 < lVar18) {
          pfVar9 = (float *)(lVar1 + 4);
          lVar14 = lVar6 - lVar1;
          pfVar11 = (float *)(lVar5 + (lVar18 + -2) * 4);
          lVar15 = lVar5 - lVar1;
          lVar17 = (lVar18 - 4U >> 2) + 1;
          uVar13 = lVar17 * 4;
          do {
            pfVar9[-1] = *(float *)((int64_t)pfVar9 + lVar15 + -4) *
                         *(float *)((int64_t)pfVar9 + lVar14 + -4) + pfVar11[1] * pfVar9[-1];
            *pfVar9 = *(float *)(lVar15 + (int64_t)pfVar9 + (lVar6 - lVar5)) *
                      *(float *)(lVar15 + (int64_t)pfVar9) + *pfVar11 * *pfVar9;
            pfVar9[1] = *(float *)(lVar15 + 4 + (int64_t)pfVar9) *
                        *(float *)(lVar14 + 4 + (int64_t)pfVar9) + pfVar11[-1] * pfVar9[1];
            pfVar2 = pfVar11 + -2;
            pfVar11 = pfVar11 + -4;
            pfVar9[2] = *(float *)(lVar15 + 8 + (int64_t)pfVar9) *
                        *(float *)(lVar14 + 8 + (int64_t)pfVar9) + *pfVar2 * pfVar9[2];
            pfVar9 = pfVar9 + 4;
            lVar17 = lVar17 + -1;
            uVar12 = uVar16;
          } while (lVar17 != 0);
        }
        unaff_RSI = local_var_c8;
        if ((int64_t)uVar13 < lVar18) {
          pfVar9 = (float *)(lVar1 + uVar13 * 4);
          pfVar11 = (float *)(lVar5 + ((lVar18 - uVar13) + -1) * 4);
          lVar14 = lVar18 - uVar13;
          do {
            pfVar2 = (float *)((lVar5 - lVar1) + (int64_t)pfVar9);
            fVar3 = *pfVar11;
            pfVar11 = pfVar11 + -1;
            *pfVar9 = *(float *)((lVar6 - lVar5) + (int64_t)pfVar2) * *pfVar2 + *pfVar9 * fVar3;
            pfVar9 = pfVar9 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + uVar12) + (int64_t)(int)uVar20 * 4;
      lVar6 = *(int64_t *)(*unaff_RSI + uVar12) + lStack0000000000000048 * 4;
      uVar16 = unaff_R15;
      if (3 < lStack0000000000000048) {
        lVar5 = lVar6 - lVar1;
        lVar14 = (lStack0000000000000048 - 4U >> 2) + 1;
        puVar8 = (int32_t *)(lVar1 + 4);
        uVar16 = lVar14 * 4;
        do {
          puVar8[-1] = *(int32_t *)(lVar5 + -4 + (int64_t)puVar8);
          *puVar8 = *(int32_t *)(lVar5 + (int64_t)puVar8);
          puVar8[1] = *(int32_t *)(lVar5 + 4 + (int64_t)puVar8);
          puVar8[2] = *(int32_t *)(lVar5 + 8 + (int64_t)puVar8);
          puVar8 = puVar8 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if ((int64_t)uVar16 < lStack0000000000000048) {
        puVar8 = (int32_t *)(lVar1 + uVar16 * 4);
        lVar5 = lStack0000000000000048 - uVar16;
        do {
          *puVar8 = *(int32_t *)((int64_t)puVar8 + (lVar6 - lVar1));
          puVar8 = puVar8 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar12 = uVar12 + 8;
      local_buffer_d8 = local_buffer_d8 + 1;
      in_R10 = local_var_40;
      uVar16 = uVar12;
      param_4 = iStackX_20;
    } while ((int)local_buffer_d8 < *(int *)(local_buffer_50 + 4));
    iVar7 = *(int *)(unaff_RBX + 0x38);
    param_3 = (uint64_t)local_buffer_c0;
    in_R11 = local_var_60;
  }
  uVar12 = unaff_R15;
  if (iVar7 == 0) {
    uVar12 = param_3;
  }
  *(int *)(unaff_RBX + 0x38) = (int)uVar12;
  bVar4 = (byte)param_4;
  if (*(int *)(unaff_RBX + 0x20) == -1) {
    *(uint *)(unaff_RBX + 0x20) = uVar20;
    *(uint *)(unaff_RBX + 0x1c) = uVar20;
  }
  else {
    *(uint *)(unaff_RBX + 0x20) = local_buffer_28;
    *(uint *)(unaff_RBX + 0x1c) =
         (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
          ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2) >> (bVar4 & 0x1f)) +
         local_buffer_28;
  }
  if (*(int64_t *)(in_R10 + 0xc) != -1) {
    unaff_R15 = (int64_t)
                (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                       in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
                ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                      (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2)) +
                *(int64_t *)(in_R10 + 0xc);
  }
  *(uint64_t *)(in_R10 + 0xc) = unaff_R15;
  if (*(int64_t *)(unaff_RBX + 0x40) == -1) {
    lVar18 = unaff_RSI[8];
    if (lVar18 != -1) {
      *(int64_t *)(unaff_RBX + 0x40) = lVar18;
      if (lVar18 < *(int64_t *)(in_R10 + 0xc)) {
        iVar10 = *(int *)(unaff_RBX + 0x1c);
        iVar7 = (int)(*(int64_t *)(in_R10 + 0xc) - lVar18 >> (bVar4 & 0x3f));
        if (*(int *)((int64_t)unaff_RSI + 0x3c) == 0) {
          *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar7;
          if (iVar10 < *(int *)(unaff_RBX + 0x20)) {
            *(int *)(unaff_RBX + 0x20) = iVar10;
          }
        }
        else {
          *(int *)(unaff_RBX + 0x1c) = iVar10 - iVar7;
        }
      }
    }
  }
  else {
    lVar19 = (int64_t)
             (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                    in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
             ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                   (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2)) +
             *(int64_t *)(unaff_RBX + 0x40);
    *(int64_t *)(unaff_RBX + 0x40) = lVar19;
    lVar18 = unaff_RSI[8];
    if ((lVar18 != -1) && (lVar19 != lVar18)) {
      if ((lVar18 < lVar19) &&
         ((iVar10 = (int)lVar19 - (int)lVar18, iVar10 != 0 &&
          (*(int *)((int64_t)unaff_RSI + 0x3c) != 0)))) {
        *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar10 >> (bVar4 & 0x1f));
        lVar18 = unaff_RSI[8];
      }
      *(int64_t *)(unaff_RBX + 0x40) = lVar18;
    }
  }
  if (*(int *)((int64_t)unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}
uint64_t NetworkProtocol_30e03(void)
{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  byte in_R9B;
  int64_t in_R10;
  int64_t in_R11;
  int32_t unaff_R14D;
  int64_t unaff_R15;
  *(int32_t *)(unaff_RBX + 0x20) = unaff_R14D;
  *(int32_t *)(unaff_RBX + 0x1c) = unaff_R14D;
  if (*(int64_t *)(in_R10 + 0x30) != -1) {
    iVar3 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x30) * 4);
    unaff_R15 = (int64_t)
                (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) +
                ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + *(int64_t *)(in_R10 + 0x30);
  }
  *(int64_t *)(in_R10 + 0x30) = unaff_R15;
  if (*(int64_t *)(unaff_RBX + 0x40) == -1) {
    lVar2 = *(int64_t *)(unaff_RSI + 0x40);
    if (lVar2 != -1) {
      *(int64_t *)(unaff_RBX + 0x40) = lVar2;
      if (lVar2 < *(int64_t *)(in_R10 + 0x30)) {
        iVar3 = *(int *)(unaff_RBX + 0x1c);
        iVar1 = (int)(*(int64_t *)(in_R10 + 0x30) - lVar2 >> (in_R9B & 0x3f));
        if (*(int *)(unaff_RSI + 0x3c) == 0) {
          *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar1;
          if (iVar3 < *(int *)(unaff_RBX + 0x20)) {
            *(int *)(unaff_RBX + 0x20) = iVar3;
          }
        }
        else {
          *(int *)(unaff_RBX + 0x1c) = iVar3 - iVar1;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x30) * 4);
    lVar4 = (int64_t)
            (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)
            ) + *(int64_t *)(unaff_RBX + 0x40);
    *(int64_t *)(unaff_RBX + 0x40) = lVar4;
    lVar2 = *(int64_t *)(unaff_RSI + 0x40);
    if ((lVar2 != -1) && (lVar4 != lVar2)) {
      if ((lVar2 < lVar4) &&
         ((iVar3 = (int)lVar4 - (int)lVar2, iVar3 != 0 && (*(int *)(unaff_RSI + 0x3c) != 0)))) {
        *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar3 >> (in_R9B & 0x1f));
        lVar2 = *(int64_t *)(unaff_RSI + 0x40);
      }
      *(int64_t *)(unaff_RBX + 0x40) = lVar2;
    }
  }
  if (*(int *)(unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}
uint64_t
NetworkProtocol_30e10(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,int param_5,
             int64_t param_6,int64_t param_7,int *param_8,int64_t param_9,int64_t param_10,
             int64_t param_11,int64_t param_12)
{
  float *pfVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float *pfVar5;
  int32_t *puVar6;
  int iVar7;
  float *pfVar8;
  int64_t lVar9;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t in_R10;
  int64_t lVar14;
  int64_t lVar15;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int iStackX_20;
  int iStackX_24;
  int local_var_c0;
  int64_t *local_var_c8;
  int local_var_d0;
  int local_var_d8;
  do {
    lVar9 = *(int64_t *)(in_R10 + unaff_RBP);
    lVar13 = unaff_R15;
    if (3 < unaff_R13) {
      pfVar5 = (float *)(unaff_R14 + 4);
      lVar10 = lVar9 - unaff_R14;
      pfVar8 = (float *)(param_3 + (unaff_R13 + -2) * 4);
      lVar12 = param_3 - unaff_R14;
      lVar15 = (unaff_R13 - 4U >> 2) + 1;
      lVar13 = lVar15 * 4;
      do {
        pfVar5[-1] = *(float *)(lVar12 + -4 + (int64_t)pfVar5) *
                     *(float *)(lVar10 + -4 + (int64_t)pfVar5) + pfVar8[1] * pfVar5[-1];
        *pfVar5 = *(float *)(lVar12 + (int64_t)pfVar5 + (lVar9 - param_3)) *
                  *(float *)(lVar12 + (int64_t)pfVar5) + *pfVar8 * *pfVar5;
        pfVar5[1] = *(float *)(lVar12 + 4 + (int64_t)pfVar5) *
                    *(float *)(lVar10 + 4 + (int64_t)pfVar5) + pfVar8[-1] * pfVar5[1];
        pfVar1 = pfVar8 + -2;
        pfVar8 = pfVar8 + -4;
        pfVar5[2] = *(float *)(lVar12 + 8 + (int64_t)pfVar5) *
                    *(float *)(lVar10 + 8 + (int64_t)pfVar5) + *pfVar1 * pfVar5[2];
        pfVar5 = pfVar5 + 4;
        lVar15 = lVar15 + -1;
        unaff_RBP = param_6;
      } while (lVar15 != 0);
    }
    if (lVar13 < unaff_R13) {
      pfVar5 = (float *)(unaff_R14 + lVar13 * 4);
      pfVar8 = (float *)(param_3 + ((unaff_R13 - lVar13) + -1) * 4);
      lVar13 = unaff_R13 - lVar13;
      do {
        fVar2 = *pfVar8;
        pfVar1 = (float *)((int64_t)pfVar5 + (param_3 - unaff_R14));
        pfVar8 = pfVar8 + -1;
        *pfVar5 = *(float *)((int64_t)pfVar1 + (lVar9 - param_3)) * *pfVar1 + fVar2 * *pfVar5;
        pfVar5 = pfVar5 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    while( true ) {
      while( true ) {
        lVar13 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + unaff_RBP) + (int64_t)iStackX_24 * 4;
        lVar9 = *(int64_t *)(*local_var_c8 + unaff_RBP) + param_9 * 4;
        lVar10 = unaff_R15;
        if (3 < param_9) {
          lVar12 = lVar9 - lVar13;
          lVar15 = (param_9 - 4U >> 2) + 1;
          puVar6 = (int32_t *)(lVar13 + 4);
          lVar10 = lVar15 * 4;
          do {
            puVar6[-1] = *(int32_t *)(lVar12 + -4 + (int64_t)puVar6);
            *puVar6 = *(int32_t *)(lVar12 + (int64_t)puVar6);
            puVar6[1] = *(int32_t *)(lVar12 + 4 + (int64_t)puVar6);
            puVar6[2] = *(int32_t *)(lVar12 + 8 + (int64_t)puVar6);
            puVar6 = puVar6 + 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        if (lVar10 < param_9) {
          puVar6 = (int32_t *)(lVar13 + lVar10 * 4);
          lVar10 = param_9 - lVar10;
          do {
            *puVar6 = *(int32_t *)((int64_t)puVar6 + (lVar9 - lVar13));
            puVar6 = puVar6 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        unaff_RBP = unaff_RBP + 8;
        local_var_d8 = local_var_d8 + 1;
        if (*(int *)(param_10 + 4) <= local_var_d8) {
          iVar7 = (int)unaff_R15;
          if (*(int *)(unaff_RBX + 0x38) == 0) {
            iVar7 = local_var_c0;
          }
          *(int *)(unaff_RBX + 0x38) = iVar7;
          bVar4 = (byte)iStackX_20;
          if (*(int *)(unaff_RBX + 0x20) == -1) {
            *(int *)(unaff_RBX + 0x20) = iStackX_24;
            *(int *)(unaff_RBX + 0x1c) = iStackX_24;
          }
          else {
            *(int *)(unaff_RBX + 0x20) = param_5;
            iVar7 = *(int *)(param_12 + (int64_t)*(int *)(unaff_RBX + 0x2c) * 4);
            iVar3 = *(int *)(param_12 + (int64_t)*(int *)(unaff_RBX + 0x30) * 4);
            *(int *)(unaff_RBX + 0x1c) =
                 (((int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2) +
                  ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) >> (bVar4 & 0x1f)) + param_5;
          }
          if (*(int64_t *)(param_8 + 0xc) != -1) {
            iVar7 = *(int *)(param_12 + (int64_t)*(int *)(unaff_RBX + 0x2c) * 4);
            iVar3 = *(int *)(param_12 + (int64_t)*(int *)(unaff_RBX + 0x30) * 4);
            unaff_R15 = (int64_t)
                        (((int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2) +
                        ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + *(int64_t *)(param_8 + 0xc);
          }
          *(int64_t *)(param_8 + 0xc) = unaff_R15;
          if (*(int64_t *)(unaff_RBX + 0x40) == -1) {
            lVar13 = local_var_c8[8];
            if (lVar13 != -1) {
              *(int64_t *)(unaff_RBX + 0x40) = lVar13;
              if (lVar13 < *(int64_t *)(param_8 + 0xc)) {
                iVar7 = *(int *)(unaff_RBX + 0x1c);
                iVar3 = (int)(*(int64_t *)(param_8 + 0xc) - lVar13 >> (bVar4 & 0x3f));
                if (*(int *)((int64_t)local_var_c8 + 0x3c) == 0) {
                  *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar3;
                  if (iVar7 < *(int *)(unaff_RBX + 0x20)) {
                    *(int *)(unaff_RBX + 0x20) = iVar7;
                  }
                }
                else {
                  *(int *)(unaff_RBX + 0x1c) = iVar7 - iVar3;
                }
              }
            }
          }
          else {
            iVar7 = *(int *)(param_12 + (int64_t)*(int *)(unaff_RBX + 0x2c) * 4);
            iVar3 = *(int *)(param_12 + (int64_t)*(int *)(unaff_RBX + 0x30) * 4);
            lVar9 = (int64_t)
                    (((int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2) +
                    ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + *(int64_t *)(unaff_RBX + 0x40);
            *(int64_t *)(unaff_RBX + 0x40) = lVar9;
            lVar13 = local_var_c8[8];
            if ((lVar13 != -1) && (lVar9 != lVar13)) {
              if ((lVar13 < lVar9) &&
                 ((iVar7 = (int)lVar9 - (int)lVar13, iVar7 != 0 &&
                  (*(int *)((int64_t)local_var_c8 + 0x3c) != 0)))) {
                *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar7 >> (bVar4 & 0x1f));
                lVar13 = local_var_c8[8];
              }
              *(int64_t *)(unaff_RBX + 0x40) = lVar13;
            }
          }
          if (*(int *)((int64_t)local_var_c8 + 0x3c) != 0) {
            *(int32_t *)(unaff_RBX + 0x28) = 1;
          }
          return 0;
        }
        iVar7 = *(int *)(unaff_RBX + 0x30);
        if (*(int *)(unaff_RBX + 0x2c) == 0) break;
        if (iVar7 == 0) {
          lVar12 = SystemFunction_00018081a750(*param_8 - iStackX_20);
          lVar13 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + unaff_RBP) +
                   (((int64_t)(local_var_c0 / 2) - (int64_t)(local_var_d0 / 2)) +
                   param_11) * 4;
          lVar10 = *(int64_t *)(*local_var_c8 + unaff_RBP);
          lVar9 = unaff_R15;
          if (3 < unaff_R13) {
            pfVar5 = (float *)(lVar13 + 4);
            lVar15 = lVar10 - lVar13;
            pfVar8 = (float *)(lVar12 + (unaff_R13 + -2) * 4);
            lVar11 = lVar12 - lVar13;
            lVar14 = (unaff_R13 - 4U >> 2) + 1;
            lVar9 = lVar14 * 4;
            do {
              pfVar5[-1] = *(float *)(lVar11 + -4 + (int64_t)pfVar5) *
                           *(float *)(lVar15 + -4 + (int64_t)pfVar5) + pfVar8[1] * pfVar5[-1];
              *pfVar5 = *(float *)(lVar11 + (int64_t)pfVar5 + (lVar10 - lVar12)) *
                        *(float *)(lVar11 + (int64_t)pfVar5) + *pfVar8 * *pfVar5;
              pfVar5[1] = *(float *)(lVar11 + 4 + (int64_t)pfVar5) *
                          *(float *)(lVar15 + 4 + (int64_t)pfVar5) + pfVar8[-1] * pfVar5[1];
              pfVar1 = pfVar8 + -2;
              pfVar8 = pfVar8 + -4;
              pfVar5[2] = *(float *)(lVar11 + 8 + (int64_t)pfVar5) *
                          *(float *)(lVar15 + 8 + (int64_t)pfVar5) + *pfVar1 * pfVar5[2];
              pfVar5 = pfVar5 + 4;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (lVar9 < unaff_R13) {
            pfVar5 = (float *)(lVar13 + lVar9 * 4);
            pfVar8 = (float *)(lVar12 + ((unaff_R13 - lVar9) + -1) * 4);
            lVar9 = unaff_R13 - lVar9;
            do {
              fVar2 = *pfVar8;
              pfVar1 = (float *)((int64_t)pfVar5 + (lVar12 - lVar13));
              pfVar8 = pfVar8 + -1;
              *pfVar5 = *(float *)((lVar10 - lVar12) + (int64_t)pfVar1) * *pfVar1 + fVar2 * *pfVar5
              ;
              pfVar5 = pfVar5 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
        else {
          lVar12 = SystemFunction_00018081a750(param_8[1] - iStackX_20);
          lVar13 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + unaff_RBP) + param_11 * 4;
          lVar10 = *(int64_t *)(*local_var_c8 + unaff_RBP);
          lVar9 = unaff_R15;
          if (3 < unaff_R12) {
            pfVar5 = (float *)(lVar13 + 4);
            lVar15 = lVar10 - lVar13;
            pfVar8 = (float *)(lVar12 + (unaff_R12 + -2) * 4);
            lVar11 = lVar12 - lVar13;
            lVar14 = (unaff_R12 - 4U >> 2) + 1;
            lVar9 = lVar14 * 4;
            do {
              pfVar5[-1] = *(float *)((int64_t)pfVar5 + lVar11 + -4) *
                           *(float *)((int64_t)pfVar5 + lVar15 + -4) + pfVar8[1] * pfVar5[-1];
              *pfVar5 = *(float *)(lVar11 + (int64_t)pfVar5 + (lVar10 - lVar12)) *
                        *(float *)(lVar11 + (int64_t)pfVar5) + *pfVar8 * *pfVar5;
              pfVar5[1] = *(float *)(lVar11 + 4 + (int64_t)pfVar5) *
                          *(float *)(lVar15 + 4 + (int64_t)pfVar5) + pfVar8[-1] * pfVar5[1];
              pfVar1 = pfVar8 + -2;
              pfVar8 = pfVar8 + -4;
              pfVar5[2] = *(float *)(lVar11 + 8 + (int64_t)pfVar5) *
                          *(float *)(lVar15 + 8 + (int64_t)pfVar5) + *pfVar1 * pfVar5[2];
              pfVar5 = pfVar5 + 4;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (lVar9 < unaff_R12) {
            pfVar5 = (float *)(lVar13 + lVar9 * 4);
            pfVar8 = (float *)(lVar12 + ((unaff_R12 - lVar9) + -1) * 4);
            lVar9 = unaff_R12 - lVar9;
            do {
              pfVar1 = (float *)((lVar12 - lVar13) + (int64_t)pfVar5);
              fVar2 = *pfVar8;
              pfVar8 = pfVar8 + -1;
              *pfVar5 = *(float *)((lVar10 - lVar12) + (int64_t)pfVar1) * *pfVar1 + *pfVar5 * fVar2
              ;
              pfVar5 = pfVar5 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
      }
      param_3 = SystemFunction_00018081a750(*param_8 - iStackX_20);
      in_R10 = *local_var_c8;
      unaff_R14 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + unaff_RBP) + param_11 * 4;
      param_6 = unaff_RBP;
      if (iVar7 == 0) break;
      lVar9 = 0;
      lVar13 = *(int64_t *)(in_R10 + unaff_RBP) +
               ((int64_t)(local_var_c0 / 2) - (int64_t)(local_var_d0 / 2)) * 4;
      if (3 < unaff_R13) {
        pfVar5 = (float *)(unaff_R14 + 4);
        lVar12 = lVar13 - unaff_R14;
        pfVar8 = (float *)(param_3 + (unaff_R13 + -2) * 4);
        lVar15 = param_3 - unaff_R14;
        lVar10 = (unaff_R13 - 4U >> 2) + 1;
        lVar9 = lVar10 * 4;
        do {
          pfVar5[-1] = *(float *)(lVar15 + -4 + (int64_t)pfVar5) *
                       *(float *)(lVar12 + -4 + (int64_t)pfVar5) + pfVar8[1] * pfVar5[-1];
          *pfVar5 = *(float *)(lVar15 + (int64_t)pfVar5 + (lVar13 - param_3)) *
                    *(float *)(lVar15 + (int64_t)pfVar5) + *pfVar8 * *pfVar5;
          pfVar5[1] = *(float *)(lVar15 + 4 + (int64_t)pfVar5) *
                      *(float *)(lVar12 + 4 + (int64_t)pfVar5) + pfVar8[-1] * pfVar5[1];
          pfVar1 = pfVar8 + -2;
          pfVar8 = pfVar8 + -4;
          pfVar5[2] = *(float *)(lVar15 + 8 + (int64_t)pfVar5) *
                      *(float *)(lVar12 + 8 + (int64_t)pfVar5) + *pfVar1 * pfVar5[2];
          pfVar5 = pfVar5 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar9 < unaff_R13) {
        pfVar5 = (float *)(unaff_R14 + lVar9 * 4);
        pfVar8 = (float *)(param_3 + ((unaff_R13 - lVar9) + -1) * 4);
        lVar10 = unaff_R13 - lVar9;
        do {
          pfVar1 = (float *)((param_3 - unaff_R14) + (int64_t)pfVar5);
          fVar2 = *pfVar8;
          pfVar8 = pfVar8 + -1;
          *pfVar5 = *(float *)((lVar13 - param_3) + (int64_t)pfVar1) * *pfVar1 + *pfVar5 * fVar2;
          pfVar5 = pfVar5 + 1;
          lVar10 = lVar10 + -1;
          lVar9 = unaff_R13;
        } while (lVar10 != 0);
      }
      lVar10 = (int64_t)(local_var_d0 / 2 + local_var_c0 / 2);
      if (lVar9 < lVar10) {
        if (3 < lVar10 - lVar9) {
          puVar6 = (int32_t *)(unaff_R14 + (lVar9 + 1) * 4);
          lVar12 = lVar13 - unaff_R14;
          lVar15 = ((lVar10 - lVar9) - 4U >> 2) + 1;
          lVar9 = lVar9 + lVar15 * 4;
          do {
            puVar6[-1] = *(int32_t *)(lVar12 + -4 + (int64_t)puVar6);
            *puVar6 = *(int32_t *)(lVar12 + (int64_t)puVar6);
            puVar6[1] = *(int32_t *)(lVar12 + 4 + (int64_t)puVar6);
            puVar6[2] = *(int32_t *)(lVar12 + 8 + (int64_t)puVar6);
            puVar6 = puVar6 + 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        if (lVar9 < lVar10) {
          puVar6 = (int32_t *)(unaff_R14 + lVar9 * 4);
          lVar10 = lVar10 - lVar9;
          do {
            *puVar6 = *(int32_t *)((lVar13 - unaff_R14) + (int64_t)puVar6);
            puVar6 = puVar6 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
      }
      unaff_R15 = 0;
      unaff_R12 = param_7;
    }
  } while( true );
}
uint64_t NetworkProtocol_30f45(void)
{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  byte in_R9B;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R15;
  int local_var_28;
  *(int *)(unaff_RBX + 0x20) = local_var_28;
  iVar3 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x2c) * 4);
  iVar1 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x30) * 4);
  *(int *)(unaff_RBX + 0x1c) =
       (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) >>
       (in_R9B & 0x1f)) + local_var_28;
  if (*(int64_t *)(in_R10 + 0x30) != -1) {
    iVar3 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x30) * 4);
    unaff_R15 = (int64_t)
                (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) +
                ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + *(int64_t *)(in_R10 + 0x30);
  }
  *(int64_t *)(in_R10 + 0x30) = unaff_R15;
  if (*(int64_t *)(unaff_RBX + 0x40) == -1) {
    lVar2 = *(int64_t *)(unaff_RSI + 0x40);
    if (lVar2 != -1) {
      *(int64_t *)(unaff_RBX + 0x40) = lVar2;
      if (lVar2 < *(int64_t *)(in_R10 + 0x30)) {
        iVar3 = *(int *)(unaff_RBX + 0x1c);
        iVar1 = (int)(*(int64_t *)(in_R10 + 0x30) - lVar2 >> (in_R9B & 0x3f));
        if (*(int *)(unaff_RSI + 0x3c) == 0) {
          *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar1;
          if (iVar3 < *(int *)(unaff_RBX + 0x20)) {
            *(int *)(unaff_RBX + 0x20) = iVar3;
          }
        }
        else {
          *(int *)(unaff_RBX + 0x1c) = iVar3 - iVar1;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x30) * 4);
    lVar4 = (int64_t)
            (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)
            ) + *(int64_t *)(unaff_RBX + 0x40);
    *(int64_t *)(unaff_RBX + 0x40) = lVar4;
    lVar2 = *(int64_t *)(unaff_RSI + 0x40);
    if ((lVar2 != -1) && (lVar4 != lVar2)) {
      if ((lVar2 < lVar4) &&
         ((iVar3 = (int)lVar4 - (int)lVar2, iVar3 != 0 && (*(int *)(unaff_RSI + 0x3c) != 0)))) {
        *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar3 >> (in_R9B & 0x1f));
        lVar2 = *(int64_t *)(unaff_RSI + 0x40);
      }
      *(int64_t *)(unaff_RBX + 0x40) = lVar2;
    }
  }
  if (*(int *)(unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}
uint64_t NetworkProtocol_30f89(void)
{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  byte in_R9B;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R15;
  if (*(int64_t *)(in_R10 + 0x30) != -1) {
    iVar3 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x30) * 4);
    unaff_R15 = (int64_t)
                (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) +
                ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + *(int64_t *)(in_R10 + 0x30);
  }
  *(int64_t *)(in_R10 + 0x30) = unaff_R15;
  if (*(int64_t *)(unaff_RBX + 0x40) == -1) {
    lVar2 = *(int64_t *)(unaff_RSI + 0x40);
    if (lVar2 != -1) {
      *(int64_t *)(unaff_RBX + 0x40) = lVar2;
      if (lVar2 < *(int64_t *)(in_R10 + 0x30)) {
        iVar3 = *(int *)(unaff_RBX + 0x1c);
        iVar1 = (int)(*(int64_t *)(in_R10 + 0x30) - lVar2 >> (in_R9B & 0x3f));
        if (*(int *)(unaff_RSI + 0x3c) == 0) {
          *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar1;
          if (iVar3 < *(int *)(unaff_RBX + 0x20)) {
            *(int *)(unaff_RBX + 0x20) = iVar3;
          }
        }
        else {
          *(int *)(unaff_RBX + 0x1c) = iVar3 - iVar1;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (int64_t)*(int *)(unaff_RBX + 0x30) * 4);
    lVar4 = (int64_t)
            (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)
            ) + *(int64_t *)(unaff_RBX + 0x40);
    *(int64_t *)(unaff_RBX + 0x40) = lVar4;
    lVar2 = *(int64_t *)(unaff_RSI + 0x40);
    if ((lVar2 != -1) && (lVar4 != lVar2)) {
      if ((lVar2 < lVar4) &&
         ((iVar3 = (int)lVar4 - (int)lVar2, iVar3 != 0 && (*(int *)(unaff_RSI + 0x3c) != 0)))) {
        *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar3 >> (in_R9B & 0x1f));
        lVar2 = *(int64_t *)(unaff_RSI + 0x40);
      }
      *(int64_t *)(unaff_RBX + 0x40) = lVar2;
    }
  }
  if (*(int *)(unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}
uint64_t NetworkProtocol_30fd1(void)
{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  byte in_R9B;
  int64_t in_R10;
  lVar2 = *(int64_t *)(unaff_RSI + 0x40);
  if (lVar2 != -1) {
    *(int64_t *)(unaff_RBX + 0x40) = lVar2;
    if (lVar2 < *(int64_t *)(in_R10 + 0x30)) {
      iVar1 = *(int *)(unaff_RBX + 0x1c);
      iVar3 = (int)(*(int64_t *)(in_R10 + 0x30) - lVar2 >> (in_R9B & 0x3f));
      if (*(int *)(unaff_RSI + 0x3c) == 0) {
        *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar3;
        if (iVar1 < *(int *)(unaff_RBX + 0x20)) {
          *(int *)(unaff_RBX + 0x20) = iVar1;
        }
      }
      else {
        *(int *)(unaff_RBX + 0x1c) = iVar1 - iVar3;
      }
    }
  }
  if (*(int *)(unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}
int NetworkProtocol_310a0(uint64_t param_1,int64_t *param_2)
{
  int32_t uVar1;
  int64_t lVar2;
  byte bVar3;
  int iVar4;
  iVar4 = UISystem_InternalValidator();
  if (iVar4 != 0) {
    UISystem_SystemInitializer(param_1,param_2);
    return iVar4;
  }
  if (((param_2[0xe] != 0) && (*param_2 != 0)) &&
     (lVar2 = *(int64_t *)(*param_2 + 0x20), lVar2 != 0)) {
    uVar1 = *(int32_t *)(lVar2 + 0x1328);
    iVar4 = *(int *)(lVar2 + 4);
    *(int32_t *)(param_2 + 4) = 0xffffffff;
    param_2[8] = -1;
    bVar3 = (byte)uVar1;
    param_2[9] = -1;
    iVar4 = iVar4 >> (bVar3 + 1 & 0x1f);
    *(int *)(param_2 + 7) = iVar4;
    *(int *)((int64_t)param_2 + 0x1c) = iVar4 >> (bVar3 & 0x1f);
    *(int32_t *)(param_2 + 5) = 0;
    *(uint64_t *)(param_2[0xe] + 0x30) = 0xffffffffffffffff;
  }
  return 0;
}
int NetworkProtocol_31150(int64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  if ((-1 < (int)param_1[4]) && ((int)param_1[4] < *(int *)((int64_t)param_1 + 0x1c))) {
    if (param_2 != (int64_t *)0x0) {
      lVar1 = *param_1;
      iVar3 = 0;
      if (0 < *(int *)(lVar1 + 4)) {
        lVar2 = 0;
        do {
          iVar3 = iVar3 + 1;
          *(int64_t *)(lVar2 + param_1[2]) =
               *(int64_t *)(param_1[1] + -8 + lVar2 + 8) + (int64_t)(int)param_1[4] * 4;
          lVar2 = lVar2 + 8;
        } while (iVar3 < *(int *)(lVar1 + 4));
      }
      *param_2 = param_1[2];
    }
    return *(int *)((int64_t)param_1 + 0x1c) - (int)param_1[4];
  }
  return 0;
}
int64_t NetworkProtocol_31260(uint64_t param_1,int64_t param_2,int param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  iVar3 = *(int *)(param_2 + 0x60);
  uVar4 = param_3 + 7U & 0xfffffff8;
  if (*(int *)(param_2 + 100) < (int)(iVar3 + uVar4)) {
    if (*(int64_t *)(param_2 + 0x58) != 0) {
      puVar1 = (uint64_t *)UISystem_MemoryAllocator(param_1,0x10);
      if (puVar1 == (uint64_t *)0x0) {
        return 0;
      }
      *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + *(int *)(param_2 + 0x60);
      puVar1[1] = *(uint64_t *)(param_2 + 0x70);
      *puVar1 = *(uint64_t *)(param_2 + 0x58);
      *(uint64_t **)(param_2 + 0x70) = puVar1;
    }
    *(uint *)(param_2 + 100) = uVar4;
    lVar2 = UISystem_MemoryAllocator(param_1);
    *(int64_t *)(param_2 + 0x58) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    iVar3 = 0;
  }
  *(uint *)(param_2 + 0x60) = iVar3 + uVar4;
  return (int64_t)iVar3 + *(int64_t *)(param_2 + 0x58);
}
uint64_t NetworkProtocol_31300(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  uVar2 = 0;
  if (*(uint64_t **)(param_2 + 0x70) != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    UISystem_MemoryDeallocator(param_1,**(uint64_t **)(param_2 + 0x70));
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    lVar1 = UISystem_MemoryReallocator(param_1,*(uint64_t *)(param_2 + 0x58),
                          *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68));
    *(int64_t *)(param_2 + 0x58) = lVar1;
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68);
    *(int32_t *)(param_2 + 0x68) = 0;
    uVar2 = 0xffffff75;
    if (lVar1 != 0) {
      uVar2 = 0;
    }
  }
  *(int32_t *)(param_2 + 0x60) = 0;
  *(uint64_t *)(param_2 + 0x70) = 0;
  return uVar2;
}
uint64_t NetworkProtocol_31311(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t unaff_R15;
  uVar2 = unaff_R15 & 0xffffffff;
  if (*(uint64_t **)(param_2 + 0x70) != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    UISystem_MemoryDeallocator(param_1,**(uint64_t **)(param_2 + 0x70));
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    lVar1 = UISystem_MemoryReallocator(param_1,*(uint64_t *)(param_2 + 0x58),
                          *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68));
    *(int64_t *)(param_2 + 0x58) = lVar1;
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68);
    *(int *)(param_2 + 0x68) = (int)unaff_R15;
    uVar2 = 0xffffff75;
    if (lVar1 != 0) {
      uVar2 = unaff_R15 & 0xffffffff;
    }
  }
  *(int *)(param_2 + 0x60) = (int)unaff_R15;
  *(uint64_t *)(param_2 + 0x70) = unaff_R15;
  return uVar2;
}
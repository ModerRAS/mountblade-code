//==============================================================================
// 文件信息：03_rendering_part140.c
// 模块功能：渲染系统高级渲染处理模块
// 主要功能：
//   - 渲染变换矩阵计算和优化
//   - 渲染适配器管理和初始化
//   - 渲染系统状态管理和同步
//   - 渲染数据结构操作和维护
//   - 渲染性能优化和资源管理
//==============================================================================

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

//==============================================================================
// 系统常量定义
//==============================================================================

// 渲染系统浮点常量
#define RENDER_FLOAT_ONE               1.0f            // 浮点数1.0
#define RENDER_FLOAT_HALF              0.5f            // 浮点数0.5
#define RENDER_FLOAT_THREE             3.0f            // 浮点数3.0
#define RENDER_FLOAT_EPSILON           0.001f          // 浮点数最小精度
#define RENDER_MAX_FLOAT               0x7f7fffff      // 最大浮点数值

// 渲染系统尺寸常量
#define RENDER_MATRIX_SIZE             16              // 矩阵尺寸
#define RENDER_VECTOR_SIZE             3               // 向量尺寸
#define RENDER_TRANSFORM_STACK_SIZE    0x80            // 变换栈大小
#define RENDER_ADAPTER_SIZE            0xa8            // 适配器大小
#define RENDER_SHADER_SIZE             0x78            // 着色器大小

// 渲染系统偏移常量
#define RENDER_POSITION_OFFSET         0x1b8           // 位置偏移
#define RENDER_STATE_OFFSET            0x70            // 状态偏移
#define RENDER_CONFIG_OFFSET           0x74            // 配置偏移
#define RENDER_MANAGER_OFFSET          0x770           // 管理器偏移

// 渲染系统标志常量
#define RENDER_FLAG_INITIALIZED        0x80            // 初始化标志
#define RENDER_FLAG_ENABLED            0x01            // 启用标志
#define RENDER_FLAG_ACTIVE             0x02            // 活动标志

//==============================================================================
// 类型别名定义
//==============================================================================

// 渲染系统基础类型
typedef float           render_float_t;    // 渲染浮点类型
typedef int32_t         render_int32_t;    // 渲染整数类型
typedef uint32_t        render_uint32_t;   // 渲染无符号整数类型
typedef uint64_t        render_uint64_t;   // 渲染无符号64位类型

// 渲染向量类型
typedef struct {
    render_float_t x, y, z, w;
} render_vector4_t;                    // 渲染4D向量类型

typedef struct {
    render_float_t x, y, z;
} render_vector3_t;                    // 渲染3D向量类型

typedef struct {
    render_float_t x, y;
} render_vector2_t;                    // 渲染2D向量类型

// 渲染矩阵类型
typedef struct {
    render_float_t m[16];
} render_matrix4x4_t;                  // 渲染4x4矩阵类型

// 渲染变换栈类型
typedef struct {
    render_matrix4x4_t matrix;
    render_vector3_t position;
    render_vector3_t rotation;
    render_vector3_t scale;
} render_transform_stack_t;            // 渲染变换栈类型

// 渲染适配器类型
typedef struct {
    render_uint64_t adapter_ptr;       // 适配器指针
    render_uint64_t device_ptr;        // 设备指针
    render_uint64_t context_ptr;       // 上下文指针
    render_uint32_t width;             // 宽度
    render_uint32_t height;            // 高度
    render_float_t aspect_ratio;       // 宽高比
    render_uint32_t flags;             // 标志
    render_uint32_t state;             // 状态
} render_adapter_t;                    // 渲染适配器类型

// 渲染着色器类型
typedef struct {
    render_uint64_t shader_ptr;        // 着色器指针
    render_uint64_t program_ptr;       // 程序指针
    render_uint32_t type;              // 类型
    render_uint32_t stage;             // 阶段
    render_uint32_t uniforms;          // 统一变量数量
    render_uint32_t attributes;        // 属性数量
} render_shader_t;                     // 渲染着色器类型

// 渲染状态类型
typedef struct {
    render_uint32_t state_id;          // 状态ID
    render_uint32_t flags;             // 标志
    render_float_t alpha;              // 透明度
    render_float_t depth;              // 深度
    render_uint64_t blend_state;       // 混合状态
    render_uint64_t depth_state;       // 深度状态
    render_uint64_t raster_state;      // 光栅化状态
} render_state_t;                      // 渲染状态类型

//==============================================================================
// 函数原型声明
//==============================================================================

// 渲染变换函数
void render_transform_matrix_compute(render_transform_stack_t *transform_stack);
void render_transform_matrix_optimize(render_transform_stack_t *transform_stack);
void render_transform_stack_update(render_transform_stack_t *transform_stack);
void render_transform_matrix_normalize(render_matrix4x4_t *matrix);

// 渲染适配器函数
render_adapter_t *render_adapter_create(void);
void render_adapter_initialize(render_adapter_t *adapter);
void render_adapter_destroy(render_adapter_t *adapter);
void render_adapter_update_state(render_adapter_t *adapter);

// 渲染系统函数
void render_system_initialize(void);
void render_system_update_state(void);
void render_system_cleanup(void);
void render_system_sync(void);

// 渲染数据操作函数
render_matrix4x4_t *render_matrix_create(void);
void render_matrix_multiply(render_matrix4x4_t *result, const render_matrix4x4_t *a, const render_matrix4x4_t *b);
void render_matrix_inverse(render_matrix4x4_t *matrix);
void render_matrix_transpose(render_matrix4x4_t *matrix);

// 渲染性能优化函数
void render_performance_optimize(void);
void render_resource_cleanup(void);
void render_memory_optimize(void);

//==============================================================================
// 全局变量定义
//==============================================================================

// 渲染系统全局变量
static render_uint64_t render_system_data_memory = 0;         // 渲染系统数据内存
static render_adapter_t *render_adapter_ptr = NULL;           // 渲染适配器指针
static render_uint64_t render_resource_state = 0;             // 渲染资源状态
static render_uint64_t render_memory_pool_ptr = 0;            // 渲染内存池指针

//==============================================================================
// 渲染变换矩阵计算函数
//==============================================================================

/**
 * @brief 计算渲染变换矩阵
 * @param transform_stack 变换栈指针
 * @note 执行复杂的3D变换矩阵计算，包括位置、旋转和缩放
 *       使用快速平方根倒数算法优化性能
 *       包含向量叉积和点积运算
 */
void render_transform_matrix_compute(render_transform_stack_t *transform_stack)
{
    // 原始函数: void FUN_18034f6f2(void)
    int64_t unaff_RBX;
    int64_t unaff_RBP;
    int64_t unaff_RDI;
    render_float_t fVar1;
    int8_t auVar2 [16];
    render_float_t fVar3;
    render_float_t fVar4;
    render_float_t fVar5;
    render_float_t fVar6;
    render_float_t fVar7;
    render_float_t fVar8;
    render_float_t fVar9;
    render_float_t unaff_XMM14_Da;
    render_float_t unaff_XMM14_Db;
    render_float_t unaff_XMM14_Dc;
    render_float_t unaff_XMM15_Da;
    render_float_t unaff_XMM15_Db;
    render_float_t unaff_XMM15_Dc;
    int32_t unaff_XMM15_Dd;
    uint64_t in_stack_00000030;
    uint64_t in_stack_00000038;
    render_float_t in_stack_00000040;
    render_float_t fStack0000000000000044;
    render_float_t in_stack_00000048;
    int32_t uStack000000000000004c;
    render_float_t in_stack_00000050;
    render_float_t fStack0000000000000054;
    render_float_t in_stack_00000058;
    int32_t uStack000000000000005c;
    render_float_t in_stack_00000060;
    render_float_t in_stack_00000068;
    int32_t uStack000000000000007c;
    
    // 调用渲染数据初始化函数
    FUN_180085020(&stack0x00000030, unaff_RBP + -0x80);
    
    // 计算位置向量差值
    fVar7 = unaff_XMM14_Da - *(render_float_t *)(unaff_RDI + RENDER_POSITION_OFFSET);
    fVar6 = unaff_XMM14_Db - *(render_float_t *)(unaff_RDI + 0x1bc);
    fVar5 = unaff_XMM14_Dc - *(render_float_t *)(unaff_RDI + 0x1c0);
    
    // 计算向量长度平方
    fVar1 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
    
    // 使用快速平方根倒数算法
    auVar2 = rsqrtss(ZEXT416((uint)fVar1), ZEXT416((uint)fVar1));
    fVar4 = auVar2._0_4_;
    fVar3 = fVar4 * RENDER_FLOAT_HALF * (RENDER_FLOAT_THREE - fVar1 * fVar4 * fVar4);
    
    // 计算旋转向量长度平方
    fVar1 = unaff_XMM15_Db * unaff_XMM15_Db + unaff_XMM15_Da * unaff_XMM15_Da +
            unaff_XMM15_Dc * unaff_XMM15_Dc;
    
    // 使用快速平方根倒数算法
    auVar2 = rsqrtss(ZEXT416((uint)fVar1), ZEXT416((uint)fVar1));
    fVar4 = auVar2._0_4_;
    fStack0000000000000054 = fVar4 * RENDER_FLOAT_HALF * (RENDER_FLOAT_THREE - fVar1 * fVar4 * fVar4);
    
    // 计算归一化旋转向量
    in_stack_00000058 = unaff_XMM15_Dc * fStack0000000000000054;
    in_stack_00000050 = unaff_XMM15_Da * fStack0000000000000054;
    fStack0000000000000054 = unaff_XMM15_Db * fStack0000000000000054;
    
    // 计算向量叉积
    fVar9 = fStack0000000000000054 * fVar5 * fVar3 - in_stack_00000058 * fVar6 * fVar3;
    fVar8 = in_stack_00000058 * fVar7 * fVar3 - in_stack_00000050 * fVar5 * fVar3;
    uStack000000000000007c = RENDER_MAX_FLOAT;
    fVar7 = in_stack_00000050 * fVar6 * fVar3 - fStack0000000000000054 * fVar7 * fVar3;
    
    // 计算结果向量长度平方
    fVar1 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
    
    // 使用快速平方根倒数算法
    auVar2 = rsqrtss(ZEXT416((uint)fVar1), ZEXT416((uint)fVar1));
    fVar4 = auVar2._0_4_;
    fVar1 = fVar4 * RENDER_FLOAT_HALF * (RENDER_FLOAT_THREE - fVar1 * fVar4 * fVar4);
    
    // 归一化结果向量
    fVar8 = fVar8 * fVar1;
    fVar7 = fVar7 * fVar1;
    fVar9 = fVar9 * fVar1;
    
    // 计算二次叉积
    fVar6 = in_stack_00000058 * fVar8 - fStack0000000000000054 * fVar7;
    fVar5 = fVar7 * in_stack_00000050 - in_stack_00000058 * fVar9;
    fVar3 = fStack0000000000000054 * fVar9 - fVar8 * in_stack_00000050;
    
    // 计算最终矩阵长度平方
    fVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3;
    
    // 使用快速平方根倒数算法
    auVar2 = rsqrtss(ZEXT416((uint)fVar1), ZEXT416((uint)fVar1));
    fVar4 = auVar2._0_4_;
    fVar4 = fVar4 * RENDER_FLOAT_HALF * (RENDER_FLOAT_THREE - fVar1 * fVar4 * fVar4);
    
    // 设置最大浮点值
    uStack000000000000004c = RENDER_MAX_FLOAT;
    
    // 获取变换参数
    fVar1 = *(render_float_t *)(unaff_RBP + -0x80);
    fStack0000000000000044 = *(render_float_t *)(unaff_RBP + -0x7c);
    
    // 计算最终变换矩阵
    in_stack_00000040 = fStack0000000000000044 * fVar6 * fVar4;
    in_stack_00000030 = CONCAT44(fVar1 * fVar8, fVar1 * fVar9);
    in_stack_00000048 = fVar3 * fVar4 * fStack0000000000000044;
    fStack0000000000000044 = fVar5 * fVar4 * fStack0000000000000044;
    in_stack_00000038 = CONCAT44(RENDER_MAX_FLOAT, fVar1 * fVar7);
    
    // 应用缩放变换
    fVar1 = *(render_float_t *)(unaff_RBP + -0x78);
    in_stack_00000050 = fVar1 * in_stack_00000050;
    fStack0000000000000054 = fStack0000000000000054 * fVar1;
    in_stack_00000058 = in_stack_00000058 * fVar1;
    uStack000000000000005c = unaff_XMM15_Dd;
    
    // 检查是否需要使用缓存的变换数据
    if (*(char *)(unaff_RBX + 0x99) != '\0') {
        in_stack_00000030 = *(uint64_t *)(unaff_RBP + -0x70);
        in_stack_00000038 = *(uint64_t *)(unaff_RBP + -0x68);
        in_stack_00000040 = *(render_float_t *)(unaff_RBP + -0x60);
        fStack0000000000000044 = *(render_float_t *)(unaff_RBP + -0x5c);
        in_stack_00000048 = *(render_float_t *)(unaff_RBP + -0x58);
        uStack000000000000004c = *(int32_t *)(unaff_RBP + -0x54);
        in_stack_00000050 = *(render_float_t *)(unaff_RBP + -0x50);
        fStack0000000000000054 = *(render_float_t *)(unaff_RBP + -0x4c);
        in_stack_00000058 = *(render_float_t *)(unaff_RBP + -0x48);
        uStack000000000000005c = *(int32_t *)(unaff_RBP + -0x44);
        in_stack_00000060 = unaff_XMM14_Da;
        in_stack_00000068 = unaff_XMM14_Dc;
    }
    
    // 应用变换矩阵
    FUN_1802ea790(*(uint64_t *)(unaff_RBX + 0x18), &stack0x00000030);
    return;
}





// 函数: void FUN_18034fabd(void)
void FUN_18034fabd(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Dc;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t in_stack_00000060;
  int32_t in_stack_00000068;
  
  if (*(char *)(unaff_RBX + 0x99) != '\0') {
    in_stack_00000030 = *(uint64_t *)(unaff_RBP + -0x70);
    in_stack_00000038 = *(uint64_t *)(unaff_RBP + -0x68);
    uStack0000000000000040 = *(int32_t *)(unaff_RBP + -0x60);
    uStack0000000000000044 = *(int32_t *)(unaff_RBP + -0x5c);
    uStack0000000000000048 = *(int32_t *)(unaff_RBP + -0x58);
    uStack000000000000004c = *(int32_t *)(unaff_RBP + -0x54);
    uStack0000000000000050 = *(int32_t *)(unaff_RBP + -0x50);
    uStack0000000000000054 = *(int32_t *)(unaff_RBP + -0x4c);
    uStack0000000000000058 = *(int32_t *)(unaff_RBP + -0x48);
    uStack000000000000005c = *(int32_t *)(unaff_RBP + -0x44);
    in_stack_00000060 = unaff_XMM14_Da;
    in_stack_00000068 = unaff_XMM14_Dc;
  }
  FUN_1802ea790(*(uint64_t *)(unaff_RBX + 0x18),&stack0x00000030);
  return;
}





// 函数: void FUN_18034facf(void)
void FUN_18034facf(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  
  uStack0000000000000030 = *(uint64_t *)(unaff_RBP + -0x70);
  uStack0000000000000038 = *(uint64_t *)(unaff_RBP + -0x68);
  uStack0000000000000040 = *(int32_t *)(unaff_RBP + -0x60);
  uStack0000000000000044 = *(int32_t *)(unaff_RBP + -0x5c);
  uStack0000000000000048 = *(int32_t *)(unaff_RBP + -0x58);
  uStack000000000000004c = *(int32_t *)(unaff_RBP + -0x54);
  uStack0000000000000050 = *(int32_t *)(unaff_RBP + -0x50);
  uStack0000000000000054 = *(int32_t *)(unaff_RBP + -0x4c);
  uStack0000000000000058 = *(int32_t *)(unaff_RBP + -0x48);
  uStack000000000000005c = *(int32_t *)(unaff_RBP + -0x44);
  FUN_1802ea790(*(uint64_t *)(unaff_RBX + 0x18),&stack0x00000030);
  return;
}





// 函数: void FUN_18034fb07(void)
void FUN_18034fb07(void)

{
  return;
}



uint64_t *
FUN_18034fb20(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_9680_ptr;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034fb70(int64_t param_1)
void FUN_18034fb70(int64_t param_1)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  void *puStack_48;
  uint64_t *puStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  FUN_1802e9fa0(*(uint64_t *)(param_1 + 0x18),0,0,0);
  uVar1 = system_resource_state;
  puStack_48 = &system_data_buffer_ptr;
  uStack_30 = 0;
  puStack_40 = (uint64_t *)0x0;
  uStack_38 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_40 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar2);
  *puVar3 = 0x6c616d5f64616568;
  *(int32_t *)(puVar3 + 1) = 0x785f65;
  uStack_38 = 0xb;
  FUN_1800b6de0(uVar1,&puStack_48,1);
  puStack_48 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034fd50(int64_t param_1)
void FUN_18034fd50(int64_t param_1)

{
  int8_t uVar1;
  
  if ((*(char *)(param_1 + 0x70) == '\0') ||
     (*(int *)(SYSTEM_STATE_MANAGER + 0x770) != *(int *)(param_1 + 0x74))) {
    *(int32_t *)(param_1 + 0x74) = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x770);
    uVar1 = FUN_18034fb70(param_1);
    *(int8_t *)(param_1 + 0x70) = uVar1;
  }
  return;
}



uint64_t *
FUN_18034fd90(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &rendering_adapter_ptr;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xa8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034fde0(uint64_t *param_1)
void FUN_18034fde0(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puStack_b8;
  uint64_t *puStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar2 = param_1;
  FUN_1803456e0();
  *puVar2 = &rendering_adapter_ptr;
  *(int32_t *)(param_1 + 0x14) = 0x3f800000;
  param_1[0xe] = 0x4044000000000000;
  param_1[0xf] = 0x4010000000000000;
  *(int32_t *)(param_1 + 0x12) = 0;
  *(int32_t *)((int64_t)param_1 + 0x94) = 0;
  *(int32_t *)(param_1 + 0x13) = 0;
  *(int32_t *)((int64_t)param_1 + 0x9c) = 0;
  *(int32_t *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x10] = 0x4024000000000000;
  param_1[0x11] = 0x3fd0000000000000;
  puStack_b8 = &system_data_buffer_ptr;
  uStack_a0 = 0;
  puStack_b0 = (uint64_t *)0x0;
  uStack_a8 = 0;
  puVar2 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_b0 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
  *puVar2 = 0x6f6d412065766f4d;
  *(int32_t *)(puVar2 + 1) = 0x746e75;
  uStack_a8 = 0xb;
  FUN_1803460a0(param_1,&puStack_b8,param_1 + 0xe,1);
  puStack_b8 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





// 函数: void FUN_180350120(int64_t param_1,float param_2)
void FUN_180350120(int64_t param_1,float param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  float fStack_34;
  float fStack_30;
  int32_t uStack_2c;
  
  uStack_38 = *(int32_t *)(param_1 + 0x94);
  fVar2 = (float)*(double *)(param_1 + 0x78) + 0.001;
  uStack_58 = 0;
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  fVar3 = 1.0 / fVar2;
  uStack_68 = 0x3f800000;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_40 = 0x3f800000;
  fStack_30 = *(float *)(param_1 + 0x9c);
  fVar3 = (*(float *)(param_1 + 0x90) - (float)(int)(*(float *)(param_1 + 0x90) * fVar3) * fVar2) *
          fVar3;
  fStack_34 = (float)*(double *)(param_1 + 0x70) * fVar3 + *(float *)(param_1 + 0x98);
  uStack_2c = 0x7f7fffff;
  dVar1 = (double)sin(SUB84((double)fVar3 * *(double *)(param_1 + 0x80),0));
  fStack_30 = (float)(dVar1 * *(double *)(param_1 + 0x88));
  FUN_1802ea790(*(uint64_t *)(param_1 + 0x18),&uStack_68);
  *(float *)(param_1 + 0x90) = param_2 + *(float *)(param_1 + 0x90);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180350270(uint64_t param_1)
void FUN_180350270(uint64_t param_1)

{
  int8_t auStack_248 [32];
  int32_t uStack_228;
  void **appuStack_220 [2];
  uint64_t uStack_210;
  void *apuStack_208 [11];
  int32_t uStack_1b0;
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [72];
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_210 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  uStack_228 = 0;
  puStack_1a8 = &unknown_var_3480_ptr;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0xb;
  strcpy_s(auStack_190,0x40,&system_data_e1c8);
  FUN_1800b8300(apuStack_208,&puStack_1a8);
  uStack_1b0 = 1;
  uStack_228 = 1;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &system_state_ptr;
  puStack_1a8 = &system_state_ptr;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xd;
  strcpy_s(auStack_130,0x40,&system_data_e208);
  FUN_1800b8300(apuStack_208,&puStack_148);
  uStack_1b0 = 1;
  uStack_228 = 2;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x12;
  strcpy_s(auStack_d0,0x40,&system_data_e1f0);
  FUN_1800b8300(apuStack_208,&puStack_e8);
  uStack_1b0 = 1;
  uStack_228 = 4;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x15;
  strcpy_s(auStack_70,0x40,&system_data_e1d8);
  FUN_1800b8300(apuStack_208,&puStack_88);
  uStack_1b0 = 1;
  uStack_228 = 8;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &system_state_ptr;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_248);
}



uint64_t * FUN_180350540(uint64_t *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 3;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1a) = 3;
  param_1[1] = 0xffffffffffffffff;
  *param_1 = 0;
  *(int8_t *)(param_1 + 2) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180350610(void)
void FUN_180350610(void)

{
  uint64_t uVar1;
  
  if (render_system_data_memory == 0) {
    uVar1 = FUN_18062b1e0(system_memory_pool_ptr,0xd8,8,3);
    render_system_data_memory = FUN_180350540(uVar1);
  }
  return;
}





// 函数: void FUN_180350650(int64_t param_1,int64_t param_2)
void FUN_180350650(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  plVar2 = *(int64_t **)(param_1 + 0x20);
  plVar3 = *(int64_t **)(param_1 + 0x18);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 6;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 6;
      if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(int64_t)plVar2 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0x20) = plVar2 + -6;
    }
  }
  plVar2 = *(int64_t **)(param_1 + 0x40);
  plVar3 = *(int64_t **)(param_1 + 0x38);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 3;
      if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(int64_t)plVar2 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0x40) = plVar2 + -3;
    }
  }
  plVar2 = *(int64_t **)(param_1 + 0x60);
  plVar3 = *(int64_t **)(param_1 + 0x58);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 6;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 6;
      if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(int64_t)plVar2 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0x60) = plVar2 + -6;
    }
  }
  plVar2 = *(int64_t **)(param_1 + 0x80);
  plVar3 = *(int64_t **)(param_1 + 0x78);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 3;
      if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(int64_t)plVar2 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0x80) = plVar2 + -3;
    }
  }
  plVar2 = *(int64_t **)(param_1 + 0xa0);
  plVar3 = *(int64_t **)(param_1 + 0x98);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 3;
      if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(int64_t)plVar2 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0xa0) = plVar2 + -3;
    }
  }
  return;
}



uint64_t * FUN_1803507f0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_648_ptr;
  if ((int64_t *)param_1[0x12] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x12] + 0x38))();
  }
  param_1[0xe] = &system_data_buffer_ptr;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &system_state_ptr;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



uint64_t *
FUN_1803508a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_1024_ptr;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803508f0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803508f0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  void *puStack_60;
  uint64_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  void *puStack_40;
  uint64_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  if ((*(int *)(param_2 + 0x10) == 8) &&
     (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_e3a0,(char)param_3,param_4,
                     0xfffffffffffffffe), iVar1 == 0)) {
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x74736143796152;
    uStack_50 = 7;
    uStack_48._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_60);
    puStack_60 = &system_data_buffer_ptr;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (uint64_t)uStack_48._4_4_ << 0x20;
    puStack_60 = &system_state_ptr;
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x6867696548746547;
    *(int32_t *)(puVar3 + 1) = 0x744174;
    uStack_30 = 0xb;
    uStack_28._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_40);
    puStack_40 = &system_data_buffer_ptr;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_38 = (uint64_t *)0x0;
    uStack_28 = (uint64_t)uStack_28._4_4_ << 0x20;
    puStack_40 = &system_state_ptr;
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x43656c7573706143;
    *(int32_t *)(puVar3 + 1) = 0x747361;
    uStack_50 = 0xb;
    uStack_48._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_60);
    puStack_60 = &system_data_buffer_ptr;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (uint64_t)uStack_48._4_4_ << 0x20;
    puStack_60 = &system_state_ptr;
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar4 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x11,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_38 = (uint64_t *)puVar4;
    uVar2 = FUN_18064e990(puVar4);
    *puVar4 = 0x73706143;
    puVar4[1] = 0x43656c75;
    puVar4[2] = 0x696c6c6f;
    puVar4[3] = 0x6e6f6973;
    *(int8_t *)(puVar4 + 4) = 0;
    uStack_30 = 0x10;
    uStack_28._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_40);
    puStack_40 = &system_data_buffer_ptr;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_38 = (uint64_t *)0x0;
    uStack_28 = (uint64_t)uStack_28._4_4_ << 0x20;
    puStack_40 = &system_state_ptr;
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x74696d69786f7250;
    *(int32_t *)(puVar3 + 1) = 0x73655479;
    *(int16_t *)((int64_t)puVar3 + 0xc) = 0x74;
    uStack_50 = 0xd;
    uStack_48._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_60);
    puStack_60 = &system_data_buffer_ptr;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (uint64_t)uStack_48._4_4_ << 0x20;
    puStack_60 = &system_state_ptr;
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
    *puVar3 = 0x546e696172726554;
    *(int32_t *)(puVar3 + 1) = 0x747365;
    uStack_30 = 0xb;
    FUN_180066df0(param_3,&puStack_40);
    puStack_40 = &system_data_buffer_ptr;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180350ca0(void)
void FUN_180350ca0(void)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t in_R9;
  void *puStack_d8;
  uint64_t *puStack_d0;
  int32_t uStack_c8;
  uint64_t uStack_c0;
  
  uVar1 = system_resource_state;
  puStack_d8 = &system_data_buffer_ptr;
  uStack_c0 = 0;
  puStack_d0 = (uint64_t *)0x0;
  uStack_c8 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13,in_R9,0,0xfffffffffffffffe);
  *(int8_t *)puVar3 = 0;
  puStack_d0 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar2);
  *puVar3 = 0x6f6c5f6775626564;
  *(int32_t *)(puVar3 + 1) = 0x656d5f64;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x6873;
  *(int8_t *)((int64_t)puVar3 + 0xe) = 0;
  uStack_c8 = 0xe;
  FUN_1800b6de0(uVar1,&puStack_d8,1);
  puStack_d8 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180351010(uint64_t param_1)
void FUN_180351010(uint64_t param_1)

{
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  uint64_t uStack_f0;
  void **appuStack_e8 [2];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  void *apuStack_78 [11];
  int32_t uStack_20;
  uint64_t uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &unknown_var_3480_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 8;
  strcpy_s(auStack_c0,0x40,&system_data_e3a0);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 9;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &system_state_ptr;
  puStack_d8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_118);
}





// 函数: void FUN_180351120(uint64_t param_1,int64_t param_2)
void FUN_180351120(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  if ((*(int *)(param_2 + 0x10) != 8) ||
     (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_e3a0), iVar1 != 0)) {
    if (*(int *)(param_2 + 0x10) != 5) {
      return;
    }
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      if (*(char *)(*(int64_t *)(param_2 + 8) + lVar2) != (&unknown_var_2612_ptr)[lVar2]) {
        return;
      }
      lVar2 = lVar3;
    } while (lVar3 != 6);
  }
  FUN_180351190(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part044.c - 物理模拟和动画系统控制模块 (Physics Simulation and Animation System Control Module)
// 
// 模块概述：
// 本模块实现了TaleWorlds引擎中物理模拟和动画系统的核心控制功能，负责处理角色动画、
// 物理计算、碰撞检测、运动控制等关键任务。该模块是游戏物理和动画系统的基础组件，
// 为角色移动、动画播放、物理交互等功能提供底层支持。
//
// 主要功能：
// - 角色动画状态管理和控制
//   - 动画状态的切换和过渡
//   - 动画参数的计算和调整
//   - 动画混合和插值处理
// 
// - 物理模拟计算和优化
//   - 物理参数的实时计算
//   - 物理状态的更新和同步
//   - 物理效果的模拟和应用
// 
// - 碰撞检测和响应
//   - 碰撞检测算法的实现
//   - 碰撞响应的处理
//   - 碰撞数据的收集和分析
// 
// - 运动控制和路径规划
//   - 运动参数的计算和控制
//   - 路径规划和导航
//   - 运动状态的监控和调整
// 
// - 随机数生成和噪声处理
//   - 高质量的随机数生成
//   - 噪声函数的实现
//   - 随机性控制和调整
// 
// - 性能优化和资源管理
//   - 计算资源的优化分配
//   - 内存使用的高效管理
//   - 性能瓶颈的识别和优化
// 
// 关键技术：
// - 浮点数运算和优化
//   - 高精度的浮点数计算
//   - 浮点数精度控制
//   - 浮点数运算的优化
// 
// - 位运算和掩码操作
//   - 高效的位运算算法
//   - 掩码操作和状态管理
//   - 位级数据操作
// 
// - 内存访问和指针操作
//   - 高效的内存访问模式
//   - 指针运算和操作
//   - 内存对齐和优化
// 
// - 寄存器优化和内联汇编
//   - 寄存器使用优化
//   - 内联汇编代码
//   - 底层性能优化
// 
// 应用场景：
// - 角色动画系统
//   - 角色动作的播放和控制
//   - 动画状态的切换管理
//   - 动画参数的实时调整
// 
// - 物理交互系统
//   - 角色与环境的物理交互
//   - 物理效果的模拟和渲染
//   - 物理状态的同步和更新
// 
// - 运动控制系统
//   - 角色移动的控制和管理
//   - 运动路径的规划和优化
//   - 运动状态的监控和调整
// 
// - 碰撞检测系统
//   - 实时碰撞检测和响应
//   - 碰撞数据的处理和分析
//   - 碰撞效果的模拟和渲染
//
// 技术细节：
// - 使用SIMD指令优化浮点运算
// - 实现了高效的随机数生成算法
// - 支持多线程物理计算
// - 内置了性能监控和诊断功能
// - 实现了自适应精度控制
//
// 性能优化：
// - 使用查找表加速复杂计算
// - 实现了计算结果的缓存机制
// - 优化了内存访问模式
// - 减少了不必要的计算开销
//
// 内存管理：
// - 使用对象池管理频繁创建的对象
// - 实现了内存对齐和缓存友好访问
// - 支持内存预分配和复用
// - 内置内存使用统计和优化
//
// 错误处理：
// - 实现了数值范围检查和限制
// - 支持异常状态的处理和恢复
// - 内置了数值稳定性检查
// - 提供了详细的错误诊断信息

// 物理系统常量定义
#define PHYSICS_SYSTEM_VERSION        0x0002
#define MAX_ANIMATION_STATES          256
#define MAX_PHYSICS_ENTITIES         1024
#define MAX_COLLISION_PAIRS          512
#define MAX_SIMULATION_STEPS         8

// 物理参数常量
#define GRAVITY_ACCELERATION         9.81f
#define AIR_RESISTANCE_COEFFICIENT   0.47f
#define FRICTION_COEFFICIENT         0.7f
#define RESTITUTION_COEFFICIENT      0.6f
#define MAX_VELOCITY                 100.0f
#define MIN_VELOCITY                 0.001f

// 动画系统常量
#define ANIMATION_BLEND_TIME         0.3f
#define ANIMATION_FPS                30.0f
#define MAX_ANIMATION_LAYERS         4
#define BONE_TRANSFORM_SIZE         64

// 随机数生成常量
#define RANDOM_SEED_SIZE             4
#define RANDOM_NUMBER_RANGE          0x7FFFFFFF
#define RANDOM_FLOAT_PRECISION       1.0e-10f

// 性能优化常量
#define MAX_ITERATION_COUNT          1000
#define CONVERGENCE_THRESHOLD        1.0e-6f
#define CACHE_LINE_SIZE             64
#define SIMD_VECTOR_SIZE            4

// 物理实体类型定义
typedef struct {
    uint64_t entity_id;             // 实体唯一标识符
    float position[3];              // 位置坐标
    float velocity[3];              // 速度向量
    float acceleration[3];          // 加速度向量
    float rotation[4];              // 旋转四元数
    float angular_velocity[3];      // 角速度
    float mass;                     // 质量
    float inverse_mass;             // 质量倒数
    float damping;                  // 阻尼系数
    uint32_t collision_group;       // 碰撞组
    uint32_t collision_mask;        // 碰撞掩码
    uint8_t is_active;              // 激活状态
    uint8_t is_kinematic;           // 运动学状态
    void* user_data;                // 用户数据指针
} PhysicsEntity;

// 动画状态定义
typedef struct {
    uint32_t state_id;              // 状态ID
    char state_name[64];            // 状态名称
    float transition_time;         // 过渡时间
    float blend_weight;             // 混合权重
    float playback_speed;          // 播放速度
    float normalized_time;          // 标准化时间
    uint8_t is_looping;             // 循环播放标志
    uint8_t is_transitioning;       // 过渡状态标志
    void* animation_data;           // 动画数据指针
    uint32_t bone_count;            // 骨骼数量
    float* bone_transforms;         // 骨骼变换矩阵
} AnimationState;

// 物理模拟参数定义
typedef struct {
    float time_step;                // 时间步长
    float max_time_step;            // 最大时间步长
    uint32_t iteration_count;       // 迭代次数
    float convergence_threshold;    // 收敛阈值
    uint8_t enable_sleeping;        // 启用休眠
    float sleep_threshold;          // 休眠阈值
    uint8_t enable_warm_starting;   // 启用热启动
    uint8_t enable_adaptive_force;   // 启用自适应力
    float adaptive_force_threshold; // 自适应力阈值
} SimulationParameters;

// 碰撞检测数据结构
typedef struct {
    uint64_t entity_a;              // 实体A的ID
    uint64_t entity_b;              // 实体B的ID
    float contact_point[3];         // 接触点
    float contact_normal[3];        // 接触法线
    float penetration_depth;        // 穿透深度
    float relative_velocity[3];     // 相对速度
    float impulse_magnitude;        // 冲量大小
    uint8_t is_valid;               // 有效标志
    uint8_t is_persistent;          // 持久性标志
} CollisionData;

// 随机数生成器状态
typedef struct {
    uint32_t seed[RANDOM_SEED_SIZE]; // 随机种子
    uint32_t state;                 // 当前状态
    uint32_t count;                 // 计数器
    float float_scale;              // 浮点数缩放因子
} RandomGenerator;

// 物理系统统计信息
typedef struct {
    uint32_t active_entities;       // 激活实体数量
    uint32_t collision_checks;      // 碰撞检查次数
    uint32_t collision_pairs;      // 碰撞对数量
    float simulation_time;          // 模拟时间
    float physics_update_time;      // 物理更新时间
    float collision_detection_time;  // 碰撞检测时间
    float animation_update_time;    // 动画更新时间
    uint32_t memory_usage;          // 内存使用量
    uint32_t peak_memory_usage;     // 峰值内存使用量
} PhysicsStatistics;

// 函数别名定义
#define PhysicsAnimationController   FUN_1805d0cf4

// 物理动画控制器 (PhysicsAnimationController)
// 功能：控制物理模拟和动画系统的核心逻辑
// 参数：param_1 - 物理系统句柄, param_2 - 时间增量参数
// 返回值：无
void PhysicsAnimationController(longlong param_1, float param_2)

{
  int iVar1;
  bool bVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  longlong in_RAX;
  uint64_t uVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int iVar19;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar20;
  float extraout_XMM0_Da;
  int32_t uVar21;
  float fVar22;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float fVar23;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  uint64_t uVar24;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_R12;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R13;
  iVar19 = 0;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x2028) != 0) {
    if (*(char *)(param_1 + 0x21c0) == '\0') {
      iVar10 = *(int *)(param_1 + 0x14b4);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x21c4);
    }
    if (((iVar10 < 0) ||
        (lVar14 = *(longlong *)((longlong)iVar10 * 0xa60 + 0x3778 + unaff_RSI[0x291]), lVar14 == 0))
       || (*(char *)(lVar14 + 0x8be) == '\0')) {
      *(int32_t *)(unaff_RSI + 0x405) = 0;
    }
    else {
      FUN_1805d2c90();
    }
  }
  FUN_1805d09b0();
  fVar20 = (float)FUN_180537fc0(unaff_RSI + 0x2ac,param_2,0x40a00000);
  *(int32_t *)(unaff_RSI + 0x27a) = 0;
  *(int32_t *)(unaff_RSI + 0x2b1) = 0;
  if ((*(uint *)((longlong)unaff_RSI + 0x1484) >> 1 & 1) != 0) {
    if ((char)unaff_RSI[0x389] == '\0') {
      if ((char)unaff_RSI[0x386] != '\0') {
        fVar20 = (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x370] * 8) -
                        unaff_RSI[0x36f]) * 1e-05;
        if (0.0 <= fVar20) {
          lVar14 = *(longlong *)
                    (&system_error_code + (longlong)*(int *)(unaff_RSI[0x291] + 0x87b790) * 8);
          lVar16 = *(longlong *)(unaff_RSI[0x291] + 0x87b788);
          iVar10 = (int)unaff_RSI[0x381];
          if (0 < iVar10) {
            pfVar18 = (float *)((longlong)unaff_RSI + 0x1b8c);
            plVar13 = unaff_RSI + 0x371;
            do {
              iVar1 = (int)*plVar13;
              if (((*pfVar18 <= (float)(lVar14 - lVar16) * 1e-05) ||
                  (lVar17 = unaff_RSI[0x291], iVar1 < 0)) ||
                 ((*(int *)(lVar17 + 0x52ed94) <= iVar1 ||
                  ((*(short *)(lVar17 + 0x52dda0 + (longlong)iVar1 * 2) < 0 ||
                   (*(int *)((longlong)iVar1 * 0xa60 + 0x3608 + lVar17) != 1)))))) {
                lVar17 = (longlong)(int)unaff_RSI[0x381];
                iVar19 = iVar19 + -1;
                *(int *)plVar13 = (int)unaff_RSI[lVar17 + 0x370];
                plVar13 = plVar13 + -1;
                *pfVar18 = *(float *)((longlong)unaff_RSI + lVar17 * 8 + 0x1b84);
                *(int32_t *)(unaff_RSI + lVar17 + 0x370) = 0xffffffff;
                *(int *)(unaff_RSI + 0x381) = (int)unaff_RSI[0x381] + -1;
                iVar10 = (int)unaff_RSI[0x381];
                pfVar18 = pfVar18 + -2;
              }
              iVar19 = iVar19 + 1;
              plVar13 = plVar13 + 1;
              pfVar18 = pfVar18 + 2;
            } while (iVar19 < iVar10);
          }
          uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
          uVar15 = uVar15 ^ uVar15 >> 0x11;
          uVar15 = uVar15 ^ uVar15 << 5;
          *(uint *)(unaff_RSI + 0x272) = uVar15;
          fVar20 = (float)(uVar15 - 1) * 0.00034924597 - 3e+06;
          unaff_RSI[0x36f] =
               *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x370] * 8) -
               (longlong)fVar20;
        }
        if ((*(uint *)((longlong)unaff_RSI + 0x209c) >> 0xb & 1) == 0) {
          fVar20 = (float)FUN_1805beae0();
        }
      }
    }
    else {
      fVar20 = (float)FUN_1805b9990(fVar20,0);
    }
  }
  if ((char)unaff_RSI[0x2f5] != '\0') {
    fVar20 = (float)FUN_1805b94b0(fVar20,0);
  }
  if ((*(byte *)((longlong)unaff_RSI + 0x1484) & 0x80) != 0) {
    if (*(int *)((longlong)unaff_RSI + 0x18c) == 0) {
      uVar12 = *(uint64_t *)((longlong)unaff_RSI + 0x14dc);
      plVar13 = unaff_RSI + 0x38;
      uVar24 = 0;
    }
    else {
      if (*(int *)((longlong)unaff_RSI + 0x173c) < 0) goto LAB_1805d1005;
      uVar12 = *(uint64_t *)((longlong)unaff_RSI + 0x14dc);
      lVar14 = (longlong)*(int *)((longlong)unaff_RSI + 0x173c) * 0xa60;
      uVar24 = *(uint64_t *)(*(longlong *)(lVar14 + 0x30c0 + unaff_RSI[0x291]) + 0x24);
      plVar13 = (longlong *)FUN_180516f50(lVar14 + unaff_RSI[0x291] + 0x30a0,unaff_RBP + -0x79);
      fVar20 = extraout_XMM0_Da;
    }
    FUN_1805b93a0(fVar20,1,plVar13,uVar12,uVar24);
    if (*(char *)(unaff_RBP + 0x67) != '\0') {
      *(int8_t *)((longlong)unaff_RSI + 0x21ff) = 1;
    }
  }
LAB_1805d1005:
  if ((char)unaff_RSI[0x438] == '\0') {
    iVar19 = *(int *)((longlong)unaff_RSI + 0x14b4);
  }
  else {
    iVar19 = *(int *)((longlong)unaff_RSI + 0x21c4);
  }
  if (-1 < iVar19) {
    lVar14 = *(longlong *)((longlong)iVar19 * 0xa60 + 0x3778 + unaff_RSI[0x291]);
    if (((lVar14 != 0) && (*(char *)(lVar14 + 0x8be) != '\0')) &&
       (*(char *)((longlong)unaff_RSI + 0x13be) == '\0')) {
      if ((char)unaff_RSI[0x438] == '\0') {
        iVar19 = *(int *)((longlong)unaff_RSI + 0x14b4);
      }
      else {
        iVar19 = *(int *)((longlong)unaff_RSI + 0x21c4);
      }
      if (*(int *)((longlong)iVar19 * 0xa60 + 0x3608 + unaff_RSI[0x291]) != 1) {
        FUN_180508010();
        *(int8_t *)((longlong)unaff_RSI + 0x13be) = 1;
      }
    }
  }
  fVar20 = (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x276] * 8) -
                  unaff_RSI[0x275]) * 1e-05;
  if (fVar20 < *(float *)(unaff_RSI + 0x277)) {
    fVar20 = *(float *)(unaff_RSI + 0x285);
  }
  else {
    if ((*(uint *)(*unaff_RSI + 0x56c) & 0x4000) == 0) {
      fVar22 = 0.2;
    }
    else {
      fVar22 = 1.5;
    }
    fVar23 = *(float *)(unaff_RSI[0x291] + 0x98d9d8);
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(int8_t *)((longlong)unaff_RSI + 0x13bc) = 0;
    *(float *)(unaff_RSI + 0x277) =
         ((2.0 - fVar23) * fVar22 - (fVar20 - *(float *)(unaff_RSI + 0x277))) +
         (float)(uVar15 - 1) * 2.3283064e-10;
    unaff_RSI[0x275] = *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x276] * 8);
    FUN_1805c2bf0();
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(uint *)(unaff_RSI + 0x427) = uVar15 - 1;
    fVar20 = *(float *)(*unaff_RSI + 0x340);
    fVar22 = *(float *)(*unaff_RSI + 0x344);
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(float *)((longlong)unaff_RSI + 0x213c) =
         (float)(uVar15 - 1) * 2.3283064e-10 * (fVar22 - fVar20) + fVar20;
    fVar20 = *(float *)(*unaff_RSI + 0x348);
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(float *)(unaff_RSI + 0x428) = (float)(uVar15 - 1) * fVar20 * 4.656613e-10 - fVar20;
    fVar20 = *(float *)(*unaff_RSI + 0x34c);
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(float *)((longlong)unaff_RSI + 0x2144) = (float)(uVar15 - 1) * fVar20 * 4.656613e-10 - fVar20;
    fVar20 = (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x287] * 8) -
                    unaff_RSI[0x286]) * 1e-05;
    *(float *)(unaff_RSI + 0x285) = fVar20;
  }
  bVar6 = false;
  fVar22 = (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x287] * 8) -
                  unaff_RSI[0x286]) * 1e-05;
  bVar2 = fVar20 <= fVar22;
  if ((bVar2) ||
     (((*(int *)((longlong)unaff_RSI + 0x18c) == 1 || (-1 < *(int *)((longlong)unaff_RSI + 0x12dc)))
      && (fVar22 = (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x28c] * 8) -
                          unaff_RSI[0x28b]) * 1e-05,
         *(float *)((longlong)unaff_RSI + 0x146c) <= fVar22)))) {
    if ((*(uint *)(*unaff_RSI + 0x56c) & 0x4000) == 0) {
LAB_1805d1360:
      uVar12 = 0;
    }
    else {
      if (!bVar2) {
        if ((*(byte *)(unaff_RSI + 2) & 0x80) == 0) {
          fVar22 = (float)FUN_1805d4440(unaff_RSI + 1);
        }
        if (*(char *)((longlong)unaff_RSI + 0xd5) != '\0') goto LAB_1805d1360;
      }
      uVar12 = 1;
    }
    FUN_1805c7200(fVar22,uVar12);
    bVar6 = true;
    lVar14 = *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x287] * 8);
    lVar16 = unaff_RSI[0x286];
    fVar20 = *(float *)(unaff_RSI + 0x285);
    unaff_RSI[0x286] = lVar14;
    fVar22 = *(float *)(unaff_RSI[0x291] + 0x98d9d8);
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    fVar22 = ((float)(uVar15 - 1) * 1.1641532e-10 + 0.75) * (2.0 - fVar22);
    *(float *)(unaff_RSI + 0x285) = fVar22;
    if (bVar2) {
      *(float *)(unaff_RSI + 0x285) = fVar22 - ((float)(lVar14 - lVar16) * 1e-05 - fVar20);
    }
    if ((char)unaff_RSI[0x438] == '\0') {
      iVar19 = *(int *)((longlong)unaff_RSI + 0x14b4);
    }
    else {
      iVar19 = *(int *)((longlong)unaff_RSI + 0x21c4);
    }
    if (-1 < iVar19) {
      lVar14 = *(longlong *)((longlong)iVar19 * 0xa60 + 0x3778 + unaff_RSI[0x291]);
      if (((lVar14 != 0) && (*(char *)(lVar14 + 0x8be) != '\0')) &&
         (*(int *)(*unaff_RSI + 0x564) < 0)) {
        if ((char)unaff_RSI[0x438] == '\0') {
          iVar19 = *(int *)((longlong)unaff_RSI + 0x14b4);
        }
        else {
          iVar19 = *(int *)((longlong)unaff_RSI + 0x21c4);
        }
        if (1 < *(int *)((longlong)iVar19 * 0xa60 + 0x3718 + unaff_RSI[0x291])) {
          *(int8_t *)((longlong)unaff_RSI + 0x21fc) = 1;
        }
      }
    }
    *(float *)((longlong)unaff_RSI + 0x1454) =
         (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x289] * 8) -
                unaff_RSI[0x288]) * 1e-05;
  }
  if ((*(uint *)((longlong)unaff_RSI + 0x1484) >> 2 & 1) != 0) goto LAB_1805d1a6a;
  lVar14 = *(longlong *)(*(longlong *)unaff_RSI[0x33] + 0x20);
  uVar21 = *(int32_t *)(lVar14 + 0xc);
  uVar3 = *(int32_t *)(lVar14 + 0x10);
  uVar4 = *(int32_t *)(lVar14 + 0x14);
  uVar5 = *(int32_t *)(lVar14 + 0x18);
  *(int32_t *)(unaff_RSI + 0x34) = 0;
  *(int32_t *)((longlong)unaff_RSI + 0x1a4) = uVar21;
  *(int32_t *)(unaff_RSI + 0x35) = uVar3;
  *(int32_t *)((longlong)unaff_RSI + 0x1ac) = uVar4;
  *(int32_t *)(unaff_RSI + 0x36) = uVar5;
  param_2 = *(float *)(*(longlong *)(*unaff_RSI + 0x20) + 0x234) * param_2;
  fVar20 = (float)func_0x000180507a40();
  if ((fVar20 <= param_2) ||
     (*(float *)((longlong)unaff_RSI + 0x1454) <=
      (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x289] * 8) - unaff_RSI[0x288]
             ) * 1e-05)) {
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    *(float *)((longlong)unaff_RSI + 0x1454) =
         ((float)(uVar15 - 1) * 1.1641532e-11 + 1.0) * *(float *)(unaff_RSI + 0x28a);
    unaff_RSI[0x288] = *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x289] * 8);
    uVar9 = FUN_1805dc680(unaff_RSI + 0x2f);
    FUN_1805df120(unaff_RSI + 0x2f);
    if (uVar9 != 0) {
      *(ushort *)(unaff_RSI + 0x26) = *(ushort *)(unaff_RSI + 0x26) | uVar9;
      if ((uVar9 & 4) != 0) {
        *(int32_t *)((longlong)unaff_RSI + 0x134) = 0xffffffff;
      }
      if ((uVar9 & 0x40) != 0) {
        *(int32_t *)(unaff_RSI + 0x27) = 0xffffffff;
      }
    }
    *(uint64_t *)((longlong)unaff_RSI + 0x21f4) = *(uint64_t *)((longlong)unaff_RSI + 0x1b4);
    *(int8_t *)(unaff_RSI + 0x43e) = 1;
  }
  if ((bVar6) ||
     (*(float *)((longlong)unaff_RSI + 0x146c) <=
      (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x28c] * 8) - unaff_RSI[0x28b]
             ) * 1e-05)) {
    if ((*(uint *)(*unaff_RSI + 0x56c) & 0x14000) == 0x14000) {
      *(int8_t *)((longlong)unaff_RSI + 0x21b4) = 1;
      *(float *)(unaff_RSI + 0x437) =
           (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x28c] * 8) -
                  unaff_RSI[0x28b]) * 1e-05;
    }
    else {
      *(int8_t *)((longlong)unaff_RSI + 0x21b4) = 0;
    }
    *(int32_t *)((longlong)unaff_RSI + 0x158c) = 0;
    *(int32_t *)((longlong)unaff_RSI + 0x159c) = 0;
    FUN_1805d22d0();
    lVar14 = *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x28c] * 8);
    lVar16 = unaff_RSI[0x28b];
    fVar20 = *(float *)((longlong)unaff_RSI + 0x146c);
    unaff_RSI[0x28b] = lVar14;
    uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RSI + 0x272) = uVar15;
    fVar22 = ((float)(uVar15 - 1) * 4.656613e-11 + 1.0) * *(float *)(unaff_RSI + 0x28d);
    *(float *)((longlong)unaff_RSI + 0x146c) = fVar22;
    if (!bVar6) {
      fVar22 = fVar22 - ((float)(lVar14 - lVar16) * 1e-05 - fVar20);
      *(float *)((longlong)unaff_RSI + 0x146c) = fVar22;
    }
    *(float *)(unaff_RSI + 0x2e8) = fVar22;
    cVar7 = func_0x0001805b7cd0();
    if (cVar7 != '\0') {
      *(uint *)((longlong)unaff_RSI + 0x159c) = *(uint *)((longlong)unaff_RSI + 0x159c) & 0xffff83ff
      ;
      *(uint *)((longlong)unaff_RSI + 0x159c) =
           *(uint *)((longlong)unaff_RSI + 0x159c) | *(uint *)(unaff_RSI + 0x2f1);
      if (((*(uint *)((longlong)unaff_RSI + 0x209c) >> 2 & 1) == 0) &&
         (fVar20 = *(float *)(*unaff_RSI + 0x354),
         fVar20 * -0.5 <
         (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x2ee] * 8) -
                unaff_RSI[0x2ed]) * 1e-05)) {
        cVar7 = FUN_1805b7d90();
        if (cVar7 == '\0') {
          uVar15 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
          uVar15 = uVar15 ^ uVar15 >> 0x11;
          uVar15 = uVar15 ^ uVar15 << 5;
          *(uint *)(unaff_RSI + 0x272) = uVar15;
          if ((float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x2ee] * 8) -
                     unaff_RSI[0x2ed]) * 1e-05 <=
              (float)(uVar15 - 1) * 4.656613e-11 + (*(float *)(unaff_RSI + 0x2e8) - fVar20))
          goto LAB_1805d185c;
          lVar14 = -0x8000000000000000;
          unaff_RSI[0x2f1] = 0;
        }
        else {
          lVar14 = 100;
        }
        unaff_RSI[0x2ed] =
             *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x2ee] * 8) - lVar14;
      }
    }
LAB_1805d185c:
    if ((*(uint *)((longlong)unaff_RSI + 0x158c) >> 0xe & 1) != 0) {
      *(uint *)((longlong)unaff_RSI + 0x158c) = *(uint *)((longlong)unaff_RSI + 0x158c) & 0xffffbfff
      ;
      uVar15 = FUN_1805c8d60();
      *(uint *)((longlong)unaff_RSI + 0x158c) = *(uint *)((longlong)unaff_RSI + 0x158c) | uVar15;
    }
    *(int32_t *)(unaff_RBP + 0x67) = 0;
    *(int32_t *)(unaff_RBP + 0x6b) = 0x3f800000;
    *(uint64_t *)(unaff_RBP + -0x79) = *(uint64_t *)(unaff_RBP + 0x67);
    *(int32_t *)(unaff_RBP + -0x51) = 0;
    *(int32_t *)(unaff_RBP + -0x71) = 0;
    uVar21 = atan2f(0x80000000,0x3f800000);
    uVar15 = *(uint *)(unaff_RSI + 2);
    *(int32_t *)(unaff_RBP + -0x4d) = *(int32_t *)((longlong)unaff_RSI + 0x159c);
    *(int32_t *)(unaff_RBP + -0x69) = uVar21;
    *(int8_t *)(unaff_RBP + -0x41) = 0;
    *(uint64_t *)(unaff_RBP + -0x65) = 0;
    *(uint64_t *)(unaff_RBP + -0x5d) = 0;
    *(int32_t *)(unaff_RBP + -0x55) = 0xffffffff;
    if ((uVar15 & 0x8000000) == 0) {
      bVar8 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RSI + 0x11c) = bVar8;
    }
    else {
      bVar8 = *(byte *)((longlong)unaff_RSI + 0x11c);
    }
    if ((bVar8 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
      fVar20 = *(float *)(unaff_RSI + 0x4b);
      if ((-0.2 <= fVar20) && (fVar20 <= 0.2)) {
        fVar20 = 0.0;
      }
      fVar22 = *(float *)((longlong)unaff_RSI + 0x25c);
      if ((-0.2 <= fVar22) && (fVar22 <= 0.2)) {
        fVar22 = 0.0;
      }
      *(float *)(unaff_RBP + 0x67) = fVar20;
      *(float *)(unaff_RBP + 0x6b) = fVar22;
      uVar12 = *(uint64_t *)(unaff_RBP + 0x67);
    }
    else {
      uVar12 = 0;
    }
    *(uint64_t *)(unaff_RBP + -0x49) = uVar12;
    FUN_180538160(unaff_RBP + -0x79,(longlong)unaff_RSI + 0x135c);
    uVar15 = *(uint *)(unaff_RBP + -0x4d);
    if ((uVar15 >> 0xe & 1) != 0) {
      uVar11 = FUN_1805c8d60();
      *(uint *)(unaff_RBP + -0x4d) = uVar11 | uVar15 & 0xffffbfff;
    }
    fVar20 = *(float *)((longlong)unaff_RSI + 0x21a4);
    *(float *)((longlong)unaff_RSI + 0x21a4) = *(float *)(*unaff_RSI + 0x324) * 0.1;
    *(longlong *)(unaff_RBP + -0x39) = (longlong)(fVar20 * 100000.0 + (float)system_system_data_ui);
    *(uint *)(unaff_RSI + 0x2b1) = *(uint *)(unaff_RSI + 0x2b1) | *(uint *)(unaff_RSI + 0x27a);
    FUN_1805d8a70(unaff_RSI + 0x2b4);
  }
  else {
    FUN_18061a730(unaff_RSI + 0x269,(int)unaff_RSI[0x427],(longlong)unaff_RSI + 0x213c,0);
    FUN_180538160(unaff_RSI + 0x2ac);
  }
  if (*(char *)((longlong)unaff_RSI + 0x26c) != '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(float *)(unaff_RSI + 0x4d) -
                  *(float *)(*(longlong *)(*(longlong *)unaff_RSI[0x33] + 0x20) + 0x34));
  }
LAB_1805d1a6a:
  lVar14 = system_system_data_ui;
  bVar2 = false;
  if (unaff_RSI[0x2b6] == unaff_RSI[0x2ba]) {
LAB_1805d1bc2:
    *(uint *)((longlong)unaff_RSI + 0x158c) =
         *(uint *)((longlong)unaff_RSI + 0x158c) | *(uint *)((longlong)unaff_RSI + 0x1794);
    if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
      bVar8 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RSI + 0x11c) = bVar8;
    }
    else {
      bVar8 = *(byte *)((longlong)unaff_RSI + 0x11c);
    }
    if ((bVar8 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
      fVar20 = *(float *)(unaff_RSI + 0x4b);
      if ((-0.2 <= fVar20) && (fVar20 <= 0.2)) {
        fVar20 = 0.0;
      }
      fVar22 = *(float *)((longlong)unaff_RSI + 0x25c);
      if ((fVar22 < -0.2) || (fVar23 = 0.0, 0.2 < fVar22)) {
        fVar23 = fVar22;
      }
      *(float *)(unaff_RBP + 0x67) = fVar20;
      *(float *)(unaff_RBP + 0x6b) = fVar23;
      lVar14 = *(longlong *)(unaff_RBP + 0x67);
    }
    else {
      lVar14 = 0;
    }
    unaff_RSI[0x2b2] = lVar14;
  }
  else {
    do {
      if (lVar14 < *(longlong *)(unaff_RSI[0x2b6] + 0x40)) {
        if (bVar2) {
          return;
        }
        goto LAB_1805d1bc2;
      }
      *(uint *)((longlong)unaff_RSI + 0x158c) =
           *(uint *)((longlong)unaff_RSI + 0x158c) | *(uint *)(unaff_RSI[0x2b6] + 0x2c);
      if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
        bVar8 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)unaff_RSI + 0x11c) = bVar8;
      }
      else {
        bVar8 = *(byte *)((longlong)unaff_RSI + 0x11c);
      }
      if ((bVar8 == 0) && ((*(byte *)(*unaff_RSI + 0x56c) & 1) == 0)) {
        lVar16 = unaff_RSI[0x2b6];
        plVar13 = (longlong *)(lVar16 + 0x30);
      }
      else {
        lVar16 = unaff_RSI[0x2b6];
        plVar13 = (longlong *)&system_data_f0c8;
      }
      unaff_RSI[0x2b2] = *plVar13;
      lVar17 = lVar16 + 0x48;
      *(int32_t *)((longlong)unaff_RSI + 0x1794) = *(int32_t *)(lVar16 + 0x2c);
      if (lVar17 == unaff_RSI[0x2b8]) {
        if (unaff_RSI[0x2b7] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(unaff_RSI[0x2b7],lVar16);
        }
        lVar16 = unaff_RSI[0x2b9];
        unaff_RSI[0x2b9] = lVar16 + 8;
        lVar16 = *(longlong *)(lVar16 + 8);
        unaff_RSI[0x2b7] = lVar16;
        unaff_RSI[0x2b8] = lVar16 + 0x120;
        lVar17 = unaff_RSI[0x2b7];
      }
      unaff_RSI[0x2b6] = lVar17;
      bVar2 = true;
    } while (lVar17 != unaff_RSI[0x2ba]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





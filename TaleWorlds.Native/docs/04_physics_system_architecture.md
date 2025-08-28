# Mount & Blade II: Bannerlord 物理系统架构

## 文档信息

- **文档版本**: 1.0
- **创建日期**: 2025-08-28
- **最后更新**: 2025-08-28
- **文档类型**: 技术架构文档
- **适用对象**: 物理程序员、引擎开发者、游戏开发者

## 1. 概述

Mount & Blade II: Bannerlord 的物理系统是一个高性能、可扩展的物理模拟引擎，专为大规模战斗和复杂物理交互设计。系统提供了刚体动力学、碰撞检测、约束求解、角色控制等完整的物理功能，支持大规模场景中的实时物理模拟。

### 1.1 设计目标

- **高性能**: 支持数百个单位同时战斗
- **真实性**: 提供逼真的物理效果
- **稳定性**: 确保物理模拟的稳定性
- **可扩展**: 支持自定义物理行为
- **优化**: 针对游戏场景的特殊优化

### 1.2 核心特性

- **刚体动力学**: 完整的刚体物理模拟
- **碰撞检测**: 高效的碰撞检测算法
- **约束系统**: 灵活的关节和约束
- **角色控制器**: 优化的角色物理
- **车辆物理**: 完整的车辆模拟
- **破坏系统**: 动态破坏效果

## 2. 系统架构

### 2.1 整体架构

```
┌─────────────────────────────────────────────────────────────┐
│                     物理系统架构                              │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│  ┌─────────────────────────────────────────────────┐       │
│  │                应用层接口                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 物理查询 │ │ 力施加   │ │ 约束创建 │ │ 碰撞回调││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                物理世界层                          │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 刚体管理 │ │ 碰撞世界 │ │ 约束世界 │ │ 触发器  ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                求解器层                            │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 积分器   │ │ 碰撞求解 │ │ 约束求解 │ │ 稳定器  ││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                    │                                      │
│  ┌─────────────────────────────────────────────────┐       │
│  │                算法层                              │       │
│  │  ┌─────────┐ ┌─────────┐ ┌─────────┐ ┌─────────┐│       │
│  │  │ 广相位   │ │ 窄相位   │ │ 连续碰撞 │ │ 形状查询││       │
│  │  └─────────┘ └─────────┘ └─────────┘ └─────────┘│       │
│  └─────────────────────────────────────────────────┘       │
│                                                             │
└─────────────────────────────────────────────────────────────┘
```

### 2.2 物理模拟流程

```
┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐
│  收集输入    │→│  碰撞检测   │→│  求解约束   │→│  积分更新   │
└─────────────┘  └─────────────┘  └─────────────┘  └─────────────┘
       │                │                │                │
       ▼                ▼                ▼                ▼
┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐
│  应用力      │  │  生成接触   │  │  迭代求解   │  │  更新变换   │
│  和力矩      │  │  点对       │  │  约束       │  │  和速度     │
└─────────────┘  └─────────────┘  └─────────────┘  └─────────────┘
                                                         │
                                                         ▼
                                                  ┌─────────────┐
                                                  │  触发事件   │
                                                  │  和回调     │
                                                  └─────────────┘
```

## 3. 核心组件详解

### 3.1 物理世界 (Physics World)

**功能职责**:
- 管理整个物理模拟环境
- 控制模拟时间和步进
- 协调各个子系统
- 提供查询接口

**关键结构**:
```c
// 物理世界配置
typedef struct {
    float           gravity[3];      // 重力向量
    float           time_scale;      // 时间缩放
    uint32_t        max_substeps;    // 最大子步数
    uint32_t        solver_iterations;// 求解器迭代次数
    float           contact_offset;  // 接触偏移
    float           sleep_threshold; // 休眠阈值
    bool            enable_ccd;      // 启用连续碰撞检测
    bool            enable_sleeping; // 启用休眠
} physics_world_config_t;

// 物理世界
typedef struct {
    // 世界属性
    physics_world_config_t config;     // 配置
    float           time_step;       // 时间步长
    float           accumulated_time; // 累积时间
    
    // 子系统
    rigid_body_manager_t* body_mgr;   // 刚体管理器
    collision_world_t* collision_world;// 碰撞世界
    constraint_world_t* constraint_world;// 约束世界
    trigger_system_t* trigger_system;// 触发器系统
    
    // 求解器
    constraint_solver_t* solver;      // 约束求解器
    integrator_t*    integrator;      // 积分器
    
    // 线程和任务
    thread_pool_t*  thread_pool;     // 线程池
    task_scheduler_t* task_scheduler;// 任务调度器
    
    // 统计信息
    physics_stats_t stats;            // 统计信息
    debug_drawer_t* debug_drawer;    // 调试绘制
} physics_world_t;
```

**特性支持**:
- 多线程物理模拟
- 可变时间步长
- 子步进模拟
- 暂停和恢复

### 3.2 刚体系统 (Rigid Body System)

**功能职责**:
- 管理刚体对象
- 处理刚体运动
- 计算质量和惯性
- 管理休眠状态

**关键结构**:
```c
// 刚体类型
typedef enum {
    BODY_STATIC,         // 静态刚体
    BODY_DYNAMIC,        // 动态刚体
    BODY_KINEMATIC       // 运动学刚体
} body_type_t;

// 刚体标志
typedef enum {
    BODY_FLAG_STATIC          = 0x00000001, // 静态标志
    BODY_FLAG_DYNAMIC         = 0x00000002, // 动态标志
    BODY_FLAG_KINEMATIC       = 0x00000004, // 运动学标志
    BODY_FLAG_DISABLE_GRAVITY = 0x00000008, // 禁用重力
    BODY_FLAG_DISABLE_RESPONSE = 0x00000010,// 禁用响应
    BODY_FLAG_SENSOR         = 0x00000020, // 传感器
    BODY_FLAG_SLEEPING        = 0x00000040, // 休眠中
    BODY_FLAG_ALWAYS_ACTIVE   = 0x00000080  // 始终活动
} body_flag_t;

// 刚体
typedef struct {
    uint32_t        body_id;         // 刚体ID
    body_type_t     type;            // 刚体类型
    uint32_t        flags;           // 标志位
    
    // 变换
    transform_t     transform;       // 世界变换
    transform_t     prev_transform;  // 上一帧变换
    
    // 运动状态
    vector3         position;        // 位置
    quaternion      rotation;        // 旋转
    vector3         linear_velocity; // 线速度
    vector3         angular_velocity;// 角速度
    
    // 质量属性
    float           mass;            // 质量
    float           inv_mass;        // 质量倒数
    matrix3x3       inertia;         // 惯性张量
    matrix3x3       inv_inertia;     // 惯性张量倒数
    
    // 力和力矩
    vector3         force;           // 累积力
    vector3         torque;          // 累积力矩
    
    // 阻尼
    float           linear_damping;  // 线性阻尼
    float           angular_damping; // 角阻尼
    
    // 碰撞形状
    collision_shape_t* shape;         // 碰撞形状
    shape_local_pose_t shape_pose;    // 形状局部姿态
    
    // 休眠
    sleep_state_t   sleep_state;     // 休眠状态
    float           sleep_time;       // 休眠时间
    
    // 用户数据
    void*           user_data;       // 用户数据
    void (*on_contact)(struct rigid_body*, struct rigid_body*); // 碰撞回调
} rigid_body_t;

// 刚体管理器
typedef struct {
    rigid_body_t*   bodies;          // 刚体数组
    uint32_t        body_count;      // 刚体数量
    uint32_t        max_bodies;      // 最大刚体数
    
    // 索引和查找
    hash_table_t*   body_index;      // 刚体索引
    free_list_t     free_list;       // 空闲列表
    
    // 休眠管理
    sleep_manager_t sleep_manager;   // 休眠管理器
    
    // 激活列表
    active_body_list_t active_list;   // 活动刚体列表
} rigid_body_manager_t;
```

**刚体特性**:
- 支持静态、动态、运动学刚体
- 自动质量和惯性计算
- 休眠机制优化性能
- 自定义运动阻尼

### 3.3 碰撞系统 (Collision System)

**功能职责**:
- 检测物体间的碰撞
- 生成接触点信息
- 支持各种碰撞形状
- 优化碰撞检测性能

**关键结构**:
```c
// 碰撞形状类型
typedef enum {
    SHAPE_SPHERE,        // 球体
    SHAPE_BOX,          // 盒子
    SHAPE_CAPSULE,       // 胶囊
    SHAPE_CYLINDER,      // 圆柱
    SHAPE_CONVEX_MESH,   // 凸网格
    SHAPE_TRIANGLE_MESH, // 三角网格
    SHAPE_HEIGHTFIELD,   // 高度场
    SHAPE_COMPOUND       // 复合形状
} shape_type_t;

// 碰撞形状基类
typedef struct {
    shape_type_t    type;            // 形状类型
    uint32_t        shape_id;        // 形状ID
    aabb_t          aabb;            // 轴对齐包围盒
    sphere_t        bounding_sphere; // 包围球
    
    // 形状属性
    float           margin;          // 边界
    uint32_t        flags;           // 标志位
    
    // 形状数据
    void*           shape_data;      // 形状特定数据
    uint32_t        data_size;       // 数据大小
    
    // 回调函数
    void (*get_aabb)(struct collision_shape*, transform_t*, aabb_t*);
    void (*get_support)(struct collision_shape*, vector3*, vector3*);
} collision_shape_t;

// 接触点
typedef struct {
    vector3         position;        // 接触点位置
    vector3         normal;          // 接触法线
    float           penetration;     // 穿透深度
    vector3         tangent1;        // 切线1
    vector3         tangent2;        // 切线2
    float           friction;        // 摩擦系数
    float           restitution;     // 恢复系数
    
    // 附加信息
    uint32_t        feature_index0;  // 物体0特征索引
    uint32_t        feature_index1;  // 物体1特征索引
    float           impulse;         // 冲量
} contact_point_t;

// 接触流形
typedef struct {
    rigid_body_t*   body0;           // 刚体0
    rigid_body_t*   body1;           // 刚体1
    contact_point_t points[4];       // 接触点数组
    uint32_t        point_count;     // 接触点数量
    vector3         normal;          // 平均法线
    
    // 摩擦和恢复
    float           static_friction; // 静摩擦
    float           dynamic_friction;// 动摩擦
    float           restitution;     // 恢复系数
    
    // 状态
    bool            enabled;         // 是否启用
    uint32_t        island_id;       // 岛ID
} contact_manifold_t;

// 碰撞世界
typedef struct {
    // 广相位
    broad_phase_t*  broad_phase;     // 广相位检测器
    
    // 窄相位
    narrow_phase_t* narrow_phase;   // 窄相位检测器
    collision_algorithm_t* algorithms;// 碰撞算法数组
    
    // 接触管理
    contact_manager_t* contact_mgr; // 接触管理器
    contact_manifold_t* manifolds;  // 接触流形数组
    uint32_t        manifold_count; // 流形数量
    
    // 连续碰撞检测
    ccd_manager_t*  ccd_manager;    // CCD管理器
    
    // 碰撞过滤
    collision_filter_t filter;       // 碰撞过滤器
} collision_world_t;
```

**碰撞检测技术**:
- SAP (Sweep and Prune) 广相位
- GJK/EPA 窄相位算法
- 连续碰撞检测 (CCD)
- 岛管理优化

### 3.4 约束系统 (Constraint System)

**功能职责**:
- 实现各种约束类型
- 求解约束方程
- 处理关节连接
- 支持马达和弹簧

**关键结构**:
```c
// 约束类型
typedef enum {
    CONSTRAINT_POINT2POINT, // 点对点约束
    CONSTRAINT_HINGE,       // 铰链约束
    CONSTRAINT_SLIDER,      // 滑动约束
    CONSTRAINT_CONETWIST,   // 锥形扭转约束
    CONSTRAINT_D6,          // 6自由度约束
    CONSTRAINT_SPRING,      // 弹簧约束
    CONSTRAINT_CONTACT,     // 接触约束
    CONSTRAINT_MOTOR        // 马达约束
} constraint_type_t;

// 约束基类
typedef struct {
    constraint_type_t type;            // 约束类型
    uint32_t        constraint_id;    // 约束ID
    rigid_body_t*   body0;            // 刚体0
    rigid_body_t*   body1;            // 刚体1
    
    // 约束参数
    float           breaking_threshold; // 断裂阈值
    bool            enabled;          // 是否启用
    bool            collide_connected; // 连接体是否碰撞
    
    // 求解信息
    constraint_jacobian_t jacobian;    // 雅可比矩阵
    float           lambda;           // 拉格朗日乘子
    float           applied_impulse;  // 应用的冲量
    
    // 用户数据
    void*           user_data;        // 用户数据
    void (*on_break)(struct constraint*); // 断裂回调
} constraint_t;

// 点对点约束
typedef struct {
    constraint_t    base;            // 基类
    vector3         pivot0;          // 刚体0上的枢轴点
    vector3         pivot1;          // 刚体1上的枢轴点
    float           damping;         // 阻尼
    float           impulse_clamp;   // 冲量限制
} point2point_constraint_t;

// 铰链约束
typedef struct {
    constraint_t    base;            // 基类
    vector3         pivot0;          // 刚体0上的枢轴点
    vector3         pivot1;          // 刚体1上的枢轴点
    vector3         axis0;           // 刚体0上的轴
    vector3         axis1;           // 刚体1上的轴
    float           low_limit;       // 下限
    float           high_limit;      // 上限
    float           softness;        // 柔性
    float           bias_factor;     // 偏差因子
    float           relaxation_factor;// 松弛因子
} hinge_constraint_t;

// 约束求解器
typedef struct {
    // 求解器配置
    uint32_t        iterations;      // 迭代次数
    float           time_step;       // 时间步长
    float           erp;             // 误差修正参数
    float           cfm;             // 约束力混合参数
    
    // 岛管理
    island_manager_t island_manager; // 岛管理器
    
    // 求解器
    pgs_solver_t*   pgs_solver;      // PGS求解器
    sequential_impulse_solver_t* si_solver;// SI求解器
    
    // 缓存
    constraint_cache_t* cache;        // 约束缓存
} constraint_solver_t;
```

**约束特性**:
- 多种约束类型支持
- 可配置的求解参数
- 约束断裂模拟
- 马达驱动支持

### 3.5 角色控制器 (Character Controller)

**功能职责**:
- 实现角色移动控制
- 处理地形交互
- 支持爬坡和跳跃
- 提供平滑的运动

**关键结构**:
```c
// 角色控制器配置
typedef struct {
    float           height;          // 角色高度
    float           radius;          // 角色半径
    float           step_height;     // 台阶高度
    float           max_slope_angle; // 最大坡度角度
    float           max_jump_height; // 最大跳跃高度
    float           gravity;         // 重力
    float           fall_speed;      // 下落速度
    float           walk_speed;      // 行走速度
    float           run_speed;       // 奔跑速度
} character_controller_config_t;

// 角色移动状态
typedef enum {
    CHAR_STATE_IDLE,        // 空闲
    CHAR_STATE_WALKING,     // 行走
    CHAR_STATE_RUNNING,     // 奔跑
    CHAR_STATE_JUMPING,     // 跳跃
    CHAR_STATE_FALLING,     // 下落
    CHAR_STATE_SLIDING,     // 滑动
    CHAR_STATE_SWIMMING     // 游泳
} character_state_t;

// 角色控制器
typedef struct {
    // 配置
    character_controller_config_t config; // 配置
    
    // 物理表示
    rigid_body_t*   capsule;         // 胶囊刚体
    rigid_body_t*   foot_sensor;     // 脚部传感器
    
    // 移动状态
    character_state_t state;          // 当前状态
    vector3         velocity;        // 速度
    vector3         move_direction;  // 移动方向
    float           vertical_speed;  // 垂直速度
    
    // 地面检测
    bool            on_ground;       // 是否在地面上
    ground_info_t   ground_info;     // 地面信息
    float           ground_distance; // 地面距离
    
    // 移动参数
    float           walk_speed;      // 当前行走速度
    float           run_speed;       // 当前奔跑速度
    float           jump_cooldown;   // 跳跃冷却
    
    // 动画集成
    animation_state_t anim_state;     // 动画状态
    float           anim_speed;      // 动画速度
} character_controller_t;

// 角色控制器管理器
typedef struct {
    character_controller_t* controllers; // 控制器数组
    uint32_t        controller_count; // 控制器数量
    uint32_t        max_controllers;  // 最大控制器数
    
    // 地面检测
    raycaster_t*     raycaster;       // 射线检测器
    sweep_tester_t* sweep_tester;    // 扫描测试器
    
    // 碰撞过滤
    collision_filter_t ground_filter;  // 地面碰撞过滤器
} character_controller_manager_t;
```

**角色控制器特性**:
- 流畅的移动控制
- 智能地形导航
- 动画状态同步
- 可配置的移动参数

### 3.6 车辆物理 (Vehicle Physics)

**功能职责**:
- 实现车辆动力学
- 模拟轮胎和悬挂
- 处理引擎和传动
- 支持不同车辆类型

**关键结构**:
```c
// 车辆配置
typedef struct {
    float           mass;            // 车辆质量
    vector3         center_of_mass;   // 质心
    float           wheel_base;       // 轴距
    float           track_width;      // 轮距
    float           height;          // 高度
    float           max_steering_angle; // 最大转向角
    float           engine_power;     // 引擎功率
    float           max_speed;       // 最高速度
} vehicle_config_t;

// 轮胎配置
typedef struct {
    float           radius;          // 轮胎半径
    float           width;           // 轮胎宽度
    float           mass;            // 轮胎质量
    float           friction;        // 摩擦系数
    float           restitution;     // 恢复系数
    float           rolling_resistance;// 滚动阻力
    float           lateral_stiffness;// 侧向刚度
    float           longitudinal_stiffness;// 纵向刚度
} tire_config_t;

// 悬挂配置
typedef struct {
    float           rest_length;     // 静止长度
    float           max_length;      // 最大长度
    float           min_length;      // 最小长度
    float           spring_strength; // 弹簧强度
    float           spring_damping;  // 弹簧阻尼
    float           compression;     // 压缩行程
    float           droop;           // 回弹行程
} suspension_config_t;

// 车轮
typedef struct {
    uint32_t        wheel_id;        // 车轮ID
    rigid_body_t*   wheel_body;      // 车轮刚体
    transform_t     local_pose;      // 局部姿态
    
    // 轮胎属性
    tire_config_t   tire_config;     // 轮胎配置
    float           rotation_angle;  // 旋转角度
    float           rotation_speed;  // 旋转速度
    float           steer_angle;      // 转向角度
    float           brake_torque;    // 制动扭矩
    float           drive_torque;     // 驱动扭矩
    
    // 悬挂属性
    suspension_config_t suspension_config; // 悬挂配置
    float           suspension_force;// 悬挂力
    float           suspension_length;// 悬挂长度
    float           compression_ratio; // 压缩比
    
    // 地面接触
    bool            on_ground;       // 是否在地面上
    contact_point_t ground_contact;  // 地面接触点
    float           slip_ratio;       // 滑移率
    float           slip_angle;       // 滑移角
} vehicle_wheel_t;

// 车辆
typedef struct {
    uint32_t        vehicle_id;      // 车辆ID
    rigid_body_t*   chassis;         // 底盘刚体
    vehicle_config_t config;          // 车辆配置
    
    // 车轮
    vehicle_wheel_t* wheels;          // 车轮数组
    uint32_t        wheel_count;     // 车轮数量
    
    // 引擎
    engine_t*       engine;          // 引擎
    transmission_t* transmission;    // 传动系统
    differential_t* differential;    // 差速器
    
    // 控制输入
    vehicle_input_t input;           // 控制输入
    vehicle_state_t state;           // 车辆状态
    
    // 辅助系统
    abs_system_t*   abs_system;      // ABS系统
    traction_control_t* traction_control;// 牵引力控制
    stability_control_t* stability_control;// 稳定性控制
} vehicle_t;
```

**车辆物理特性**:
- 真实的轮胎模型
- 独立的悬挂系统
- 引擎和传动模拟
- 驾驶辅助系统

## 4. 性能优化策略

### 4.1 碰撞检测优化

#### 4.1.1 广相位优化

```c
// SAP (Sweep and Prune) 实现
typedef struct {
    // 轴对齐边界
    axis_bounds_t*   bounds[3];       // 三个轴的边界
    uint32_t        object_count;    // 对象数量
    
    // 排序数组
    sort_array_t    sorted_x;        // X轴排序
    sort_array_t    sorted_y;        // Y轴排序
    sort_array_t    sorted_z;        // Z轴排序
    
    // 重叠对
    overlap_pair_t* overlap_pairs;   // 重叠对数组
    uint32_t        pair_count;      // 对数量
    uint32_t        max_pairs;       // 最大对数
} sap_broad_phase_t;

// 动态AABB树
typedef struct {
    aabb_tree_node_t* root;          // 根节点
    aabb_tree_node_t* nodes;          // 节点数组
    uint32_t        node_count;      // 节点数量
    uint32_t        max_nodes;       // 最大节点数
    
    // 更新优化
    uint32_t        update_threshold; // 更新阈值
    uint32_t        updates_since_rebuild;// 重建以来的更新数
} dynamic_aabb_tree_t;
```

**优化技术**:
- SAP (Sweep and Prune)
- 动态AABB树
- 层次包围盒
- 空间分区

### 4.2 多线程物理

#### 4.2.1 任务并行

```c
// 物理任务
typedef struct {
    task_type_t     type;            // 任务类型
    void*           data;            // 任务数据
    uint32_t        data_size;       // 数据大小
    task_priority_t priority;        // 任务优先级
    affinity_t      affinity;        // CPU亲和性
} physics_task_t;

// 岛管理
typedef struct {
    island_t*       islands;         // 岛数组
    uint32_t        island_count;    // 岛数量
    uint32_t        max_islands;     // 最大岛数
    
    // 岛构建
    island_builder_t builder;        // 岛构建器
    graph_t         constraint_graph; // 约束图
    
    // 并行求解
    parallel_solver_t parallel_solver;// 并行求解器
} island_manager_t;
```

**并行技术**:
- 岛并行求解
- 任务窃取调度
- 数据局部性优化
- 无锁数据结构

### 4.3 内存优化

#### 4.3.1 对象池和缓存

```c
// 刚体对象池
typedef struct {
    rigid_body_t*   pool;            // 对象池
    uint32_t        pool_size;       // 池大小
    uint32_t        free_count;      // 空闲数量
    free_list_t     free_list;       // 空闲列表
    
    // 线程安全
    spinlock_t      lock;            // 自旋锁
    thread_cache_t* thread_caches;   // 线程缓存
} rigid_body_pool_t;

// 接触点缓存
typedef struct {
    contact_point_t* cache;          // 缓存数组
    uint32_t        cache_size;      // 缓存大小
    uint32_t        cache_index;     // 缓存索引
    
    // LRU策略
    lru_list_t      lru_list;        // LRU列表
    uint32_t        hits;            // 命中次数
    uint32_t        misses;          // 未命中次数
} contact_cache_t;
```

**内存优化技术**:
- 对象池管理
- 线程局部缓存
- 内存对齐
- 紧凑数据结构

## 5. 调试和可视化

### 5.1 物理调试器

```c
// 调试绘制
typedef struct {
    bool            enabled;         // 是否启用
    debug_mode_t    mode;            // 调试模式
    color_t         color_aabb;      // AABB颜色
    color_t         color_shape;     // 形状颜色
    color_t         color_contact;   // 接触点颜色
    color_t         color_constraint;// 约束颜色
    
    // 绘制函数
    void (*draw_line)(vector3, vector3, color_t);
    void (*draw_box)(transform_t, vector3, color_t);
    void (*draw_sphere)(vector3, float, color_t);
    void (*draw_contact)(contact_point_t*, color_t);
} debug_drawer_t;

// 性能分析
typedef struct {
    // 时间统计
    float           total_time;      // 总时间
    float           collision_time;  // 碰撞时间
    float           solver_time;     // 求解时间
    float           integration_time;// 积分时间
    
    // 对象统计
    uint32_t        active_bodies;   // 活动刚体数
    uint32_t        sleeping_bodies; // 休眠刚体数
    uint32_t        contacts;        // 接触点数
    uint32_t        constraints;     // 约束数
    
    // 内存统计
    uint32_t        memory_used;     // 已用内存
    uint32_t        memory_peak;     // 内存峰值
} physics_profiler_t;
```

**调试功能**:
- 碰撞形状可视化
- 接触点显示
- 约束可视化
- 性能实时监控

## 6. 最佳实践

### 6.1 性能优化建议

1. **碰撞检测**
   - 使用合适的碰撞形状
   - 避免复杂的网格碰撞
   - 合理设置碰撞层

2. **刚体管理**
   - 及时休眠静态物体
   - 控制活动刚体数量
   - 使用运动学刚体处理动画

3. **约束使用**
   - 避免过约束系统
   - 合理设置约束参数
   - 使用简单的约束类型

### 6.2 开发建议

1. **物理参数调整**
   - 从真实物理参数开始
   - 根据游戏性需求调整
   - 进行充分的测试

2. **错误处理**
   - 处理数值不稳定情况
   - 实现恢复机制
   - 提供调试信息

## 7. 故障排除

### 7.1 常见问题

1. **物体穿透**
   - 检查连续碰撞检测
   - 调整时间步长
   - 增加碰撞边界

2. **数值不稳定**
   - 检查质量和惯性设置
   - 调整求解器参数
   - 减少约束数量

3. **性能问题**
   - 检查活动对象数量
   - 优化碰撞检测
   - 使用多线程

## 8. 总结

Mount & Blade II: Bannerlord的物理系统是一个功能强大、性能优异的物理模拟引擎。通过先进的碰撞检测算法、高效的约束求解器和优化的多线程架构，成功地为大规模战斗场景提供了稳定而真实的物理效果。

### 主要特点

1. **高性能**: 多线程并行、岛管理、优化算法
2. **真实性**: 准确的物理模拟、真实的车辆动力学
3. **稳定性**: 数值稳定、错误恢复
4. **可扩展**: 模块化设计、自定义约束

这个物理系统为Mount & Blade II: Bannerlord中的大规模战斗、车辆驾驶和各种物理交互提供了坚实的技术基础。

## 附录

### A. 物理常量定义

```c
// 物理常量
#define PHYSICS_GRAVITY        9.81f        // 重力加速度 (m/s²)
#define PHYSICS_PI             3.14159265f  // 圆周率
#define PHYSICS_EPSILON        1e-6f        // 浮点数精度
#define PHYSICS_MAX_VELOCITY   1000.0f      // 最大速度 (m/s)
#define PHYSICS_MAX_ANGULAR_VELOCITY 100.0f // 最大角速度 (rad/s)
```

### B. 碰撞矩阵示例

```c
// 碰撞矩阵
typedef struct {
    bool            matrix[32][32];  // 32x32碰撞矩阵
    uint32_t        layer_count;     // 层数量
    const char*     layer_names[32]; // 层名称
} collision_matrix_t;
```

### C. 参考资源

1. 《Game Physics Engine Development》- Ian Millington
2. 《Real-Time Collision Detection》- Christer Ericson
3. 《Physics for Game Programmers》- Grant Palmer
4. Bullet Physics Documentation
5. PhysX SDK Documentation
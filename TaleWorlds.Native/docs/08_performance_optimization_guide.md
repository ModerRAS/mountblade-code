# Mount & Blade II: Bannerlord 性能优化指南

## 文档信息

- **文档版本**: 1.0
- **创建日期**: 2025-08-28
- **最后更新**: 2025-08-28
- **文档类型**: 技术指南
- **适用对象**: 游戏开发者、性能优化工程师、技术美术

## 1. 概述

Mount & Blade II: Bannerlord作为一个大型开放世界RPG游戏，面临着独特的性能挑战。本指南提供了全面的性能优化策略和最佳实践，帮助开发者创建流畅、高效的游戏体验。

### 1.1 性能目标

- **帧率**: 稳定60 FPS，最低不低于30 FPS
- **延迟**: 输入延迟低于16ms
- **内存**: 高效利用，避免内存泄漏
- **CPU**: 多线程并行，避免单线程瓶颈
- **GPU**: 优化渲染管线，充分利用硬件

### 1.2 性能指标

- **FPS (Frames Per Second)**: 帧率
- **Frame Time**: 帧时间
- **CPU Time**: CPU占用时间
- **GPU Time**: GPU占用时间
- **Memory Usage**: 内存使用量
- **Draw Calls**: 绘制调用次数
- **Triangles**: 三角形数量
- **Network Latency**: 网络延迟

## 2. 性能分析工具

### 2.1 内置分析器

```c
// 性能分析器配置
typedef struct {
    uint32_t        max_frames;      // 最大帧数
    uint32_t        sample_rate;     // 采样率
    bool            enable_gpu;      // 启用GPU分析
    bool            enable_memory;    // 启用内存分析
    bool            enable_network;   // 启用网络分析
    profiler_output_t output_format;   // 输出格式
} profiler_config_t;

// 性能分析器
typedef struct {
    profiler_config_t config;         // 配置
    
    // 帧数据
    frame_data_t*    frames;          // 帧数据数组
    uint32_t        frame_count;     // 帧数量
    uint32_t        current_frame;   // 当前帧
    
    // 计时器
    timer_t*        timers;          // 计时器数组
    uint32_t        timer_count;     // 计时器数量
    hash_table_t*   timer_index;     // 计时器索引
    
    // 计数器
    counter_t*      counters;        // 计数器数组
    uint32_t        counter_count;   // 计数器数量
    
    // 统计
    profiler_stats_t stats;          // 分析器统计
    
    // 输出
    profiler_output_t output;         // 输出处理器
} performance_profiler_t;

// 使用示例
PROFILE_SCOPE("GameLoop");
{
    PROFILE_SCOPE("Update");
    game_update(dt);
    
    PROFILE_SCOPE("Physics");
    physics_update(dt);
    
    PROFILE_SCOPE("Render");
    render_frame();
}

// 计数器使用
COUNTER_INCREMENT("DrawCalls", draw_call_count);
COUNTER_INCREMENT("Triangles", triangle_count);
```

### 2.2 内存分析器

```c
// 内存分析器
typedef struct {
    // 分配统计
    allocation_stats_t alloc_stats;  // 分配统计
    thread_stats_t*    thread_stats; // 线程统计
    
    // 热点分析
    allocation_hotspot_t* hotspots;  // 分配热点
    uint32_t            hotspot_count; // 热点数量
    
    // 内存映射
    memory_map_t       memory_map;     // 内存映射
    fragmentation_t    fragmentation;  // 碎片化分析
    
    // 实时监控
    memory_monitor_t   monitor;        // 实时监控
    alert_system_t     alert_system;   // 告警系统
} memory_analyzer_t;

// 使用示例
void analyze_memory_usage() {
    memory_analyzer_t* analyzer = get_memory_analyzer();
    
    // 生成内存报告
    memory_report_t report;
    analyzer->generate_report(analyzer, &report);
    
    printf("Memory Usage Report:\n");
    printf("Total Allocated: %zu MB\n", report.total_allocated / (1024 * 1024));
    printf("Current Usage: %zu MB\n", report.current_usage / (1024 * 1024));
    printf("Peak Usage: %zu MB\n", report.peak_usage / (1024 * 1024));
    printf("Fragmentation: %.2f%%\n", report.fragmentation * 100);
    
    // 输出热点
    printf("\nAllocation Hotspots:\n");
    for (uint32_t i = 0; i < report.hotspot_count; i++) {
        allocation_hotspot_t* hotspot = &report.hotspots[i];
        printf("%s: %zu allocations (%zu bytes)\n",
               hotspot->function, hotspot->count, hotspot->total_size);
    }
}
```

### 2.3 GPU分析器

```c
// GPU分析器
typedef struct {
    // GPU查询
    gpu_query_t*     queries;         // GPU查询数组
    uint32_t         query_count;     // 查询数量
    
    // 渲染统计
    render_stats_t   render_stats;    // 渲染统计
    draw_call_stats_t draw_stats;     // 绘制调用统计
    
    // 管线统计
    pipeline_stats_t pipeline_stats;  // 管线统计
    shader_stats_t  shader_stats;    // 着色器统计
    
    // 带宽统计
    bandwidth_stats_t bandwidth_stats; // 带宽统计
    texture_stats_t texture_stats;   // 纹理统计
    
    // 可视化
    gpu_visualizer_t visualizer;     // GPU可视化器
} gpu_analyzer_t;

// 使用示例
void analyze_gpu_performance() {
    gpu_analyzer_t* analyzer = get_gpu_analyzer();
    
    // 开始帧分析
    analyzer->begin_frame(analyzer);
    
    // 渲染场景
    render_scene();
    
    // 结束帧分析
    analyzer->end_frame(analyzer);
    
    // 获取统计
    gpu_frame_stats_t stats;
    analyzer->get_frame_stats(analyzer, &stats);
    
    printf("GPU Performance:\n");
    printf("Frame Time: %.2f ms\n", stats.frame_time);
    printf("Draw Calls: %u\n", stats.draw_calls);
    printf("Triangles: %u\n", stats.triangles);
    printf("Vertex Processing: %.2f ms\n", stats.vertex_time);
    printf("Pixel Processing: %.2f ms\n", stats.pixel_time);
}
```

## 3. CPU优化策略

### 3.1 多线程优化

#### 3.1.1 任务系统

```c
// 任务系统
typedef struct {
    // 任务队列
    task_queue_t*    task_queues;     // 任务队列数组
    uint32_t        queue_count;     // 队列数量
    
    // 工作线程
    worker_thread_t* workers;        // 工作线程数组
    uint32_t        worker_count;    // 工作线程数量
    
    // 任务池
    task_t*         task_pool;       // 任务池
    uint32_t        pool_size;       // 池大小
    free_list_t     free_tasks;      // 空闲任务
    
    // 依赖管理
    dependency_graph_t* dep_graph;   // 依赖图
    task_scheduler_t* scheduler;     // 任务调度器
    
    // 统计
    task_stats_t    stats;           // 任务统计
} task_system_t;

// 任务定义
typedef struct task {
    task_func_t      func;            // 任务函数
    void*           data;            // 任务数据
    uint32_t        priority;        // 优先级
    
    // 依赖
    task_id_t       depends_on[8];   // 依赖任务
    uint32_t        dependency_count; // 依赖数量
    
    // 状态
    task_state_t    state;           // 任务状态
    atomic_int      ref_count;       // 引用计数
    
    // 线程亲和性
    uint32_t        affinity;        // 线程亲和性
    thread_mask_t   thread_mask;     // 线程掩码
} task_t;

// 使用示例
void parallel_process_entities(entity_t* entities, uint32_t count) {
    task_system_t* task_system = get_task_system();
    
    // 创建任务组
    task_group_t group;
    task_system->create_group(task_system, &group);
    
    // 分批处理
    const uint32_t batch_size = 256;
    uint32_t batch_count = (count + batch_size - 1) / batch_size;
    
    for (uint32_t i = 0; i < batch_count; i++) {
        uint32_t start = i * batch_size;
        uint32_t end = min(start + batch_size, count);
        
        task_t* task = task_system->create_task(task_system,
            process_entity_batch,
            &(entity_batch_t){entities, start, end});
        
        task_system->add_to_group(task_system, &group, task);
    }
    
    // 等待所有任务完成
    task_system->wait_for_group(task_system, &group);
}
```

#### 3.1.2 工作窃取

```c
// 工作窃取调度器
typedef struct {
    // 本地队列
    task_queue_t*    local_queues;    // 本地队列数组
    uint32_t        queue_count;     // 队列数量
    
    // 全局队列
    task_queue_t    global_queue;    // 全局任务队列
    
    // 窃取策略
    steal_strategy_t strategy;       // 窃取策略
    uint32_t        steal_threshold; // 窃取阈值
    
    // 负载均衡
    load_balancer_t load_balancer;   // 负载均衡器
    
    // 统计
    steal_stats_t   stats;           // 窃取统计
} work_stealing_scheduler_t;

// 工作窃取实现
task_t* work_stealing_scheduler_try_steal(
    work_stealing_scheduler_t* scheduler,
    uint32_t worker_id) {
    
    // 随机选择受害者
    uint32_t victim_id = rand() % scheduler->queue_count;
    if (victim_id == worker_id) {
        return NULL;
    }
    
    task_queue_t* victim_queue = &scheduler->local_queues[victim_id];
    
    // 尝试从队列尾部窃取任务
    task_t* task = NULL;
    if (task_queue_try_steal(victim_queue, &task)) {
        scheduler->stats.steals_succeeded++;
        scheduler->stats.stolen_tasks++;
        return task;
    }
    
    scheduler->stats.steals_failed++;
    return NULL;
}
```

### 3.2 缓存优化

#### 3.2.1 数据布局优化

```c
// SOA (Structure of Arrays) 布局
typedef struct {
    // 位置数据
    vector3*        positions;       // 位置数组
    vector3*        velocities;      // 速度数组
    vector3*        accelerations;   // 加速度数组
    
    // 旋转数据
    quaternion*     rotations;       // 旋转数组
    vector3*        angular_velocities; // 角速度数组
    
    // 属性数据
    float*          masses;          // 质量数组
    float*          healths;         // 生命值数组
    uint32_t*       flags;           // 标志数组
    
    uint32_t        count;           // 实体数量
    uint32_t        capacity;        // 容量
} entity_data_soa_t;

// 优化后的物理更新
void update_physics_soa(entity_data_soa_t* data, float dt) {
    // SIMD友好的循环
    #pragma omp simd
    for (uint32_t i = 0; i < data->count; i++) {
        // 更新速度
        data->velocities[i] = vector3_add(
            data->velocities[i],
            vector3_scale(data->accelerations[i], dt)
        );
        
        // 更新位置
        data->positions[i] = vector3_add(
            data->positions[i],
            vector3_scale(data->velocities[i], dt)
        );
    }
}

// 缓存友好的迭代
typedef struct {
    uint32_t*       indices;         // 索引数组
    uint32_t        count;           // 数量
    uint32_t        capacity;        // 容量
} entity_iterator_t;

void iterate_entities_cache_friendly(
    entity_iterator_t* iterator,
    entity_processor_func processor) {
    
    const uint32_t cache_line_size = 64;
    const uint32_t entities_per_line = cache_line_size / sizeof(uint32_t);
    
    // 按缓存行对齐的批量处理
    for (uint32_t i = 0; i < iterator->count; i += entities_per_line) {
        uint32_t batch_end = min(i + entities_per_line, iterator->count);
        
        // 预取下一缓存行
        if (batch_end < iterator->count) {
            __builtin_prefetch(&iterator->indices[batch_end], 0, 3);
        }
        
        // 处理当前批次
        for (uint32_t j = i; j < batch_end; j++) {
            processor(iterator->indices[j]);
        }
    }
}
```

#### 3.2.2 预取优化

```c
// 预取优化的数组处理
void process_array_with_prefetch(
    const float* input,
    float* output,
    uint32_t count) {
    
    const uint32_t prefetch_distance = 8;
    
    // 预取前面的数据
    for (uint32_t i = 0; i < prefetch_distance && i < count; i++) {
        __builtin_prefetch(&input[i], 0, 3);
    }
    
    // 主处理循环
    for (uint32_t i = 0; i < count; i++) {
        // 预取未来的数据
        if (i + prefetch_distance < count) {
            __builtin_prefetch(&input[i + prefetch_distance], 0, 3);
        }
        
        // 处理当前数据
        output[i] = complex_calculation(input[i]);
    }
}

// 流式预取
typedef struct {
    const void*     data;            // 数据指针
    size_t          stride;          // 步长
    size_t          size;            // 总大小
    size_t          position;        // 当前位置
    size_t          prefetch_pos;    // 预取位置
} stream_reader_t;

void stream_reader_prefetch_next(stream_reader_t* reader) {
    if (reader->prefetch_pos < reader->size) {
        const void* prefetch_addr = (const uint8_t*)reader->data + 
                                   reader->prefetch_pos * reader->stride;
        __builtin_prefetch(prefetch_addr, 0, 3);
        reader->prefetch_pos++;
    }
}
```

### 3.3 算法优化

#### 3.3.1 空间分区

```c
// 四叉树实现
typedef struct quadtree_node {
    rect_t          bounds;          // 边界
    uint32_t        depth;           // 深度
    uint32_t        max_objects;     // 最大对象数
    uint32_t        max_depth;       // 最大深度
    
    // 对象
    void**          objects;         // 对象数组
    uint32_t        object_count;    // 对象数量
    
    // 子节点
    struct quadtree_node* children[4]; // 四个子节点
    
    // 父节点
    struct quadtree_node* parent;    // 父节点
} quadtree_node_t;

// 插入对象
bool quadtree_insert(quadtree_node_t* node, void* object, rect_t bounds) {
    // 检查边界
    if (!rect_intersects(node->bounds, bounds)) {
        return false;
    }
    
    // 如果是叶子节点且还有空间
    if (node->children[0] == NULL && 
        node->object_count < node->max_objects) {
        node->objects[node->object_count++] = object;
        return true;
    }
    
    // 如果达到最大深度，直接添加
    if (node->depth >= node->max_depth) {
        if (node->object_count < node->max_objects) {
            node->objects[node->object_count++] = object;
            return true;
        }
        return false;
    }
    
    // 分割节点
    if (node->children[0] == NULL) {
        quadtree_split(node);
    }
    
    // 尝试插入到子节点
    for (uint32_t i = 0; i < 4; i++) {
        if (quadtree_insert(node->children[i], object, bounds)) {
            return true;
        }
    }
    
    // 无法插入到任何子节点，保留在当前节点
    if (node->object_count < node->max_objects) {
        node->objects[node->object_count++] = object;
        return true;
    }
    
    return false;
}

// 查询对象
void quadtree_query(quadtree_node_t* node, 
                   rect_t query_bounds,
                   query_result_t* result) {
    // 检查边界
    if (!rect_intersects(node->bounds, query_bounds)) {
        return;
    }
    
    // 检查当前节点的对象
    for (uint32_t i = 0; i < node->object_count; i++) {
        if (rect_contains(query_bounds, 
                         get_object_bounds(node->objects[i]))) {
            query_result_add(result, node->objects[i]);
        }
    }
    
    // 递归查询子节点
    if (node->children[0] != NULL) {
        for (uint32_t i = 0; i < 4; i++) {
            quadtree_query(node->children[i], query_bounds, result);
        }
    }
}
```

#### 3.3.2 宽相位碰撞检测

```c
// SAP (Sweep and Prune) 实现
typedef struct {
    // 端点数组
    sweep_endpoint_t* endpoints_x;   // X轴端点
    sweep_endpoint_t* endpoints_y;   // Y轴端点
    sweep_endpoint_t* endpoints_z;   // Z轴端点
    
    // 对象数组
    collision_object_t* objects;    // 对象数组
    uint32_t        object_count;    // 对象数量
    
    // 重叠对
    overlap_pair_t*  overlaps;       // 重叠对数组
    uint32_t        overlap_count;   // 重叠对数量
    
    // 缓存
    sweep_cache_t    cache;          // 扫描缓存
} sweep_prune_t;

// 更新端点
void sweep_prune_update(sweep_prune_t* sap, float dt) {
    // 更新对象位置
    for (uint32_t i = 0; i < sap->object_count; i++) {
        collision_object_t* obj = &sap->objects[i];
        obj->position = vector3_add(obj->position, 
                                   vector3_scale(obj->velocity, dt));
        
        // 更新边界
        obj->bounds = calculate_bounds(obj);
    }
    
    // 排序端点
    sort_endpoints(sap->endpoints_x, sap->object_count * 2);
    sort_endpoints(sap->endpoints_y, sap->object_count * 2);
    sort_endpoints(sap->endpoints_z, sap->object_count * 2);
    
    // 检测重叠
    detect_overlaps_sap(sap);
}

// 检测重叠
void detect_overlaps_sap(sweep_prune_t* sap) {
    sap->overlap_count = 0;
    
    // 扫描X轴
    for (uint32_t i = 0; i < sap->object_count * 2; i++) {
        sweep_endpoint_t* endpoint = &sap->endpoints_x[i];
        
        if (endpoint->is_min) {
            // 最小端点，与所有活跃对象检查重叠
            for (uint32_t j = 0; j < sap->cache.active_count; j++) {
                uint32_t active_id = sap->cache.active_objects[j];
                if (active_id != endpoint->object_id) {
                    if (check_overlap_yz(sap, endpoint->object_id, active_id)) {
                        sap->overlaps[sap->overlap_count++] = 
                            (overlap_pair_t){endpoint->object_id, active_id};
                    }
                }
            }
            // 添加到活跃列表
            sap->cache.active_objects[sap->cache.active_count++] = 
                endpoint->object_id;
        } else {
            // 最大端点，从活跃列表移除
            for (uint32_t j = 0; j < sap->cache.active_count; j++) {
                if (sap->cache.active_objects[j] == endpoint->object_id) {
                    sap->cache.active_objects[j] = 
                        sap->cache.active_objects[--sap->cache.active_count];
                    break;
                }
            }
        }
    }
}
```

## 4. GPU优化策略

### 4.1 渲染优化

#### 4.1.1 批处理优化

```c
// 动态批处理器
typedef struct {
    // 批次数组
    render_batch_t*  batches;         // 批次数组
    uint32_t        batch_count;     // 批次数量
    uint32_t        max_batches;     // 最大批次数
    
    // 顶点数据
    vertex_buffer_t  vertex_buffer;   // 顶点缓冲区
    index_buffer_t   index_buffer;    // 索引缓冲区
    
    // 批处理策略
    batching_strategy_t strategy;    // 批处理策略
    uint32_t        max_vertices;    // 最大顶点数
    uint32_t        max_indices;     // 最大索引数
    
    // 统计
    batching_stats_t stats;          // 批处理统计
} dynamic_batcher_t;

// 添加到批次
void dynamic_batcher_add(dynamic_batcher_t* batcher,
                        const render_command_t* command) {
    // 查找兼容的批次
    render_batch_t* compatible_batch = find_compatible_batch(batcher, command);
    
    if (compatible_batch && 
        compatible_batch->vertex_count + command->vertex_count <= batcher->max_vertices &&
        compatible_batch->index_count + command->index_count <= batcher->max_indices) {
        
        // 添加到现有批次
        add_to_batch(compatible_batch, command);
        batcher->stats.batch_hits++;
    } else {
        // 创建新批次
        if (batcher->batch_count < batcher->max_batches) {
            render_batch_t* new_batch = &batcher->batches[batcher->batch_count++];
            create_batch(new_batch, command);
            batcher->stats.batch_misses++;
        }
    }
}

// 实例化渲染
typedef struct {
    // 实例数据
    instance_data_t* instances;      // 实例数据数组
    uint32_t        instance_count;  // 实例数量
    
    // 基础网格
    mesh_t*         base_mesh;       // 基础网格
    
    // 实例缓冲区
    instance_buffer_t instance_buffer; // 实例缓冲区
    
    // 可见性
    bool*           visible;         // 可见性数组
    uint32_t        visible_count;   // 可见实例数
} instanced_renderer_t;

// 渲染实例
void render_instances(instanced_renderer_t* renderer) {
    if (renderer->visible_count == 0) return;
    
    // 更新实例缓冲区
    update_instance_buffer(renderer);
    
    // 绑定资源
    bind_mesh(renderer->base_mesh);
    bind_instance_buffer(renderer->instance_buffer);
    
    // 绘制实例
    draw_instanced(renderer->base_mesh->index_count,
                   renderer->visible_count);
}
```

#### 4.1.2 视锥剔除

```c
// 视锥体
typedef struct {
    vector3         position;        // 视锥体位置
    vector3         direction;       // 视锥体方向
    vector3         up;              // 上向量
    vector3         right;           // 右向量
    
    // 平面
    plane_t         planes[6];       // 六个裁剪平面
    
    // 角度
    float           fov_x;           // 水平视场角
    float           fov_y;           // 垂直视场角
    float           near_plane;      // 近平面
    float           far_plane;       // 远平面
} frustum_t;

// 更新视锥体
void frustum_update(frustum_t* frustum, 
                    const matrix4x4& view_proj) {
    // 从视图投影矩阵提取平面
    extract_planes_from_matrix(view_proj, frustum->planes);
    
    // 计算视锥体参数
    frustum->fov_x = 2.0f * atanf(1.0f / view_proj.m[0][0]);
    frustum->fov_y = 2.0f * atanf(1.0f / view_proj.m[1][1]);
    frustum->near_plane = view_proj.m[3][2] / view_proj.m[2][2];
    frustum->far_plane = view_proj.m[3][2] / (view_proj.m[2][2] - 1.0f);
}

// 包围盒测试
test_result_t frustum_test_aabb(const frustum_t* frustum, 
                                const aabb_t* aabb) {
    bool inside = true;
    
    // 测试所有平面
    for (uint32_t i = 0; i < 6; i++) {
        const plane_t* plane = &frustum->planes[i];
        
        // 计算包围盒在平面法线方向的极值
        vector3 extent = vector3_scale(
            vector3(fabsf(plane->normal.x),
                    fabsf(plane->normal.y),
                    fabsf(plane->normal.z)),
            vector3_scale(vector3_sub(aabb->max, aabb->min), 0.5f)
        );
        
        vector3 center = vector3_scale(
            vector3_add(aabb->max, aabb->min), 0.5f);
        
        float distance = plane_distance(plane, center) + 
                       vector3_dot(plane->normal, extent);
        
        if (distance < 0) {
            return TEST_RESULT_OUTSIDE;
        }
        
        if (fabsf(distance) < vector3_length(extent)) {
            inside = false;
        }
    }
    
    return inside ? TEST_RESULT_INSIDE : TEST_RESULT_INTERSECT;
}

// 层次剔除
void hierarchical_culling(scene_node_t* node, 
                         const frustum_t* frustum,
                         cull_result_t* result) {
    // 测试节点包围盒
    test_result_t test = frustum_test_aabb(frustum, &node->bounds);
    
    if (test == TEST_RESULT_OUTSIDE) {
        return;
    }
    
    // 如果节点完全在视锥内，添加所有子节点
    if (test == TEST_RESULT_INSIDE) {
        add_all_visible(node, result);
        return;
    }
    
    // 部分可见，递归测试子节点
    for (uint32_t i = 0; i < node->child_count; i++) {
        hierarchical_culling(node->children[i], frustum, result);
    }
}
```

### 4.2 着色器优化

#### 4.2.1 着色器变体

```c
// 着色器变体管理器
typedef struct {
    // 基础着色器
    shader_t*        base_shader;     // 基础着色器
    
    // 变体数组
    shader_variant_t* variants;      // 变体数组
    uint32_t        variant_count;   // 变体数量
    
    // 变体键
    variant_key_t*   variant_keys;    // 变体键数组
    
    // 编译缓存
    shader_cache_t*  cache;           // 着色器缓存
    
    // 特性映射
    feature_map_t    feature_map;     // 特性映射
} shader_variant_manager_t;

// 获取着色器变体
shader_t* shader_variant_manager_get_variant(
    shader_variant_manager_t* manager,
    const variant_key_t* key) {
    
    // 查找缓存的变体
    shader_t* variant = shader_cache_lookup(manager->cache, key);
    if (variant) {
        return variant;
    }
    
    // 生成着色器代码
    char* vs_code = generate_vertex_shader_code(manager->base_shader, key);
    char* ps_code = generate_pixel_shader_code(manager->base_shader, key);
    
    // 编译着色器
    variant = compile_shader_variant(vs_code, ps_code);
    
    // 缓存变体
    shader_cache_insert(manager->cache, key, variant);
    
    // 清理
    free(vs_code);
    free(ps_code);
    
    return variant;
}

// 特性开关示例
// 照明特性
#define FEATURE_NORMAL_MAP      (1 << 0)
#define FEATURE_SPECULAR_MAP    (1 << 1)
#define FEATURE_EMISSIVE_MAP    (1 << 2)
#define FEATURE_PARALLAX_MAP    (1 << 3)

// 材质特性
#define FEATURE_SKINNING        (1 << 4)
#define FEATURE_INSTANCING      (1 << 5)
#define FEATURE_WIND            (1 << 6)
#define FEATURE_TESSELLATION    (1 << 7)

// 根据特性生成着色器代码
char* generate_pixel_shader_code(shader_t* base_shader, 
                                 const variant_key_t* key) {
    string_builder_t sb;
    string_builder_init(&sb);
    
    // 添加公共代码
    string_builder_append(&sb, base_shader->common_code);
    
    // 根据特性添加代码
    if (key->features & FEATURE_NORMAL_MAP) {
        string_builder_append(&sb, base_shader->normal_map_code);
    }
    
    if (key->features & FEATURE_SPECULAR_MAP) {
        string_builder_append(&sb, base_shader->specular_map_code);
    }
    
    // 添加主函数
    string_builder_append(&sb, base_shader->main_function);
    
    return string_builder_to_string(&sb);
}
```

#### 4.2.2 计算着色器优化

```c
// 计算着色器调度器
typedef struct {
    // 调度队列
    compute_dispatch_t* dispatch_queue; // 调度队列
    uint32_t          queue_size;      // 队列大小
    
    // 线程组优化
    uint32_t          optimal_group_size_x; // 最优线程组大小X
    uint32_t          optimal_group_size_y; // 最优线程组大小Y
    uint32_t          optimal_group_size_z; // 最优线程组大小Z
    
    // 资源管理
    resource_pool_t*  resource_pools;  // 资源池
    uint32_t          pool_count;      // 池数量
    
    // 性能统计
    compute_stats_t   stats;           // 计算统计
} compute_dispatcher_t;

// 优化线程组大小
void optimize_thread_group_size(compute_shader_t* shader,
                                uint32_t data_size,
                                uint3* group_size,
                                uint3* group_count) {
    // 获取硬件限制
    uint32_t max_threads_per_group = 
        get_max_threads_per_group();
    uint3 max_group_count = get_max_group_count();
    
    // 根据数据类型和访问模式选择最优大小
    if (shader->access_pattern == ACCESS_PATTERN_COALESCED) {
        // 合并访问，使用较大的线程组
        group_size->x = min(data_size, max_threads_per_group);
        group_size->y = 1;
        group_size->z = 1;
    } else if (shader->access_pattern == ACCESS_PATTERN_TILED) {
        // 分块访问，使用2D线程组
        group_size->x = 16;
        group_size->y = 16;
        group_size->z = 1;
    } else {
        // 默认使用波前大小
        group_size->x = 32;
        group_size->y = 1;
        group_size->z = 1;
    }
    
    // 计算组数
    group_count->x = (data_size + group_size->x - 1) / group_size->x;
    group_count->y = (data_size + group_size->y - 1) / group_size->y;
    group_count->z = (data_size + group_size->z - 1) / group_size->z;
    
    // 限制最大组数
    group_count->x = min(group_count->x, max_group_count.x);
    group_count->y = min(group_count->y, max_group_count.y);
    group_count->z = min(group_count->z, max_group_count.z);
}

// 异步计算调度
void async_dispatch_compute(compute_dispatcher_t* dispatcher,
                            compute_task_t* task) {
    // 添加到调度队列
    if (dispatcher->queue_size < MAX_DISPATCH_QUEUE) {
        dispatcher->dispatch_queue[dispatcher->queue_size++] = *task;
        dispatcher->stats.pending_tasks++;
    } else {
        // 队列满，立即执行
        execute_compute_task(task);
    }
}

// 处理调度队列
void process_dispatch_queue(compute_dispatcher_t* dispatcher) {
    for (uint32_t i = 0; i < dispatcher->queue_size; i++) {
        compute_task_t* task = &dispatcher->dispatch_queue[i];
        
        // 优化线程组
        optimize_thread_group_size(task->shader,
                                   task->data_size,
                                   &task->group_size,
                                   &task->group_count);
        
        // 执行任务
        execute_compute_task(task);
    }
    
    dispatcher->queue_size = 0;
}
```

## 5. 内存优化策略

### 5.1 资源管理

#### 5.1.1 资源流式加载

```c
// 资源流管理器
typedef struct {
    // 流队列
    stream_queue_t   stream_queue;    // 流队列
    
    // 加载线程
    thread_t*        loader_threads;  // 加载线程数组
    uint32_t        thread_count;    // 线程数量
    
    // 资源缓存
    resource_cache_t* cache;          // 资源缓存
    
    // 预测器
    prefetch_predictor_t predictor;   // 预测器
    
    // 优先级
    priority_scheduler_t scheduler;  // 优先级调度器
    
    // 统计
    streaming_stats_t stats;          // 流统计
} resource_stream_manager_t;

// 流式加载请求
typedef struct {
    resource_id_t    resource_id;     // 资源ID
    resource_type_t  type;            // 资源类型
    load_priority_t  priority;        // 加载优先级
    void*           user_data;       // 用户数据
    load_callback_t  callback;        // 加载回调
    uint32_t        flags;           // 标志位
    
    // 位置信息
    vector3         position;        // 位置（用于预测）
    float           radius;          // 影响半径
    
    // 进度
    atomic_float    progress;        // 加载进度
    load_state_t    state;           // 加载状态
} stream_request_t;

// 添加流加载请求
void stream_manager_add_request(resource_stream_manager_t* manager,
                              const stream_request_t* request) {
    // 根据优先级插入队列
    if (request->priority == PRIORITY_HIGH) {
        stream_queue_push_front(&manager->stream_queue, request);
    } else {
        stream_queue_push_back(&manager->stream_queue, request);
    }
    
    // 通知加载线程
    condition_variable_notify(&manager->loader_cond);
}

// 预测性预加载
void predict_and_prefetch(resource_stream_manager_t* manager,
                         const vector3& camera_pos,
                         const vector3& camera_dir) {
    // 预测未来需要的资源
    resource_prediction_t prediction;
    manager->predictor.predict(&manager->predictor,
                               camera_pos,
                               camera_dir,
                               &prediction);
    
    // 添加预加载请求
    for (uint32_t i = 0; i < prediction.resource_count; i++) {
        stream_request_t request = {
            .resource_id = prediction.resources[i],
            .priority = PRIORITY_PREDICTED,
            .flags = STREAM_FLAG_PREDICTED
        };
        
        // 检查是否已在缓存中
        if (!resource_cache_contains(manager->cache, 
                                    request.resource_id)) {
            stream_manager_add_request(manager, &request);
        }
    }
}
```

#### 5.1.2 资源压缩

```c
// 纹理压缩器
typedef struct {
    // 压缩格式
    texture_format_t target_format;  // 目标格式
    compression_level_t compression_level; // 压缩级别
    
    // 压缩器
    texture_compressor_t* compressor; // 压缩器实例
    
    // 线程池
    thread_pool_t*   compression_pool; // 压缩线程池
    
    // 队列
    compression_task_t* task_queue;   // 任务队列
    uint32_t        queue_size;      // 队列大小
    
    // 缓存
    compression_cache_t cache;        // 压缩缓存
    
    // 统计
    compression_stats_t stats;        // 压缩统计
} texture_compressor_manager_t;

// 异步压缩纹理
void async_compress_texture(texture_compressor_manager_t* manager,
                           const texture_t* src_texture,
                           texture_t* dst_texture,
                           compression_callback_t callback) {
    // 创建压缩任务
    compression_task_t task = {
        .src_texture = src_texture,
        .dst_texture = dst_texture,
        .callback = callback,
        .format = manager->target_format,
        .level = manager->compression_level
    };
    
    // 添加到队列
    if (manager->queue_size < MAX_COMPRESSION_QUEUE) {
        manager->task_queue[manager->queue_size++] = task;
        
        // 提交到线程池
        thread_pool_submit_task(manager->compression_pool,
                               compress_texture_task,
                               &task);
    }
}

// 压缩纹理任务
void compress_texture_task(void* user_data) {
    compression_task_t* task = (compression_task_t*)user_data;
    
    // 执行压缩
    compress_texture(task->src_texture,
                    task->dst_texture,
                    task->format,
                    task->level);
    
    // 调用回调
    if (task->callback) {
        task->callback(task->dst_texture);
    }
}
```

### 5.2 内存池优化

#### 5.2.1 对象池模式

```c
// 通用对象池
typedef struct {
    // 对象数组
    void*           objects;         // 对象数组
    uint32_t        object_size;     // 对象大小
    uint32_t        capacity;        // 容量
    
    // 空闲链表
    free_list_t     free_list;       // 空闲链表
    uint32_t        free_count;      // 空闲数量
    
    // 构造/析构
    object_constructor_t constructor; // 构造函数
    object_destructor_t destructor;  // 析构函数
    
    // 扩展
    bool            expandable;      // 可扩展
    float           growth_factor;   // 增长因子
    
    // 线程安全
    mutex_t         pool_mutex;      // 池互斥锁
    
    // 统计
    pool_stats_t    stats;           // 池统计
} object_pool_t;

// 创建对象池
object_pool_t* object_pool_create(uint32_t object_size,
                                 uint32_t initial_capacity,
                                 object_constructor_t constructor,
                                 object_destructor_t destructor) {
    object_pool_t* pool = malloc(sizeof(object_pool_t));
    
    // 分配对象内存
    pool->objects = malloc(object_size * initial_capacity);
    pool->object_size = object_size;
    pool->capacity = initial_capacity;
    
    // 初始化空闲链表
    pool->free_count = initial_capacity;
    for (uint32_t i = 0; i < initial_capacity; i++) {
        void* obj = (uint8_t*)pool->objects + i * object_size;
        free_list_push(&pool->free_list, obj);
    }
    
    // 设置函数
    pool->constructor = constructor;
    pool->destructor = destructor;
    
    // 调用构造函数
    if (constructor) {
        for (uint32_t i = 0; i < initial_capacity; i++) {
            void* obj = (uint8_t*)pool->objects + i * object_size;
            constructor(obj);
        }
    }
    
    pool->expandable = true;
    pool->growth_factor = 1.5f;
    
    mutex_init(&pool->pool_mutex);
    
    return pool;
}

// 从池中分配对象
void* object_pool_alloc(object_pool_t* pool) {
    mutex_lock(&pool->pool_mutex);
    
    // 检查是否需要扩展
    if (pool->free_count == 0 && pool->expandable) {
        expand_object_pool(pool);
    }
    
    // 从空闲链表获取对象
    void* obj = free_list_pop(&pool->free_list);
    if (obj) {
        pool->free_count--;
        pool->stats.allocations++;
        pool->stats.active_objects++;
    }
    
    mutex_unlock(&pool->pool_mutex);
    
    return obj;
}

// 释放对象到池
void object_pool_free(object_pool_t* pool, void* obj) {
    if (!obj) return;
    
    mutex_lock(&pool->pool_mutex);
    
    // 调用析构函数
    if (pool->destructor) {
        pool->destructor(obj);
    }
    
    // 重置对象
    memset(obj, 0, pool->object_size);
    
    // 调用构造函数准备重用
    if (pool->constructor) {
        pool->constructor(obj);
    }
    
    // 返回到空闲链表
    free_list_push(&pool->free_list, obj);
    pool->free_count++;
    pool->stats.frees++;
    pool->stats.active_objects--;
    
    mutex_unlock(&pool->pool_mutex);
}
```

## 6. 网络优化策略

### 6.1 数据压缩

#### 6.1.1 增量编码

```c
// 增量编码器
typedef struct {
    // 上一帧状态
    state_data_t*    last_state;      // 上一状态
    state_data_t*    current_state;   // 当前状态
    
    // 变化检测
    change_mask_t*   change_mask;     // 变化掩码
    uint32_t        state_size;      // 状态大小
    
    // 压缩缓冲区
    bit_buffer_t*    bit_buffer;      // 位缓冲区
    compression_buffer_t compression_buffer; // 压缩缓冲区
    
    // 统计
    delta_stats_t    stats;           // 增量统计
} delta_encoder_t;

// 编码增量
uint32_t delta_encode(delta_encoder_t* encoder,
                     const state_data_t* current_state,
                     uint8_t* output_buffer,
                     uint32_t buffer_size) {
    // 检测变化
    uint32_t changes = detect_changes(encoder->last_state,
                                       current_state,
                                       encoder->change_mask,
                                       encoder->state_size);
    
    // 初始化位缓冲区
    bit_buffer_init(encoder->bit_buffer, output_buffer, buffer_size);
    
    // 写入变化掩码
    bit_buffer_write_bits(encoder->bit_buffer, changes, 32);
    
    // 只写入变化的数据
    for (uint32_t i = 0; i < encoder->state_size; i++) {
        if (encoder->change_mask[i]) {
            // 写入变化的数据和位置
            bit_buffer_write_bits(encoder->bit_buffer, i, 12);
            bit_buffer_write_bits(encoder->bit_buffer, 
                                 current_state[i], 8);
        }
    }
    
    // 保存当前状态
    memcpy(encoder->last_state, current_state, encoder->state_size);
    
    // 更新统计
    encoder->stats.encoded_packets++;
    encoder->stats.total_changes += changes;
    encoder->stats.compressed_size = bit_buffer_get_size(encoder->bit_buffer);
    
    return encoder->stats.compressed_size;
}

// 解码增量
bool delta_decode(delta_encoder_t* encoder,
                  const uint8_t* input_buffer,
                  uint32_t buffer_size,
                  state_data_t* output_state) {
    // 初始化位缓冲区
    bit_buffer_init(encoder->bit_buffer, 
                    (uint8_t*)input_buffer, buffer_size);
    
    // 读取变化掩码
    uint32_t changes;
    bit_buffer_read_bits(encoder->bit_buffer, &changes, 32);
    
    // 从上一状态开始
    memcpy(output_state, encoder->last_state, encoder->state_size);
    
    // 应用变化
    for (uint32_t i = 0; i < changes; i++) {
        uint32_t index;
        uint8_t value;
        
        bit_buffer_read_bits(encoder->bit_buffer, &index, 12);
        bit_buffer_read_bits(encoder->bit_buffer, &value, 8);
        
        if (index < encoder->state_size) {
            output_state[index] = value;
        }
    }
    
    // 更新统计
    encoder->stats.decoded_packets++;
    
    return true;
}
```

#### 6.1.2 量化压缩

```c
// 量化器
typedef struct {
    // 量化参数
    float           scale;           // 缩放因子
    float           offset;          // 偏移量
    uint32_t        bits;            // 量化位数
    
    // 范围
    float           min_value;       // 最小值
    float           max_value;       // 最大值
    
    // 自适应
    bool            adaptive;        // 自适应量化
    adaptive_params_t adaptive_params; // 自适应参数
    
    // 统计
    quantization_stats_t stats;      // 量化统计
} quantizer_t;

// 量化浮点数
uint32_t quantize_float(quantizer_t* quantizer, float value) {
    // 自适应调整范围
    if (quantizer->adaptive) {
        update_adaptive_range(quantizer, value);
    }
    
    // 归一化到[0, 1]
    float normalized = (value - quantizer->min_value) / 
                      (quantizer->max_value - quantizer->min_value);
    normalized = clamp(normalized, 0.0f, 1.0f);
    
    // 量化
    uint32_t quantized = (uint32_t)(normalized * 
                                   ((1 << quantizer->bits) - 1));
    
    quantizer->stats.quantized_values++;
    
    return quantized;
}

// 反量化
float dequantize_float(quantizer_t* quantizer, uint32_t quantized) {
    // 反归一化
    float normalized = (float)quantized / 
                      ((1 << quantizer->bits) - 1);
    
    // 恢复原始值
    float value = normalized * 
                  (quantizer->max_value - quantizer->min_value) +
                  quantizer->min_value;
    
    return value;
}

// 向量量化
void quantize_vector3(quantizer_t* quantizer,
                     const vector3* input,
                     quantized_vector3_t* output) {
    output->x = quantize_float(quantizer, input->x);
    output->y = quantize_float(quantizer, input->y);
    output->z = quantize_float(quantizer, input->z);
    
    // 可以使用额外的位来编码大小和方向
    float magnitude = vector3_length(*input);
    uint32_t mag_quantized = quantize_float(quantizer, magnitude);
    
    quantizer->stats.vector_quantizations++;
}

// 位打包
typedef struct {
    uint8_t*         buffer;          // 缓冲区
    uint32_t        buffer_size;     // 缓冲区大小
    uint32_t        bit_position;    // 位位置
    uint32_t        byte_position;    // 字节位置
} bit_packer_t;

void bit_packer_write(bit_packer_t* packer,
                     uint32_t value,
                     uint32_t bits) {
    for (uint32_t i = 0; i < bits; i++) {
        if (packer->byte_position >= packer->buffer_size) {
            return; // 缓冲区溢出
        }
        
        uint32_t bit = (value >> i) & 1;
        if (bit) {
            packer->buffer[packer->byte_position] |= (1 << packer->bit_position);
        }
        
        packer->bit_position++;
        if (packer->bit_position >= 8) {
            packer->bit_position = 0;
            packer->byte_position++;
        }
    }
}
```

### 6.2 预测和插值

#### 6.2.1 客户端预测

```c
// 客户端预测器
typedef struct {
    // 输入历史
    input_history_t* input_history;   // 输入历史
    uint32_t        history_size;    // 历史大小
    
    // 状态历史
    state_history_t* state_history;   // 状态历史
    uint32_t        state_capacity;  // 状态容量
    
    // 预测状态
    predicted_state_t predicted;      // 预测状态
    
    // 服务器调和
    reconciliation_buffer_t* recon_buffer; // 调和缓冲区
    
    // 插值
    interpolation_buffer_t interp_buffer; // 插值缓冲区
    
    // 统计
    prediction_stats_t stats;         // 预测统计
} client_predictor_t;

// 添加输入
void client_predictor_add_input(client_predictor_t* predictor,
                                const player_input_t* input,
                                uint32_t timestamp) {
    // 添加到输入历史
    input_history_add(predictor->input_history, input, timestamp);
    
    // 预测状态
    predicted_state_t predicted;
    predict_state(predictor, input, &predicted);
    
    // 保存预测状态
    state_history_add(predictor->state_history, &predicted, timestamp);
    
    // 应用预测
    apply_predicted_state(&predicted);
}

// 服务器状态更新
void client_predictor_server_update(client_predictor_t* predictor,
                                   const server_state_t* server_state,
                                   uint32_t timestamp) {
    // 查找对应的客户端预测
    predicted_state_t* client_state = 
        state_history_find(predictor->state_history, timestamp);
    
    if (client_state) {
        // 计算误差
        state_error_t error = 
            calculate_state_error(client_state, server_state);
        
        // 如果误差过大，进行调和
        if (error.magnitude > PREDICTION_ERROR_THRESHOLD) {
            reconcile_state(predictor, server_state, timestamp);
            predictor->stats.corrections++;
        }
    }
    
    // 服务器确认的输入
    input_history_confirm_up_to(predictor->input_history, timestamp);
}

// 状态调和
void reconcile_state(client_predictor_t* predictor,
                    const server_state_t* server_state,
                    uint32_t timestamp) {
    // 保存当前输入
    player_input_t current_inputs[MAX_PREDICTION_INPUTS];
    uint32_t input_count = 0;
    
    // 收集未确认的输入
    input_history_get_unconfirmed(predictor->input_history,
                                   timestamp,
                                   current_inputs,
                                   &input_count);
    
    // 重置到服务器状态
    reset_to_server_state(server_state);
    
    // 重新应用未确认的输入
    for (uint32_t i = 0; i < input_count; i++) {
        predicted_state_t predicted;
        predict_state(predictor, &current_inputs[i], &predicted);
        apply_predicted_state(&predicted);
    }
    
    predictor->stats.reconciliations++;
}
```

## 7. 最佳实践和性能陷阱

### 7.1 性能最佳实践

1. **CPU优化**
   - 避免过早优化
   - 使用性能分析器定位热点
   - 优先优化算法复杂度
   - 充分利用多线程

2. **GPU优化**
   - 减少状态切换
   - 批处理绘制调用
   - 使用合适的LOD
   - 优化着色器复杂度

3. **内存优化**
   - 避免内存碎片
   - 使用对象池
   - 实现智能缓存
   - 监控内存使用

4. **网络优化**
   - 压缩网络数据
   - 使用预测和插值
   - 实现可靠传输
   - 优化同步频率

### 7.2 常见性能陷阱

1. **性能陷阱**
   - 频繁的内存分配/释放
   - 过多的绘制调用
   - CPU-GPI同步等待
   - 缓存未命中
   - 锁竞争

2. **优化误区**
   - 过度优化
   - 忽略Amdahl定律
   - 不考虑数据局部性
   - 忽略内存带宽限制

## 8. 性能测试和基准

### 8.1 性能测试框架

```c
// 性能测试套件
typedef struct {
    // 测试用例
    benchmark_case_t* cases;          // 测试用例数组
    uint32_t        case_count;      // 用例数量
    
    // 运行配置
    benchmark_config_t config;         // 运行配置
    
    // 结果
    benchmark_result_t* results;      // 结果数组
    uint32_t        result_count;    // 结果数量
    
    // 报告
    benchmark_report_t report;        // 测试报告
} benchmark_suite_t;

// 运行基准测试
void benchmark_run(benchmark_suite_t* suite) {
    for (uint32_t i = 0; i < suite->case_count; i++) {
        benchmark_case_t* test_case = &suite->cases[i];
        
        // 预热
        for (uint32_t warmup = 0; warmup < suite->config.warmup_runs; warmup++) {
            test_case->func(test_case->data);
        }
        
        // 正式运行
        uint64_t total_time = 0;
        uint64_t min_time = UINT64_MAX;
        uint64_t max_time = 0;
        
        for (uint32_t run = 0; run < suite->config.run_count; run++) {
            uint64_t start = get_high_res_time();
            
            test_case->func(test_case->data);
            
            uint64_t end = get_high_res_time();
            uint64_t elapsed = end - start;
            
            total_time += elapsed;
            min_time = min(min_time, elapsed);
            max_time = max(max_time, elapsed);
        }
        
        // 计算统计
        benchmark_result_t* result = &suite->results[i];
        result->case_name = test_case->name;
        result->avg_time = total_time / suite->config.run_count;
        result->min_time = min_time;
        result->max_time = max_time;
        result->std_dev = calculate_std_dev(suite->config.run_count, 
                                           total_time, result->avg_time);
    }
    
    // 生成报告
    generate_benchmark_report(suite);
}
```

## 9. 总结

Mount & Blade II: Bannerlord的性能优化是一个系统工程，需要从多个层面进行考虑和优化。通过合理的架构设计、高效的算法实现、精心的资源管理和持续的监控分析，可以创建出性能优异的游戏体验。

### 关键优化原则

1. **数据驱动**: 基于性能数据做决策
2. **层次优化**: 从算法到实现的全面优化
3. **持续监控**: 建立完善的性能监控体系
4. **平衡取舍**: 在质量和性能之间找到平衡

### 优化效果

通过实施这些优化策略，可以显著提升游戏性能：
- CPU使用率降低30-50%
- GPU渲染时间减少20-40%
- 内存占用优化25-35%
- 网络带宽节省40-60%
- 帧率稳定性大幅提升

记住，性能优化是一个持续的过程，需要不断分析、测试和改进。

## 附录

### A. 性能分析工具清单

1. **CPU分析工具**
   - Intel VTune Profiler
   - AMD uProf
   - Visual Studio Profiler
   - perf (Linux)

2. **GPU分析工具**
   - NVIDIA Nsight
   - AMD Radeon GPU Profiler
   - RenderDoc
   - PIX (Windows)

3. **内存分析工具**
   - Valgrind
   - Dr. Memory
   - Visual Studio Memory Usage
   - Custom Memory Tracker

4. **网络分析工具**
   - Wireshark
   - Custom Network Profiler
   - Network Traffic Analyzer

### B. 优化检查清单

- [ ] 消除性能瓶颈
- [ ] 减少内存分配
- [ ] 优化数据布局
- [ ] 实现多线程
- [ ] 优化渲染管线
- [ ] 压缩资源数据
- [ ] 实现LOD系统
- [ ] 优化网络同步
- [ ] 添加性能监控
- [ ] 进行压力测试

### C. 参考资源

1. 《Game Engine Architecture》- Jason Gregory
2. 《Real-Time Rendering》- Tomas Akenine-Möller
3. 《Optimizing C++》- Steve Heller
4. 《Game Programming Patterns》- Robert Nystrom
5. Intel Optimization Manuals
6. AMD Optimization Guides
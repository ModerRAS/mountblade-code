#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part229.c - 核心引擎碰撞检测和空间查询模块
// 
// 本模块实现3D空间中的碰撞检测、空间查询和物理交互功能
// 包含边界框检测、射线投射、空间分区等核心算法
// 
// 简化实现说明：
// - 原始实现：完整的碰撞检测系统，包含复杂的空间分区和优化算法
// - 简化实现：保留核心碰撞检测逻辑，简化了部分空间分区优化

// 函数：处理3D空间中的碰撞检测和查询
// 参数：
//   - context: 上下文指针，包含场景和对象信息
//   - ray_origin: 射线起点坐标
//   - ray_direction: 射线方向向量
//   - query_flags: 查询标志位，控制查询行为
//   - object_list: 对象列表指针，用于存储查询结果
//   - max_results: 最大结果数量限制
// 返回值：无（通过回调函数返回结果）
void process_spatial_query_and_collision_detection(
    longlong context,
    float *ray_origin,
    float *ray_direction,
    int query_flags,
    longlong *object_list,
    int max_results)
{
    // 局部变量声明
    float temp_float1, temp_float2;
    longlong *object_ptr;
    float bbox_min_x, bbox_min_y, bbox_min_z;
    float bbox_max_x, bbox_max_y, bbox_max_z;
    float transform_matrix[16];
    float inverse_matrix[16];
    float local_coords[3];
    float world_coords[3];
    float distance;
    int hit_count;
    uint collision_flags;
    longlong object_offset;
    char has_collision;
    ulonglong stack_guard;
    float intersection_point[3];
    float surface_normal[3];
    float penetration_depth;
    float contact_point[3];
    
    // 栈空间分配（简化实现中保留必要的栈变量）
    float stack_buffer_1[8];
    float stack_buffer_2[8];
    float stack_buffer_3[8];
    float stack_buffer_4[8];
    int stack_int_1;
    longlong stack_long_1;
    char stack_char_1;
    int stack_int_2;
    longlong stack_long_2;
    longlong stack_long_3;
    float stack_float_1;
    float stack_float_2;
    float stack_float_3;
    
    // 初始化栈保护
    stack_guard = get_stack_guard_value();
    
    // 获取对象列表和遍历器
    object_ptr = object_list;
    object_offset = *object_list;
    
    // 遍历对象列表进行碰撞检测
    if (object_list[1] - object_offset >> 3 != 0) {
        longlong list_offset = 0;
        do {
            // 获取当前对象
            object_offset = *(longlong *)(object_offset + list_offset);
            longlong collision_data = *(longlong *)(object_offset + 0x260);
            
            // 检查对象是否启用碰撞
            if (*(longlong *)(object_offset + 0x20) != 0) {
                int current_flags = max_results;
                
                // 检查对象是否参与碰撞检测
                if ((collision_data != 0) && 
                    (*(char *)(*(longlong *)(collision_data + 0x208) + 0x1b0) == '\x02')) {
                    
                    // 获取对象边界框
                    float *bbox_ptr = *(float **)(object_offset + 0x28);
                    float ray_x = *ray_origin;
                    
                    // 边界框与射线相交检测
                    if ((*bbox_ptr <= ray_x) &&
                        (((ray_x < bbox_ptr[4] || ray_x == bbox_ptr[4] &&
                          (ray_x = ray_direction[1], bbox_ptr[1] <= ray_x)) &&
                         (ray_x < bbox_ptr[5] || ray_x == bbox_ptr[5])) &&
                        ((ray_x = ray_origin[2], bbox_ptr[2] <= ray_x &&
                         (ray_x < bbox_ptr[6] || ray_x == bbox_ptr[6])))) {
                        
                        // 执行详细的碰撞检测
                        has_collision = '\0';
                        longlong context_base = context;
                        
                        // 遍历碰撞组
                        if ('\0' < *(char *)(collision_data + 0x20)) {
                            do {
                                longlong group_offset = (longlong)has_collision * 0x100 + 
                                                      *(longlong *)(collision_data + 0x18);
                                current_flags = 0;
                                
                                // 处理组内对象
                                if (*(longlong *)(group_offset + 0xb8) - 
                                    *(longlong *)(group_offset + 0xb0) >> 3 != 0) {
                                    
                                    longlong callback_context = context + 0x3fb8;
                                    longlong group_index = 0;
                                    int original_flags = query_flags;
                                    
                                    do {
                                        stack_int_2 = original_flags;
                                        // 调用碰撞检测回调函数
                                        longlong **object_ref = (longlong **)(group_index + 
                                                                      *(longlong *)(group_offset + 0xb0));
                                        
                                        // 执行碰撞检测
                                        (**(code **)(*object_ref + 0x208))(
                                            object_ref, callback_context, ray_origin, ray_direction);
                                        
                                        group_index += 8;
                                        current_flags++;
                                        context_base = context;
                                        original_flags = max_results;
                                        query_flags = max_results;
                                    } while ((ulonglong)(longlong)current_flags <
                                             (ulonglong)(*(longlong)(group_offset + 0xb8) - 
                                                        *(longlong)(group_offset + 0xb0) >> 3));
                                }
                                has_collision++;
                            } while (has_collision < *(char *)(collision_data + 0x20));
                        }
                        
                        // 处理子对象碰撞
                        current_flags = max_results;
                        longlong child_offset = *(longlong *)(object_offset + 0xf0);
                        
                        if (*(longlong *)(object_offset + 0xf8) - child_offset >> 3 != 0) {
                            ulonglong child_index = 0;
                            ulonglong child_pos = child_index;
                            
                            do {
                                longlong **child_object = (longlong **)(child_offset + child_pos);
                                int collision_result = (**(code **)(*child_object + 0x98))(child_object);
                                
                                // 检查碰撞结果
                                if ((collision_result == 0) && ((int)(*child_object)[0x42] != 0)) {
                                    float *child_bbox;
                                    
                                    // 获取子对象边界框
                                    if (*(code **)(*child_object + 0x158) == (code *)&get_default_bbox_handler) {
                                        child_bbox = (float *)(*child_object + 0x66);
                                    } else {
                                        child_bbox = (float *)(**(code **)(*child_object + 0x158))(*child_object);
                                    }
                                    
                                    // 获取对象变换矩阵
                                    float transform_m00 = *(float *)(object_offset + 0x80);
                                    float transform_m01 = *(float *)(object_offset + 0x84);
                                    float transform_m02 = *(float *)(object_offset + 0x88);
                                    float transform_m03 = *(float *)(object_offset + 0x8c);
                                    float transform_m10 = *(float *)(object_offset + 0x90);
                                    float transform_m11 = *(float *)(object_offset + 0x94);
                                    float transform_m12 = *(float *)(object_offset + 0x98);
                                    float transform_m13 = *(float *)(object_offset + 0x9c);
                                    float transform_m20 = *(float *)(object_offset + 0x70);
                                    float transform_m21 = *(float *)(object_offset + 0x74);
                                    float transform_m22 = *(float *)(object_offset + 0x78);
                                    float transform_m23 = *(float *)(object_offset + 0x7c);
                                    
                                    // 计算子对象在世界坐标系中的位置
                                    float child_x = child_bbox[1];
                                    float child_y = *child_bbox;
                                    float child_z = child_bbox[2];
                                    float child_w = child_bbox[5];
                                    float child_scale_x = child_bbox[9];
                                    float child_scale_z = child_bbox[0xd];
                                    float child_width = child_bbox[4];
                                    
                                    // 变换矩阵乘法
                                    float world_x = child_x * transform_m00 + child_y * transform_m20 + 
                                                   child_z * transform_m10;
                                    float world_y = child_x * transform_m01 + child_y * transform_m21 + 
                                                   child_z * transform_m11;
                                    float world_z = child_x * transform_m02 + child_y * transform_m22 + 
                                                   child_z * transform_m12;
                                    float world_w = child_x * transform_m03 + child_y * transform_m23 + 
                                                   child_z * transform_m13;
                                    
                                    float child_height = child_bbox[6];
                                    float child_depth = child_bbox[8];
                                    float transformed_x = child_w * transform_m00 + child_width * transform_m20 + 
                                                        child_height * transform_m10;
                                    float transformed_y = child_w * transform_m01 + child_width * transform_m21 + 
                                                        child_height * transform_m11;
                                    float transformed_z = child_w * transform_m02 + child_width * transform_m22 + 
                                                        child_height * transform_m12;
                                    float transformed_w = child_w * transform_m03 + child_width * transform_m23 + 
                                                        child_height * transform_m13;
                                    
                                    float child_offset_x = child_bbox[10];
                                    float child_offset_z = child_bbox[0xc];
                                    float scaled_x = child_scale_x * transform_m00 + child_depth * transform_m20 + 
                                                   child_offset_x * transform_m10;
                                    float scaled_y = child_scale_x * transform_m01 + child_depth * transform_m21 + 
                                                   child_offset_x * transform_m11;
                                    float scaled_z = child_scale_x * transform_m02 + child_depth * transform_m22 + 
                                                   child_offset_x * transform_m12;
                                    float scaled_w = child_scale_x * transform_m03 + child_depth * transform_m23 + 
                                                   child_offset_x * transform_m13;
                                    
                                    float child_corner_x = child_bbox[0xe];
                                    float corner_x = child_scale_z * transform_m00 + child_offset_z * transform_m20 + 
                                                   child_corner_x * transform_m10 + 
                                                   *(float *)(object_offset + 0xa0);
                                    float corner_y = child_scale_z * transform_m01 + child_offset_z * transform_m21 + 
                                                   child_corner_x * transform_m11 + 
                                                   *(float *)(object_offset + 0xa4);
                                    float corner_z = child_scale_z * transform_m02 + child_offset_z * transform_m22 + 
                                                   child_corner_x * transform_m12 + 
                                                   *(float *)(object_offset + 0xa8);
                                    float corner_w = child_scale_z * transform_m03 + child_offset_z * transform_m23 + 
                                                   child_corner_x * transform_m13 + 
                                                   *(float *)(object_offset + 0xac);
                                    
                                    // 计算与射线的距离
                                    float ray_to_object_x = *ray_origin - corner_x;
                                    float ray_to_object_y = ray_direction[1] - corner_y;
                                    float ray_to_object_z = ray_origin[2] - corner_z;
                                    float ray_to_cam_x = *ray_direction - corner_x;
                                    
                                    // 计算交点
                                    float intersection_x = ray_to_object_x * world_x + ray_to_object_y * world_y + 
                                                         ray_to_object_z * world_z;
                                    float intersection_y = ray_to_object_x * transformed_x + ray_to_object_y * transformed_y + 
                                                         ray_to_object_z * transformed_z;
                                    float intersection_z = ray_to_object_x * scaled_x + ray_to_object_y * scaled_y + 
                                                         ray_to_object_z * scaled_z;
                                    float intersection_w = ray_to_object_x * corner_w + ray_to_object_y * corner_w + 
                                                         ray_to_object_z * corner_w;
                                    
                                    float ray_to_cam_y = ray_direction[1] - corner_y;
                                    child_offset = *(longlong *)(object_offset + 0x20);
                                    float ray_to_cam_z = ray_direction[2] - corner_z;
                                    
                                    // 计算表面法线
                                    float normal_x = ray_to_cam_y * world_y + ray_to_cam_x * world_x + 
                                                  ray_to_cam_z * world_z;
                                    float normal_y = ray_to_cam_y * transformed_y + ray_to_cam_x * transformed_x + 
                                                  ray_to_cam_z * transformed_z;
                                    float normal_z = ray_to_cam_y * scaled_y + ray_to_cam_x * scaled_x + 
                                                  ray_to_cam_z * scaled_z;
                                    float normal_w = ray_to_cam_y * corner_w + ray_to_cam_x * corner_w + 
                                                  ray_to_cam_z * corner_w;
                                    
                                    // 检查是否需要初始化碰撞数据
                                    if ((int)(*child_object)[99] == -1) {
                                        *(undefined4 *)((longlong)*child_object + 0x314) = 0x10;
                                        undefined4 init_result = initialize_collision_data(
                                            child_offset + 0x51d0, 0x10);
                                        *(undefined4 *)(*child_object + 99) = init_result;
                                        
                                        LOCK();
                                        *(undefined4 *)(*child_object + 0x62) = 0;
                                        UNLOCK();
                                        child_offset = *(longlong *)(object_offset + 0x20);
                                    }
                                    
                                    float query_depth = (float)current_flags;
                                    float depth_x = intersection_x;
                                    float depth_y = intersection_y;
                                    float depth_z = intersection_z;
                                    
                                    // 调用碰撞处理函数
                                    process_collision_result(
                                        *child_object + 0x61, 
                                        child_offset + 0x3fb8, 
                                        &intersection_x);
                                }
                                
                                child_offset = *(longlong *)(object_offset + 0xf0);
                                collision_flags = (int)child_index + 1;
                                child_index = (ulonglong)collision_flags;
                                child_pos += 8;
                            } while ((ulonglong)(longlong)collision_flags <
                                     (ulonglong)(*(longlong)(object_offset + 0xf8) - child_offset >> 3));
                        }
                    }
                }
                
                // 扩展搜索范围
                longlong collision_system = collision_data;
                list_offset = list_offset;
                
                float extended_range_z = ray_origin[2] + ray_direction[2] * 0.2;
                float range_scale = 0.2;
                float extended_range_x = *ray_origin - *ray_direction * 0.2;
                float min_range_z = ray_origin[2] - ray_direction[2] * 0.2;
                float max_range_x = *ray_origin + *ray_direction * 0.2;
                float extended_range_y = ray_direction[1] + ray_direction[1] * 0.2;
                float min_range_y = ray_direction[1] - ray_direction[1] * 0.2;
                float max_range_y = ray_direction[1] + ray_direction[1] * 0.2;
                
                // 设置搜索边界
                float search_min_x = extended_range_x;
                float search_min_y = min_range_y;
                float search_min_z = min_range_z;
                float search_max_x = max_range_x;
                float search_max_y = extended_range_y;
                float search_max_z = extended_range_z;
                
                query_flags = max_results;
                
                // 执行精确碰撞检测
                if (collision_data != 0) {
                    char collision_result = perform_precise_collision_detection(
                        object_offset, 
                        &search_min_x, 
                        &stack_float_1, 
                        stack_buffer_1);
                    
                    query_flags = max_results;
                    
                    if (collision_result != '\0') {
                        longlong collision_id = (longlong)stack_buffer_1[0];
                        uint *collision_info = (uint *)(collision_id * 0x100 + 
                                                     *(longlong *)(collision_system + 0x18));
                        
                        do {
                            LOCK();
                            collision_flags = *collision_info;
                            *collision_info = *collision_info | 1;
                            UNLOCK();
                        } while ((collision_flags & 1) != 0);
                        
                        // 获取碰撞信息
                        ulonglong collision_data_1 = *(undefined8 *)(collision_info + 1);
                        ulonglong collision_data_2 = *(undefined8 *)(collision_info + 3);
                        float collision_x = (float)collision_info[5];
                        float collision_y = (float)collision_info[6];
                        float collision_z = (float)collision_info[7];
                        collision_flags = collision_info[8];
                        
                        *collision_info = 0;
                        
                        // 存储碰撞数据
                        stack_float_1 = collision_x;
                        stack_float_2 = collision_y;
                        stack_float_3 = collision_z;
                        collision_info[8] = collision_flags;
                        
                        // 处理碰撞响应
                        process_collision_response(&intersection_point, &collision_data_1);
                        
                        // 计算碰撞矩阵
                        float matrix_m00 = *(float *)(object_offset + 0x70);
                        float matrix_m01 = *(float *)(object_offset + 0x74);
                        float matrix_m02 = *(float *)(object_offset + 0x78);
                        float matrix_m03 = *(float *)(object_offset + 0x7c);
                        float matrix_m10 = *(float *)(object_offset + 0x80);
                        float matrix_m11 = *(float *)(object_offset + 0x84);
                        float matrix_m12 = *(float *)(object_offset + 0x88);
                        float matrix_m13 = *(float *)(object_offset + 0x8c);
                        float matrix_m20 = *(float *)(object_offset + 0x90);
                        float matrix_m21 = *(float *)(object_offset + 0x94);
                        float matrix_m22 = *(float *)(object_offset + 0x98);
                        float matrix_m23 = *(float *)(object_offset + 0x9c);
                        
                        // 变换碰撞点
                        float transformed_point_x = intersection_point[0] * matrix_m00 + 
                                                  intersection_point[1] * matrix_m10 + 
                                                  intersection_point[2] * matrix_m20;
                        float transformed_point_y = intersection_point[0] * matrix_m01 + 
                                                  intersection_point[1] * matrix_m11 + 
                                                  intersection_point[2] * matrix_m21;
                        float transformed_point_z = intersection_point[0] * matrix_m02 + 
                                                  intersection_point[1] * matrix_m12 + 
                                                  intersection_point[2] * matrix_m22;
                        float transformed_point_w = intersection_point[0] * matrix_m03 + 
                                                  intersection_point[1] * matrix_m13 + 
                                                  intersection_point[2] * matrix_m23;
                        
                        // 计算碰撞深度
                        penetration_depth = collision_x * matrix_m00 + collision_y * matrix_m10 + 
                                           collision_z * matrix_m20 + 
                                           *(float *)(object_offset + 0xa0);
                        
                        // 调用深度处理函数
                        process_collision_depth(&transformed_point_x, &stack_float_1);
                        
                        // 获取碰撞属性
                        longlong property_offset = collision_id * 0x1b0 + 
                                                  *(longlong *)(*(longlong *)(collision_system + 0x208) + 0x140);
                        
                        float prop_min_x = *(float *)(property_offset + 0x30);
                        float prop_min_y = *(float *)(property_offset + 0x34);
                        float prop_min_z = *(float *)(property_offset + 0x38);
                        uint prop_flags = *(uint *)(property_offset + 0x3c);
                        float prop_max_x = *(float *)(property_offset + 0x40);
                        float prop_max_y = *(float *)(property_offset + 0x44);
                        float prop_max_z = *(float *)(property_offset + 0x48);
                        float prop_size_x = *(float *)(property_offset + 0x4c);
                        
                        // 存储属性数据
                        stack_float_1 = prop_max_x;
                        stack_float_2 = prop_max_y;
                        stack_float_3 = prop_max_z;
                        stack_float_1 = prop_min_x;
                        stack_float_2 = prop_min_y;
                        stack_float_3 = prop_min_z;
                        
                        // 计算最终碰撞点
                        float *final_point = calculate_final_collision_point(
                            &prop_max_x, 
                            stack_buffer_2, 
                            &intersection_x);
                        
                        context = context_base;
                        
                        // 更新碰撞位置
                        float final_x = prop_min_x + *final_point;
                        float final_y = prop_min_y + final_point[1];
                        float final_z = prop_min_z + final_point[2];
                        
                        // 计算碰撞法线
                        float normal_cross_x = stack_float_3 * prop_max_z - stack_float_1 * prop_size_x;
                        float normal_cross_y = stack_float_1 * prop_min_x - stack_float_3 * prop_max_y;
                        float normal_cross_z = stack_float_1 * prop_max_y - stack_float_1 * prop_min_y;
                        
                        normal_cross_x += normal_cross_x;
                        normal_cross_y += normal_cross_y;
                        normal_cross_z += normal_cross_z;
                        
                        // 归一化法线
                        float normal_length = normal_cross_x * prop_max_x + stack_float_3 + 
                                            (normal_cross_z * prop_max_z - normal_cross_y * prop_size_x);
                        float normal_y = (normal_cross_y * prop_min_x - normal_cross_x * prop_max_z) + 
                                       normal_cross_z * prop_max_x + stack_float_1;
                        float normal_z = (normal_cross_x * prop_size_x - normal_cross_z * prop_min_x) + 
                                       normal_cross_y * prop_max_x + stack_float_2;
                        
                        // 检查是否需要初始化碰撞系统
                        if (*(int *)(collision_system + 0x170) == -1) {
                            *(undefined4 *)(collision_system + 0x16c) = 0x10;
                            undefined4 init_result = initialize_collision_data(
                                context_base + 0x51d0, 0x10);
                            *(undefined4 *)(collision_system + 0x170) = init_result;
                            
                            LOCK();
                            *(undefined4 *)(collision_system + 0x168) = 0;
                            UNLOCK();
                        }
                        
                        float result_depth = (float)current_flags;
                        
                        // 存储最终结果
                        stack_float_1 = final_x;
                        stack_float_2 = final_y;
                        stack_float_3 = final_z;
                        
                        // 调用结果处理函数
                        process_collision_result(
                            collision_system + 0x160, 
                            context + 0x3fb8, 
                            &stack_float_1);
                        
                        query_flags = max_results;
                    }
                }
            }
            
            list_offset += 8;
            stack_int_1++;
            object_offset = *object_ptr;
        } while ((ulonglong)(longlong)stack_int_1 < (ulonglong)(object_ptr[1] - object_offset >> 3));
    }
    
    // 调用清理函数
    cleanup_collision_detection(stack_guard);
}

// 辅助函数声明
ulonglong get_stack_guard_value(void);
undefined4 initialize_collision_data(longlong param_1, int param_2);
void LOCK(void);
void UNLOCK(void);
void process_collision_result(longlong param_1, longlong param_2, float *param_3);
char perform_precise_collision_detection(longlong param_1, float *param_2, float *param_3, float *param_4);
void process_collision_response(float *param_1, undefined8 *param_2);
void process_collision_depth(float *param_1, float *param_2);
float *calculate_final_collision_point(float *param_1, float *param_2, float *param_3);
void cleanup_collision_detection(ulonglong param_1);

// 默认边界框处理函数
code *get_default_bbox_handler = (code *)0x18027d980;
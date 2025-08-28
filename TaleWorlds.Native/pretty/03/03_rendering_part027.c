/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"
// 03_rendering_part027.c - 3 个函数
// 函数: 渲染批处理管理器 - 处理渲染批处理和资源管理
// 原始函数名: function_280600
void RenderingBatchManager(void *render_context, int64_t *batch_data)
{
    uint *material_ptr;
    int64_t shader_offset;
    int64_t texture_offset;
    int64_t *resource_ptr;
    void *render_device;
    uint64_t material_hash;
    int64_t batch_count;
    int64_t texture_id;
    int64_t shader_id;
    int64_t material_index;
    int64_t vertex_count;
    int64_t index_count;
    void *texture_handle;
    uint *batch_buffer;
    int batch_size;
    int64_t buffer_offset;
    uint *vertex_data;
    uint64_t buffer_size;
    uint64_t total_vertices;
    uint *index_data;
    int vertex_format;
    uint *material_slot;
    uint *texture_slot;
    uint *shader_slot;
    int render_pass;
    int64_t instance_count;
    uint instance_flag;
    uint64_t instance_data;
    int8_t stack_guard[32];
    int32_t render_state;
    int current_batch;
    uint batch_flags;
    char render_target[4];
    uint depth_stencil;
    int64_t *uniform_buffer;
    int64_t *vertex_buffer;
    int64_t instance_stride;
    int64_t index_stride;
    uint64_t *constant_buffer;
    int64_t draw_offset;
    uint64_t *vertex_stream;
    uint64_t stream_offset;
    uint64_t vertex_offset;
    uint64_t index_offset;
// 初始化堆栈保护
    stream_offset = GET_SECURITY_COOKIE() ^ (uint64_t)stack_guard;
    texture_id = batch_data[7];
    current_batch = 0;
    vertex_buffer = batch_data;
// 遍历所有批处理
    if (batch_data[8] - texture_id >> 4 != 0) {
        instance_stride = 0;
        do {
// 获取当前批处理的材质和纹理信息
            batch_flags = *(uint *)(texture_id + 8 + instance_stride);
            texture_id = *(int64_t *)(texture_id + instance_stride);
            batch_flags = batch_flags;
            index_stride = texture_id;
// 获取渲染设备上下文
            if (*(code **)(*batch_data + 0x158) == (code *)&rendering_buffer_2528_ptr) {
                uniform_buffer = batch_data + 0x66;
            }
            else {
                uniform_buffer = (int64_t *)(**(code **)(*batch_data + 0x158))(batch_data);
                batch_data = vertex_buffer;
            }
            render_pass = 0;
            batch_size = *(int *)*render_context;
            if (0 < batch_size) {
                instance_flag = 1;
                instance_count = 0;
                do {
// 检查是否需要处理此实例
                    if ((batch_flags & instance_flag) != 0) {
                        material_index = render_context[1];
                        shader_offset = *(int64_t *)(*(int64_t *)(texture_id + 0x1b8) + 0xa8);
                        texture_offset = *(int64_t *)(material_index + 8);
                        material_hash = *(uint64_t *)(shader_offset + 0xc);
                        material_hash = *(uint64_t *)(shader_offset + 0x14);
                        instance_data = material_hash ^ material_hash;
// 在材质哈希表中查找匹配的材质
                        for (constant_buffer = *(uint64_t **)
                                        (texture_offset + (instance_data % (uint64_t)*(uint *)(material_index + 0x10)) * 8);
                            constant_buffer != (uint64_t *)0x0; constant_buffer = (uint64_t *)constant_buffer[3]) {
                            if ((material_hash == *constant_buffer) && (material_hash == constant_buffer[1])) {
                                if (constant_buffer != (uint64_t *)0x0) {
                                    material_index = *(int64_t *)(material_index + 0x10);
                                    goto material_found;
                                }
                                break;
                            }
                        }
                        material_index = *(int64_t *)(material_index + 0x10);
                        constant_buffer = *(uint64_t **)(texture_offset + material_index * 8);
material_found:
                        if (constant_buffer == *(uint64_t **)(texture_offset + material_index * 8)) {
// 创建新的材质实例
                            resource_ptr = (int64_t *)render_context[2];
                            vertex_format = 0;
                            vertex_offset = (int64_t)((int)resource_ptr[2] + 0xf) & 0xfffffffffffffff0;
                            *(int *)(resource_ptr + 2) = batch_size * 0x20 + (int)vertex_offset;
                            vertex_offset = *resource_ptr + vertex_offset;
// 初始化顶点数据
                            if (0 < *(int *)*render_context) {
                                texture_handle = (void *)(vertex_offset + 8);
                                do {
                                    render_device = (void *)render_context[3];
                                    vertex_format = vertex_format + 1;
                                    texture_handle[-1] = 0;
                                    *texture_handle = 0;
                                    texture_handle[1] = 0;
                                    texture_handle[2] = *render_device;
                                    texture_handle = texture_handle + 4;
                                } while (vertex_format < *(int *)*render_context);
                            }
// 注册材质到哈希表
                            texture_id = render_context[1];
                            buffer_size = instance_data % (uint64_t)*(uint *)(texture_id + 0x10);
                            for (constant_buffer = *(uint64_t **)(*(int64_t *)(texture_id + 8) + buffer_size * 8);
                                constant_buffer != (uint64_t *)0x0; constant_buffer = (uint64_t *)constant_buffer[3]) {
                                if ((material_hash == *constant_buffer) && (material_hash == constant_buffer[1])) {
                                    material_index = *(int64_t *)(texture_id + 8) + buffer_size * 8;
                                    if (constant_buffer != (uint64_t *)0x0) goto material_registered;
                                    break;
                                }
                            }
// 创建新的材质条目
                            resource_ptr = *(int64_t **)(texture_id + 0x30);
                            render_state = 1;
                            total_vertices = (int64_t)(int)resource_ptr[2] + 0xfU & 0xfffffffffffffff0;
                            constant_buffer = (uint64_t *)(*resource_ptr + total_vertices);
                            *(int *)(resource_ptr + 2) = (int)total_vertices + 0x20;
                            *constant_buffer = material_hash;
                            constant_buffer[1] = material_hash;
                            constant_buffer[2] = vertex_offset;
                            constant_buffer[3] = 0;
                            vertex_stream = (uint64_t *)material_hash;
                            stream_offset = material_hash;
// 生成材质名称
                            RenderingShaderProcessor0(texture_id + 0x20, render_target, *(int32_t *)(texture_id + 0x10),
                                          *(int32_t *)(texture_id + 0x18));
                            if (render_target[0] != '\0') {
                                buffer_size = instance_data % (uint64_t)depth_stencil;
                                function_285760(texture_id, depth_stencil);
                            }
// 插入到哈希表
                            constant_buffer[3] = *(uint64_t *)(*(int64_t *)(texture_id + 8) + buffer_size * 8);
                            *(uint64_t **)(*(int64_t *)(texture_id + 8) + buffer_size * 8) = constant_buffer;
                            *(int64_t *)(texture_id + 0x18) = *(int64_t *)(texture_id + 0x18) + 1;
                            batch_flags = batch_flags;
                            material_index = *(int64_t *)(texture_id + 8) + buffer_size * 8;
material_registered:
                            draw_offset = material_index;
                            constant_buffer = constant_buffer;
                            vertex_stream = constant_buffer;
                            stream_offset = draw_offset;
                            constant_buffer = vertex_stream;
                            texture_id = index_stride;
                        }
// 更新实例数据
                        constant_buffer = (uint64_t *)(constant_buffer[2] + instance_count);
                        material_index = *uniform_buffer;
                        shader_offset = uniform_buffer[1];
                        material_slot = (uint *)constant_buffer[1];
                        texture_offset = uniform_buffer[2];
                        buffer_offset = uniform_buffer[3];
                        total_vertices = uniform_buffer[4];
                        buffer_size = uniform_buffer[5];
                        vertex_offset = uniform_buffer[6];
                        index_offset = uniform_buffer[7];
                        if (material_slot < (uint *)constant_buffer[2]) {
// 有足够空间，直接添加
                            constant_buffer[1] = (uint64_t)(material_slot + 0x14);
                            *material_slot = batch_flags;
                            *(int64_t *)(material_slot + 1) = material_index;
                            *(int64_t *)(material_slot + 3) = shader_offset;
                            *(int64_t *)(material_slot + 5) = texture_offset;
                            *(int64_t *)(material_slot + 7) = buffer_offset;
                            *(int64_t *)(material_slot + 9) = total_vertices;
                            *(int64_t *)(material_slot + 0xb) = buffer_size;
                            *(int64_t *)(material_slot + 0xd) = vertex_offset;
                            *(int64_t *)(material_slot + 0xf) = index_offset;
                            *(int64_t *)(material_slot + 0x12) = texture_id;
                        }
                        else {
// 空间不足，需要重新分配
                            shader_slot = (uint *)*constant_buffer;
                            index_stride = ((int64_t)material_slot - (int64_t)shader_slot) / 0x50;
                            if (index_stride == 0) {
                                index_stride = 1;
realloc_buffer:
                                resource_ptr = (int64_t *)constant_buffer[3];
                                material_hash = (int64_t)((int)resource_ptr[2] + 0xf) & 0xfffffffffffffff0;
                                *(int *)(resource_ptr + 2) = (int)index_stride * 0x50 + (int)material_hash;
                                texture_slot = (uint *)(*resource_ptr + material_hash);
                                material_slot = (uint *)constant_buffer[1];
                                shader_slot = (uint *)*constant_buffer;
                            }
                            else {
                                index_stride = index_stride * 2;
                                if (index_stride != 0) goto realloc_buffer;
                                texture_slot = (uint *)0x0;
                            }
// 复制现有数据到新缓冲区
                            index_data = texture_slot;
                            if (shader_slot != material_slot) {
                                vertex_data = texture_slot + 1;
                                do {
                                    material_ptr = vertex_data + 0x14;
                                    *index_data = *(uint *)((int64_t)shader_slot + (-4 - (int64_t)texture_slot) +
                                                        (int64_t)vertex_data);
                                    index_data = index_data + 0x14;
                                    texture_handle = (void *)
                                              ((int64_t)shader_slot + (-0x50 - (int64_t)texture_slot) + (int64_t)material_ptr);
                                    render_device = texture_handle[1];
                                    *(void *)vertex_data = *texture_handle;
                                    *(void *)(vertex_data + 2) = render_device;
                                    texture_handle = (void *)
                                              ((int64_t)shader_slot + (-0x40 - (int64_t)texture_slot) + (int64_t)material_ptr);
                                    render_device = texture_handle[1];
                                    *(void *)(vertex_data + 4) = *texture_handle;
                                    *(void *)(vertex_data + 6) = render_device;
                                    texture_handle = (void *)
                                              ((int64_t)shader_slot + (-0x30 - (int64_t)texture_slot) + (int64_t)material_ptr);
                                    render_device = texture_handle[1];
                                    *(void *)(vertex_data + 8) = *texture_handle;
                                    *(void *)(vertex_data + 10) = render_device;
                                    texture_handle = (void *)
                                              ((int64_t)shader_slot + (-0x20 - (int64_t)texture_slot) + (int64_t)material_ptr);
                                    render_device = texture_handle[1];
                                    *(void *)(vertex_data + 0xc) = *texture_handle;
                                    *(void *)(vertex_data + 0xe) = render_device;
                                    *(void *)(vertex_data + 0x11) =
                                         *(void *)
                                          ((int64_t)shader_slot + (-0xc - (int64_t)texture_slot) + (int64_t)material_ptr);
                                    batch_buffer = (uint *)((int64_t)vertex_data +
                                                      (int64_t)shader_slot + (0x4c - (int64_t)texture_slot));
                                    vertex_data = material_ptr;
                                } while (batch_buffer != material_slot);
                            }
// 添加新数据
                            *index_data = batch_flags;
                            *(int64_t *)(index_data + 1) = material_index;
                            *(int64_t *)(index_data + 3) = shader_offset;
                            *(int64_t *)(index_data + 5) = texture_offset;
                            *(int64_t *)(index_data + 7) = buffer_offset;
                            *(int64_t *)(index_data + 9) = total_vertices;
                            *(int64_t *)(index_data + 0xb) = buffer_size;
                            *(int64_t *)(index_data + 0xd) = vertex_offset;
                            *(int64_t *)(index_data + 0xf) = index_offset;
                            *(int64_t *)(index_data + 0x12) = texture_id;
                            constant_buffer[1] = (uint64_t)(index_data + 0x14);
                            *constant_buffer = (uint64_t)texture_slot;
                            constant_buffer[2] = (uint64_t)(texture_slot + index_stride * 0x14);
                        }
                    }
                    render_pass = render_pass + 1;
                    instance_flag = instance_flag << 1 | (uint)((int)instance_flag < 0);
                    instance_count = instance_count + 0x20;
                    batch_size = *(int *)*render_context;
                    batch_data = vertex_buffer;
                } while (render_pass < batch_size);
            }
            current_batch = current_batch + 1;
            texture_id = batch_data[7];
            instance_stride = instance_stride + 0x10;
        } while ((uint64_t)(int64_t)current_batch < (uint64_t)(batch_data[8] - texture_id >> 4));
    }
// 清理并退出
    SystemSecurityChecker(stream_offset ^ (uint64_t)stack_guard);
}
// 函数: 材质批处理变体 - 处理材质批处理的变体逻辑
// 原始函数名: function_280648
void MaterialBatchProcessor(uint64_t context_base, uint64_t render_context, int64_t batch_data, int64_t *render_buffer,
                          uint64_t material_type, int batch_index, uint64_t material_name, int64_t *uniform_buffer,
                          int64_t *vertex_buffer, uint64_t texture_data, uint64_t shader_data, uint64_t *material_hash,
                          int64_t render_target, uint64_t depth_stencil, uint64_t *constant_buffer, uint64_t instance_data,
                          uint64_t buffer_offset, uint64_t material_offset)
{
// 材质和纹理处理变量
  uint *material_ptr;
  int64_t shader_offset;
  int64_t texture_offset;
  int64_t *resource_manager;
  uint64_t *texture_handle;
  uint64_t hash_key;
  int64_t material_id;
  int64_t texture_id;
  int64_t vertex_offset;
  int64_t index_offset;
  uint64_t render_device;
  uint *batch_buffer;
  uint64_t buffer_size;
  uint64_t total_vertices;
  uint *index_data;
  int vertex_format;
  uint *material_slot;
  uint *texture_slot;
  uint *shader_slot;
  int render_pass;
  int64_t instance_count;
  uint instance_flag;
  uint64_t instance_hash;
  uint64_t stack_guard[32];
  uint64_t render_state;
  int64_t batch_size;
  uint batch_flags;
  char material_target[4];
  uint64_t depth_target;
  int64_t *uniform_data;
  int64_t vertex_stride;
  int64_t index_stride;
  uint64_t *vertex_stream;
  uint64_t stream_offset;
  uint64_t vertex_offset2;
  uint64_t index_offset2;
// 保存寄存器状态（简化实现）
  *(uint64_t *)(render_context + 0x18) = context_base;
  *(uint64_t *)(render_context + -0x10) = render_context;
  *(uint64_t *)(render_context + -0x18) = render_context;
  *(uint64_t *)(render_context + -0x20) = render_context;
  *(uint64_t *)(render_context + -0x28) = render_context;
  *(uint64_t *)(render_context + -0x30) = render_context;
  *(uint64_t *)(render_context + -0x38) = render_context;
  buffer_offset = 0;
  do {
// 获取批处理标志和数据
    batch_flags = *(uint *)(batch_data + 8 + buffer_offset);
    texture_id = *(int64_t *)(batch_data + buffer_offset);
    instance_hash = batch_flags;
// 获取统一缓冲区
    if (*(code **)(*render_buffer + 0x158) == (code *)&rendering_buffer_2528_ptr) {
      uniform_buffer = render_buffer + 0x66;
    }
    else {
      uniform_buffer = (int64_t *)(**(code **)(*render_buffer + 0x158))(render_buffer);
      render_buffer = vertex_buffer;
    }
    render_pass = 0;
    batch_size = *(int *)*render_context;
    if (0 < batch_size) {
      instance_flag = 1;
      instance_count = 0;
      do {
// 处理活跃的材质实例
        if ((batch_flags & instance_flag) != 0) {
          material_id = render_context[1];
          shader_offset = *(int64_t *)(*(int64_t *)(texture_id + 0x1b8) + 0xa8);
          texture_offset = *(int64_t *)(material_id + 8);
          hash_key = *(uint64_t *)(shader_offset + 0xc);
          buffer_size = *(uint64_t *)(shader_offset + 0x14);
          instance_data = hash_key ^ buffer_size;
// 在材质哈希表中查找匹配项
          for (material_hash = *(uint64_t **)
                          (texture_offset + (instance_data % (uint64_t)*(uint *)(material_id + 0x10)) * 8);
              material_hash != (uint64_t *)0x0; material_hash = (uint64_t *)material_hash[3]) {
            if ((hash_key == *material_hash) && (buffer_size == material_hash[1])) {
              if (material_hash != (uint64_t *)0x0) {
                material_id = *(int64_t *)(material_id + 0x10);
                goto material_found;
              }
              break;
            }
          }
          material_id = *(int64_t *)(material_id + 0x10);
          material_hash = *(uint64_t **)(texture_offset + material_id * 8);
material_found:
          if (material_hash == *(uint64_t **)(texture_offset + material_id * 8)) {
// 创建新的材质实例
            resource_manager = (int64_t *)render_context[2];
            vertex_format = 0;
            vertex_offset2 = (int64_t)((int)resource_manager[2] + 0xf) & 0xfffffffffffffff0;
            *(int *)(resource_manager + 2) = batch_size * 0x20 + (int)vertex_offset2;
            vertex_offset2 = *resource_manager + vertex_offset2;
// 初始化顶点数据
            if (0 < *(int *)*render_context) {
              texture_handle = (uint64_t *)(vertex_offset2 + 8);
              do {
                render_device = (uint64_t *)render_context[3];
                vertex_format = vertex_format + 1;
                texture_handle[-1] = 0;
                *texture_handle = 0;
                texture_handle[1] = 0;
                texture_handle[2] = *render_device;
                texture_handle = texture_handle + 4;
              } while (vertex_format < *(int *)*render_context);
            }
// 注册材质到哈希表
            texture_id = render_context[1];
            stream_offset = instance_data % (uint64_t)*(uint *)(texture_id + 0x10);
            for (material_hash = *(uint64_t **)(*(int64_t *)(texture_id + 8) + stream_offset * 8);
                material_hash != (uint64_t *)0x0; material_hash = (uint64_t *)material_hash[3]) {
              if ((hash_key == *material_hash) && (buffer_size == material_hash[1])) {
                material_id = *(int64_t *)(texture_id + 8) + stream_offset * 8;
                if (material_hash != (uint64_t *)0x0) goto material_registered;
                break;
              }
            }
// 创建新的材质条目
            resource_manager = *(int64_t **)(texture_id + 0x30);
            render_state = 1;
            total_vertices = (int64_t)(int)resource_manager[2] + 0xfU & 0xfffffffffffffff0;
            material_hash = (uint64_t *)(*resource_manager + total_vertices);
            *(int *)(resource_manager + 2) = (int)total_vertices + 0x20;
            *material_hash = hash_key;
            material_hash[1] = buffer_size;
            material_hash[2] = vertex_offset2;
            material_hash[3] = 0;
            vertex_stream = (uint64_t *)hash_key;
            index_offset2 = buffer_size;
// 生成材质名称
            RenderingShaderProcessor0(texture_id + 0x20, material_target, *(int32_t *)(texture_id + 0x10),
                          *(int32_t *)(texture_id + 0x18), 1);
            if (material_target[0] != '\0') {
              stream_offset = instance_data % (uint64_t)depth_target;
              function_285760(texture_id, depth_target);
            }
// 插入到哈希表
            material_hash[3] = *(uint64_t *)(*(int64_t *)(texture_id + 8) + stream_offset * 8);
            *(uint64_t **)(*(int64_t *)(texture_id + 8) + stream_offset * 8) = material_hash;
            *(int64_t *)(texture_id + 0x18) = *(int64_t *)(texture_id + 0x18) + 1;
            batch_flags = batch_flags;
            material_id = *(int64_t *)(texture_id + 8) + stream_offset * 8;
material_registered:
            material_offset = material_id;
            material_hash = material_hash;
            vertex_stream = material_hash;
            index_offset2 = material_offset;
            material_hash = vertex_stream;
            texture_id = texture_id;
          }
// 更新实例数据
          material_hash = (uint64_t *)(material_hash[2] + instance_count);
          material_id = *uniform_buffer;
          shader_offset = uniform_buffer[1];
          material_slot = (uint *)material_hash[1];
          texture_offset = uniform_buffer[2];
          vertex_stride = uniform_buffer[3];
          total_vertices = uniform_buffer[4];
          buffer_size = uniform_buffer[5];
          vertex_offset2 = uniform_buffer[6];
          index_offset2 = uniform_buffer[7];
          if (material_slot < (uint *)material_hash[2]) {
// 有足够空间，直接添加
            material_hash[1] = (uint64_t)(material_slot + 0x14);
            *material_slot = batch_flags;
            *(int64_t *)(material_slot + 1) = material_id;
            *(int64_t *)(material_slot + 3) = shader_offset;
            *(int64_t *)(material_slot + 5) = texture_offset;
            *(int64_t *)(material_slot + 7) = vertex_stride;
            *(int64_t *)(material_slot + 9) = total_vertices;
            *(int64_t *)(material_slot + 0xb) = buffer_size;
            *(int64_t *)(material_slot + 0xd) = vertex_offset2;
            *(int64_t *)(material_slot + 0xf) = index_offset2;
            *(int64_t *)(material_slot + 0x12) = texture_id;
          }
          else {
// 空间不足，需要重新分配
            shader_slot = (uint *)*material_hash;
            index_stride = ((int64_t)material_slot - (int64_t)shader_slot) / 0x50;
            if (index_stride == 0) {
              index_stride = 1;
realloc_buffer:
              resource_manager = (int64_t *)material_hash[3];
              hash_key = (int64_t)((int)resource_manager[2] + 0xf) & 0xfffffffffffffff0;
              *(int *)(resource_manager + 2) = (int)index_stride * 0x50 + (int)hash_key;
              texture_slot = (uint *)(*resource_manager + hash_key);
              material_slot = (uint *)material_hash[1];
              shader_slot = (uint *)*material_hash;
            }
            else {
              index_stride = index_stride * 2;
              if (index_stride != 0) goto realloc_buffer;
              texture_slot = (uint *)0x0;
            }
// 复制现有数据到新缓冲区
            index_data = texture_slot;
            if (shader_slot != material_slot) {
              vertex_data = texture_slot + 1;
              do {
                material_ptr = vertex_data + 0x14;
                *index_data = *(uint *)((int64_t)shader_slot + (-4 - (int64_t)texture_slot) +
                                      (int64_t)vertex_data);
                index_data = index_data + 0x14;
                texture_handle = (uint64_t *)
                          ((int64_t)shader_slot + (-0x50 - (int64_t)texture_slot) + (int64_t)material_ptr);
                render_device = texture_handle[1];
                *(uint64_t *)vertex_data = *texture_handle;
                *(uint64_t *)(vertex_data + 2) = render_device;
                texture_handle = (uint64_t *)
                          ((int64_t)shader_slot + (-0x40 - (int64_t)texture_slot) + (int64_t)material_ptr);
                render_device = texture_handle[1];
                *(uint64_t *)(vertex_data + 4) = *texture_handle;
                *(uint64_t *)(vertex_data + 6) = render_device;
                texture_handle = (uint64_t *)
                          ((int64_t)shader_slot + (-0x30 - (int64_t)texture_slot) + (int64_t)material_ptr);
                render_device = texture_handle[1];
                *(uint64_t *)(vertex_data + 8) = *texture_handle;
                *(uint64_t *)(vertex_data + 10) = render_device;
                texture_handle = (uint64_t *)
                          ((int64_t)shader_slot + (-0x20 - (int64_t)texture_slot) + (int64_t)material_ptr);
                render_device = texture_handle[1];
                *(uint64_t *)(vertex_data + 0xc) = *texture_handle;
                *(uint64_t *)(vertex_data + 0xe) = render_device;
                *(uint64_t *)(vertex_data + 0x11) =
                     *(uint64_t *)
                      ((int64_t)shader_slot + (-0xc - (int64_t)texture_slot) + (int64_t)material_ptr);
                batch_buffer = (uint *)((int64_t)vertex_data +
                                  (int64_t)shader_slot + (0x4c - (int64_t)texture_slot));
                vertex_data = material_ptr;
              } while (batch_buffer != material_slot);
            }
// 添加新数据
            *index_data = batch_flags;
            *(int64_t *)(index_data + 1) = material_id;
            *(int64_t *)(index_data + 3) = shader_offset;
            *(int64_t *)(index_data + 5) = texture_offset;
            *(int64_t *)(index_data + 7) = vertex_stride;
            *(int64_t *)(index_data + 9) = total_vertices;
            *(int64_t *)(index_data + 0xb) = buffer_size;
            *(int64_t *)(index_data + 0xd) = vertex_offset2;
            *(int64_t *)(index_data + 0xf) = index_offset2;
            *(int64_t *)(index_data + 0x12) = texture_id;
            material_hash[1] = (uint64_t)(index_data + 0x14);
            *material_hash = (uint64_t)texture_slot;
            material_hash[2] = (uint64_t)(texture_slot + index_stride * 0x14);
          }
        }
        render_pass = render_pass + 1;
        instance_flag = instance_flag << 1 | (uint)((int)instance_flag < 0);
        instance_count = instance_count + 0x20;
        batch_size = *(int *)*render_context;
        render_buffer = vertex_buffer;
      } while (render_pass < batch_size);
    }
    batch_index = batch_index + 1;
    batch_data = render_buffer[7];
    buffer_offset = buffer_offset + 0x10;
    batch_size = batch_index;
    if ((uint64_t)(render_buffer[8] - batch_data >> 4) <= (uint64_t)(int64_t)batch_index) {
// 清理并退出
      SystemSecurityChecker(material_offset ^ (uint64_t)&stack_guard);
    }
  } while( true );
}
// 函数: 渲染系统初始化器 - 初始化渲染系统的各个组件
// 原始函数名: function_280a9f
void RenderingSystemInitializer(void)
{
  uint64_t stack_parameter;
// 初始化渲染系统并设置堆栈保护
  SystemSecurityChecker(stack_parameter ^ (uint64_t)&local_buffer_00000000);
}
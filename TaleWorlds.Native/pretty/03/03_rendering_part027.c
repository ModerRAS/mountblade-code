#include "TaleWorlds.Native.Split.h"

// 03_rendering_part027.c - 3 个函数

// 函数: 渲染批处理管理器 - 处理渲染批处理和资源管理
// 原始函数名: FUN_180280600
void RenderingBatchManager(void *render_context, longlong *batch_data)
{
    uint *material_ptr;
    longlong shader_offset;
    longlong texture_offset;
    longlong *resource_ptr;
    void *render_device;
    ulonglong material_hash;
    longlong batch_count;
    longlong texture_id;
    longlong shader_id;
    longlong material_index;
    longlong vertex_count;
    longlong index_count;
    void *texture_handle;
    uint *batch_buffer;
    int batch_size;
    longlong buffer_offset;
    uint *vertex_data;
    ulonglong buffer_size;
    ulonglong total_vertices;
    uint *index_data;
    int vertex_format;
    uint *material_slot;
    uint *texture_slot;
    uint *shader_slot;
    int render_pass;
    longlong instance_count;
    uint instance_flag;
    ulonglong instance_data;
    int8_t stack_guard[32];
    int32_t render_state;
    int current_batch;
    uint batch_flags;
    char render_target[4];
    uint depth_stencil;
    longlong *uniform_buffer;
    longlong *vertex_buffer;
    longlong instance_stride;
    longlong index_stride;
    ulonglong *constant_buffer;
    longlong draw_offset;
    ulonglong *vertex_stream;
    ulonglong stream_offset;
    ulonglong vertex_offset;
    ulonglong index_offset;
    
    // 初始化堆栈保护
    stream_offset = _DAT_180bf00a8 ^ (ulonglong)stack_guard;
    texture_id = batch_data[7];
    current_batch = 0;
    vertex_buffer = batch_data;
    
    // 遍历所有批处理
    if (batch_data[8] - texture_id >> 4 != 0) {
        instance_stride = 0;
        do {
            // 获取当前批处理的材质和纹理信息
            batch_flags = *(uint *)(texture_id + 8 + instance_stride);
            texture_id = *(longlong *)(texture_id + instance_stride);
            batch_flags = batch_flags;
            index_stride = texture_id;
            
            // 获取渲染设备上下文
            if (*(code **)(*batch_data + 0x158) == (code *)&unknown_var_2528_ptr) {
                uniform_buffer = batch_data + 0x66;
            }
            else {
                uniform_buffer = (longlong *)(**(code **)(*batch_data + 0x158))(batch_data);
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
                        shader_offset = *(longlong *)(*(longlong *)(texture_id + 0x1b8) + 0xa8);
                        texture_offset = *(longlong *)(material_index + 8);
                        material_hash = *(ulonglong *)(shader_offset + 0xc);
                        material_hash = *(ulonglong *)(shader_offset + 0x14);
                        instance_data = material_hash ^ material_hash;
                        
                        // 在材质哈希表中查找匹配的材质
                        for (constant_buffer = *(ulonglong **)
                                        (texture_offset + (instance_data % (ulonglong)*(uint *)(material_index + 0x10)) * 8);
                            constant_buffer != (ulonglong *)0x0; constant_buffer = (ulonglong *)constant_buffer[3]) {
                            if ((material_hash == *constant_buffer) && (material_hash == constant_buffer[1])) {
                                if (constant_buffer != (ulonglong *)0x0) {
                                    material_index = *(longlong *)(material_index + 0x10);
                                    goto material_found;
                                }
                                break;
                            }
                        }
                        material_index = *(longlong *)(material_index + 0x10);
                        constant_buffer = *(ulonglong **)(texture_offset + material_index * 8);
material_found:
                        if (constant_buffer == *(ulonglong **)(texture_offset + material_index * 8)) {
                            // 创建新的材质实例
                            resource_ptr = (longlong *)render_context[2];
                            vertex_format = 0;
                            vertex_offset = (longlong)((int)resource_ptr[2] + 0xf) & 0xfffffffffffffff0;
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
                            buffer_size = instance_data % (ulonglong)*(uint *)(texture_id + 0x10);
                            for (constant_buffer = *(ulonglong **)(*(longlong *)(texture_id + 8) + buffer_size * 8);
                                constant_buffer != (ulonglong *)0x0; constant_buffer = (ulonglong *)constant_buffer[3]) {
                                if ((material_hash == *constant_buffer) && (material_hash == constant_buffer[1])) {
                                    material_index = *(longlong *)(texture_id + 8) + buffer_size * 8;
                                    if (constant_buffer != (ulonglong *)0x0) goto material_registered;
                                    break;
                                }
                            }
                            
                            // 创建新的材质条目
                            resource_ptr = *(longlong **)(texture_id + 0x30);
                            render_state = 1;
                            total_vertices = (longlong)(int)resource_ptr[2] + 0xfU & 0xfffffffffffffff0;
                            constant_buffer = (ulonglong *)(*resource_ptr + total_vertices);
                            *(int *)(resource_ptr + 2) = (int)total_vertices + 0x20;
                            *constant_buffer = material_hash;
                            constant_buffer[1] = material_hash;
                            constant_buffer[2] = vertex_offset;
                            constant_buffer[3] = 0;
                            vertex_stream = (ulonglong *)material_hash;
                            stream_offset = material_hash;
                            
                            // 生成材质名称
                            FUN_18066c220(texture_id + 0x20, render_target, *(int32_t *)(texture_id + 0x10),
                                          *(int32_t *)(texture_id + 0x18));
                            if (render_target[0] != '\0') {
                                buffer_size = instance_data % (ulonglong)depth_stencil;
                                FUN_180285760(texture_id, depth_stencil);
                            }
                            
                            // 插入到哈希表
                            constant_buffer[3] = *(ulonglong *)(*(longlong *)(texture_id + 8) + buffer_size * 8);
                            *(ulonglong **)(*(longlong *)(texture_id + 8) + buffer_size * 8) = constant_buffer;
                            *(longlong *)(texture_id + 0x18) = *(longlong *)(texture_id + 0x18) + 1;
                            batch_flags = batch_flags;
                            material_index = *(longlong *)(texture_id + 8) + buffer_size * 8;
material_registered:
                            draw_offset = material_index;
                            constant_buffer = constant_buffer;
                            vertex_stream = constant_buffer;
                            stream_offset = draw_offset;
                            constant_buffer = vertex_stream;
                            texture_id = index_stride;
                        }
                        
                        // 更新实例数据
                        constant_buffer = (ulonglong *)(constant_buffer[2] + instance_count);
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
                            constant_buffer[1] = (ulonglong)(material_slot + 0x14);
                            *material_slot = batch_flags;
                            *(longlong *)(material_slot + 1) = material_index;
                            *(longlong *)(material_slot + 3) = shader_offset;
                            *(longlong *)(material_slot + 5) = texture_offset;
                            *(longlong *)(material_slot + 7) = buffer_offset;
                            *(longlong *)(material_slot + 9) = total_vertices;
                            *(longlong *)(material_slot + 0xb) = buffer_size;
                            *(longlong *)(material_slot + 0xd) = vertex_offset;
                            *(longlong *)(material_slot + 0xf) = index_offset;
                            *(longlong *)(material_slot + 0x12) = texture_id;
                        }
                        else {
                            // 空间不足，需要重新分配
                            shader_slot = (uint *)*constant_buffer;
                            index_stride = ((longlong)material_slot - (longlong)shader_slot) / 0x50;
                            if (index_stride == 0) {
                                index_stride = 1;
realloc_buffer:
                                resource_ptr = (longlong *)constant_buffer[3];
                                material_hash = (longlong)((int)resource_ptr[2] + 0xf) & 0xfffffffffffffff0;
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
                                    *index_data = *(uint *)((longlong)shader_slot + (-4 - (longlong)texture_slot) +
                                                        (longlong)vertex_data);
                                    index_data = index_data + 0x14;
                                    texture_handle = (void *)
                                              ((longlong)shader_slot + (-0x50 - (longlong)texture_slot) + (longlong)material_ptr);
                                    render_device = texture_handle[1];
                                    *(void *)vertex_data = *texture_handle;
                                    *(void *)(vertex_data + 2) = render_device;
                                    texture_handle = (void *)
                                              ((longlong)shader_slot + (-0x40 - (longlong)texture_slot) + (longlong)material_ptr);
                                    render_device = texture_handle[1];
                                    *(void *)(vertex_data + 4) = *texture_handle;
                                    *(void *)(vertex_data + 6) = render_device;
                                    texture_handle = (void *)
                                              ((longlong)shader_slot + (-0x30 - (longlong)texture_slot) + (longlong)material_ptr);
                                    render_device = texture_handle[1];
                                    *(void *)(vertex_data + 8) = *texture_handle;
                                    *(void *)(vertex_data + 10) = render_device;
                                    texture_handle = (void *)
                                              ((longlong)shader_slot + (-0x20 - (longlong)texture_slot) + (longlong)material_ptr);
                                    render_device = texture_handle[1];
                                    *(void *)(vertex_data + 0xc) = *texture_handle;
                                    *(void *)(vertex_data + 0xe) = render_device;
                                    *(void *)(vertex_data + 0x11) =
                                         *(void *)
                                          ((longlong)shader_slot + (-0xc - (longlong)texture_slot) + (longlong)material_ptr);
                                    batch_buffer = (uint *)((longlong)vertex_data +
                                                      (longlong)shader_slot + (0x4c - (longlong)texture_slot));
                                    vertex_data = material_ptr;
                                } while (batch_buffer != material_slot);
                            }
                            
                            // 添加新数据
                            *index_data = batch_flags;
                            *(longlong *)(index_data + 1) = material_index;
                            *(longlong *)(index_data + 3) = shader_offset;
                            *(longlong *)(index_data + 5) = texture_offset;
                            *(longlong *)(index_data + 7) = buffer_offset;
                            *(longlong *)(index_data + 9) = total_vertices;
                            *(longlong *)(index_data + 0xb) = buffer_size;
                            *(longlong *)(index_data + 0xd) = vertex_offset;
                            *(longlong *)(index_data + 0xf) = index_offset;
                            *(longlong *)(index_data + 0x12) = texture_id;
                            constant_buffer[1] = (ulonglong)(index_data + 0x14);
                            *constant_buffer = (ulonglong)texture_slot;
                            constant_buffer[2] = (ulonglong)(texture_slot + index_stride * 0x14);
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
        } while ((ulonglong)(longlong)current_batch < (ulonglong)(batch_data[8] - texture_id >> 4));
    }
    
    // 清理并退出
    FUN_1808fc050(stream_offset ^ (ulonglong)stack_guard);
}





// 函数: 材质批处理变体 - 处理材质批处理的变体逻辑
// 原始函数名: FUN_180280648
void MaterialBatchProcessor(uint64_t context_base, uint64_t render_context, longlong batch_data, longlong *render_buffer,
                          uint64_t material_type, int batch_index, uint64_t material_name, longlong *uniform_buffer,
                          longlong *vertex_buffer, uint64_t texture_data, uint64_t shader_data, ulonglong *material_hash,
                          longlong render_target, uint64_t depth_stencil, ulonglong *constant_buffer, ulonglong instance_data,
                          ulonglong buffer_offset, ulonglong material_offset)
{
  // 材质和纹理处理变量
  uint *material_ptr;
  longlong shader_offset;
  longlong texture_offset;
  longlong *resource_manager;
  uint64_t *texture_handle;
  ulonglong hash_key;
  longlong material_id;
  longlong texture_id;
  longlong vertex_offset;
  longlong index_offset;
  uint64_t render_device;
  uint *batch_buffer;
  ulonglong buffer_size;
  ulonglong total_vertices;
  uint *index_data;
  int vertex_format;
  uint *material_slot;
  uint *texture_slot;
  uint *shader_slot;
  int render_pass;
  longlong instance_count;
  uint instance_flag;
  ulonglong instance_hash;
  uint64_t stack_guard[32];
  uint64_t render_state;
  longlong batch_size;
  uint batch_flags;
  char material_target[4];
  uint64_t depth_target;
  longlong *uniform_data;
  longlong vertex_stride;
  longlong index_stride;
  ulonglong *vertex_stream;
  ulonglong stream_offset;
  ulonglong vertex_offset2;
  ulonglong index_offset2;
  
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
    texture_id = *(longlong *)(batch_data + buffer_offset);
    instance_hash = batch_flags;
    
    // 获取统一缓冲区
    if (*(code **)(*render_buffer + 0x158) == (code *)&unknown_var_2528_ptr) {
      uniform_buffer = render_buffer + 0x66;
    }
    else {
      uniform_buffer = (longlong *)(**(code **)(*render_buffer + 0x158))(render_buffer);
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
          shader_offset = *(longlong *)(*(longlong *)(texture_id + 0x1b8) + 0xa8);
          texture_offset = *(longlong *)(material_id + 8);
          hash_key = *(ulonglong *)(shader_offset + 0xc);
          buffer_size = *(ulonglong *)(shader_offset + 0x14);
          instance_data = hash_key ^ buffer_size;
          
          // 在材质哈希表中查找匹配项
          for (material_hash = *(ulonglong **)
                          (texture_offset + (instance_data % (ulonglong)*(uint *)(material_id + 0x10)) * 8);
              material_hash != (ulonglong *)0x0; material_hash = (ulonglong *)material_hash[3]) {
            if ((hash_key == *material_hash) && (buffer_size == material_hash[1])) {
              if (material_hash != (ulonglong *)0x0) {
                material_id = *(longlong *)(material_id + 0x10);
                goto material_found;
              }
              break;
            }
          }
          material_id = *(longlong *)(material_id + 0x10);
          material_hash = *(ulonglong **)(texture_offset + material_id * 8);
material_found:
          if (material_hash == *(ulonglong **)(texture_offset + material_id * 8)) {
            // 创建新的材质实例
            resource_manager = (longlong *)render_context[2];
            vertex_format = 0;
            vertex_offset2 = (longlong)((int)resource_manager[2] + 0xf) & 0xfffffffffffffff0;
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
            stream_offset = instance_data % (ulonglong)*(uint *)(texture_id + 0x10);
            for (material_hash = *(ulonglong **)(*(longlong *)(texture_id + 8) + stream_offset * 8);
                material_hash != (ulonglong *)0x0; material_hash = (ulonglong *)material_hash[3]) {
              if ((hash_key == *material_hash) && (buffer_size == material_hash[1])) {
                material_id = *(longlong *)(texture_id + 8) + stream_offset * 8;
                if (material_hash != (ulonglong *)0x0) goto material_registered;
                break;
              }
            }
            
            // 创建新的材质条目
            resource_manager = *(longlong **)(texture_id + 0x30);
            render_state = 1;
            total_vertices = (longlong)(int)resource_manager[2] + 0xfU & 0xfffffffffffffff0;
            material_hash = (ulonglong *)(*resource_manager + total_vertices);
            *(int *)(resource_manager + 2) = (int)total_vertices + 0x20;
            *material_hash = hash_key;
            material_hash[1] = buffer_size;
            material_hash[2] = vertex_offset2;
            material_hash[3] = 0;
            vertex_stream = (ulonglong *)hash_key;
            index_offset2 = buffer_size;
            
            // 生成材质名称
            FUN_18066c220(texture_id + 0x20, material_target, *(int32_t *)(texture_id + 0x10),
                          *(int32_t *)(texture_id + 0x18), 1);
            if (material_target[0] != '\0') {
              stream_offset = instance_data % (ulonglong)depth_target;
              FUN_180285760(texture_id, depth_target);
            }
            
            // 插入到哈希表
            material_hash[3] = *(ulonglong *)(*(longlong *)(texture_id + 8) + stream_offset * 8);
            *(ulonglong **)(*(longlong *)(texture_id + 8) + stream_offset * 8) = material_hash;
            *(longlong *)(texture_id + 0x18) = *(longlong *)(texture_id + 0x18) + 1;
            batch_flags = batch_flags;
            material_id = *(longlong *)(texture_id + 8) + stream_offset * 8;
material_registered:
            material_offset = material_id;
            material_hash = material_hash;
            vertex_stream = material_hash;
            index_offset2 = material_offset;
            material_hash = vertex_stream;
            texture_id = texture_id;
          }
          
          // 更新实例数据
          material_hash = (ulonglong *)(material_hash[2] + instance_count);
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
            material_hash[1] = (ulonglong)(material_slot + 0x14);
            *material_slot = batch_flags;
            *(longlong *)(material_slot + 1) = material_id;
            *(longlong *)(material_slot + 3) = shader_offset;
            *(longlong *)(material_slot + 5) = texture_offset;
            *(longlong *)(material_slot + 7) = vertex_stride;
            *(longlong *)(material_slot + 9) = total_vertices;
            *(longlong *)(material_slot + 0xb) = buffer_size;
            *(longlong *)(material_slot + 0xd) = vertex_offset2;
            *(longlong *)(material_slot + 0xf) = index_offset2;
            *(longlong *)(material_slot + 0x12) = texture_id;
          }
          else {
            // 空间不足，需要重新分配
            shader_slot = (uint *)*material_hash;
            index_stride = ((longlong)material_slot - (longlong)shader_slot) / 0x50;
            if (index_stride == 0) {
              index_stride = 1;
realloc_buffer:
              resource_manager = (longlong *)material_hash[3];
              hash_key = (longlong)((int)resource_manager[2] + 0xf) & 0xfffffffffffffff0;
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
                *index_data = *(uint *)((longlong)shader_slot + (-4 - (longlong)texture_slot) +
                                      (longlong)vertex_data);
                index_data = index_data + 0x14;
                texture_handle = (uint64_t *)
                          ((longlong)shader_slot + (-0x50 - (longlong)texture_slot) + (longlong)material_ptr);
                render_device = texture_handle[1];
                *(uint64_t *)vertex_data = *texture_handle;
                *(uint64_t *)(vertex_data + 2) = render_device;
                texture_handle = (uint64_t *)
                          ((longlong)shader_slot + (-0x40 - (longlong)texture_slot) + (longlong)material_ptr);
                render_device = texture_handle[1];
                *(uint64_t *)(vertex_data + 4) = *texture_handle;
                *(uint64_t *)(vertex_data + 6) = render_device;
                texture_handle = (uint64_t *)
                          ((longlong)shader_slot + (-0x30 - (longlong)texture_slot) + (longlong)material_ptr);
                render_device = texture_handle[1];
                *(uint64_t *)(vertex_data + 8) = *texture_handle;
                *(uint64_t *)(vertex_data + 10) = render_device;
                texture_handle = (uint64_t *)
                          ((longlong)shader_slot + (-0x20 - (longlong)texture_slot) + (longlong)material_ptr);
                render_device = texture_handle[1];
                *(uint64_t *)(vertex_data + 0xc) = *texture_handle;
                *(uint64_t *)(vertex_data + 0xe) = render_device;
                *(uint64_t *)(vertex_data + 0x11) =
                     *(uint64_t *)
                      ((longlong)shader_slot + (-0xc - (longlong)texture_slot) + (longlong)material_ptr);
                batch_buffer = (uint *)((longlong)vertex_data +
                                  (longlong)shader_slot + (0x4c - (longlong)texture_slot));
                vertex_data = material_ptr;
              } while (batch_buffer != material_slot);
            }
            
            // 添加新数据
            *index_data = batch_flags;
            *(longlong *)(index_data + 1) = material_id;
            *(longlong *)(index_data + 3) = shader_offset;
            *(longlong *)(index_data + 5) = texture_offset;
            *(longlong *)(index_data + 7) = vertex_stride;
            *(longlong *)(index_data + 9) = total_vertices;
            *(longlong *)(index_data + 0xb) = buffer_size;
            *(longlong *)(index_data + 0xd) = vertex_offset2;
            *(longlong *)(index_data + 0xf) = index_offset2;
            *(longlong *)(index_data + 0x12) = texture_id;
            material_hash[1] = (ulonglong)(index_data + 0x14);
            *material_hash = (ulonglong)texture_slot;
            material_hash[2] = (ulonglong)(texture_slot + index_stride * 0x14);
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
    if ((ulonglong)(render_buffer[8] - batch_data >> 4) <= (ulonglong)(longlong)batch_index) {
      // 清理并退出
      FUN_1808fc050(material_offset ^ (ulonglong)&stack_guard);
    }
  } while( true );
}





// 函数: 渲染系统初始化器 - 初始化渲染系统的各个组件
// 原始函数名: FUN_180280a9f
void RenderingSystemInitializer(void)
{
  ulonglong stack_parameter;
  
  // 初始化渲染系统并设置堆栈保护
  FUN_1808fc050(stack_parameter ^ (ulonglong)&stack0x00000000);
}






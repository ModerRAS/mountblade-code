#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part230.c - 核心引擎模块第230部分

// 函数: void process_render_batch(longlong render_context, longlong scene_data)
// 处理渲染批次，包括视锥体剔除、矩阵变换和渲染对象管理
void process_render_batch(longlong render_context, longlong scene_data)

{
  longlong *object_ptr;
  float near_plane;
  float far_plane;
  float left_plane;
  float right_plane;
  float top_plane;
  float bottom_plane;
  float fov_x;
  float fov_y;
  float aspect_ratio;
  float projection_matrix[16];
  float view_matrix[16];
  float model_matrix[16];
  float mvp_matrix[16];
  undefined8 temp_value1;
  undefined8 temp_value2;
  undefined4 temp_value3;
  longlong object_data;
  float *camera_position;
  uint *render_flags;
  undefined8 saved_rbx;
  longlong mesh_data;
  float *saved_rbp;
  int object_count;
  uint batch_index;
  undefined8 saved_rsi;
  longlong vertex_count;
  undefined8 saved_rdi;
  longlong stack_offset;
  float *saved_r12;
  float *saved_r13;
  undefined8 saved_r14;
  char lod_level;
  undefined8 saved_r15;
  ulonglong vertex_offset;
  longlong transform_matrix;
  float transform_x;
  float transform_y;
  float transform_z;
  float scale_x;
  float scale_y;
  float rotation_x;
  float rotation_y;
  float rotation_z;
  undefined4 xmm6_backup[4];
  float bounding_radius;
  undefined4 xmm7_backup[4];
  float frustum_planes[6][4];
  undefined4 xmm8_backup[4];
  float view_distance;
  undefined4 xmm9_backup[4];
  float lod_distance;
  undefined4 xmm10_backup[4];
  float screen_size;
  undefined4 xmm11_backup[4];
  float priority;
  undefined4 xmm12_backup[4];
  undefined4 xmm13_backup[4];
  undefined4 xmm14_backup[4];
  undefined4 xmm15_backup[4];
  float alpha_value;
  undefined4 stack_padding[4];
  char material_id;
  int instance_count;
  longlong base_address;
  longlong texture_id;
  float depth_value;
  float color_value[3];
  ulonglong index_counter;
  
  // 保存寄存器状态
  *(undefined8 *)(stack_offset + -0x20) = saved_rbx;
  *(undefined8 *)(stack_offset + -0x28) = saved_rsi;
  *(undefined8 *)(stack_offset + -0x30) = saved_rdi;
  *(undefined8 *)(stack_offset + -0x38) = saved_r14;
  *(undefined8 *)(stack_offset + -0x40) = saved_r15;
  *(undefined4 *)(stack_offset + -0x58) = xmm6_backup[0];
  *(undefined4 *)(stack_offset + -0x54) = xmm6_backup[1];
  *(undefined4 *)(stack_offset + -0x50) = xmm6_backup[2];
  *(undefined4 *)(stack_offset + -0x4c) = xmm6_backup[3];
  *(undefined4 *)(stack_offset + -0x68) = xmm7_backup[0];
  *(undefined4 *)(stack_offset + -100) = xmm7_backup[1];
  *(undefined4 *)(stack_offset + -0x60) = xmm7_backup[2];
  *(undefined4 *)(stack_offset + -0x5c) = xmm7_backup[3];
  *(undefined4 *)(stack_offset + -0x78) = xmm8_backup[0];
  *(undefined4 *)(stack_offset + -0x74) = xmm8_backup[1];
  *(undefined4 *)(stack_offset + -0x70) = xmm8_backup[2];
  *(undefined4 *)(stack_offset + -0x6c) = xmm8_backup[3];
  *(undefined4 *)(stack_offset + -0x88) = xmm9_backup[0];
  *(undefined4 *)(stack_offset + -0x84) = xmm9_backup[1];
  *(undefined4 *)(stack_offset + -0x80) = xmm9_backup[2];
  *(undefined4 *)(stack_offset + -0x7c) = xmm9_backup[3];
  *(undefined4 *)(stack_offset + -0x98) = xmm10_backup[0];
  *(undefined4 *)(stack_offset + -0x94) = xmm10_backup[1];
  *(undefined4 *)(stack_offset + -0x90) = xmm10_backup[2];
  *(undefined4 *)(stack_offset + -0x8c) = xmm10_backup[3];
  *(undefined4 *)(stack_offset + -0xa8) = xmm11_backup[0];
  *(undefined4 *)(stack_offset + -0xa4) = xmm11_backup[1];
  *(undefined4 *)(stack_offset + -0xa0) = xmm11_backup[2];
  *(undefined4 *)(stack_offset + -0x9c) = xmm11_backup[3];
  *(undefined4 *)(stack_offset + -0xd8) = xmm14_backup[0];
  *(undefined4 *)(stack_offset + -0xd4) = xmm14_backup[1];
  *(undefined4 *)(stack_offset + -0xd0) = xmm14_backup[2];
  *(undefined4 *)(stack_offset + -0xcc) = xmm14_backup[3];
  *(undefined4 *)(stack_offset + -0xb8) = xmm12_backup[0];
  *(undefined4 *)(stack_offset + -0xb4) = xmm12_backup[1];
  *(undefined4 *)(stack_offset + -0xb0) = xmm12_backup[2];
  *(undefined4 *)(stack_offset + -0xac) = xmm12_backup[3];
  *(undefined4 *)(stack_offset + -200) = xmm13_backup[0];
  *(undefined4 *)(stack_offset + -0xc4) = xmm13_backup[1];
  *(undefined4 *)(stack_offset + -0xc0) = xmm13_backup[2];
  *(undefined4 *)(stack_offset + -0xbc) = xmm13_backup[3];
  *(undefined4 *)(stack_offset + -0xe8) = xmm15_backup[0];
  *(undefined4 *)(stack_offset + -0xe4) = xmm15_backup[1];
  *(undefined4 *)(stack_offset + -0xe0) = xmm15_backup[2];
  *(undefined4 *)(stack_offset + -0xdc) = xmm15_backup[3];
  depth_value = 0;
  
  // 主渲染循环：遍历场景中的所有对象
  do {
    object_data = *(longlong *)(scene_data + depth_value);
    mesh_data = *(longlong *)(object_data + 0x20);
    vertex_count = *(longlong *)(object_data + 0x260);
    *(longlong *)(saved_rbp + -0x20) = vertex_count;
    transform_matrix = depth_value;
    
    // 检查对象是否在视锥体内
    if (mesh_data != 0) {
      if ((vertex_count != 0) && (*(char *)(*(longlong *)(vertex_count + 0x208) + 0x1b0) == '\x02')) {
        camera_position = *(float **)(object_data + 0x28);
        bounding_radius = *saved_r12;
        
        // 视锥体剔除检查
        if ((*camera_position <= bounding_radius) &&
           ((((bounding_radius < camera_position[4] || bounding_radius == camera_position[4] &&
              (bounding_radius = saved_r12[1], camera_position[1] <= bounding_radius)) &&
             (bounding_radius < camera_position[5] || bounding_radius == camera_position[5])) &&
            ((bounding_radius = saved_r12[2], camera_position[2] <= bounding_radius &&
             (bounding_radius < camera_position[6] || bounding_radius == camera_position[6])))))) {
          
          lod_level = '\0';
          
          // 遍历所有LOD级别
          if ('\0' < *(char *)(vertex_count + 0x20)) {
            do {
              mesh_data = (longlong)lod_level * 0x100 + *(longlong *)(vertex_count + 0x18);
              object_count = 0;
              
              // 处理每个LOD级别的子对象
              if (*(longlong *)(mesh_data + 0xb8) - *(longlong *)(mesh_data + 0xb0) >> 3 != 0) {
                base_address = render_context + 0x3fb8;
                vertex_count = 0;
                do {
                  object_ptr = *(longlong **)(vertex_count + *(longlong *)(mesh_data + 0xb0));
                  (**(code **)(*object_ptr + 0x208))(object_ptr, base_address);
                  vertex_count = vertex_count + 8;
                  object_count = object_count + 1;
                  render_context = base_address;
                } while ((ulonglong)(longlong)object_count <
                         (ulonglong)
                         (*(longlong *)(mesh_data + 0xb8) - *(longlong *)(mesh_data + 0xb0) >> 3));
              }
              vertex_count = *(longlong *)(saved_rbp + -0x20);
              lod_level = lod_level + '\x01';
            } while (lod_level < *(char *)(vertex_count + 0x20));
          }
          
          // 处理材质和纹理
          mesh_data = *(longlong *)(object_data + 0xf0);
          if (*(longlong *)(object_data + 0xf8) - mesh_data >> 3 != 0) {
            index_counter = 0;
            vertex_offset = index_counter;
            do {
              object_ptr = *(longlong **)(mesh_data + vertex_offset);
              object_count = (**(code **)(*object_ptr + 0x98))(object_ptr);
              
              // 检查对象是否可见
              if ((object_count == 0) && ((int)object_ptr[0x42] != 0)) {
                if (*(code **)(*object_ptr + 0x158) == (code *)&UNK_18027d980) {
                  camera_position = (float *)(object_ptr + 0x66);
                }
                else {
                  camera_position = (float *)(**(code **)(*object_ptr + 0x158))(object_ptr);
                }
                
                // 计算模型视图投影矩阵
                transform_x = *(float *)(object_data + 0x80);
                transform_y = *(float *)(object_data + 0x84);
                transform_z = *(float *)(object_data + 0x88);
                scale_x = *(float *)(object_data + 0x8c);
                scale_y = *(float *)(object_data + 0x90);
                aspect_ratio = *(float *)(object_data + 0x94);
                projection_matrix[0] = *(float *)(object_data + 0x98);
                projection_matrix[1] = *(float *)(object_data + 0x9c);
                near_plane = *(float *)(object_data + 0x70);
                far_plane = *(float *)(object_data + 0x74);
                left_plane = *(float *)(object_data + 0x78);
                right_plane = *(float *)(object_data + 0x7c);
                fov_x = camera_position[1];
                projection_matrix[0] = *camera_position;
                fov_y = camera_position[2];
                rotation_x = camera_position[5];
                rotation_y = camera_position[9];
                rotation_z = camera_position[13];
                view_matrix[0] = camera_position[4];
                
                // 计算第一行矩阵元素
                mvp_matrix[0] = fov_x * transform_x + projection_matrix[0] * near_plane + fov_y * scale_x;
                mvp_matrix[1] = fov_x * transform_y + projection_matrix[0] * far_plane + fov_y * scale_y;
                mvp_matrix[2] = fov_x * transform_z + projection_matrix[0] * left_plane + fov_y * aspect_ratio;
                
                // 计算第二行矩阵元素
                view_matrix[1] = camera_position[6];
                mvp_matrix[4] = rotation_x * transform_x + view_matrix[0] * near_plane + view_matrix[1] * scale_x;
                mvp_matrix[5] = rotation_x * transform_y + view_matrix[0] * far_plane + view_matrix[1] * scale_y;
                mvp_matrix[6] = rotation_x * transform_z + view_matrix[0] * left_plane + view_matrix[1] * aspect_ratio;
                
                // 计算第三行矩阵元素
                view_matrix[2] = camera_position[8];
                frustum_planes[0][0] = rotation_y * transform_x + view_matrix[2] * near_plane + view_matrix[3] * scale_x;
                frustum_planes[0][1] = rotation_y * transform_y + view_matrix[2] * far_plane + view_matrix[3] * scale_y;
                frustum_planes[0][2] = rotation_y * transform_z + view_matrix[2] * left_plane + view_matrix[3] * aspect_ratio;
                frustum_planes[0][3] = rotation_y * right_plane + view_matrix[2] * projection_matrix[1] + view_matrix[3] * projection_matrix[2];
                
                // 计算第四行矩阵元素
                frustum_planes[1][0] = rotation_z * transform_x + rotation_y * near_plane + view_matrix[4] * scale_x + *(float *)(object_data + 0xa0);
                frustum_planes[1][1] = rotation_z * transform_y + rotation_y * far_plane + view_matrix[4] * scale_y + *(float *)(object_data + 0xa4);
                frustum_planes[1][2] = rotation_z * transform_z + rotation_y * left_plane + view_matrix[4] * aspect_ratio + *(float *)(object_data + 0xa8);
                frustum_planes[1][3] = rotation_z * right_plane + rotation_y * projection_matrix[1] + view_matrix[4] * projection_matrix[2] + *(float *)(object_data + 0xac);
                
                // 应用裁剪空间变换
                projection_matrix[2] = saved_r13[2];
                frustum_planes[2][0] = rotation_z * transform_x + rotation_y * near_plane + view_matrix[4] * scale_x;
                frustum_planes[2][1] = rotation_z * transform_y + rotation_y * far_plane + view_matrix[4] * scale_y;
                frustum_planes[2][2] = rotation_z * transform_z + rotation_y * left_plane + view_matrix[4] * aspect_ratio;
                frustum_planes[2][3] = rotation_z * right_plane + rotation_y * projection_matrix[1] + view_matrix[4] * projection_matrix[2] + *(float *)(object_data + 0xac);
                
                // 计算最终变换矩阵
                saved_rbp[0x80] = mvp_matrix[0];
                saved_rbp[0x81] = mvp_matrix[1];
                saved_rbp[0x82] = mvp_matrix[2];
                saved_rbp[0x83] = fov_x * right_plane + projection_matrix[0] * projection_matrix[1] + fov_y * projection_matrix[2];
                fov_x = camera_position[14];
                rotation_y = *(float *)(object_data + 0xa0);
                view_matrix[2] = *(float *)(object_data + 0xa4);
                view_matrix[3] = *(float *)(object_data + 0xa8);
                color_value[0] = *(float *)(object_data + 0xac);
                saved_rbp[0x84] = mvp_matrix[4];
                saved_rbp[0x85] = mvp_matrix[5];
                saved_rbp[0x86] = mvp_matrix[6];
                saved_rbp[0x87] = rotation_x * right_plane + view_matrix[0] * projection_matrix[1] + view_matrix[1] * projection_matrix[2];
                projection_matrix[0] = saved_r12[2];
                frustum_planes[3][0] = rotation_z * transform_x + rotation_y * near_plane + view_matrix[4] * scale_x + rotation_y;
                frustum_planes[3][1] = rotation_z * transform_y + rotation_y * far_plane + view_matrix[4] * scale_y + view_matrix[2];
                frustum_planes[3][2] = rotation_z * transform_z + rotation_y * left_plane + view_matrix[4] * aspect_ratio + view_matrix[3];
                projection_matrix[2] = saved_r12[1];
                saved_rbp[0x88] = frustum_planes[0][0];
                saved_rbp[0x89] = frustum_planes[0][1];
                saved_rbp[0x8a] = frustum_planes[0][2];
                saved_rbp[0x8b] = frustum_planes[0][3];
                transform_x = transform_x - frustum_planes[3][0];
                saved_rbp[0x8c] = frustum_planes[3][0];
                saved_rbp[0x8d] = frustum_planes[3][1];
                saved_rbp[0x8e] = frustum_planes[3][2];
                saved_rbp[0x8f] = rotation_z * right_plane + rotation_y * projection_matrix[1] + view_matrix[4] * projection_matrix[2] + color_value[0];
                projection_matrix[2] = projection_matrix[2] - frustum_planes[3][1];
                projection_matrix[0] = projection_matrix[0] - frustum_planes[3][2];
                rotation_y = *saved_r13 - frustum_planes[3][0];
                saved_rbp[0x14] = transform_x * mvp_matrix[0] + projection_matrix[2] * mvp_matrix[1] + projection_matrix[0] * mvp_matrix[2];
                saved_rbp[0x15] = transform_x * mvp_matrix[4] + projection_matrix[2] * mvp_matrix[5] + projection_matrix[0] * mvp_matrix[6];
                saved_rbp[0x16] = transform_x * frustum_planes[0][0] + projection_matrix[2] * frustum_planes[0][1] + projection_matrix[0] * frustum_planes[0][2];
                saved_rbp[0x17] = transform_x * frustum_planes[0][3] + projection_matrix[2] * frustum_planes[0][3] + projection_matrix[0] * frustum_planes[0][3];
                projection_matrix[1] = saved_r13[1] - frustum_planes[3][1];
                mesh_data = *(longlong *)(object_data + 0x20);
                view_matrix[3] = saved_r13[2] - frustum_planes[3][2];
                vertex_count = object_ptr[99];
                saved_rbp[0x2e] = projection_matrix[1] * mvp_matrix[1] + rotation_y * mvp_matrix[0] + view_matrix[3] * mvp_matrix[2];
                saved_rbp[0x2f] = projection_matrix[1] * mvp_matrix[5] + rotation_y * mvp_matrix[4] + view_matrix[3] * mvp_matrix[6];
                saved_rbp[0x30] = projection_matrix[1] * frustum_planes[0][1] + rotation_y * frustum_planes[0][0] + view_matrix[3] * frustum_planes[0][2];
                saved_rbp[0x31] = projection_matrix[1] * frustum_planes[0][3] + rotation_y * frustum_planes[0][3] + view_matrix[3] * frustum_planes[0][3];
                
                // 检查是否需要创建新的渲染状态
                if ((int)vertex_count == -1) {
                  *(undefined4 *)((longlong)object_ptr + 0x314) = 0x10;
                  temp_value3 = FUN_1801b9a40(mesh_data + 0x51d0, 0x10);
                  *(undefined4 *)(object_ptr + 99) = temp_value3;
                  LOCK();
                  *(undefined4 *)(object_ptr + 0x62) = 0;
                  UNLOCK();
                  mesh_data = *(longlong *)(object_data + 0x20);
                }
                
                // 设置渲染参数
                saved_rbp[-0x15] = 0.25;
                fov_x = saved_rbp[-0x15];
                saved_rbp[-0x18] = saved_rbp[0x14];
                saved_rbp[-0x17] = saved_rbp[0x15];
                saved_rbp[-0x16] = saved_rbp[0x16];
                saved_rbp[-0x15] = fov_x;
                saved_rbp[0x3c] = saved_rbp[0x14];
                saved_rbp[0x3d] = saved_rbp[0x15];
                saved_rbp[0x3e] = saved_rbp[0x16];
                saved_rbp[0x3f] = fov_x;
                saved_rbp[0x18] = saved_rbp[0x2e];
                saved_rbp[0x19] = saved_rbp[0x2f];
                saved_rbp[0x1a] = saved_rbp[0x30];
                saved_rbp[0x1b] = (float)instance_count;
                saved_rbp[0x40] = saved_rbp[0x2e];
                saved_rbp[0x41] = saved_rbp[0x2f];
                saved_rbp[0x42] = saved_rbp[0x30];
                saved_rbp[0x43] = (float)instance_count;
                FUN_18020a7b0(object_ptr + 0x61, mesh_data + 0x3fb8, saved_rbp + 0x3c);
              }
              mesh_data = *(longlong *)(object_data + 0xf0);
              batch_index = (int)index_counter + 1;
              index_counter = (ulonglong)batch_index;
              vertex_offset = vertex_offset + 8;
            } while ((ulonglong)(longlong)(int)batch_index <
                     (ulonglong)(*(longlong *)(object_data + 0xf8) - mesh_data >> 3));
            vertex_count = *(longlong *)(saved_rbp + -0x20);
          }
        }
      }
      transform_matrix = depth_value;
      fov_x = *saved_r12;
      projection_matrix[0] = saved_r13[2];
      fov_y = saved_r12[2];
      rotation_x = saved_r12[1];
      rotation_y = *saved_r13;
      rotation_z = saved_r13[1];
      saved_rbp[-0x11] = 3.4028235e+38;
      saved_rbp[-0xd] = 3.4028235e+38;
      view_matrix[3] = fov_y + projection_matrix[0] * 0.2;
      saved_rbp[0x3a] = 0.05;
      view_matrix[0] = fov_x - rotation_y * 0.2;
      fov_y = fov_y - projection_matrix[0] * 0.2;
      fov_x = fov_x + rotation_y * 0.2;
      view_matrix[1] = rotation_x + rotation_z * 0.2;
      rotation_x = rotation_x - rotation_z * 0.2;
      projection_matrix[0] = saved_rbp[-0x11];
      rotation_y = saved_rbp[-0xd];
      saved_rbp[-0x14] = view_matrix[0];
      saved_rbp[-0x13] = rotation_x;
      saved_rbp[-0x12] = fov_y;
      saved_rbp[-0x11] = projection_matrix[0];
      saved_rbp[-0x10] = fov_x;
      saved_rbp[-0xf] = view_matrix[1];
      saved_rbp[-0xe] = view_matrix[3];
      saved_rbp[-0xd] = rotation_y;
      saved_rbp[0x36] = fov_x;
      saved_rbp[0x37] = view_matrix[1];
      saved_rbp[0x38] = view_matrix[3];
      saved_rbp[0x39] = rotation_y;
      saved_rbp[0x32] = view_matrix[0];
      saved_rbp[0x33] = rotation_x;
      saved_rbp[0x34] = fov_y;
      saved_rbp[0x35] = projection_matrix[0];
      
      // 执行深度测试和可见性检查
      if ((vertex_count != 0) &&
         (lod_level = FUN_1802edfe0(object_data, saved_rbp + 0x32, saved_rbp + 0x1c, saved_rbp + 0x78,
                                 (longlong)&stack_padding + 5), lod_level != '\0')) {
        mesh_data = (longlong)material_id;
        render_flags = (uint *)(mesh_data * 0x100 + *(longlong *)(vertex_count + 0x18));
        do {
          LOCK();
          batch_index = *render_flags;
          *render_flags = *render_flags | 1;
          UNLOCK();
        } while ((batch_index & 1) != 0);
        
        // 读取渲染状态数据
        temp_value1 = *(undefined8 *)(render_flags + 1);
        temp_value2 = *(undefined8 *)(render_flags + 3);
        fov_x = (float)render_flags[5];
        projection_matrix[0] = (float)render_flags[6];
        fov_y = (float)render_flags[7];
        rotation_x = (float)render_flags[8];
        *(undefined8 *)(saved_rbp + 0xa0) = temp_value1;
        *(undefined8 *)(saved_rbp + 0xa2) = temp_value2;
        saved_rbp[0xa4] = fov_x;
        saved_rbp[0xa5] = projection_matrix[0];
        saved_rbp[0xa6] = fov_y;
        saved_rbp[0xa7] = rotation_x;
        *render_flags = 0;
        *(undefined8 *)(saved_rbp + 0x44) = temp_value1;
        *(undefined8 *)(saved_rbp + 0x46) = temp_value2;
        saved_rbp[0x48] = fov_x;
        saved_rbp[0x49] = projection_matrix[0];
        saved_rbp[0x4a] = fov_y;
        saved_rbp[0x4b] = rotation_x;
        FUN_18063b5f0(saved_rbp + 0x5c, saved_rbp + 0x44);
        
        // 处理渲染结果
        rotation_y = saved_rbp[0x5c];
        rotation_z = saved_rbp[0x5d];
        view_matrix[0] = saved_rbp[0x5e];
        view_matrix[1] = saved_rbp[0x60];
        view_matrix[2] = saved_rbp[0x61];
        view_matrix[3] = saved_rbp[0x62];
        near_plane = *(float *)(object_data + 0x70);
        alpha_value = *(float *)(object_data + 0x74);
        transform_x = *(float *)(object_data + 0x78);
        transform_y = *(float *)(object_data + 0x7c);
        transform_z = *(float *)(object_data + 0x80);
        scale_x = *(float *)(object_data + 0x84);
        scale_y = *(float *)(object_data + 0x88);
        aspect_ratio = *(float *)(object_data + 0x8c);
        projection_matrix[0] = *(float *)(object_data + 0x90);
        projection_matrix[1] = *(float *)(object_data + 0x94);
        projection_matrix[2] = *(float *)(object_data + 0x98);
        projection_matrix[3] = *(float *)(object_data + 0x9c);
        saved_rbp[0x90] = rotation_y;
        saved_rbp[0x91] = rotation_z;
        saved_rbp[0x92] = view_matrix[0];
        saved_rbp[0x93] = saved_rbp[0x5f];
        saved_rbp[0x94] = view_matrix[1];
        saved_rbp[0x95] = view_matrix[2];
        saved_rbp[0x96] = view_matrix[3];
        saved_rbp[0x97] = saved_rbp[99];
        saved_rbp[0x98] = fov_x;
        saved_rbp[0x99] = saved_rbp[0x65];
        saved_rbp[0x9a] = saved_rbp[0x66];
        saved_rbp[0x9b] = saved_rbp[0x67];
        saved_rbp[0x9c] = fov_x;
        saved_rbp[0x9d] = projection_matrix[0];
        saved_rbp[0x9e] = fov_y;
        saved_rbp[0x9f] = rotation_x;
        rotation_x = rotation_y * near_plane + rotation_z * transform_z + view_matrix[0] * aspect_ratio;
        frustum_planes[0][3] = rotation_y * alpha_value + rotation_z * scale_x + view_matrix[0] * projection_matrix[0];
        screen_size = rotation_y * transform_x + rotation_z * scale_y + view_matrix[0] * projection_matrix[1];
        saved_rbp[-0xc] = rotation_x;
        saved_rbp[0x68] = rotation_x;
        saved_rbp[0x69] = frustum_planes[0][3];
        saved_rbp[0x6a] = screen_size;
        saved_rbp[0x6b] = rotation_y * transform_y + rotation_z * projection_matrix[2] + view_matrix[0] * projection_matrix[3];
        frustum_planes[0][0] = view_matrix[1] * near_plane + view_matrix[2] * transform_z + view_matrix[3] * aspect_ratio;
        frustum_planes[0][1] = view_matrix[1] * alpha_value + view_matrix[2] * scale_x + view_matrix[3] * projection_matrix[0];
        frustum_planes[0][2] = view_matrix[1] * transform_x + view_matrix[2] * scale_y + view_matrix[3] * projection_matrix[1];
        saved_rbp[0x6c] = frustum_planes[0][0];
        saved_rbp[0x6d] = frustum_planes[0][1];
        saved_rbp[0x6e] = frustum_planes[0][2];
        saved_rbp[0x6f] = view_matrix[1] * transform_y + view_matrix[2] * projection_matrix[2] + view_matrix[3] * projection_matrix[3];
        view_matrix[1] = fov_x * near_plane + saved_rbp[0x65] * transform_z + saved_rbp[0x66] * aspect_ratio;
        view_matrix[2] = fov_x * alpha_value + saved_rbp[0x65] * scale_x + saved_rbp[0x66] * projection_matrix[0];
        view_matrix[3] = fov_x * transform_x + saved_rbp[0x65] * scale_y + saved_rbp[0x66] * projection_matrix[1];
        saved_rbp[0x70] = view_matrix[1];
        saved_rbp[0x71] = view_matrix[2];
        saved_rbp[0x72] = view_matrix[3];
        saved_rbp[0x73] = fov_x * transform_y + saved_rbp[0x65] * projection_matrix[2] + saved_rbp[0x66] * projection_matrix[3];
        rotation_x = *(float *)(object_data + 0xac);
        rotation_y = fov_x * near_plane + projection_matrix[0] * transform_z + fov_y * aspect_ratio + *(float *)(object_data + 0xa0);
        rotation_z = fov_x * alpha_value + projection_matrix[0] * scale_x + fov_y * projection_matrix[0] + *(float *)(object_data + 0xa4);
        view_matrix[0] = fov_x * transform_x + projection_matrix[0] * scale_y + fov_y * projection_matrix[1] + *(float *)(object_data + 0xa8);
        saved_rbp[0x74] = rotation_y;
        saved_rbp[0x75] = rotation_z;
        saved_rbp[0x76] = view_matrix[0];
        saved_rbp[0x77] = fov_x * transform_y + projection_matrix[0] * projection_matrix[2] + fov_y * projection_matrix[3] + rotation_x;
        saved_rbp[-0xb] = frustum_planes[0][3];
        saved_rbp[-8] = frustum_planes[0][0];
        saved_rbp[-7] = frustum_planes[0][1];
        saved_rbp[-3] = view_matrix[2];
        saved_rbp[-4] = view_matrix[1];
        *saved_rbp = rotation_y;
        saved_rbp[2] = view_matrix[0];
        saved_rbp[-10] = screen_size;
        saved_rbp[-6] = frustum_planes[0][2];
        saved_rbp[-2] = view_matrix[3];
        saved_rbp[1] = rotation_z;
        saved_rbp[-9] = 0.0;
        saved_rbp[-5] = 0.0;
        saved_rbp[-1] = 0.0;
        saved_rbp[3] = 1.0;
        FUN_180084760(saved_rbp + -0xc, saved_rbp + 4);
        fov_x = saved_rbp[0x1d];
        projection_matrix[0] = saved_rbp[0x1e];
        fov_y = saved_rbp[0x1c];
        saved_rbp[-0x1c] =
             fov_y * saved_rbp[4] + fov_x * saved_rbp[8] + projection_matrix[0] * saved_rbp[0xc] +
             saved_rbp[0x10];
        saved_rbp[-0x1b] =
             fov_y * saved_rbp[5] + fov_x * saved_rbp[9] + projection_matrix[0] * saved_rbp[0xd] +
             saved_rbp[0x11];
        saved_rbp[-0x1a] =
             fov_y * saved_rbp[6] + fov_x * saved_rbp[10] + projection_matrix[0] * saved_rbp[0xe] +
             saved_rbp[0x12];
        saved_rbp[-0x19] =
             fov_y * saved_rbp[7] + fov_x * saved_rbp[0xb] + projection_matrix[0] * saved_rbp[0xf] +
             saved_rbp[0x13];
        FUN_1801c1140(saved_rbp + 0x68, saved_rbp + 0x20);
        object_data = mesh_data * 0x1b0 + *(longlong *)(*(longlong *)(vertex_count + 0x208) + 0x140);
        rotation_y = *(float *)(object_data + 0x30);
        rotation_z = *(float *)(object_data + 0x34);
        view_matrix[0] = *(float *)(object_data + 0x38);
        fov_x = *(float *)(object_data + 0x3c);
        view_matrix[1] = *(float *)(object_data + 0x40);
        view_matrix[2] = *(float *)(object_data + 0x44);
        view_matrix[3] = *(float *)(object_data + 0x48);
        near_plane = *(float *)(object_data + 0x4c);
        saved_rbp[0x50] = rotation_y;
        saved_rbp[0x51] = rotation_z;
        saved_rbp[0x52] = view_matrix[0];
        saved_rbp[0x53] = fov_x;
        saved_rbp[0x4c] = view_matrix[1];
        saved_rbp[0x4d] = view_matrix[2];
        saved_rbp[0x4e] = view_matrix[3];
        saved_rbp[0x4f] = near_plane;
        camera_position = (float *)FUN_1801c0fb0(saved_rbp + 0x4c, saved_rbp + 0x7c, saved_rbp + -0x1c);
        object_data = base_address;
        fov_x = saved_rbp[0x22];
        projection_matrix[0] = saved_rbp[0x20];
        fov_y = saved_rbp[0x21];
        rotation_y = rotation_y + *camera_position;
        rotation_x = camera_position[2];
        saved_rbp[-0x20] = rotation_z + camera_position[1];
        saved_rbp[-0x1f] = rotation_z;
        saved_rbp[-0x1e] = rotation_z;
        saved_rbp[-0x1d] = rotation_z;
        rotation_z = fov_x * view_matrix[3] - fov_y * near_plane;
        depth_value = CONCAT44(view_matrix[0], view_matrix[0] + rotation_x);
        rotation_z = rotation_z + rotation_z;
        alpha_value = projection_matrix[0] * near_plane - fov_x * view_matrix[2];
        rotation_x = fov_y * view_matrix[2] - projection_matrix[0] * view_matrix[3];
        alpha_value = alpha_value + alpha_value;
        rotation_x = rotation_x + rotation_x;
        projection_matrix[0] = rotation_z * view_matrix[1] + projection_matrix[0] + (rotation_x * view_matrix[3] - alpha_value * near_plane);
        view_matrix[3] = (alpha_value * view_matrix[2] - rotation_z * view_matrix[3]) + rotation_x * view_matrix[1] + fov_x;
        fov_x = (rotation_z * near_plane - rotation_x * view_matrix[2]) + alpha_value * view_matrix[1] + fov_y;
        depth_value = view_matrix[0];
        depth_value = view_matrix[0];
        if (*(int *)(vertex_count + 0x170) == -1) {
          *(undefined4 *)(vertex_count + 0x16c) = 0x10;
          temp_value3 = FUN_1801b9a40(base_address + 0x51d0, 0x10);
          *(undefined4 *)(vertex_count + 0x170) = temp_value3;
          LOCK();
          *(undefined4 *)(vertex_count + 0x168) = 0;
          UNLOCK();
        }
        saved_rbp[0x24] = rotation_y;
        saved_rbp[0x25] = saved_rbp[-0x20];
        saved_rbp[0x26] = depth_value;
        saved_rbp[0x27] = saved_rbp[0xf2];
        saved_rbp[0x54] = rotation_y;
        saved_rbp[0x55] = saved_rbp[-0x20];
        saved_rbp[0x56] = depth_value;
        saved_rbp[0x57] = saved_rbp[0xf2];
        saved_rbp[0x28] = projection_matrix[0];
        saved_rbp[0x29] = fov_x;
        saved_rbp[0x2a] = view_matrix[3];
        saved_rbp[0x2b] = (float)instance_count;
        saved_rbp[0x58] = projection_matrix[0];
        saved_rbp[0x59] = fov_x;
        saved_rbp[0x5a] = view_matrix[3];
        saved_rbp[0x5b] = (float)instance_count;
        FUN_18020a7b0(vertex_count + 0x160, object_data + 0x3fb8, saved_rbp + 0x54);
      }
    }
    depth_value = transform_matrix + 8;
    instance_count = instance_count + 1;
    scene_data = **(longlong **)(saved_rbp + 0x2c);
    render_context = base_address;
  } while ((ulonglong)(longlong)instance_count <
           (ulonglong)((*(longlong **)(saved_rbp + 0x2c))[1] - scene_data >> 3));
  
  // 清理资源（此函数不会返回）
  FUN_1808fc050(*(ulonglong *)(saved_rbp + 0xa8) ^ (ulonglong)&stack_padding);
}
#include "TaleWorlds.Native.Split.h"

// 03_rendering_part091.c - 渲染系统高级管线处理和资源管理模块
// 包含6个核心函数：渲染管线管理器、资源清理器、渲染对象处理器、材质处理器、渲染数据传输器和内存管理器
// 涵盖渲染管线优化、资源生命周期管理、内存分配和释放、状态控制等功能

// ===================================================================
// 渲染系统核心常量定义
// ===================================================================

#define RENDER_SYSTEM_MAX_TEXTURE_UNITS 16
#define RENDER_SYSTEM_MAX_SHADER_STAGES 8
#define RENDER_SYSTEM_MAX_RENDER_TARGETS 8
#define RENDER_SYSTEM_MAX_VERTEX_BUFFERS 12
#define RENDER_SYSTEM_MAX_INDEX_BUFFERS 4
#define RENDER_SYSTEM_MAX_CONSTANT_BUFFERS 16
#define RENDER_SYSTEM_PIPELINE_STATE_SIZE 0x1000
#define RENDER_SYSTEM_RESOURCE_POOL_SIZE 0x2000
#define RENDER_SYSTEM_MEMORY_ALIGNMENT 16
#define RENDER_SYSTEM_MAX_FRAME_LATENCY 3
#define RENDER_SYSTEM_RESOURCE_CLEANUP_THRESHOLD 0x1000

// 渲染管线状态常量
#define RENDER_PIPELINE_STATE_IDLE 0x00000000
#define RENDER_PIPELINE_STATE_ACTIVE 0x00000001
#define RENDER_PIPELINE_STATE_FLUSHING 0x00000002
#define RENDER_PIPELINE_STATE_RESET 0x00000004
#define RENDER_PIPELINE_STATE_ERROR 0x80000000

// 资源类型标识符
#define RESOURCE_TYPE_TEXTURE 0x00000001
#define RESOURCE_TYPE_BUFFER 0x00000002
#define RESOURCE_TYPE_SHADER 0x00000004
#define RESOURCE_TYPE_PIPELINE 0x00000008
#define RESOURCE_TYPE_TARGET 0x00000010

// 内存管理标志
#define MEMORY_FLAG_READ_ONLY 0x00000001
#define MEMORY_FLAG_WRITE_ONLY 0x00000002
#define MEMORY_FLAG_READ_WRITE 0x00000003
#define MEMORY_FLAG_PERSISTENT 0x00000004
#define MEMORY_FLAG_DYNAMIC 0x00000008

// ===================================================================
// 渲染系统函数别名定义
// ===================================================================

// 渲染管线管理器
#define RenderingSystem_PipelineManager FUN_18031d820

// 资源清理器
#define RenderingSystem_ResourceCleaner FUN_18031dfa0

// 渲染对象处理器
#define RenderingSystem_ObjectProcessor FUN_18031e050

// 材质处理器
#define RenderingSystem_MaterialProcessor FUN_18031e240

// 渲染数据传输器
#define RenderingSystem_DataTransfer FUN_18031e320

// 内存管理器
#define RenderingSystem_MemoryManager FUN_18031ed90

// 内存分配器
#define RenderingSystem_MemoryAllocator FUN_18031ef00

// ===================================================================
// 函数实现：渲染管线管理器
// ===================================================================

/**
 * 渲染管线管理器 - 负责渲染管线的初始化、配置和优化
 * 
 * @param render_context_ptr 渲染上下文指针数组
 * @param material_data 材质数据指针
 * @return void
 * 
 * 技术说明：
 * - 管理渲染管线的完整生命周期
 * - 处理材质绑定和着色器配置
 * - 优化渲染状态转换
 * - 管理渲染目标切换
 * - 处理深度和模板缓冲区配置
 */
void RenderingSystem_PipelineManager(undefined8 **render_context_ptr, code *material_data)

{
  uint texture_unit;
  float material_param1;
  float material_param2;
  int render_state;
  code *shader_program;
  undefined8 render_target;
  longlong pipeline_config;
  longlong *state_block;
  uint vertex_count;
  undefined8 texture_handle;
  longlong index_buffer;
  code **render_pass;
  undefined8 *resource_ptr;
  longlong frame_buffer;
  code **shader_stage;
  uint *vertex_data;
  longlong constant_buffer;
  undefined4 blend_state;
  undefined1 alignment_buffer[32];
  undefined8 depth_stencil_state;
  undefined4 rasterizer_state;
  undefined4 sample_mask;
  undefined4 stencil_ref;
  undefined8 viewport;
  undefined1 scissor_enable;
  undefined4 topology;
  code **input_layout;
  float viewport_scale;
  undefined4 primitive_restart;
  undefined1 padding_buffer[8];
  code **vertex_shader;
  code **pixel_shader;
  code *geometry_shader;
  undefined8 stream_output;
  undefined4 draw_indexed;
  undefined2 index_format;
  undefined2 index_offset;
  code *hull_shader;
  undefined *stream_output_buffer;
  code *domain_shader;
  code *compute_shader;
  undefined8 constant_buffer_update;
  undefined4 draw_instance_count;
  longlong *vertex_buffer;
  longlong instance_buffer;
  undefined4 vertex_offset;
  ulonglong frame_sync;
  
  // 初始化渲染管线状态
  depth_stencil_state = 0xfffffffffffffffe;
  frame_sync = _DAT_180bf00a8 ^ (ulonglong)alignment_buffer;
  render_pass = (code **)0x0;
  vertex_shader = (code *)&UNK_1809fcc58;
  pixel_shader = (code *)vertex_data;
  vertex_data[0] = vertex_data[0] & 0xffffff00;
  topology = 0x1e;
  blend_state = strcpy_s(vertex_data, 0x40, &UNK_180a1ad98);
  primitive_restart = 1;
  scissor_enable = 1;
  viewport = 0;
  sample_mask = 4;
  rasterizer_state = 0x10;
  stencil_ref = 0x21;
  depth_stencil_state._4_4_ = 4;
  
  // 配置输入装配器
  FUN_1800b0a10(blend_state, &input_layout, *(undefined4 *)(render_context_ptr[0x11] + 0xa0), &vertex_shader);
  pipeline_config = _DAT_180c86898;
  vertex_shader = (code *)&UNK_18098bcb0;
  shader_program = render_context_ptr[0x11];
  
  // 检查渲染状态有效性
  if ((*(char *)(*(longlong *)(shader_program + 0x60c48) + 0x331d) == '\0') &&
     (render_state = *(int *)(shader_program + 0x60c40), render_state != -1)) {
    
    // 获取当前渲染目标配置
    frame_buffer = *(longlong *)(*(longlong *)(shader_program + 0x60c20) + (longlong)render_state * 8);
    if (*(longlong *)(frame_buffer + 0x40) == 0) {
      frame_buffer = *(longlong *)(frame_buffer + 0x128);
    }
    else {
      frame_buffer = *(longlong *)(frame_buffer + 0x28);
    }
    
    if (frame_buffer != 0) {
      geometry_shader = (code *)0x0;
      draw_indexed = 0;
      index_format = 0;
      index_offset = 0;
      
      // 初始化资源池
      if (*(longlong *)(pipeline_config + 0x410) == 0) {
        resource_ptr = (undefined8 *)FUN_18009e9e0((longlong)render_state, &vertex_buffer, &UNK_180a03740);
        render_target = *resource_ptr;
        *resource_ptr = 0;
        input_layout = *(code ***)(pipeline_config + 0x410);
        *(undefined8 *)(pipeline_config + 0x410) = render_target;
        if (input_layout != (code **)0x0) {
          (**(code **)((longlong)*input_layout + 0x38))();
        }
        if (vertex_buffer != (code **)0x0) {
          (**(code **)(*vertex_buffer + 0x38))();
        }
      }
      
      // 配置渲染通道
      render_pass = *(code **)(pipeline_config + 0x410);
      vertex_buffer = (longlong *)0x0;
      input_layout = &pixel_shader;
      pixel_shader = (code *)&UNK_180a3c3e0;
      frame_sync = 0;
      instance_buffer = 0;
      draw_indexed = 0;
      state_block = (longlong *)0x0;
      texture_handle = CONCAT26(index_offset, CONCAT24(index_format, draw_indexed));
      compute_shader = geometry_shader;
      draw_instance_count = 2;
      constant_buffer_update = 0;
      frame_buffer = 0;
      render_target = *(undefined8 *)(render_pass + 0x15b8);
      vertex_buffer = &vertex_shader;
      frame_sync._4_4_ = (undefined4)((ulonglong)texture_handle >> 0x20);
      pixel_shader = geometry_shader;
      topology = draw_indexed;
      rasterizer_state = frame_sync._4_4_;
      vertex_data[0] = 2;
      viewport = 0;
      frame_sync = texture_handle;
      vertex_shader = render_pass;
      
      // 执行渲染管线配置
      FUN_180627ae0(alignment_buffer, &pixel_shader);
      primitive_restart = (undefined4)constant_buffer_update;
      sample_mask = constant_buffer_update._4_4_;
      stencil_ref = (undefined4)frame_buffer;
      topology = (undefined4)frame_buffer._4_4_;
      state_block = vertex_buffer;
      if (vertex_buffer != (longlong *)0x0) {
        (**(code **)(*vertex_buffer + 0x28))();
      }
      
      // 执行材质绑定
      pipeline_config = FUN_180299eb0(render_target, 0, &vertex_shader, padding_buffer);
      pipeline_config = _DAT_180c86938;
      *(undefined4 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1d88) =
           *(undefined4 *)(render_context_ptr[0x11] + 0x30b0);
      blend_state = powf(0x40000000, *(undefined4 *)(render_context_ptr[0x11] + 0x320c));
      *(undefined4 *)(*(longlong *)(pipeline_config + 0x1cd8) + 0x1d58) = blend_state;
      FUN_18029fc10(*(longlong *)(pipeline_config + 0x1cd8), *(undefined8 *)(pipeline_config + 0x1c88),
                    *(longlong *)(pipeline_config + 0x1cd8) + 0x1be0, 0x230);
      pipeline_config = *(longlong *)(_DAT_180c86938 + 0x1c88);
      state_block = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
      shader_program = *(code **)(*state_block + 0x238);
      *(undefined4 *)(pipeline_config + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
      (*shader_program)(state_block, 2, 1, pipeline_config + 0x10);
      pipeline_config = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      
      // 更新渲染状态
      if ((pipeline_config != 0) && (*(longlong *)(pipeline_config + 0x82a0) != (longlong)**(int **)(pipeline_config + 0x10))) {
        (**(code **)(**(longlong **)(pipeline_config + 0x8400) + 0x228))
                  (*(longlong **)(pipeline_config + 0x8400), *(undefined8 *)(*(int **)(pipeline_config + 0x10) + 6), 0, 0)
        ;
        *(longlong *)(pipeline_config + 0x82a0) = (longlong)**(int **)(pipeline_config + 0x10);
      }
      
      // 执行渲染操作
      depth_stencil_state = CONCAT44(depth_stencil_state._4_4_, 0xffffffff);
      FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8), 0, frame_buffer, 0x20);
      pipeline_config = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      if (input_layout != (code **)0x0) {
        *(undefined4 *)((longlong)input_layout + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
        render_pass = (code **)input_layout[4];
      }
      state_block = *(longlong **)(pipeline_config + 0x8400);
      depth_stencil_state = 0;
      vertex_buffer = render_pass;
      (**(code **)(*state_block + 0x220))(state_block, 1, 1, &vertex_buffer);
      state_block = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
      (**(code **)(*state_block + 0x148))(state_block, 1, 1, 1);
      
      // 配置第二渲染通道
      vertex_shader = (code *)&UNK_1809fcc58;
      pixel_shader = (code *)vertex_data;
      vertex_data[0] = vertex_data[0] & 0xffffff00;
      topology = 0x1f;
      blend_state = strcpy_s(vertex_data, 0x40, &UNK_180a1ae38);
      primitive_restart = 1;
      scissor_enable = 1;
      viewport = 0;
      sample_mask = 4;
      rasterizer_state = 0x10;
      stencil_ref = 0x21;
      depth_stencil_state._4_4_ = 0x10;
      FUN_1800b0a10(blend_state, &domain_shader, *(undefined4 *)(render_context_ptr[0x11] + 0xa0), &vertex_shader);
      vertex_shader = (code *)&UNK_18098bcb0;
      render_pass = (code **)FUN_18062b1e0(_DAT_180c8ed18, 0x48, 8, 3);
      shader_program = domain_shader;
      render_pass[1] = (code *)0x0;
      render_pass[2] = (code *)0x0;
      render_pass[3] = (code *)0x0;
      render_pass[4] = (code *)0x0;
      render_pass[5] = (code *)0x0;
      render_pass[6] = (code *)0x0;
      render_pass[7] = (code *)0x0;
      render_pass[8] = (code *)0x0;
      *render_pass = (code *)0x0;
      render_pass[1] = (code *)0x0;
      render_pass[2] = (code *)0x0;
      input_layout = (code **)domain_shader;
      vertex_buffer = render_pass;
      if (domain_shader != (code *)0x0) {
        (**(code **)(*(longlong *)domain_shader + 0x28))(domain_shader);
      }
      input_layout = (code **)*render_pass;
      *render_pass = shader_program;
      if (input_layout != (code **)0x0) {
        (**(code **)((longlong)*input_layout + 0x38))();
      }
      shader_stage = input_layout;
      vertex_buffer = input_layout;
      if (input_layout != (code **)0x0) {
        (**(code **)(*input_layout + 0x28))(input_layout);
      }
      vertex_buffer = (code **)render_pass[1];
      render_pass[1] = (code *)shader_stage;
      if (vertex_buffer != (code **)0x0) {
        (**(code **)(*vertex_buffer + 0x38))();
      }
      if (render_context_ptr != (code **)0x0) {
        vertex_buffer = render_context_ptr;
        (**(code **)(*render_context_ptr + 0x28))(render_context_ptr);
      }
      vertex_buffer = (code **)render_pass[2];
      render_pass[2] = (code *)render_context_ptr;
      if (vertex_buffer != (code **)0x0) {
        (**(code **)(*vertex_buffer + 0x38))();
      }
      render_pass[3] = material_data;
      vertex_data = (uint *)FUN_180145140(render_context_ptr[0x11] + 0x3018, &geometry_shader,
                                      *(undefined4 *)(render_context_ptr[0x11] + 0x3f50));
      texture_unit = vertex_data[2];
      vertex_count = vertex_data[1];
      *(uint *)((longlong)render_pass + 0x24) = *vertex_data ^ 0x80000000;
      *(uint *)(render_pass + 5) = vertex_count ^ 0x80000000;
      *(uint *)((longlong)render_pass + 0x2c) = texture_unit ^ 0x80000000;
      *(undefined4 *)(render_pass + 6) = 0x7f7fffff;
      shader_program = render_context_ptr[0x11];
      material_param1 = *(float *)(shader_program + 0x30c8);
      viewport_scale = material_param1 * *(float *)(shader_program + 0x30e4);
      material_param2 = *(float *)(shader_program + 0x30e0);
      primitive_restart = 0x7f7fffff;
      *(float *)((longlong)render_pass + 0x34) = material_param1 * *(float *)(shader_program + 0x30dc);
      *(float *)(render_pass + 7) = material_param1 * material_param2;
      *(float *)((longlong)render_pass + 0x3c) = viewport_scale;
      *(undefined4 *)(render_pass + 8) = 0x7f7fffff;
      vertex_buffer = &geometry_shader;
      hull_shader = (code *)&UNK_1802e4bc0;
      stream_output_buffer = &UNK_1800ee4c0;
      geometry_shader = FUN_18031d520;
      input_layout = &geometry_shader;
      (*(code *)&UNK_1800ee4c0)(render_pass, &geometry_shader);
      if (hull_shader != (code *)0x0) {
        (*hull_shader)(&geometry_shader, 0, 0);
      }
      if (domain_shader != (code *)0x0) {
        (**(code **)(*(longlong *)domain_shader + 0x38))();
      }
      if (state_block != (longlong *)0x0) {
        (**(code **)(*state_block + 0x38))();
      }
      vertex_buffer = &pixel_shader;
      pixel_shader = (code *)&UNK_180a3c3e0;
      if (instance_buffer != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      instance_buffer = 0;
      frame_sync = frame_sync & 0xffffffff00000000;
      pixel_shader = (code *)&UNK_18098bcb0;
      if (vertex_buffer != (longlong *)0x0) {
        (**(code **)(*vertex_buffer + 0x38))();
      }
      goto LAB_18031df5a;
    }
  }
  
  // 更新材质引用计数
  render_state = *(int *)(material_data + 0x4c);
  *(int *)(material_data + 0x4c) = render_state + 1;
  if (render_state + 1 == 0x18) {
    *(undefined4 *)(material_data + 0x5c) = 0xffffffff;
  }
LAB_18031df5a:
  if (input_layout != (code **)0x0) {
    (**(code **)(*input_layout + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(frame_sync ^ (ulonglong)alignment_buffer);
}





// 函数: void FUN_18031dfa0(longlong param_1)
void FUN_18031dfa0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3c8);
  if (lVar1 != 0) {
    FUN_18045fb80(lVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  plVar2 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = *(longlong **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = *(longlong **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031e050(longlong param_1)
void FUN_18031e050(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  int iStack_c8;
  longlong *plStack_c0;
  undefined1 uStack_b8;
  undefined4 uStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  undefined8 uStack_98;
  longlong *plStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x60) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    plStack_a8 = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_18031e20e;
    lVar4 = *plVar5;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x70);
    plStack_90 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
      iVar1 = *(int *)(param_1 + 0x60);
      puStack_88 = &UNK_1809fcc58;
      puStack_80 = auStack_70;
      auStack_70[0] = 0;
      uStack_78 = 0x10;
      strcpy_s(auStack_70,0x40,&UNK_180a1ae20);
      uStack_b0 = 1;
      uStack_b8 = 1;
      uStack_d0 = 0x10;
      uStack_d8 = 0;
      uStack_e0 = 1;
      uStack_e8 = 0x41;
      iStack_c8 = iVar1 * 7;
      plStack_c0 = plVar5;
      puVar3 = (undefined8 *)FUN_1800b0a10();
      uVar2 = *puVar3;
      *puVar3 = 0;
      plStack_a8 = *(longlong **)(param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0x1c8) = uVar2;
      if (plStack_a8 != (longlong *)0x0) {
        (**(code **)(*plStack_a8 + 0x38))();
      }
      if (plStack_a0 != (longlong *)0x0) {
        (**(code **)(*plStack_a0 + 0x38))();
      }
      puStack_88 = &UNK_18098bcb0;
      plStack_a8 = *(longlong **)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (plStack_a8 != (longlong *)0x0) {
        (**(code **)(*plStack_a8 + 0x38))();
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_18031e20e;
    lVar4 = *plVar5;
  }
  (**(code **)(lVar4 + 0x38))(plVar5);
LAB_18031e20e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_108);
}





// 函数: void FUN_18031e240(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 param_4)
void FUN_18031e240(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uVar2;
  
  pfVar1 = &fStack_18;
  FUN_18031c410(pfVar1,param_4,&fStack_38,auStack_28,pfVar1);
  uVar2 = (undefined4)((ulonglong)pfVar1 >> 0x20);
  fStack_38 = fStack_38 + *param_3;
  fStack_34 = fStack_34 + param_3[1];
  fStack_30 = fStack_30 + param_3[2];
  fStack_18 = *param_3;
  fStack_14 = param_3[1];
  fStack_10 = param_3[2];
  fStack_c = param_3[3];
  uStack_2c = 0x7f7fffff;
  FUN_180287020(param_2,&fStack_18,&fStack_38,auStack_28);
  FUN_180286e40(0x41200000,0x3fc90fdb,0x3f800000,0x3c23d70a,CONCAT44(uVar2,0x41200000));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031e320(longlong param_1,longlong param_2)
void FUN_18031e320(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_218 [32];
  undefined1 uStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined1 uStack_18c;
  undefined8 uStack_18b;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  longlong *plStack_178;
  longlong *plStack_170;
  longlong *plStack_168;
  longlong *plStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  longlong *plStack_148;
  longlong *plStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined4 uStack_118;
  undefined1 auStack_110 [136];
  ulonglong uStack_88;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_88 = _DAT_180bf00a8 ^ (ulonglong)auStack_218;
  uStack_1d8 = 0;
  plVar5 = *(longlong **)(param_1 + 0x1c8);
  if (plVar5 != (longlong *)0x0) {
    plStack_178 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStack_178 = *(longlong **)(param_2 + 0x97a0);
  *(longlong **)(param_2 + 0x97a0) = plVar5;
  if (plStack_178 != (longlong *)0x0) {
    (**(code **)(*plStack_178 + 0x38))();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x24c);
  *(undefined8 *)(param_2 + 0x97c8) = *(undefined8 *)(param_1 + 0x244);
  *(undefined8 *)(param_2 + 0x97d0) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x25c);
  *(undefined8 *)(param_2 + 0x97d8) = *(undefined8 *)(param_1 + 0x254);
  *(undefined8 *)(param_2 + 0x97e0) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x26c);
  *(undefined8 *)(param_2 + 0x97e8) = *(undefined8 *)(param_1 + 0x264);
  *(undefined8 *)(param_2 + 0x97f0) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x27c);
  *(undefined8 *)(param_2 + 0x97f8) = *(undefined8 *)(param_1 + 0x274);
  *(undefined8 *)(param_2 + 0x9800) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x28c);
  *(undefined8 *)(param_2 + 0x9808) = *(undefined8 *)(param_1 + 0x284);
  *(undefined8 *)(param_2 + 0x9810) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x29c);
  *(undefined8 *)(param_2 + 0x9818) = *(undefined8 *)(param_1 + 0x294);
  *(undefined8 *)(param_2 + 0x9820) = uVar6;
  fVar13 = *(float *)(*(longlong *)(param_1 + 0x88) + 0x4b4);
  fVar14 = *(float *)(param_2 + 0x97cc);
  fVar1 = *(float *)(param_2 + 0x97c8);
  fVar19 = *(float *)(param_2 + 0x97d0);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar13 * fVar18;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar14 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar14,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x97c8) = fVar18;
    *(float *)(param_2 + 0x97cc) = fVar14;
    *(float *)(param_2 + 0x97d0) = fVar19;
    *(undefined4 *)(param_2 + 0x97d4) = 0x7f7fffff;
  }
  fVar14 = *(float *)(param_2 + 0x97dc);
  fVar1 = *(float *)(param_2 + 0x97d8);
  fVar19 = *(float *)(param_2 + 0x97e0);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar13 * fVar18;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar14 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar14,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x97d8) = fVar18;
    *(float *)(param_2 + 0x97dc) = fVar14;
    *(float *)(param_2 + 0x97e0) = fVar19;
    *(undefined4 *)(param_2 + 0x97e4) = 0x7f7fffff;
  }
  fVar14 = *(float *)(param_2 + 0x97ec);
  fVar1 = *(float *)(param_2 + 0x97e8);
  fVar19 = *(float *)(param_2 + 0x97f0);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar13 * fVar18;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar14 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar14,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x97e8) = fVar18;
    *(float *)(param_2 + 0x97ec) = fVar14;
    *(float *)(param_2 + 0x97f0) = fVar19;
    *(undefined4 *)(param_2 + 0x97f4) = 0x7f7fffff;
  }
  fVar14 = *(float *)(param_2 + 0x97fc);
  fVar1 = *(float *)(param_2 + 0x97f8);
  fVar19 = *(float *)(param_2 + 0x9800);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar18 * fVar13;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar14 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar14,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x97f8) = fVar18;
    *(float *)(param_2 + 0x97fc) = fVar14;
    *(float *)(param_2 + 0x9800) = fVar19;
    *(undefined4 *)(param_2 + 0x9804) = 0x7f7fffff;
  }
  fVar14 = *(float *)(param_2 + 0x980c);
  fVar1 = *(float *)(param_2 + 0x9808);
  fVar19 = *(float *)(param_2 + 0x9810);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar18 * fVar13;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar14 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar14,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x9808) = fVar18;
    *(float *)(param_2 + 0x980c) = fVar14;
    *(float *)(param_2 + 0x9810) = fVar19;
    *(undefined4 *)(param_2 + 0x9814) = 0x7f7fffff;
  }
  fVar14 = *(float *)(param_2 + 0x981c);
  fVar1 = *(float *)(param_2 + 0x9818);
  fVar19 = *(float *)(param_2 + 0x9820);
  fVar18 = SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar19 * fVar19);
  if (1e-05 < fVar18) {
    fVar16 = 1.0 / fVar18;
    fVar18 = fVar18 * fVar13;
    fVar19 = fVar18 * fVar19 * fVar16;
    fVar13 = fVar18 * fVar14 * fVar16;
    fVar18 = fVar1 * fVar16 * fVar18;
    uStack_1e8 = (longlong *)CONCAT44(fVar13,fVar18);
    uStack_1e0 = CONCAT44(0x7f7fffff,fVar19);
    *(float *)(param_2 + 0x9818) = fVar18;
    *(float *)(param_2 + 0x981c) = fVar13;
    *(float *)(param_2 + 0x9820) = fVar19;
    *(undefined4 *)(param_2 + 0x9824) = 0x7f7fffff;
  }
  plVar5 = *(longlong **)(param_1 + 0x228);
  if (plVar5 != (longlong *)0x0) {
    plStack_170 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStack_170 = *(longlong **)(param_2 + 0x97b8);
  *(longlong **)(param_2 + 0x97b8) = plVar5;
  if (plStack_170 != (longlong *)0x0) {
    (**(code **)(*plStack_170 + 0x38))();
  }
  plVar5 = *(longlong **)(param_1 + 0x1d0);
  if (plVar5 != (longlong *)0x0) {
    plStack_168 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  uStack_1d8 = 1;
  plStack_168 = (longlong *)0x0;
  plStack_160 = *(longlong **)(param_2 + 0x97b0);
  *(longlong **)(param_2 + 0x97b0) = plVar5;
  if (plStack_160 != (longlong *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  uStack_1d8 = 0;
  plVar5 = *(longlong **)(param_1 + 0x1d8);
  if (plVar5 != (longlong *)0x0) {
    plStack_158 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStack_158 = *(longlong **)(param_2 + 0x97a8);
  *(longlong **)(param_2 + 0x97a8) = plVar5;
  if (plStack_158 != (longlong *)0x0) {
    (**(code **)(*plStack_158 + 0x38))();
  }
  if (*(longlong *)(param_2 + 0x97a0) == 0) {
    uStack_1e8 = *(longlong **)(param_2 + 0x97c0);
    *(undefined8 *)(param_2 + 0x97c0) = 0;
    if (uStack_1e8 != (longlong *)0x0) {
      (**(code **)(*uStack_1e8 + 0x38))();
    }
    goto LAB_18031ebd1;
  }
  puStack_1d0 = &UNK_180a3c3e0;
  uStack_1b8 = 0;
  puStack_1c8 = (undefined8 *)0x0;
  uStack_1c0 = 0;
  puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x1c,0x13);
  *(undefined1 *)puVar10 = 0;
  puStack_1c8 = puVar10;
  uVar8 = FUN_18064e990(puVar10);
  *puVar10 = 0x666669645f747270;
  puVar10[1] = 0x69626d615f657375;
  puVar10[2] = 0x757365725f746e65;
  *(undefined4 *)(puVar10 + 3) = 0x5f746c;
  uStack_1c0 = 0x1b;
  lVar12 = *(longlong *)(param_1 + 0x88);
  iVar9 = *(int *)(lVar12 + 0x4e8);
  uStack_1b8._0_4_ = uVar8;
  if (0 < iVar9) {
    if ((iVar9 != -0x1b) && (uVar8 < iVar9 + 0x1cU)) {
      uStack_1f8 = 0x13;
      puVar10 = (undefined8 *)FUN_18062b8b0(_DAT_180c8ed18,puVar10,iVar9 + 0x1cU,0x10);
      puStack_1c8 = puVar10;
      uStack_1b8._0_4_ = FUN_18064e990(puVar10);
      iVar9 = *(int *)(lVar12 + 0x4e8);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar10 + 0x1b),*(undefined8 *)(lVar12 + 0x4e0),
           (longlong)(iVar9 + 1));
  }
  uStack_1a8 = 1;
  uStack_1a4 = 1;
  uStack_19c = 0;
  uStack_194 = 0x3f80000000000000;
  uStack_18b = 1;
  uStack_18c = 0;
  uStack_180 = 0xffffffff;
  uStack_17c = 0;
  lVar12 = *(longlong *)(_DAT_180c86890 + 0x7ab8);
  dVar15 = 1.0;
  dVar17 = 1.0;
  if ((*(char *)(lVar12 + 0xd9) != '\0') &&
     (iVar9 = *(int *)(_DAT_180c86920 + 0x540), iVar9 - 1U < 4)) {
    dVar15 = *(double *)(lVar12 + -8 + (longlong)iVar9 * 0x10);
    dVar17 = *(double *)(lVar12 + (longlong)iVar9 * 0x10);
  }
  uStack_1b0 = (undefined4)(longlong)((double)*(float *)(param_2 + 0x11c20) / dVar15);
  uStack_1ac = (undefined4)(longlong)((double)*(float *)(param_2 + 0x11c24) / dVar17);
  uStack_1a0 = 0x1e;
  puStack_128 = &UNK_1809fcc28;
  puStack_120 = auStack_110;
  auStack_110[0] = 0;
  uStack_118 = 0x1b;
  puVar11 = (undefined8 *)&DAT_18098bc73;
  if (puVar10 != (undefined8 *)0x0) {
    puVar11 = puVar10;
  }
  strcpy_s(auStack_110,0x80,puVar11);
  lVar12 = *(longlong *)(param_1 + 0x230);
  if (lVar12 == 0) {
LAB_18031eaf0:
    puVar11 = (undefined8 *)FUN_1800b1230(_DAT_180c86930,&plStack_148,&puStack_128,&uStack_1b0);
    uVar6 = *puVar11;
    *puVar11 = 0;
    plStack_150 = *(longlong **)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x230) = uVar6;
    if (plStack_150 != (longlong *)0x0) {
      (**(code **)(*plStack_150 + 0x38))();
    }
    if (plStack_148 != (longlong *)0x0) {
      (**(code **)(*plStack_148 + 0x38))();
    }
  }
  else {
    cVar7 = func_0x0001800ba3b0(lVar12 + 0x108,&uStack_1b0);
    if ((cVar7 == '\0') || (puVar10 = puStack_1c8, *(int *)(lVar12 + 0x380) == 0))
    goto LAB_18031eaf0;
  }
  _Thrd_id();
  puStack_128 = &UNK_18098bcb0;
  plVar5 = *(longlong **)(param_1 + 0x230);
  if (plVar5 != (longlong *)0x0) {
    plStack_140 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStack_140 = *(longlong **)(param_2 + 0x97c0);
  *(longlong **)(param_2 + 0x97c0) = plVar5;
  if (plStack_140 != (longlong *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
  puStack_1d0 = &UNK_180a3c3e0;
  if (puVar10 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar10);
  }
  puStack_1c8 = (undefined8 *)0x0;
  uStack_1b8 = (ulonglong)uStack_1b8._4_4_ << 0x20;
  puStack_1d0 = &UNK_18098bcb0;
LAB_18031ebd1:
  fVar13 = *(float *)(param_1 + 0x210);
  fVar14 = *(float *)(param_1 + 0x214);
  uVar2 = *(undefined4 *)(param_1 + 500);
  uVar3 = *(undefined4 *)(param_1 + 0x1f8);
  iVar9 = *(int *)(param_1 + 0x1e4);
  *(undefined4 *)(param_2 + 0x9750) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(param_2 + 0x9754) = uVar2;
  *(undefined4 *)(param_2 + 0x9758) = uVar3;
  *(float *)(param_2 + 0x975c) = (float)iVar9;
  uVar2 = *(undefined4 *)(param_1 + 0x204);
  uVar3 = *(undefined4 *)(param_1 + 0x208);
  iVar9 = *(int *)(param_1 + 0x1e8);
  *(undefined4 *)(param_2 + 0x9760) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(param_2 + 0x9764) = uVar2;
  *(undefined4 *)(param_2 + 0x9768) = uVar3;
  *(float *)(param_2 + 0x976c) = (float)iVar9;
  fVar13 = 1.0 / fVar13;
  iVar9 = *(int *)(param_1 + 0x1ec);
  *(float *)(param_2 + 0x9770) = fVar13;
  *(float *)(param_2 + 0x9774) = fVar13;
  *(float *)(param_2 + 0x9778) = 1.0 / fVar14;
  *(float *)(param_2 + 0x977c) = (float)iVar9;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x4b0);
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x4ac);
  uStack_1e8 = (longlong *)CONCAT44(uVar3,uVar2);
  *(undefined4 *)(param_2 + 0x9780) = uVar2;
  *(undefined4 *)(param_2 + 0x9784) = uVar3;
  *(undefined4 *)(param_2 + 0x9788) = 0;
  *(undefined4 *)(param_2 + 0x978c) = 0;
  iVar9 = *(int *)(param_1 + 0x23c);
  iVar4 = *(int *)(param_1 + 0x240);
  uStack_1e0 = 0x3f80000000000000;
  *(float *)(param_2 + 0x9790) = (float)*(int *)(param_1 + 0x238);
  *(float *)(param_2 + 0x9794) = (float)iVar9;
  *(float *)(param_2 + 0x9798) = (float)iVar4;
  *(undefined4 *)(param_2 + 0x979c) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_218);
}





// 函数: void FUN_18031ed90(undefined8 **param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_18031ed90(undefined8 **param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  uStack_38 = 3;
  if (&puStack_50 != param_1) {
    FUN_1800588c0(&puStack_50,*param_1,param_1[1],param_4,0xfffffffffffffffe);
  }
  puVar3 = puStack_48;
  puVar2 = puStack_50;
  FUN_18031f0e0(puStack_50,puStack_48);
  (**(code **)(*param_2 + 0x10))(param_2,&DAT_18098bc73);
  uVar9 = (longlong)puVar3 - (longlong)puVar2 >> 5;
  iVar7 = 0;
  puVar1 = puVar2;
  if (uVar9 != 0) {
    piVar8 = (int *)(puVar2 + 2);
    do {
      iVar6 = *piVar8;
      if (iVar6 == 4) {
        lVar4 = 0;
        do {
          lVar5 = lVar4 + 1;
          if (*(char *)(*(longlong *)(piVar8 + -2) + lVar4) != (&DAT_180a04ee4)[lVar4])
          goto LAB_18031ee56;
          lVar4 = lVar5;
        } while (lVar5 != 5);
      }
      else {
LAB_18031ee56:
        if (0 < iVar6) {
          FUN_1806277c0(param_2,(int)param_2[2] + iVar6);
                    // WARNING: Subroutine does not return
          memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],*(undefined8 *)(piVar8 + -2),
                 (longlong)(*piVar8 + 1));
        }
        iVar6 = (int)param_2[2] + 1;
        FUN_1806277c0(param_2,iVar6);
        *(undefined2 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x20;
        *(int *)(param_2 + 2) = iVar6;
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 8;
    } while ((ulonglong)(longlong)iVar7 < uVar9);
  }
  for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
    (**(code **)*puVar1)(puVar1,0);
  }
  if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  return;
}



undefined8 *
FUN_18031ef00(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a1ae60;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






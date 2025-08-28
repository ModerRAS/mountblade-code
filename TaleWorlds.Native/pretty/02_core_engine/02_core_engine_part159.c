/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#define SystemInitializer System_Initializer2  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part159.c - 核心引擎模块第159部分 - 渲染系统与数据处理
// 
// 本文件包含11个函数，主要负责：
// - 数据结构初始化和管理
// - 资源数据处理和验证
// - 渲染上下文设置和状态管理
// - 内存管理和清理
// - 渲染系统初始化和配置
// - 角度转换计算
// - 雾效、云阴影、阳光等环境效果处理
//
// 函数列表：
// 1. initialize_data_structure - 初始化数据结构
// 2. process_resource_data - 处理资源数据
// 3. setup_render_context - 设置渲染上下文
// 4. cleanup_memory_block - 清理内存块
// 5. reset_render_state - 重置渲染状态
// 6. initialize_render_system - 初始化渲染系统
// 7. process_values_data - 处理数值数据
// 8. calculate_angle_conversion - 计算角度转换
// 9. process_fog_settings - 处理雾效设置
// 10. process_cloud_shadow_settings - 处理云阴影设置
// 11. process_sun_settings - 处理阳光设置
// 12. process_postfx_settings - 处理后处理效果设置
// 13. process_cubemap_texture_settings - 处理立方体贴图纹理设置
// 14. initialize_thread_local_storage - 初始化线程本地存储
//
// 简化说明：为提高代码可读性，函数已重命名为语义化名称，
//          并添加了中文注释说明功能。部分复杂算法进行了简化处理。

// 函数: void initialize_data_structure(void)
// 功能: 初始化数据结构，设置基本的内存布局和指针关系
// 参数: 无
// 返回: 无
// 说明: 此函数负责初始化一个基本的数据结构，设置自引用指针和清零字段
void initialize_data_structure(void)

{
  int64_t unaff_RBX;
  
  *(int64_t *)unaff_RBX = unaff_RBX;
  *(uint64_t *)(unaff_RBX + 0x10) = 0;
  *(int8_t *)(unaff_RBX + 0x18) = 0;
  *(uint64_t *)(unaff_RBX + 0x20) = 0;
  *(int64_t *)(unaff_RBX + 8) = unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_resource_data(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
//                               int64_t param_5)
// 功能: 处理和验证资源数据，进行数据比较和内存分配
// 参数: param_1 - 资源管理器指针, param_2 - 资源类型, param_3 - 源数据指针
//       param_4 - 数据标志, param_5 - 目标缓冲区
// 返回: 无
// 说明: 此函数负责资源的验证、数据比较和内存管理操作
void process_resource_data(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  uVar5 = 0;
  if (((char)param_4 != '\0') || (param_3 == param_1)) goto LAB_180142a82;
  if (*(int *)(param_3 + 0x30) != 0) {
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_180142a82;
    pbVar2 = *(byte **)(param_3 + 0x28);
    lVar4 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
    do {
      bVar1 = *pbVar2;
      uVar3 = (uint)pbVar2[lVar4];
      if (bVar1 != uVar3) break;
      pbVar2 = pbVar2 + 1;
    } while (uVar3 != 0);
    if (0 < (int)(bVar1 - uVar3)) goto LAB_180142a82;
  }
  uVar5 = 1;
LAB_180142a82:
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x60,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  CoreEngineDataTransformer(lVar4 + 0x20,param_5);
  *(uint64_t *)(lVar4 + 0x40) = &system_state_ptr;
  *(uint64_t *)(lVar4 + 0x48) = 0;
  *(int32_t *)(lVar4 + 0x50) = 0;
  *(uint64_t *)(lVar4 + 0x40) = &system_data_buffer_ptr;
  *(uint64_t *)(lVar4 + 0x58) = 0;
  *(uint64_t *)(lVar4 + 0x48) = 0;
  *(int32_t *)(lVar4 + 0x50) = 0;
                    // WARNING: Subroutine does not return
  SystemNetworkHandler(lVar4,param_3,param_1,uVar5);
}



// 函数: uint64_t * setup_render_context(uint64_t *param_1)
// 功能: 设置渲染上下文，初始化渲染所需的各项参数和状态
// 参数: param_1 - 渲染上下文结构指针
// 返回: 渲染上下文结构指针
// 说明: 此函数初始化渲染上下文的各项参数，包括函数指针、浮点常量等
uint64_t * setup_render_context(uint64_t *param_1)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  
  *param_1 = &processed_var_5912_ptr;
  *param_1 = &processed_var_5880_ptr;
  puVar1 = param_1 + 1;
  *puVar1 = &system_state_ptr;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *puVar1 = &system_data_buffer_ptr;
  param_1[4] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  plVar6 = param_1 + 9;
  *plVar6 = (int64_t)&system_state_ptr;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  *plVar6 = (int64_t)&system_data_buffer_ptr;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  plVar2 = param_1 + 0xe;
  *plVar2 = (int64_t)&system_state_ptr;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  plVar5 = param_1 + 0x26;
  *plVar5 = (int64_t)&system_state_ptr;
  param_1[0x27] = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *plVar5 = (int64_t)&system_data_buffer_ptr;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  plVar3 = param_1 + 0x2b;
  *plVar3 = (int64_t)&system_state_ptr;
  param_1[0x2c] = 0;
  *(int32_t *)(param_1 + 0x2d) = 0;
  *plVar3 = (int64_t)&system_data_buffer_ptr;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  *(int32_t *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = 0;
  plVar4 = param_1 + 0x31;
  *plVar4 = (int64_t)&system_state_ptr;
  param_1[0x32] = 0;
  *(int32_t *)(param_1 + 0x33) = 0;
  *plVar4 = (int64_t)&system_data_buffer_ptr;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  *(int32_t *)(param_1 + 0x33) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x47] = &system_state_ptr;
  param_1[0x48] = 0;
  *(int32_t *)(param_1 + 0x49) = 0;
  param_1[0x47] = &system_data_buffer_ptr;
  param_1[0x4a] = 0;
  param_1[0x48] = 0;
  *(int32_t *)(param_1 + 0x49) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = &system_state_ptr;
  param_1[0x4d] = 0;
  *(int32_t *)(param_1 + 0x4e) = 0;
  param_1[0x4c] = &system_data_buffer_ptr;
  param_1[0x4f] = 0;
  param_1[0x4d] = 0;
  *(int32_t *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 0;
  param_1[100] = &system_state_ptr;
  param_1[0x65] = 0;
  *(int32_t *)(param_1 + 0x66) = 0;
  param_1[100] = &system_data_buffer_ptr;
  param_1[0x67] = 0;
  param_1[0x65] = 0;
  *(int32_t *)(param_1 + 0x66) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x3c) = 0;
  *(int32_t *)(param_1 + 5) = 0;
  *(int32_t *)((int64_t)param_1 + 0x114) = 0;
  *(int32_t *)(param_1 + 0x23) = 0x3dcccccd;
  *(uint64_t *)((int64_t)param_1 + 0xc4) = 0x3f8000003f800000;
  *(uint64_t *)((int64_t)param_1 + 0xcc) = 0x7f7fffff3f800000;
  *(int32_t *)(param_1 + 0x16) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0xb4) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x1dc) = 0x3f000000;
  *(int32_t *)(param_1 + 0x3b) = 0x3e3851ec;
  *(int32_t *)((int64_t)param_1 + 0xe4) = 0;
  *(int32_t *)(param_1 + 0x1d) = 0;
  *(int32_t *)((int64_t)param_1 + 0xec) = 0;
  *(int32_t *)(param_1 + 0x1e) = 0x7f7fffff;
  uVar7 = FUN_180628ca0();
  SystemCore_ConfigurationHandler0(puVar1,uVar7);
  *(int32_t *)(param_1 + 7) = 0;
  *(int16_t *)((int64_t)param_1 + 0x304) = 0;
  *(int32_t *)((int64_t)param_1 + 0xbc) = 0x3f800000;
  *(int32_t *)(param_1 + 0x17) = 0x3f800000;
  *(int32_t *)(param_1 + 0x59) = 0x40a00000;
  *(int32_t *)((int64_t)param_1 + 0x2cc) = 0x40400000;
  *(int32_t *)(param_1 + 0x18) = 0x3e99999a;
  *(int32_t *)(param_1 + 0x13) = 0x3f000000;
  *(uint64_t *)((int64_t)param_1 + 0x9c) = 0x3f000000;
  *(int32_t *)((int64_t)param_1 + 0xac) = 0x3f000000;
  *(uint64_t *)((int64_t)param_1 + 0xa4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x37) = 0x3f800000;
  param_1[0x38] = 0x3f8000003f800000;
  param_1[0x39] = 0x7f7fffff3f800000;
  *(int32_t *)((int64_t)param_1 + 0x1bc) = 0x40400000;
  *(int8_t *)(param_1 + 99) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xd4) = 0x3f8000003f800000;
  *(uint64_t *)((int64_t)param_1 + 0xdc) = 0x7f7fffff3f800000;
  *(int32_t *)((int64_t)param_1 + 0xf4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x1f) = 0;
  *(int32_t *)((int64_t)param_1 + 0xfc) = 0;
  *(int32_t *)(param_1 + 0x20) = 0x7f7fffff;
  *(int32_t *)((int64_t)param_1 + 0x104) = 0x3e800000;
  *(int32_t *)(param_1 + 0x21) = 0x3e800000;
  *(int32_t *)((int64_t)param_1 + 0x10c) = 0x3ecccccd;
  *(int32_t *)(param_1 + 0x22) = 0x7f7fffff;
  *(int32_t *)((int64_t)param_1 + 0x11c) = 0x3f000000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  (**(code **)(*plVar5 + 0x10))(plVar5,&processed_var_9144_ptr);
  plVar5 = (int64_t *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,&processed_var_9144_ptr);
  plVar5 = (int64_t *)param_1[0x2f];
  param_1[0x2f] = 0;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x30) = 0;
  (**(code **)(*plVar4 + 0x10))(plVar4,&processed_var_9240_ptr);
  plVar5 = (int64_t *)param_1[0x35];
  param_1[0x35] = 0;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  (**(code **)(*plVar6 + 0x10))(plVar6,&memory_allocator_3776_ptr);
  plVar6 = (int64_t *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&memory_allocator_3760_ptr);
  plVar6 = (int64_t *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x3d) = 0x3fa66666;
  *(int32_t *)((int64_t)param_1 + 0x1ec) = 0xc0400000;
  param_1[0x3e] = 0x3f800000;
  *(int32_t *)(param_1 + 0x3f) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x1fc) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x204) = 0;
  (**(code **)(param_1[0x47] + 0x10))(param_1 + 0x47,&processed_var_9088_ptr);
  plVar6 = (int64_t *)param_1[0x4b];
  param_1[0x4b] = 0;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  (**(code **)(param_1[0x4c] + 0x10))(param_1 + 0x4c,&processed_var_9160_ptr);
  plVar6 = (int64_t *)param_1[0x50];
  param_1[0x50] = 0;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x41) = 0x40400000;
  *(int32_t *)((int64_t)param_1 + 0x20c) = 0x3f400000;
  *(int32_t *)(param_1 + 0x42) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x214) = 0x3f400000;
  *(int32_t *)(param_1 + 0x43) = 0x3f59999a;
  *(int32_t *)((int64_t)param_1 + 0x21c) = 0x3f266666;
  *(int32_t *)(param_1 + 0x44) = 0x3fe00000;
  *(int32_t *)((int64_t)param_1 + 0x224) = 0x3f0ccccd;
  *(int32_t *)(param_1 + 0x45) = 8;
  *(int32_t *)((int64_t)param_1 + 0x22c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x46) = 0x10;
  *(int32_t *)((int64_t)param_1 + 0x234) = 0x41000000;
  *(int32_t *)(param_1 + 0x53) = 0x41100000;
  *(int32_t *)(param_1 + 0x51) = 0x3f000000;
  *(int32_t *)((int64_t)param_1 + 0x28c) = 0x3f333333;
  *(int32_t *)((int64_t)param_1 + 0x294) = 0x3f800000;
  *(int32_t *)(param_1 + 0x52) = 0x3f400000;
  *(int32_t *)((int64_t)param_1 + 0x29c) = 0x3f0ccccd;
  *(int32_t *)(param_1 + 0x54) = 0x3f0ccccd;
  *(int32_t *)((int64_t)param_1 + 0x2a4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x55) = 0x7f7fffff;
  *(int32_t *)((int64_t)param_1 + 0x2ac) = 0x3dcccccd;
  *(int32_t *)(param_1 + 0x56) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x2b4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x57) = 0x3dcccccd;
  *(int32_t *)((int64_t)param_1 + 700) = 0x3f0ccccd;
  *(int32_t *)(param_1 + 0x58) = 0x3e851eb8;
  *(int32_t *)((int64_t)param_1 + 0x2c4) = 0x3efae148;
  *(int32_t *)(param_1 + 0x3a) = 0x3f000000;
  *(int32_t *)((int64_t)param_1 + 0x1d4) = 0x3f6147ae;
  *(int32_t *)(param_1 + 0x5a) = 0x447a0000;
  *(int32_t *)((int64_t)param_1 + 0x2d4) = 0x447a0000;
  *(int32_t *)(param_1 + 0x5b) = 0x44610000;
  *(uint64_t *)((int64_t)param_1 + 0x2dc) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x2e4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2c) = 0x41400000;
  *(int32_t *)((int64_t)param_1 + 0x34) = 0;
  uVar7 = FUN_180628ca0();
  SystemCore_ConfigurationHandler0(param_1 + 100,uVar7);
  *(int32_t *)(param_1 + 0x3c) = 0x3f59999a;
  *(int32_t *)((int64_t)param_1 + 0x1e4) = 0x40a00000;
  *(int32_t *)((int64_t)param_1 + 0x2ec) = 0;
  param_1[0x5e] = 0x3f800000;
  *(int32_t *)(param_1 + 0x5f) = 0x42c80000;
  *(uint64_t *)((int64_t)param_1 + 0x2fc) = 0x3f800000;
  param_1[0x61] = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  return param_1;
}



// 函数: uint64_t cleanup_memory_block(uint64_t param_1,uint64_t param_2)
// 功能: 清理内存块，根据标志决定是否释放内存
// 参数: param_1 - 内存块指针, param_2 - 清理标志
// 返回: 内存块指针
// 说明: 此函数负责重置渲染状态并根据需要释放内存
uint64_t cleanup_memory_block(uint64_t param_1,uint64_t param_2)

{
  reset_render_state();
  if ((param_2 & 1) != 0) {
    free(param_1,0x348);
  }
  return param_1;
}





// 函数: void reset_render_state(uint64_t *param_1)
// 功能: 重置渲染状态，清理各种渲染相关的指针和状态
// 参数: param_1 - 渲染状态结构指针
// 返回: 无
// 说明: 此函数负责重置渲染系统的各项状态，为下一次渲染做准备
void reset_render_state(uint64_t *param_1)

{
  *param_1 = &processed_var_5880_ptr;
  if (system_memory_ecee == '\0') {
    initialize_render_system();
  }
  param_1[100] = &system_data_buffer_ptr;
  if (param_1[0x65] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x65] = 0;
  *(int32_t *)(param_1 + 0x67) = 0;
  param_1[100] = &system_state_ptr;
  if ((int64_t *)param_1[0x50] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x50] + 0x38))();
  }
  param_1[0x4c] = &system_data_buffer_ptr;
  if (param_1[0x4d] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x4d] = 0;
  *(int32_t *)(param_1 + 0x4f) = 0;
  param_1[0x4c] = &system_state_ptr;
  if ((int64_t *)param_1[0x4b] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x4b] + 0x38))();
  }
  param_1[0x47] = &system_data_buffer_ptr;
  if (param_1[0x48] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x48] = 0;
  *(int32_t *)(param_1 + 0x4a) = 0;
  param_1[0x47] = &system_state_ptr;
  if ((int64_t *)param_1[0x36] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x36] + 0x38))();
  }
  if ((int64_t *)param_1[0x35] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x35] + 0x38))();
  }
  param_1[0x31] = &system_data_buffer_ptr;
  if (param_1[0x32] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x32] = 0;
  *(int32_t *)(param_1 + 0x34) = 0;
  param_1[0x31] = &system_state_ptr;
  if ((int64_t *)param_1[0x2f] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x2f] + 0x38))();
  }
  param_1[0x2b] = &system_data_buffer_ptr;
  if (param_1[0x2c] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x2c] = 0;
  *(int32_t *)(param_1 + 0x2e) = 0;
  param_1[0x2b] = &system_state_ptr;
  if ((int64_t *)param_1[0x2a] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x2a] + 0x38))();
  }
  param_1[0x26] = &system_data_buffer_ptr;
  if (param_1[0x27] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x27] = 0;
  *(int32_t *)(param_1 + 0x29) = 0;
  param_1[0x26] = &system_state_ptr;
  if ((int64_t *)param_1[0x12] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x12] + 0x38))();
  }
  param_1[0xe] = &system_data_buffer_ptr;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &system_state_ptr;
  if ((int64_t *)param_1[0xd] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xd] + 0x38))();
  }
  param_1[9] = &system_data_buffer_ptr;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  param_1[9] = &system_state_ptr;
  param_1[1] = &system_data_buffer_ptr;
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[2] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[1] = &system_state_ptr;
  *param_1 = &processed_var_5912_ptr;
  return;
}





// 函数: void initialize_render_system(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
// 功能: 初始化渲染系统，设置各个渲染组件的初始状态
// 参数: param_1 - 渲染系统指针, param_2-4 - 初始化参数
// 返回: 无
// 说明: 此函数负责初始化渲染系统的各个组件，包括多个渲染队列的管理
void initialize_render_system(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  plStackX_8 = *(int64_t **)(param_1 + 0x90);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (int64_t *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0,param_3,param_4,uVar1);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x68);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (int64_t *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0,param_3,param_4,uVar1);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x1a8);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (int64_t *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x1b0);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (int64_t *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(int64_t **)(param_1 + 600);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (int64_t *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x280);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_10 = &plStackX_8;
  if ((plStackX_8 != (int64_t *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
    FUN_18023b050(plStackX_8,0);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_values_data(uint64_t param_1,int64_t param_2)
// 功能: 处理数值数据，解析和验证配置中的数值信息
// 参数: param_1 - 配置管理器, param_2 - 数据源指针
// 返回: 无
// 说明: 此函数负责处理配置中的数值数据，进行数据验证和处理
void process_values_data(uint64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  char *pcVar2;
  int32_t *puVar3;
  char *pcVar4;
  int64_t lVar5;
  char *pcVar6;
  char *pcVar7;
  int8_t auStack_178 [32];
  void *puStack_158;
  int32_t *puStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_118;
  uint64_t uStack_48;
  char *pcVar8;
  
  if (param_2 == 0) {
    return;
  }
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  pcVar7 = "values";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (pcVar7 = *(char **)(param_2 + 0x30); pcVar6 = (char *)0x0, pcVar7 != (char *)0x0;
      pcVar7 = *(char **)(pcVar7 + 0x58)) {
    pcVar4 = *(char **)pcVar7;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)0x180d48d24;
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = *(char **)(pcVar7 + 0x10);
    }
    if (pcVar2 == pcVar8 + -0x180a069e7) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      pcVar6 = pcVar7;
      if (pcVar2 <= pcVar4) break;
      lVar5 = (int64_t)&memory_allocator_3816_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1801436c2;
      }
    }
  }
LAB_1801436c2:
  puStack_158 = &system_data_buffer_ptr;
  uStack_140 = 0;
  puStack_150 = (int32_t *)0x0;
  uStack_148 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_150 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  uStack_140 = CONCAT44(uStack_140._4_4_,uVar1);
  *puVar3 = 0x656d616e;
  *(int8_t *)(puVar3 + 1) = 0;
  uStack_148 = 4;
  FUN_180632650(pcVar6,&puStack_158);
  puStack_158 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}





// 函数: void calculate_angle_conversion(int64_t param_1,int64_t param_2)
// 功能: 计算角度转换，将角度值转换为弧度值
// 参数: param_1 - 源数据指针, param_2 - 目标缓冲区
// 返回: 无
// 说明: 此函数负责角度到弧度的转换计算，常用于渲染和物理计算
void calculate_angle_conversion(int64_t param_1,int64_t param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x9c);
  *(int32_t *)(param_2 + 0xc) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  AdvancedSystemController(fVar1 * 0.017453292);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_fog_settings(uint64_t param_1,int64_t param_2)
// 功能: 处理雾效设置，配置场景中的雾效参数
// 参数: param_1 - 渲染管理器, param_2 - 配置数据指针
// 返回: 无
// 说明: 此函数负责处理和设置场景中的雾效参数，包括密度、颜色等
void process_fog_settings(uint64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  char *pcVar2;
  uint64_t *puVar3;
  char *pcVar4;
  int64_t lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  void *puStack_50;
  uint64_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  pcVar6 = "fog";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  pcVar7 = pcVar7 + -0x180a06bdf;
  for (pcVar6 = *(char **)(param_2 + 0x30); pcVar8 = (char *)0x0, pcVar6 != (char *)0x0;
      pcVar6 = *(char **)(pcVar6 + 0x58)) {
    pcVar4 = *(char **)pcVar6;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)0x180d48d24;
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = *(char **)(pcVar6 + 0x10);
    }
    if (pcVar2 == pcVar7) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      pcVar8 = pcVar6;
      if (pcVar2 <= pcVar4) break;
      lVar5 = (int64_t)&processed_var_4320_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1801452ee;
      }
    }
  }
LAB_1801452ee:
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (uint64_t *)0x0;
  uStack_40 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,pcVar7,0xfffffffffffffffe);
  *(int8_t *)puVar3 = 0;
  puStack_48 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar3 = 0x736e65645f676f66;
  *(int32_t *)(puVar3 + 1) = 0x797469;
  uStack_40 = 0xb;
  FUN_180632650(pcVar8,&puStack_50);
  puStack_50 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_cloud_shadow_settings(uint64_t param_1,int64_t param_2)
// 功能: 处理云阴影设置，配置场景中的云阴影效果
// 参数: param_1 - 渲染管理器, param_2 - 配置数据指针
// 返回: 无
// 说明: 此函数负责处理和设置场景中的云阴影效果参数
void process_cloud_shadow_settings(uint64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  char *pcVar3;
  int64_t lVar4;
  char *pcVar5;
  char *pcVar6;
  uint64_t *puVar7;
  void *puStack_50;
  int32_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  pcVar5 = "cloud_shadow";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  pcVar6 = pcVar6 + -0x18098c08f;
  puVar7 = *(uint64_t **)(param_2 + 0x30);
  if (puVar7 != (uint64_t *)0x0) {
    do {
      pcVar5 = (char *)*puVar7;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x180d48d24;
        pcVar3 = (char *)0x0;
      }
      else {
        pcVar3 = (char *)puVar7[2];
      }
      if (pcVar3 == pcVar6) {
        pcVar3 = pcVar3 + (int64_t)pcVar5;
        if (pcVar3 <= pcVar5) {
LAB_180146224:
          puStack_50 = &system_data_buffer_ptr;
          uStack_38 = 0;
          puStack_48 = (int32_t *)0x0;
          uStack_40 = 0;
          puVar2 = (int32_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x14,CONCAT71((int7)((uint64_t)pcVar3 >> 8),0x13),
                                 pcVar6,0xfffffffffffffffe);
          *(int8_t *)puVar2 = 0;
          puStack_48 = puVar2;
          uVar1 = CoreEngineSystemCleanup(puVar2);
          uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
          *puVar2 = 0x756f6c63;
          puVar2[1] = 0x68735f64;
          puVar2[2] = 0x776f6461;
          puVar2[3] = 0x6f6d615f;
          puVar2[4] = 0x746e75;
          uStack_40 = 0x13;
          FUN_180632650(puVar7,&puStack_50);
          puStack_50 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar2);
        }
        lVar4 = (int64_t)&system_memory_c090 - (int64_t)pcVar5;
        while (*pcVar5 == pcVar5[lVar4]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar3 <= pcVar5) goto LAB_180146224;
        }
      }
      puVar7 = (uint64_t *)puVar7[0xb];
    } while (puVar7 != (uint64_t *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_sun_settings(uint64_t param_1,int64_t param_2)
// 功能: 处理阳光设置，配置场景中的光照参数
// 参数: param_1 - 渲染管理器, param_2 - 配置数据指针
// 返回: 无
// 说明: 此函数负责处理和设置场景中的阳光效果参数，包括方向、强度等
void process_sun_settings(uint64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  char *pcVar2;
  int32_t *puVar3;
  char *pcVar4;
  int64_t lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  void *puStack_50;
  int32_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  pcVar6 = "sun";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  pcVar7 = pcVar7 + -0x180a06dc7;
  for (pcVar6 = *(char **)(param_2 + 0x30); pcVar8 = (char *)0x0, pcVar6 != (char *)0x0;
      pcVar6 = *(char **)(pcVar6 + 0x58)) {
    pcVar4 = *(char **)pcVar6;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)0x180d48d24;
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = *(char **)(pcVar6 + 0x10);
    }
    if (pcVar2 == pcVar7) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      pcVar8 = pcVar6;
      if (pcVar2 <= pcVar4) break;
      lVar5 = (int64_t)&processed_var_4808_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180146a6e;
      }
    }
  }
LAB_180146a6e:
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (int32_t *)0x0;
  uStack_40 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,pcVar7,0xfffffffffffffffe);
  *(int8_t *)puVar3 = 0;
  puStack_48 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar3 = 0x62796b73;
  puVar3[1] = 0x725f786f;
  puVar3[2] = 0x7461746f;
  puVar3[3] = 0x6e6f69;
  uStack_40 = 0xf;
  FUN_180632650(pcVar8,&puStack_50);
  puStack_50 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_postfx_settings(uint64_t param_1,int64_t param_2)
// 功能: 处理后处理效果设置，配置场景中的后处理效果参数
// 参数: param_1 - 渲染管理器, param_2 - 配置数据指针
// 返回: 无
// 说明: 此函数负责处理和设置场景中的后处理效果参数，包括亮度、对比度等
void process_postfx_settings(uint64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  char *pcVar2;
  int32_t *puVar3;
  int64_t lVar4;
  char *pcVar5;
  char *pcVar6;
  uint64_t *puVar7;
  void *puStack_50;
  int32_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  pcVar5 = "postfx";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  pcVar6 = pcVar6 + -0x180a071e7;
  puVar7 = *(uint64_t **)(param_2 + 0x30);
  if (puVar7 != (uint64_t *)0x0) {
    do {
      pcVar5 = (char *)*puVar7;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x180d48d24;
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = (char *)puVar7[2];
      }
      if (pcVar2 == pcVar6) {
        pcVar2 = pcVar2 + (int64_t)pcVar5;
        if (pcVar2 <= pcVar5) {
POSTFX_PROCESS:
          puStack_50 = &system_data_buffer_ptr;
          uStack_38 = 0;
          puStack_48 = (int32_t *)0x0;
          uStack_40 = 0;
          puVar3 = (int32_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x15,CONCAT71((int7)((uint64_t)pcVar2 >> 8),0x13),
                                 pcVar6,0xfffffffffffffffe);
          *(int8_t *)puVar3 = 0;
          puStack_48 = puVar3;
          uVar1 = CoreEngineSystemCleanup(puVar3);
          uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
          *puVar3 = 0x67697262;  // "brig"
          puVar3[1] = 0x61707468;  // "htne"
          puVar3[2] = 0x745f7373;  // "s_st"
          puVar3[3] = 0x73657268;  // "resh"
          puVar3[4] = 0x646c6f68;  // "hold"
          *(int8_t *)(puVar3 + 5) = 0;
          uStack_40 = 0x14;
          FUN_180632650(puVar7,&puStack_50);
          puStack_50 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar3);
        }
        lVar4 = (int64_t)&processed_var_5864_ptr - (int64_t)pcVar5;
        while (*pcVar5 == pcVar5[lVar4]) {
          pcVar5 = pcVar5 + 1;
          if (pcVar2 <= pcVar5) goto POSTFX_PROCESS;
        }
      }
      puVar7 = (uint64_t *)puVar7[0xb];
    } while (puVar7 != (uint64_t *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_cubemap_texture_settings(int64_t param_1,int64_t param_2)
// 功能: 处理立方体贴图纹理设置，配置环境映射参数
// 参数: param_1 - 渲染管理器, param_2 - 配置数据指针
// 返回: 无
// 说明: 此函数负责处理和设置立方体贴图纹理，用于环境映射效果
void process_cubemap_texture_settings(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char *pcVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  char *pcVar7;
  char *pcVar8;
  int64_t *plStackX_18;
  
  pcVar7 = "cubemap_texture";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar5 = *(uint64_t **)(param_2 + 0x30); puVar5 != (uint64_t *)0x0;
      puVar5 = (uint64_t *)puVar5[0xb]) {
    pcVar7 = (char *)*puVar5;
    if (pcVar7 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar4 = (char *)puVar5[2];
    }
    if (pcVar4 == pcVar8 + -0x180a071d7) {
      pcVar4 = pcVar4 + (int64_t)pcVar7;
      if (pcVar4 <= pcVar7) goto CUBEMAP_FOUND;
      lVar6 = (int64_t)&processed_var_5848_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar6]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar4 <= pcVar7) goto CUBEMAP_FOUND;
      }
    }
  }
  puVar5 = (uint64_t *)0x0;
CUBEMAP_FOUND:
  pcVar7 = "env_map_name";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  puVar5 = (uint64_t *)puVar5[8];
  do {
    if (puVar5 == (uint64_t *)0x0) {
ENV_MAP_PROCESS:
      puVar5 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStackX_18,param_1 + 0x188,1);
      uVar1 = *puVar5;
      *puVar5 = 0;
      plVar2 = *(int64_t **)(param_1 + 0x1a8);
      *(uint64_t *)(param_1 + 0x1a8) = uVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      plVar2 = *(int64_t **)(param_1 + 0x1a8);
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
        plVar3 = *(int64_t **)(param_1 + 0x1b0);
        *(int64_t **)(param_1 + 0x1b0) = plVar2;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
      }
      return;
    }
    pcVar7 = (char *)*puVar5;
    if (pcVar7 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar7 = (char *)0x180d48d24;
    }
    else {
      pcVar4 = (char *)puVar5[2];
    }
    if (pcVar4 == pcVar8 + -0x180a071c7) {
      pcVar4 = pcVar4 + (int64_t)pcVar7;
      if (pcVar4 <= pcVar7) {
ENV_MAP_APPLY:
        lVar6 = 0x180d48d24;
        if (puVar5[1] != 0) {
          lVar6 = puVar5[1];
        }
        (**(code **)(*(int64_t *)(param_1 + 0x188) + 0x10))
                  (param_1 + 0x188,lVar6,pcVar4,puVar5,0xfffffffffffffffe);
        goto ENV_MAP_PROCESS;
      }
      lVar6 = (int64_t)&processed_var_5832_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar6]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar4 <= pcVar7) goto ENV_MAP_APPLY;
      }
    }
    puVar5 = (uint64_t *)puVar5[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void * initialize_thread_local_storage(int param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
// 功能: 初始化线程本地存储，设置线程特定的数据存储区域
// 参数: param_1 - 线程ID, param_2-4 - 初始化参数
// 返回: 线程本地存储指针
// 说明: 此函数负责初始化和管理线程本地存储，用于多线程环境下的数据隔离
void * initialize_thread_local_storage(int param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < core_system_config_config) {
    SystemInitializer(&system_memory_9288);
    if (core_system_config_config == -1) {
      core_system_config_config = &memory_allocator_3480_ptr;
      core_system_config_config = &system_memory_92a8;



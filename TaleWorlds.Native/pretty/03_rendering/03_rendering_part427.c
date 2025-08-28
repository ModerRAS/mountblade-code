#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part427.c - 渲染系统高级处理模块
// 包含13个核心函数，负责渲染系统的几何处理、内存管理、材质处理等关键功能

// 常量定义
#define RENDERING_MAX_QUEUE_SIZE 11
#define RENDERING_TEXTURE_SIZE 0xb8
#define RENDERING_GRID_SIZE 0x118
#define RENDERING_HOST_SIZE 0x78
#define RENDERING_NAME_SIZE 0xd0
#define RENDERING_MODULE_SIZE 0x10
#define RENDERING_QUEUE_ITEM_SIZE 0xd0
#define RENDERING_COORDINATE_MAX_X 0x27f
#define RENDERING_COORDINATE_MAX_Y 0x167
#define RENDERING_TILE_SIZE_X 0x50
#define RENDERING_TILE_SIZE_Y 0x60
#define RENDERING_MAX_TILE_X 7
#define RENDERING_MAX_TILE_Y 3

/**
 * 渲染系统几何处理器
 * 处理几何图形的坐标变换、裁剪和光栅化
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 几何数据指针
 * @param param_3 渲染参数1
 * @param param_4 渲染参数2
 * @param param_5 变换矩阵
 * @param param_6 顶点数量
 * @param param_7 目标缓冲区1
 * @param param_8 目标缓冲区2
 * @param param_9 目标缓冲区3
 * @param param_10 临时存储区
 * @param param_11 渲染模式标志
 * @param param_12 索引偏移
 */
void rendering_system_geometry_processor(int64_t param_1, uint64_t param_2, int32_t param_3, int32_t param_4,
                                       uint64_t param_5, uint param_6, int64_t param_7, int64_t param_8, int64_t param_9,
                                       int64_t param_10, char param_11, uint param_12)
{
  uint64_t *puVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int64_t lVar14;
  uint uVar15;
  int iVar16;
  int64_t lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int64_t lVar23;
  int aiStack_88 [2];
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)aiStack_88;
  uVar15 = 0;
  lStack_70 = 8;
  lStack_68 = param_10;
  do {
    lVar17 = *(int64_t *)(param_1 + 0x28 + (uint64_t)param_12 * 8);
    lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
    puVar1 = (uint64_t *)(lVar17 + (uint64_t)*(uint *)(lStack_70 + -4 + lVar14) * 0x10);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    if (param_11 == '\0') {
      pfVar2 = (float *)(lVar17 + (uint64_t)*(uint *)(lStack_70 + lVar14) * 0x10);
      fStack_50 = *pfVar2;
      fStack_4c = pfVar2[1];
      fStack_48 = pfVar2[2];
      fStack_44 = pfVar2[3];
      uVar3 = *(uint *)(lVar14 + 4 + lStack_70);
    }
    else {
      pfVar2 = (float *)(lVar17 + (uint64_t)*(uint *)(lVar14 + 4 + lStack_70) * 0x10);
      fStack_50 = *pfVar2;
      fStack_4c = pfVar2[1];
      fStack_48 = pfVar2[2];
      fStack_44 = pfVar2[3];
      uVar3 = *(uint *)(lStack_70 + lVar14);
    }
    uStack_60._4_4_ = (float)((uint64_t)uVar5 >> 0x20);
    puVar1 = (uint64_t *)(lVar17 + (uint64_t)uVar3 * 0x10);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uStack_60._0_4_ = (float)uVar5;
    iVar13 = (int)(uStack_60._4_4_ + 0.5);
    iVar18 = (int)((float)uStack_60 + 0.5);
    iVar20 = (int)(fStack_4c + 0.5);
    uStack_40._4_4_ = (float)((uint64_t)uVar7 >> 0x20);
    iVar16 = (int)(fStack_50 + 0.5);
    uStack_40._0_4_ = (float)uVar7;
    iVar19 = (int)(uStack_40._4_4_ + 0.5);
    iVar11 = (int)((float)uStack_40 + 0.5);
    iVar22 = (iVar19 - iVar13) * (iVar16 - iVar18) - (iVar13 - iVar20) * (iVar18 - iVar11);
    iVar9 = iVar16;
    if (iVar18 < iVar16) {
      iVar9 = iVar18;
    }
    iVar4 = iVar11;
    if (iVar9 < iVar11) {
      iVar4 = iVar9;
    }
    aiStack_88[0] = 0;
    if (0 < iVar4) {
      aiStack_88[0] = iVar4;
    }
    if (iVar16 < iVar18) {
      iVar16 = iVar18;
    }
    if (iVar11 < iVar16) {
      iVar11 = iVar16;
    }
    iVar16 = RENDERING_COORDINATE_MAX_X;
    if (iVar11 < RENDERING_COORDINATE_MAX_X) {
      iVar16 = iVar11;
    }
    iVar9 = iVar20;
    if (iVar13 < iVar20) {
      iVar9 = iVar13;
    }
    iVar11 = iVar19;
    if (iVar9 < iVar19) {
      iVar11 = iVar9;
    }
    iVar9 = 0;
    if (0 < iVar11) {
      iVar9 = iVar11;
    }
    lStack_80 = CONCAT44(lStack_80._4_4_,iVar9);
    if (iVar20 < iVar13) {
      iVar20 = iVar13;
    }
    if (iVar19 < iVar20) {
      iVar19 = iVar20;
    }
    iVar11 = RENDERING_COORDINATE_MAX_Y;
    if (iVar19 < RENDERING_COORDINATE_MAX_Y) {
      iVar11 = iVar19;
    }
    if ((*(byte *)(param_1 + 0x14) & 4) == 0) {
      if (0 < iVar22) goto LAB_18049ce60;
    }
    else if (iVar22 != 0) {
LAB_18049ce60:
      if ((((aiStack_88[0] <= iVar16) && (iVar9 <= iVar11)) &&
          (uStack_58._4_4_ = (float)((uint64_t)uVar6 >> 0x20), 0.0 < uStack_58._4_4_)) &&
         ((0.0 < fStack_44 &&
          (uStack_38._4_4_ = (float)((uint64_t)uVar8 >> 0x20), 0.0 < uStack_38._4_4_)))) {
        iVar19 = aiStack_88[0] / RENDERING_TILE_SIZE_X;
        aiStack_88[0] = 0;
        if (0 < iVar19) {
          aiStack_88[0] = iVar19;
        }
        iVar19 = 0;
        if (0 < iVar9 / RENDERING_TILE_SIZE_Y) {
          iVar19 = iVar9 / RENDERING_TILE_SIZE_Y;
        }
        iVar9 = RENDERING_MAX_TILE_X;
        if (iVar16 / RENDERING_TILE_SIZE_X < RENDERING_MAX_TILE_X) {
          iVar9 = iVar16 / RENDERING_TILE_SIZE_X;
        }
        lVar17 = (int64_t)iVar19;
        lStack_80 = (int64_t)iVar9;
        iVar16 = RENDERING_MAX_TILE_Y;
        if (iVar11 / RENDERING_TILE_SIZE_Y < RENDERING_MAX_TILE_Y) {
          iVar16 = iVar11 / RENDERING_TILE_SIZE_Y;
        }
        if (lVar17 <= iVar16) {
          lVar23 = (int64_t)aiStack_88[0];
          iVar19 = iVar19 << 0x11;
          lVar14 = (iVar16 - lVar17) + 1;
          piVar21 = (int *)(param_10 + (lVar17 * 8 + lVar23) * 4);
          do {
            if (lVar23 <= lStack_80) {
              iVar16 = aiStack_88[0] << 0xe;
              lVar17 = (lStack_80 - lVar23) + 1;
              piVar12 = piVar21;
              do {
                iVar9 = iVar19 + iVar16;
                iVar16 = iVar16 + 0x4000;
                lVar10 = (int64_t)(iVar9 + *piVar12);
                *(uint *)(param_7 + lVar10 * 4) = uVar15;
                *(int32_t *)(param_8 + lVar10 * 4) = param_3;
                *(int32_t *)(param_9 + lVar10 * 4) = param_4;
                *piVar12 = *piVar12 + 1;
                lVar17 = lVar17 + -1;
                piVar12 = piVar12 + 1;
              } while (lVar17 != 0);
            }
            iVar19 = iVar19 + 0x20000;
            piVar21 = piVar21 + 8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
    }
    uVar15 = uVar15 + 1;
    lStack_70 = lStack_70 + 0x18;
    if (param_6 < uVar15) {
      lStack_78 = param_1;
      uStack_60 = uVar5;
      uStack_58 = uVar6;
      uStack_40 = uVar7;
      uStack_38 = uVar8;
                    // WARNING: Subroutine does not return
      CoreSystemConfigManager(uStack_30 ^ (uint64_t)aiStack_88);
    }
  } while( true );
}

/**
 * 渲染系统主机接口初始化器
 * 初始化主机接口通信和协议处理
 * 
 * @param param_1 接口配置指针
 * @param param_2 通信参数
 */
void rendering_system_host_interface_initializer(uint64_t param_1, uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *puStack_40;
  uint64_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, RENDERING_HOST_SIZE, 8, 3, 0xfffffffffffffffe);
  puVar3 = puVar2;
  FUN_1803456e0(puVar2, param_2, param_1);
  *puVar3 = &unknown_var_2720_ptr;
  *(int32_t *)(puVar3 + 0xe) = 0x1f;
  puStack_40 = &system_data_buffer_ptr;
  uStack_28 = 0;
  puStack_38 = (uint64_t *)0x0;
  uStack_30 = 0;
  puVar3 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, RENDERING_MODULE_SIZE, 0x13);
  *(int8_t *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_, uVar1);
  *puVar3 = 0x20726574736c6f48;  // "Hostler "
  *(int32_t *)(puVar3 + 1) = 0x65646e49;  // "Inde"
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x78;  // "x"
  uStack_30 = 0xd;
  FUN_1803460a0(puVar2, &puStack_40, puVar2 + 0xe, 4);
  puStack_40 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar3);
}

/**
 * 渲染系统模块加载器
 * 负责加载和初始化渲染模块
 * 
 * @param param_1 模块句柄
 */
void rendering_system_module_loader(uint64_t param_1)
{
  int8_t auStack_198 [32];
  int32_t uStack_178;
  uint64_t uStack_170;
  void **appuStack_168 [2];
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  int8_t auStack_140 [136];
  void *apuStack_b8 [19];
  int32_t uStack_20;
  uint64_t uStack_18;
  
  uStack_170 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  uStack_178 = 0;
  puStack_158 = &unknown_var_3432_ptr;
  puStack_150 = auStack_140;
  auStack_140[0] = 0;
  uStack_148 = 0xd;
  strcpy_s(auStack_140, 0x80, &system_memory_ca38);
  FUN_180049b30(apuStack_b8, &puStack_158);
  uStack_20 = 4;
  uStack_178 = 1;
  FUN_1803617c0(param_1, appuStack_168, apuStack_b8);
  uStack_178 = 0;
  appuStack_168[0] = apuStack_b8;
  apuStack_b8[0] = &system_state_ptr;
  puStack_158 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(uStack_18 ^ (uint64_t)auStack_198);
}

/**
 * 渲染系统内存管理器
 * 管理渲染系统的内存分配和释放
 * 
 * @param param_1 内存管理器指针
 * @param param_2 分配标志
 * @param param_3 内存参数1
 * @param param_4 内存参数2
 * @return 内存管理器指针
 */
uint64_t *rendering_system_memory_manager(uint64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_2720_ptr;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1, RENDERING_HOST_SIZE, param_3, param_4, uVar1);
  }
  return param_1;
}

/**
 * 渲染系统名称管理器
 * 管理渲染对象的名称和标识符
 * 
 * @param param_1 名称管理器指针
 * @param param_2 名称数据
 */
void rendering_system_name_manager(uint64_t param_1, uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *puStack_a0;
  uint64_t *puStack_98;
  int32_t uStack_90;
  uint64_t uStack_88;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, RENDERING_GRID_SIZE, 8, 3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar2;
  FUN_1803456e0(puVar2, param_2, param_1);
  *puVar4 = &unknown_var_4296_ptr;
  puVar4[0xe] = &system_state_ptr;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  puVar4[0xe] = &system_data_buffer_ptr;
  puVar4[0x11] = 0;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  puVar2[0x12] = &system_state_ptr;
  puVar2[0x13] = 0;
  *(int32_t *)(puVar2 + 0x14) = 0;
  puVar2[0x12] = &system_data_buffer_ptr;
  puVar2[0x15] = 0;
  puVar2[0x13] = 0;
  *(int32_t *)(puVar2 + 0x14) = 0;
  puVar4 = puVar2 + 0x16;
  *puVar4 = &system_state_ptr;
  puVar2[0x17] = 0;
  *(int32_t *)(puVar2 + 0x18) = 0;
  *puVar4 = &system_data_buffer_ptr;
  puVar2[0x19] = 0;
  puVar2[0x17] = 0;
  *(int32_t *)(puVar2 + 0x18) = 0;
  puVar2[0x1a] = &system_state_ptr;
  puVar2[0x1b] = 0;
  *(int32_t *)(puVar2 + 0x1c) = 0;
  puVar2[0x1a] = &system_data_buffer_ptr;
  puVar2[0x1d] = 0;
  puVar2[0x1b] = 0;
  *(int32_t *)(puVar2 + 0x1c) = 0;
  puVar2[0x1e] = &system_state_ptr;
  puVar2[0x1f] = 0;
  *(int32_t *)(puVar2 + 0x20) = 0;
  puVar2[0x1e] = &system_data_buffer_ptr;
  puVar2[0x21] = 0;
  puVar2[0x1f] = 0;
  *(int32_t *)(puVar2 + 0x20) = 0;
  puStack_a0 = &system_data_buffer_ptr;
  uStack_88 = 0;
  puStack_98 = (uint64_t *)0x0;
  uStack_90 = 0;
  puVar3 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, RENDERING_MODULE_SIZE, 0x13);
  *(int8_t *)puVar3 = 0;
  puStack_98 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_88 = CONCAT44(uStack_88._4_4_, uVar1);
  *puVar3 = 0x656d614e6873654d;  // "MeshName "
  *(int8_t *)(puVar3 + 1) = 0;
  uStack_90 = 8;
  FUN_1803460a0(puVar2, &puStack_a0, puVar4, 0, uVar5);
  puStack_a0 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar3);
}

/**
 * 渲染系统网格处理器
 * 处理3D网格的渲染和变换
 * 
 * @param param_1 网格处理器指针
 * @param param_2 网格数据
 */
void rendering_system_grid_handler(uint64_t param_1, uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *puStack_40;
  uint64_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, RENDERING_HOST_SIZE, 8, 3, 0xfffffffffffffffe);
  puVar3 = puVar2;
  FUN_1803456e0(puVar2, param_2, param_1);
  *puVar3 = &unknown_var_4704_ptr;
  puStack_40 = &system_data_buffer_ptr;
  uStack_28 = 0;
  puStack_38 = (uint64_t *)0x0;
  uStack_30 = 0;
  puVar3 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, RENDERING_MODULE_SIZE, 0x13);
  *(int8_t *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_, uVar1);
  *puVar3 = 0x20646c6975626552;  // "Rubuild "
  *(int32_t *)(puVar3 + 1) = 0x64697247;  // "Grid"
  *(int8_t *)((int64_t)puVar3 + 0xc) = 0;
  uStack_30 = 0xc;
  FUN_1803460a0(puVar2, &puStack_40, 0, 0xb);
  puStack_40 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar3);
}

/**
 * 渲染系统纹理分配器
 * 分配和管理纹理内存
 * 
 * @param param_1 纹理管理器指针
 * @param param_2 纹理参数
 * @return 纹理管理器指针
 */
uint64_t *rendering_system_texture_allocator(uint64_t param_1, int32_t param_2)
{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, RENDERING_TEXTURE_SIZE, 8, 0x1a, 0xfffffffffffffffe);
  FUN_1802565b0(puVar1, param_1, param_2);
  *puVar1 = &unknown_var_2496_ptr;
  puVar1[0x16] = 0;
  return puVar1;
}

/**
 * 渲染系统纹理释放器
 * 释放纹理内存和资源
 * 
 * @param param_1 纹理指针
 * @param param_2 释放标志
 * @param param_3 释放参数1
 * @param param_4 释放参数2
 * @return 释放状态
 */
uint64_t rendering_system_texture_deallocator(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1802566c0();
  if ((param_2 & 1) != 0) {
    free(param_1, RENDERING_TEXTURE_SIZE, param_3, param_4, uVar1);
  }
  return param_1;
}

/**
 * 渲染系统着色器管理器
 * 管理着色器的编译、链接和使用
 * 
 * @param param_1 着色器管理器指针
 */
void rendering_system_shader_manager(uint64_t *param_1)
{
  void *puVar1;
  uint uVar2;
  uint uVar3;
  int8_t auStack_b8 [32];
  code *pcStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  uint uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  void *puStack_50;
  void *puStack_48;
  int iStack_40;
  uint8_t auStack_38 [16];
  uint64_t uStack_28;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  uStack_68 = 0;
  *param_1 = &unknown_var_4416_ptr;
  *param_1 = &unknown_var_2120_ptr;
  pcStack_98 = FUN_180627b90;
  puStack_58 = param_1;
  DataStructureManager(param_1 + 2, 0x20, 0x20, FUN_180627850);
  param_1[0x83] = 0;
  *(int32_t *)(param_1 + 0x82) = 0xffffffff;
  FUN_18049dc80();
  (**(code **)(render_system_memory + 0x10))(&system_memory_24d0, &system_memory_d128);
  *(int32_t *)(param_1 + 1) = 0;
  puStack_50 = &system_config_ptr;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  iStack_40 = 6;
  strcpy_s(auStack_38, 0x10, &unknown_var_2588_ptr);
  uStack_68 = 1;
  puStack_88 = &system_data_buffer_ptr;
  uStack_70 = 0;
  puStack_80 = (int8_t *)0x0;
  uStack_78 = 0;
  FUN_1806277c0(&puStack_88, iStack_40);
  if (0 < iStack_40) {
    puVar1 = &system_buffer_ptr;
    if (puStack_48 != (void *)0x0) {
      puVar1 = puStack_48;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_80, puVar1, (int64_t)(iStack_40 + 1));
  }
  if (puStack_48 != (void *)0x0) {
    uStack_78 = 0;
    if (puStack_80 != (int8_t *)0x0) {
      *puStack_80 = 0;
    }
  }
  uVar3 = uStack_78;
  uStack_68 = 0;
  puStack_50 = &system_state_ptr;
  uVar2 = uStack_78 + 8;
  FUN_1806277c0(&puStack_88, uVar2);
  *(uint64_t *)(puStack_80 + uStack_78) = 0x2f73656c75646f4d;  // "Modules/"
  *(int8_t *)((int64_t)(puStack_80 + uStack_78) + 8) = 0;
  uStack_78 = uVar2;
  if (0 < render_system_memory) {
    FUN_1806277c0(&puStack_88, uVar2 + render_system_memory);
                    // WARNING: Subroutine does not return
    memcpy(puStack_80 + uStack_78, render_system_memory, (int64_t)(render_system_memory + 1));
  }
  uVar3 = uVar3 + 9;
  FUN_1806277c0(&puStack_88, (uint64_t)uVar3);
  *(int16_t *)(puStack_80 + uStack_78) = 0x2f;
  uStack_78 = uVar3;
  if (puStack_80 != (int8_t *)0x0) {
    FUN_1806277c0(&system_memory_24f0, uVar3);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(render_system_memory, puStack_80, uVar3);
  }
  render_system_memory = uVar3;
  if (render_system_memory != 0) {
    *(int8_t *)((uint64_t)uVar3 + render_system_memory) = 0;
  }
  render_system_memory = uStack_70._4_4_;
  *(int32_t *)(param_1 + 0x84) = 0;
  puStack_88 = &system_data_buffer_ptr;
  if (puStack_80 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  puStack_80 = (int8_t *)0x0;
  uStack_70 = (uint64_t)uStack_70._4_4_ << 0x20;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(uStack_28 ^ (uint64_t)auStack_b8, 0);
}

/**
 * 渲染系统材质处理器
 * 处理材质的加载、编译和应用
 * 
 * @param param_1 材质处理器指针
 * @param param_2 材质数据指针
 * @param param_3 处理参数1
 * @param param_4 处理参数2
 */
void rendering_system_material_processor(uint64_t param_1, int64_t *param_2, uint64_t param_3, uint64_t param_4)
{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_60;
  uint64_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  void *puStack_40;
  uint64_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_180057110(param_2);
  FUN_180052200(system_main_module_state, param_2);
  if ((param_2[1] - *param_2 & 0xffffffffffffffe0U) == 0) {
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar2 = (int32_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, RENDERING_MODULE_SIZE, 0x13, param_4, uVar4);
    *(int8_t *)puVar2 = 0;
    puStack_58 = (uint64_t *)puVar2;
    uVar1 = FUN_18064e990(puVar2);
    *puVar2 = 0x6974614e;  // "Nati"
    *(int16_t *)(puVar2 + 1) = 0x6576;  // "ve"
    *(int8_t *)((int64_t)puVar2 + 6) = 0;
    uStack_50 = 6;
    uStack_48._0_4_ = uVar1;
    FUN_180066df0(param_2, &puStack_60);
    puStack_60 = &system_data_buffer_ptr;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (uint64_t)uStack_48._4_4_ << 0x20;
    puStack_60 = &system_state_ptr;
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar3 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, RENDERING_MODULE_SIZE, 0x13);
    *(int8_t *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    *puVar3 = 0x616c7069746c754d;  // "Multiplat "
    *(int32_t *)(puVar3 + 1) = 0x726579;  // "yer"
    uStack_30 = 0xb;
    uStack_28._0_4_ = uVar1;
    FUN_180066df0(param_2, &puStack_40);
    puStack_40 = &system_data_buffer_ptr;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_38 = (uint64_t *)0x0;
    uStack_28 = (uint64_t)uStack_28._4_4_ << 0x20;
    puStack_40 = &system_state_ptr;
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar3 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, RENDERING_MODULE_SIZE, 0x13);
    *(int8_t *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    *puVar3 = 0x43786f42646e6153;  // "SandBoxC"
    *(int32_t *)(puVar3 + 1) = 0x65726f;  // "ore"
    uStack_50 = 0xb;
    uStack_48._0_4_ = uVar1;
    FUN_180066df0(param_2, &puStack_60);
    puStack_60 = &system_data_buffer_ptr;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (uint64_t)uStack_48._4_4_ << 0x20;
    puStack_60 = &system_state_ptr;
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar3 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, RENDERING_MODULE_SIZE, 0x13);
    *(int8_t *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    *puVar3 = 0x786f42646e6153;  // "SandBox"
    uStack_30 = 7;
    uStack_28._0_4_ = uVar1;
    FUN_180066df0(param_2, &puStack_40);
    puStack_40 = &system_data_buffer_ptr;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_38 = (uint64_t *)0x0;
    uStack_28 = (uint64_t)uStack_28._4_4_ << 0x20;
    puStack_40 = &system_state_ptr;
    puStack_60 = &system_data_buffer_ptr;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar3 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, RENDERING_MODULE_SIZE, 0x13);
    *(int8_t *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    *puVar3 = 0x61426d6f74737543;  // "CustomBla"
    *(int32_t *)(puVar3 + 1) = 0x656c7474;  // "ttle"
    *(int8_t *)((int64_t)puVar3 + 0xc) = 0;
    uStack_50 = 0xc;
    uStack_48._0_4_ = uVar1;
    FUN_180066df0(param_2, &puStack_60);
    puStack_60 = &system_data_buffer_ptr;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (uint64_t)uStack_48._4_4_ << 0x20;
    puStack_60 = &system_state_ptr;
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar3 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, RENDERING_MODULE_SIZE, 0x13);
    *(int8_t *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    uStack_28 = CONCAT44(uStack_28._4_4_, uVar1);
    *puVar3 = 0x646f4d79726f7453;  // "StoryMod"
    *(int16_t *)(puVar3 + 1) = 0x65;  // "e"
    uStack_30 = 9;
    FUN_180066df0(param_2, &puStack_40);
    puStack_40 = &system_data_buffer_ptr;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  return;
}

/**
 * 渲染系统队列管理器
 * 管理渲染队列的任务调度和执行
 */
void rendering_system_queue_manager(void)
{
  int *piVar1;
  int iVar2;
  uint64_t *puVar3;
  int *piVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int *piVar9;
  char cVar10;
  float fVar11;
  int64_t *aplStackX_8 [2];
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  uint64_t uVar12;
  
  if ((((system_memory_6098 != '\0') && (render_system_memory != 0)) &&
      (*(int *)(render_system_memory + 0x87b7a8) == 2)) && (*(char *)(render_system_memory + 0x87b750) != '\0'))
  {
    lVar5 = *(int64_t *)(system_main_module_state + 0x3d8);
    fVar11 = *(float *)(system_main_module_state + 0x220) + *(float *)(lVar5 + 0x144);
    *(float *)(lVar5 + 0x144) = fVar11;
    if (*(float *)(lVar5 + 0x13c) <= fVar11) {
      *(float *)(lVar5 + 0x144) = fVar11 - *(float *)(lVar5 + 0x13c);
      FUN_1803224b0(lVar5);
      FUN_1803277f0(lVar5);
      *(int64_t *)(lVar5 + 0x150) = *(int64_t *)(lVar5 + 0x150) + 1;
      *(int64_t *)(lVar5 + 0x160) = *(int64_t *)(lVar5 + 0x160) + 1;
      uVar12 = 0xfffffffffffffffe;
      piVar9 = *(int **)(lVar5 + 0x230);
      lVar7 = *(int64_t *)(lVar5 + 0x238) - (int64_t)piVar9;
      while( true ) {
        if ((uint64_t)(lVar7 >> 2) < RENDERING_MAX_QUEUE_SIZE) {
          return;
        }
        iVar2 = *piVar9;
        puVar3 = *(uint64_t **)(lVar5 + 0x148);
        if (puVar3 != (uint64_t *)0x0) {
          if ((void *)*puVar3 == &unknown_var_8024_ptr) {
            cVar10 = *(char *)(puVar3 + 2) != '\0';
          }
          else {
            cVar10 = (**(code **)((void *)*puVar3 + 0x68))();
          }
          uVar6 = system_context_ptr;
          if (cVar10 == '\0') {
            aplStackX_8[0] = *(int64_t **)(lVar5 + 0x148);
            if (aplStackX_8[0] != (int64_t *)0x0) {
              (**(code **)(*aplStackX_8[0] + 0x28))();
            }
            FUN_18005e6a0(uVar6, aplStackX_8, 0);
          }
        }
        plVar8 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr, RENDERING_QUEUE_ITEM_SIZE, 8, 3, uVar12);
        plStackX_18 = plVar8;
        FUN_180049830(plVar8);
        *plVar8 = (int64_t)&unknown_var_8024_ptr;
        *(int *)(plVar8 + 0x18) = iVar2;
        plVar8[0x19] = lVar5;
        plStackX_20 = plVar8;
        (**(code **)(*plVar8 + 0x28))(plVar8);
        plStackX_20 = *(int64_t **)(lVar5 + 0x148);
        *(int64_t **)(lVar5 + 0x148) = plVar8;
        if (plStackX_20 != (int64_t *)0x0) {
          (**(code **)(*plStackX_20 + 0x38))();
        }
        uVar6 = system_context_ptr;
        plStackX_18 = *(int64_t **)(lVar5 + 0x148);
        if (plStackX_18 != (int64_t *)0x0) {
          (**(code **)(*plStackX_18 + 0x28))();
        }
        FUN_18005e110(uVar6, &plStackX_18);
        piVar4 = *(int **)(lVar5 + 0x238);
        for (piVar9 = *(int **)(lVar5 + 0x230); (piVar9 != piVar4 && (*piVar9 != iVar2));
            piVar9 = piVar9 + 1) {
        }
        piVar1 = piVar9 + 1;
        if (piVar1 < piVar4) break;
        *(int **)(lVar5 + 0x238) = piVar4 + -1;
        piVar9 = *(int **)(lVar5 + 0x230);
        lVar7 = (int64_t)(piVar4 + -1) - (int64_t)piVar9;
      }
                    // WARNING: Subroutine does not return
      memmove(piVar9, piVar1, (int64_t)piVar4 - (int64_t)piVar1);
    }
  }
  return;
}

/**
 * 渲染系统队列处理器
 * 处理具体的队列任务和事件
 * 
 * @param in_RAX 渲染上下文指针
 */
void rendering_system_queue_handler(void)
{
  int *piVar1;
  int iVar2;
  uint64_t *puVar3;
  int *piVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t in_RAX;
  int *piVar9;
  char cVar10;
  float fVar11;
  int64_t *in_stack_00000030;
  uint64_t in_stack_00000038;
  int64_t *in_stack_00000040;
  int64_t *in_stack_00000048;
  uint64_t uVar12;
  
  lVar5 = *(int64_t *)(in_RAX + 0x3d8);
  fVar11 = *(float *)(in_RAX + 0x220) + *(float *)(lVar5 + 0x144);
  *(float *)(lVar5 + 0x144) = fVar11;
  if (fVar11 < *(float *)(lVar5 + 0x13c)) {
    return;
  }
  *(float *)(lVar5 + 0x144) = fVar11 - *(float *)(lVar5 + 0x13c);
  FUN_1803224b0(lVar5);
  FUN_1803277f0(lVar5);
  *(int64_t *)(lVar5 + 0x150) = *(int64_t *)(lVar5 + 0x150) + 1;
  *(int64_t *)(lVar5 + 0x160) = *(int64_t *)(lVar5 + 0x160) + 1;
  uVar12 = 0xfffffffffffffffe;
  piVar9 = *(int **)(lVar5 + 0x230);
  lVar7 = *(int64_t *)(lVar5 + 0x238) - (int64_t)piVar9;
  while( true ) {
    if ((uint64_t)(lVar7 >> 2) < RENDERING_MAX_QUEUE_SIZE) {
      return;
    }
    iVar2 = *piVar9;
    puVar3 = *(uint64_t **)(lVar5 + 0x148);
    if (puVar3 != (uint64_t *)0x0) {
      if ((void *)*puVar3 == &unknown_var_8024_ptr) {
        cVar10 = *(char *)(puVar3 + 2) != '\0';
      }
      else {
        cVar10 = (**(code **)((void *)*puVar3 + 0x68))();
      }
      uVar6 = system_context_ptr;
      if (cVar10 == '\0') {
        in_stack_00000030 = *(int64_t **)(lVar5 + 0x148);
        if (in_stack_00000030 != (int64_t *)0x0) {
          (**(code **)(*in_stack_00000030 + 0x28))();
        }
        FUN_18005e6a0(uVar6, &stack0x00000030, 0);
      }
    }
    plVar8 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr, RENDERING_QUEUE_ITEM_SIZE, 8, 3, uVar12);
    in_stack_00000040 = plVar8;
    FUN_180049830(plVar8);
    *plVar8 = (int64_t)&unknown_var_8024_ptr;
    *(int *)(plVar8 + 0x18) = iVar2;
    plVar8[0x19] = lVar5;
    in_stack_00000048 = plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8);
    in_stack_00000048 = *(int64_t **)(lVar5 + 0x148);
    *(int64_t **)(lVar5 + 0x148) = plVar8;
    if (in_stack_00000048 != (int64_t *)0x0) {
      (**(code **)(*in_stack_00000048 + 0x38))();
    }
    uVar6 = system_context_ptr;
    in_stack_00000040 = *(int64_t **)(lVar5 + 0x148);
    if (in_stack_00000040 != (int64_t *)0x0) {
      (**(code **)(*in_stack_00000040 + 0x28))();
    }
    FUN_18005e110(uVar6, &stack0x00000040);
    piVar4 = *(int **)(lVar5 + 0x238);
    for (piVar9 = *(int **)(lVar5 + 0x230); (piVar9 != piVar4 && (*piVar9 != iVar2));
        piVar9 = piVar9 + 1) {
    }
    piVar1 = piVar9 + 1;
    if (piVar1 < piVar4) break;
    *(int **)(lVar5 + 0x238) = piVar4 + -1;
    piVar9 = *(int **)(lVar5 + 0x230);
    lVar7 = (int64_t)(piVar4 + -1) - (int64_t)piVar9;
  }
                    // WARNING: Subroutine does not return
  memmove(piVar9, piVar1, (int64_t)piVar4 - (int64_t)piVar1);
}

/**
 * 渲染系统空操作函数1
 * 空操作，用于占位或兼容性
 */
void rendering_system_noop_1(void)
{
  return;
}

/**
 * 渲染系统空操作函数2
 * 空操作，用于占位或兼容性
 */
void rendering_system_noop_2(void)
{
  return;
}

/**
 * 渲染系统配置初始化器
 * 初始化渲染系统的全局配置和状态
 * 
 * @param param_1 配置参数1
 * @param param_2 配置参数2
 * @param param_3 配置参数3
 * @param param_4 配置参数4
 */
void rendering_system_config_initializer(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  render_system_memory = 0;
  uRam0000000180c95f00 = 0;
  render_system_memory = 0;
  render_system_memory = 3;
  render_system_memory = 0xffffffff;
  render_system_memory = 0;
}

/**
 * 渲染系统全局初始化器
 * 初始化整个渲染系统的全局状态和数据结构
 */
void rendering_system_global_initializer(void)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  
  FUN_1802567b0(render_system_data_memory[0x15], &system_memory_d688, &unknown_var_9616_ptr, rendering_system_texture_allocator, 0xfffffffffffffffe);
  puVar2 = (int32_t *)FUN_18008d660(render_system_data_memory + 0x1c, &system_memory_d688);
  *puVar2 = 1;
  puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, 0x38, 8, 3);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *puVar3 = &unknown_var_2096_ptr;
  *puVar3 = &unknown_var_2072_ptr;
  puVar1 = puVar3 + 1;
  puVar3[4] = 0;
  *(int32_t *)(puVar3 + 6) = 3;
  *puVar1 = puVar1;
  puVar3[2] = puVar1;
  puVar3[3] = 0;
  *(int8_t *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  *render_system_data_memory = puVar3;
  return;
}
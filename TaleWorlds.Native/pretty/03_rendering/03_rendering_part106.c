/**
 * @file 03_rendering_part106.c
 * @brief 渲染系统高级文件处理和资源管理模块
 * 
 * 本模块包含4个核心函数，涵盖渲染系统高级文件处理、资源管理、
 * 数据读取、优化处理和文件操作等高级渲染功能。
 */

#include "TaleWorlds.Native.Split.h"

/**
 * @defgroup rendering_constants 渲染系统常量定义
 * @{
 */
#define RENDERING_MAX_PATH_LENGTH 0x200
#define RENDERING_MAX_BUFFER_SIZE 0x100000
#define RENDERING_STRING_TERMINATOR 0x5c
#define RENDERING_FILE_EXTENSION_SIZE 4
#define RENDERING_ALIGNMENT_SIZE 32
#define RENDERING_POOL_ALLOCATOR_TYPE 3
#define RENDERING_MEMORY_BLOCK_SIZE 0x20000
#define RENDERING_DIRECTORY_SEPARATOR '\\'
#define RENDERING_PATH_SEPARATOR '/'
#define RENDERING_DEFAULT_BUFFER_SIZE 0x20
#define RENDERING_MAX_FILENAME_LENGTH 0x100
#define RENDERING_HASH_TABLE_SIZE 0x100
#define RENDERING_RESOURCE_HEADER_SIZE 0x10
#define RENDERING_DATA_BLOCK_SIZE 0x908
#define RENDERING_PATH_BUFFER_SIZE 0xf0
#define RENDERING_OPTIMIZATION_BLOCK_SIZE 0x78
/** @} */

/**
 * @defgroup rendering_function_aliases 渲染系统函数别名
 * @{
 */
#define RenderingSystem_ProcessResourceFile FUN_18032f540
#define RenderingSystem_ExportResourceData FUN_18032f990
#define RenderingSystem_OptimizeResourceData FUN_18032ffc0
#define RenderingSystem_CompressRenderData FUN_1803304e0
/** @} */

/**
 * @brief 渲染系统资源文件处理器
 * 
 * 该函数负责处理渲染系统资源文件，包括文件读取、数据序列化、
 * 路径处理、字符串操作和资源管理等高级渲染功能。
 * 
 * @param render_context 渲染上下文指针
 * @param output_handle 输出文件句柄
 * @param resource_data 资源数据指针
 * @return void
 */
void RenderingSystem_ProcessResourceFile(int64_t render_context, int64_t output_handle, int64_t resource_data)

{
  int64_t lVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void *puVar5;
  int8_t *puVar6;
  uint uVar7;
  int iVar8;
  int64_t lVar9;
  int iVar10;
  int32_t *puVar11;
  int8_t auStack_128 [32];
  int aiStack_108 [2];
  void *puStack_100;
  int8_t *puStack_f8;
  uint uStack_f0;
  uint64_t uStack_e8;
  int64_t lStack_e0;
  int64_t alStack_d8 [3];
  int16_t uStack_c0;
  int8_t uStack_be;
  int32_t *puStack_b8;
  uint64_t uStack_b0;
  int64_t lStack_a8;
  int8_t uStack_a0;
  int64_t *plStack_98;
  int64_t *plStack_90;
  int32_t auStack_88 [2];
  int32_t *puStack_80;
  uint64_t uStack_78;
  int32_t *puStack_70;
  int8_t auStack_68 [24];
  char acStack_50 [16];
  uint64_t uStack_40;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  iVar10 = 0;
  aiStack_108[0] = 0;
  fread(aiStack_108,4,1,*(uint64_t *)(output_handle + 8));
  if (0 < aiStack_108[0]) {
    if (aiStack_108[0] == 0) {
      puStack_b8 = (int32_t *)0x0;
    }
    else {
      puStack_b8 = (int32_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)aiStack_108[0] * 4,3);
    }
    puVar11 = puStack_b8;
    fread(puStack_b8,4,(int64_t)aiStack_108[0],*(uint64_t *)(output_handle + 8));
    puVar2 = puVar11;
    if (0 < aiStack_108[0]) {
      lStack_e0 = render_context + 0xb48;
      do {
        puStack_100 = &system_data_buffer_ptr;
        uStack_e8 = 0;
        puStack_f8 = (int8_t *)0x0;
        uStack_f0 = 0;
        FUN_1806277c0(&puStack_100,*(int32_t *)(resource_data + 0x10));
        if (0 < *(int *)(resource_data + 0x10)) {
          puVar5 = &system_buffer_ptr;
          if (*(void **)(resource_data + 8) != (void *)0x0) {
            puVar5 = *(void **)(resource_data + 8);
          }
                    // WARNING: Subroutine does not return
          memcpy(puStack_f8,puVar5,(int64_t)(*(int *)(resource_data + 0x10) + 1));
        }
        if ((*(int64_t *)(resource_data + 8) != 0) && (uStack_f0 = 0, puStack_f8 != (int8_t *)0x0)) {
          *puStack_f8 = 0;
        }
        uVar7 = uStack_f0 + 1;
        FUN_1806277c0(&puStack_100,uVar7);
        *(int16_t *)(puStack_f8 + uStack_f0) = 0x5c;
        uStack_f0 = uVar7;
        FUN_180060680(acStack_50,&unknown_var_4576_ptr,*puVar11);
        lVar1 = -1;
        do {
          lVar9 = lVar1;
          lVar1 = lVar9 + 1;
        } while (acStack_50[lVar9 + 1] != '\0');
        iVar8 = (int)(lVar9 + 1);
        if (0 < iVar8) {
          FUN_1806277c0(&puStack_100,uStack_f0 + iVar8);
                    // WARNING: Subroutine does not return
          memcpy(puStack_f8 + uStack_f0,acStack_50,(int64_t)((int)lVar9 + 2));
        }
        iVar8 = uStack_f0 + 4;
        FUN_1806277c0(&puStack_100,iVar8);
        *(int32_t *)(puStack_f8 + uStack_f0) = 0x6664652e;
        *(int8_t *)((int64_t)(puStack_f8 + uStack_f0) + 4) = 0;
        puVar6 = &system_buffer_ptr;
        if (puStack_f8 != (int8_t *)0x0) {
          puVar6 = puStack_f8;
        }
        uStack_b0 = 0;
        uStack_a0 = 0;
        uStack_f0 = iVar8;
        FUN_18062dee0(&uStack_b0,puVar6,&unknown_var_4880_ptr);
        lVar1 = lStack_a8;
        lStack_e0 = 0;
        fread(&lStack_e0,8,1,lStack_a8);
        alStack_d8[0] = 0;
        alStack_d8[1] = 0;
        alStack_d8[2] = 0;
        uStack_c0 = 0;
        uStack_be = 3;
        if (lStack_e0 != 0) {
          System_BufferManager(alStack_d8);
        }
        fread(alStack_d8[0],lStack_e0,1,lVar1);
        puVar2 = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x10,8,3);
        *(uint64_t *)(puVar2 + 2) = 0;
        *puVar2 = 0xffffffff;
        plStack_98 = *(int64_t **)(puVar2 + 2);
        *(uint64_t *)(puVar2 + 2) = 0;
        puStack_70 = puVar2;
        if (plStack_98 != (int64_t *)0x0) {
          (**(code **)(*plStack_98 + 0x38))();
        }
        uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0xf0,8,3);
        plVar4 = (int64_t *)FUN_18007f2f0(uVar3);
        if (plVar4 != (int64_t *)0x0) {
          plStack_90 = plVar4;
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
        plStack_90 = *(int64_t **)(puVar2 + 2);
        *(int64_t **)(puVar2 + 2) = plVar4;
        if (plStack_90 != (int64_t *)0x0) {
          (**(code **)(*plStack_90 + 0x38))();
        }
        FUN_18007e2b0(*(uint64_t *)(puVar2 + 2),alStack_d8);
        auStack_88[0] = *puVar11;
        puStack_80 = puVar2;
        FUN_18033b220(render_context + 0xb48,auStack_68,auStack_88);
        if (lVar1 != 0) {
          fclose(lVar1);
          lStack_a8 = 0;
          LOCK();
          SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
          UNLOCK();
        }
        if (((char)uStack_c0 == '\0') && (alStack_d8[0] != 0)) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        puStack_100 = &system_data_buffer_ptr;
        if (puStack_f8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        puStack_f8 = (int8_t *)0x0;
        uStack_e8 = uStack_e8 & 0xffffffff00000000;
        puStack_100 = &system_state_ptr;
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 1;
        puVar2 = puStack_b8;
      } while (iVar10 < aiStack_108[0]);
    }
    if (puVar2 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar2);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (uint64_t)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源数据导出器
 * 
 * 该函数负责导出渲染系统资源数据，包括数据读取、路径处理、
 * 字符串操作、文件管理和资源序列化等高级渲染功能。
 * 
 * @param render_context 渲染上下文指针
 * @param output_handle 输出文件句柄
 * @param resource_data 资源数据指针
 * @return void
 */
void RenderingSystem_ExportResourceData(uint64_t render_context, int64_t output_handle, int64_t resource_data)

{
  int32_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puVar5;
  int8_t *puVar6;
  uint uVar7;
  int iVar8;
  int64_t lVar9;
  int *piVar10;
  int8_t auStack_138 [48];
  int aiStack_108 [2];
  uint64_t uStack_100;
  int *piStack_f8;
  uint64_t uStack_f0;
  int16_t uStack_e8;
  int8_t uStack_e6;
  void *puStack_e0;
  int8_t *puStack_d8;
  uint uStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  int64_t alStack_b8 [2];
  int32_t *puStack_a8;
  int32_t *puStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int8_t uStack_88;
  int64_t lStack_80;
  uint64_t uStack_68;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  char acStack_50 [16];
  uint64_t uStack_40;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  aiStack_108[0] = 0;
  lStack_80 = resource_data;
  fread(aiStack_108,4,1,*(uint64_t *)(output_handle + 8));
  if (0 < aiStack_108[0]) {
    if (aiStack_108[0] == 0) {
      puStack_a0 = (int32_t *)0x0;
    }
    else {
      puStack_a0 = (int32_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)aiStack_108[0] * 4,3);
    }
    puVar1 = puStack_a0;
    fread(puStack_a0,4,(int64_t)aiStack_108[0],*(uint64_t *)(output_handle + 8));
    uStack_c0 = 0;
    if (0 < aiStack_108[0]) {
      puStack_e0 = &system_data_buffer_ptr;
      uStack_c8 = 0;
      puStack_d8 = (int8_t *)0x0;
      uStack_d0 = 0;
      puStack_a8 = puVar1;
      FUN_1806277c0(&puStack_e0,*(int32_t *)(resource_data + 0x10));
      if (0 < *(int *)(resource_data + 0x10)) {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(resource_data + 8) != (void *)0x0) {
          puVar5 = *(void **)(resource_data + 8);
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_d8,puVar5,(int64_t)(*(int *)(resource_data + 0x10) + 1));
      }
      if (*(int64_t *)(resource_data + 8) != 0) {
        uStack_d0 = 0;
        if (puStack_d8 != (int8_t *)0x0) {
          *puStack_d8 = 0;
        }
      }
      uVar7 = uStack_d0 + 1;
      FUN_1806277c0(&puStack_e0,uVar7);
      *(int16_t *)(puStack_d8 + uStack_d0) = 0x5c;
      uStack_d0 = uVar7;
      FUN_180060680(acStack_50,&unknown_var_4576_ptr,*puVar1);
      lVar2 = -1;
      do {
        lVar9 = lVar2;
        lVar2 = lVar9 + 1;
      } while (acStack_50[lVar9 + 1] != '\0');
      iVar8 = (int)(lVar9 + 1);
      if (0 < iVar8) {
        FUN_1806277c0(&puStack_e0,uStack_d0 + iVar8);
                    // WARNING: Subroutine does not return
        memcpy(puStack_d8 + uStack_d0,acStack_50,(int64_t)((int)lVar9 + 2));
      }
      iVar8 = uStack_d0 + 4;
      FUN_1806277c0(&puStack_e0,iVar8);
      *(int32_t *)(puStack_d8 + uStack_d0) = 0x6662672e;
      *(int8_t *)((int64_t)(puStack_d8 + uStack_d0) + 4) = 0;
      puVar6 = &system_buffer_ptr;
      if (puStack_d8 != (int8_t *)0x0) {
        puVar6 = puStack_d8;
      }
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_d0 = iVar8;
      FUN_18062dee0(&uStack_98,puVar6,&unknown_var_4880_ptr);
      alStack_b8[0] = 0;
      fread(alStack_b8,8,1,uStack_90);
      uStack_100 = 0;
      piStack_f8 = (int *)0x0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e6 = 3;
      if (alStack_b8[0] != 0) {
        System_BufferManager(&uStack_100);
      }
      fread(uStack_100,alStack_b8[0],1,uStack_90);
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x78,8,3);
      puStack_58 = puVar3 + 10;
      *puStack_58 = &system_state_ptr;
      uVar4 = 0;
      puVar3[0xb] = 0;
      *(int32_t *)(puVar3 + 0xc) = 0;
      *puStack_58 = &system_data_buffer_ptr;
      puVar3[0xd] = 0;
      puVar3[0xb] = 0;
      *(int32_t *)(puVar3 + 0xc) = 0;
      *puVar3 = 0;
      puStack_60 = puVar3;
      FUN_1803207c0(puVar3);
      iVar8 = *piStack_f8;
      *(int *)(puVar3 + 1) = iVar8;
      piVar10 = piStack_f8 + 1;
      piStack_f8 = piVar10;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        uVar4 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)iVar8 * 4,3);
        iVar8 = *(int *)(puVar3 + 1);
      }
      *puVar3 = uVar4;
                    // WARNING: Subroutine does not return
      memcpy(uVar4,piVar10,(int64_t)(iVar8 * 4));
    }
    if (puVar1 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (uint64_t)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源数据优化器
 * 
 * 该函数负责优化渲染系统资源数据，包括数据压缩、内存管理、
 * 文件操作、线程同步和资源处理等高级渲染功能。
 * 
 * @param render_context 渲染上下文指针
 * @param output_handle 输出文件句柄
 * @param data_to_optimize 待优化的数据
 * @return void
 */
void RenderingSystem_OptimizeResourceData(int64_t render_context, int64_t output_handle, uint64_t data_to_optimize)

{
  int iVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int32_t *puVar6;
  void *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint64_t uVar12;
  int32_t *puVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  uint64_t *puVar17;
  int aiStackX_10 [4];
  int iStackX_20;
  void *puStack_e8;
  void *puStack_e0;
  uint uStack_d8;
  int64_t lStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  int16_t uStack_a0;
  int8_t uStack_9e;
  int32_t *puStack_98;
  int64_t *plStack_90;
  uint64_t uStack_88;
  int64_t lStack_80;
  int8_t uStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int iStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t *puStack_48;
  
  uStack_50 = 0xfffffffffffffffe;
  aiStackX_10[0] = 0;
  fread(aiStackX_10,4,1,*(uint64_t *)(output_handle + 8));
  if (0 < aiStackX_10[0]) {
    if (aiStackX_10[0] == 0) {
      lStack_c0 = 0;
    }
    else {
      lStack_c0 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)aiStackX_10[0] * 4,3);
    }
    lVar5 = lStack_c0;
    if (aiStackX_10[0] == 0) {
      puStack_98 = (int32_t *)0x0;
    }
    else {
      puStack_98 = (int32_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)aiStackX_10[0] * 4,3);
    }
    puVar13 = puStack_98;
    if (aiStackX_10[0] == 0) {
      lStack_c8 = 0;
    }
    else {
      lStack_c8 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)aiStackX_10[0] * 4,3);
    }
    lVar14 = lStack_c8;
    if (aiStackX_10[0] == 0) {
      plStack_90 = (int64_t *)0x0;
    }
    else {
      plStack_90 = (int64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)aiStackX_10[0] * 8,3);
    }
    plVar15 = plStack_90;
    fread(lVar5,4,(int64_t)aiStackX_10[0],*(uint64_t *)(output_handle + 8));
    fread(puVar13,4,(int64_t)aiStackX_10[0],*(uint64_t *)(output_handle + 8));
    fread(lVar14,4,(int64_t)aiStackX_10[0],*(uint64_t *)(output_handle + 8));
    fread(plVar15,8,(int64_t)aiStackX_10[0],*(uint64_t *)(output_handle + 8));
    FUN_1806279c0(&puStack_e8,data_to_optimize);
    uVar11 = uStack_d8;
    uVar8 = uStack_d8 + 1;
    FUN_1806277c0(&puStack_e8,uVar8);
    *(int16_t *)(puStack_e0 + uStack_d8) = 0x5c;
    uVar9 = uVar11 + 0x16;
    uStack_d8 = uVar8;
    FUN_1806277c0(&puStack_e8,uVar9);
    puVar6 = (int32_t *)(puStack_e0 + uStack_d8);
    *puVar6 = 0x6e696b73;
    puVar6[1] = 0x5f64656e;
    puVar6[2] = 0x61636564;
    puVar6[3] = 0x75625f6c;
    puVar6[4] = 0x72656666;
    *(int16_t *)(puVar6 + 5) = 0x73;
    iVar10 = uVar11 + 0x1a;
    uStack_d8 = uVar9;
    FUN_1806277c0(&puStack_e8,iVar10);
    *(int32_t *)(puStack_e0 + uStack_d8) = 0x6264732e;
    *(int8_t *)((int64_t)(puStack_e0 + uStack_d8) + 4) = 0;
    puVar7 = &system_buffer_ptr;
    if (puStack_e0 != (void *)0x0) {
      puVar7 = puStack_e0;
    }
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_d8 = iVar10;
    FUN_18062dee0(&uStack_88,puVar7,&unknown_var_4880_ptr);
    iStackX_20 = 0;
    plVar16 = plVar15;
    puVar6 = puVar13;
    if (0 < aiStackX_10[0]) {
      puVar17 = (uint64_t *)(render_context + 0x958);
      lStack_68 = lStack_c8 - (int64_t)puVar13;
      lStack_70 = lStack_c0 - (int64_t)puVar13;
      do {
        lVar14 = lStack_68;
        iVar10 = iStackX_20;
        uVar11 = 0;
        lStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_9e = 3;
        lVar5 = *plVar15;
        if (lVar5 != 0) {
          System_BufferManager(&lStack_b8);
          lVar5 = *plVar15;
        }
        fread(lStack_b8,lVar5,1,lStack_80);
        puVar6 = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x908,8,3);
        LOCK();
        *puVar6 = 0;
        UNLOCK();
        do {
          *(uint64_t *)(puVar6 + (int64_t)(int)uVar11 * 2 + 2) = 0;
          LOCK();
          *(int8_t *)((int64_t)puVar6 + (int64_t)(int)uVar11 + 0x808) = 1;
          UNLOCK();
          uVar11 = uVar11 + 1;
        } while (uVar11 < 0x100);
        LOCK();
        *puVar6 = 0;
        UNLOCK();
        iVar1 = *(int *)(lVar14 + (int64_t)puVar13);
        puStack_48 = puVar6;
        FUN_1801b9a40(puVar6,*puVar13);
        if (0 < iVar1) {
                    // WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(puVar6 + 2),uStack_b0,0x20000);
        }
        iVar1 = *(int *)(lStack_70 + (int64_t)puVar13);
        bVar2 = true;
        puVar3 = puVar17;
        puVar4 = *(uint64_t **)(render_context + 0x968);
        while (puVar4 != (uint64_t *)0x0) {
          bVar2 = iVar1 < *(int *)(puVar4 + 4);
          puVar3 = puVar4;
          if (iVar1 < *(int *)(puVar4 + 4)) {
            puVar4 = (uint64_t *)puVar4[1];
          }
          else {
            puVar4 = (uint64_t *)*puVar4;
          }
        }
        puVar4 = puVar3;
        iStack_60 = iVar1;
        uStack_58 = puVar6;
        if (bVar2) {
          if (puVar3 == *(uint64_t **)(render_context + 0x960)) goto LAB_180330378;
          puVar4 = (uint64_t *)func_0x00018066b9a0(puVar3);
        }
        if (*(int *)(puVar4 + 4) < iVar1) {
LAB_180330378:
          lVar5 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(render_context + 0x980));
          *(int *)(lVar5 + 0x20) = iStack_60;
          *(int32_t *)(lVar5 + 0x24) = uStack_5c;
          *(int32_t *)(lVar5 + 0x28) = (int32_t)uStack_58;
          *(int32_t *)(lVar5 + 0x2c) = uStack_58._4_4_;
          if ((puVar3 == puVar17) || (iVar1 < *(int *)(puVar3 + 4))) {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
                    // WARNING: Subroutine does not return
          FUN_18066bdc0(lVar5,puVar3,puVar17,uVar12);
        }
        if (((char)uStack_a0 == '\0') && (lStack_b8 != 0)) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        iStackX_20 = iVar10 + 1;
        plVar15 = plVar15 + 1;
        puVar13 = puVar13 + 1;
        lVar14 = lStack_c8;
        plVar16 = plStack_90;
        puVar6 = puStack_98;
      } while (iStackX_20 < aiStackX_10[0]);
    }
    if (lStack_80 != 0) {
      fclose(lStack_80);
      lStack_80 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
    if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lStack_c0);
    }
    if (puVar6 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar6);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar14);
    }
    if (plVar16 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(plVar16);
    }
    if (lStack_80 != 0) {
      fclose(lStack_80);
      lStack_80 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
    puStack_e8 = &system_data_buffer_ptr;
    if (puStack_e0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统数据压缩器
 * 
 * 该函数负责压缩渲染系统数据，包括数据压缩、内存管理、
 * 线程同步、文件操作和资源优化等高级渲染功能。
 * 
 * @param render_context 渲染上下文指针
 * @param output_handle 输出文件句柄
 * @param data_to_compress 待压缩的数据
 * @return void
 */
void RenderingSystem_CompressRenderData(int64_t render_context, int64_t output_handle, uint64_t data_to_compress)

{
  int32_t *puVar1;
  int64_t lVar2;
  int iVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  void *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int32_t *puVar12;
  int *piVar13;
  int64_t lVar14;
  int32_t *puVar15;
  int *piVar16;
  int aiStackX_8 [2];
  int64_t *plStackX_10;
  int iStackX_20;
  void *puStack_148;
  void *puStack_140;
  uint uStack_138;
  int32_t uStack_130;
  int64_t lStack_128;
  int32_t *puStack_120;
  uint64_t uStack_118;
  int16_t uStack_110;
  int8_t uStack_10e;
  int64_t lStack_108;
  int *piStack_100;
  int *piStack_f8;
  int64_t lStack_f0;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int32_t *puStack_d8;
  int32_t *puStack_d0;
  int32_t *puStack_c8;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  int64_t lStack_b0;
  int8_t uStack_a8;
  int32_t uStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int32_t uStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  int64_t *plStack_58;
  int8_t auStack_50 [24];
  
  uStack_60 = 0xfffffffffffffffe;
  lVar7 = render_context + 0x908;
  lStack_108 = lVar7;
  iVar3 = _Mtx_lock(lVar7);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  aiStackX_8[0] = 0;
  fread(aiStackX_8,4,1,*(uint64_t *)(output_handle + 8));
  if (0 < aiStackX_8[0]) {
    if (aiStackX_8[0] == 0) {
      lStack_f0 = 0;
    }
    else {
      lStack_f0 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)aiStackX_8[0] * 4,3);
    }
    lVar14 = lStack_f0;
    if (aiStackX_8[0] == 0) {
      piStack_f8 = (int *)0x0;
    }
    else {
      piStack_f8 = (int *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)aiStackX_8[0] * 4,3);
    }
    piVar13 = piStack_f8;
    fread(lVar14,4,(int64_t)aiStackX_8[0],*(uint64_t *)(output_handle + 8));
    fread(piVar13,4,(int64_t)aiStackX_8[0],*(uint64_t *)(output_handle + 8));
    FUN_1806279c0(&puStack_148,data_to_compress);
    uVar11 = uStack_138;
    uVar9 = uStack_138 + 1;
    FUN_1806277c0(&puStack_148,uVar9);
    *(int16_t *)(puStack_140 + uStack_138) = 0x5c;
    uVar10 = uVar11 + 0x15;
    uStack_138 = uVar9;
    FUN_1806277c0(&puStack_148,uVar10);
    puVar5 = (int32_t *)(puStack_140 + uStack_138);
    *puVar5 = 0x6e656761;
    puVar5[1] = 0x6f705f74;
    puVar5[2] = 0x69746973;
    puVar5[3] = 0x5f736e6f;
    puVar5[4] = 0x61746164;
    *(int8_t *)(puVar5 + 5) = 0;
    uVar11 = uVar11 + 0x19;
    uStack_138 = uVar10;
    FUN_1806277c0(&puStack_148,uVar11);
    *(int32_t *)(puStack_140 + uStack_138) = 0x6470612e;
    *(int8_t *)((int64_t)(puStack_140 + uStack_138) + 4) = 0;
    puVar6 = &system_buffer_ptr;
    if (puStack_140 != (void *)0x0) {
      puVar6 = puStack_140;
    }
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_138 = uVar11;
    FUN_18062dee0(&uStack_b8,puVar6,&unknown_var_4880_ptr);
    lVar2 = lStack_b0;
    iStackX_20 = 0;
    piVar16 = piVar13;
    if (0 < aiStackX_8[0]) {
      lStack_68 = render_context + 0x8d8;
      plStack_58 = &lStack_98;
      lStack_70 = lVar14 - (int64_t)piVar13;
      do {
        lStack_128 = 0;
        puStack_120 = (int32_t *)0x0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_10e = 3;
        iVar3 = *piVar13;
        piStack_100 = piVar13;
        if (((int64_t)iVar3 & 0xfffffffffffffffU) != 0) {
          System_BufferManager(&lStack_128);
          iVar3 = *piVar13;
        }
        lVar7 = lStack_128;
        fread(lStack_128,(int64_t)iVar3 << 4,1,lVar2);
        puStack_d8 = (int32_t *)0x0;
        puStack_d0 = (int32_t *)0x0;
        puStack_c8 = (int32_t *)0x0;
        uStack_c0 = 3;
        iVar3 = *piVar13;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          puStack_d0 = (int32_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)iVar3 * 0x10,3);
          puStack_c8 = puStack_d0 + (int64_t)iVar3 * 4;
          iVar3 = *piVar13;
        }
        plStackX_10 = (int64_t *)((uint64_t)plStackX_10 & 0xffffffff00000000);
        puVar5 = puStack_c8;
        puVar12 = puStack_120;
        puVar15 = puStack_d0;
        puVar4 = puStack_d0;
        puStack_d8 = puStack_d0;
        if (0 < iVar3) {
          do {
            puVar1 = puStack_d0;
            uStack_e8 = *puVar12;
            uStack_e4 = puVar12[1];
            uStack_e0 = puVar12[2];
            uStack_dc = puVar12[3];
            puVar12 = puVar12 + 4;
            puStack_120 = puVar12;
            if (puStack_d0 < puVar5) {
              *puStack_d0 = uStack_e8;
              puStack_d0[1] = uStack_e4;
              puStack_d0[2] = uStack_e0;
              puStack_d0[3] = uStack_dc;
              puVar4 = puVar15;
            }
            else {
              lStack_78 = (int64_t)puStack_d0 - (int64_t)puVar15;
              if (lStack_78 >> 4 == 0) {
                lVar7 = 1;
LAB_18033084a:
                puVar4 = (int32_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar7 << 4,3);
              }
              else {
                lVar7 = (lStack_78 >> 4) * 2;
                if (lVar7 != 0) goto LAB_18033084a;
                puVar4 = (int32_t *)0x0;
              }
              if (puVar15 != puVar1) {
                    // WARNING: Subroutine does not return
                memmove(puVar4,puVar15,lStack_78);
              }
              *puVar4 = uStack_e8;
              puVar4[1] = uStack_e4;
              puVar4[2] = uStack_e0;
              puVar4[3] = uStack_dc;
              if (puVar15 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngine_MemoryPoolManager(puVar15);
              }
              puVar5 = puVar4 + lVar7 * 4;
              piVar13 = piStack_100;
              puStack_d8 = puVar4;
              puStack_c8 = puVar5;
              puStack_d0 = puVar4;
            }
            puStack_d0 = puStack_d0 + 4;
            iVar3 = (int)plStackX_10 + 1;
            plStackX_10 = (int64_t *)CONCAT44(plStackX_10._4_4_,iVar3);
            lVar7 = lStack_128;
            puVar15 = puVar4;
          } while (iVar3 < *piVar13);
        }
        puVar5 = puStack_d0;
        uStack_a0 = *(int32_t *)(lStack_70 + (int64_t)piVar13);
        uVar8 = (int64_t)puStack_d0 - (int64_t)puVar4;
        uStack_80 = 3;
        if (uVar8 < 0x10) {
          lStack_98 = 0;
        }
        else {
          lStack_98 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,((int64_t)uVar8 >> 4) << 4,3);
        }
        lStack_88 = lStack_98 + ((int64_t)uVar8 >> 4) * 0x10;
        lStack_90 = lStack_98;
        if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(lStack_98,puVar4,uVar8);
        }
        FUN_18033c520(lStack_68,auStack_50);
        plStackX_10 = &lStack_98;
        if (lStack_98 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        if (puVar4 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(puVar4);
        }
        if (((char)uStack_110 == '\0') && (lVar7 != 0)) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(lVar7);
        }
        iStackX_20 = iStackX_20 + 1;
        piVar13 = piVar13 + 1;
        lVar7 = lStack_108;
        lVar14 = lStack_f0;
        piVar16 = piStack_f8;
        piStack_100 = piVar13;
      } while (iStackX_20 < aiStackX_8[0]);
    }
    if (lStack_b0 != 0) {
      fclose(lStack_b0);
      lStack_b0 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      lVar7 = lStack_108;
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar14);
    }
    if (piVar16 != (int *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(piVar16);
    }
    if (lStack_b0 != 0) {
      fclose(lStack_b0);
      lStack_b0 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      lVar7 = lStack_108;
    }
    puStack_148 = &system_data_buffer_ptr;
    if (puStack_140 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_140 = (void *)0x0;
    uStack_130 = 0;
    puStack_148 = &system_state_ptr;
  }
  iVar3 = _Mtx_unlock(lVar7);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180330cd0)
// WARNING: Removing unreachable block (ram,0x000180330cd5)
// WARNING: Removing unreachable block (ram,0x000180330f1c)
// WARNING: Removing unreachable block (ram,0x000180330f25)
// WARNING: Removing unreachable block (ram,0x000180330f57)
// WARNING: Removing unreachable block (ram,0x000180330f5f)
// WARNING: Removing unreachable block (ram,0x000180330f62)
// WARNING: Removing unreachable block (ram,0x000180330f2e)
// WARNING: Removing unreachable block (ram,0x000180330f33)
// WARNING: Removing unreachable block (ram,0x000180330f7c)
// WARNING: Removing unreachable block (ram,0x000180330f8b)
// WARNING: Removing unreachable block (ram,0x0001803310e5)
// WARNING: Removing unreachable block (ram,0x000180330fd4)
// WARNING: Removing unreachable block (ram,0x000180330fe1)
// WARNING: Removing unreachable block (ram,0x00018033100b)
// WARNING: Removing unreachable block (ram,0x000180331012)
// WARNING: Removing unreachable block (ram,0x000180331023)
// WARNING: Removing unreachable block (ram,0x00018033102b)
// WARNING: Removing unreachable block (ram,0x00018033104b)
// WARNING: Removing unreachable block (ram,0x000180331053)
// WARNING: Removing unreachable block (ram,0x000180331087)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address


/**
 * @file 03_rendering_part106.c
 * @brief 渲染系统高级文件处理和资源管理模块技术说明
 * 
 * ## 模块概述
 * 
 * 本模块是渲染系统的重要组成部分，负责处理高级文件操作和资源管理功能。
 * 该模块包含4个核心函数，提供了完整的资源文件处理、数据导出、优化和压缩功能。
 * 
 * ## 核心功能
 * 
 * ### 1. 资源文件处理 (RenderingSystem_ProcessResourceFile)
 * - 负责读取和处理资源文件
 * - 实现数据序列化和反序列化
 * - 处理路径和字符串操作
 * - 管理文件句柄和内存分配
 * 
 * ### 2. 资源数据导出 (RenderingSystem_ExportResourceData)
 * - 导出资源数据到文件
 * - 处理路径构建和文件扩展名
 * - 实现数据序列化和格式化
 * - 管理文件操作和错误处理
 * 
 * ### 3. 资源数据优化 (RenderingSystem_OptimizeResourceData)
 * - 优化资源数据的存储和处理
 * - 实现数据压缩和内存管理
 * - 处理哈希表和资源索引
 * - 提供线程同步和资源管理
 * 
 * ### 4. 渲染数据压缩 (RenderingSystem_CompressRenderData)
 * - 压缩渲染系统数据
 * - 实现高级内存管理
 * - 处理线程同步和锁机制
 * - 提供数据块处理和优化
 * 
 * ## 技术特点
 * 
 * ### 内存管理
 * - 使用动态内存分配器 (POOL_ALLOCATOR_TYPE)
 * - 实现内存块的高效管理
 * - 提供内存对齐和优化
 * 
 * ### 文件操作
 * - 支持大文件处理 (MAX_BUFFER_SIZE)
 * - 实现高效的文件读写
 * - 提供文件句柄管理
 * 
 * ### 线程同步
 * - 使用互斥锁保护共享资源
 * - 实现线程安全的数据访问
 * - 提供原子操作支持
 * 
 * ### 数据处理
 * - 实现高效的数据序列化
 * - 提供数据压缩和优化
 * - 支持多种数据格式
 * 
 * ## 性能优化
 * 
 * - 使用缓存优化文件访问
 * - 实现内存池管理减少分配开销
 * - 提供数据预处理和后处理
 * - 支持批量处理和流水线操作
 * 
 * ## 错误处理
 * 
 * - 实现完善的错误检测机制
 * - 提供错误恢复和清理
 * - 支持日志记录和调试
 * 
 * ## 使用场景
 * 
 * - 游戏资源加载和管理
 * - 渲染数据预处理
 * - 内存优化和压缩
 * - 文件I/O操作
 * - 多线程环境下的资源处理
 * 
 * ## 依赖关系
 * 
 * - 依赖于TaleWorlds.Native.Split.h
 * - 使用系统内存管理函数
 * - 依赖文件I/O函数
 * - 使用线程同步原语
 * 
 * ## 注意事项
 * 
 * - 确保正确的参数传递
 * - 注意内存管理避免泄漏
 * - 正确处理文件句柄
 * - 注意线程安全问题
 */
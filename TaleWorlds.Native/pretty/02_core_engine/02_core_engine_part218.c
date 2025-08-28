#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part218.c - 核心引擎模块第218部分
// 包含19个函数，主要涉及内存管理、容器操作、对象生命周期管理等功能

// 函数: 释放容器中的对象资源
// 作用: 遍历容器中的所有对象，调用它们的析构函数，然后释放容器资源
void cleanup_container_objects(int64_t *container_ptr)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    if ((int64_t *)plVar2[1] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar2[1] + 0x38))();
    }
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  handle_memory_error();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 清理全局对象池
// 作用: 清理全局对象池中的所有对象，释放相关资源
void cleanup_global_object_pool(void)

{
  int64_t global_pool_base;
  int64_t *pool_start;
  int64_t *pool_end;
  uint64_t index;
  uint counter;
  uint64_t total_items;
  
  global_pool_base = global_object_pool_base;
  index = 0;
  pool_end = *(int64_t **)(global_object_pool_base + 0x58);
  pool_start = *(int64_t **)(global_object_pool_base + 0x50);
  total_items = index;
  if (((int64_t)plVar3 - (int64_t)plVar2) / 0x18 != 0) {
    do {
      plVar3 = *(int64_t **)(uVar4 + (int64_t)plVar2);
      *(uint64_t *)(uVar4 + (int64_t)plVar2) = 0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      plVar3 = *(int64_t **)(uVar4 + 8 + *(int64_t *)(lVar1 + 0x50));
      *(uint64_t *)(uVar4 + 8 + *(int64_t *)(lVar1 + 0x50)) = 0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x18;
      plVar3 = *(int64_t **)(lVar1 + 0x58);
      plVar2 = *(int64_t **)(lVar1 + 0x50);
      uVar6 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(((int64_t)plVar3 - (int64_t)plVar2) / 0x18));
  }
  if (plVar2 == plVar3) {
    *(int64_t **)(lVar1 + 0x58) = plVar2;
  }
  else {
    do {
      if ((int64_t *)plVar2[1] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)plVar2[1] + 0x38))();
      }
      if ((int64_t *)*plVar2 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 3;
    } while (plVar2 != plVar3);
    *(uint64_t *)(lVar1 + 0x58) = *(uint64_t *)(lVar1 + 0x50);
  }
  return;
}





// 函数: 安全释放容器对象
// 作用: 安全地释放容器中的对象，避免内存泄漏
void safe_cleanup_container_objects(int64_t *container_ptr)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    if ((int64_t *)plVar2[1] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar2[1] + 0x38))();
    }
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  handle_memory_error();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 向容器添加对象
// 作用: 将新对象添加到容器中，必要时扩容
void add_object_to_container(int64_t *container_ptr, int64_t *object_ptr)

{
  uint64_t *container_end;
  int64_t *current_obj;
  int64_t *container_start;
  uint64_t *src_ptr;
  int64_t *new_obj_ptr;
  int64_t *old_obj_ptr;
  uint64_t *temp_ptr1;
  uint64_t *temp_ptr2;
  int64_t new_capacity;
  
  container_end = (uint64_t *)container_ptr[1];
  container_start = (uint64_t *)*container_ptr;
  new_capacity = ((int64_t)container_end - (int64_t)container_start) / 0x18;
  new_obj_ptr = (int64_t *)0x0;
  if (new_capacity == 0) {
    new_capacity = 1;
  }
  else {
    new_capacity = new_capacity * 2;
    if (new_capacity == 0) goto CAPACITY_CALCULATED;
  }
  new_obj_ptr = (int64_t *)
           allocate_container_memory(global_memory_allocator,new_capacity * 0x18,(char)container_ptr[3],container_start,0xfffffffffffffffe);
  container_end = (uint64_t *)container_ptr[1];
  container_start = (uint64_t *)*container_ptr;
CAPACITY_CALCULATED:
  new_obj_ptr = new_obj_ptr;
  if (container_start != container_end) {
    src_ptr = container_start + 1;
    do {
      *new_obj_ptr = src_ptr[-1];
      src_ptr[-1] = 0;
      *(uint64_t *)((int64_t)src_ptr + ((int64_t)new_obj_ptr - (int64_t)container_start)) = *src_ptr;
      *src_ptr = 0;
      *(int32_t *)(((int64_t)new_obj_ptr - (int64_t)container_start) + 8 + (int64_t)src_ptr) =
           *(int32_t *)(src_ptr + 1);
      new_obj_ptr = new_obj_ptr + 3;
      temp_ptr1 = src_ptr + 2;
      src_ptr = src_ptr + 3;
    } while (temp_ptr1 != container_end);
  }
  old_obj_ptr = (int64_t *)*object_ptr;
  *new_obj_ptr = (int64_t)old_obj_ptr;
  if (old_obj_ptr != (int64_t *)0x0) {
    (**(code **)(*old_obj_ptr + 0x28))();
  }
  old_obj_ptr = (int64_t *)object_ptr[1];
  new_obj_ptr[1] = (int64_t)old_obj_ptr;
  if (old_obj_ptr != (int64_t *)0x0) {
    (**(code **)(*old_obj_ptr + 0x28))();
  }
  *(int *)(new_obj_ptr + 2) = (int)object_ptr[2];
  old_obj_ptr = (int64_t *)container_ptr[1];
  container_start = (int64_t *)*container_ptr;
  if (container_start != old_obj_ptr) {
    do {
      if ((int64_t *)container_start[1] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)container_start[1] + 0x38))();
      }
      if ((int64_t *)*container_start != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*container_start + 0x38))();
      }
      container_start = container_start + 3;
    } while (container_start != old_obj_ptr);
    container_start = (int64_t *)*container_ptr;
  }
  if (container_start == (int64_t *)0x0) {
    *container_ptr = (int64_t)new_obj_ptr;
    container_ptr[1] = (int64_t)(new_obj_ptr + 3);
    container_ptr[2] = (int64_t)(new_obj_ptr + new_capacity * 3);
    return;
  }
                    // WARNING: Subroutine does not return
  handle_memory_error(container_start);
}





// 函数: 释放场景对象
// 作用: 释放场景中的所有对象，包括渲染对象和游戏对象
void release_scene_objects(int64_t *scene_ptr)

{
  int64_t scene_end;
  int64_t scene_current;
  
  scene_end = scene_ptr[1];
  scene_current = *scene_ptr;
  while( true ) {
    if (scene_current == scene_end) {
      if (*scene_ptr == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      handle_memory_error();
    }
    if (*(int64_t **)(scene_current + 0x40) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(scene_current + 0x40) + 0x38))();
    }
    if (*(int64_t *)(scene_current + 0x20) != 0) break;
    cleanup_game_object(scene_current);
    scene_current = scene_current + 0x48;
  }
                    // WARNING: Subroutine does not return
  handle_memory_error();
}





// 函数: void FUN_1801946e0(uint64_t *param_1)
void FUN_1801946e0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  
  uVar11 = 0;
  *param_1 = 0;
  *(int32_t *)(param_1 + 1) = 0;
  lVar10 = param_1[3];
  lVar5 = param_1[2];
  lVar3 = lVar10 - lVar5 >> 0x3f;
  uVar6 = uVar11;
  uVar12 = uVar11;
  if ((lVar10 - lVar5) / 0x48 + lVar3 != lVar3) {
    do {
      uVar8 = uVar11;
      uVar9 = uVar11;
      if (*(int64_t *)(uVar12 + 8 + lVar5) - *(int64_t *)(uVar12 + lVar5) >> 3 != 0) {
        do {
          plVar1 = *(int64_t **)(uVar9 + *(int64_t *)(uVar12 + lVar5));
          *(uint64_t *)(uVar9 + *(int64_t *)(uVar12 + lVar5)) = 0;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x38))();
          }
          uVar7 = (int)uVar8 + 1;
          lVar5 = param_1[2];
          uVar8 = (uint64_t)uVar7;
          uVar9 = uVar9 + 8;
        } while ((uint64_t)(int64_t)(int)uVar7 <
                 (uint64_t)(*(int64_t *)(uVar12 + 8 + lVar5) - *(int64_t *)(uVar12 + lVar5) >> 3)
                );
      }
      plVar1 = (int64_t *)(uVar12 + lVar5);
      plVar2 = (int64_t *)plVar1[1];
      plVar4 = (int64_t *)*plVar1;
      if (plVar4 != plVar2) {
        do {
          if ((int64_t *)*plVar4 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar4 + 0x38))();
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
        plVar4 = (int64_t *)*plVar1;
      }
      plVar1[1] = (int64_t)plVar4;
      plVar1 = *(int64_t **)(uVar12 + 0x40 + param_1[2]);
      *(uint64_t *)(uVar12 + 0x40 + param_1[2]) = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      uVar7 = (int)uVar6 + 1;
      lVar10 = param_1[3];
      lVar5 = param_1[2];
      uVar6 = (uint64_t)uVar7;
      uVar12 = uVar12 + 0x48;
    } while ((uint64_t)(int64_t)(int)uVar7 < (uint64_t)((lVar10 - lVar5) / 0x48));
  }
  if (lVar5 == lVar10) {
    param_1[3] = lVar5;
  }
  else {
    do {
      if (*(int64_t **)(lVar5 + 0x40) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar5 + 0x40) + 0x38))();
      }
      if (*(int64_t *)(lVar5 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
        handle_memory_error();
      }
      cleanup_game_object(lVar5);
      lVar5 = lVar5 + 0x48;
    } while (lVar5 != lVar10);
    param_1[3] = param_1[2];
  }
  return;
}





// 函数: 安全释放场景对象
// 作用: 安全地释放场景中的所有对象，防止内存泄漏
void safe_release_scene_objects(int64_t *scene_ptr)

{
  int64_t scene_end;
  int64_t scene_current;
  
  scene_end = scene_ptr[1];
  scene_current = *scene_ptr;
  while( true ) {
    if (scene_current == scene_end) {
      if (*scene_ptr == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      handle_memory_error();
    }
    if (*(int64_t **)(scene_current + 0x40) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(scene_current + 0x40) + 0x38))();
    }
    if (*(int64_t *)(scene_current + 0x20) != 0) break;
    cleanup_game_object(scene_current);
    scene_current = scene_current + 0x48;
  }
                    // WARNING: Subroutine does not return
  handle_memory_error();
}



// 函数: 矩阵变换计算
// 作用: 执行4x4矩阵的变换计算，用于3D图形渲染
float * matrix_transform_calculation(float *matrix_src, float *matrix_dest, float *vector)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[0xb];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar11 = param_3[1];
  fVar8 = *param_1;
  fVar9 = param_1[1];
  fVar10 = param_1[2];
  fVar12 = *param_3;
  fVar13 = param_3[2];
  *param_2 = fVar11 * fVar9 + fVar12 * fVar8 + fVar13 * fVar10;
  param_2[1] = fVar11 * fVar6 + fVar12 * fVar5 + fVar13 * fVar7;
  param_2[2] = fVar11 * fVar2 + fVar12 * fVar1 + fVar13 * fVar3;
  param_2[3] = fVar11 * fVar4 + fVar12 * fVar4 + fVar13 * fVar4;
  fVar11 = param_3[5];
  fVar12 = param_3[4];
  fVar13 = param_3[6];
  param_2[4] = fVar11 * fVar9 + fVar12 * fVar8 + fVar13 * fVar10;
  param_2[5] = fVar11 * fVar6 + fVar12 * fVar5 + fVar13 * fVar7;
  param_2[6] = fVar11 * fVar2 + fVar12 * fVar1 + fVar13 * fVar3;
  param_2[7] = fVar11 * fVar4 + fVar12 * fVar4 + fVar13 * fVar4;
  fVar11 = param_3[9];
  fVar12 = param_3[8];
  fVar13 = param_3[10];
  param_2[8] = fVar11 * fVar9 + fVar12 * fVar8 + fVar13 * fVar10;
  param_2[9] = fVar11 * fVar6 + fVar12 * fVar5 + fVar13 * fVar7;
  param_2[10] = fVar11 * fVar2 + fVar12 * fVar1 + fVar13 * fVar3;
  param_2[0xb] = fVar11 * fVar4 + fVar12 * fVar4 + fVar13 * fVar4;
  fVar13 = param_3[0xd] - param_1[0xd];
  fVar11 = param_3[0xc] - param_1[0xc];
  fVar12 = param_3[0xe] - param_1[0xe];
  param_2[0xc] = fVar13 * fVar9 + fVar11 * fVar8 + fVar12 * fVar10;
  param_2[0xd] = fVar13 * fVar6 + fVar11 * fVar5 + fVar12 * fVar7;
  param_2[0xe] = fVar13 * fVar2 + fVar11 * fVar1 + fVar12 * fVar3;
  param_2[0xf] = fVar13 * fVar4 + fVar11 * fVar4 + fVar12 * fVar4;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 向缓冲区添加字符
// 作用: 向字符缓冲区添加一个字符，必要时扩容
void add_char_to_buffer(int64_t *buffer_ptr, int8_t *char_ptr)

{
  int8_t *puVar1;
  int8_t *puVar2;
  int64_t lVar3;
  int8_t *puVar4;
  
  puVar4 = (int8_t *)param_1[1];
  if (puVar4 < (int8_t *)param_1[2]) {
    param_1[1] = (int64_t)(puVar4 + 1);
    *puVar4 = *param_2;
    return;
  }
  puVar2 = (int8_t *)*param_1;
  if ((int64_t)puVar4 - (int64_t)puVar2 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = ((int64_t)puVar4 - (int64_t)puVar2) * 2;
    if (lVar3 == 0) {
      puVar1 = (int8_t *)0x0;
      goto LAB_180194acf;
    }
  }
  puVar1 = (int8_t *)allocate_container_memory(global_memory_allocator,lVar3,(char)param_1[3]);
  puVar2 = (int8_t *)*param_1;
  puVar4 = (int8_t *)param_1[1];
LAB_180194acf:
  if (puVar2 != puVar4) {
                    // WARNING: Subroutine does not return
    memmove(puVar1,puVar2,(int64_t)puVar4 - (int64_t)puVar2);
  }
  *puVar1 = *param_2;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    handle_memory_error();
  }
  *param_1 = (int64_t)puVar1;
  param_1[1] = (int64_t)(puVar1 + 1);
  param_1[2] = (int64_t)(puVar1 + lVar3);
  return;
}





// 函数: 初始化图形对象
// 作用: 初始化图形对象，设置默认属性
void initialize_graphics_object(uint64_t object_handle)

{
  initialize_object_pool(param_1,0x30,4,default_object_constructor,0xfffffffffffffffe);
  return;
}



uint64_t *
FUN_180194b60(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &GLOBAL_OBJECT_POOL_VTABLE;
  *param_1 = &GLOBAL_TEXTURE_VTABLE;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



int32_t * FUN_180194c10(uint64_t param_1,int32_t *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x7f7fffff;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0x7f7fffff;
  reset_render_state(0);
  return param_2;
}



uint64_t *
FUN_180194c60(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &GLOBAL_SHADER_VTABLE;
  *param_1 = &GLOBAL_SCENE_VTABLE;
  *param_1 = &GLOBAL_RENDER_TARGET_VTABLE;
  *param_1 = &GLOBAL_BUFFER_VTABLE;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_180194cc0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &GLOBAL_MATERIAL_VTABLE;
  *param_1 = &GLOBAL_LIGHT_VTABLE;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180194d10(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)allocate_object_memory(global_memory_allocator,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (int64_t)&GLOBAL_BUFFER_VTABLE;
  *plVar1 = (int64_t)&GLOBAL_RENDER_TARGET_VTABLE;
  *(int32_t *)(plVar1 + 1) = 0;
  *plVar1 = (int64_t)&GLOBAL_SCENE_VTABLE;
  plVar1[2] = 0;
  *(int32_t *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (int64_t)&GLOBAL_SHADER_VTABLE;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(int32_t *)(plVar1 + 9) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x4c) = 0;
  *(int32_t *)(plVar1 + 10) = 0x3f800000;
  *(int32_t *)((int64_t)plVar1 + 0x54) = 0;
  *(int32_t *)(plVar1 + 0xb) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x5c) = 0;
  *(int32_t *)(plVar1 + 0xc) = 0;
  *(int32_t *)((int64_t)plVar1 + 100) = 0x3f800000;
  (**(code **)(*plVar1 + 0x138))(plVar1,param_4);
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180194e00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)allocate_object_memory(global_memory_allocator,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (int64_t)&GLOBAL_BUFFER_VTABLE;
  *plVar1 = (int64_t)&GLOBAL_RENDER_TARGET_VTABLE;
  *(int32_t *)(plVar1 + 1) = 0;
  *plVar1 = (int64_t)&GLOBAL_SCENE_VTABLE;
  plVar1[2] = 0;
  *(int32_t *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (int64_t)&GLOBAL_SHADER_VTABLE;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(int32_t *)(plVar1 + 9) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x4c) = 0;
  *(int32_t *)(plVar1 + 10) = 0x3f800000;
  *(int32_t *)((int64_t)plVar1 + 0x54) = 0;
  *(int32_t *)(plVar1 + 0xb) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x5c) = 0;
  *(int32_t *)(plVar1 + 0xc) = 0;
  *(int32_t *)((int64_t)plVar1 + 100) = 0x3f800000;
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))();
  (**(code **)(*(int64_t *)*param_2 + 0x138))((int64_t *)*param_2,param_4);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180194ef0(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  puVar1 = (uint64_t *)allocate_object_memory(global_memory_allocator,8,8,3,0xfffffffffffffffe);
  *puVar1 = &GLOBAL_TEXTURE_VTABLE;
  *puVar1 = &GLOBAL_OBJECT_POOL_VTABLE;
  puVar5 = *(uint64_t **)(param_1 + 0x30);
  if (puVar5 < *(uint64_t **)(param_1 + 0x38)) {
    *(uint64_t **)(param_1 + 0x30) = puVar5 + 1;
    *puVar5 = puVar1;
    return puVar1;
  }
  puVar4 = *(uint64_t **)(param_1 + 0x28);
  lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      puVar3 = (uint64_t *)0x0;
      goto LAB_180194fa5;
    }
  }
  puVar3 = (uint64_t *)allocate_container_memory(global_memory_allocator,lVar2 * 8,*(int8_t *)(param_1 + 0x40));
  puVar5 = *(uint64_t **)(param_1 + 0x30);
  puVar4 = *(uint64_t **)(param_1 + 0x28);
LAB_180194fa5:
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(puVar3,puVar4,(int64_t)puVar5 - (int64_t)puVar4);
  }
  *puVar3 = puVar1;
  if (*(int64_t *)(param_1 + 0x28) == 0) {
    *(uint64_t **)(param_1 + 0x28) = puVar3;
    *(uint64_t **)(param_1 + 0x30) = puVar3 + 1;
    *(uint64_t **)(param_1 + 0x38) = puVar3 + lVar2;
    return puVar1;
  }
                    // WARNING: Subroutine does not return
  handle_memory_error();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180195000(uint64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)allocate_object_memory(global_memory_allocator,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (int64_t)&GLOBAL_BUFFER_VTABLE;
  *plVar1 = (int64_t)&GLOBAL_RENDER_TARGET_VTABLE;
  *(int32_t *)(plVar1 + 1) = 0;
  *plVar1 = (int64_t)&GLOBAL_SCENE_VTABLE;
  plVar1[2] = 0;
  *(int32_t *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (int64_t)&GLOBAL_SHADER_VTABLE;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(int32_t *)(plVar1 + 9) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x4c) = 0;
  *(int32_t *)(plVar1 + 10) = 0x3f800000;
  *(int32_t *)((int64_t)plVar1 + 0x54) = 0;
  *(int32_t *)(plVar1 + 0xb) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x5c) = 0;
  *(int32_t *)(plVar1 + 0xc) = 0;
  *(int32_t *)((int64_t)plVar1 + 100) = 0x3f800000;
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))();
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801950d0(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puStackX_8;
  
  puVar1 = (uint64_t *)allocate_object_memory(global_memory_allocator,8,8,3,0xfffffffffffffffe);
  *puVar1 = &GLOBAL_LIGHT_VTABLE;
  *puVar1 = &GLOBAL_MATERIAL_VTABLE;
  puStackX_8 = puVar1;
  register_shader_object(param_1 + 0x48,&puStackX_8);
  return puVar1;
}





// 函数: 释放纹理资源
// 作用: 释放纹理资源及相关内存
void release_texture_resource(int64_t texture_id, uint64_t *resource_ptr)

{
  int64_t lVar1;
  
  release_texture_data(param_1 + 0x28);
  if (param_2 != (uint64_t *)0x0) {
    lVar1 = cast_to_void(param_2);
    (**(code **)*param_2)(param_2,0);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      handle_memory_error(lVar1);
    }
  }
  return;
}





// 函数: 清理纹理缓存
// 作用: 清理纹理缓存中的所有纹理
void cleanup_texture_cache(void)

{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  
  lVar1 = cast_to_void();
  (**(code **)*unaff_RBX)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    handle_memory_error(lVar1);
  }
  return;
}





// 函数: 空操作函数
// 作用: 空操作，用于占位或同步
void nop_function(void)

{
  return;
}





// 函数: 释放着色器资源
// 作用: 释放着色器资源及相关内存
void release_shader_resource(int64_t shader_id, uint64_t *resource_ptr)

{
  int64_t lVar1;
  
  release_texture_data(param_1 + 0x48);
  if (param_2 != (uint64_t *)0x0) {
    lVar1 = cast_to_void(param_2);
    (**(code **)*param_2)(param_2,0);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      handle_memory_error(lVar1);
    }
  }
  return;
}





// 函数: 清理着色器缓存
// 作用: 清理着色器缓存中的所有着色器
void cleanup_shader_cache(void)

{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  
  lVar1 = cast_to_void();
  (**(code **)*unaff_RBX)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    handle_memory_error(lVar1);
  }
  return;
}





// 函数: void FUN_1801951d4(void)
void FUN_1801951d4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801951e0(uint64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)allocate_object_memory(global_memory_allocator,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (int64_t)&GLOBAL_BUFFER_VTABLE;
  *plVar1 = (int64_t)&GLOBAL_RENDER_TARGET_VTABLE;
  *(int32_t *)(plVar1 + 1) = 0;
  *plVar1 = (int64_t)&GLOBAL_SCENE_VTABLE;
  plVar1[2] = 0;
  *(int32_t *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (int64_t)&GLOBAL_SHADER_VTABLE;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(int32_t *)(plVar1 + 9) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x4c) = 0;
  *(int32_t *)(plVar1 + 10) = 0x3f800000;
  *(int32_t *)((int64_t)plVar1 + 0x54) = 0;
  *(int32_t *)(plVar1 + 0xb) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x5c) = 0;
  *(int32_t *)(plVar1 + 0xc) = 0;
  *(int32_t *)((int64_t)plVar1 + 100) = 0x3f800000;
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))();
  return param_2;
}



uint64_t * FUN_1801952b0(uint64_t param_1,uint64_t *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



uint64_t *
FUN_1801952e0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &GLOBAL_RESOURCE_MANAGER_VTABLE;
  initialize_graphics_system();
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t FUN_180195330(int64_t param_1,int param_2,int param_3)

{
  int64_t lVar1;
  int *piVar2;
  
  lVar1 = *(int64_t *)(param_1 + 0x40);
  for (piVar2 = *(int **)(lVar1 + ((uint64_t)(int64_t)(param_2 * 1000 + param_3) %
                                  (uint64_t)*(uint *)(param_1 + 0x48)) * 8); piVar2 != (int *)0x0;
      piVar2 = *(int **)(piVar2 + 4)) {
    if ((param_2 == *piVar2) && (param_3 == piVar2[1])) goto LAB_180195376;
  }
  piVar2 = (int *)0x0;
LAB_180195376:
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)(lVar1 + *(int64_t *)(param_1 + 0x48) * 8);
  }
  if (piVar2 != *(int **)(lVar1 + *(int64_t *)(param_1 + 0x48) * 8)) {
    return *(uint64_t *)(piVar2 + 2);
  }
  return 0;
}



uint64_t *
FUN_1801953d0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &DEFAULT_STRING_BUFFER;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &DEFAULT_STRING_HANDLER;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 8;
  strcpy_s(param_2[1],0x80,&DEFAULT_STRING_FORMAT,param_4,0,0xfffffffffffffffe);
  return param_2;
}





// 函数: void FUN_180195450(int64_t param_1)
void FUN_180195450(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  lVar1 = *(int64_t *)(param_1 + 0x40);
  if (lVar1 == 0) {
    return;
  }
  uVar4 = 0;
  uVar2 = *(uint64_t *)(lVar1 + -0x10);
  uVar3 = uVar2 >> 0x20;
  if ((int)(uVar2 >> 0x20) != 0) {
    do {
      FUN_180195450(uVar4 + lVar1);
      uVar4 = (uint64_t)(uint)((int)uVar4 + (int)uVar2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
                    // WARNING: Subroutine does not return
  handle_memory_error(lVar1 + -0x10);
}





// 函数: void FUN_180195464(void)
void FUN_180195464(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RDI;
  
  uVar3 = 0;
  uVar1 = *(uint64_t *)(unaff_RDI + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      FUN_180195450(uVar3 + unaff_RDI);
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  handle_memory_error(unaff_RDI + -0x10);
}





// 函数: void FUN_180195484(void)
void FUN_180195484(void)

{
  int64_t in_RAX;
  uint unaff_EBX;
  int unaff_EBP;
  int64_t unaff_RDI;
  
  do {
    FUN_180195450((uint64_t)unaff_EBX + unaff_RDI);
    unaff_EBX = unaff_EBX + unaff_EBP;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
                    // WARNING: Subroutine does not return
  handle_memory_error(unaff_RDI + -0x10);
}





// 函数: void FUN_1801954a7(void)
void FUN_1801954a7(void)

{
  int64_t unaff_RDI;
  
                    // WARNING: Subroutine does not return
  handle_memory_error(unaff_RDI + -0x10);
}






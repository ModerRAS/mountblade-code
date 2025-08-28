#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part015.c - 23 个函数

/**
 * 清理对象数组的内存和资源
 * 释放数组中所有对象的内存，并清理相关的虚拟表指针
 * 
 * @param object_array_ptr 对象数组指针
 */
void cleanup_object_array(int64_t object_array_ptr)

{
  int64_t array_data_ptr;
  int64_t object_ptr;
  uint64_t array_size;
  uint64_t index;
  
  array_size = *(uint64_t *)(object_array_ptr + 0x10);
  array_data_ptr = *(int64_t *)(object_array_ptr + 8);
  index = 0;
  if (array_size != 0) {
    do {
      object_ptr = *(int64_t *)(array_data_ptr + index * 8);
      if (object_ptr != 0) {
        if (*(int64_t **)(object_ptr + 0x10) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(object_ptr + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(object_ptr);
      }
      *(uint64_t *)(array_data_ptr + index * 8) = 0;
      index = index + 1;
    } while (index < array_size);
    array_size = *(uint64_t *)(object_array_ptr + 0x10);
  }
  *(uint64_t *)(object_array_ptr + 0x18) = 0;
  if ((1 < array_size) && (*(int64_t *)(object_array_ptr + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}



/**
 * 初始化对象容器
 * 设置对象容器的基本结构和初始值
 * 
 * @param container_ptr 容器指针
 * @return 返回初始化后的容器指针
 */
int64_t initialize_object_container(int64_t container_ptr)

{
  *(uint64_t *)(container_ptr + 8) = &system_state_ptr;
  *(uint64_t *)(container_ptr + 0x10) = 0;
  *(int32_t *)(container_ptr + 0x18) = 0;
  *(uint64_t *)(container_ptr + 8) = &system_data_buffer_ptr;
  *(uint64_t *)(container_ptr + 0x20) = 0;
  *(uint64_t *)(container_ptr + 0x10) = 0;
  *(int32_t *)(container_ptr + 0x18) = 0;
  return container_ptr;
}





/**
 * 清理并重置对象容器
 * 释放容器资源并重置为初始状态
 * 
 * @param container_ptr 容器指针
 */
void cleanup_and_reset_container(int64_t container_ptr)

{
  *(uint64_t *)(container_ptr + 8) = &system_data_buffer_ptr;
  if (*(int64_t *)(container_ptr + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *(uint64_t *)(container_ptr + 0x10) = 0;
  *(int32_t *)(container_ptr + 0x20) = 0;
  *(uint64_t *)(container_ptr + 8) = &system_state_ptr;
  return;
}





/**
 * 处理对象容器操作
 * 调用内部函数处理容器的具体操作
 * 
 * @param container_ptr 容器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void process_container_operation(int64_t container_ptr, uint64_t param2, uint64_t param3, uint64_t param4)

{
  FUN_180058210(container_ptr, *(uint64_t *)(container_ptr + 0x10), param3, param4, 0xfffffffffffffffe);
  return;
}





/**
 * 清理对象数组资源
 * 释放数组中所有对象的内存和资源
 * 
 * @param array_ptr 数组指针
 */
void cleanup_object_array_resources(int64_t array_ptr)

{
  int64_t array_data_ptr;
  int64_t object_ptr;
  uint64_t array_size;
  uint64_t index;
  
  array_size = *(uint64_t *)(array_ptr + 0x10);
  array_data_ptr = *(int64_t *)(array_ptr + 8);
  index = 0;
  if (array_size != 0) {
    do {
      object_ptr = *(int64_t *)(array_data_ptr + index * 8);
      if (object_ptr != 0) {
        if (*(int64_t **)(object_ptr + 0x10) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(object_ptr + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(object_ptr);
      }
      *(uint64_t *)(array_data_ptr + index * 8) = 0;
      index = index + 1;
    } while (index < array_size);
    array_size = *(uint64_t *)(array_ptr + 0x10);
  }
  *(uint64_t *)(array_ptr + 0x18) = 0;
  if ((1 < array_size) && (*(int64_t *)(array_ptr + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 安全退出程序
 * 等待2秒后安全退出程序
 * 
 * @param param1 参数1
 * @param exit_code 退出代码
 */
void safe_exit_program(uint64_t param1, int32_t exit_code)

{
  code *pcVar1;
  
  if (system_cache_buffer != 0) {
    func_0x00018005a410(system_cache_buffer + 8);
  }
  Sleep(2000);
  _Exit(exit_code);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化系统配置
 * 线程安全地初始化系统配置数据
 */
void initialize_system_configuration(void)

{
  uint64_t *config_ptr;
  uint64_t old_config;
  char *base_config;
  int lock_result;
  char *config_item;
  uint64_t in_R9;
  uint64_t config_flag;
  
  base_config = core_system_data_config;
  config_flag = 0xfffffffffffffffe;
  if (*core_system_data_config != '\0') {
    config_ptr = (uint64_t *)*core_system_data_config;
    lock_result = _Mtx_lock(0x180c91970);
    if (lock_result != 0) {
      __Throw_C_error_std__YAXH_Z(lock_result);
    }
    old_config = SYSTEM_DATA_MANAGER_A;
    SYSTEM_DATA_MANAGER_A = *config_ptr;
    FUN_1801299b0(&processed_var_6880_ptr, 0, 0, in_R9, config_flag);
    SystemCore_CacheManager0(&processed_var_6896_ptr, *(int32_t *)(base_config + 4));
    SystemCore_CacheManager0(&processed_var_6928_ptr, *(int32_t *)(base_config + 8));
    SystemCore_CacheManager0(&processed_var_6960_ptr, *(int32_t *)(base_config + 0xc));
    SystemCore_CacheManager0(&processed_var_6992_ptr, *(int32_t *)(base_config + 0x10));
    SystemCore_CacheManager0(&processed_var_7024_ptr, *(int32_t *)(base_config + 0x14));
    SystemCore_CacheManager0(&processed_var_7064_ptr, *(int32_t *)(base_config + 0x18));
    for (config_item = *(char **)(base_config + 0x28); config_item != base_config + 0x20;
        config_item = (char *)func_0x00018066bd70(config_item)) {
      SystemCore_CacheManager0(&processed_var_7104_ptr, *(int32_t *)(config_item + 0x20), *(int32_t *)(config_item + 0x24));
    }
    for (config_item = *(char **)(base_config + 0x58); config_item != base_config + 0x50;
        config_item = (char *)func_0x00018066bd70(config_item)) {
      SystemCore_CacheManager0(&processed_var_7144_ptr, *(int32_t *)(config_item + 0x20), *(int32_t *)(config_item + 0x24));
    }
    SystemCore_CacheManager0(&processed_var_7184_ptr, *(int32_t *)(base_config + 0x80));
    SystemCore_CacheManager0(&processed_var_7224_ptr, *(int32_t *)(base_config + 0x84));
    SystemCore_CacheManager0(&processed_var_7264_ptr, *(int32_t *)(base_config + 0x88));
    FUN_18012cfe0();
    SYSTEM_DATA_MANAGER_A = old_config;
    lock_result = _Mtx_unlock(0x180c91970);
    if (lock_result != 0) {
      __Throw_C_error_std__YAXH_Z(lock_result);
    }
  }
  return;
}





/**
 * 合并和处理对象数组
 * 遍历对象数组，合并重复项并处理相关数据
 * 
 * @param param_1 对象数组指针
 */
void merge_and_process_object_array(int64_t param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int iVar13;
  int64_t lVar14;
  int iVar15;
  int64_t lVar16;
  int iVar17;
  uint64_t uVar18;
  int iVar19;
  bool bVar20;
  
  uVar10 = 0;
  lVar9 = *(int64_t *)(param_1 + 0x50);
  lVar12 = *(int64_t *)(param_1 + 0x48);
  if (lVar9 - lVar12 >> 3 != 0) {
    iVar19 = 1;
    lVar16 = 8;
    uVar18 = uVar10;
    do {
      iVar17 = (int)uVar10;
      iVar6 = -1;
      if ((uint64_t)(int64_t)iVar19 < (uint64_t)(lVar9 - lVar12 >> 3)) {
        lVar9 = *(int64_t *)(param_1 + 0x50);
        lVar14 = lVar16;
        iVar13 = iVar19;
        iVar15 = -1;
        do {
          iVar6 = *(int *)(*(int64_t *)(lVar14 + lVar12) + 0x10);
          iVar3 = *(int *)(*(int64_t *)(uVar18 + lVar12) + 0x10);
          if (iVar6 == iVar3) {
            if (iVar6 == 0) {
LAB_180056220:
              if (iVar3 != 0) goto LAB_180056228;
              bVar20 = true;
            }
            else {
              pcVar7 = *(char **)(*(int64_t *)(lVar14 + lVar12) + 8);
              lVar11 = *(int64_t *)(*(int64_t *)(uVar18 + lVar12) + 8) - (int64_t)pcVar7;
              do {
                cVar1 = *pcVar7;
                cVar2 = pcVar7[lVar11];
                if (cVar1 != cVar2) break;
                pcVar7 = pcVar7 + 1;
              } while (cVar2 != '\0');
              bVar20 = cVar1 == cVar2;
            }
          }
          else {
            if (iVar6 == 0) goto LAB_180056220;
LAB_180056228:
            bVar20 = false;
          }
          iVar6 = iVar13;
          if (!bVar20) {
            iVar6 = iVar15;
          }
          iVar13 = iVar13 + 1;
          lVar14 = lVar14 + 8;
          iVar15 = iVar6;
        } while ((uint64_t)(int64_t)iVar13 < (uint64_t)(lVar9 - lVar12 >> 3));
      }
      if (iVar6 != -1) {
        lVar14 = (int64_t)iVar6;
        lVar9 = *(int64_t *)(lVar12 + lVar14 * 8);
        *(double *)(*(int64_t *)(uVar18 + lVar12) + 0x40) =
             *(double *)(lVar9 + 0x40) + *(double *)(*(int64_t *)(uVar18 + lVar12) + 0x40);
        plVar8 = *(int64_t **)(lVar9 + 0x48);
        if (plVar8 != *(int64_t **)(lVar9 + 0x50)) {
          lVar12 = *(int64_t *)(param_1 + 0x48);
          do {
            *(uint64_t *)(*plVar8 + 0x68) = *(uint64_t *)(uVar18 + lVar12);
            plVar8 = plVar8 + 1;
            lVar12 = *(int64_t *)(param_1 + 0x48);
          } while (plVar8 != *(int64_t **)(*(int64_t *)(lVar12 + lVar14 * 8) + 0x50));
        }
        lVar9 = *(int64_t *)(lVar12 + lVar14 * 8);
        FUN_180058a20(*(int64_t *)(uVar18 + lVar12) + 0x48,
                      *(uint64_t *)(*(int64_t *)(uVar18 + lVar12) + 0x50),
                      *(uint64_t *)(lVar9 + 0x48),*(uint64_t *)(lVar9 + 0x50));
        lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x48) + lVar14 * 8);
        *(uint64_t *)(lVar9 + 0x50) = *(uint64_t *)(lVar9 + 0x48);
        FUN_180056150(*(uint64_t *)(uVar18 + *(int64_t *)(param_1 + 0x48)));
        FUN_180056410(*(uint64_t *)(*(int64_t *)(param_1 + 0x48) + lVar14 * 8));
        puVar4 = *(uint64_t **)(*(int64_t *)(param_1 + 0x48) + lVar14 * 8);
        if (puVar4 != (uint64_t *)0x0) {
          if (puVar4[9] != 0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          puVar4[4] = &system_data_buffer_ptr;
          if (puVar4[5] == 0) {
            puVar4[5] = 0;
            *(int32_t *)(puVar4 + 7) = 0;
            puVar4[4] = &system_state_ptr;
            *puVar4 = &system_data_buffer_ptr;
            if (puVar4[1] == 0) {
              puVar4[1] = 0;
              *(int32_t *)(puVar4 + 3) = 0;
              *puVar4 = &system_state_ptr;
                    // WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager(puVar4);
            }
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *(uint64_t *)(*(int64_t *)(param_1 + 0x48) + lVar14 * 8) = 0;
        lVar9 = *(int64_t *)(param_1 + 0x48) + lVar14 * 8;
        uVar10 = lVar9 + 8;
        uVar5 = *(uint64_t *)(param_1 + 0x50);
        if (uVar10 < uVar5) {
                    // WARNING: Subroutine does not return
          memmove(lVar9,uVar10,uVar5 - uVar10);
        }
        lVar9 = uVar5 - 8;
        *(int64_t *)(param_1 + 0x50) = lVar9;
        iVar17 = iVar17 + -1;
        iVar19 = iVar19 + -1;
        uVar18 = uVar18 - 8;
        lVar16 = lVar16 + -8;
      }
      uVar10 = (uint64_t)(iVar17 + 1U);
      iVar19 = iVar19 + 1;
      uVar18 = uVar18 + 8;
      lVar16 = lVar16 + 8;
      lVar12 = *(int64_t *)(param_1 + 0x48);
    } while ((uint64_t)(int64_t)(int)(iVar17 + 1U) < (uint64_t)(lVar9 - lVar12 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 递归清理对象资源
 * 递归地清理对象及其子对象的资源
 * 
 * @param param_1 对象指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 */
void recursively_cleanup_object_resources(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  uVar3 = 0;
  puVar1 = (uint64_t *)(param_1 + 0x48);
  uVar4 = *puVar1;
  uVar5 = uVar3;
  uVar8 = uVar3;
  if ((int64_t)(*(int64_t *)(param_1 + 0x50) - uVar4) >> 3 != 0) {
    do {
      FUN_180056410(*(uint64_t *)(uVar4 + uVar5));
      puVar2 = *(uint64_t **)(*puVar1 + uVar5);
      if (puVar2 != (uint64_t *)0x0) {
        if (puVar2[9] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        puVar2[4] = &system_data_buffer_ptr;
        if (puVar2[5] == 0) {
          puVar2[5] = 0;
          *(int32_t *)(puVar2 + 7) = 0;
          puVar2[4] = &system_state_ptr;
          *puVar2 = &system_data_buffer_ptr;
          if (puVar2[1] == 0) {
            puVar2[1] = 0;
            *(int32_t *)(puVar2 + 3) = 0;
            *puVar2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager(puVar2);
          }
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      *(uint64_t *)(*puVar1 + uVar5) = 0;
      uVar7 = (int)uVar8 + 1;
      uVar4 = *puVar1;
      uVar5 = uVar5 + 8;
      uVar8 = (uint64_t)uVar7;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)((int64_t)(*(int64_t *)(param_1 + 0x50) - uVar4) >> 3));
  }
  FUN_180057340(puVar1,0);
  uVar4 = *(uint64_t *)(param_1 + 0x50);
  uVar5 = *puVar1;
  uVar7 = *(uint *)(param_1 + 0x60);
  lVar9 = uVar4 - uVar5;
  lVar6 = lVar9 >> 3;
  if (lVar6 != 0) {
    uVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,uVar7 & 0xff,param_4,uVar10,0,0,0,uVar7);
  }
  lVar6 = uVar3 + lVar6 * 8;
  if (uVar5 == uVar4) {
    uVar4 = *puVar1;
    *puVar1 = uVar3;
    *(int64_t *)(param_1 + 0x50) = lVar6;
    *(int64_t *)(param_1 + 0x58) = lVar6;
    *(uint *)(param_1 + 0x60) = uVar7;
    if (uVar4 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
                    // WARNING: Subroutine does not return
  memmove(uVar3,uVar5,lVar9,param_4,uVar10,uVar3,lVar6,lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化对象管理器
 * 创建并初始化对象管理器的相关数据结构
 * 
 * @param param_1 对象管理器指针
 */
void initialize_object_manager(int64_t *param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int8_t auStack_98 [32];
  int64_t lStack_78;
  int64_t *plStack_68;
  int64_t **pplStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  int8_t auStack_38 [16];
  uint64_t uStack_28;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  plVar4 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3);
  pplStack_60 = (int64_t **)plVar4;
  FUN_180049830(plVar4);
  *plVar4 = (int64_t)&processed_var_7704_ptr;
  plVar4[0x18] = 0;
  *(int32_t *)(plVar4 + 0x19) = 0;
  plStack_68 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plStack_68 = (int64_t *)*param_1;
  *param_1 = (int64_t)plVar4;
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  lVar3 = system_context_ptr;
  puStack_50 = &system_config_ptr;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0xc;
  strcpy_s(auStack_38,0x10,&processed_var_7296_ptr);
  plVar4 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x208,8,3);
  lStack_78 = lVar3 + 0x70;
  pplStack_60 = (int64_t **)plVar4;
  FUN_18020e0e0(plVar4,&puStack_50,3,lVar3 + 0x2e0);
  *plVar4 = (int64_t)&processed_var_9056_ptr;
  plStack_68 = plVar4;
  FUN_18020e840(plVar4);
  FUN_18005ea90(lVar3 + 0x48,&plStack_68);
  param_1[1] = (int64_t)plVar4;
  puStack_50 = &system_state_ptr;
  puVar1 = (uint64_t *)param_1[1];
  pcVar2 = *(code **)*puVar1;
  pplStack_60 = &plStack_68;
  plStack_68 = (int64_t *)*param_1;
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x28))();
  }
  (*pcVar2)(puVar1,&plStack_68);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_98);
}



/**
 * 释放对象内存
 * 根据标志位释放对象的内存资源
 * 
 * @param param_1 对象指针
 * @param param_2 释放标志
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 返回对象指针
 */
uint64_t release_object_memory(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 监控和报告系统状态
 * 定期检查系统状态并生成报告
 * 
 * @param param_1 监控器指针
 */
void monitor_and_report_system_status(int64_t param_1)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  int64_t lVar8;
  void *puVar9;
  int8_t auStack_c8 [32];
  int8_t uStack_a8;
  int8_t uStack_a0;
  void *puStack_98;
  void *puStack_90;
  uint uStack_88;
  uint64_t uStack_80;
  int64_t lStack_78;
  int64_t alStack_70 [2];
  char acStack_60 [16];
  uint64_t uStack_50;
  
  alStack_70[1] = 0xfffffffffffffffe;
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  lVar4 = core_system_data_config;
  if (core_system_data_config == 0) {
    QueryPerformanceCounter(&lStack_78);
    lVar4 = lStack_78;
  }
  *(double *)(param_1 + 0xc0) = (double)(lVar4 - core_system_data_config) * core_system_data_config;
  LOCK();
  *(int32_t *)(param_1 + 200) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)(param_1 + 0xcc) = 1;
  UNLOCK();
  while( true ) {
    do {
      if (*(int *)(param_1 + 0xcc) == 0) {
                    // WARNING: Subroutine does not return
        SystemSecurityChecker(uStack_50 ^ (uint64_t)auStack_c8);
      }
      Sleep(10);
      lVar4 = core_system_data_config;
      if (core_system_data_config == 0) {
        QueryPerformanceCounter(alStack_70);
        lVar4 = alStack_70[0];
      }
      dVar2 = (double)(lVar4 - core_system_data_config) * core_system_data_config;
    } while ((system_memory_2853 == '\0') || (dVar2 - *(double *)(param_1 + 0xc0) <= 900.0));
    LOCK();
    *(int32_t *)(param_1 + 200) = 1;
    UNLOCK();
    puStack_98 = &system_data_buffer_ptr;
    uStack_80 = 0;
    puStack_90 = (void *)0x0;
    uStack_88 = 0;
    CoreMemoryPoolProcessor(&puStack_98,0x1c);
    puVar5 = (int32_t *)(puStack_90 + uStack_88);
    *puVar5 = 0x73736f50;
    puVar5[1] = 0x656c6269;
    puVar5[2] = 0x61656420;
    puVar5[3] = 0x636f6c64;
    *(uint64_t *)(puVar5 + 4) = 0x746365746564206b;
    puVar5[6] = 0x202c6465;
    *(int8_t *)(puVar5 + 7) = 0;
    uStack_88 = 0x1c;
    CoreMemoryPoolProcessor(&puStack_98,0x3e);
    puVar5 = (int32_t *)(puStack_90 + uStack_88);
    *puVar5 = 0x69676e65;
    puVar5[1] = 0x6420656e;
    puVar5[2] = 0x6e206469;
    puVar5[3] = 0x7220746f;
    puVar5[4] = 0x65646e65;
    puVar5[5] = 0x20612072;
    puVar5[6] = 0x6d617266;
    puVar5[7] = 0x6f662065;
    *(int16_t *)(puVar5 + 8) = 0x2072;
    *(int8_t *)((int64_t)puVar5 + 0x22) = 0;
    uStack_88 = 0x3e;
    FUN_180060680(acStack_60,&processed_var_4576_ptr,900);
    uVar3 = uStack_88;
    lVar4 = -1;
    do {
      lVar8 = lVar4;
      lVar4 = lVar8 + 1;
    } while (acStack_60[lVar8 + 1] != '\0');
    iVar7 = (int)(lVar8 + 1);
    if (0 < iVar7) break;
    uVar1 = uStack_88 + 10;
    CoreMemoryPoolProcessor(&puStack_98,uVar1);
    puVar6 = (uint64_t *)(puStack_90 + uStack_88);
    *puVar6 = 0x73646e6f63657320;
    *(int16_t *)(puVar6 + 1) = 0x2021;
    *(int8_t *)((int64_t)puVar6 + 10) = 0;
    uStack_88 = uVar1;
    CoreMemoryPoolProcessor(&puStack_98,uVar3 + 0x2b);
    puVar5 = (int32_t *)(puStack_90 + uStack_88);
    *puVar5 = 0x65766544;
    puVar5[1] = 0x65706f6c;
    puVar5[2] = 0x6e692072;
    puVar5[3] = 0x76726574;
    puVar5[4] = 0x69746e65;
    puVar5[5] = 0x73206e6f;
    puVar5[6] = 0x65676775;
    puVar5[7] = 0x64657473;
    *(int16_t *)(puVar5 + 8) = 0x2e;
    puVar9 = &system_buffer_ptr;
    if (puStack_90 != (void *)0x0) {
      puVar9 = puStack_90;
    }
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_88 = uVar3 + 0x2b;
    (**(code **)(*(int64_t *)*core_system_data_config + 0x20))
              ((int64_t *)*core_system_data_config,&processed_var_7440_ptr,0x175c,puVar9);
    *(double *)(param_1 + 0xc0) = dVar2;
    puStack_98 = &system_data_buffer_ptr;
    if (puStack_90 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_90 = (void *)0x0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    puStack_98 = &system_state_ptr;
  }
  CoreMemoryPoolProcessor(&puStack_98,uStack_88 + iVar7);
                    // WARNING: Subroutine does not return
  memcpy(puStack_90 + uStack_88,acStack_60,(int64_t)((int)lVar8 + 2));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 执行系统清理操作
 * 执行系统的清理和关闭操作
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 */
void execute_system_cleanup(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char cVar2;
  int8_t auStack_30 [16];
  void *puStack_20;
  void *puStack_18;
  
  FUN_1800b4ec0(param_1,1,1,param_4,0xfffffffffffffffe);
  if (system_cache_buffer != (int64_t *)0x0) {
    cVar2 = (**(code **)(*system_cache_buffer + 0x48))();
    if ((cVar2 != '\0') && (system_cache_buffer[2] != 0)) {
      (*(code *)system_cache_buffer[0x11])(0);
    }
  }
  puStack_20 = &processed_var_5200_ptr;
  puStack_18 = &processed_var_5168_ptr;
  FUN_18005c650(auStack_30);
  *(int8_t *)(core_system_data_config + 0x3a0) = 1;
  FUN_18005e630(system_context_ptr);
  FUN_18005e630(system_context_ptr);
  if (core_system_data_config != 0) {
    FUN_18006eb30();
  }
  FUN_18005e630(system_context_ptr);
  FUN_18005e630(system_context_ptr);
  FUN_18005e630(system_context_ptr);
  if (core_system_data_config != 0) {
    FUN_18006eb30();
  }
  FUN_18005e630(system_context_ptr);
  FUN_1800b4ec0();
  lVar1 = system_parameter_buffer;
  *(int8_t *)(system_parameter_buffer + 0x1504) = 0;
  *(int8_t *)(lVar1 + 0x1506) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理异步操作
 * 处理系统的异步操作和回调
 * 
 * @param param_1 参数1
 * @param param_2 参数2指针
 * @param param_3 参数3
 */
void process_async_operation(uint64_t param_1,uint64_t *param_2,int32_t param_3)

{
  uint64_t uVar1;
  void **ppuVar2;
  int8_t auStack_158 [32];
  void **ppuStack_138;
  void ***pppuStack_130;
  uint64_t uStack_128;
  uint64_t *puStack_120;
  void **ppuStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [128];
  int32_t uStack_70;
  uint64_t uStack_58;
  int32_t uStack_50;
  uint64_t uStack_28;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  ppuStack_138 = &puStack_108;
  puStack_108 = &memory_allocator_3432_ptr;
  puStack_100 = auStack_f0;
  uStack_f8 = 0;
  auStack_f0[0] = 0;
  uStack_70 = 0x17;
  puStack_120 = param_2;
  uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  uStack_58 = SystemCore_NetworkHandler0(uVar1,param_2);
  uStack_50 = param_3;
  uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
  ppuVar2 = (void **)FUN_18005ce30(uVar1,&puStack_108);
  ppuStack_118 = ppuVar2;
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  uVar1 = system_context_ptr;
  pppuStack_130 = &ppuStack_138;
  ppuStack_138 = ppuVar2;
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  FUN_18005e370(uVar1,&ppuStack_138);
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x38))(ppuVar2);
  }
  pppuStack_130 = (void ***)&puStack_108;
  puStack_108 = &system_state_ptr;
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_158);
}



/**
 * 重置对象指针数组
 * 重置对象指针数组为初始状态
 * 
 * @param param_1 对象指针数组
 * @return 返回重置后的数组指针
 */
uint64_t * reset_object_pointer_array(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}



/**
 * 清空对象指针数组
 * 清空对象指针数组的内容
 * 
 * @param param_1 对象指针数组
 * @return 返回清空后的数组指针
 */
uint64_t * clear_object_pointer_array(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}





/**
 * 初始化对象池
 * 初始化对象池的相关数据结构
 */
void initialize_object_pool(void)

{
  FUN_180057010();
  return;
}



/**
 * 设置对象池配置
 * 设置对象池的配置参数
 * 
 * @param param_1 对象池配置指针
 * @return 返回配置后的指针
 */
uint64_t * configure_object_pool(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 10;
  return param_1;
}



/**
 * 初始化高级对象池
 * 初始化高级对象池的完整数据结构
 * 
 * @param param_1 高级对象池指针
 * @return 返回初始化后的指针
 */
uint64_t * initialize_advanced_object_pool(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0x60f] = 0;
  param_1[0x610] = 0;
  puVar1 = param_1 + 0xf;
  param_1[0xc] = puVar1;
  param_1[0xd] = (uint64_t)(-(int)puVar1 & 7) + (int64_t)puVar1;
  param_1[0xe] = param_1 + 0x60f;
  param_1[0x60f] = &processed_var_8432_ptr;
  param_1[0x610] = FUN_180059ba0;
  return param_1;
}



/**
 * 更新对象管理器引用
 * 更新对象管理器的引用计数和指针
 * 
 * @param param_1 管理器指针
 * @param param_2 新的对象指针
 * @return 返回更新后的管理器指针
 */
int64_t * update_object_manager_reference(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = (int64_t *)*param_1;
  *param_1 = (int64_t)param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}





/**
 * 复制字符串到对象
 * 安全地将字符串复制到对象的字符串缓冲区
 * 
 * @param param_1 目标对象指针
 * @param param_2 源字符串指针
 */
void copy_string_to_object(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  void *puVar2;
  
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_2 + 8);
  }
  if (puVar2 == (void *)0x0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (puVar2[lVar1] != '\0');
  if ((int)lVar1 < 0x400) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180056fc2. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x400);
    return;
  }
  SystemCore_ResourceManager0(&processed_var_616_ptr,0x400);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}





/**
 * 清理对象池
 * 清理对象池中的所有对象
 * 
 * @param param_1 对象池指针
 */
void cleanup_object_pool(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  
  plVar1 = param_1 + 3;
  lVar2 = *param_1;
  while ((int64_t *)lVar2 != plVar1) {
    lVar2 = *(int64_t *)((uint64_t)(-(int)lVar2 & 7) + lVar2);
    if ((code *)param_1[0x604] == (code *)0x0) {
      free();
    }
    else {
      (*(code *)param_1[0x604])();
    }
    *param_1 = lVar2;
  }
  *param_1 = (int64_t)plVar1;
  param_1[1] = (uint64_t)(-(int)plVar1 & 7) + (int64_t)plVar1;
  param_1[2] = (int64_t)(param_1 + 0x603);
  return;
}





/**
 * 清理对象池扩展
 * 清理对象池的扩展功能
 * 
 * @param param_1 对象池指针
 */
void cleanup_object_pool_extended(int64_t param_1)

{
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  do {
    param_1 = *(int64_t *)((uint64_t)(-(int)param_1 & 7) + param_1);
    if ((code *)unaff_RDI[0x604] == (code *)0x0) {
      free();
    }
    else {
      (*(code *)unaff_RDI[0x604])();
    }
    *unaff_RDI = param_1;
  } while (param_1 != unaff_RSI);
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (uint64_t)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (int64_t)(unaff_RDI + 0x603);
  return;
}





/**
 * 重置对象池扩展
 * 重置对象池的扩展功能
 */
void reset_object_pool_extended(void)

{
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (uint64_t)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (int64_t)(unaff_RDI + 0x603);
  return;
}



/**
 * 初始化字符串对象
 * 初始化字符串对象的相关数据
 * 
 * @param param_1 字符串对象指针
 * @param param_2 字符串数据
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 返回初始化后的对象指针
 */
uint64_t *
initialize_string_object(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_config_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    *(int *)(param_1 + 2) = (int)lVar1;
    strcpy_s(param_1[1],0x10,param_2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





/**
 * 清理回调链
 * 清理对象回调链中的所有回调
 * 
 * @param param_1 回调链指针
 */
void cleanup_callback_chain(int64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (int64_t)puVar2;
  return;
}





/**
 * 执行回调链
 * 执行回调链中的所有回调函数
 * 
 * @param param_1 回调链指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 */
void execute_callback_chain(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0xb) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 添加元素到动态数组
 * 向动态数组中添加新元素，必要时扩容
 * 
 * @param param_1 动态数组指针
 * @param param_2 要添加的元素指针
 */
void add_element_to_dynamic_array(int64_t *param_1,int32_t *param_2)

{
  int64_t lVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  
  puVar4 = (int32_t *)param_1[1];
  if (puVar4 < (int32_t *)param_1[2]) {
    param_1[1] = (int64_t)(puVar4 + 1);
    *puVar4 = *param_2;
    return;
  }
  puVar3 = (int32_t *)*param_1;
  lVar1 = (int64_t)puVar4 - (int64_t)puVar3 >> 2;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      puVar2 = (int32_t *)0x0;
      goto LAB_18005726e;
    }
  }
  puVar2 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,(char)param_1[3]);
  puVar3 = (int32_t *)*param_1;
  puVar4 = (int32_t *)param_1[1];
LAB_18005726e:
  if (puVar3 != puVar4) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar3,(int64_t)puVar4 - (int64_t)puVar3);
  }
  *puVar2 = *param_2;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *param_1 = (int64_t)puVar2;
  param_1[1] = (int64_t)(puVar2 + 1);
  param_1[2] = (int64_t)(puVar2 + lVar1);
  return;
}





/**
 * 重置对象容器
 * 重置对象容器为初始状态
 * 
 * @param param_1 对象容器指针
 */
void reset_object_container(int64_t param_1)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_18004b790(param_1,*puVar1);
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar1);
  }
  *(int64_t *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int64_t *)(param_1 + 8) = param_1;
  return;
}





/**
 * 清理对象容器扩展
 * 清理对象容器的扩展功能
 */
void cleanup_object_container_extended(void)

{
  FUN_18004b790();
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}





/**
 * 重置对象容器扩展
 * 重置对象容器的扩展功能
 */
void reset_object_container_extended(void)

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




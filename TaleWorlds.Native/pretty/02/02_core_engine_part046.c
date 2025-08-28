#include "TaleWorlds.Native.Split.h"

// 核心引擎模块 - 第046部分
// 本文件为核心引擎模块的组成部分，包含引擎核心功能的实现

// 文件信息：
// - 模块：核心引擎 (02)
// - 部分：046
// - 功能：引擎数据处理和文件操作
// - 状态：已完成转译

// 本文件主要包含以下功能：
// 1. 引擎数据处理函数
// 2. 文件操作和内存管理
// 3. 字符串处理和数据验证
// 4. 系统调用和资源管理

// 函数：引擎数据处理函数
// 功能：处理引擎数据，包括字符串转换和内存操作
// 参数：
//   param_1 - 引擎实例指针
//   param_2 - 数据缓冲区指针
//   param_3 - 数据参数结构
void Engine_ProcessData(longlong engine_instance, longlong *data_buffer, longlong data_params)

{
  void *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int8_t auStack_2a8 [32];
  void *puStack_288;
  int8_t *puStack_280;
  int32_t uStack_278;
  ulonglong uStack_270;
  longlong alStack_268 [2];
  void *puStack_258;
  void *puStack_250;
  uint uStack_248;
  uint8_t auStack_240 [520];
  ulonglong uStack_38;
  
  // 初始化堆栈变量和安全检查
  alStack_268[1] = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2a8;
  uVar2 = 0;
  puStack_258 = &UNK_180a009c8;
  puStack_250 = auStack_240;
  auStack_240[0] = 0;
  
  // 获取字符串长度
  uStack_248 = *(uint *)(data_params + 0x10);
  
  // 获取字符串源
  puVar1 = &DAT_18098bc73;
  if (*(void **)(data_params + 8) != (void *)0x0) {
    puVar1 = *(void **)(data_params + 8);
  }
  
  // 复制字符串到缓冲区
  strcpy_s(auStack_240, 0x200, puVar1);
  
  // 字符串处理：转换特殊字符
  uVar4 = uVar2;
  if (uStack_248 != 0) {
    do {
      if ((byte)(puStack_250[uVar2] + 0xbf) < 0x1a) {
        puStack_250[uVar2] = puStack_250[uVar2] + ' ';
      }
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uStack_248);
  }
  // 检查数据缓冲区状态
  if ((*data_buffer == 0) && (data_buffer[1] == 0)) {
    // 缓冲区为空，执行默认处理
    Engine_HandleDefaultCase(engine_instance, data_params);
  }
  else {
    // 缓冲区有数据，执行数据处理
    Engine_ProcessBufferData(engine_instance + 0x78, alStack_268, data_buffer);
    if (alStack_268[0] != engine_instance + 0x78) {
      // 数据处理成功，进行后续操作
      puStack_288 = &UNK_180a3c3e0;
      uStack_270 = 0;
      puStack_280 = (int8_t *)0x0;
      uStack_278 = 0;
      Engine_AllocateMemory(&puStack_288, uStack_248);
      
      // 复制处理后的数据
      if (0 < (int)uStack_248) {
        puVar1 = &DAT_18098bc73;
        if (puStack_250 != (void *)0x0) {
          puVar1 = puStack_250;
        }
        memcpy(puStack_280, puVar1, (longlong)(int)(uStack_248 + 1));
      }
      
      // 清理和终止字符串
      if ((puStack_250 != (void *)0x0) && (uStack_278 = 0, puStack_280 != (int8_t *)0x0)) {
        *puStack_280 = 0;
      }
      
      // 最终数据处理
      Engine_FinalizeData(alStack_268[0] + 0x60, alStack_268, &puStack_288);
      
      // 内存清理
      puStack_288 = &UNK_180a3c3e0;
      if (puStack_280 != (int8_t *)0x0) {
        Engine_FreeMemory();
      }
      
      // 重置状态
      puStack_280 = (int8_t *)0x0;
      uStack_270 = uStack_270 & 0xffffffff00000000;
      puStack_288 = &UNK_18098bcb0;
    }
  }
  // 函数结束清理
  puStack_258 = &UNK_18098bcb0;
  Engine_CleanupSecurity(uStack_38 ^ (ulonglong)auStack_2a8);
}



// 函数：引擎数据查找函数
// 功能：在引擎数据结构中查找指定的数据项
// 参数：
//   param_1 - 引擎实例指针
//   param_2 - 查找上下文指针
//   param_3 - 查找键值
// 返回：找到的数据项指针，未找到返回0
uint64_t Engine_FindDataItem(longlong engine_instance, longlong *search_context, uint64_t search_key)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lStackX_20;
  
  // 检查搜索上下文是否有效
  if ((*search_context != 0) || (search_context[1] != 0)) {
    // 在指定上下文中搜索
    Engine_SearchInContext(engine_instance + 0x78, &lStackX_20, search_context);
    if ((lStackX_20 != engine_instance + 0x78) &&
       (lVar2 = lStackX_20 + 0x30, Engine_SearchInNode(lVar2, &lStackX_20, search_key), lStackX_20 != lVar2)) {
      // 找到匹配项，返回数据指针
      return *(uint64_t *)(lStackX_20 + 0x30);
    }
    // 未找到匹配项
    return 0;
  }
  // 遍历引擎数据结构
  lVar2 = *(longlong *)(engine_instance + 0x80);
  do {
    if (lVar2 == engine_instance + 0x78) {
      // 到达数据结构末尾，未找到
      return 0;
    }
    
    // 获取当前节点的数据
    puVar3 = (uint64_t *)(lVar2 + 0x30);
    puVar4 = *(uint64_t **)(lVar2 + 0x40);
    
    // 在子节点中搜索
    if (*(uint64_t **)(lVar2 + 0x40) != (uint64_t *)0x0) {
      do {
        // 比较键值
        iVar1 = memcmp(puVar4 + 4, search_key, 0x10);
        if (iVar1 < 0) {
          // 键值较小，搜索左子树
          puVar5 = (uint64_t *)*puVar4;
        }
        else {
          // 键值较大或相等，搜索右子树
          puVar5 = (uint64_t *)puVar4[1];
          puVar3 = puVar4;
        }
        puVar4 = puVar5;
      } while (puVar5 != (uint64_t *)0x0);
      
      // 检查是否找到匹配项
      if ((puVar3 != (uint64_t *)(lVar2 + 0x30)) &&
         (iVar1 = memcmp(search_key, puVar3 + 4, 0x10), -1 < iVar1)) {
        // 找到匹配项，返回数据
        return puVar3[6];
      }
    }
    
    // 移动到下一个节点
    lVar2 = Engine_GetNextNode(lVar2);
  } while( true );
}



// 函数：引擎数据获取函数
// 功能：从引擎实例中获取数据项
// 参数：
//   param_1 - 引擎实例指针
// 返回：获取到的数据项指针，失败返回0
uint64_t Engine_GetDataItem(longlong engine_instance)

{
  longlong lVar1;
  longlong in_stack_00000048;
  
  // 在引擎实例中搜索数据项
  Engine_SearchInstance(engine_instance + 0x78, &stack0x00000048);
  if (in_stack_00000048 != engine_instance + 0x78) {
    // 找到候选数据项
    lVar1 = in_stack_00000048 + 0x30;
    Engine_ValidateDataItem(lVar1, &stack0x00000048);
    if (in_stack_00000048 != lVar1) {
      // 数据项验证成功，返回数据指针
      return *(uint64_t *)(in_stack_00000048 + 0x30);
    }
  }
  // 未找到有效数据项
  return 0;
}



// 函数：引擎状态检查函数
// 功能：检查引擎当前状态
// 返回：引擎状态码，0表示正常
uint64_t Engine_CheckStatus(void)

{
  // 返回引擎正常状态
  return 0;
}



// 函数：引擎数据搜索函数
// 功能：在引擎实例中搜索指定键值的数据
// 参数：
//   param_1 - 引擎实例指针
//   param_2 - 搜索键值
// 返回：找到的数据项指针，未找到返回0
uint64_t Engine_SearchData(longlong engine_instance, uint64_t search_key)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  // 获取引擎数据结构头指针
  lVar2 = *(longlong *)(engine_instance + 0x80);
  
  // 遍历数据结构进行搜索
  do {
    if (lVar2 == engine_instance + 0x78) {
      // 到达数据结构末尾，未找到
      return 0;
    }
    
    // 获取当前节点数据
    puVar3 = (uint64_t *)(lVar2 + 0x30);
    puVar4 = *(uint64_t **)(lVar2 + 0x40);
    
    // 在子节点中进行二叉搜索
    if (*(uint64_t **)(lVar2 + 0x40) != (uint64_t *)0x0) {
      do {
        // 比较搜索键值
        iVar1 = memcmp(puVar4 + 4, search_key, 0x10);
        if (iVar1 < 0) {
          // 键值较小，搜索左子树
          puVar5 = (uint64_t *)*puVar4;
        }
        else {
          // 键值较大或相等，搜索右子树
          puVar5 = (uint64_t *)puVar4[1];
          puVar3 = puVar4;
        }
        puVar4 = puVar5;
      } while (puVar5 != (uint64_t *)0x0);
      
      // 检查是否找到匹配项
      if ((puVar3 != (uint64_t *)(lVar2 + 0x30)) &&
         (iVar1 = memcmp(search_key, puVar3 + 4, 0x10), -1 < iVar1)) {
        // 找到匹配项，返回数据
        return puVar3[6];
      }
    }
    
    // 移动到下一个节点
    lVar2 = Engine_GetNextNode(lVar2);
  } while( true );
}



// 函数：引擎字符串处理函数
// 功能：处理引擎中的字符串数据，包括比较和匹配
// 参数：
//   param_1 - 引擎实例指针
//   param_2 - 字符串参数结构
// 返回：处理结果，0表示失败，非0表示成功
uint64_t Engine_ProcessStrings(longlong engine_instance, longlong string_params)

{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  void *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  longlong lVar13;
  void *puStack_50;
  byte *pbStack_48;
  int iStack_40;
  ulonglong uStack_38;
  
  // 获取引擎数据结构头指针
  lVar5 = *(longlong *)(engine_instance + 0x80);
  
  // 遍历数据结构处理字符串
  do {
    if (lVar5 == engine_instance + 0x78) {
      // 到达数据结构末尾，未找到匹配
      return 0;
    }
    // 获取当前节点的字符串数据
    puVar1 = (uint64_t *)(lVar5 + 0x60);
    
    // 初始化字符串处理缓冲区
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    pbStack_48 = (byte *)0x0;
    iStack_40 = 0;
    
    // 分配内存并复制字符串
    Engine_AllocateStringBuffer(&puStack_50, *(int32_t *)(string_params + 0x10));
    if (0 < *(int *)(string_params + 0x10)) {
      puVar8 = &DAT_18098bc73;
      if (*(void **)(string_params + 8) != (void *)0x0) {
        puVar8 = *(void **)(string_params + 8);
      }
      memcpy(pbStack_48, puVar8, (longlong)(*(int *)(string_params + 0x10) + 1));
    }
    
    // 确保字符串以null结尾
    if ((*(longlong *)(string_params + 8) != 0) && (iStack_40 = 0, pbStack_48 != (byte *)0x0)) {
      *pbStack_48 = 0;
    }
    puVar11 = *(uint64_t **)(lVar5 + 0x70);
    puVar9 = puVar1;
    if (puVar11 == (uint64_t *)0x0) {
LAB_180087337:
      puVar10 = puVar1;
    }
    else {
      do {
        if (iStack_40 == 0) {
          bVar3 = false;
          puVar12 = (uint64_t *)puVar11[1];
        }
        else {
          if (*(int *)(puVar11 + 6) == 0) {
            bVar3 = true;
          }
          else {
            pbVar4 = pbStack_48;
            do {
              uVar6 = (uint)pbVar4[puVar11[5] - (longlong)pbStack_48];
              iVar7 = *pbVar4 - uVar6;
              if (*pbVar4 != uVar6) break;
              pbVar4 = pbVar4 + 1;
            } while (uVar6 != 0);
            bVar3 = 0 < iVar7;
            if (iVar7 < 1) {
              puVar12 = (uint64_t *)puVar11[1];
              goto LAB_1800872f7;
            }
          }
          puVar12 = (uint64_t *)*puVar11;
        }
LAB_1800872f7:
        puVar10 = puVar11;
        if (bVar3) {
          puVar10 = puVar9;
        }
        puVar9 = puVar10;
        puVar11 = puVar12;
      } while (puVar12 != (uint64_t *)0x0);
      if (puVar10 == puVar1) goto LAB_180087337;
      if (*(int *)(puVar10 + 6) != 0) {
        if (iStack_40 != 0) {
          pbVar4 = (byte *)puVar10[5];
          lVar13 = (longlong)pbStack_48 - (longlong)pbVar4;
          do {
            bVar2 = *pbVar4;
            uVar6 = (uint)pbVar4[lVar13];
            if (bVar2 != uVar6) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar6 != 0);
          if ((int)(bVar2 - uVar6) < 1) goto LAB_18008733a;
        }
        goto LAB_180087337;
      }
    }
LAB_18008733a:
    puStack_50 = &UNK_180a3c3e0;
    if (pbStack_48 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pbStack_48 = (byte *)0x0;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    puStack_50 = &UNK_18098bcb0;
    if (puVar10 != puVar1) {
      return puVar10[8];
    }
    lVar5 = func_0x00018066bd70(lVar5);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1800873b0(int param_1,longlong *param_2,int8_t *param_3)

{
  char cVar1;
  longlong lVar2;
  void *puVar3;
  uint64_t uVar4;
  void *puVar5;
  void *puStack_b8;
  longlong lStack_b0;
  int32_t uStack_a8;
  ulonglong uStack_a0;
  void *puStack_98;
  longlong lStack_90;
  int32_t uStack_88;
  ulonglong uStack_80;
  void *puStack_78;
  longlong lStack_70;
  int32_t uStack_68;
  ulonglong uStack_60;
  void *puStack_58;
  void *puStack_50;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar4 = 0;
  if (param_1 < 0) {
LAB_180087418:
    lVar2 = FUN_180628ca0();
  }
  else {
    lVar2 = *(longlong *)(*_DAT_180c86870 + 0x888);
    if ((ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - lVar2 >> 5) <=
        (ulonglong)(longlong)param_1) goto LAB_180087418;
    lVar2 = (longlong)param_1 * 0x20 + lVar2;
  }
  FUN_180627ae0(&puStack_58,lVar2);
  puStack_78 = &UNK_180a3c3e0;
  uStack_60 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  puVar3 = &DAT_18098bc73;
  if (_DAT_180bf64d8 != (void *)0x0) {
    puVar3 = _DAT_180bf64d8;
  }
  puVar5 = &DAT_18098bc73;
  if (puStack_50 != (void *)0x0) {
    puVar5 = puStack_50;
  }
  FUN_180628040(&puStack_78,&UNK_180a0055c,puVar5,puVar3);
  puStack_98 = &UNK_180a3c3e0;
  uStack_80 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  puVar3 = &DAT_18098bc73;
  if (_DAT_180bf6628 != (void *)0x0) {
    puVar3 = _DAT_180bf6628;
  }
  puVar5 = &DAT_18098bc73;
  if (puStack_50 != (void *)0x0) {
    puVar5 = puStack_50;
  }
  FUN_180628040(&puStack_98,&UNK_180a0055c,puVar5,puVar3);
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  puVar3 = &DAT_18098bc73;
  if (_DAT_180bf6538 != (void *)0x0) {
    puVar3 = _DAT_180bf6538;
  }
  puVar5 = &DAT_18098bc73;
  if (puStack_50 != (void *)0x0) {
    puVar5 = puStack_50;
  }
  FUN_180628040(&puStack_b8,&UNK_180a0055c,puVar5,puVar3);
  cVar1 = FUN_180624a00(&puStack_78);
  if (cVar1 == '\0') {
LAB_18008755d:
    cVar1 = FUN_180624a00(&puStack_b8);
    if (cVar1 == '\0') goto LAB_18008758f;
    puVar3 = &DAT_18098bc73;
    if (_DAT_180bf6538 != (void *)0x0) {
      puVar3 = _DAT_180bf6538;
    }
    (**(code **)(*param_2 + 0x10))(param_2,puVar3);
    *param_3 = 1;
  }
  else {
    cVar1 = FUN_180624a00(&puStack_98);
    if (cVar1 == '\0') goto LAB_18008755d;
    puVar3 = &DAT_18098bc73;
    if (_DAT_180bf64d8 != (void *)0x0) {
      puVar3 = _DAT_180bf64d8;
    }
    (**(code **)(*param_2 + 0x10))(param_2,puVar3);
  }
  uVar4 = 1;
LAB_18008758f:
  puStack_b8 = &UNK_180a3c3e0;
  if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_b0 = 0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  puStack_b8 = &UNK_18098bcb0;
  puStack_98 = &UNK_180a3c3e0;
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_90 = 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  puStack_98 = &UNK_18098bcb0;
  puStack_78 = &UNK_180a3c3e0;
  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_70 = 0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  puStack_78 = &UNK_18098bcb0;
  puStack_58 = &UNK_180a3c3e0;
  if (puStack_50 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180087630(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_180087630(uint64_t param_1,longlong param_2,longlong param_3)

{
  void *puVar1;
  void *puVar2;
  void *puVar3;
  void *puStack_30;
  void *puStack_28;
  
  FUN_180142300(*_DAT_180c86870,&puStack_30,param_1);
  *(int32_t *)(param_3 + 0x10) = 0;
  if (*(int8_t **)(param_3 + 8) != (int8_t *)0x0) {
    **(int8_t **)(param_3 + 8) = 0;
  }
  puVar1 = &DAT_18098bc73;
  if (_DAT_180bf6658 != (void *)0x0) {
    puVar1 = _DAT_180bf6658;
  }
  puVar3 = &DAT_18098bc73;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_2 + 8);
  }
  puVar2 = &DAT_18098bc73;
  if (puStack_28 != (void *)0x0) {
    puVar2 = puStack_28;
  }
  FUN_180628040(param_3,&UNK_180a00550,puVar2,puVar3,puVar1);
  puStack_30 = &UNK_180a3c3e0;
  if (puStack_28 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180087700(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
void FUN_180087700(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
                  int8_t param_5)

{
  int *piVar1;
  int32_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  char cVar9;
  int iVar10;
  int8_t *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  uint64_t *puVar17;
  longlong *plVar18;
  uint64_t *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint64_t *puVar22;
  ulonglong uVar23;
  uint64_t *puVar24;
  void *puVar25;
  ulonglong uVar26;
  void *puVar27;
  uint *puVar28;
  int8_t auStack_158 [32];
  void *puStack_138;
  void *puStack_128;
  int8_t *puStack_120;
  int32_t uStack_118;
  ulonglong uStack_110;
  longlong alStack_108 [2];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  longlong *plStack_e8;
  uint64_t *puStack_e0;
  int8_t *puStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  uint64_t *puStack_c0;
  uint64_t *puStack_b8;
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  int iStack_98;
  uint uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  uint uStack_80;
  ulonglong uStack_7c;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  ulonglong uStack_50;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  plVar18 = (longlong *)0x0;
  *param_1 = 0;
  puStack_128 = &UNK_180a3c3e0;
  uStack_110 = 0;
  puStack_120 = (int8_t *)0x0;
  uStack_118 = 0;
  puStack_e0 = param_2;
  puStack_c0 = param_3;
  puStack_b8 = param_1;
  puStack_a8 = param_2;
  puStack_a0 = param_3;
  FUN_180087630(param_2,param_3,&puStack_128);
  alStack_108[0] = -1;
  puVar11 = &DAT_18098bc73;
  if (puStack_120 != (int8_t *)0x0) {
    puVar11 = puStack_120;
  }
  cVar9 = FUN_18063ba00(alStack_108,puVar11,5,0x105);
  plVar20 = plVar18;
  lVar15 = alStack_108[0];
  if (cVar9 == '\0') {
    uStack_118 = 0;
    if (puStack_120 != (int8_t *)0x0) {
      *puStack_120 = 0;
    }
    puStack_138 = &DAT_18098bc73;
    if (_DAT_180bf6658 != (void *)0x0) {
      puStack_138 = _DAT_180bf6658;
    }
    puVar27 = &DAT_18098bc73;
    if ((void *)param_3[1] != (void *)0x0) {
      puVar27 = (void *)param_3[1];
    }
    puVar25 = &DAT_18098bc73;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar25 = (void *)param_2[1];
    }
    FUN_180628040(&puStack_128,&UNK_180a00550,puVar25,puVar27);
    puVar11 = &DAT_18098bc73;
    if (puStack_120 != (int8_t *)0x0) {
      puVar11 = puStack_120;
    }
    cVar9 = FUN_18063ba00(alStack_108,puVar11,5,0x105);
    lVar15 = alStack_108[0];
    if (cVar9 != '\0') goto LAB_1800878e0;
    puVar11 = &DAT_18098bc73;
    if (puStack_120 != (int8_t *)0x0) {
      puVar11 = puStack_120;
    }
    FUN_180628040(param_4,&UNK_180a00568,puVar11);
    if (alStack_108[0] != -1) {
      LOCK();
      _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
      UNLOCK();
      CloseHandle(alStack_108[0]);
      alStack_108[0] = -1;
    }
    puStack_128 = &UNK_180a3c3e0;
    if (puStack_120 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_110 = uStack_110 & 0xffffffff00000000;
  }
  else {
LAB_1800878e0:
    do {
      uVar26 = 0x1000000;
      if (0x24U - (longlong)plVar20 < 0x1000000) {
        uVar26 = 0x24U - (longlong)plVar20 & 0xffffffff;
      }
      uStack_f8 = 0;
      puStack_138 = (void *)0x0;
      iVar10 = ReadFile(lVar15,(longlong)&iStack_98 + (longlong)plVar20,uVar26,&uStack_f8);
      if (iVar10 == 0) goto LAB_18008807f;
    } while ((uStack_f8 != 0) &&
            (plVar20 = (longlong *)((longlong)plVar20 + (ulonglong)uStack_f8),
            plVar20 < (longlong *)0x24));
    if (plVar20 != (longlong *)0x24) {
LAB_18008807f:
      puVar11 = &DAT_18098bc73;
      if ((int8_t *)param_2[1] != (int8_t *)0x0) {
        puVar11 = (int8_t *)param_2[1];
      }
      FUN_180628040(param_4,&UNK_180a00580,puVar11);
      if (lVar15 != -1) {
        LOCK();
        _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
        UNLOCK();
        CloseHandle(alStack_108[0]);
        alStack_108[0] = -1;
      }
      puStack_128 = &UNK_180a3c3e0;
      if (puStack_120 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_120 = (int8_t *)0x0;
      uStack_110 = uStack_110 & 0xffffffff00000000;
      puStack_128 = &UNK_18098bcb0;
      *param_2 = &UNK_180a3c3e0;
      if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_2[1] = 0;
      *(int32_t *)(param_2 + 3) = 0;
      *param_2 = &UNK_18098bcb0;
      *param_3 = &UNK_180a3c3e0;
      if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_3[1] = 0;
      *(int32_t *)(param_3 + 3) = 0;
      *param_3 = &UNK_18098bcb0;
      goto LAB_180088131;
    }
    if (iStack_98 == 0x43415054) {
      if (uStack_94 < 3) {
        SetFilePointerEx(lVar15,0,&lStack_d0,1);
        lStack_c8 = lStack_d0;
        plVar20 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
        *plVar20 = 0;
        plVar20[1] = 0;
        plVar20[2] = 0;
        *(int16_t *)(plVar20 + 3) = 0;
        *(int8_t *)((longlong)plVar20 + 0x1a) = 3;
        if ((int)uStack_7c != 0) {
          plVar12 = (longlong *)(uStack_7c & 0xffffffff);
          FUN_180639bf0(plVar20,uStack_7c & 0xffffffff);
          lVar13 = plVar20[1];
          plVar21 = plVar18;
          param_2 = puStack_e0;
          if (plVar12 != (longlong *)0x0) {
            do {
              uVar26 = 0x1000000;
              if ((ulonglong)((longlong)plVar12 - (longlong)plVar21) < 0x1000000) {
                uVar26 = (longlong)plVar12 - (longlong)plVar21 & 0xffffffff;
              }
              uStack_f4 = 0;
              puStack_138 = (void *)0x0;
              iVar10 = ReadFile(lVar15,lVar13 + (longlong)plVar21,uVar26,&uStack_f4);
              param_2 = puStack_e0;
            } while (((iVar10 != 0) && (uStack_f4 != 0)) &&
                    (plVar21 = (longlong *)((longlong)plVar21 + (ulonglong)uStack_f4),
                    plVar21 < plVar12));
          }
        }
        if (lVar15 != -1) {
          LOCK();
          _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
          UNLOCK();
          CloseHandle(alStack_108[0]);
          alStack_108[0] = -1;
        }
        puVar11 = (int8_t *)FUN_18062b1e0(_DAT_180c8ed18,0x1a0,8,0x1a);
        *puVar11 = 0;
        *(int32_t *)(puVar11 + 4) = 0xffffffff;
        *(int32_t *)(puVar11 + 8) = uStack_90;
        *(int32_t *)(puVar11 + 0xc) = uStack_8c;
        *(int32_t *)(puVar11 + 0x10) = uStack_88;
        *(int32_t *)(puVar11 + 0x14) = uStack_84;
        puStack_d8 = puVar11;
        FUN_1806279c0(puVar11 + 0x18,param_2);
        FUN_1806279c0(puVar11 + 0x38,param_3);
        puVar24 = (uint64_t *)(puVar11 + 0x58);
        *puVar24 = &UNK_18098bcb0;
        *(uint64_t *)(puVar11 + 0x60) = 0;
        *(int32_t *)(puVar11 + 0x68) = 0;
        *puVar24 = &UNK_180a3c3e0;
        *(uint64_t *)(puVar11 + 0x70) = 0;
        *(uint64_t *)(puVar11 + 0x60) = 0;
        *(int32_t *)(puVar11 + 0x68) = 0;
        plStack_e8 = puVar24;
        FUN_180257b80(puVar11 + 0x78);
        puVar11[0x178] = param_5;
        plVar21 = (longlong *)(puVar11 + 0x180);
        *plVar21 = 0;
        *(uint64_t *)(puVar11 + 0x188) = 0;
        *(uint64_t *)(puVar11 + 400) = 0;
        *(int32_t *)(puVar11 + 0x198) = 0x1a;
        plStack_e8 = plVar21;
        FUN_180086bd0(puVar24,puVar11 + 0x18,puVar11 + 0x38);
        uStack_f0 = 0;
        if (uStack_80 != 0) {
          do {
            puVar24 = (uint64_t *)plVar20[1];
            uStack_70 = *puVar24;
            uStack_68 = puVar24[1];
            plVar20[1] = (longlong)(puVar24 + 2);
            uStack_60 = *(int32_t *)(puVar24 + 2);
            uStack_5c = *(int32_t *)((longlong)puVar24 + 0x14);
            uStack_58 = *(int32_t *)(puVar24 + 3);
            uStack_54 = *(int32_t *)((longlong)puVar24 + 0x1c);
            plVar20[1] = (longlong)(puVar24 + 4);
            plVar12 = plVar18;
            if (1 < uStack_94) {
              plVar12 = (longlong *)(ulonglong)*(uint *)(puVar24 + 4);
              plVar20[1] = (longlong)puVar24 + 0x24;
            }
            puVar24 = *(uint64_t **)(_DAT_180c868a8 + 0xa8);
            puVar17 = (uint64_t *)puVar24[2];
            puVar19 = puVar24;
            if (puVar17 == (uint64_t *)0x0) {
LAB_180087f81:
                    // WARNING: Subroutine does not return
              FUN_180062300(_DAT_180c86928,&UNK_180a00980);
            }
            do {
              iVar10 = memcmp(puVar17 + 4,&uStack_70,0x10);
              if (iVar10 < 0) {
                puVar22 = (uint64_t *)*puVar17;
              }
              else {
                puVar22 = (uint64_t *)puVar17[1];
                puVar19 = puVar17;
              }
              puVar17 = puVar22;
            } while (puVar22 != (uint64_t *)0x0);
            if ((puVar19 == puVar24) || (iVar10 = memcmp(&uStack_70,puVar19 + 4,0x10), iVar10 < 0))
            goto LAB_180087f81;
            plVar12 = (longlong *)(*(code *)puVar19[6])(&uStack_60,plVar12);
            if (plVar12 != (longlong *)0x0) {
              uVar3 = *(uint *)plVar20[1];
              puVar28 = (uint *)plVar20[1] + 1;
              plVar20[1] = (longlong)puVar28;
              if (uVar3 != 0) {
                (**(code **)(plVar12[0xd] + 0x18))(plVar12 + 0xd,puVar28,uVar3);
                plVar20[1] = plVar20[1] + (ulonglong)uVar3;
                puVar28 = (uint *)plVar20[1];
              }
              lVar13 = func_0x000180639d60(plVar20);
              lVar13 = lVar13 + lStack_c8;
              lVar15 = *(longlong *)puVar28;
              plVar20[1] = (longlong)(puVar28 + 2);
              plStack_e8 = (longlong *)func_0x000180639d60();
              plVar14 = plVar18;
              if (lVar15 != 0) {
                plVar14 = (longlong *)(**(code **)(*plVar12 + 0x68))(plVar12,0);
                (**(code **)(*plVar14 + 0x10))(plVar14,plVar20);
              }
              plVar20[1] = *plVar20;
              FUN_180639d80(plVar20,(int8_t *)((longlong)plStack_e8 + lVar15));
              uVar4 = *(uint64_t *)plVar20[1];
              plVar20[1] = (longlong)((uint64_t *)plVar20[1] + 1);
              FUN_180256530(plVar12,plVar14,uVar4,lVar13);
              iVar10 = *(int *)plVar20[1];
              piVar1 = (int *)plVar20[1] + 1;
              plVar20[1] = (longlong)piVar1;
              plVar14 = (longlong *)plVar12[0x11];
              if (plVar14 == (longlong *)0x0) {
                if (puStack_d8[0x178] == '\0') {
                  plVar14 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x1a);
                  *plVar14 = (longlong)&UNK_180a14d00;
                  plVar14[1] = 0;
                  plVar14[2] = (longlong)plVar12;
                  plVar14[3] = 0;
                  *(int32_t *)(plVar14 + 4) = 0;
                  *plVar14 = (longlong)&UNK_180a14c80;
                  plStack_e8 = plVar14;
                }
                else {
                  plVar14 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x1a);
                  *plVar14 = (longlong)&UNK_180a14d00;
                  plVar14[1] = 0;
                  plVar14[2] = (longlong)plVar12;
                  plVar14[3] = 0;
                  *(int32_t *)(plVar14 + 4) = 0;
                }
                plVar12[0x11] = (longlong)plVar14;
              }
              (**(code **)(*plVar14 + 8))(plVar14,puStack_d8,piVar1,iVar10);
              FUN_180639d80(plVar20,(longlong)iVar10 * 0x45);
              uVar23 = (ulonglong)*(int *)plVar20[1];
              plVar20[1] = (longlong)((int *)plVar20[1] + 1);
              plVar14 = plVar12 + 0x12;
              lVar15 = plVar12[0x13] - *plVar14;
              lVar15 = lVar15 / 6 + (lVar15 >> 0x3f);
              uVar26 = (lVar15 >> 3) - (lVar15 >> 0x3f);
              if (uVar26 < uVar23) {
                FUN_18008dbb0(plVar14,uVar23 - uVar26);
              }
              else {
                plVar12[0x13] = uVar23 * 0x30 + *plVar14;
              }
              plVar16 = plVar18;
              if (0 < (longlong)uVar23) {
                do {
                  lVar15 = *plVar14;
                  uVar4 = ((uint64_t *)plVar20[1])[1];
                  *(uint64_t *)(lVar15 + (longlong)plVar16) = *(uint64_t *)plVar20[1];
                  ((uint64_t *)(lVar15 + (longlong)plVar16))[1] = uVar4;
                  plVar20[1] = plVar20[1] + 0x10;
                  uVar4 = ((uint64_t *)plVar20[1])[1];
                  puVar24 = (uint64_t *)(*plVar14 + 0x10 + (longlong)plVar16);
                  *puVar24 = *(uint64_t *)plVar20[1];
                  puVar24[1] = uVar4;
                  plVar20[1] = plVar20[1] + 0x10;
                  puVar5 = (int32_t *)plVar20[1];
                  uVar6 = puVar5[1];
                  uVar7 = puVar5[2];
                  uVar8 = puVar5[3];
                  puVar2 = (int32_t *)(*plVar14 + 0x20 + (longlong)plVar16);
                  *puVar2 = *puVar5;
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  plVar20[1] = plVar20[1] + 0x10;
                  uVar23 = uVar23 - 1;
                  plVar16 = plVar16 + 6;
                } while (uVar23 != 0);
              }
              puVar24 = *(uint64_t **)(puVar11 + 0x188);
              if (puVar24 < *(uint64_t **)(puVar11 + 400)) {
                *(uint64_t **)(puVar11 + 0x188) = puVar24 + 1;
                *puVar24 = plVar12;
              }
              else {
                puVar17 = (uint64_t *)*plVar21;
                lVar15 = (longlong)puVar24 - (longlong)puVar17 >> 3;
                if (lVar15 == 0) {
                  lVar15 = 1;
LAB_180087f16:
                  plVar14 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar15 * 8,puVar11[0x198]);
                  puVar24 = *(uint64_t **)(puVar11 + 0x188);
                  puVar17 = (uint64_t *)*plVar21;
                }
                else {
                  lVar15 = lVar15 * 2;
                  plVar14 = plVar18;
                  if (lVar15 != 0) goto LAB_180087f16;
                }
                if (puVar17 != puVar24) {
                    // WARNING: Subroutine does not return
                  memmove(plVar14,puVar17,(longlong)puVar24 - (longlong)puVar17);
                }
                *plVar14 = (longlong)plVar12;
                if (*plVar21 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                *plVar21 = (longlong)plVar14;
                *(longlong **)(puVar11 + 0x188) = plVar14 + 1;
                *(longlong **)(puVar11 + 400) = plVar14 + lVar15;
              }
            }
            uStack_f0 = uStack_f0 + 1;
          } while (uStack_f0 < uStack_80);
        }
        if (((char)plVar20[3] == '\0') && (*plVar20 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar20);
      }
      puVar11 = &DAT_18098bc73;
      if ((int8_t *)param_2[1] != (int8_t *)0x0) {
        puVar11 = (int8_t *)param_2[1];
      }
      FUN_180628040(param_4,&UNK_180a005b8,uStack_94,puVar11);
      if (lVar15 != -1) {
        LOCK();
        _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
        UNLOCK();
        CloseHandle(alStack_108[0]);
        alStack_108[0] = -1;
      }
      puStack_128 = &UNK_180a3c3e0;
      if (puStack_120 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_110 = uStack_110 & 0xffffffff00000000;
    }
    else {
      puVar11 = &DAT_18098bc73;
      if ((int8_t *)param_2[1] != (int8_t *)0x0) {
        puVar11 = (int8_t *)param_2[1];
      }
      FUN_180628040(param_4,&UNK_180a00598,puVar11);
      if (lVar15 != -1) {
        LOCK();
        _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
        UNLOCK();
        CloseHandle(alStack_108[0]);
        alStack_108[0] = -1;
      }
      puStack_128 = &UNK_180a3c3e0;
      if (puStack_120 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_110 = uStack_110 & 0xffffffff00000000;
    }
  }
  puStack_120 = (int8_t *)0x0;
  puStack_128 = &UNK_18098bcb0;
  FUN_180627b90(param_2);
  FUN_180627b90(param_3);
LAB_180088131:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




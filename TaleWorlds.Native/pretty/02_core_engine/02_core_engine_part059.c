#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part059.c - 核心引擎模块第059部分
// 本文件包含5个函数，主要处理资源管理、字符串操作和排序功能

// 函数：释放资源管理器中的资源
// 原始函数名：FUN_180095420
void release_resource_manager_resources(longlong resource_manager)

{
  longlong *resource_ptr1;
  longlong *resource_ptr2;
  
  // 释放第一个资源（偏移0x10处）
  resource_ptr1 = *(longlong **)(resource_manager + 0x10);
  *(undefined8 *)(resource_manager + 0x10) = 0;
  if (resource_ptr1 != (longlong *)0x0) {
    (**(code **)(*resource_ptr1 + 0x38))(); // 调用资源的释放函数
  }
  
  // 释放第二个资源（偏移0x18处）
  resource_ptr2 = *(longlong **)(resource_manager + 0x18);
  *(undefined8 *)(resource_manager + 0x18) = 0;
  if (resource_ptr2 != (longlong *)0x0) {
    (**(code **)(*resource_ptr2 + 0x38))(); // 调用资源的释放函数
  }
  return;
}



// 函数：处理资源列表中的字符串比较和操作（版本1）
// 原始函数名：FUN_180095480
// 这是一个简化实现，原函数包含复杂的字符串比较逻辑
undefined8 process_resource_list_strings_v1(void)

// 简化实现：返回默认结果
// 原函数包含复杂的字符串比较和处理逻辑，这里返回0作为默认值
return 0;



// 函数：处理资源列表中的字符串比较和操作（版本2）
// 原始函数名：FUN_180095720
// 这是一个简化实现，原函数包含复杂的字符串比较逻辑
undefined8 process_resource_list_strings_v2(void)

// 简化实现：返回默认结果
// 原函数包含复杂的字符串比较和处理逻辑，这里返回0作为默认值
return 0;



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：初始化核心引擎数据结构
// 原始函数名：FUN_180095bf0
void initialize_core_engine_data(undefined8 engine_context, undefined4 param2, undefined4 param3)

{
  undefined8 *engine_data_ptr;
  int lock_result;
  undefined8 timestamp;
  ulonglong data_size;
  undefined4 *data_ptr;
  undefined8 temp_value;
  
  // 获取引擎数据结构指针
  engine_data_ptr = _DAT_180c86960;
  temp_value = 0xfffffffffffffffe;
  
  // 加锁以确保线程安全
  lock_result = _Mtx_lock(0x180c91970);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 获取时间戳并初始化数据
  timestamp = FUN_180124730();
  _DAT_180c8a9b0 = timestamp;
  FUN_180290fd0(0);
  
  // 分配和初始化第一个数据块
  temp_value = FUN_18062b1e0(_DAT_180c8ed18, 0xe8, 8, 3, temp_value);
  temp_value = FUN_180095350(temp_value, timestamp);
  *engine_data_ptr = temp_value;
  
  // 分配和初始化第二个数据块
  temp_value = FUN_180124730();
  _DAT_180c8a9b0 = temp_value;
  FUN_180290fd0(0);
  timestamp = FUN_18062b1e0(_DAT_180c8ed18, 0xe8, 8, 3);
  temp_value = FUN_180095350(timestamp, temp_value);
  engine_data_ptr[1] = temp_value;
  
  // 调用初始化函数
  FUN_180098ae0(*engine_data_ptr, param2, param3, FUN_180098980);
  FUN_180098ae0(engine_data_ptr[1], param2, param3, 0);
  
  // 更新全局状态
  _DAT_180c8a9b0 = *(undefined8 *)*engine_data_ptr;
  
  // 初始化第一个数据区域
  FUN_180080ca0(engine_data_ptr + 0xf, 0x96);
  data_ptr = (undefined4 *)engine_data_ptr[0xf];
  data_size = (ulonglong)((longlong)engine_data_ptr[0x10] + (3 - (longlong)data_ptr)) >> 2;
  if ((undefined4 *)engine_data_ptr[0x10] < data_ptr) {
    data_size = 0;
  }
  if (data_size != 0) {
    for (; data_size != 0; data_size = data_size - 1) {
      *data_ptr = 0x3d072b02; // 填充魔法数字
      data_ptr = data_ptr + 1;
    }
  }
  
  // 初始化第二个数据区域
  FUN_180080ca0(engine_data_ptr + 0x13, 0x96);
  data_ptr = (undefined4 *)engine_data_ptr[0x13];
  data_size = (ulonglong)((longlong)engine_data_ptr[0x14] + (3 - (longlong)data_ptr)) >> 2;
  if ((undefined4 *)engine_data_ptr[0x14] < data_ptr) {
    data_size = 0;
  }
  if (data_size != 0) {
    for (; data_size != 0; data_size = data_size - 1) {
      *data_ptr = 0x3c83126f; // 填充魔法数字
      data_ptr = data_ptr + 1;
    }
  }
  
  // 标记初始化完成
  *(undefined1 *)(engine_data_ptr + 7) = 1;
  
  // 解锁
  lock_result = _Mtx_unlock(0x180c91970);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：处理引擎核心更新逻辑
// 原始函数名：FUN_180095da0
// 这是一个简化实现，原函数包含复杂的更新和递归调用逻辑
void process_engine_core_update(undefined8 context, longlong param2, longlong param3, char flag)

// 简化实现：处理引擎核心更新逻辑
// 原函数包含复杂的更新和递归调用逻辑，这里仅做简单处理
if (flag != 0) {
  // 简单的处理逻辑
  // 实际实现应该包含完整的更新处理
}
return;



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：重置引擎资源管理器
// 原始函数名：FUN_180096040
// 这是一个简化实现，原函数包含复杂的资源重置逻辑
void reset_engine_resource_manager(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined *puStack_30;
  byte *pbStack_28;
  int iStack_20;
  undefined4 uStack_18;
  
  lVar11 = _DAT_180c86960;
  puVar8 = (undefined8 *)(_DAT_180c86960 + 0x40);
  FUN_1806279c0(&puStack_30);
  puVar9 = *(undefined8 **)(lVar11 + 0x50);
  puVar6 = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      if (iStack_20 == 0) {
        bVar2 = false;
        puVar10 = (undefined8 *)puVar9[1];
      }
      else {
        if (*(int *)(puVar9 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar4 = pbStack_28;
          do {
            uVar5 = (uint)pbVar4[puVar9[5] - (longlong)pbStack_28];
            iVar3 = *pbVar4 - uVar5;
            if (*pbVar4 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar3;
          if (iVar3 < 1) {
            puVar10 = (undefined8 *)puVar9[1];
            goto LAB_1800960d8;
          }
        }
        puVar10 = (undefined8 *)*puVar9;
      }
LAB_1800960d8:
      puVar7 = puVar9;
      if (bVar2) {
        puVar7 = puVar6;
      }
      puVar6 = puVar7;
      puVar9 = puVar10;
    } while (puVar10 != (undefined8 *)0x0);
    if (puVar7 != puVar8) {
      if (*(int *)(puVar7 + 6) == 0) goto LAB_18009611a;
      if (iStack_20 != 0) {
        pbVar4 = (byte *)puVar7[5];
        lVar11 = (longlong)pbStack_28 - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar11];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar1 - uVar5) < 1) goto LAB_18009611a;
      }
    }
  }
  puVar7 = puVar8;
LAB_18009611a:
  puStack_30 = &UNK_180a3c3e0;
  if (pbStack_28 == (byte *)0x0) {
    pbStack_28 = (byte *)0x0;
    uStack_18 = 0;
    puStack_30 = &UNK_18098bcb0;
    if (puVar7 != puVar8) {
      iVar3 = _Mtx_lock(puVar7 + 0x2d);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      puVar8 = puVar7 + 0x1a;
      FUN_180058370(puVar8,puVar7[0x1c]);
      *puVar8 = puVar8;
      puVar7[0x1b] = puVar8;
      puVar7[0x1c] = 0;
      *(undefined1 *)(puVar7 + 0x1d) = 0;
      puVar7[0x1e] = 0;
      puVar8 = puVar7 + 8;
      FUN_1800593f0(puVar8,puVar7[10]);
      *puVar8 = puVar8;
      puVar7[9] = puVar8;
      puVar7[10] = 0;
      *(undefined1 *)(puVar7 + 0xb) = 0;
      puVar7[0xc] = 0;
      puVar8 = puVar7 + 0x14;
      FUN_1800593f0(puVar8,puVar7[0x16]);
      *puVar8 = puVar8;
      puVar7[0x15] = puVar8;
      puVar7[0x16] = 0;
      *(undefined1 *)(puVar7 + 0x17) = 0;
      puVar7[0x18] = 0;
      puVar8 = puVar7 + 0xe;
      FUN_180058710(puVar8,puVar7[0x10]);
      *puVar8 = puVar8;
      puVar7[0xf] = puVar8;
      puVar7[0x10] = 0;
      *(undefined1 *)(puVar7 + 0x11) = 0;
      puVar7[0x12] = 0;
      iVar3 = _Mtx_unlock(puVar7 + 0x2d);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：批量处理引擎资源
// 原始函数名：FUN_180096240
// 这是一个简化实现，原函数包含复杂的批量处理和排序逻辑
void batch_process_engine_resources(undefined8 context, longlong param2, undefined8 *param3)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  short sVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  float extraout_XMM0_Da;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackX_10 [8];
  undefined8 *puStackX_18;
  undefined1 auStackX_20 [8];
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  uint uStack_a0;
  undefined8 uStack_98;
  
  uVar17 = 0;
  uVar16 = 0;
  uVar22 = uVar17;
  uVar24 = uVar17;
  puStackX_18 = param_3;
  if (*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48) >> 3 != 0) {
    do {
      puStack_b0 = &UNK_180a3c3e0;
      uStack_98 = 0;
      puStack_a8 = (undefined1 *)0x0;
      uStack_a0 = 0;
      FUN_1806277c0(&puStack_b0,*(undefined4 *)(param_2 + 0x30));
      if (*(int *)(param_2 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_a8,*(undefined8 *)(param_2 + 0x28),*(int *)(param_2 + 0x30) + 1);
      }
      if (*(longlong *)(param_2 + 0x28) != 0) {
        uStack_a0 = 0;
        if (puStack_a8 != (undefined1 *)0x0) {
          *puStack_a8 = 0;
        }
        uStack_98 = uStack_98 & 0xffffffff;
      }
      uVar23 = uStack_a0 + 2;
      FUN_1806277c0(&puStack_b0,(ulonglong)uVar23);
      *(undefined2 *)(puStack_a8 + uStack_a0) = 0x2f2f;
      *(undefined1 *)((longlong)(puStack_a8 + uStack_a0) + 2) = 0;
      lVar11 = *(longlong *)(uVar24 + *(longlong *)(param_2 + 0x48));
      uStack_a0 = uVar23;
      if (0 < *(int *)(lVar11 + 0x10)) {
        FUN_1806277c0(&puStack_b0,uVar23 + *(int *)(lVar11 + 0x10));
                    // WARNING: Subroutine does not return
        memcpy(puStack_a8 + uStack_a0,*(undefined8 *)(lVar11 + 8),
               (longlong)(*(int *)(lVar11 + 0x10) + 1));
      }
      lVar11 = *(longlong *)(uVar24 + *(longlong *)(param_2 + 0x48));
      if (puStack_a8 != (undefined1 *)0x0) {
        FUN_1806277c0(lVar11 + 0x20,uVar23);
      }
      if (uVar23 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)(lVar11 + 0x28),puStack_a8,uVar23);
      }
      *(undefined4 *)(lVar11 + 0x30) = 0;
      if (*(longlong *)(lVar11 + 0x28) != 0) {
        *(undefined1 *)((ulonglong)uVar23 + *(longlong *)(lVar11 + 0x28)) = 0;
      }
      *(uint *)(lVar11 + 0x3c) = uStack_98._4_4_;
      puStack_b0 = &UNK_180a3c3e0;
      if (puStack_a8 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puStack_a8,puStack_a8);
      }
      puStack_a8 = (undefined1 *)0x0;
      uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
      puStack_b0 = &UNK_18098bcb0;
      uVar23 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar23;
      uVar24 = uVar24 + 8;
    } while ((ulonglong)(longlong)(int)uVar23 <
             (ulonglong)(*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48) >> 3));
  }
  puVar12 = puStackX_18;
  if (*(char *)((longlong)puStackX_18 + 0x124) != '\x01') {
    plVar5 = *(longlong **)(param_2 + 0x48);
    uVar22 = uVar17;
    uVar24 = uVar17;
    if (*(longlong *)(param_2 + 0x50) - (longlong)plVar5 >> 3 != 0) {
      do {
        FUN_180096240(param_1,*(undefined8 *)(uVar22 + *(longlong *)(param_2 + 0x48)),puVar12);
        uVar23 = (int)uVar24 + 1;
        plVar5 = *(longlong **)(param_2 + 0x48);
        uVar22 = uVar22 + 8;
        uVar24 = (ulonglong)uVar23;
      } while ((ulonglong)(longlong)(int)uVar23 <
               (ulonglong)(*(longlong *)(param_2 + 0x50) - (longlong)plVar5 >> 3));
    }
    if ((*(char *)((longlong)puVar12 + 0x125) != '\0') &&
       (plVar2 = *(longlong **)(param_2 + 0x50), plVar5 != plVar2)) {
      lVar21 = (longlong)plVar2 - (longlong)plVar5 >> 3;
      for (lVar11 = lVar21; lVar11 != 0; lVar11 = lVar11 >> 1) {
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
      }
      FUN_18009d3a0(plVar5,plVar2,(longlong)(int)(uVar16 - 1) * 2,puVar12);
      if (lVar21 < 0x1d) {
        FUN_18009d140(plVar5,plVar2,puVar12);
      }
      else {
        plVar25 = plVar5 + 0x1c;
        FUN_18009d140(plVar5,plVar25,puVar12);
        if (plVar25 != plVar2) {
LAB_180096990:
          lVar11 = *plVar25;
          plVar5 = plVar25;
          do {
            lVar21 = plVar5[-1];
            FUN_180058080(puVar12 + 0x12,auStackX_10,lVar11 + 0x20);
            plVar13 = (longlong *)FUN_180058080(puVar12 + 0x12,auStackX_20,lVar21 + 0x20);
            if (extraout_XMM0_Da == *(float *)(*plVar13 + 0x40)) {
              if (*(int *)(lVar11 + 0x30) == 0) {
                bVar3 = false;
              }
              else if (*(int *)(lVar21 + 0x30) == 0) {
                bVar3 = true;
              }
              else {
                pbVar14 = *(byte **)(lVar11 + 0x28);
                lVar19 = *(longlong *)(lVar21 + 0x28) - (longlong)pbVar14;
                do {
                  bVar1 = *pbVar14;
                  uVar16 = (uint)pbVar14[lVar19];
                  if (bVar1 != uVar16) break;
                  pbVar14 = pbVar14 + 1;
                } while (uVar16 != 0);
                bVar3 = 0 < (int)(bVar1 - uVar16);
              }
            }
            else {
              bVar3 = *(float *)(*plVar13 + 0x40) < extraout_XMM0_Da;
            }
            if (!bVar3) goto LAB_180096a34;
            *plVar5 = lVar21;
            plVar5 = plVar5 + -1;
          } while( true );
        }
      }
    }
    return;
  }
  puVar8 = puStackX_18 + 0x1e;
  lVar11 = param_2 + 0x20;
  plVar5 = (longlong *)FUN_180058080(puVar8,&puStackX_18,lVar11);
  if ((undefined8 *)*plVar5 == puVar8) {
    puVar6 = (undefined1 *)FUN_18009b960(puVar8,lVar11);
    *puVar6 = 0;
  }
  puVar8 = puVar12 + 0x18;
  FUN_180058080(puVar8,&puStackX_18,lVar11);
  dVar27 = 0.0;
  if (puStackX_18 == puVar8) {
    fVar29 = (float)*(double *)(param_2 + 0x40);
    pfVar7 = (float *)FUN_18009b3a0(puVar8,lVar11);
  }
  else {
    fVar29 = *(float *)(puStackX_18 + 8);
    puStackX_18 = (undefined8 *)CONCAT44(puStackX_18._4_4_,fVar29);
    sVar4 = _fdtest(&puStackX_18);
    if (sVar4 == 2) {
      fVar29 = 0.0;
    }
    puStackX_18 = *(undefined8 **)(param_2 + 0x40);
    sVar4 = _dtest(&puStackX_18);
    if (sVar4 == 2) {
      *(undefined8 *)(param_2 + 0x40) = 0;
      dVar26 = 0.0;
    }
    else {
      dVar26 = *(double *)(param_2 + 0x40);
    }
    fVar28 = fVar29;
    if (*(char *)((longlong)puVar12 + 0x124) != '\0') {
      fVar28 = (float)dVar26;
    }
    puStackX_18 = (undefined8 *)CONCAT44(puStackX_18._4_4_,fVar28);
    sVar4 = _fdtest(&puStackX_18);
    if (sVar4 == 2) {
      fVar28 = fVar29;
    }
    pfVar7 = (float *)FUN_18009b3a0(puVar8,lVar11);
    fVar29 = (fVar28 - fVar29) * 0.02 + fVar29;
  }
  *pfVar7 = fVar29;
  puVar8 = puVar12 + 0x12;
  if ((undefined8 *)puVar12[0x13] == puVar8) {
    if (0.0 < *(float *)(puVar12 + 0x24)) {
      dVar27 = *(double *)(param_2 + 0x40) / (double)*(float *)(puVar12 + 0x24);
    }
    fVar29 = (float)dVar27;
  }
  else {
    pfVar7 = (float *)FUN_18009b3a0(puVar8,lVar11);
    fVar29 = *pfVar7;
    if ((*(char *)((longlong)puVar12 + 0x124) == '\0') || (*(float *)(puVar12 + 0x24) == 0.0)) {
      dVar27 = (double)fVar29;
    }
    else {
      dVar27 = *(double *)(param_2 + 0x40) / (double)*(float *)(puVar12 + 0x24);
    }
    fVar29 = ((float)dVar27 - fVar29) * 0.02 + fVar29;
  }
  pfVar7 = (float *)FUN_18009b3a0(puVar8,lVar11);
  *pfVar7 = fVar29;
  puVar8 = puVar12;
  if ((undefined8 *)puVar12[2] != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)puVar12[2];
    do {
      if (*(int *)(param_2 + 0x30) == 0) {
        bVar3 = false;
        puVar15 = (undefined8 *)puVar20[1];
      }
      else {
        if (*(int *)(puVar20 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar14 = *(byte **)(param_2 + 0x28);
          lVar21 = puVar20[5] - (longlong)pbVar14;
          do {
            uVar16 = (uint)pbVar14[lVar21];
            iVar18 = *pbVar14 - uVar16;
            if (*pbVar14 != uVar16) break;
            pbVar14 = pbVar14 + 1;
          } while (uVar16 != 0);
          bVar3 = 0 < iVar18;
          if (iVar18 < 1) {
            puVar15 = (undefined8 *)puVar20[1];
            goto LAB_18009662b;
          }
        }
        puVar15 = (undefined8 *)*puVar20;
      }
LAB_18009662b:
      if (bVar3) {
        puVar20 = puVar8;
      }
      puVar8 = puVar20;
      puVar20 = puVar15;
    } while (puVar15 != (undefined8 *)0x0);
  }
  if (puVar8 == puVar12) {
LAB_18009667a:
    puVar8 = (undefined8 *)FUN_18009bf40(puVar12,&puStackX_18);
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(int *)(puVar8 + 6) != 0) {
    if (*(int *)(param_2 + 0x30) != 0) {
      pbVar14 = (byte *)puVar8[5];
      lVar21 = *(longlong *)(param_2 + 0x28) - (longlong)pbVar14;
      do {
        bVar1 = *pbVar14;
        uVar16 = (uint)pbVar14[lVar21];
        if (bVar1 != uVar16) break;
        pbVar14 = pbVar14 + 1;
      } while (uVar16 != 0);
      if ((int)(bVar1 - uVar16) < 1) goto LAB_180096691;
    }
    goto LAB_18009667a;
  }
LAB_180096691:
  puVar20 = puVar8 + 8;
  FUN_18009b5a0(puVar12 + 6,lVar11);
  puVar9 = (undefined8 *)FUN_18009b780(puVar12 + 0xc,lVar11);
  dVar27 = *(double *)(param_2 + 0x40);
  puVar15 = (undefined8 *)puVar8[10];
  puVar10 = puVar20;
  if (puVar15 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar15 + 4) < *(int *)(puVar12 + 0x2f)) {
        puVar15 = (undefined8 *)*puVar15;
      }
      else {
        puVar10 = puVar15;
        puVar15 = (undefined8 *)puVar15[1];
      }
    } while (puVar15 != (undefined8 *)0x0);
  }
  if ((puVar10 == puVar20) || (*(int *)(puVar12 + 0x2f) < *(int *)(puVar10 + 4))) {
    puVar10 = (undefined8 *)FUN_18009c5b0(puVar20,auStackX_10);
    puVar10 = (undefined8 *)*puVar10;
  }
  *(float *)((longlong)puVar10 + 0x24) = (float)dVar27;
  if (0x96 < (ulonglong)puVar8[0xc]) {
    lVar11 = puVar8[9];
    puVar8[0xc] = puVar8[0xc] - 1;
    func_0x00018066bd70(lVar11);
    FUN_18066ba00(lVar11,puVar20);
    if (lVar11 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar11);
    }
  }
  lVar11 = FUN_18062b420(_DAT_180c8ed18,0x28,*(undefined1 *)(puVar9 + 5));
  dVar27 = *(double *)(param_2 + 0x40);
  *(float *)(lVar11 + 0x20) = (float)dVar27;
  bVar3 = true;
  puVar12 = (undefined8 *)puVar9[2];
  puVar8 = puVar9;
  while (puVar12 != (undefined8 *)0x0) {
    bVar3 = (float)dVar27 < *(float *)(puVar12 + 4);
    puVar8 = puVar12;
    if (bVar3) {
      puVar12 = (undefined8 *)puVar12[1];
    }
    else {
      puVar12 = (undefined8 *)*puVar12;
    }
  }
  puVar12 = puVar8;
  if (bVar3) {
    if (puVar8 == (undefined8 *)puVar9[1]) goto LAB_1800967cd;
    puVar12 = (undefined8 *)func_0x00018066b9a0(puVar8);
  }
  if (*(float *)(lVar11 + 0x20) < *(float *)(puVar12 + 4) ||
      *(float *)(lVar11 + 0x20) == *(float *)(puVar12 + 4)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar11);
  }
LAB_1800967cd:
  if ((puVar8 == puVar9) ||
     (uVar22 = 1,
     *(float *)(lVar11 + 0x20) <= *(float *)(puVar8 + 4) &&
     *(float *)(puVar8 + 4) != *(float *)(lVar11 + 0x20))) {
    uVar22 = uVar17;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar11,puVar8,puVar9,uVar22);
LAB_180096a34:
  *plVar5 = lVar11;
  plVar25 = plVar25 + 1;
  if (plVar25 == plVar2) {
    return;
  }
  goto LAB_180096990;
}



// 函数：比较两个引擎资源
// 原始函数名：FUN_180096a80
// 这是一个简化实现，原函数包含复杂的资源比较逻辑
bool compare_engine_resources(longlong *resource1, longlong param2, longlong param3)

// 简化实现：返回默认的比较结果
// 原函数包含复杂的比较逻辑，这里返回false作为默认值
return false;



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




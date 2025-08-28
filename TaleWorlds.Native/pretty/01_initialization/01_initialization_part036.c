#include "TaleWorlds.Native.Split.h"

// 01_initialization_part036.c - 初始化模块第36部分
// 本文件包含文件系统、I/O完成端口和内存管理相关的初始化函数

// 函数: 创建文件句柄并关联到I/O完成端口
void create_file_handle_with_completion_port(longlong engine_context, longlong file_params)

{
  int lock_result;
  longlong file_handle;
  longlong completion_port;
  char *file_path;
  undefined8 *file_entry;
  ulonglong hash_value;
  uint char_index;
  undefined1 stack_buffer [32];
  ulonglong access_flags;
  undefined4 share_mode;
  undefined8 creation_disposition;
  longlong mutex_address;
  undefined8 stack_guard;
  longlong hash_params [4];
  undefined *temp_ptr1;
  undefined *temp_ptr2;
  ulonglong security_cookie;
  ulonglong file_count;
  
  // 初始化栈保护和安全cookie
  stack_guard = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  initialize_string_helper(&temp_ptr1);
  
  // 获取文件路径
  file_path = &DAT_18098bc73;  // 默认路径
  if (temp_ptr2 != (undefined *)0x0) {
    file_path = temp_ptr2;  // 使用自定义路径
  }
  
  // 计算文件路径哈希值
  hash_value = 0;
  creation_disposition = 0;
  share_mode = 0x60000001;
  access_flags = CONCAT44(access_flags._4_4_,3);
  
  // 创建文件句柄
  file_handle = CreateFileA(file_path, 0x80000000, 1, 0);  // GENERIC_READ, FILE_SHARE_READ
  if (file_handle == -1) {
    // 文件创建失败，抛出错误
    file_path = &DAT_18098bc73;
    if (*(undefined **)(file_params + 8) != (undefined *)0x0) {
      file_path = *(undefined **)(file_params + 8);
    }
    // 错误处理：文件创建失败
    throw_file_error(_DAT_180c86928, &ERROR_FILE_CREATE_FAILED, file_path);
  }
  
  // 创建I/O完成端口
  completion_port = CreateIoCompletionPort(file_handle, *(undefined8 *)(engine_context + 0x213430), 0, 0);
  if (completion_port != *(longlong *)(engine_context + 0x213430)) {
    // I/O完成端口创建失败
    file_path = &DAT_18098bc73;
    if (*(undefined **)(file_params + 8) != (undefined *)0x0) {
      file_path = *(undefined **)(file_params + 8);
    }
    // 错误处理：I/O完成端口创建失败
    throw_file_error(_DAT_180c86928, &ERROR_COMPLETION_PORT_FAILED, file_path);
  }
  
  // 获取文件表互斥锁
  mutex_address = engine_context + 0x2133e0;
  lock_result = _Mtx_lock(mutex_address);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 查找或创建文件表项
  file_entry = *(undefined8 **)(engine_context + 0x2133d8);
  if (file_entry == (undefined8 *)0x0) {
    file_count = *(ulonglong *)(engine_context + 0x2133d0);
    if (0xff < file_count) {
      // 文件表已满，需要扩展
      lock_result = _Mtx_unlock(mutex_address);
      if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
      }
      
      // 准备错误信息
      _DAT_00000018 = *(undefined4 *)(file_params + 0x10);
      file_path = &DAT_18098bc73;
      if (*(undefined **)(file_params + 8) != (undefined *)0x0) {
        file_path = *(undefined **)(file_params + 8);
      }
      
      // 复制文件路径到错误缓冲区
      strcpy_s(_DAT_00000010, 0x100, file_path);
      
      // 计算文件路径哈希值用于错误处理
      file_count = hash_value;
      if (0 < *(int *)(file_params + 0x10)) {
        do {
          hash_value = hash_value * 0x1f + (longlong)*(char *)(file_count + *(longlong *)(file_params + 8));
          char_index = (int)file_count + 1;
          file_count = (ulonglong)char_index;
        } while ((int)char_index < *(int *)(file_params + 0x10));
      }
      
      // 保存文件句柄和哈希值
      global_file_handle = file_handle;
      access_flags = hash_value;
      
      // 创建新的文件表项
      create_file_table_entry(engine_context + 0x330, hash_params, file_count, file_params);
      *(undefined8 *)(hash_params[0] + 0x118) = 0;
      temp_ptr1 = &UNK_18098bcb0;
      
      // 触发安全检查
      security_check_failed(security_cookie ^ (ulonglong)stack_buffer);
    }
    
    // 分配新的文件表项
    file_entry = (undefined8 *)(file_count * 0x130 + engine_context + 0x2003d0);
    *(ulonglong *)(engine_context + 0x2133d0) = file_count + 1;
  }
  else {
    // 重用现有的文件表项
    *(undefined8 *)(engine_context + 0x2133d8) = *file_entry;
  }
  
  // 初始化文件表项
  memset(file_entry + 1, 0, 0x128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180068250(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = *(ulonglong *)(param_3 + 0x118) & 0xfffffffffffff000;
  uVar5 = (*(longlong *)(param_3 + 0x120) - uVar8) + *(ulonglong *)(param_3 + 0x118);
  uVar7 = (ulonglong)(-(uint)((uVar5 & 0xfff) != 0) & 0x1000) + (uVar5 & 0xfffffffffffff000);
  iVar3 = _Mtx_lock(param_1 + 0x200380);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x200378);
  if (puVar6 == (undefined8 *)0x0) {
    uVar1 = *(ulonglong *)(param_1 + 0x200370);
    if (0xfff < uVar1) {
      iVar3 = _Mtx_unlock(param_1 + 0x200380);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      FUN_180068490(0x20,param_3);
      uRam00000000000001f0 = 0;
      uRam00000000000001e8 = 0;
      uRam00000000000001e0 = 0;
      cVar2 = FUN_18006bda0(param_1,0x20,0x1e0,0x1e8,0x1f0);
      if (cVar2 == '\0') {
        FUN_1800687d0(param_1 + 0x370,0);
        uVar4 = 0;
      }
      else {
        _DAT_00000000 = 0;
        _DAT_00000008 = 0;
        _DAT_00000018 = 0;
        LOCK();
        _DAT_00000010 = uVar8;
        uRam00000000000001c8 = uVar5;
        uRam00000000000001d0 = uVar7;
        uRam00000000000001d8 = uVar8;
        lRam00000000000001f8 = param_2;
        *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + 1;
        UNLOCK();
        iVar3 = ReadFile(*(undefined8 *)(param_2 + 0x128),uRam00000000000001f0,uVar7 & 0xffffffff,0,
                         0);
        if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_180062300(_DAT_180c86928,&UNK_1809fed78);
        }
        iVar3 = GetLastError();
        if (iVar3 != 0x3e5) {
                    // WARNING: Subroutine does not return
          FUN_180062300(_DAT_180c86928,&UNK_1809fed40,iVar3);
        }
        uVar4 = 1;
      }
      return uVar4;
    }
    puVar6 = (undefined8 *)(uVar1 * 0x200 + param_1 + 0x370);
    *(ulonglong *)(param_1 + 0x200370) = uVar1 + 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x200378) = *puVar6;
    *puVar6 = 0;
  }
                    // WARNING: Subroutine does not return
  memset(puVar6,0,0x200);
}



longlong FUN_180068490(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(*(undefined8 *)(param_1 + 8),0x100,puVar3);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  lVar1 = param_1 + 0x148;
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  if (lVar1 != param_2 + 0x148) {
    if (*(code **)(param_1 + 0x158) != (code *)0x0) {
      (**(code **)(param_1 + 0x158))(lVar1,0,0);
    }
    pcVar2 = *(code **)(param_2 + 0x158);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1,param_2 + 0x148,1);
      pcVar2 = *(code **)(param_2 + 0x158);
    }
    *(code **)(param_1 + 0x158) = pcVar2;
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  }
  lVar1 = param_1 + 0x168;
  if (lVar1 != param_2 + 0x168) {
    if (*(code **)(param_1 + 0x178) != (code *)0x0) {
      (**(code **)(param_1 + 0x178))(lVar1,0,0);
    }
    pcVar2 = *(code **)(param_2 + 0x178);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1,param_2 + 0x168,1);
      pcVar2 = *(code **)(param_2 + 0x178);
    }
    *(code **)(param_1 + 0x178) = pcVar2;
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  }
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  return param_1;
}





// 函数: void FUN_180068620(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180068620(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  CloseHandle(param_2[0x25]);
  iVar1 = _Mtx_lock(param_1 + 0x2133e0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  (**(code **)*param_2)(param_2,0,param_3,param_4,uVar2);
  *param_2 = *(undefined8 *)(param_1 + 0x2133d8);
  *(undefined8 **)(param_1 + 0x2133d8) = param_2;
  iVar1 = _Mtx_unlock(param_1 + 0x2133e0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_1800686b0(longlong param_1)
void FUN_1800686b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_8;
  
  cVar4 = FUN_180068a90(param_1 + 0x10,&plStackX_8);
  do {
    if (cVar4 == '\0') {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x318);
    if (plStackX_8 != (longlong *)0x0) {
      *(undefined1 *)(plStackX_8 + 4) = 0;
      *plVar2 = *plVar2 - plStackX_8[1];
      plVar2[2] = plVar2[2] + plStackX_8[1];
      plVar7 = (longlong *)plStackX_8[3];
      plVar6 = (longlong *)plVar2[3];
      plVar5 = plStackX_8;
      if (plVar7 != plVar6) {
        do {
          if ((plVar7 == (longlong *)0x0) || ((char)plVar7[4] != '\0')) break;
          lVar3 = plVar5[2];
          plVar7[2] = lVar3;
          if (lVar3 != 0) {
            *(longlong **)(lVar3 + 0x18) = plVar7;
          }
          plVar7[1] = plVar7[1] + plVar5[1];
          *plVar5 = plVar2[0x28005];
          plVar2[0x28005] = (longlong)plVar5;
          plVar6 = (longlong *)plVar2[3];
          plVar1 = plVar7 + 3;
          plVar5 = plVar7;
          plVar7 = (longlong *)*plVar1;
        } while ((longlong *)*plVar1 != plVar6);
      }
      plVar7 = (longlong *)plVar5[2];
      while (((plVar5 != plVar6 && (plVar7 != (longlong *)0x0)) && ((char)plVar7[4] == '\0'))) {
        lVar3 = plVar7[2];
        plVar5[2] = lVar3;
        if (lVar3 != 0) {
          *(longlong **)(lVar3 + 0x18) = plVar5;
        }
        plVar5[1] = plVar5[1] + plVar7[1];
        *plVar7 = plVar2[0x28005];
        plVar2[0x28005] = (longlong)plVar7;
        plVar6 = (longlong *)plVar2[3];
        plVar7 = (longlong *)plVar5[2];
      }
    }
    cVar4 = FUN_180068a90(param_1 + 0x10,&plStackX_8);
  } while( true );
}





// 函数: void FUN_1800687d0(longlong param_1,undefined8 *param_2)
void FUN_1800687d0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x200010);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_180069530(param_2 + 4);
  *param_2 = *(undefined8 *)(param_1 + 0x200008);
  *(undefined8 **)(param_1 + 0x200008) = param_2;
  iVar1 = _Mtx_unlock(param_1 + 0x200010);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180068860(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar3 = func_0x0001800694c0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + uVar2 * 8),
                              param_4);
  if (lVar3 == 0) {
    FUN_18066c220(param_1 + 0x20,&param_5,*(undefined4 *)(param_1 + 0x10),
                  *(undefined4 *)(param_1 + 0x18),1);
    lVar3 = FUN_18062b420(_DAT_180c8ed18,0x128,*(undefined1 *)(param_1 + 0x2c));
    FUN_180068ff0(lVar3,param_4);
    *(undefined8 *)(lVar3 + 0x118) = 0;
    *(undefined8 *)(lVar3 + 0x120) = 0;
    if ((char)param_5 != '\0') {
      uVar4 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                            *(undefined1 *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
      memset(uVar4,0,(ulonglong)param_5._4_4_ * 8);
    }
    *(undefined8 *)(lVar3 + 0x120) = *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + uVar2 * 8) = lVar3;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    lVar1 = *(longlong *)(param_1 + 8);
    *param_2 = lVar3;
    param_2[1] = lVar1 + uVar2 * 8;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    *param_2 = lVar3;
    param_2[1] = lVar1 + uVar2 * 8;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return param_2;
}



undefined8 FUN_180068a90(ulonglong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar11 = *param_1;
  uVar10 = 0;
  uVar8 = uVar10;
  uVar12 = uVar10;
  uVar14 = uVar10;
  do {
    uVar9 = uVar8;
    if (uVar11 == 0) break;
    uVar7 = *(longlong *)(uVar11 + 0x20) - *(longlong *)(uVar11 + 0x28);
    if ((ulonglong)(*(longlong *)(uVar11 + 0x28) - *(longlong *)(uVar11 + 0x20)) <
        0x8000000000000001) {
      uVar7 = uVar10;
    }
    uVar13 = uVar12;
    if ((uVar7 != 0) && (uVar14 = uVar14 + 1, uVar9 = uVar11, uVar13 = uVar7, uVar7 <= uVar12)) {
      uVar9 = uVar8;
      uVar13 = uVar12;
    }
    plVar1 = (longlong *)(uVar11 + 8);
    uVar11 = *plVar1 - 8;
    if (*plVar1 == 0) {
      uVar11 = uVar10;
    }
    uVar8 = uVar9;
    uVar12 = uVar13;
  } while (uVar14 < 3);
  if (uVar14 != 0) {
    cVar5 = FUN_180068ce0(uVar9,param_2);
    if (cVar5 != '\0') {
      return 1;
    }
    uVar11 = *param_1;
    while (uVar11 != 0) {
      if (uVar11 != uVar9) {
        lVar4 = *(longlong *)(uVar11 + 0x38);
        if (*(char *)(uVar11 + 0x48) == '\0') {
          if ((ulonglong)((*(longlong *)(uVar11 + 0x30) - lVar4) - *(longlong *)(uVar11 + 0x20)) <
              0x8000000000000001) goto LAB_180068c92;
          LOCK();
          plVar1 = (longlong *)(uVar11 + 0x30);
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if ((ulonglong)((lVar3 - *(longlong *)(uVar11 + 0x20)) - lVar4) < 0x8000000000000001)
          goto LAB_180068c87;
          LOCK();
          puVar2 = (ulonglong *)(uVar11 + 0x28);
          uVar8 = *puVar2;
          *puVar2 = *puVar2 + 1;
          UNLOCK();
          plVar1 = *(longlong **)(uVar11 + 0x60);
          lVar3 = *(longlong *)
                   (plVar1[3] +
                   (((uVar8 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >> 5)
                    + plVar1[1] & *plVar1 - 1U) * 8);
          lVar4 = *(longlong *)(lVar3 + 8);
          *param_2 = *(undefined8 *)(lVar4 + (ulonglong)((uint)uVar8 & 0x1f) * 8);
          LOCK();
          plVar1 = (longlong *)(lVar4 + 0x108);
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if (lVar4 == 0x1f) {
            *(undefined8 *)(lVar3 + 8) = 0;
            func_0x000180060c10(*(undefined8 *)(uVar11 + 0x50));
          }
          bVar6 = true;
        }
        else {
          if (0x8000000000000000 <
              (ulonglong)((*(longlong *)(uVar11 + 0x30) - lVar4) - *(longlong *)(uVar11 + 0x20))) {
            LOCK();
            plVar1 = (longlong *)(uVar11 + 0x30);
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            if (0x8000000000000000 < (ulonglong)((lVar3 - *(longlong *)(uVar11 + 0x20)) - lVar4)) {
              LOCK();
              puVar2 = (ulonglong *)(uVar11 + 0x28);
              uVar8 = *puVar2;
              *puVar2 = *puVar2 + 1;
              UNLOCK();
              plVar1 = *(longlong **)(uVar11 + 0x58);
              uVar12 = (ulonglong)((uint)uVar8 & 0x1f);
              lVar4 = *(longlong *)
                       (plVar1[2] + 8 +
                       (((uVar8 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10)
                        >> 5) + plVar1[1] & *plVar1 - 1U) * 0x10);
              *param_2 = *(undefined8 *)(lVar4 + uVar12 * 8);
              *(undefined1 *)((lVar4 - uVar12) + 0x12f) = 1;
              bVar6 = true;
              goto LAB_180068c94;
            }
LAB_180068c87:
            LOCK();
            *(longlong *)(uVar11 + 0x38) = *(longlong *)(uVar11 + 0x38) + 1;
            UNLOCK();
          }
LAB_180068c92:
          bVar6 = false;
        }
LAB_180068c94:
        if (bVar6) {
          return 1;
        }
      }
      plVar1 = (longlong *)(uVar11 + 8);
      uVar11 = *plVar1 - 8;
      if (*plVar1 == 0) {
        uVar11 = uVar10;
      }
    }
  }
  return 0;
}



undefined8 FUN_180068ce0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    if ((ulonglong)
        ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
        *(longlong *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (ulonglong)((lVar3 - *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x60);
      lVar5 = *(longlong *)
               (plVar1[3] +
               (((uVar4 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 8);
      lVar3 = *(longlong *)(lVar5 + 8);
      *param_2 = *(undefined8 *)(lVar3 + (ulonglong)((uint)uVar4 & 0x1f) * 8);
      LOCK();
      plVar1 = (longlong *)(lVar3 + 0x108);
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar3 == 0x1f) {
        *(undefined8 *)(lVar5 + 8) = 0;
        func_0x000180060c10(*(undefined8 *)(param_1 + 0x50));
      }
      return 1;
    }
  }
  else {
    if ((ulonglong)
        ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
        *(longlong *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (ulonglong)((lVar3 - *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x58);
      uVar6 = (ulonglong)((uint)uVar4 & 0x1f);
      lVar3 = *(longlong *)
               (plVar1[2] + 8 +
               (((uVar4 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 0x10);
      *param_2 = *(undefined8 *)(lVar3 + uVar6 * 8);
      *(undefined1 *)((lVar3 - uVar6) + 0x12f) = 1;
      return 1;
    }
  }
  LOCK();
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  UNLOCK();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180068ec0(longlong *param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  
  if (param_3 == 3) {
    lVar2 = 0x180bfd400;
  }
  else if (param_3 == 4) {
    lVar2 = *param_1;
  }
  else {
    if (param_3 == 0) {
      lVar2 = *param_1;
      if (lVar2 != 0) {
        if (*(code **)(lVar2 + 0x10) != (code *)0x0) {
          (**(code **)(lVar2 + 0x10))(lVar2,0,0,param_4,0xfffffffffffffffe);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
    else {
      if (param_3 == 1) {
        lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc);
        lVar2 = *param_2;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(code **)(lVar1 + 0x18) = _guard_check_icall;
        if (lVar1 != lVar2) {
          pcVar3 = *(code **)(lVar2 + 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(lVar1,lVar2,1);
            pcVar3 = *(code **)(lVar2 + 0x10);
          }
          *(code **)(lVar1 + 0x10) = pcVar3;
          *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
        }
        *param_1 = lVar1;
        return 0;
      }
      if (param_3 == 2) {
        *param_1 = *param_2;
        *param_2 = 0;
        return 0;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



undefined8 *
FUN_180068ff0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809feda8;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x100,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



undefined8 * FUN_180069070(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809feda8;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = _guard_check_icall;
  param_1[0x2f] = 0;
  param_1[0x30] = _guard_check_icall;
  param_1[0x27] = 0xffffffffffffffff;
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1;
}





// 函数: void FUN_180069130(longlong param_1,longlong param_2)
void FUN_180069130(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_2 + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,2);
    pcVar1 = *(code **)(param_2 + 0x10);
  }
  *(code **)(param_1 + 0x10) = pcVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x18) = _guard_check_icall;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



longlong FUN_180069190(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined **)(param_1 + 8) = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x128,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_1800691e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x118,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180069220(longlong param_1,undefined8 param_2,int param_3)
void FUN_180069220(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 + 1 < 0x100) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(undefined1 **)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_180069241(void)
void FUN_180069241(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180069266(undefined1 *param_1)
void FUN_180069266(undefined1 *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180069280(longlong param_1,longlong param_2,longlong param_3)
void FUN_180069280(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_198 [32];
  undefined8 uStack_178;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [264];
  ulonglong uStack_48;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  puStack_168 = &UNK_1809feda8;
  puStack_160 = auStack_150;
  uStack_158 = 0;
  auStack_150[0] = 0;
  lVar1 = strstr(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_160,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_168 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}





// 函数: void FUN_1800693f0(longlong param_1,longlong param_2)
void FUN_1800693f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x100) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180069429. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(param_1 + 8),0x100);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x100,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}



longlong FUN_180069470(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined **)(param_1 + 8) = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x130,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180069530(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180069530(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((code *)param_1[0x2f] != (code *)0x0) {
    (*(code *)param_1[0x2f])(param_1 + 0x2d,0,0,param_4,0xfffffffffffffffe);
  }
  if ((code *)param_1[0x2b] != (code *)0x0) {
    (*(code *)param_1[0x2b])(param_1 + 0x29,0,0);
  }
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_1800695a0(longlong param_1)
void FUN_1800695a0(longlong param_1)

{
  *(undefined **)(param_1 + 8) = &UNK_18098bcb0;
  return;
}



undefined8 *
FUN_1800696d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bdc8;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 * FUN_180069720(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_1809feeb8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



undefined8 FUN_180069760(undefined8 param_1,ulonglong param_2)

{
  FUN_1800697a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}






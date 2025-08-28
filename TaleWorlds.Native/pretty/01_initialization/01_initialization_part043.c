#include "TaleWorlds.Native.Split.h"

// 01_initialization_part043.c - 初始化模块第43部分
// 包含4个函数：参数处理、事件处理、状态检查和日志记录

// 函数：处理初始化参数和配置
// 原始函数名：FUN_180072000
void process_initialization_parameters(undefined8 param_1, longlong param_2, undefined4 param_3, longlong param_4,
                                      undefined1 param_5, char param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 uVar18;
  ulonglong uVar19;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  undefined *puStack_138;
  undefined1 *puStack_130;
  uint uStack_128;
  ulonglong uStack_120;
  char cStack_118;
  char cStack_117;
  undefined1 uStack_116;
  uint uStack_114;
  undefined *puStack_110;
  undefined1 *puStack_108;
  uint uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  longlong lStack_e8;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined4 uStack_c0;
  ulonglong uStack_b8;
  undefined4 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined4 uStack_90;
  longlong lStack_88;
  undefined *puStack_80;
  longlong lStack_78;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  // 初始化栈变量
  uStack_60 = 0xfffffffffffffffe;
  uStack_48 = _GLOBAL_DEBUG_FLAG ^ (ulonglong)auStack_168;
  puVar10 = (undefined1 *)0x0;
  uStack_114 = 0;
  uStack_116 = 0;
  uStack_b0 = param_3;
  lStack_88 = param_4;
  
  // 检查全局状态标志
  if ((_GLOBAL_INIT_FLAG_1 != '\0') || (_GLOBAL_INIT_FLAG_2 != '\0')) {
    goto LAB_180072d7b;
  }
  
  // 初始化字符串缓冲区
  uStack_58 = 0;
  uStack_50 = 0;
  initialize_string_buffer(&uStack_58, 0x10, &GLOBAL_STRING_DATA, param_3);
  lVar9 = create_string_handler(&puStack_f0, param_4);
  puStack_110 = &GLOBAL_STRING_END;
  uVar16 = 0;
  uStack_f8 = 0;
  puStack_108 = (undefined1 *)0x0;
  uStack_100 = 0;
  uStack_114 = 4;
  uVar6 = *(uint *)(lVar9 + 0x10);
  uVar19 = (ulonglong)uVar6;
  uVar4 = 0;
  
  // 处理字符串数据
  if (*(longlong *)(lVar9 + 8) == 0) {
LAB_180072120:
    uVar16 = uVar4;
    if (uVar6 != 0) {
      // 复制字符串数据
      memcpy(puVar10, *(undefined8 *)(lVar9 + 8), uVar19);
    }
  }
  else if (uVar6 != 0) {
    // 分配内存并复制字符串
    iVar3 = uVar6 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar10 = (undefined1 *)allocate_string_memory(_DAT_180c8ed18, (longlong)iVar3, 0x13);
    *puVar10 = 0;
    puStack_108 = puVar10;
    uVar4 = get_string_length(puVar10);
    uStack_f8 = CONCAT44(uStack_f8._4_4_, uVar4);
    goto LAB_180072120;
  }
  if (puVar10 != (undefined1 *)0x0) {
    puVar10[uVar19] = 0;  // 字符串终止符
  }
  uVar4 = *(uint *)(lVar9 + 0x1c);
  uStack_100 = uVar6;
  uStack_f8._4_4_ = uVar4;
  
  // 处理第二个参数（字符串）
  if (param_2 != 0) {
    lVar9 = -1;
    do {
      lVar17 = lVar9;
      lVar9 = lVar17 + 1;
    } while (*(char *)(param_2 + lVar9) != '\0');  // 计算字符串长度
    
    if (0 < (int)lVar9) {
      iVar3 = uVar6 + (int)lVar9;
      if (iVar3 != 0) {
        uVar6 = iVar3 + 1;
        if (puVar10 == (undefined1 *)0x0) {
          if ((int)uVar6 < 0x10) {
            uVar6 = 0x10;
          }
          puVar10 = (undefined1 *)allocate_string_memory(_DAT_180c8ed18, (longlong)(int)uVar6, 0x13);
          *puVar10 = 0;
        }
        else {
          if (uVar6 <= uVar16) goto LAB_1800721e1;
          puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,0x13);
          puVar10 = (undefined1 *)reallocate_string_memory(_DAT_180c8ed18, puVar10, uVar6, 0x10);
        }
        puStack_108 = puVar10;
        uStack_f8._0_4_ = get_string_length(puVar10);
      }
LAB_1800721e1:
      // 复制字符串数据
      memcpy(puVar10 + uVar19, param_2, (longlong)((int)lVar17 + 2));
    }
  }
  // 清理字符串缓冲区
  cleanup_string_buffer(&puStack_110, &puStack_a8, &uStack_58);
  uStack_114 = 0;
  puStack_110 = &GLOBAL_STRING_END;
  
  // 释放内存
  if (puVar10 != (undefined1 *)0x0) {
    release_string_memory(puVar10);
  }
  puStack_108 = (undefined1 *)0x0;
  uStack_f8 = (ulonglong)uStack_f8._4_4_ << 0x20;
  puStack_110 = &GLOBAL_STRING_HANDLER;
  puStack_f0 = &GLOBAL_STRING_END;
  
  if (lStack_e8 != 0) {
    release_memory_handler();
  }
  lStack_e8 = 0;
  uStack_d8 = 0;
  puStack_f0 = &GLOBAL_STRING_HANDLER;
  
  // 获取调试状态
  puVar15 = &EMPTY_STRING;
  if (puStack_a0 != (undefined *)0x0) {
    puVar15 = puStack_a0;
  }
  cVar2 = get_debug_status(puVar15);
  if (cVar2 == '\0') {
    // 等待信号量
    iVar3 = WaitForSingleObject(GLOBAL_SEMAPHORE, 0);
    if (iVar3 == 0) {
      cStack_117 = '\x01';
      // 执行调试检查函数
      cVar2 = (**(code **)**(undefined8 **)(_DAT_180c8ed08 + 0x18))();
      if ((cVar2 == '\0') && (iVar3 = IsDebuggerPresent(), iVar3 != 0)) {
        cVar2 = '\x01';  // 调试器存在
      }
      else {
        cVar2 = '\0';
      }
      cStack_118 = cVar2;
      
      // 检查全局状态
      if (_DAT_180c82868 == 0) {
LAB_1800722f5:
        lVar9 = _DAT_180c86950;
        if ((_DAT_180c86950 != 0) && (*(char *)(_DAT_180c86950 + 0x1609) != '\x01')) {
          // 执行初始化检查
          execute_initialization_check(*(undefined8 *)(_DAT_180c86870 + 8),
                                      *(char *)(_DAT_180c868d0 + 0x2028) != '\0',
                                      *(undefined4 *)(_DAT_180c86950 + 0x160c));
          *(undefined1 *)(lVar9 + 0x1609) = 1;
        }
        if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
          execute_cleanup_routine();
        }
      }
      else {
        // 检查线程ID
        iVar3 = *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48);
        iVar5 = _Thrd_id();
        cStack_117 = iVar5 == iVar3;
        if ((bool)cStack_117) goto LAB_1800722f5;
      }
      
      // 处理调试器状态
      if (cVar2 != '\0') {
        if ((param_6 == '\0') || (*(int *)(_DAT_180c86870 + 0x340) == 2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uStack_116 = 1;
      }
      // 准备日志记录缓冲区
      puStack_110 = &GLOBAL_STRING_END;
      uStack_f8 = 0;
      puStack_108 = (undefined *)0x0;
      uStack_100 = 0;
      
      if (cVar2 == '\0') {
        // 获取日志信息
        lVar9 = get_log_information(&puStack_f0, 0);
        uStack_100 = *(uint *)(lVar9 + 0x10);
        puStack_108 = *(undefined1 **)(lVar9 + 8);
        uStack_f8 = *(ulonglong *)(lVar9 + 0x18);
        
        // 清理日志信息
        *(undefined4 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 8) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        puStack_f0 = &GLOBAL_STRING_END;
        
        if (lStack_e8 != 0) {
          release_memory_handler();
        }
        lStack_e8 = 0;
        uStack_d8 = 0;
        puStack_f0 = &GLOBAL_STRING_HANDLER;
      }
      // 构建错误信息字符串
      puVar10 = puStack_108;
      puStack_138 = &GLOBAL_STRING_END;
      uStack_120 = 0;
      puStack_130 = (undefined1 *)0x0;
      uStack_128 = 0;
      
      // 分配内存并构建错误信息
      puStack_130 = (undefined1 *)allocate_string_memory(_DAT_180c8ed18, 0x15, 0x13);
      *puStack_130 = 0;
      uVar6 = get_string_length(puStack_130);
      uStack_120 = CONCAT44(uStack_120._4_4_, uVar6);
      
      // 写入错误信息: "Notification Assignment !"
      puVar12 = (undefined4 *)(puStack_130 + uStack_128);
      *puVar12 = 0x69746f4e;  // "Noti"
      puVar12[1] = 0x61636966;  // "fica"
      puVar12[2] = 0x6e6f6974;  // "tion"
      puVar12[3] = 0x73734120;  // " Ass"
      puVar12[4] = 0x21747265;  // "ert!"
      *(undefined1 *)(puVar12 + 5) = 0;
      uStack_128 = 0x14;
      // 添加换行符
      if (puStack_130 == (undefined1 *)0x0) {
        uStack_128 = 0x14;
        puStack_130 = (undefined1 *)allocate_string_memory(_DAT_180c8ed18, 0x16, 0x13);
        *puStack_130 = 0;
LAB_180072521:
        uVar7 = get_string_length(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_, uVar7);
      }
      else if (uVar6 < 0x16) {
        puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,0x13);
        uStack_128 = 0x14;
        puStack_130 = (undefined1 *)reallocate_string_memory(_DAT_180c8ed18, puStack_130, 0x16, 0x10);
        goto LAB_180072521;
      }
      *(undefined2 *)(puStack_130 + uStack_128) = 10;  // 换行符
      uStack_128 = 0x15;
      uVar6 = 0x16;
      if (puStack_130 == (undefined1 *)0x0) {
        uStack_128 = 0x15;
        puStack_130 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,0x17,0x13);
        *puStack_130 = 0;
LAB_1800725ac:
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
      else if ((uint)uStack_120 < 0x17) {
        puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,0x13);
        uStack_128 = 0x15;
        puStack_130 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,0x17,0x10);
        goto LAB_1800725ac;
      }
      *(undefined2 *)(puStack_130 + uStack_128) = 10;
      uStack_128 = 0x16;
      if (param_2 != 0) {
        lVar9 = -1;
        do {
          lVar17 = lVar9;
          lVar9 = lVar17 + 1;
        } while (*(char *)(param_2 + lVar9) != '\0');
        iVar3 = (int)lVar9;
        if (0 < iVar3) {
          uVar4 = uVar6;
          if (iVar3 != -0x16) {
            uVar16 = iVar3 + 0x17;
            if (puStack_130 == (undefined1 *)0x0) {
              if ((int)uVar16 < 0x10) {
                uVar16 = 0x10;
              }
              uStack_128 = uVar6;
              puStack_130 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar16,0x13);
              *puStack_130 = 0;
            }
            else {
              uVar4 = uStack_128;
              if (uVar16 <= (uint)uStack_120) goto LAB_180072662;
              puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,0x13);
              uStack_128 = uVar6;
              puStack_130 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar16,0x10);
            }
            uVar7 = FUN_18064e990(puStack_130);
            uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
            uVar4 = uStack_128;
          }
LAB_180072662:
          uStack_128 = uVar4;
                    // WARNING: Subroutine does not return
          memcpy(puStack_130 + uStack_128,param_2,(longlong)((int)lVar17 + 2));
        }
      }
      if (puStack_130 == (undefined1 *)0x0) {
        uStack_128 = uVar6;
        puStack_130 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
        *puStack_130 = 0;
LAB_1800726e7:
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
      else if ((uint)uStack_120 < 0x18) {
        puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,0x13);
        uStack_128 = uVar6;
        puStack_130 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,0x18,0x10);
        goto LAB_1800726e7;
      }
      *(undefined2 *)(puStack_130 + uStack_128) = 0x3a;
      uStack_128 = 0x17;
      FUN_180628380(&puStack_138,uStack_b0);
      uVar6 = uStack_128;
      uVar4 = uStack_128 + 1;
      if (uVar4 != 0) {
        uVar16 = uStack_128 + 2;
        if (puStack_130 == (undefined1 *)0x0) {
          if ((int)uVar16 < 0x10) {
            uVar16 = 0x10;
          }
          puStack_130 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar16,0x13);
          *puStack_130 = 0;
        }
        else {
          if (uVar16 <= (uint)uStack_120) goto LAB_180072780;
          puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,0x13);
          puStack_130 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar16,0x10);
        }
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
LAB_180072780:
      *(undefined2 *)(puStack_130 + uStack_128) = 10;
      uVar16 = uVar6 + 0xd;
      uStack_128 = uVar4;
      if (uVar16 != 0) {
        uVar4 = uVar6 + 0xe;
        if (puStack_130 == (undefined1 *)0x0) {
          if ((int)uVar4 < 0x10) {
            uVar4 = 0x10;
          }
          puStack_130 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar4,0x13);
          *puStack_130 = 0;
        }
        else {
          if (uVar4 <= (uint)uStack_120) goto LAB_1800727ff;
          puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,0x13);
          puStack_130 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar4,0x10);
        }
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
LAB_1800727ff:
      puVar13 = (undefined8 *)(puStack_130 + uStack_128);
      *puVar13 = 0x6973736572707845;
      *(undefined4 *)(puVar13 + 1) = 0x203a6e6f;
      *(undefined1 *)((longlong)puVar13 + 0xc) = 0;
      lVar9 = -1;
      uStack_128 = uVar16;
      if (param_4 != 0) {
        do {
          lVar17 = lVar9;
          lVar9 = lVar17 + 1;
        } while (*(char *)(lVar9 + param_4) != '\0');
        if (0 < (int)lVar9) {
          iVar3 = uVar16 + (int)lVar9;
          if (iVar3 != 0) {
            uVar6 = iVar3 + 1;
            if (puStack_130 == (undefined1 *)0x0) {
              if ((int)uVar6 < 0x10) {
                uVar6 = 0x10;
              }
              puStack_130 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar6,0x13);
              *puStack_130 = 0;
            }
            else {
              if (uVar6 <= (uint)uStack_120) goto LAB_1800728ad;
              puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,0x13);
              puStack_130 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar6,0x10);
            }
            uVar7 = FUN_18064e990(puStack_130);
            uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
          }
LAB_1800728ad:
                    // WARNING: Subroutine does not return
          memcpy(puStack_130 + uStack_128,param_4,(longlong)((int)lVar17 + 2));
        }
      }
      uVar4 = uVar6 + 0xf;
      if (uVar4 != 0) {
        uVar8 = uVar6 + 0x10;
        if (puStack_130 == (undefined1 *)0x0) {
          if ((int)uVar8 < 0x10) {
            uVar8 = 0x10;
          }
          puStack_130 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar8,0x13);
          *puStack_130 = 0;
        }
        else {
          if (uVar8 <= (uint)uStack_120) goto LAB_180072934;
          puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,0x13);
          puStack_130 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar8,0x10);
        }
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
LAB_180072934:
      *(undefined2 *)(puStack_130 + uStack_128) = 0xa0a;
      *(undefined1 *)((longlong)(puStack_130 + uStack_128) + 2) = 0;
      uStack_128 = uVar4;
      if (uVar6 + 0x6d != 0) {
        uVar4 = uVar6 + 0x6e;
        if (puStack_130 == (undefined1 *)0x0) {
          if ((int)uVar4 < 0x10) {
            uVar4 = 0x10;
          }
          puStack_130 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar4,0x13);
          *puStack_130 = 0;
        }
        else {
          if (uVar4 <= (uint)uStack_120) goto LAB_1800729bd;
          puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,0x13);
          puStack_130 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_130,uVar4,0x10);
        }
        uVar7 = FUN_18064e990(puStack_130);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
      }
LAB_1800729bd:
      puVar13 = (undefined8 *)(puStack_130 + uStack_128);
      *puVar13 = 0x232323232323233c;
      puVar13[1] = 0x2323232323232323;
      puVar13[2] = 0x2323232323232323;
      puVar13[3] = 0x2323232323232323;
      puVar13[4] = 0x2323232323232323;
      puVar13[5] = 0x2323232323232323;
      puVar13[6] = 0x2323232323232323;
      puVar13[7] = 0x2323232323232323;
      *(undefined4 *)(puVar13 + 8) = 0x23232323;
      *(undefined4 *)((longlong)puVar13 + 0x44) = 0x23232323;
      *(undefined4 *)(puVar13 + 9) = 0x23232323;
      *(undefined4 *)((longlong)puVar13 + 0x4c) = 0x23232323;
      puVar13[10] = 0x2323232323232323;
      *(undefined4 *)(puVar13 + 0xb) = 0x3e232323;
      *(undefined2 *)((longlong)puVar13 + 0x5c) = 0xa0a;
      *(undefined1 *)((longlong)puVar13 + 0x5e) = 0;
      puStack_148 = &DAT_18098bc73;
      if (puStack_130 != (undefined1 *)0x0) {
        puStack_148 = puStack_130;
      }
      uStack_128 = uVar6 + 0x6d;
      FUN_180062380(_DAT_180c86928,4,0xffffffff00000000,&UNK_1809ff5b0);
      puStack_148 = &DAT_18098bc73;
      if (puVar10 != (undefined *)0x0) {
        puStack_148 = puVar10;
      }
      FUN_1800623b0(_DAT_180c86928,4,0xffffffff00000000,3);
      FUN_1800623e0();
      puVar14 = &DAT_18098bc73;
      if (puStack_130 != (undefined1 *)0x0) {
        puVar14 = puStack_130;
      }
      OutputDebugStringA(puVar14);
      FUN_18004c2b0(param_4);
      puVar15 = &DAT_18098bc73;
      if (puStack_a0 != (undefined *)0x0) {
        puVar15 = puStack_a0;
      }
      iVar3 = FUN_1800f98e0(puVar15);
      if ((cStack_118 == '\0') && (iVar3 == 0)) {
        if ((_DAT_180c86870 == 0) || (*(char *)(_DAT_180c86870 + 0x141) == '\0')) {
          uVar18 = 0;
        }
        else {
          uVar18 = 1;
        }
        if (_DAT_180c86870 == 0) {
          puStack_d0 = &UNK_180a3c3e0;
          uStack_b8 = 0;
          puStack_c8 = (undefined8 *)0x0;
          uStack_c0 = 0;
          puVar13 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x34,0x13);
          *(undefined1 *)puVar13 = 0;
          puStack_c8 = puVar13;
          uVar7 = FUN_18064e990(puVar13);
          uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar7);
          *puVar13 = 0x7270706d75645c5c;
          puVar13[1] = 0x2e726f737365636f;
          puVar13[2] = 0x6c726f77656c6174;
          puVar13[3] = 0x445c6d6f632e7364;
          *(undefined4 *)(puVar13 + 4) = 0x50706d75;
          *(undefined4 *)((longlong)puVar13 + 0x24) = 0x65636f72;
          *(undefined4 *)(puVar13 + 5) = 0x6e697373;
          *(undefined4 *)((longlong)puVar13 + 0x2c) = 0x6c6f4667;
          *(undefined4 *)(puVar13 + 6) = 0x726564;
          uStack_c0 = 0x33;
          ppuVar11 = &puStack_d0;
          uVar6 = 2;
          uStack_114 = 2;
        }
        else {
          ppuVar11 = (undefined **)FUN_180627ae0(&puStack_80,_DAT_180c86870 + 0x148);
          uVar6 = 1;
          uStack_114 = 1;
          puVar13 = puStack_c8;
        }
        uVar7 = FUN_180627ae0(&puStack_f0,ppuVar11);
        if ((uVar6 & 2) != 0) {
          uVar6 = uVar6 & 0xfffffffd;
          puStack_d0 = &UNK_180a3c3e0;
          uStack_114 = uVar6;
          if (puVar13 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar13);
          }
          puStack_c8 = (undefined8 *)0x0;
          uStack_b8 = uStack_b8 & 0xffffffff00000000;
          puStack_d0 = &UNK_18098bcb0;
        }
        if ((uVar6 & 1) != 0) {
          uStack_114 = uVar6 & 0xfffffffe;
          puStack_80 = &UNK_180a3c3e0;
          if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_78 = 0;
          uStack_68 = 0;
          puStack_80 = &UNK_18098bcb0;
        }
        puStack_148 = &DAT_18098bc73;
        if (puVar10 != (undefined *)0x0) {
          puStack_148 = puVar10;
        }
        FUN_1800669c0(uVar7,&puStack_f0,uVar18,param_5);
        puStack_f0 = &UNK_180a3c3e0;
        if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_e8 = 0;
        uStack_d8 = 0;
        puStack_f0 = &UNK_18098bcb0;
      }
      puVar15 = &DAT_18098bc73;
      if (puStack_a0 != (undefined *)0x0) {
        puVar15 = puStack_a0;
      }
      FUN_1800f96b0(puVar15,1);
      if (cStack_117 != '\0') {
        if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
          FUN_1801718f0();
        }
        if (_DAT_180c86950 != 0) {
          FUN_180092940(_DAT_180c86950,*(undefined1 *)(_DAT_180c86950 + 0x160a));
        }
      }


// 函数: 处理事件通知
// 原始函数名：FUN_180072e80
void handle_event_notification(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined *puStack_30;
  longlong lStack_28;
  
  // 获取事件处理器
  plVar1 = *(longlong **)(GLOBAL_ENGINE_CONTEXT + 0x2b0);
  if (plVar1 != (longlong *)0x0) {
    // 调用事件处理函数
    uVar2 = (**(code **)(*plVar1 + 0x110))(plVar1, &puStack_30, param_3, param_4, 0xfffffffffffffffe);
    process_event_result(param_2, uVar2);
    puStack_30 = &GLOBAL_STRING_END;
    if (lStack_28 != 0) {
      release_memory_handler();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 检查系统状态
// 原始函数名：FUN_180072f00
bool check_system_status(undefined8 param_1, undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  char cStackX_10;
  uint uVar15;
  undefined *puStack_110;
  undefined8 *puStack_108;
  int iStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined2 *puStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  ulonglong uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined4 uStack_a0;
  ulonglong uStack_98;
  undefined *puStack_90;
  undefined1 *puStack_88;
  undefined4 uStack_80;
  ulonglong uStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  longlong lStack_48;
  undefined8 uStack_40;
  
  // 初始化变量
  uStack_40 = 0xfffffffffffffffe;
  puVar5 = (undefined8 *)0x0;
  iVar3 = 0;
  
  // 等待信号量（超时5分钟）
  WaitForSingleObject(GLOBAL_SEMAPHORE, 300000);
  lStack_48 = _DAT_180c82868;
  if (_DAT_180c82868 != 0) {
    execute_system_check(_DAT_180c82868);
  }
  
  // 初始化字符串缓冲区
  puStack_f0 = &GLOBAL_STRING_END;
  uStack_d8 = 0;
  puStack_e8 = (undefined2 *)0x0;
  uStack_e0 = 0;
  
  // 创建分隔符字符串
  puStack_e8 = (undefined2 *)allocate_string_memory(_DAT_180c8ed18, 0x10, 0x13);
  *(undefined1 *)puStack_e8 = 0;
  uVar1 = get_string_length(puStack_e8);
  uStack_d8 = CONCAT44(uStack_d8._4_4_, uVar1);
  *puStack_e8 = 0xa0a;  // 换行符
  *(undefined1 *)(puStack_e8 + 1) = 0;
  uStack_e0 = 2;
  puStack_d0 = &UNK_180a3c3e0;
  uStack_b8 = 0;
  puStack_c8 = (undefined *)0x0;
  uStack_c0 = 0;
  FUN_1800a32b0(_DAT_180c86938,&puStack_68);
  if (puStack_68 != puStack_60) {
    FUN_180628040(&puStack_f0,&UNK_1809fe62c,&UNK_1809ff7c0);
    puVar6 = puVar5;
    puVar12 = puVar5;
    if ((longlong)puStack_60 - (longlong)puStack_68 >> 5 != 0) {
      do {
        puVar13 = &DAT_18098bc73;
        if (*(undefined **)((longlong)(puVar6 + 1) + (longlong)puStack_68) != (undefined *)0x0) {
          puVar13 = *(undefined **)((longlong)(puVar6 + 1) + (longlong)puStack_68);
        }
        FUN_180628040(&puStack_f0,&UNK_1809fe62c,puVar13);
        uVar11 = (int)puVar12 + 1;
        puVar6 = puVar6 + 4;
        puVar12 = (undefined8 *)(ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)((longlong)puStack_60 - (longlong)puStack_68 >> 5));
    }
    FUN_180628040(&puStack_f0,&UNK_1809ff840,&UNK_1809ff800);
    FUN_18006f590(&puStack_110);
    if (iStack_100 != 0) {
      FUN_180628040(&puStack_f0,&UNK_1809fe62c,&UNK_1809ff848);
      puVar6 = (undefined8 *)&DAT_18098bc73;
      if (puStack_108 != (undefined8 *)0x0) {
        puVar6 = puStack_108;
      }
      FUN_180628040(&puStack_f0,&UNK_1809ff888,puVar6);
      FUN_180628040(&puStack_f0,&UNK_1809ff840,&UNK_1809ff800);
    }
    puStack_110 = &UNK_180a3c3e0;
    if (puStack_108 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_108 = (undefined8 *)0x0;
    uStack_f8 = (ulonglong)uStack_f8._4_4_ << 0x20;
    puStack_110 = &UNK_18098bcb0;
  }
  lVar4 = FUN_1800f9ce0(&puStack_110,param_2[1]);
  uStack_c0 = *(undefined4 *)(lVar4 + 0x10);
  puVar13 = *(undefined **)(lVar4 + 8);
  uStack_b8 = *(ulonglong *)(lVar4 + 0x18);
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  puStack_110 = &UNK_180a3c3e0;
  puStack_c8 = puVar13;
  puStack_70 = puVar13;
  if (puStack_108 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_108 = (undefined8 *)0x0;
  uStack_f8 = uStack_f8 & 0xffffffff00000000;
  puStack_110 = &UNK_18098bcb0;
  FUN_180628040(&puStack_f0,&UNK_1809ff8a8,*(undefined4 *)*param_2,
                *(undefined8 *)((undefined4 *)*param_2 + 4));
  FUN_180628040(&puStack_f0,&UNK_1809fe62c,&UNK_1809ff8d8);
  puVar14 = &DAT_18098bc73;
  if (puVar13 != (undefined *)0x0) {
    puVar14 = puVar13;
  }
  FUN_180628040(&puStack_f0,&UNK_1809fe62c,puVar14);
  puVar10 = (undefined2 *)&DAT_18098bc73;
  if (puStack_e8 != (undefined2 *)0x0) {
    puVar10 = puStack_e8;
  }
  FUN_1800623b0(_DAT_180c86928,5,0xffffffff00000000,3,&UNK_1809fe62c,puVar10);
  FUN_1800623e0();
  lVar4 = _DAT_180c86870;
  if (_DAT_180c86870 == 0) {
    cStackX_10 = '\0';
    puStack_110 = &UNK_180a3c3e0;
    uStack_f8 = 0;
    puStack_108 = (undefined8 *)0x0;
    iStack_100 = 0;
    puVar6 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x34,0x13);
    *(undefined1 *)puVar6 = 0;
    puStack_108 = puVar6;
    uVar1 = FUN_18064e990(puVar6);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar1);
    *puVar6 = 0x7270706d75645c5c;
    puVar6[1] = 0x2e726f737365636f;
    puVar6[2] = 0x6c726f77656c6174;
    puVar6[3] = 0x445c6d6f632e7364;
    *(undefined4 *)(puVar6 + 4) = 0x50706d75;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0x65636f72;
    *(undefined4 *)(puVar6 + 5) = 0x6e697373;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = 0x6c6f4667;
    *(undefined4 *)(puVar6 + 6) = 0x726564;
    iVar3 = 0x33;
    iStack_100 = 0x33;
    uVar11 = 2;
    uVar15 = 2;
    ppuVar7 = &puStack_108;
    puVar5 = puStack_a8;
  }
  else {
    cStackX_10 = *(char *)(_DAT_180c86870 + 0x141);
    puStack_b0 = &UNK_180a3c3e0;
    uStack_98 = 0;
    puStack_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    if (*(int *)(_DAT_180c86870 + 0x158) != 0) {
      iVar2 = *(int *)(_DAT_180c86870 + 0x158) + 1;
      if (iVar2 < 0x10) {
        iVar2 = 0x10;
      }
      puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
      *(undefined1 *)puVar5 = 0;
      puStack_a8 = puVar5;
      uVar1 = FUN_18064e990(puVar5);
      uStack_98 = CONCAT44(uStack_98._4_4_,uVar1);
      if (*(int *)(lVar4 + 0x158) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puVar5,*(undefined8 *)(lVar4 + 0x150),*(int *)(lVar4 + 0x158) + 1);
      }
    }
    if (*(longlong *)(lVar4 + 0x150) != 0) {
      uStack_a0 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined1 *)puVar5 = 0;
      }
      uStack_98 = uStack_98 & 0xffffffff;
    }
    uVar11 = 1;
    uVar15 = 1;
    ppuVar7 = &puStack_a8;
    puVar6 = puStack_108;
  }
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (undefined1 *)0x0;
  uStack_80 = 0;
  if (iVar3 != 0) {
    uVar15 = iVar3 + 1;
    uVar11 = uVar15;
    if (uVar15 < 0x10) {
      uVar11 = 0x10;
    }
    puVar8 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,uVar11,0x13);
    *puVar8 = 0;
    puStack_88 = puVar8;
    uVar1 = FUN_18064e990(puVar8);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
                    // WARNING: Subroutine does not return
    memcpy(puVar8,*ppuVar7,uVar15);
  }
  uStack_78 = 0;
  uStack_80 = 0;
  if ((uVar11 & 2) != 0) {
    uVar15 = uVar11 & 0xfffffffd;
    puStack_110 = &UNK_180a3c3e0;
    if (puVar6 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
    puStack_108 = (undefined8 *)0x0;
    uStack_f8 = uStack_f8 & 0xffffffff00000000;
    puStack_110 = &UNK_18098bcb0;
    uVar11 = uVar15;
  }
  if ((uVar11 & 1) != 0) {
    uVar15 = uVar11 & 0xfffffffe;
    puStack_b0 = &UNK_180a3c3e0;
    if (puVar5 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
    puStack_a8 = (undefined8 *)0x0;
    uStack_98 = uStack_98 & 0xffffffff00000000;
    puStack_b0 = &UNK_18098bcb0;
  }
  puVar14 = &DAT_18098bc73;
  if (puVar13 != (undefined *)0x0) {
    puVar14 = puVar13;
  }
  FUN_180066320(0,&puStack_90,cStackX_10,1,puVar14,puVar10,uVar15);
  if (lStack_48 != 0) {
    FUN_18005db30();
  }
  do {
    iVar3 = ReleaseSemaphore(_DAT_180c91900,1);
  } while (iVar3 == 0);
  uVar9 = __acrt_iob_func(1);
  fflush(uVar9);
  uVar9 = __acrt_iob_func(2);
  fflush(uVar9);
  puStack_90 = &UNK_180a3c3e0;
  if (puStack_88 == (undefined1 *)0x0) {
    puStack_88 = (undefined1 *)0x0;
    uStack_78 = uStack_78 & 0xffffffff00000000;
    puStack_90 = &UNK_18098bcb0;
    for (puVar5 = puStack_68; puVar5 != puStack_60; puVar5 = puVar5 + 4) {
      (**(code **)*puVar5)(puVar5,0);
    }
    if (puStack_68 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_d0 = &UNK_180a3c3e0;
    if (puStack_70 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_c8 = (undefined *)0x0;
    uStack_b8 = uStack_b8 & 0xffffffff00000000;
    puStack_d0 = &UNK_18098bcb0;
    puStack_f0 = &UNK_180a3c3e0;
    if (puStack_e8 == (undefined2 *)0x0) {
      return cStackX_10 != '\0';
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 全局变量映射说明
// ===================
// 以下是对代码中使用的全局变量的映射说明：

// 调试相关全局变量：
// _GLOBAL_DEBUG_FLAG - 全局调试标志
// _GLOBAL_INIT_FLAG_1 - 初始化标志1
// _GLOBAL_INIT_FLAG_2 - 初始化标志2
// _DAT_180c91900 - 全局信号量句柄
// _DAT_180c82868 - 系统状态检查句柄
// _DAT_180c86950 - 初始化检查句柄
// _DAT_180c86870 - 引擎上下文指针
// _DAT_180c868d0 - 系统配置指针

// 字符串相关全局变量：
// _DAT_180c8ed18 - 字符串内存管理器
// UNK_1809fd0a0 - 全局字符串数据
// UNK_180a3c3e0 - 字符串结束标记
// UNK_18098bcb0 - 字符串处理器
// DAT_18098bc73 - 空字符串常量

// 错误处理相关全局变量：
// DAT_180c82860 - 错误状态标志
// UNK_18098bb88 - 默认错误处理器
// UNK_1809ff918 - 错误日志格式

// 函数映射说明：
// ===================
// FUN_1800634b0 -> initialize_string_buffer - 初始化字符串缓冲区
// FUN_180627910 -> create_string_handler - 创建字符串处理器
// FUN_18062b420 -> allocate_string_memory - 分配字符串内存
// FUN_18064e990 -> get_string_length - 获取字符串长度
// FUN_18062b8b0 -> reallocate_string_memory - 重新分配字符串内存
// FUN_18064e900 -> release_string_memory - 释放字符串内存
// FUN_180627e10 -> cleanup_string_buffer - 清理字符串缓冲区
// FUN_1800f9600 -> get_debug_status - 获取调试状态
// FUN_1801723a0 -> execute_initialization_check - 执行初始化检查
// FUN_1801719d0 -> execute_cleanup_routine - 执行清理例程
// FUN_18005dab0 -> execute_system_check - 执行系统检查
// FUN_1800f9ce0 -> get_log_information - 获取日志信息
// FUN_18005d190 -> process_event_result - 处理事件结果
// FUN_1800623b0 -> log_error_message - 记录错误信息

// 函数功能总结：
// ===================
// 1. process_initialization_parameters - 处理初始化参数和配置
//    - 主要功能：处理游戏引擎的初始化参数，包括字符串处理、调试检查、日志记录
//    - 涉及：内存管理、字符串操作、调试器检测、信号量同步

// 2. handle_event_notification - 处理事件通知
//    - 主要功能：处理引擎事件通知，调用相应的事件处理器
//    - 涉及：事件处理、内存管理

// 3. check_system_status - 检查系统状态
//    - 主要功能：检查系统运行状态，包括超时等待、系统检查、状态报告
//    - 涉及：信号量操作、系统状态检查、错误处理

// 4. log_system_error - 记录系统错误日志
//    - 主要功能：记录系统错误信息，包括错误格式化、错误处理
//    - 涉及：错误日志、字符串处理、错误处理

// 代码特点：
// ===================
// - 大量使用字符串操作和内存管理
// - 包含调试器检测和反调试机制
// - 使用信号量进行线程同步
// - 完善的错误处理和日志记录机制
// - 采用Windows API进行系统级操作// 函数: 记录系统错误日志
// 原始函数名：FUN_180073630
void log_system_error(undefined8 param_1, undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 auStackX_18 [4];
  undefined *puStack_30;
  longlong lStack_28;
  
  // 记录错误信息
  log_error_message(_DAT_180c86928, 0, 0x100000000, 0, &ERROR_LOG_FORMAT, param_2, 0xfffffffffffffffe);
  
  if (DAT_180c82860 == '\0') {
    auStackX_18[0] = 0xffff0000;
    create_string_handler(&puStack_30, param_2);
    puVar1 = *(undefined **)*_DAT_180c8ed08;
    
    // 检查错误处理状态
    if (puVar1 == &ERROR_HANDLER_DEFAULT) {
      cVar2 = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
      cVar2 = (**(code **)(puVar1 + 0x50))((undefined8 *)*_DAT_180c8ed08);
    }
    
    // 如果没有错误，执行处理
    if (cVar2 == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1], &puStack_30, auStackX_18);
    }
    puStack_30 = &GLOBAL_STRING_END;
    if (lStack_28 != 0) {
      release_memory_handler();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 全局变量映射说明
// ===================
// 以下是对代码中使用的全局变量的映射说明：

// 调试相关全局变量：
// _GLOBAL_DEBUG_FLAG - 全局调试标志
// _GLOBAL_INIT_FLAG_1 - 初始化标志1
// _GLOBAL_INIT_FLAG_2 - 初始化标志2
// _DAT_180c91900 - 全局信号量句柄
// _DAT_180c82868 - 系统状态检查句柄
// _DAT_180c86950 - 初始化检查句柄
// _DAT_180c86870 - 引擎上下文指针
// _DAT_180c868d0 - 系统配置指针

// 字符串相关全局变量：
// _DAT_180c8ed18 - 字符串内存管理器
// UNK_1809fd0a0 - 全局字符串数据
// UNK_180a3c3e0 - 字符串结束标记
// UNK_18098bcb0 - 字符串处理器
// DAT_18098bc73 - 空字符串常量

// 错误处理相关全局变量：
// DAT_180c82860 - 错误状态标志
// UNK_18098bb88 - 默认错误处理器
// UNK_1809ff918 - 错误日志格式

// 函数映射说明：
// ===================
// FUN_1800634b0 -> initialize_string_buffer - 初始化字符串缓冲区
// FUN_180627910 -> create_string_handler - 创建字符串处理器
// FUN_18062b420 -> allocate_string_memory - 分配字符串内存
// FUN_18064e990 -> get_string_length - 获取字符串长度
// FUN_18062b8b0 -> reallocate_string_memory - 重新分配字符串内存
// FUN_18064e900 -> release_string_memory - 释放字符串内存
// FUN_180627e10 -> cleanup_string_buffer - 清理字符串缓冲区
// FUN_1800f9600 -> get_debug_status - 获取调试状态
// FUN_1801723a0 -> execute_initialization_check - 执行初始化检查
// FUN_1801719d0 -> execute_cleanup_routine - 执行清理例程
// FUN_18005dab0 -> execute_system_check - 执行系统检查
// FUN_1800f9ce0 -> get_log_information - 获取日志信息
// FUN_18005d190 -> process_event_result - 处理事件结果
// FUN_1800623b0 -> log_error_message - 记录错误信息

// 函数功能总结：
// ===================
// 1. process_initialization_parameters - 处理初始化参数和配置
//    - 主要功能：处理游戏引擎的初始化参数，包括字符串处理、调试检查、日志记录
//    - 涉及：内存管理、字符串操作、调试器检测、信号量同步

// 2. handle_event_notification - 处理事件通知
//    - 主要功能：处理引擎事件通知，调用相应的事件处理器
//    - 涉及：事件处理、内存管理

// 3. check_system_status - 检查系统状态
//    - 主要功能：检查系统运行状态，包括超时等待、系统检查、状态报告
//    - 涉及：信号量操作、系统状态检查、错误处理

// 4. log_system_error - 记录系统错误日志
//    - 主要功能：记录系统错误信息，包括错误格式化、错误处理
//    - 涉及：错误日志、字符串处理、错误处理

// 代码特点：
// ===================
// - 大量使用字符串操作和内存管理
// - 包含调试器检测和反调试机制
// - 使用信号量进行线程同步
// - 完善的错误处理和日志记录机制
// - 采用Windows API进行系统级操作
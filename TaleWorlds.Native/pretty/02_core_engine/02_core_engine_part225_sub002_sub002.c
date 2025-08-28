#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part225_sub002_sub002.c - 核心引擎模块第225部分第2子部分第2子部分
// 本文件包含4个函数，主要处理游戏对象的初始化、状态管理和资源清理

// 函数: void process_entity_initialization(longlong *entity_context, longlong *scene_context, char initialization_flags)
// 处理实体初始化过程，包括状态同步、资源分配和组件管理
void process_entity_initialization(longlong *entity_context, longlong *scene_context, char initialization_flags)

{
  // 局部变量声明
  float temp_float1;          // 临时浮点变量1
  float temp_float2;          // 临时浮点变量2
  undefined8 *ptr_undefined8;  // 未定义8字节指针
  longlong temp_long1;        // 临时长整型变量1
  code *code_ptr;             // 代码指针
  int temp_int1;              // 临时整型变量1
  undefined4 temp_undefined4; // 未定义4字节变量
  bool temp_bool1;            // 临时布尔变量1
  char temp_char1;            // 临时字符变量1
  undefined1 temp_undefined1; // 未定义1字节变量
  int temp_int2;              // 临时整型变量2
  undefined4 temp_undefined4_2; // 未定义4字节变量2
  longlong **ptr_ptr_long;    // 长整型二级指针
  longlong *ptr_long1;        // 长整型指针1
  longlong *ptr_long2;        // 长整型指针2
  undefined8 temp_undefined8; // 未定义8字节变量
  longlong *ptr_long3;        // 长整型指针3
  uint temp_uint;             // 无符号整型变量
  longlong *ptr_long4;        // 长整型指针4
  longlong temp_long2;        // 临时长整型变量2
  longlong *ptr_long5;        // 长整型指针5
  longlong temp_long3;        // 临时长整型变量3
  ulonglong temp_ulonglong;   // 无符号长整型变量
  byte temp_byte;             // 字节型变量
  longlong temp_long4;        // 临时长整型变量4
  // 栈变量声明
  undefined1 stack_buffer_32[32];  // 32字节栈缓冲区
  char stack_char1;                // 栈字符变量1
  undefined8 stack_undefined8_1;   // 栈未定义8字节变量1
  float stack_float1;              // 栈浮点变量1
  undefined4 stack_undefined4_1;   // 栈未定义4字节变量1
  uint stack_uint1;                // 栈无符号整型变量1
  longlong *stack_ptr_long1;       // 栈长整型指针1
  longlong *stack_ptr_long2;       // 栈长整型指针2
  undefined8 stack_undefined8_2;   // 栈未定义8字节变量2
  undefined8 stack_undefined8_3;   // 栈未定义8字节变量3
  undefined8 stack_undefined8_4;   // 栈未定义8字节变量4
  undefined8 stack_undefined8_5;   // 栈未定义8字节变量5
  float stack_float2;              // 栈浮点变量2
  float stack_float3;              // 栈浮点变量3
  float stack_float4;              // 栈浮点变量4
  undefined4 stack_undefined4_2;   // 栈未定义4字节变量2
  float stack_float5;              // 栈浮点变量5
  float stack_float6;              // 栈浮点变量6
  float stack_float7;              // 栈浮点变量7
  undefined4 stack_undefined4_3;   // 栈未定义4字节变量3
  longlong *stack_ptr_long3;       // 栈长整型指针3
  longlong **stack_ptr_ptr_long1;  // 栈长整型二级指针1
  longlong **stack_ptr_ptr_long2;  // 栈长整型二级指针2
  longlong stack_long1;            // 栈长整型变量1
  longlong *stack_ptr_long4;       // 栈长整型指针4
  longlong *stack_ptr_long5;       // 栈长整型指针5
  longlong *stack_ptr_long6;       // 栈长整型指针6
  longlong *stack_ptr_long7;       // 栈长整型指针7
  longlong **stack_ptr_ptr_long3;  // 栈长整型二级指针3
  longlong stack_long2;            // 栈长整型变量2
  longlong stack_long3;            // 栈长整型变量3
  longlong stack_long4;            // 栈长整型变量4
  uint stack_uint2;                // 栈无符号整型变量2
  longlong *stack_ptr_long8;       // 栈长整型指针8
  longlong *stack_ptr_long9;       // 栈长整型指针9
  longlong *stack_ptr_long10;      // 栈长整型指针10
  longlong *stack_ptr_long11;      // 栈长整型指针11
  longlong *stack_ptr_long12;      // 栈长整型指针12
  longlong *stack_ptr_long13;      // 栈长整型指针13
  longlong *stack_ptr_long14;      // 栈长整型指针14
  longlong *stack_ptr_long15;      // 栈长整型指针15
  longlong *stack_ptr_long16;      // 栈长整型指针16
  longlong *stack_ptr_long17;      // 栈长整型指针17
  longlong *stack_ptr_long18;      // 栈长整型指针18
  longlong *stack_ptr_long19;      // 栈长整型指针19
  longlong *stack_ptr_long20;      // 栈长整型指针20
  undefined *stack_ptr_undefined1; // 栈未定义指针1
  code *stack_code_ptr;           // 栈代码指针
  longlong *stack_ptr_long21;      // 栈长整型指针21
  longlong *stack_ptr_long22;      // 栈长整型指针22
  undefined *stack_ptr_undefined2; // 栈未定义指针2
  undefined *stack_ptr_undefined3; // 栈未定义指针3
  undefined8 stack_undefined8_6;   // 栈未定义8字节变量6
  longlong stack_array_40[40];     // 40个长整型的栈数组
  ulonglong stack_ulonglong;       // 栈无符号长整型变量
  
  // 初始化栈变量
  stack_undefined8_6 = 0xfffffffffffffffe;
  stack_ulonglong = _DAT_180bf00a8 ^ (ulonglong)stack_buffer_32;
  // 检查实体是否有自定义数据，如果有则设置到指定位置
  if (entity_context[0xc170] != 0) {
    *(longlong *)(entity_context[0x66] + 0x68) = entity_context[0xc170];
  }
  ptr_long1 = (longlong *)0x0;  // 初始化长整型指针为空
  stack_ptr_long20 = entity_context;  // 保存实体上下文到栈
  // 检查场景是否启用特定标志并且有活动对象
  if ((*(int *)(scene_context[0x6b0] + 0x110) != 0) && ((*(byte *)(scene_context + 0x37b) & 2) != 0)) {
    // 初始化栈数组，用于数据复制
    FUN_180094c20(stack_array_40);
    temp_long3 = 2;  // 循环计数器
    temp_long2 = 2;  // 循环控制变量
    ptr_long3 = scene_context + 6;  // 源数据指针
    ptr_long5 = stack_array_40;     // 目标数据指针
    
    // 数据复制循环：复制场景数据到栈数组
    do {
      ptr_long4 = ptr_long5;     // 目标指针
      ptr_long2 = ptr_long3;     // 源指针
      temp_long4 = ptr_long2[1]; // 获取数据
      *ptr_long4 = *ptr_long2;   // 复制第一个长整型
      ptr_long4[1] = temp_long4; // 复制第二个长整型
      temp_long4 = ptr_long2[3]; // 获取下一对数据
      ptr_long4[2] = ptr_long2[2]; // 复制第三个长整型
      ptr_long4[3] = temp_long4; // 复制第四个长整型
      temp_long4 = ptr_long2[5]; // 继续复制数据
      ptr_long4[4] = ptr_long2[4];
      ptr_long4[5] = temp_long4;
      temp_long4 = ptr_long2[7];
      ptr_long4[6] = ptr_long2[6];
      ptr_long4[7] = temp_long4;
      temp_long4 = ptr_long2[9];
      ptr_long4[8] = ptr_long2[8];
      ptr_long4[9] = temp_long4;
      temp_long4 = ptr_long2[0xb];
      ptr_long4[10] = ptr_long2[10];
      ptr_long4[0xb] = temp_long4;
      temp_long4 = ptr_long2[0xd];
      ptr_long4[0xc] = ptr_long2[0xc];
      ptr_long4[0xd] = temp_long4;
      temp_long4 = ptr_long2[0xf];
      ptr_long4[0xe] = ptr_long2[0xe];
      ptr_long4[0xf] = temp_long4;
      temp_long2 = temp_long2 - 1;  // 减少循环计数器
      ptr_long3 = ptr_long2 + 0x10; // 移动到下一组数据
      ptr_long5 = ptr_long4 + 0x10; // 移动目标指针
    } while (temp_long2 != 0);
    // 复制剩余的数据字段
    temp_long2 = ptr_long2[0x11];
    ptr_long4[0x10] = ptr_long2[0x10];
    ptr_long4[0x11] = temp_long2;
    temp_long2 = ptr_long2[0x13];
    ptr_long4[0x12] = ptr_long2[0x12];
    ptr_long4[0x13] = temp_long2;
    temp_long2 = ptr_long2[0x15];
    ptr_long4[0x14] = ptr_long2[0x14];
    ptr_long4[0x15] = temp_long2;
    temp_undefined4_2 = *(undefined4 *)((longlong)ptr_long2 + 0xb4);
    temp_long2 = ptr_long2[0x17];
    temp_undefined4 = *(undefined4 *)((longlong)ptr_long2 + 0xbc);
    *(int *)(ptr_long4 + 0x16) = (int)ptr_long2[0x16];
    *(undefined4 *)((longlong)ptr_long4 + 0xb4) = temp_undefined4_2;
    *(int *)(ptr_long4 + 0x17) = (int)temp_long2;
    *(undefined4 *)((longlong)ptr_long4 + 0xbc) = temp_undefined4;
    
    // 处理实体组件系统
    ptr_undefined8 = (undefined8 *)entity_context[0x534];
    if (ptr_undefined8 != (undefined8 *)0x0) {
      // 检查组件类型并执行相应的清理操作
      if ((undefined *)*ptr_undefined8 == &UNK_180a21cc8) {
        LOCK();
        *(undefined1 *)(ptr_undefined8 + 2) = 0;
        UNLOCK();
        FUN_180049550(ptr_undefined8 + 4,0);
      }
      else {
        (**(code **)((undefined *)*ptr_undefined8 + 0x78))();
      }
      
      // 反向复制数据：从栈数组回到组件系统
      ptr_long3 = (longlong *)(entity_context[0x534] + 0xc0);
      ptr_long5 = stack_array_40;
      do {
        ptr_long4 = ptr_long5;     // 源指针
        ptr_long2 = ptr_long3;     // 目标指针
        temp_long2 = ptr_long4[1]; // 获取数据
        *ptr_long2 = *ptr_long4;   // 复制数据
        ptr_long2[1] = temp_long2;
        temp_long2 = ptr_long4[3];
        ptr_long2[2] = ptr_long4[2];
        ptr_long2[3] = temp_long2;
        temp_long2 = ptr_long4[5];
        ptr_long2[4] = ptr_long4[4];
        ptr_long2[5] = temp_long2;
        temp_long2 = ptr_long4[7];
        ptr_long2[6] = ptr_long4[6];
        ptr_long2[7] = temp_long2;
        temp_long2 = ptr_long4[9];
        ptr_long2[8] = ptr_long4[8];
        ptr_long2[9] = temp_long2;
        temp_long2 = ptr_long4[0xb];
        ptr_long2[10] = ptr_long4[10];
        ptr_long2[0xb] = temp_long2;
        temp_long2 = ptr_long4[0xd];
        ptr_long2[0xc] = ptr_long4[0xc];
        ptr_long2[0xd] = temp_long2;
        temp_long2 = ptr_long4[0xf];
        ptr_long2[0xe] = ptr_long4[0xe];
        ptr_long2[0xf] = temp_long2;
        temp_long3 = temp_long3 - 1;  // 减少循环计数器
        ptr_long3 = ptr_long2 + 0x10; // 移动目标指针
        ptr_long5 = ptr_long4 + 0x10; // 移动源指针
      } while (temp_long3 != 0);
      // 完成剩余数据的复制
      temp_long2 = ptr_long4[0x11];
      ptr_long2[0x10] = ptr_long4[0x10];
      ptr_long2[0x11] = temp_long2;
      temp_long2 = ptr_long4[0x13];
      ptr_long2[0x12] = ptr_long4[0x12];
      ptr_long2[0x13] = temp_long2;
      temp_long2 = ptr_long4[0x15];
      ptr_long2[0x14] = ptr_long4[0x14];
      ptr_long2[0x15] = temp_long2;
      temp_undefined4_2 = *(undefined4 *)((longlong)ptr_long4 + 0xb4);
      temp_long2 = ptr_long4[0x17];
      temp_undefined4 = *(undefined4 *)((longlong)ptr_long4 + 0xbc);
      *(int *)(ptr_long2 + 0x16) = (int)ptr_long4[0x16];
      *(undefined4 *)((longlong)ptr_long2 + 0xb4) = temp_undefined4_2;
      *(int *)(ptr_long2 + 0x17) = (int)temp_long2;
      *(undefined4 *)((longlong)ptr_long2 + 0xbc) = temp_undefined4;
      
      // 清理组件系统资源
      temp_long2 = _DAT_180c82868;
      stack_undefined8_1 = &stack_ptr_long3;
      stack_ptr_long3 = (longlong *)entity_context[0x534];
      if (stack_ptr_long3 != (longlong *)0x0) {
        (**(code **)(*stack_ptr_long3 + 0x28))();
      }
      FUN_18005e110(temp_long2, &stack_ptr_long3);
    }
  }
  
  // 处理实体位置和变换数据同步
  // 检查是否需要更新位置数据
  if ((*(char *)((longlong)scene_context + 0x9a31) != '\0') || ((*(byte *)(scene_context + 0x37b) & 0x20) != 0))
  {
    // 备份当前位置数据
    entity_context[0x79] = entity_context[0x81];
    entity_context[0x7a] = entity_context[0x82];
    entity_context[0x7b] = entity_context[0x83];
    entity_context[0x7c] = entity_context[0x84];
    entity_context[0x7d] = entity_context[0x85];
    entity_context[0x7e] = entity_context[0x86];
    entity_context[0x7f] = entity_context[0x87];
    entity_context[0x80] = entity_context[0x88];
    
    // 从场景上下文更新位置数据
    temp_long2 = scene_context[0x1f];
    entity_context[0x81] = scene_context[0x1e];
    entity_context[0x82] = temp_long2;
    temp_long2 = scene_context[0x21];
    entity_context[0x83] = scene_context[0x20];
    entity_context[0x84] = temp_long2;
    temp_long2 = scene_context[0x23];
    entity_context[0x85] = scene_context[0x22];
    entity_context[0x86] = temp_long2;
    temp_undefined4_2 = *(undefined4 *)((longlong)scene_context + 0x124);
    temp_long2 = scene_context[0x25];
    temp_undefined4 = *(undefined4 *)((longlong)scene_context + 300);
    *(int *)(entity_context + 0x87) = (int)scene_context[0x24];
    *(undefined4 *)((longlong)entity_context + 0x43c) = temp_undefined4_2;
    *(int *)(entity_context + 0x88) = (int)temp_long2;
    *(undefined4 *)((longlong)entity_context + 0x444) = temp_undefined4;
    *(undefined1 *)((longlong)entity_context + 0x562) = 1;  // 标记位置已更新
  }
  *(char *)((longlong)param_2 + 0x124c4) = (char)param_1[0x1033];
  if ((((param_3 == '\0') || (*(char *)((longlong)param_1 + 0x3e05) == '\0')) ||
      ((*(byte *)(param_1 + 0x7c1) & 2) != 0)) ||
     ((*(int *)(_DAT_180c86920 + 0xc40) < 1 ||
      (cStack_308 = '\x01', *(longlong **)(param_2[0x6b0] + 0x588) != param_1)))) {
    cStack_308 = '\0';
  }
  FUN_1801b65d0(param_1,param_2);
  cVar9 = func_0x0001802e1840(param_2[0x6b0] + 0x560,param_1);
  if (cVar9 != '\0') {
    *(undefined4 *)(param_2[0x6b0] + 0x5e4) = 0xffffffff;
  }
  *(undefined4 *)(param_2[0x6b0] + 0x110) = 0;
  if ((*(char *)((longlong)param_1 + 0x563) == '\0') ||
     (iVar6 = (int)(param_1[0xb6] - param_1[0xb5] >> 0x3f),
     iVar11 = (int)((param_1[0xb6] - param_1[0xb5]) / 0xc) + iVar6,
     iVar11 == iVar6 || iVar11 - iVar6 < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  *(undefined4 *)(param_1 + 0x4cd) = 0;
  *(undefined4 *)(param_2[0x6b0] + 0x628) = 0xffffffff;
  if (((char)param_2[0x1347] == '\0') || (*(char *)((longlong)param_1 + 0x3f61) == '\0')) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  *(undefined1 *)(param_2 + 0x1347) = uVar10;
  lVar22 = _DAT_180c868c0;
  lVar20 = 1;
  if (bVar8) {
    plVar17 = *(longlong **)(_DAT_180c868c0 + 0x10408);
    plVar21 = *(longlong **)(_DAT_180c868c0 + 0x10400);
    lVar25 = (longlong)plVar17 - (longlong)plVar21 >> 3;
    if (plVar17 < *(longlong **)(_DAT_180c868c0 + 0x10410)) {
      *(longlong **)(_DAT_180c868c0 + 0x10408) = plVar17 + 1;
      *plVar17 = (longlong)(param_1 + 0xae);
    }
    else {
      if ((lVar25 == 0) || (lVar20 = lVar25 * 2, lVar20 != 0)) {
        plVar14 = (longlong *)
                  FUN_18062b420(_DAT_180c8ed18,lVar20 * 8,*(undefined1 *)(_DAT_180c868c0 + 0x10418))
        ;
        plVar17 = *(longlong **)(lVar22 + 0x10408);
        plVar21 = *(longlong **)(lVar22 + 0x10400);
      }
      if (plVar21 != plVar17) {
                    // WARNING: Subroutine does not return
        memmove(plVar14,plVar21,(longlong)plVar17 - (longlong)plVar21);
      }
      *plVar14 = (longlong)(param_1 + 0xae);
      if (*(longlong *)(lVar22 + 0x10400) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong **)(lVar22 + 0x10400) = plVar14;
      *(longlong **)(lVar22 + 0x10408) = plVar14 + 1;
      *(longlong **)(lVar22 + 0x10410) = plVar14 + lVar20;
    }
    *(int *)(param_2[0x6b0] + 0x628) = (int)lVar25;
  }
  if ((int)param_1[0x4f8] < 7) {
    *(undefined1 *)(param_2 + 0x38c) = 1;
    uVar10 = func_0x0001800e2bf0(_DAT_180c86890,param_2);
    *(undefined1 *)((longlong)param_2 + 0x1c61) = uVar10;
    if ((int)param_2[1] == -1) {
      bVar24 = 0;
    }
    else {
      bVar24 = (byte)(int)param_2[3];
    }
    *(byte *)((longlong)param_2 + 0x1c62) = bVar24 & 1;
    uVar12 = func_0x00018024c420(param_2);
    *(undefined4 *)((longlong)param_2 + 0x1c64) = uVar12;
  }
  else {
    FUN_180304010(param_2[0x6b0]);
  }
  pplVar13 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3);
  uStack_300 = pplVar13;
  FUN_180049830(pplVar13);
  *pplVar13 = (longlong *)&UNK_180a0c3d8;
  pplVar13[0x18] = param_1;
  pplVar13[0x19] = param_2;
  pplStack_290 = pplVar13;
  (*(code *)(*pplVar13)[5])(pplVar13);
  plVar14 = param_1 + 0x6c;
  FUN_1800b88d0(plVar14,&pplStack_290);
  if (pplStack_290 != (longlong **)0x0) {
    (*(code *)(*pplStack_290)[7])();
  }
  if ((param_1[0x70] != 0) && (*(char *)((longlong)param_1 + 0x60b91) != '\0')) {
    FUN_18019c6e0(param_1,param_2);
  }
  FUN_1802e5be0(param_1 + 0x1045,param_2);
  if (param_1[0x75] != 0) {
    pplVar13 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3);
    uStack_300 = pplVar13;
    FUN_180049830(pplVar13);
    *pplVar13 = (longlong *)&UNK_180a0c348;
    pplVar13[0x18] = param_1;
    pplVar13[0x19] = param_2;
    pplStack_288 = pplVar13;
    (*(code *)(*pplVar13)[5])(pplVar13);
    FUN_1800b88d0(plVar14,&pplStack_288);
    if (pplStack_288 != (longlong **)0x0) {
      (*(code *)(*pplStack_288)[7])();
    }
  }
  FUN_18005e250(_DAT_180c82868,*plVar14,param_1[0x6d] - *plVar14 >> 3);
  if (((cStack_308 != '\0') && (*(char *)((longlong)param_1 + 0x60b91) != '\0')) &&
     (1 < (int)param_1[0x4f8])) {
    *(undefined4 *)(param_2[0x6b0] + 0x5b0) = *(undefined4 *)((longlong)param_1 + 0x27bc);
    *(undefined4 *)((longlong)param_2 + 0x995c) = *(undefined4 *)(param_2[0x6b0] + 0x5b0);
    lStack_280 = 0;
    iVar11 = FUN_1802e4530(param_2[0x6b0] + 0x560,param_2,&lStack_280);
    if (0 < iVar11) {
      lVar20 = 0;
      do {
        lVar25 = lStack_280;
        lVar22 = param_1[0x103e];
        if (lVar22 != 0) {
          lVar4 = *(longlong *)(lStack_280 + lVar20 * 8);
          fVar1 = *(float *)(lVar22 + 0xc);
          fVar2 = *(float *)(lVar22 + 8);
          *(float *)(lVar4 + 0x11ccc) = fVar1 * *(float *)(lVar22 + 4);
          *(float *)(lVar4 + 0x11cd0) = fVar1 * fVar2;
        }
        FUN_180304010(param_2[0x6b0],*(undefined8 *)(lStack_280 + lVar20 * 8));
        lVar22 = *(longlong *)(lVar25 + lVar20 * 8);
        LOCK();
        plVar14 = param_2 + 0x2349;
        lVar25 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + 1;
        UNLOCK();
        param_2[(longlong)(int)lVar25 + 0x1349] = lVar22;
        uVar16 = *(undefined8 *)((longlong)param_2 + 0x9a3c);
        *(undefined8 *)(lVar22 + 0x9a34) = *(undefined8 *)((longlong)param_2 + 0x9a34);
        *(undefined8 *)(lVar22 + 0x9a3c) = uVar16;
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar11);
    }
  }
  if ((((int)param_1[0xc188] == -1) ||
      (lVar20 = *(longlong *)(param_1[0xc184] + (longlong)(int)param_1[0xc188] * 8), lVar20 == 0))
     || (*(longlong *)(lVar20 + 0x40) == 0)) {
    *(undefined4 *)(param_2 + 0x253e) = *(undefined4 *)((longlong)param_1 + 0x60c44);
  }
  else {
    *(undefined4 *)(param_2 + 0x253e) = 0xffffffff;
  }
  *(undefined4 *)((longlong)param_2 + 0x129f4) = *(undefined4 *)((longlong)param_1 + 0x3ec4);
  if (param_1[0x103e] != 0) {
    *(float *)(param_2 + 0x253f) = *(float *)(param_1 + 0x7d9) * 0.05;
  }
  if (param_1[0xc170] == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = (int)*(undefined8 *)(param_1[0xc170] + 0x1dd0);
  }
  *(float *)((longlong)param_2 + 0x129fc) = (float)iVar11;
  FUN_1801acb30(param_1);
  iVar11 = (int)param_1[0x4f8];
  if (4 < iVar11) {
    FUN_180316460(param_1 + 0xc182);
    iVar11 = (int)param_1[0x4f8];
  }
  if (6 < iVar11) {
    FUN_18031a470(param_1 + 0xc182);
  }
  plVar14 = (longlong *)FUN_1800be440();
  if (plVar14 != (longlong *)0x0) {
    plStack_230 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_230 = (longlong *)param_2[0x1330];
  param_2[0x1330] = (longlong)plVar14;
  if (plStack_230 != (longlong *)0x0) {
    (**(code **)(*plStack_230 + 0x38))();
  }
  if (((1 < (int)param_1[0x4f8]) && (lVar20 = param_1[100], lVar20 != 0)) &&
     (lVar22 = *(longlong *)(lVar20 + 0x3c8), lVar22 != 0)) {
    bVar8 = false;
    if ((*(longlong *)(lVar22 + 0x20) - *(longlong *)(lVar22 + 0x18) >> 4 != 0) &&
       (*(char *)(*(longlong *)(lVar20 + 0x88) + 0x60b91) != '\0')) {
      FUN_180460970(lVar22,param_2);
      bVar8 = true;
    }
    if (((*(char *)(*(longlong *)(lVar20 + 0x88) + 0x60b91) != '\0') && (bVar8)) &&
       (*(longlong *)(*(longlong *)(lVar20 + 0x3c8) + 0x20) -
        *(longlong *)(*(longlong *)(lVar20 + 0x3c8) + 0x18) >> 4 == 0)) {
      FUN_18045ff20();
    }
  }
  plVar14 = param_1 + 0x1c;
  iVar11 = 0;
  if (param_1[0x1d] - *plVar14 >> 3 != 0) {
    lVar20 = 0;
    do {
      (**(code **)(**(longlong **)(lVar20 + *plVar14) + 0x38))
                (*(longlong **)(lVar20 + *plVar14),param_2,param_1);
      iVar11 = iVar11 + 1;
      lVar20 = lVar20 + 8;
    } while ((ulonglong)(longlong)iVar11 < (ulonglong)(param_1[0x1d] - *plVar14 >> 3));
  }
  if (*(char *)((longlong)param_2 + 0x9a31) != '\0') {
    if (((int)param_1[0x4f8] != 7) && (*(longlong *)(param_2[0x6b0] + 0x530) != 0)) {
      *(undefined4 *)(*(longlong *)(param_2[0x6b0] + 0x530) + 0x40) = 0x41200000;
    }
    plVar17 = (longlong *)param_2[0x6b0];
    if (plVar17[0xa6] != 0) {
      cVar9 = (**(code **)(*plVar17 + 0x78))();
      uVar18 = *(uint *)(*(longlong *)(param_2[0x6b0] + 0x530) + 0x94);
      if (cVar9 == '\0') {
        uVar18 = uVar18 & 0x7fffffff;
      }
      else {
        uVar18 = uVar18 | 0x80000000;
      }
      *(uint *)(*(longlong *)(param_2[0x6b0] + 0x530) + 0x94) = uVar18;
      plVar17 = (longlong *)param_2[0x6b0];
    }
    uVar18 = 0xdfffffff;
    if (plVar17[0xa6] != 0) {
      uVar18 = *(uint *)(plVar17[0xa6] + 0x94);
    }
    if (((*(char *)((longlong)param_1 + 0x2a63) == '\0') || ((int)plVar17[0x22] == 0)) ||
       (lVar20 = FUN_180244ff0(plVar17[0x23]), lVar20 == 0)) {
      uVar18 = uVar18 & 0xfffff7ff;
    }
    else {
      uVar18 = uVar18 | 0x800;
    }
    uVar12 = func_0x0001801f2a40();
    *(undefined4 *)(param_2 + 0x133d) = uVar12;
    FUN_180303b70(param_2[0x6b0],uVar18,param_2);
    plVar17 = *(longlong **)(param_2[0x6b0] + 0x530);
    if (plVar17 != (longlong *)0x0) {
      plStack_228 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_228 = (longlong *)param_2[0x1337];
    param_2[0x1337] = (longlong)plVar17;
    if (plStack_228 != (longlong *)0x0) {
      (**(code **)(*plStack_228 + 0x38))();
    }
    plVar17 = *(longlong **)(param_2[0x6b0] + 0x538);
    if (plVar17 != (longlong *)0x0) {
      plStack_220 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_220 = (longlong *)param_2[0x1338];
    param_2[0x1338] = (longlong)plVar17;
    if (plStack_220 != (longlong *)0x0) {
      (**(code **)(*plStack_220 + 0x38))();
    }
    plVar17 = *(longlong **)(param_2[0x6b0] + 0x540);
    if (plVar17 != (longlong *)0x0) {
      plStack_218 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_218 = (longlong *)param_2[0x1339];
    param_2[0x1339] = (longlong)plVar17;
    if (plStack_218 != (longlong *)0x0) {
      (**(code **)(*plStack_218 + 0x38))();
    }
    plVar17 = *(longlong **)(param_2[0x6b0] + 0x550);
    if (plVar17 != (longlong *)0x0) {
      plStack_210 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_210 = (longlong *)param_2[0x133b];
    param_2[0x133b] = (longlong)plVar17;
    if (plStack_210 != (longlong *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    *(undefined4 *)(param_2 + 0x249b) = *(undefined4 *)((longlong)param_1 + 0x3f54);
    *(int *)(param_2 + 0x249a) = (int)param_1[0x7eb];
    *(undefined4 *)((longlong)param_2 + 0x124d4) = *(undefined4 *)((longlong)param_1 + 0x3f5c);
    *(char *)((longlong)param_2 + 0x124dc) = (char)param_1[0x7ec];
  }
  plVar17 = *(longlong **)(param_2[0x6b0] + 0x558);
  if (plVar17 != (longlong *)0x0) {
    plStack_208 = plVar17;
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  plStack_208 = (longlong *)param_2[0x133c];
  param_2[0x133c] = (longlong)plVar17;
  if (plStack_208 != (longlong *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  plVar17 = *(longlong **)(param_2[0x6b0] + 0x548);
  if (plVar17 != (longlong *)0x0) {
    plStack_200 = plVar17;
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  plStack_200 = (longlong *)param_2[0x133a];
  param_2[0x133a] = (longlong)plVar17;
  if (plStack_200 != (longlong *)0x0) {
    (**(code **)(*plStack_200 + 0x38))();
  }
  if (param_1 == (longlong *)0xffffffffffffc950) {
    *(undefined1 *)((longlong)param_2 + 0x11cf4) = 0;
  }
  else {
    FUN_1801c1c40(param_2 + 0x23a0);
    *(undefined1 *)((longlong)param_2 + 0x11cf4) = 1;
  }
  lVar20 = param_1[0x103e];
  if (lVar20 != 0) {
    fVar1 = *(float *)(lVar20 + 0xc);
    fVar2 = *(float *)(lVar20 + 8);
    *(float *)((longlong)param_2 + 0x11ccc) = fVar1 * *(float *)(lVar20 + 4);
    *(float *)(param_2 + 0x239a) = fVar1 * fVar2;
  }
  *(undefined4 *)((longlong)param_2 + 0x124e4) = *(undefined4 *)((longlong)param_1 + 0x5b9c);
  lVar20 = param_1[0xc170];
  if (lVar20 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x11cd4) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11cdc) = 0;
    plVar17 = (longlong *)param_2[0x1332];
    param_2[0x1332] = 0;
    plStack_1f0 = plVar17;
  }
  else {
    uVar16 = *(undefined8 *)(lVar20 + 0x1c18);
    *(undefined8 *)((longlong)param_2 + 0x11cd4) = *(undefined8 *)(lVar20 + 0x1c10);
    *(undefined8 *)((longlong)param_2 + 0x11cdc) = uVar16;
    plVar21 = *(longlong **)(param_1[0xc170] + 0x1c48);
    if (plVar21 != (longlong *)0x0) {
      plStack_1f8 = plVar21;
      (**(code **)(*plVar21 + 0x28))(plVar21);
    }
    plVar17 = (longlong *)param_2[0x1332];
    param_2[0x1332] = (longlong)plVar21;
    plStack_1f8 = plVar17;
  }
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x38))();
  }
  plVar17 = (longlong *)param_1[0x518];
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17,0,param_2 + 6);
  }
  uVar18 = 0;
  lVar20 = param_2[0x6b0];
  lVar22 = 0x118;
  plStack_2e8 = (longlong *)0x118;
  if (*(int *)(lVar20 + 0x110) != 0) {
    do {
      lVar20 = *(longlong *)(lVar22 + lVar20);
      if (((param_1[100] != 0) && ((*(byte *)(lVar20 + 0x1bd8) & 0x20) != 0)) &&
         ((*(byte *)(lVar20 + 0x1bd9) & 2) == 0)) {
        FUN_18031e320(param_1[100],lVar20);
      }
      *(undefined1 *)(lVar20 + 0x1c60) = 1;
      if (((*(int *)(lVar20 + 0x124bc) == 0) && (*(int *)(lVar20 + 0x2920) == 0)) &&
         ((*(int *)(lVar20 + 0x2108) == 0 && (*(int *)(lVar20 + 0x1fe0) == 0)))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (((*(int *)(_DAT_180c86890 + 0x12d8) == 0x12) || ((*(byte *)(lVar20 + 0x1bd8) & 0x20) == 0)
          ) || (((*(longlong *)(lVar20 + 0x99b8) == 0 ||
                 ((*(uint *)(*(longlong *)(lVar20 + 0x99b8) + 0x98) & 0x8000101e) == 0)) &&
                (((*(char *)(lVar20 + 0x124c4) == '\0' && (!bVar8)) &&
                 (*(int *)(lVar20 + 0x1bdc) == 0)))))) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      *(undefined1 *)(lVar20 + 0x1c61) = uVar10;
      if (*(int *)(lVar20 + 8) == -1) {
        bVar24 = 0;
      }
      else {
        bVar24 = (byte)*(undefined4 *)(lVar20 + 0x18);
      }
      *(byte *)(lVar20 + 0x1c62) = bVar24 & 1;
      uVar12 = func_0x00018024c420(lVar20);
      *(undefined4 *)(lVar20 + 0x1c64) = uVar12;
      uVar18 = uVar18 + 1;
      lVar22 = lVar22 + 8;
      lVar20 = param_2[0x6b0];
    } while (uVar18 < *(uint *)(lVar20 + 0x110));
  }
  plVar17 = (longlong *)0x118;
  lVar20 = param_1[0x1040];
  if (lVar20 != 0) {
    uStack_2d8 = *(undefined8 *)(lVar20 + 0x70);
    uStack_2d0 = *(undefined8 *)(lVar20 + 0x78);
    fStack_2f8 = *(float *)(param_2 + 0x25) - *(float *)((longlong)param_1 + 0x3e14) * 2000.0;
    fStack_2a4 = *(float *)((longlong)param_2 + 0x124) - *(float *)(param_1 + 0x7c2) * 2000.0;
    fStack_2a8 = *(float *)(param_2 + 0x24) - *(float *)((longlong)param_1 + 0x3e0c) * 2000.0;
    uStack_300 = (longlong **)CONCAT44(fStack_2a4,fStack_2a8);
    uStack_2f4 = 0x7f7fffff;
    uStack_29c = 0x7f7fffff;
    uStack_2c8 = *(undefined8 *)((longlong)param_1 + 0x3e0c);
    uStack_2c0 = *(undefined8 *)((longlong)param_1 + 0x3e14);
    fStack_2b8 = 0.0;
    fStack_2b4 = 0.0;
    fStack_2b0 = 1.0;
    uStack_2ac = 0x7f7fffff;
    fStack_2a0 = fStack_2f8;
    FUN_180084ae0(&uStack_2d8);
    uStack_2d8 = CONCAT44(uStack_2d8._4_4_ * 200.0,(float)uStack_2d8 * 200.0);
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0 * 200.0);
    uStack_2c8 = CONCAT44(uStack_2c8._4_4_ * 200.0,(float)uStack_2c8 * 200.0);
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0 * 200.0);
    fStack_2b8 = fStack_2b8 * 200.0;
    fStack_2b4 = fStack_2b4 * 200.0;
    fStack_2b0 = fStack_2b0 * 200.0;
    FUN_1802ea790(param_1[0x1040]);
    *(byte *)(param_1[0x1040] + 0x2e8) = *(byte *)(param_1[0x1040] + 0x2e8) & 0xef;
  }
  if ((param_1[0x103f] != 0) && (*(char *)(_DAT_180c86890 + 0x1504) == '\x01')) {
    FUN_1802ee720();
  }
  if (param_1[0x89] != 0) {
    FUN_18037c8d0();
  }
  lVar20 = _DAT_180c82868;
  if (*(int *)(param_2[0x6b0] + 0x110) != 0) {
    if ((*(byte *)(param_2 + 0x37b) & 2) != 0) {
      plVar21 = (longlong *)param_1[0x534];
      if ((plVar21 != (longlong *)0x0) && (_DAT_180c82868 != 0)) {
        uStack_300 = &plStack_278;
        plStack_278 = plVar21;
        (**(code **)(*plVar21 + 0x28))();
        FUN_18005e6a0(lVar20,&plStack_278,0);
      }
      if (*(char *)(_DAT_180c86950 + 0x162f) != '\0') {
        FUN_180389b20(param_1 + 0x534);
      }
      if ((*(char *)(_DAT_180c86950 + 0x1630) != '\0') &&
         ((longlong *)param_1[0x535] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x535] + 0x40))();
      }
    }
    param_1[1999] = param_1[0x7ce];
    uStack_2f0 = 0;
    lVar20 = param_2[0x6b0];
    if (*(int *)(lVar20 + 0x110) != 0) {
      do {
        uStack_300 = *(longlong ***)(lVar20 + (longlong)plVar17);
        if ((*(uint *)((longlong)uStack_300 + 4) & 0x8000000) == 0) {
          plVar21 = (longlong *)param_1[1999];
          if (plVar21 < (longlong *)param_1[2000]) {
            param_1[1999] = (longlong)(plVar21 + 1);
            *plVar21 = (longlong)uStack_300;
          }
          else {
            plVar17 = (longlong *)param_1[0x7ce];
            lVar22 = (longlong)plVar21 - (longlong)plVar17 >> 3;
            lVar20 = 1;
            if ((lVar22 == 0) || (lVar20 = lVar22 * 2, lVar20 != 0)) {
              plVar15 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar20 * 8,(char)param_1[0x7d1]);
              plVar21 = (longlong *)param_1[1999];
              plVar17 = (longlong *)param_1[0x7ce];
            }
            else {
              plVar15 = (longlong *)0x0;
            }
            if (plVar17 != plVar21) {
                    // WARNING: Subroutine does not return
              memmove(plVar15,plVar17,(longlong)plVar21 - (longlong)plVar17);
            }
            *plVar15 = (longlong)uStack_300;
            if (param_1[0x7ce] != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            param_1[0x7ce] = (longlong)plVar15;
            param_1[1999] = (longlong)(plVar15 + 1);
            param_1[2000] = (longlong)(plVar15 + lVar20);
            plVar17 = plStack_2e8;
          }
        }
        uStack_2f0 = uStack_2f0 + 1;
        plVar17 = plVar17 + 1;
        lVar20 = param_2[0x6b0];
        plStack_2e8 = plVar17;
      } while (uStack_2f0 < *(uint *)(lVar20 + 0x110));
    }
    uStack_300 = (longlong **)&lStack_250;
    lVar20 = param_1[1999] - param_1[0x7ce] >> 3;
    uStack_238 = *(uint *)(param_1 + 0x7d1);
    if (lVar20 == 0) {
      lStack_250 = 0;
    }
    else {
      lStack_250 = FUN_18062b420(_DAT_180c8ed18,lVar20 * 8,uStack_238 & 0xff);
    }
    lStack_240 = lStack_250 + lVar20 * 8;
    lVar20 = param_1[0x7ce];
    lStack_248 = lStack_250;
    if (lVar20 != param_1[1999]) {
                    // WARNING: Subroutine does not return
      memmove(lStack_250,lVar20,param_1[1999] - lVar20);
    }
    FUN_1801c1af0(plVar14,&lStack_250);
    iVar11 = 0;
    if (param_1[0x1d] - *plVar14 >> 3 != 0) {
      lVar20 = 0;
      do {
        (**(code **)(**(longlong **)(lVar20 + *plVar14) + 0x18))
                  (*(longlong **)(lVar20 + *plVar14),param_1,param_2);
        iVar11 = iVar11 + 1;
        lVar20 = lVar20 + 8;
      } while ((ulonglong)(longlong)iVar11 < (ulonglong)(param_1[0x1d] - *plVar14 >> 3));
    }
    uVar16 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    uStack_300 = &plStack_1d0;
    puStack_1c0 = &UNK_1801bc960;
    pcStack_1b8 = FUN_1801bc8d0;
    plStack_2e8 = param_1;
    plStack_2e0 = param_2;
    plStack_1d0 = param_1;
    plStack_1c8 = param_2;
    plVar14 = (longlong *)FUN_18006b640(uVar16,&plStack_1d0);
    if (plVar14 != (longlong *)0x0) {
      plStack_1e8 = plVar14;
      (**(code **)(*plVar14 + 0x28))(plVar14);
    }
    plStack_1e8 = (longlong *)param_1[0xc18e];
    param_1[0xc18e] = (longlong)plVar14;
    if (plStack_1e8 != (longlong *)0x0) {
      (**(code **)(*plStack_1e8 + 0x38))();
    }
    *(undefined8 *)(param_1[0xc18e] + 0x18) = 0xfffffffffffffffc;
    lVar20 = _DAT_180c82868;
    plVar14 = (longlong *)param_1[0xc18e];
    if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
      uStack_300 = &plStack_270;
      plStack_270 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
      FUN_18005e110(lVar20,&plStack_270);
    }
    else {
      (**(code **)(*plVar14 + 0x60))();
      plVar14 = (longlong *)param_1[0xc18e];
      if (*(code **)(*plVar14 + 0x70) == (code *)&UNK_180049530) {
        LOCK();
        *(undefined1 *)(plVar14 + 2) = 1;
        UNLOCK();
        FUN_1800466d0(plVar14 + 4);
      }
      else {
        (**(code **)(*plVar14 + 0x70))();
      }
    }
    uVar16 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    uStack_300 = &plStack_1b0;
    puStack_1a0 = &UNK_1801bc890;
    puStack_198 = &UNK_1801bc880;
    plStack_2e8 = param_1;
    plStack_2e0 = param_2;
    plStack_1b0 = param_1;
    plStack_1a8 = param_2;
    plVar14 = (longlong *)FUN_18006b640(uVar16,&plStack_1b0);
    if (plVar14 != (longlong *)0x0) {
      plStack_1e0 = plVar14;
      (**(code **)(*plVar14 + 0x28))(plVar14);
    }
    plStack_1e0 = (longlong *)param_1[0xc18f];
    param_1[0xc18f] = (longlong)plVar14;
    if (plStack_1e0 != (longlong *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    *(undefined8 *)(param_1[0xc18f] + 0x18) = 0xfffffffffffffffe;
    lVar20 = _DAT_180c82868;
    plVar14 = (longlong *)param_1[0xc18f];
    if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
      uStack_300 = &plStack_268;
      plStack_268 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
      FUN_18005e110(lVar20,&plStack_268);
    }
    else {
      (**(code **)(*plVar14 + 0x60))();
      plVar14 = (longlong *)param_1[0xc18f];
      if (*(code **)(*plVar14 + 0x70) == (code *)&UNK_180049530) {
        LOCK();
        *(undefined1 *)(plVar14 + 2) = 1;
        UNLOCK();
        FUN_1800466d0(plVar14 + 4);
      }
      else {
        (**(code **)(*plVar14 + 0x70))();
      }
    }
    if (param_1[0x89] != 0) {
      FUN_180374f40(param_1[0x89],param_2);
    }
    if ((*(char *)((longlong)param_1 + 0x563) != '\0') &&
       (iVar6 = (int)(param_1[0xb6] - param_1[0xb5] >> 0x3f),
       iVar11 = (int)((param_1[0xb6] - param_1[0xb5]) / 0xc) + iVar6,
       iVar11 != iVar6 && -1 < iVar11 - iVar6)) {
      pplVar13 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0xe8,8,3);
      bVar24 = *(byte *)(param_2 + 0x37b);
      uStack_300 = pplVar13;
      FUN_180049830(pplVar13);
      *pplVar13 = (longlong *)&UNK_180a0c2b8;
      pplVar13[0x18] = param_1;
      pplVar13[0x19] = param_2;
      *(byte *)(pplVar13 + 0x1a) = bVar24 >> 1 & 1;
      pplVar13[0x1b] = param_1 + 0x4e3;
      pplVar13[0x1c] = param_1 + 0x4cf;
      pplStack_258 = pplVar13;
      (*(code *)(*pplVar13)[5])(pplVar13);
      pplStack_258 = (longlong **)param_1[0x4ce];
      param_1[0x4ce] = (longlong)pplVar13;
      if (pplStack_258 != (longlong **)0x0) {
        (*(code *)(*pplStack_258)[7])();
      }
      lVar20 = _DAT_180c82868;
      plVar14 = (longlong *)param_1[0x4ce];
      if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
        pplStack_258 = &plStack_260;
        plStack_260 = plVar14;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x28))();
        }
        FUN_18005e110(lVar20,&plStack_260);
      }
      else {
        (**(code **)(*plVar14 + 0x60))();
        puVar3 = (undefined8 *)param_1[0x4ce];
        if ((undefined *)*puVar3 == &UNK_180a0c2b8) {
          LOCK();
          *(undefined1 *)(puVar3 + 2) = 1;
          UNLOCK();
          FUN_1800466d0(puVar3 + 4);
        }
        else {
          (**(code **)((undefined *)*puVar3 + 0x70))();
        }
      }
    }
  }
  lVar25 = _DAT_180c82868;
  plVar14 = param_1 + 0x6c;
  lVar20 = param_1[0x6d];
  lVar22 = *plVar14;
  if (lVar20 - lVar22 >> 3 != 0) {
    do {
      bVar8 = false;
      uVar23 = 0;
      if (lVar20 - lVar22 >> 3 == 0) break;
      do {
        plVar17 = *(longlong **)(lVar22 + uVar23 * 8);
        pcVar5 = *(code **)(*plVar17 + 0x68);
        if (pcVar5 == (code *)&UNK_1800467f0) {
          cVar9 = (char)plVar17[2] != '\0';
        }
        else {
          cVar9 = (*pcVar5)();
        }
        if (cVar9 == '\0') {
          bVar8 = true;
          plVar17 = (longlong *)FUN_18005e890(lVar25);
          cVar9 = (**(code **)(*plVar17 + 0x20))(plVar17,0);
          if (cVar9 == '\0') {
            plVar17 = *(longlong **)(*plVar14 + uVar23 * 8);
            pcVar5 = *(code **)(*plVar17 + 0x80);
            if (pcVar5 == (code *)&UNK_180049760) {
              FUN_1800496b0(plVar17 + 4);
            }
            else {
              (*pcVar5)();
            }
          }
        }
        uVar23 = (ulonglong)((int)uVar23 + 1);
        lVar20 = param_1[0x6d];
        lVar22 = *plVar14;
      } while (uVar23 < (ulonglong)(lVar20 - lVar22 >> 3));
    } while (bVar8);
    FUN_1800b8500(plVar14);
    param_1 = plStack_1d8;
  }
  *(undefined1 *)(param_1 + 2) = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_328);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint32_t process_entity_data_transfer(longlong *entity_data)
// 处理实体数据传输，包括数据复制、状态更新和资源管理
// 返回传输状态码
uint32_t process_entity_data_transfer(longlong *entity_data)

{
  // 局部变量声明
  undefined4 *ptr_undefined4_1;   // 未定义4字节指针1
  undefined4 temp_undefined4_1;   // 临时未定义4字节变量1
  longlong temp_long1;            // 临时长整型变量1
  longlong temp_long2;            // 临时长整型变量2
  undefined4 temp_undefined4_2;   // 临时未定义4字节变量2
  undefined4 temp_undefined4_3;   // 临时未定义4字节变量3
  undefined4 temp_undefined4_4;   // 临时未定义4字节变量4
  undefined4 temp_undefined4_5;   // 临时未定义4字节变量5
  undefined4 temp_undefined4_6;   // 临时未定义4字节变量6
  undefined4 temp_undefined4_7;   // 临时未定义4字节变量7
  undefined8 temp_undefined8_1;   // 临时未定义8字节变量1
  undefined8 temp_undefined8_2;   // 临时未定义8字节变量2
  undefined8 temp_undefined8_3;   // 临时未定义8字节变量3
  undefined8 temp_undefined8_4;   // 临时未定义8字节变量4
  undefined8 temp_undefined8_5;   // 临时未定义8字节变量5;
  
  // 获取实体数据指针和组件数据
  temp_long1 = *(longlong *)(entity_data + 0xc0);
  temp_long2 = *(longlong *)(temp_long1 + 0x3a8);
  
  // 备份源数据
  temp_undefined4_1 = *(undefined4 *)(temp_long1 + 0x43c);
  temp_undefined4_2 = *(undefined4 *)(temp_long1 + 0x440);
  temp_undefined4_3 = *(undefined4 *)(temp_long1 + 0x444);
  
  // 备份目标数据
  temp_undefined4_4 = *(undefined4 *)(temp_long2 + 0x40);
  temp_undefined4_5 = *(undefined4 *)(temp_long2 + 0x44);
  temp_undefined4_6 = *(undefined4 *)(temp_long2 + 0x48);
  temp_undefined4_7 = *(undefined4 *)(temp_long2 + 0x4c);
  
  // 执行数据传输：从源到目标
  *(undefined4 *)(temp_long2 + 0x40) = *(undefined4 *)(temp_long1 + 0x438);
  *(undefined4 *)(temp_long2 + 0x44) = temp_undefined4_1;
  *(undefined4 *)(temp_long2 + 0x48) = temp_undefined4_2;
  *(undefined4 *)(temp_long2 + 0x4c) = temp_undefined4_3;
  
  // 保存原始目标数据到备份位置
  *(undefined4 *)(temp_long2 + 0x30) = temp_undefined4_4;
  *(undefined4 *)(temp_long2 + 0x34) = temp_undefined4_5;
  *(undefined4 *)(temp_long2 + 0x38) = temp_undefined4_6;
  *(undefined4 *)(temp_long2 + 0x3c) = temp_undefined4_7;
  
  // 调用数据处理函数
  FUN_1802c6190(*(undefined8 *)(*(longlong *)(entity_data + 0xc0) + 0x3a8));
  FUN_18019c5b0(*(longlong *)(entity_data + 200) + 0x12678,
                *(undefined8 *)(*(longlong *)(entity_data + 0xc0) + 0x3a8));
  
  // 复制变换数据
  temp_long1 = *(longlong *)(*(longlong *)(entity_data + 0xc0) + 0x3a8);
  temp_long2 = *(longlong *)(entity_data + 200);
  temp_undefined8_1 = *(undefined8 *)(temp_long1 + 0x38);
  temp_undefined8_2 = *(undefined8 *)(temp_long1 + 0x40);
  temp_undefined8_3 = *(undefined8 *)(temp_long1 + 0x48);
  temp_undefined8_4 = *(undefined8 *)(temp_long1 + 0x50);
  temp_undefined8_5 = *(undefined8 *)(temp_long1 + 0x58);
  
  // 设置变换矩阵数据
  *(undefined8 *)(temp_long2 + 0x126b0) = *(undefined8 *)(temp_long1 + 0x30);
  *(undefined8 *)(temp_long2 + 0x126b8) = temp_undefined8_1;
  *(undefined8 *)(temp_long2 + 0x126c0) = temp_undefined8_2;
  *(undefined8 *)(temp_long2 + 0x126c8) = temp_undefined8_3;
  *(undefined8 *)(temp_long2 + 0x126d0) = temp_undefined8_4;
  *(undefined8 *)(temp_long2 + 0x126d8) = temp_undefined8_5;
  
  // 设置状态标志
  *(byte *)(*(longlong *)(entity_data + 200) + 0x126a0) = *(byte *)(_DAT_180c86870 + 0x224) & 1;
  *(undefined1 *)(*(longlong *)(entity_data + 200) + 0x12670) = 1;
  
  // 线程安全地获取并重置状态值
  LOCK();
  ptr_undefined4_1 = (undefined4 *)(*(longlong *)(*(longlong *)(entity_data + 0xc0) + 0x3a8) + 0x1060);
  temp_undefined4_1 = *ptr_undefined4_1;
  *ptr_undefined4_1 = 0;
  UNLOCK();
  
  return temp_undefined4_1;  // 返回原始状态值
}



undefined8 FUN_18019c560(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar1);
  }
  return param_1;
}



longlong * FUN_18019c5b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)*param_1;
  *param_1 = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[1];
  param_1[1] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[2];
  param_1[2] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[3];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[3];
  param_1[3] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[4];
  param_1[4] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(char *)(param_1 + 5) = (char)param_2[5];
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






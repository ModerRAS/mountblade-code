#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part207.c - 核心引擎模块第207部分
// 本文件包含数据结构管理、内存分配和树形结构操作相关函数

/**
 * 初始化字符串数据结构
 * @param param_1 上下文参数
 * @param param_2 保留参数
 * @param param_3 字符串数据指针
 */
void initialize_string_structure(undefined8 param_1, undefined8 param_2, undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_18018a960();
  *(undefined2 *)(lVar2 + 0x18) = 0;
  param_3 = (undefined8 *)*param_3;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  uVar1 = param_3[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_3;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(lVar2 + 0x30) = param_3[2];
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0xf;
  *(undefined1 *)(lVar2 + 0x40) = 0;
  return;
}



/**
 * 在字符串树中插入或查找节点
 * @param param_1 树结构指针
 * @param param_2 返回结果指针
 * @param param_3 比较节点
 * @param param_4 查找字符串
 * @param param_5 插入标志
 * @return 插入或找到的节点指针
 */
undefined8 *
insert_or_find_string_node(longlong *param_1, undefined8 *param_2, longlong *param_3, undefined8 *param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  ulonglong auStack_38 [2];
  
  if (param_1[1] == 0) {
    FUN_18018aa30(param_1,param_2,1,*param_1);
    return param_2;
  }
  plVar5 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar5) {
    plVar5 = param_3 + 4;
    uVar1 = param_3[6];
    if (0xf < (ulonglong)param_3[7]) {
      plVar5 = (longlong *)*plVar5;
    }
    uVar10 = param_4[2];
    puVar4 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar4 = (undefined8 *)*param_4;
    }
    uVar9 = uVar10;
    if (uVar1 < uVar10) {
      uVar9 = uVar1;
    }
    iVar3 = memcmp(puVar4,plVar5,uVar9);
    if (iVar3 == 0) {
      if (uVar10 < uVar1) {
LAB_18018a278:
        FUN_18018aa30(param_1,param_2,1,param_3);
        return param_2;
      }
    }
    else if (iVar3 < 0) goto LAB_18018a278;
    goto LAB_18018a57c;
  }
  if (param_3 == plVar5) {
    lVar2 = plVar5[2];
    plVar5 = (longlong *)(lVar2 + 0x20);
    uVar1 = param_4[2];
    puVar4 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar4 = (undefined8 *)*param_4;
    }
    uVar10 = *(ulonglong *)(lVar2 + 0x30);
    if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
      plVar5 = (longlong *)*plVar5;
    }
    uVar9 = uVar10;
    if (uVar1 < uVar10) {
      uVar9 = uVar1;
    }
    iVar3 = memcmp(plVar5,puVar4,uVar9);
    if (iVar3 == 0) {
      if (uVar10 < uVar1) {
LAB_18018a2f8:
        FUN_18018aa30(param_1,param_2,0,lVar2);
        return param_2;
      }
    }
    else if (iVar3 < 0) goto LAB_18018a2f8;
    goto LAB_18018a57c;
  }
  plVar5 = param_3 + 4;
  uVar1 = param_3[6];
  if (0xf < (ulonglong)param_3[7]) {
    plVar5 = (longlong *)*plVar5;
  }
  uVar10 = param_4[2];
  uVar9 = param_4[3];
  puVar4 = param_4;
  if (0xf < uVar9) {
    puVar4 = (undefined8 *)*param_4;
  }
  uVar8 = uVar10;
  if (uVar1 < uVar10) {
    uVar8 = uVar1;
  }
  iVar3 = memcmp(puVar4,plVar5,uVar8);
  if (iVar3 == 0) {
    if (uVar10 < uVar1) goto LAB_18018a370;
    if (uVar10 <= uVar1) goto LAB_18018a36e;
  }
  else {
LAB_18018a36e:
    if (iVar3 < 0) {
LAB_18018a370:
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar5 = param_3;
        plVar6 = (longlong *)*param_3;
        if (*(char *)(*param_3 + 0x19) == '\0') {
          do {
            plVar7 = plVar6;
            plVar6 = (longlong *)plVar7[2];
          } while (*(char *)(plVar7[2] + 0x19) == '\0');
        }
        else {
          do {
            plVar7 = plVar5;
            plVar5 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar5 + 0x19) != '\0') break;
          } while (plVar7 == (longlong *)*plVar5);
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            plVar7 = plVar5;
          }
        }
      }
      else {
        plVar7 = (longlong *)param_3[2];
      }
      plVar5 = plVar7 + 4;
      uVar10 = param_4[2];
      uVar9 = param_4[3];
      puVar4 = param_4;
      if (0xf < uVar9) {
        puVar4 = (undefined8 *)*param_4;
      }
      uVar1 = plVar7[6];
      if (0xf < (ulonglong)plVar7[7]) {
        plVar5 = (longlong *)*plVar5;
      }
      uVar8 = uVar1;
      if (uVar10 < uVar1) {
        uVar8 = uVar10;
      }
      iVar3 = memcmp(plVar5,puVar4,uVar8);
      if (iVar3 == 0) {
        if (uVar1 < uVar10) goto LAB_18018a5c5;
        if (uVar10 < uVar1) goto LAB_18018a3ee;
      }
      if (iVar3 < 0) {
LAB_18018a5c5:
        if (*(char *)(plVar7[2] + 0x19) != '\0') {
          FUN_18018aa30(param_1,param_2,0,plVar7);
          return param_2;
        }
        FUN_18018aa30(param_1,param_2,1,param_3);
        return param_2;
      }
    }
  }
LAB_18018a3ee:
  plVar5 = param_3 + 4;
  puVar4 = param_4;
  if (0xf < uVar9) {
    puVar4 = (undefined8 *)*param_4;
  }
  uVar1 = param_3[6];
  if (0xf < (ulonglong)param_3[7]) {
    plVar5 = (longlong *)*plVar5;
  }
  uVar9 = uVar1;
  if (uVar10 < uVar1) {
    uVar9 = uVar10;
  }
  iVar3 = memcmp(plVar5,puVar4,uVar9);
  if (iVar3 == 0) {
    if (uVar10 <= uVar1) goto LAB_18018a57c;
  }
  else if (-1 < iVar3) goto LAB_18018a57c;
  plVar5 = (longlong *)param_3[2];
  plVar6 = param_3;
  if (*(char *)(param_3[2] + 0x19) == '\0') {
    do {
      plVar7 = plVar5;
      plVar5 = (longlong *)*plVar7;
    } while (*(char *)(*plVar7 + 0x19) == '\0');
  }
  else {
    do {
      plVar7 = (longlong *)plVar6[1];
      if (*(char *)((longlong)plVar7 + 0x19) != '\0') break;
      bVar11 = plVar6 == (longlong *)plVar7[2];
      plVar6 = plVar7;
    } while (bVar11);
  }
  if (plVar7 != (longlong *)*param_1) {
    plVar5 = plVar7 + 4;
    uVar1 = plVar7[6];
    if (0xf < (ulonglong)plVar7[7]) {
      plVar5 = (longlong *)*plVar5;
    }
    uVar10 = param_4[2];
    puVar4 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar4 = (undefined8 *)*param_4;
    }
    uVar9 = uVar10;
    if (uVar1 < uVar10) {
      uVar9 = uVar1;
    }
    auStack_38[0] = uVar10;
    iVar3 = memcmp(puVar4,plVar5,uVar9);
    if (iVar3 == 0) {
      if (uVar10 < uVar1) goto LAB_18018a53f;
    }
    else if (iVar3 < 0) goto LAB_18018a53f;
LAB_18018a57c:
    puVar4 = (undefined8 *)FUN_18018ac60(param_1,auStack_38,0,param_4,param_5);
    *param_2 = *puVar4;
    return param_2;
  }
LAB_18018a53f:
  if (*(char *)(param_3[2] + 0x19) != '\0') {
    FUN_18018aa30(param_1,param_2,0,param_3);
    return param_2;
  }
  FUN_18018aa30(param_1,param_2,1,plVar7);
  return param_2;
}





/**
 * 初始化数值数据结构
 * @param param_1 上下文参数
 * @param param_2 保留参数
 * @param param_3 数值数据指针
 */
void initialize_numeric_structure(undefined8 param_1, undefined8 param_2, undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_18018a9f0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)*param_3;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  return;
}



/**
 * 在数值树中插入或查找节点
 * @param param_1 树结构指针
 * @param param_2 返回结果指针
 * @param param_3 比较节点
 * @param param_4 数值参数
 * @param param_5 插入标志
 * @return 插入或找到的节点指针
 */
undefined8 *
insert_or_find_numeric_node(longlong *param_1, undefined8 *param_2, longlong *param_3, int *param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_20 [24];
  
  if (param_1[1] == 0) {
    FUN_18018af30(param_1,param_2,1,*param_1);
  }
  else {
    plVar3 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar3) {
      if (*param_4 < *(int *)((longlong)param_3 + 0x1c)) {
        FUN_18018af30(param_1,param_2,1,param_3);
        return param_2;
      }
    }
    else if (param_3 == plVar3) {
      if (*(int *)(plVar3[2] + 0x1c) < *param_4) {
        FUN_18018af30(param_1,param_2,0);
        return param_2;
      }
    }
    else {
      iVar1 = *param_4;
      iVar2 = *(int *)((longlong)param_3 + 0x1c);
      bVar8 = SBORROW4(iVar2,iVar1);
      iVar4 = iVar2 - iVar1;
      if (iVar1 < iVar2) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar3 = param_3;
          plVar7 = (longlong *)*param_3;
          if (*(char *)(*param_3 + 0x19) == '\0') {
            do {
              plVar6 = plVar7;
              plVar7 = (longlong *)plVar6[2];
            } while (*(char *)(plVar6[2] + 0x19) == '\0');
          }
          else {
            do {
              plVar6 = plVar3;
              plVar3 = (longlong *)plVar6[1];
              if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
            } while (plVar6 == (longlong *)*plVar3);
            if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
              plVar6 = plVar3;
            }
          }
        }
        else {
          plVar6 = (longlong *)param_3[2];
        }
        iVar4 = *param_4;
        if (*(int *)((longlong)plVar6 + 0x1c) < iVar4) {
          if (*(char *)(plVar6[2] + 0x19) != '\0') {
            FUN_18018af30(param_1,param_2,0);
            return param_2;
          }
          FUN_18018af30(param_1,param_2,1,param_3);
          return param_2;
        }
        bVar8 = SBORROW4(*(int *)((longlong)param_3 + 0x1c),iVar4);
        iVar4 = *(int *)((longlong)param_3 + 0x1c) - iVar4;
      }
      if (bVar8 != iVar4 < 0) {
        plVar3 = (longlong *)param_3[2];
        plVar7 = param_3;
        if (*(char *)(param_3[2] + 0x19) == '\0') {
          do {
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar6;
          } while (*(char *)(*plVar6 + 0x19) == '\0');
        }
        else {
          do {
            plVar6 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar6 + 0x19) != '\0') break;
            bVar8 = plVar7 == (longlong *)plVar6[2];
            plVar7 = plVar6;
          } while (bVar8);
        }
        if ((plVar6 == (longlong *)*param_1) || (*param_4 < *(int *)((longlong)plVar6 + 0x1c))) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            FUN_18018af30(param_1,param_2,0,param_3);
            return param_2;
          }
          FUN_18018af30(param_1,param_2,1);
          return param_2;
        }
      }
    }
    puVar5 = (undefined8 *)FUN_18018b160(param_1,auStack_20,0,param_4,param_5);
    *param_2 = *puVar5;
  }
  return param_2;
}



/**
 * 复制树节点结构
 * @param param_1 树结构指针
 * @param param_2 源节点
 * @param param_3 目标节点
 * @param param_4 复制标志
 * @return 复制的节点指针
 */
undefined8 *
copy_tree_node(longlong *param_1, undefined8 *param_2, undefined8 param_3, ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_18018b2e0(param_1,param_2 + 4,param_3,param_4,0xfffffffffffffffe);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    uVar2 = FUN_18018a8c0(param_1,*param_2,puVar1,param_4 & 0xff);
    *puVar1 = uVar2;
    uVar2 = FUN_18018a8c0(param_1,param_2[2],puVar1,param_4 & 0xff);
    puVar1[2] = uVar2;
  }
  return puVar3;
}





/**
 * 分配字符串结构内存
 * @param param_1 数据指针
 * @return 分配的内存地址
 */
void allocate_string_structure(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180067110(0x60);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}





/**
 * 释放字符串结构内存
 * @param param_1 上下文参数
 * @param param_2 要释放的内存地址
 */
void free_string_structure(undefined8 param_1, longlong param_2)

{
  FUN_180067070(param_2 + 0x40);
  FUN_180067070(param_2 + 0x20);
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_2,0x60);
  return;
}





/**
 * 分配数值结构内存
 * @param param_1 数据指针
 * @return 分配的内存地址
 */
void allocate_numeric_structure(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180067110(0x28);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}



/**
 * 执行字符串树的再平衡操作
 * @param param_1 树结构指针
 * @param param_2 结果输出指针
 * @param param_3 平衡类型标志
 * @param param_4 插入位置
 * @param param_5 保留参数
 * @param param_6 新节点指针
 * @return 再平衡后的树结构
 */
undefined8 *
rebalance_string_tree(longlong *param_1, undefined8 *param_2, char param_3, undefined8 *param_4,
             undefined8 param_5, longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (0x2aaaaaaaaaaaaa8 < (ulonglong)param_1[1]) {
    FUN_18018a9a0(0x2aaaaaaaaaaaaa9,param_6);
    __Xlength_error_std__YAXPEBD_Z(&UNK_180a009a8);
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_18018aab4;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18018aab4;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18018aab4:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = plVar8;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)param_6[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar5 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar5 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar5 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        param_6 = *(longlong **)(param_6[1] + 8);
      }
      else {
        if (param_6 == (longlong *)plVar6[2]) {
          func_0x00018008d2b0(param_1);
          param_6 = plVar6;
        }
        *(undefined1 *)(param_6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(param_6[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_18018ac29:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (param_6 == (longlong *)*plVar6) {
          func_0x00018008d250(param_1);
          param_6 = plVar6;
        }
        *(undefined1 *)(param_6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(param_6[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar4) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_18018ac29;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
      param_6 = *(longlong **)(param_6[1] + 8);
    }
    cVar1 = *(char *)(param_6[1] + 0x18);
  } while( true );
}



/**
 * 在字符串树中查找并插入节点
 * @param param_1 树结构指针
 * @param param_2 结果输出指针
 * @param param_3 查找模式
 * @param param_4 查找字符串
 * @param param_5 临时内存
 * @return 插入或找到的节点
 */
undefined8 *
find_and_insert_string_node(longlong *param_1, undefined8 *param_2, char param_3, undefined8 *param_4,
             longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plStackX_8;
  ulonglong auStack_70 [3];
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  
  auStack_70[1] = 0xfffffffffffffffe;
  uVar10 = 1;
  puVar7 = (undefined8 *)((undefined8 *)*param_1)[1];
  puVar8 = (undefined8 *)*param_1;
  plStackX_8 = param_1;
  while (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    if (param_3 == '\0') {
      plVar9 = puVar7 + 4;
      uVar1 = puVar7[6];
      if (0xf < (ulonglong)puVar7[7]) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar2 = param_4[2];
      puVar8 = param_4;
      if (0xf < (ulonglong)param_4[3]) {
        puVar8 = (undefined8 *)*param_4;
      }
      uVar11 = uVar2;
      if (uVar1 < uVar2) {
        uVar11 = uVar1;
      }
      uStack_50 = uVar1;
      uStack_48 = uVar2;
      uVar5 = memcmp(puVar8,plVar9,uVar11);
      if (uVar5 == 0) {
        if (uVar2 < uVar1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar1 < uVar2);
        }
      }
    }
    else {
      plVar9 = puVar7 + 4;
      uVar1 = param_4[2];
      puVar8 = param_4;
      if (0xf < (ulonglong)param_4[3]) {
        puVar8 = (undefined8 *)*param_4;
      }
      uVar2 = puVar7[6];
      if (0xf < (ulonglong)puVar7[7]) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar11 = uVar2;
      if (uVar1 < uVar2) {
        uVar11 = uVar1;
      }
      auStack_70[2] = uVar1;
      uStack_58 = uVar2;
      uVar5 = memcmp(plVar9,puVar8,uVar11);
      if (uVar5 == 0) {
        if (uVar2 < uVar1) {
          uVar5 = 0;
          goto LAB_18018ad63;
        }
        uVar5 = (uint)(uVar1 < uVar2);
      }
      uVar5 = ~uVar5;
    }
LAB_18018ad63:
    uVar10 = uVar5 >> 0x1f;
    puVar8 = puVar7;
    if ((int)uVar5 < 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
    else {
      puVar7 = (undefined8 *)puVar7[2];
    }
  }
  puVar7 = puVar8;
  if ((char)uVar10 != '\0') {
    if (puVar8 == *(undefined8 **)*plStackX_8) {
      puVar7 = (undefined8 *)FUN_18018aa30(plStackX_8,&plStackX_8,1,puVar8);
      *param_2 = *puVar7;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
      puVar4 = (undefined8 *)*puVar8;
      puVar3 = puVar8;
      if (*(char *)((longlong)*puVar8 + 0x19) == '\0') {
        do {
          puVar7 = puVar4;
          puVar4 = (undefined8 *)puVar7[2];
        } while (*(char *)((longlong)puVar7[2] + 0x19) == '\0');
      }
      else {
        do {
          puVar7 = puVar3;
          puVar3 = (undefined8 *)puVar7[1];
          if (*(char *)((longlong)puVar3 + 0x19) != '\0') break;
        } while (puVar7 == (undefined8 *)*puVar3);
        if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
          puVar7 = puVar3;
        }
      }
    }
    else {
      puVar7 = (undefined8 *)puVar8[2];
    }
  }
  plVar9 = puVar7 + 4;
  uVar1 = param_4[2];
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  uVar2 = puVar7[6];
  if (0xf < (ulonglong)puVar7[7]) {
    plVar9 = (longlong *)*plVar9;
  }
  uVar11 = uVar2;
  if (uVar1 < uVar2) {
    uVar11 = uVar1;
  }
  auStack_70[0] = uVar2;
  uStack_40 = uVar1;
  iVar6 = memcmp(plVar9,param_4,uVar11);
  if (iVar6 == 0) {
    if (uVar1 <= uVar2) {
LAB_18018aebc:
      plStackX_8 = (longlong *)(param_5 + 0x20);
      FUN_180067070(param_5 + 0x40);
      FUN_180067070((longlong *)(param_5 + 0x20));
      uStack_38 = 0x60;
      free(param_5,0x60);
      *param_2 = puVar7;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  else if (-1 < iVar6) goto LAB_18018aebc;
  puVar7 = (undefined8 *)FUN_18018aa30(plStackX_8,auStack_70,uVar10,puVar8);
  *param_2 = *puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/**
 * 执行数值树的再平衡操作
 * @param param_1 树结构指针
 * @param param_2 结果输出指针
 * @param param_3 平衡类型标志
 * @param param_4 插入位置
 * @param param_5 保留参数
 * @param param_6 新节点指针
 * @return 再平衡后的树结构
 */
undefined8 *
rebalance_numeric_tree(longlong *param_1, undefined8 *param_2, char param_3, undefined8 *param_4,
             undefined8 param_5, longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (0x666666666666664 < (ulonglong)param_1[1]) {
    func_0x000180188610(0x666666666666665,param_6);
    __Xlength_error_std__YAXPEBD_Z(&UNK_180a009a8);
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_18018afb4;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18018afb4;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18018afb4:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = plVar8;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)param_6[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar5 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar5 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar5 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        param_6 = *(longlong **)(param_6[1] + 8);
      }
      else {
        if (param_6 == (longlong *)plVar6[2]) {
          func_0x00018008d2b0(param_1);
          param_6 = plVar6;
        }
        *(undefined1 *)(param_6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(param_6[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_18018b129:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (param_6 == (longlong *)*plVar6) {
          func_0x00018008d250(param_1);
          param_6 = plVar6;
        }
        *(undefined1 *)(param_6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(param_6[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar4) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_18018b129;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
      param_6 = *(longlong **)(param_6[1] + 8);
    }
    cVar1 = *(char *)(param_6[1] + 0x18);
  } while( true );
}



/**
 * 在数值树中查找并插入节点
 * @param param_1 树结构指针
 * @param param_2 结果输出指针
 * @param param_3 查找模式
 * @param param_4 数值参数
 * @param param_5 临时内存
 * @return 插入或找到的节点
 */
undefined8 *
find_and_insert_numeric_node(longlong *param_1, undefined8 *param_2, char param_3, int *param_4, undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 auStackX_8 [8];
  
  puVar1 = (undefined8 *)*param_1;
  bVar3 = true;
  puVar2 = puVar1;
  puVar4 = (undefined8 *)puVar1[1];
  while (*(char *)((longlong)puVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar3 = *param_4 < *(int *)((longlong)puVar4 + 0x1c);
    }
    else {
      bVar3 = *param_4 <= *(int *)((longlong)puVar4 + 0x1c);
    }
    puVar2 = puVar4;
    if (bVar3) {
      puVar4 = (undefined8 *)*puVar4;
    }
    else {
      puVar4 = (undefined8 *)puVar4[2];
    }
  }
  if (bVar3) {
    if (puVar2 == (undefined8 *)*puVar1) {
      puVar1 = (undefined8 *)FUN_18018af30(param_1,auStackX_8,1);
      *param_2 = *puVar1;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar2 + 0x19) == '\0') {
      puVar1 = (undefined8 *)*puVar2;
      if (*(char *)((longlong)*puVar2 + 0x19) == '\0') {
        do {
          puVar2 = puVar1;
          puVar1 = (undefined8 *)puVar2[2];
        } while (*(char *)((longlong)puVar2[2] + 0x19) == '\0');
      }
      else {
        do {
          puVar4 = puVar2;
          puVar1 = (undefined8 *)puVar4[1];
          if (*(char *)((longlong)puVar1 + 0x19) != '\0') break;
          puVar2 = puVar1;
        } while (puVar4 == (undefined8 *)*puVar1);
        puVar2 = puVar4;
        if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
          puVar2 = puVar1;
        }
      }
    }
    else {
      puVar2 = (undefined8 *)puVar2[2];
    }
  }
  if (*(int *)((longlong)puVar2 + 0x1c) < *param_4) {
    puVar1 = (undefined8 *)FUN_18018af30(param_1,auStackX_8);
    *param_2 = *puVar1;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    free(param_5,0x28);
    *param_2 = puVar2;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



/**
 * 创建新的字符串树节点
 * @param param_1 上下文参数
 * @param param_2 字符串数据
 * @param param_3 节点值
 * @param param_4 节点属性
 * @return 新创建的节点
 */
longlong create_string_tree_node(undefined8 param_1, longlong param_2, undefined8 param_3, undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = FUN_18018a960();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_18018b350(lVar1 + 0x20,param_2,param_3,param_4,uVar2);
  FUN_18018b350(lVar1 + 0x40,param_2 + 0x20);
  return lVar1;
}



/**
 * 复制字符串数据到节点
 * @param param_1 目标节点
 * @param param_2 源字符串数据
 * @return 目标节点指针
 */
undefined8 * copy_string_data_to_node(undefined8 *param_1, undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar1 < 0x10) {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar1;
    param_1[3] = 0xf;
    return param_1;
  }
  uVar3 = uVar1 | 0xf;
  if (0x7fffffffffffffff < uVar3) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar2 = FUN_180067110(uVar3 + 1);
  *param_1 = uVar2;
                    // WARNING: Subroutine does not return
  memcpy(uVar2,param_2,uVar1 + 1);
}



/**
 * 初始化字符串迭代器
 * @param param_1 迭代器指针
 * @param param_2 迭代器标志
 * @param param_3 迭代器参数
 * @param param_4 保留参数
 * @return 初始化的迭代器
 */
undefined8 *
initialize_string_iterator(undefined8 *param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4)

{
  *param_1 = &UNK_1809ffa18;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



/**
 * 初始化数值迭代器
 * @param param_1 迭代器指针
 * @param param_2 迭代器标志
 * @param param_3 迭代器参数
 * @param param_4 保留参数
 * @return 初始化的迭代器
 */
undefined8 *
initialize_numeric_iterator(undefined8 *param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4)

{
  *param_1 = &UNK_180a0ad90;
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x16] = 0;
  param_1[2] = &UNK_18098bcb0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建字符串映射结构
 * @param param_1 上下文参数
 * @param param_2 配置参数
 * @return 创建的映射结构
 */
undefined8 * create_string_mapping(undefined8 param_1, longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3,0xfffffffffffffffe);
  *puVar2 = &UNK_1809ffa18;
  *puVar2 = &UNK_180a0adf8;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0x539;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 1;
  *(undefined4 *)(puVar2 + 4) = 0x3e4ccccd;
  *(undefined4 *)(puVar2 + 2) = 8;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 8;
  *(undefined4 *)(puVar2 + 3) = 8;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  *(undefined4 *)(puVar2 + 5) = 8;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 8;
  if (param_2 != 0) {
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




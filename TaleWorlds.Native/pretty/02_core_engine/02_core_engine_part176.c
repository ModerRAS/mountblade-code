#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part176.c - 内存管理和资源清理模块
// 核心引擎模块第176部分：包含内存管理、资源清理、参数处理和比较功能

/**
 * 清理数组内存资源
 * @param array_ptr 数组指针
 * 功能: 清理数组中的所有指针资源并释放内存
 */
void cleanup_array_memory(longlong array_ptr)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



/**
 * 清理数组内存资源（副本）
 * @param array_ptr 数组指针
 * 功能: 清理数组中的所有指针资源并释放内存（与cleanup_array_memory功能相同）
 */
void cleanup_array_memory_duplicate(longlong array_ptr)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



/**
 * 处理引擎参数数组
 * @param engine_context 引擎上下文指针
 * @param param_type 参数类型
 * @param param_array 参数数组指针
 * 功能: 处理和验证引擎参数数组，添加必要的参数项
 */
void process_engine_parameter_array(longlong engine_context, int param_type, int *param_array)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  int *piVar23;
  ulonglong uVar24;
  int iStackX_18;
  undefined4 uStackX_1c;
  longlong lStackX_20;
  longlong alStack_60 [4];
  
  uVar22 = param_3[0xc];
  piVar23 = (int *)(longlong)(int)uVar22;
  uVar11 = uVar22;
  if (1 < (int)uVar22) {
    iVar15 = 0;
    iVar20 = 0;
    piVar13 = param_3;
    if (0 < (int)uVar22) {
      do {
        piVar12 = (int *)&UNK_18098d770;
        iVar14 = 0;
        do {
          if (*piVar13 == *piVar12) goto LAB_180160234;
          iVar14 = iVar14 + 1;
          piVar12 = piVar12 + 1;
        } while ((longlong)piVar12 < 0x18098d77c);
        iVar14 = -1;
LAB_180160234:
        iVar10 = iVar15 + 1;
        if (iVar14 < 0) {
          iVar10 = iVar15;
        }
        iVar15 = iVar10;
        iVar20 = iVar20 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar20 < (int)uVar22);
    }
    uVar11 = uVar22 - iVar15;
  }
  iVar15 = 0;
  piVar13 = param_3;
  if (0 < (int)uVar22) {
    do {
      if (*piVar13 == 0x38) goto LAB_18016028e;
      iVar15 = iVar15 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar15 < (int)uVar22);
  }
  param_3[(longlong)piVar23] = 0x38;
  param_3[(longlong)piVar23 + 6] = 3;
  uVar22 = uVar22 + 1;
  piVar23 = (int *)((longlong)piVar23 + 1);
LAB_18016028e:
  iVar15 = param_3[0xc];
  bVar9 = false;
  iVar20 = 0;
  piVar13 = param_3;
  if (0 < iVar15) {
    do {
      if (*piVar13 == 0x1d) {
        bVar9 = true;
        break;
      }
      iVar20 = iVar20 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar20 < iVar15);
  }
  if (!bVar9) {
    param_3[(longlong)piVar23] = 0x1d;
    uVar22 = uVar22 + 1;
    param_3[(longlong)piVar23 + 6] = 3;
    piVar23 = (int *)((longlong)piVar23 + 1);
    iVar15 = param_3[0xc];
  }
  iVar20 = 0;
  piVar13 = param_3;
  if (0 < iVar15) {
    do {
      if (*piVar13 == 0x2a) goto LAB_180160304;
      iVar20 = iVar20 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar20 < iVar15);
  }
  param_3[(longlong)piVar23] = 0x2a;
  uVar22 = uVar22 + 1;
  param_3[(longlong)piVar23 + 6] = 3;
LAB_180160304:
  param_3[0xc] = uVar22;
  plVar2 = *(longlong **)(param_1 + 0x58);
  lVar16 = *plVar2;
  plVar18 = plVar2;
  if (lVar16 == 0) {
    lVar16 = plVar2[1];
    while (plVar18 = plVar18 + 1, lVar16 == 0) {
      lVar16 = plVar18[1];
    }
  }
  lStackX_20 = plVar2[*(longlong *)(param_1 + 0x60)];
  do {
    if (lVar16 == lStackX_20) {
      uVar3 = *(undefined8 *)param_3;
      uVar4 = *(undefined8 *)(param_3 + 2);
      _iStackX_18 = CONCAT44((int)((ulonglong)param_3 >> 0x20),param_2);
      uVar5 = *(undefined8 *)(param_3 + 4);
      uVar6 = *(undefined8 *)(param_3 + 6);
      uVar7 = *(undefined8 *)(param_3 + 8);
      uVar8 = *(undefined8 *)(param_3 + 10);
      uVar1 = *(undefined8 *)(param_3 + 0xc);
      FUN_180160af0(param_1 + 0x50,alStack_60,piVar23,&iStackX_18,(longlong)param_2);
      *(undefined8 *)(alStack_60[0] + 4) = uVar3;
      *(undefined8 *)(alStack_60[0] + 0xc) = uVar4;
      *(undefined8 *)(alStack_60[0] + 0x14) = uVar5;
      *(undefined8 *)(alStack_60[0] + 0x1c) = uVar6;
      *(undefined8 *)(alStack_60[0] + 0x24) = uVar7;
      *(undefined8 *)(alStack_60[0] + 0x2c) = uVar8;
      *(undefined8 *)(alStack_60[0] + 0x34) = uVar1;
      return;
    }
    piVar13 = param_3 + 6;
    uVar17 = 0;
    if (0 < (int)uVar22) {
      lVar21 = (longlong)param_3 - (longlong)piVar13;
      uVar24 = (ulonglong)uVar22;
      do {
        lVar19 = 0;
        if (0 < *(int *)(lVar16 + 0x34)) {
          iVar15 = *(int *)(lVar21 + (longlong)piVar13);
          piVar23 = (int *)(lVar16 + 0x1c);
          do {
            if (iVar15 == piVar23[-6]) {
              if (uVar11 == 1) {
LAB_1801604d9:
                if (*piVar13 != *piVar23) goto LAB_1801604e5;
              }
              else {
                iVar20 = 0;
                piVar12 = (int *)&UNK_18098d770;
                while (iVar15 != *piVar12) {
                  iVar20 = iVar20 + 1;
                  piVar12 = piVar12 + 1;
                  if (0x18098d77b < (longlong)piVar12) goto LAB_1801603d8;
                }
                if (-1 < iVar20) goto LAB_1801604d9;
              }
LAB_1801603d8:
              uVar17 = uVar17 + 1;
              break;
            }
LAB_1801604e5:
            lVar19 = lVar19 + 1;
            piVar23 = piVar23 + 1;
          } while (lVar19 < *(int *)(lVar16 + 0x34));
        }
        piVar13 = piVar13 + 1;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if ((*(uint *)(lVar16 + 0x34) == uVar22) && (uVar17 == *(uint *)(lVar16 + 0x34))) {
      return;
    }
    lVar16 = *(longlong *)(lVar16 + 0x40);
    while (lVar16 == 0) {
      plVar2 = plVar18 + 1;
      plVar18 = plVar18 + 1;
      lVar16 = *plVar2;
    }
  } while( true );
}



/**
 * 处理引擎参数数组（内部函数）
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数数组指针
 * 功能: 处理引擎参数数组的内部实现
 */
void process_engine_parameter_array_internal(longlong param_1, undefined8 param_2, int *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 in_RAX;
  int *piVar4;
  int *piVar5;
  int iVar6;
  longlong unaff_RBX;
  char unaff_BPL;
  int unaff_ESI;
  uint uVar7;
  longlong unaff_RDI;
  longlong lVar8;
  longlong in_R11;
  longlong lVar9;
  uint unaff_R13D;
  undefined8 *unaff_R14;
  ulonglong uVar10;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  longlong in_stack_00000068;
  longlong in_stack_000000d0;
  int in_stack_000000d8;
  int iStack00000000000000e0;
  longlong lStack00000000000000e8;
  
  lStack00000000000000e8 = *(longlong *)(param_1 + *(longlong *)(in_R11 + 0x60) * 8);
  if (unaff_RBX != lStack00000000000000e8) {
    piVar4 = (int *)(unaff_R14 + 3);
    do {
      uVar7 = 0;
      if (0 < (int)unaff_R13D) {
        lVar9 = (longlong)unaff_R14 - (longlong)piVar4;
        uVar10 = (ulonglong)unaff_R13D;
        do {
          lVar8 = 0;
          if (0 < *(int *)(unaff_RBX + 0x34)) {
            iVar3 = *(int *)(lVar9 + (longlong)piVar4);
            param_3 = (int *)(unaff_RBX + 0x1c);
            do {
              if (iVar3 == param_3[-6]) {
                if (unaff_BPL == '\0') {
                  iVar6 = 0;
                  piVar5 = (int *)&UNK_18098d770;
                  while (iVar3 != *piVar5) {
                    iVar6 = iVar6 + 1;
                    piVar5 = piVar5 + 1;
                    if (in_stack_000000d0 <= (longlong)piVar5) goto LAB_1801603d8;
                  }
                  if (-1 < iVar6) goto LAB_1801604d9;
                }
                else {
LAB_1801604d9:
                  if (*piVar4 != *param_3) goto LAB_1801604e5;
                }
LAB_1801603d8:
                uVar7 = uVar7 + 1;
                break;
              }
LAB_1801604e5:
              lVar8 = lVar8 + 1;
              param_3 = param_3 + 1;
            } while (lVar8 < *(int *)(unaff_RBX + 0x34));
          }
          piVar4 = piVar4 + 1;
          uVar10 = uVar10 - 1;
          unaff_R14 = _iStack00000000000000e0;
        } while (uVar10 != 0);
      }
      if ((*(uint *)(unaff_RBX + 0x34) == unaff_R13D) && (uVar7 == *(uint *)(unaff_RBX + 0x34))) {
        return;
      }
      unaff_RBX = *(longlong *)(unaff_RBX + 0x40);
      while (unaff_RBX == 0) {
        plVar1 = (longlong *)(unaff_RDI + 8);
        unaff_RDI = unaff_RDI + 8;
        unaff_RBX = *plVar1;
      }
      piVar4 = (int *)(unaff_R14 + 3);
      unaff_ESI = in_stack_000000d8;
    } while (unaff_RBX != lStack00000000000000e8);
  }
  uStack0000000000000038 = *unaff_R14;
  uStack0000000000000040 = unaff_R14[1];
  uStack0000000000000048 = unaff_R14[2];
  uStack0000000000000050 = unaff_R14[3];
  uStack0000000000000058 = unaff_R14[4];
  uStack0000000000000060 = unaff_R14[5];
  uVar2 = unaff_R14[6];
  iStack00000000000000e0 = unaff_ESI;
  FUN_180160af0(in_RAX,&stack0x00000068,param_3,&stack0x000000e0,(longlong)unaff_ESI);
  *(undefined8 *)(in_stack_00000068 + 4) = uStack0000000000000038;
  *(undefined8 *)(in_stack_00000068 + 0xc) = uStack0000000000000040;
  *(undefined8 *)(in_stack_00000068 + 0x14) = uStack0000000000000048;
  *(undefined8 *)(in_stack_00000068 + 0x1c) = uStack0000000000000050;
  *(undefined8 *)(in_stack_00000068 + 0x24) = uStack0000000000000058;
  *(undefined8 *)(in_stack_00000068 + 0x2c) = uStack0000000000000060;
  *(undefined8 *)(in_stack_00000068 + 0x34) = uVar2;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 比较引擎参数配置
 * @param param_1 参数1
 * @param param_2 参数2
 * @return 返回比较结果
 * 功能: 比较两个引擎参数配置是否匹配
 */
char compare_engine_parameter_config(undefined4 param_1, int param_2)

{
  float *pfVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 extraout_XMM0_Da;
  
  lVar9 = _DAT_180c86900[0xb];
  for (piVar4 = *(int **)(lVar9 + ((ulonglong)(longlong)param_2 %
                                  (ulonglong)*(uint *)(_DAT_180c86900 + 0xc)) * 8);
      piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 0x10)) {
    if (param_2 == *piVar4) {
      lVar5 = _DAT_180c86900[0xc];
      goto LAB_180160546;
    }
  }
  lVar5 = _DAT_180c86900[0xc];
  piVar4 = *(int **)(lVar9 + lVar5 * 8);
LAB_180160546:
  if (piVar4 == *(int **)(lVar9 + lVar5 * 8)) {
    return '\0';
  }
  if ((char)piVar4[0xe] != '\0') {
    puVar6 = (undefined8 *)*_DAT_180c86900;
    uVar7 = _DAT_180c86900[1] - (longlong)puVar6 >> 3;
    iVar8 = 0;
    if (uVar7 != 0) {
      do {
        cVar3 = FUN_1801605f0(param_1,*puVar6,piVar4 + 1);
        if (cVar3 != '\0') {
          return '\x01';
        }
        iVar8 = iVar8 + 1;
        puVar6 = puVar6 + 1;
        param_1 = extraout_XMM0_Da;
      } while ((ulonglong)(longlong)iVar8 < uVar7);
    }
    return '\0';
  }
  cVar3 = '\x01';
  if (0 < (longlong)piVar4[0xd]) {
    lVar9 = 0;
    do {
      uVar2 = (piVar4 + 1)[lVar9];
      uVar7 = (ulonglong)uVar2;
      lVar5 = 0;
      iVar8 = piVar4[lVar9 + 7];
      do {
        if (uVar2 == *(uint *)(&UNK_18098d770 + lVar5 * 4)) goto LAB_18016064a;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 3);
      lVar5 = -1;
LAB_18016064a:
      if (iVar8 == 0) {
        if (lVar5 < 0) {
          if (cVar3 != '\0') {
LAB_180160689:
            if ((*(char *)(_DAT_180c868d0 + 0x18 + uVar7 * 0x18) == '\0') &&
               ((pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar7 * 0x18),
                0.7 < *pfVar1 || *pfVar1 == 0.7 ||
                ((*(byte *)(_DAT_180c868d0 + 0x14 + uVar7 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (cVar3 == '\0') goto LAB_1801606a6;
        if ((*(char *)(_DAT_180c868d0 + 0x18 + uVar7 * 0x18) != '\0') ||
           ((pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar7 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7
            && ((*(byte *)(_DAT_180c868d0 + 0x14 + uVar7 * 0x18) & 1) == 0)))) {
          uVar7 = (ulonglong)*(uint *)(&UNK_18098d780 + lVar5 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        cVar3 = '\x01';
      }
      else {
        if (iVar8 == 1) {
          if ((cVar3 != '\0') && (*(char *)(_DAT_180c868d0 + 0x18 + uVar7 * 0x18) == '\0')) {
            pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar7 * 0x18);
            if ((0.7 < *pfVar1 || *pfVar1 == 0.7) &&
               (pfVar1 = (float *)(_DAT_180c868d0 + 0xc + uVar7 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7)) goto LAB_180160797;
LAB_1801606f2:
            bVar10 = (*(byte *)(_DAT_180c868d0 + 0x14 + uVar7 * 0x18) & 3) == 3;
LAB_180160791:
            if (bVar10) goto LAB_180160797;
          }
        }
        else if (iVar8 == 2) {
          if ((cVar3 != '\0') && (*(char *)(_DAT_180c868d0 + 0x18 + uVar7 * 0x18) == '\0')) {
            pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar7 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_1801606f2;
            pfVar1 = (float *)(_DAT_180c868d0 + 0xc + uVar7 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_180160797;
            bVar10 = (*(byte *)(_DAT_180c868d0 + 0x14 + uVar7 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (iVar8 != 3) goto LAB_1801606a8;
          if ((cVar3 != '\0') &&
             ((*(char *)(_DAT_180c868d0 + 0x18 + uVar7 * 0x18) != '\0' ||
              ((pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar7 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7 &&
               ((*(byte *)(_DAT_180c868d0 + 0x14 + uVar7 * 0x18) & 1) == 0)))))) {
            if ((lVar5 < 0) ||
               (uVar7 = (ulonglong)*(uint *)(&UNK_18098d780 + lVar5 * 4),
               *(char *)(_DAT_180c868d0 + 0x18 + uVar7 * 0x18) != '\0')) goto LAB_180160797;
            pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar7 * 0x18);
            if (*pfVar1 <= 0.7 && *pfVar1 != 0.7) {
              bVar10 = (*(byte *)(_DAT_180c868d0 + 0x14 + uVar7 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        cVar3 = '\0';
      }
LAB_1801606a8:
      lVar9 = lVar9 + 1;
    } while (lVar9 < piVar4[0xd]);
  }
  return cVar3;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 比较引擎参数配置（简化版）
 * @param param_1 参数1
 * @return 返回比较结果
 * 功能: 比较引擎参数配置的简化版本
 */
char compare_engine_parameter_config_simplified(undefined4 param_1)

{
  float *pfVar1;
  uint uVar2;
  char cVar3;
  longlong in_RAX;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  bool in_ZF;
  bool bVar9;
  undefined4 extraout_XMM0_Da;
  
  if (!in_ZF) {
    puVar5 = (undefined8 *)*unaff_RSI;
    uVar6 = unaff_RSI[1] - (longlong)puVar5 >> 3;
    iVar7 = 0;
    if (uVar6 != 0) {
      do {
        cVar3 = FUN_1801605f0(param_1,*puVar5,in_RAX + 4);
        if (cVar3 != '\0') {
          return '\x01';
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
        param_1 = extraout_XMM0_Da;
      } while ((ulonglong)(longlong)iVar7 < uVar6);
    }
    return '\0';
  }
  cVar3 = '\x01';
  if (0 < (longlong)*(int *)(in_RAX + 0x34)) {
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(in_RAX + 4 + lVar8 * 4);
      uVar6 = (ulonglong)uVar2;
      lVar4 = 0;
      iVar7 = *(int *)(in_RAX + 0x1c + lVar8 * 4);
      do {
        if (uVar2 == *(uint *)(&UNK_18098d770 + lVar4 * 4)) goto LAB_18016064a;
        lVar4 = lVar4 + 1;
      } while (lVar4 < 3);
      lVar4 = -1;
LAB_18016064a:
      if (iVar7 == 0) {
        if (lVar4 < 0) {
          if (cVar3 != '\0') {
LAB_180160689:
            if ((*(char *)(_DAT_180c868d0 + 0x18 + uVar6 * 0x18) == '\0') &&
               ((pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar6 * 0x18),
                0.7 < *pfVar1 || *pfVar1 == 0.7 ||
                ((*(byte *)(_DAT_180c868d0 + 0x14 + uVar6 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (cVar3 == '\0') goto LAB_1801606a6;
        if ((*(char *)(_DAT_180c868d0 + 0x18 + uVar6 * 0x18) != '\0') ||
           ((pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar6 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7
            && ((*(byte *)(_DAT_180c868d0 + 0x14 + uVar6 * 0x18) & 1) == 0)))) {
          uVar6 = (ulonglong)*(uint *)(&UNK_18098d780 + lVar4 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        cVar3 = '\x01';
      }
      else {
        if (iVar7 == 1) {
          if ((cVar3 != '\0') && (*(char *)(_DAT_180c868d0 + 0x18 + uVar6 * 0x18) == '\0')) {
            pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar6 * 0x18);
            if ((0.7 < *pfVar1 || *pfVar1 == 0.7) &&
               (pfVar1 = (float *)(_DAT_180c868d0 + 0xc + uVar6 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7)) goto LAB_180160797;
LAB_1801606f2:
            bVar9 = (*(byte *)(_DAT_180c868d0 + 0x14 + uVar6 * 0x18) & 3) == 3;
LAB_180160791:
            if (bVar9) goto LAB_180160797;
          }
        }
        else if (iVar7 == 2) {
          if ((cVar3 != '\0') && (*(char *)(_DAT_180c868d0 + 0x18 + uVar6 * 0x18) == '\0')) {
            pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar6 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_1801606f2;
            pfVar1 = (float *)(_DAT_180c868d0 + 0xc + uVar6 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_180160797;
            bVar9 = (*(byte *)(_DAT_180c868d0 + 0x14 + uVar6 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (iVar7 != 3) goto LAB_1801606a8;
          if ((cVar3 != '\0') &&
             ((*(char *)(_DAT_180c868d0 + 0x18 + uVar6 * 0x18) != '\0' ||
              ((pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar6 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7 &&
               ((*(byte *)(_DAT_180c868d0 + 0x14 + uVar6 * 0x18) & 1) == 0)))))) {
            if ((lVar4 < 0) ||
               (uVar6 = (ulonglong)*(uint *)(&UNK_18098d780 + lVar4 * 4),
               *(char *)(_DAT_180c868d0 + 0x18 + uVar6 * 0x18) != '\0')) goto LAB_180160797;
            pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar6 * 0x18);
            if (*pfVar1 <= 0.7 && *pfVar1 != 0.7) {
              bVar9 = (*(byte *)(_DAT_180c868d0 + 0x14 + uVar6 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        cVar3 = '\0';
      }
LAB_1801606a8:
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(in_RAX + 0x34));
  }
  return cVar3;
}


/**
 * 返回常量值1
 * @return 返回1
 * 功能: 简单的常量返回函数
 */
undefined1 return_constant_one(void)

{
  return 1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address


/**
 * 处理引擎参数比较
 * 功能: 处理引擎参数的比较逻辑
 */
void process_engine_parameter_comparison(void)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RBP;
  longlong lVar6;
  bool bVar7;
  
  bVar7 = true;
  if (0 < (longlong)*(int *)(unaff_RBP + 0x30)) {
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(unaff_RBP + lVar6 * 4);
      uVar4 = (ulonglong)uVar2;
      lVar5 = 0;
      iVar3 = *(int *)(unaff_RBP + 0x18 + lVar6 * 4);
      do {
        if (uVar2 == *(uint *)(&UNK_18098d770 + lVar5 * 4)) goto LAB_18016064a;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 3);
      lVar5 = -1;
LAB_18016064a:
      if (iVar3 == 0) {
        if (lVar5 < 0) {
          if (bVar7) {
LAB_180160689:
            if ((*(char *)(_DAT_180c868d0 + 0x18 + uVar4 * 0x18) == '\0') &&
               ((pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar4 * 0x18),
                0.7 < *pfVar1 || *pfVar1 == 0.7 ||
                ((*(byte *)(_DAT_180c868d0 + 0x14 + uVar4 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (!bVar7) goto LAB_1801606a6;
        if ((*(char *)(_DAT_180c868d0 + 0x18 + uVar4 * 0x18) != '\0') ||
           ((pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar4 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7
            && ((*(byte *)(_DAT_180c868d0 + 0x14 + uVar4 * 0x18) & 1) == 0)))) {
          uVar4 = (ulonglong)*(uint *)(&UNK_18098d780 + lVar5 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        bVar7 = true;
      }
      else {
        if (iVar3 == 1) {
          if ((bVar7) && (*(char *)(_DAT_180c868d0 + 0x18 + uVar4 * 0x18) == '\0')) {
            pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar4 * 0x18);
            if ((0.7 < *pfVar1 || *pfVar1 == 0.7) &&
               (pfVar1 = (float *)(_DAT_180c868d0 + 0xc + uVar4 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7)) goto LAB_180160797;
LAB_1801606f2:
            bVar7 = (*(byte *)(_DAT_180c868d0 + 0x14 + uVar4 * 0x18) & 3) == 3;
LAB_180160791:
            if (bVar7) goto LAB_180160797;
          }
        }
        else if (iVar3 == 2) {
          if ((bVar7) && (*(char *)(_DAT_180c868d0 + 0x18 + uVar4 * 0x18) == '\0')) {
            pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar4 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_1801606f2;
            pfVar1 = (float *)(_DAT_180c868d0 + 0xc + uVar4 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_180160797;
            bVar7 = (*(byte *)(_DAT_180c868d0 + 0x14 + uVar4 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (iVar3 != 3) goto LAB_1801606a8;
          if ((bVar7) &&
             ((*(char *)(_DAT_180c868d0 + 0x18 + uVar4 * 0x18) != '\0' ||
              ((pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar4 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7 &&
               ((*(byte *)(_DAT_180c868d0 + 0x14 + uVar4 * 0x18) & 1) == 0)))))) {
            if ((lVar5 < 0) ||
               (uVar4 = (ulonglong)*(uint *)(&UNK_18098d780 + lVar5 * 4),
               *(char *)(_DAT_180c868d0 + 0x18 + uVar4 * 0x18) != '\0')) goto LAB_180160797;
            pfVar1 = (float *)(_DAT_180c868d0 + 4 + uVar4 * 0x18);
            if (*pfVar1 <= 0.7 && *pfVar1 != 0.7) {
              bVar7 = (*(byte *)(_DAT_180c868d0 + 0x14 + uVar4 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        bVar7 = false;
      }
LAB_1801606a8:
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(unaff_RBP + 0x30));
  }
  return;
}



/**
 * 处理引擎参数比较（完整版）
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数3
 * 功能: 处理引擎参数比较的完整实现
 */
void process_engine_parameter_comparison_full(undefined8 param_1, longlong param_2, longlong param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  bVar7 = true;
  if (0 < (longlong)*(int *)(param_3 + 0x30)) {
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(param_3 + lVar6 * 4);
      uVar4 = (ulonglong)uVar2;
      lVar5 = 0;
      iVar3 = *(int *)(param_3 + 0x18 + lVar6 * 4);
      do {
        if (uVar2 == *(uint *)(&UNK_18098d770 + lVar5 * 4)) goto LAB_18016064a;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 3);
      lVar5 = -1;
LAB_18016064a:
      if (iVar3 == 0) {
        if (lVar5 < 0) {
          if (bVar7) {
LAB_180160689:
            if ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0') &&
               ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18), 0.7 < *pfVar1 || *pfVar1 == 0.7 ||
                ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (!bVar7) goto LAB_1801606a6;
        if ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0') ||
           ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7 &&
            ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0)))) {
          uVar4 = (ulonglong)*(uint *)(&UNK_18098d780 + lVar5 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        bVar7 = true;
      }
      else {
        if (iVar3 == 1) {
          if ((bVar7) && (*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0')) {
            pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
            if ((0.7 < *pfVar1 || *pfVar1 == 0.7) &&
               (pfVar1 = (float *)(param_2 + 0xc + uVar4 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7))
            goto LAB_180160797;
LAB_1801606f2:
            bVar7 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 3) == 3;
LAB_180160791:
            if (bVar7) goto LAB_180160797;
          }
        }
        else if (iVar3 == 2) {
          if ((bVar7) && (*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0')) {
            pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_1801606f2;
            pfVar1 = (float *)(param_2 + 0xc + uVar4 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_180160797;
            bVar7 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (iVar3 != 3) goto LAB_1801606a8;
          if ((bVar7) &&
             ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0' ||
              ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7 &&
               ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0)))))) {
            if ((lVar5 < 0) ||
               (uVar4 = (ulonglong)*(uint *)(&UNK_18098d780 + lVar5 * 4),
               *(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0')) goto LAB_180160797;
            pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
            if (*pfVar1 <= 0.7 && *pfVar1 != 0.7) {
              bVar7 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        bVar7 = false;
      }
LAB_1801606a8:
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_3 + 0x30));
  }
  return;
}


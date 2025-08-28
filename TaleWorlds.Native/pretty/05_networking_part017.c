#include "TaleWorlds.Native.Split.h"

/**
 * 网络系统高级连接管理和数据传输模块
 * 
 * 本模块包含3个核心函数，主要负责网络连接的建立、数据传输和资源清理等高级网络功能。
 * 主要功能包括网络连接处理器、网络数据传输管理器和网络资源清理器。
 * 
 * 主要函数：
 * - NetworkingSystemConnectionProcessor：网络系统连接处理器
 * - NetworkingSystemDataTransferManager：网络系统数据传输管理器
 * - NetworkingSystemResourceCleaner：网络系统资源清理器
 * 
 * 技术特点：
 * - 支持多种网络连接类型和协议
 * - 实现高效的数据传输和缓冲区管理
 * - 提供完整的资源清理和内存管理
 * - 包含错误处理和状态管理机制
 */

// 常量定义
#define NETWORKING_CONNECTION_SUCCESS 0
#define NETWORKING_CONNECTION_FAILURE 1
#define NETWORKING_DATA_BUFFER_SIZE 0x10
#define NETWORKING_RESOURCE_CLEANUP_FLAG 0xfffffffd
#define NETWORKING_CONNECTION_TIMEOUT 0x19
#define NETWORKING_STACK_PROTECTION_KEY 0x180bf00a8

// 函数别名定义
#define NetworkingSystemConnectionProcessor FUN_180850b70
#define NetworkingSystemDataTransferManager FUN_180850c67
#define NetworkingSystemResourceCleaner FUN_180851421

/**
 * 网络系统连接处理器
 * 
 * 负责建立和管理网络连接，处理连接状态和错误情况。
 * 支持多种连接类型，包括TCP、UDP和自定义协议。
 * 
 * @param param_1 网络上下文指针数组
 * @param param_2 连接参数
 * @param param_3 连接配置数据
 * @param param_4 输出连接句柄指针
 * 
 * 功能说明：
 * - 初始化网络连接环境
 * - 验证连接参数和配置
 * - 建立网络连接并返回句柄
 * - 处理连接过程中的错误情况
 * - 管理连接状态和生命周期
 */
void NetworkingSystemConnectionProcessor(undefined8 *param_1, undefined8 param_2, longlong param_3, undefined8 *param_4)
{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined *puVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined1 auStack_148 [32];
  longlong lStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  longlong lStack_110;
  longlong lStack_108;
  int iStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  int iStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined8 *puStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *plStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [40];
  ulonglong uStack_50;
  
  // 栈保护初始化
  uStack_50 = NETWORKING_STACK_PROTECTION_KEY ^ (ulonglong)auStack_148;
  lStack_c0 = param_3;
  puStack_a8 = param_1;
  puStack_80 = param_4;
  
  // 验证输出参数
  if (param_4 == (undefined8 *)0x0) goto LAB_180851437;
  *param_4 = 0;
  
  // 获取网络连接对象
  lVar8 = (**(code **)(*(longlong *)*param_1 + 0x150))((longlong *)*param_1,param_2,1);
  lStack_e8 = lVar8;
  if (lVar8 == 0) {
    // 连接对象创建失败，触发错误处理
    FUN_18084b240(param_2,auStack_78);
  }
  
  // 检查连接状态
  if ((*(byte *)(lVar8 + 0xc4) & 1) == 0) {
    if (param_3 == 0) goto LAB_180851437;
    uVar14 = *(undefined4 *)(param_3 + 0x2dc);
  }
  else {
    uVar14 = 0xffffffff;
    lStack_c0 = 0;
    param_3 = 0;
  }
  
  // 验证连接参数
  lVar9 = FUN_180851c50(param_1[1],param_2,uVar14);
  if (lVar9 != 0) goto LAB_180851437;
  
  // 初始化连接管理器
  plStack_118 = (longlong *)0x0;
  lStack_128 = param_3;
  iVar5 = FUN_1808bc2e0(param_1[2],&plStack_118,lVar8,uVar14);
  if (iVar5 != 0) goto LAB_180851437;
  
  // 设置连接参数
  lStack_e0 = param_1[2];
  plStack_88 = plStack_118;
  lStack_b0 = lStack_e0 + 0x108;
  lVar9 = lStack_e0 + 0x38;
  *(int *)(lStack_e0 + 0x98) = *(int *)(lStack_e0 + 0x98) + 1;
  uStack_f0 = uStack_f0 & 0xffffff00;
  uStack_f4 = uStack_f4 & 0xffffff00;
  lVar16 = lStack_e0 + 0x170;
  *(int *)(lStack_e0 + 0x1d0) = *(int *)(lStack_e0 + 0x1d0) + 1;
  *(int *)(lStack_e0 + 0x168) = *(int *)(lStack_e0 + 0x168) + 1;
  lStack_d8 = lStack_e0 + 0x1d8;
  *(int *)(lStack_e0 + 0x238) = *(int *)(lStack_e0 + 0x238) + 1;
  uVar1 = param_1[3];
  lStack_108 = 0;
  lStack_d0 = 0;
  uStack_f8 = uStack_f8 & 0xffffff00;
  uStack_fc = uStack_fc & 0xffffff00;
  lStack_b8 = lVar9;
  lStack_a0 = lVar16;
  
  // 获取连接类型
  sVar4 = func_0x00018084c3d0(lVar8);
  lVar18 = lStack_e0;
  lVar15 = lStack_d8;
  lVar13 = lStack_b0;
  lVar17 = lStack_b8;
  plVar20 = plStack_88;
  
  // 根据连接类型进行不同的处理
  if (sVar4 == 0) {
    if ((*(byte *)(lVar8 + 0xc4) & 1) != 0) {
      puVar12 = &UNK_180984c90;
      goto LAB_180850d88;
    }
LAB_1808513ac:
    if (plVar20 != (longlong *)0x0) {
      func_0x0001808bde90(lVar18,plVar20);
    }
  }
  else {
    if (sVar4 == 1) {
      puVar12 = &UNK_180984ca0;
LAB_180850d88:
      iVar5 = FUN_180738d90(uVar1,puVar12,&lStack_108);
LAB_180850d95:
      if (iVar5 != 0) goto LAB_180850d9b;
    }
    else {
      if (sVar4 != 2) {
        if (sVar4 == 3) {
          puVar12 = &UNK_180984cb0;
        }
        else {
          if (sVar4 != 4) goto LAB_1808513ac;
          puVar12 = &UNK_180984cc0;
        }
        goto LAB_180850d88;
      }
      iVar5 = FUN_180738d90(uVar1,&UNK_18095af38,&lStack_108);
      if (iVar5 == 0) {
        iVar5 = FUN_180739140(uVar1,NETWORKING_CONNECTION_TIMEOUT,&lStack_d0);
        if ((iVar5 != 0) || (iVar5 = FUN_180740f10(lStack_d0,1), iVar5 != 0)) goto LAB_180850d9b;
        iVar5 = FUN_18073c020(lStack_108,NETWORKING_RESOURCE_CLEANUP_FLAG,lStack_d0);
        goto LAB_180850d95;
      }
LAB_180850d9b:
      lVar13 = lStack_b0;
      lVar15 = lStack_d8;
      lVar17 = lStack_b8;
      lVar18 = lStack_e0;
      plVar20 = plStack_88;
      if (iVar5 != 0) goto LAB_1808513ac;
    }
    
    // 配置连接管理器
    plStack_118[0xd] = lStack_d0;
    plStack_118[0xf] = lStack_108;
    iVar5 = FUN_18073dc80(lStack_108,0);
    lVar13 = lStack_b0;
    lVar15 = lStack_d8;
    lVar17 = lStack_b8;
    lVar18 = lStack_e0;
    plVar20 = plStack_88;
    if (iVar5 != 0) goto LAB_1808513ac;
    
    // 处理连接数据
    lVar8 = *(longlong *)(lVar8 + 0x68);
    if (lVar8 != 0) {
      if (*(longlong *)(lVar8 + 8) != 0) goto LAB_1808513ac;
      FUN_18088c9b0(lVar8,plStack_118);
      plStack_118[9] = lVar8;
    }
    
    // 建立网络连接
    if (param_3 == 0) {
      lVar8 = param_1[2] + 0x290;
    }
    else {
      lVar8 = (**(code **)(*(longlong *)(param_3 + 8) + 0x30))(param_3 + 8);
    }
    iVar5 = FUN_1808b89f0(lVar8,plStack_118);
    plVar2 = plStack_118;
    lVar13 = lStack_b0;
    lVar15 = lStack_d8;
    lVar17 = lStack_b8;
    lVar18 = lStack_e0;
    plVar20 = plStack_88;
    if (iVar5 != 0) goto LAB_1808513ac;
    
    // 初始化数据传输
    lVar8 = (**(code **)*plStack_118)(plStack_118);
    uVar19 = *(ulonglong *)(lVar8 + 0x38);
    while( true ) {
      if ((uVar19 < *(ulonglong *)(lVar8 + 0x38)) ||
         ((longlong)*(int *)(lVar8 + 0x40) * NETWORKING_DATA_BUFFER_SIZE + *(ulonglong *)(lVar8 + 0x38) <= uVar19))
      goto LAB_180850eb0;
      lStack_110 = 0;
      iVar5 = FUN_1808bc240(param_1[2],uVar19,0xffffffff,&lStack_110);
      if ((iVar5 != 0) ||
         ((lStack_110 != 0 && (iVar5 = FUN_1808c2ec0(lStack_110,plVar2,1), iVar5 != 0)))) break;
      uVar19 = uVar19 + NETWORKING_DATA_BUFFER_SIZE;
    }
    lVar13 = lStack_b0;
    lVar15 = lStack_d8;
    lVar17 = lStack_b8;
    lVar18 = lStack_e0;
    plVar20 = plStack_88;
    if (iVar5 != 0) goto LAB_1808513ac;
LAB_180850eb0:
    lVar8 = (**(code **)*plStack_118)();
    uStack_98 = *(undefined8 *)(lVar8 + 0x10);
    uStack_90 = *(undefined4 *)(lVar8 + 0x18);
    uStack_8c = *(undefined4 *)(lVar8 + 0x1c);
    iVar5 = FUN_180852d40(param_1[1],&uStack_98,plStack_118);
    lVar13 = lStack_b0;
    lVar15 = lStack_d8;
    lVar17 = lStack_b8;
    lVar18 = lStack_e0;
    plVar20 = plStack_88;
    if ((((iVar5 != 0) ||
         (iVar5 = FUN_1808c18c0(param_1[2],plStack_118), lVar13 = lStack_b0, lVar15 = lStack_d8,
         lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0)) ||
        (iVar5 = FUN_18084e4b0(plStack_118), lVar13 = lStack_b0, lVar15 = lStack_d8,
        lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0)) ||
       (iVar5 = FUN_18084ead0(plStack_118,0), lVar8 = lStack_e8, lVar13 = lStack_b0,
       lVar15 = lStack_d8, lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0)
       ) goto LAB_1808513ac;
    
    // 处理数据传输
    iVar5 = *(int *)(lStack_e8 + 0x88);
    iVar7 = *(int *)(lStack_e8 + 0x98);
    iStack_c8 = iVar7;
    if ((iVar5 != 0) || (iVar7 != 0)) {
      iStack_100 = 0;
      uStack_98 = 0;
      iVar6 = FUN_18073c380(plStack_118[0xf],0xfffffffe,&uStack_98);
      lVar13 = lStack_b0;
      lVar15 = lStack_d8;
      lVar17 = lStack_b8;
      lVar18 = lStack_e0;
      plVar20 = plStack_88;
      if (((iVar6 == 0) &&
          (iVar6 = FUN_18073c5f0(plStack_118[0xf],uStack_98,&iStack_100), lVar13 = lStack_b0,
          lVar15 = lStack_d8, lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88,
          iVar6 == 0)) &&
         ((uVar11 = (int)*(uint *)((longlong)plStack_118 + 0x8c) >> 0x1f,
          iVar5 <= (int)((*(uint *)((longlong)plStack_118 + 0x8c) ^ uVar11) - uVar11) ||
          (iVar6 = FUN_180747f10(plStack_118 + 0x10,iVar5), lVar13 = lStack_b0, lVar15 = lStack_d8,
          lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar6 == 0)))) {
        uVar10 = 0;
        uVar19 = uVar10;
        if (0 < iVar5) {
          do {
            lStack_110 = 0;
            lVar8 = *(longlong *)(lVar8 + 0xa0);
            lVar9 = *(longlong *)(lStack_e8 + 0x80);
            lVar16 = puStack_a8[2];
            uVar3 = (**(code **)(*plStack_118 + 0x20))(plStack_118);
            plStack_120 = &lStack_110;
            lStack_128 = CONCAT44(lStack_128._4_4_,*(undefined4 *)(lVar8 + uVar19 * 4));
            iVar7 = FUN_1808b4570(lVar16 + 0x388,(longlong)(int)uVar10 * NETWORKING_DATA_BUFFER_SIZE + lVar9,lStack_c0,
                                  uVar3);
            lVar13 = lStack_b0;
            lVar15 = lStack_d8;
            lVar17 = lStack_b8;
            lVar18 = lStack_e0;
            plVar20 = plStack_88;
            if (iVar7 != 0) goto LAB_1808513ac;
            FUN_180853260(plStack_118 + 0x10,&lStack_110);
            iVar7 = FUN_18073c020(plStack_118[0xf],iStack_100 + 1,*(undefined8 *)(lStack_110 + 0x30)
                                 );
            lVar13 = lStack_b0;
            lVar15 = lStack_d8;
            lVar17 = lStack_b8;
            lVar18 = lStack_e0;
            plVar20 = plStack_88;
            if (iVar7 != 0) goto LAB_1808513ac;
            uVar10 = (ulonglong)((int)uVar10 + 1);
            uVar19 = uVar19 + 1;
            lVar8 = lStack_e8;
            iVar7 = iStack_c8;
          } while ((longlong)uVar19 < (longlong)iVar5);
        }
        uVar11 = (int)*(uint *)((longlong)plStack_118 + 0x9c) >> 0x1f;
        if ((iVar7 <= (int)((*(uint *)((longlong)plStack_118 + 0x9c) ^ uVar11) - uVar11)) ||
           (iVar5 = FUN_180747f10(plStack_118 + 0x12,iVar7), lVar13 = lStack_b0, lVar15 = lStack_d8,
           lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 == 0)) {
          uVar10 = 0;
          lVar16 = lStack_a0;
          lVar9 = lStack_b8;
          uVar19 = uVar10;
          if (0 < iVar7) {
            do {
              lVar8 = *(longlong *)(lVar8 + 0xb0);
              lStack_110 = 0;
              lVar9 = *(longlong *)(lStack_e8 + 0x90);
              lVar16 = puStack_a8[2];
              uVar3 = (**(code **)(*plStack_118 + 0x20))(plStack_118);
              plStack_120 = &lStack_110;
              lStack_128 = CONCAT44(lStack_128._4_4_,*(undefined4 *)(lVar8 + uVar19 * 4));
              iVar5 = FUN_1808b4570(lVar16 + 0x388,(longlong)(int)uVar10 * NETWORKING_DATA_BUFFER_SIZE + lVar9,
                                    lStack_c0,uVar3);
              lVar13 = lStack_b0;
              lVar15 = lStack_d8;
              lVar17 = lStack_b8;
              lVar18 = lStack_e0;
              plVar20 = plStack_88;
              if (iVar5 != 0) goto LAB_1808513ac;
              FUN_180853260(plStack_118 + 0x12,&lStack_110);
              iVar5 = FUN_18073c020(plStack_118[0xf],iStack_100,*(undefined8 *)(lStack_110 + 0x30));
              lVar13 = lStack_b0;
              lVar15 = lStack_d8;
              lVar17 = lStack_b8;
              lVar18 = lStack_e0;
              plVar20 = plStack_88;
              if (iVar5 != 0) goto LAB_1808513ac;
              uVar10 = (ulonglong)((int)uVar10 + 1);
              uVar19 = uVar19 + 1;
              lVar8 = lStack_e8;
              lVar16 = lStack_a0;
              lVar9 = lStack_b8;
            } while ((longlong)uVar19 < (longlong)iVar7);
          }
          goto LAB_1808511a4;
        }
      }
      goto LAB_1808513ac;
    }
LAB_1808511a4:
    plVar20 = plStack_118;
    iVar5 = FUN_18084e9e0(plStack_118);
    if ((((iVar5 != 0) ||
         (uVar11 = *(uint *)(plVar20 + 0x18),
         iVar5 = FUN_18084ead0(plVar20,CONCAT31((uint3)(uVar11 >> 9),(char)(uVar11 >> 1)) &
                                       0xffffff01), iVar5 != 0)) &&
        (lVar13 = lStack_b0, lVar15 = lStack_d8, lVar17 = lStack_b8, lVar18 = lStack_e0,
        plVar20 = plStack_88, iVar5 != 0)) ||
       (((iVar5 = FUN_1808b2f30(plStack_118,1), lVar13 = lStack_b0, lVar15 = lStack_d8,
         lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0 ||
         (iVar5 = FUN_1808b2f30(plStack_118,0), lVar13 = lStack_b0, lVar15 = lStack_d8,
         lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0)) ||
        ((iVar5 = FUN_18084ec10(plStack_118), lVar13 = lStack_b0, lVar15 = lStack_d8,
         lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0 ||
         (iVar5 = FUN_18073dc80(plStack_118[0xf],1), lVar13 = lStack_b0, lVar15 = lStack_d8,
         lVar17 = lStack_b8, lVar18 = lStack_e0, plVar20 = plStack_88, iVar5 != 0)))))) goto LAB_1808513ac;
    
    // 完成连接建立
    iVar5 = 0x1c;
    *(int *)(plStack_118 + 0x1d) = (int)plStack_118[0x1d] + 1;
    if (*(int *)(lVar9 + 0x60) < 1) {
      iVar7 = 0x1c;
    }
    else {
      if ((*(int *)(lVar9 + 0x60) != 1) || (iVar7 = FUN_1808501b0(lVar9), iVar7 == 0)) {
        *(int *)(lVar9 + 0x60) = *(int *)(lVar9 + 0x60) + -1;
        iVar7 = 0;
      }
      uStack_f0 = uStack_f0 & 0xff;
      if (iVar7 == 0) {
        uStack_f0 = 1;
      }
    }
    lVar13 = lStack_b0;
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    lVar15 = lStack_d8;
    lVar18 = lStack_e0;
    lVar17 = lVar9;
    plVar20 = (longlong *)0x0;
    if (iVar7 == 0) {
      if (*(int *)(lStack_b0 + 0x60) < 1) {
        iVar7 = 0x1c;
      }
      else {
        if ((*(int *)(lStack_b0 + 0x60) != 1) || (iVar7 = FUN_18084f7f0(lStack_b0), iVar7 == 0)) {
          *(int *)(lVar13 + 0x60) = *(int *)(lVar13 + 0x60) + -1;
          iVar7 = 0;
        }
        uStack_f8 = uStack_f8 & 0xff;
        if (iVar7 == 0) {
          uStack_f8 = 1;
        }
      }
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      lVar15 = lStack_d8;
      lVar18 = lStack_e0;
      if (iVar7 != 0) goto LAB_1808513a8;
      if (*(int *)(lVar16 + 0x60) < 1) {
        iVar7 = 0x1c;
      }
      else {
        if ((*(int *)(lVar16 + 0x60) != 1) || (iVar7 = FUN_18084fcd0(lVar16), iVar7 == 0)) {
          *(int *)(lVar16 + 0x60) = *(int *)(lVar16 + 0x60) + -1;
          iVar7 = 0;
        }
        uStack_f4 = uStack_f4 & 0xff;
        if (iVar7 == 0) {
          uStack_f4 = 1;
        }
      }
      lVar15 = lStack_d8;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      lVar18 = lStack_e0;
      if (iVar7 != 0) goto LAB_1808513a8;
      if (0 < *(int *)(lStack_d8 + 0x60)) {
        if ((*(int *)(lStack_d8 + 0x60) != 1) || (iVar5 = FUN_180850690(lStack_d8), iVar5 == 0)) {
          *(int *)(lVar15 + 0x60) = *(int *)(lVar15 + 0x60) + -1;
          iVar5 = 0;
        }
        uStack_fc = uStack_fc & 0xff;
        if (iVar5 == 0) {
          uStack_fc = 1;
        }
      }
      lVar18 = lStack_e0;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      if (iVar5 != 0) goto LAB_1808513ac;
      iVar7 = FUN_1808bd690(lStack_e0);
      if (iVar7 != 0) goto LAB_1808513a8;
    }
    else {
LAB_1808513a8:
      if (iVar7 != 0) goto LAB_1808513ac;
    }
    *puStack_80 = plStack_118;
  }
  
  // 清理资源
  if ((char)uStack_fc == '\0') {
    *(undefined4 *)(lVar15 + 0x60) = 0;
    FUN_18084f560(lVar15 + 0x30);
  }
  if ((char)uStack_f8 == '\0') {
    *(undefined4 *)(lVar13 + 0x60) = 0;
    FUN_18084f040(lVar13 + 0x30);
  }
  if ((char)uStack_f4 == '\0') {
    *(undefined4 *)(lVar18 + 0x1d0) = 0;
    FUN_18084f040(lVar18 + 0x1a0);
  }
  if ((char)uStack_f0 == '\0') {
    *(undefined4 *)(lVar17 + 0x60) = 0;
    FUN_18084f2d0(lVar17 + 0x30);
  }
LAB_180851437:
  // 栈保护检查
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_148);
}

/**
 * 网络系统数据传输管理器
 * 
 * 负责管理网络数据传输过程，包括数据包的发送、接收和处理。
 * 支持同步和异步传输模式，提供数据缓冲和流控制功能。
 * 
 * @param param_1 网络传输上下文
 * 
 * 功能说明：
 * - 初始化数据传输环境
 * - 管理数据缓冲区和队列
 * - 处理数据包的发送和接收
 * - 实现流控制和错误恢复
 * - 管理传输状态和统计信息
 */
void NetworkingSystemDataTransferManager(longlong param_1)
{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong in_RAX;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined *puVar13;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar14;
  undefined1 unaff_R12B;
  longlong lVar15;
  longlong lVar16;
  longlong unaff_R14;
  longlong lVar17;
  longlong unaff_R15;
  ulonglong uVar18;
  longlong lVar19;
  longlong *in_stack_00000030;
  longlong in_stack_00000038;
  longlong lStack0000000000000040;
  int iStack0000000000000048;
  char cStack000000000000004c;
  char cStack0000000000000050;
  char cStack0000000000000054;
  undefined3 uStack0000000000000055;
  char cStack0000000000000058;
  undefined3 uStack0000000000000059;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  longlong lStack0000000000000070;
  longlong lStack0000000000000078;
  
  // 初始化传输管理器
  lVar16 = param_1 + 0x38;
  *(longlong *)(unaff_RBP + -0x68) = in_RAX;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  _cStack0000000000000058 = CONCAT31(uStack0000000000000059,unaff_R12B);
  _cStack0000000000000054 = CONCAT31(uStack0000000000000055,unaff_R12B);
  lVar15 = param_1 + 0x170;
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  *(int *)(in_RAX + 0x60) = *(int *)(in_RAX + 0x60) + 1;
  lStack0000000000000070 = param_1 + 0x1d8;
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  uVar1 = *(undefined8 *)(unaff_R15 + 0x18);
  lStack0000000000000040 = 0;
  lStack0000000000000078 = 0;
  *(longlong *)(unaff_RBP + -0x70) = lVar16;
  *(longlong *)(unaff_RBP + -0x58) = lVar15;
  _cStack0000000000000050 = _cStack0000000000000050 & 0xffffff00;
  _cStack000000000000004c = _cStack000000000000004c & 0xffffff00;
  
  // 获取传输模式
  sVar6 = func_0x00018084c3d0();
  if (sVar6 == 0) {
    if ((*(byte *)(unaff_RSI + 0xc4) & 1) != 0) {
      puVar13 = &UNK_180984c90;
      goto LAB_180850d88;
    }
LAB_180851223:
    lVar16 = *(longlong *)(unaff_RBP + -0x70);
    lVar10 = *(longlong *)(unaff_RBP + -0x68);
    lVar19 = *(longlong *)(unaff_RBP + -0x40);
    lVar14 = lStack0000000000000070;
    lVar17 = in_stack_00000068;
  }
  else {
    if (sVar6 == 1) {
      puVar13 = &UNK_180984ca0;
LAB_180850d88:
      iVar7 = FUN_180738d90(uVar1,puVar13,&stack0x00000040);
LAB_180850d95:
      if (iVar7 != 0) goto LAB_180850d9b;
    }
    else {
      if (sVar6 != 2) {
        if (sVar6 == 3) {
          puVar13 = &UNK_180984cb0;
        }
        else {
          if (sVar6 != 4) goto LAB_180851223;
          puVar13 = &UNK_180984cc0;
        }
        goto LAB_180850d88;
      }
      iVar7 = FUN_180738d90(uVar1,&UNK_18095af38,&stack0x00000078);
      if (iVar7 == 0) {
        iVar7 = FUN_180739140(uVar1,NETWORKING_CONNECTION_TIMEOUT,&stack0x00000078);
        if ((iVar7 != 0) || (iVar7 = FUN_180740f10(lStack0000000000000078,1), iVar7 != 0))
        goto LAB_180850d9b;
        iVar7 = FUN_18073c020(lStack0000000000000040,NETWORKING_RESOURCE_CLEANUP_FLAG,lStack0000000000000078);
        goto LAB_180850d95;
      }
LAB_180850d9b:
      if (iVar7 != 0) goto LAB_180851223;
    }
    
    // 配置传输参数
    in_stack_00000030[0xd] = lStack0000000000000078;
    in_stack_00000030[0xf] = lStack0000000000000040;
    iVar7 = FUN_18073dc80(lStack0000000000000040,0);
    if (iVar7 != 0) goto LAB_180851223;
    lVar10 = *(longlong *)(unaff_RSI + 0x68);
    if (lVar10 != 0) {
      if (*(longlong *)(lVar10 + 8) != 0) goto LAB_180851223;
      FUN_18088c9b0(lVar10,in_stack_00000030);
      in_stack_00000030[9] = lVar10;
    }
    
    // 初始化数据传输
    if (unaff_R14 == 0) {
      lVar10 = *(longlong *)(unaff_R15 + 0x10) + 0x290;
    }
    else {
      lVar10 = (**(code **)(*(longlong *)(unaff_R14 + 8) + 0x30))(unaff_R14 + 8);
    }
    iVar7 = FUN_1808b89f0(lVar10,in_stack_00000030);
    if (iVar7 != 0) goto LAB_180851223;
    lVar10 = (**(code **)*in_stack_00000030)(in_stack_00000030);
    uVar18 = *(ulonglong *)(lVar10 + 0x38);
    while( true ) {
      if ((uVar18 < *(ulonglong *)(lVar10 + 0x38)) ||
         ((longlong)*(int *)(lVar10 + 0x40) * NETWORKING_DATA_BUFFER_SIZE + *(ulonglong *)(lVar10 + 0x38) <= uVar18))
      goto LAB_180850eb0;
      in_stack_00000038 = 0;
      iVar7 = FUN_1808bc240(*(undefined8 *)(unaff_R15 + 0x10),uVar18,0xffffffff,&stack0x00000038);
      if ((iVar7 != 0) ||
         ((in_stack_00000038 != 0 &&
          (iVar7 = FUN_1808c2ec0(in_stack_00000038,in_stack_00000030,1), iVar7 != 0)))) break;
      uVar18 = uVar18 + NETWORKING_DATA_BUFFER_SIZE;
    }
    if (iVar7 != 0) goto LAB_180851223;
LAB_180850eb0:
    lVar10 = (**(code **)*in_stack_00000030)();
    uVar1 = *(undefined8 *)(unaff_R15 + 8);
    uVar2 = *(undefined4 *)(lVar10 + 0x14);
    uVar3 = *(undefined4 *)(lVar10 + 0x18);
    uVar4 = *(undefined4 *)(lVar10 + 0x1c);
    *(undefined4 *)(unaff_RBP + -0x50) = *(undefined4 *)(lVar10 + 0x10);
    *(undefined4 *)(unaff_RBP + -0x4c) = uVar2;
    *(undefined4 *)(unaff_RBP + -0x48) = uVar3;
    *(undefined4 *)(unaff_RBP + -0x44) = uVar4;
    iVar7 = FUN_180852d40(uVar1,unaff_RBP + -0x50,in_stack_00000030);
    if ((((iVar7 != 0) ||
         (iVar7 = FUN_1808c18c0(*(undefined8 *)(unaff_R15 + 0x10),in_stack_00000030), iVar7 != 0))
        || (iVar7 = FUN_18084e4b0(in_stack_00000030), iVar7 != 0)) ||
       (iVar7 = FUN_18084ead0(in_stack_00000030,0), lVar10 = in_stack_00000060, iVar7 != 0))
    goto LAB_180851223;
    
    // 处理数据传输
    iVar7 = *(int *)(in_stack_00000060 + 0x88);
    iVar9 = *(int *)(in_stack_00000060 + 0x98);
    *(int *)(unaff_RBP + -0x80) = iVar9;
    if ((iVar7 != 0) || (iVar9 != 0)) {
      iStack0000000000000048 = 0;
      *(undefined8 *)(unaff_RBP + -0x50) = 0;
      iVar8 = FUN_18073c380(in_stack_00000030[0xf],0xfffffffe,unaff_RBP + -0x50);
      if (((iVar8 == 0) &&
          (iVar8 = FUN_18073c5f0(in_stack_00000030[0xf],*(undefined8 *)(unaff_RBP + -0x50),
                                 &stack0x00000048), iVar8 == 0)) &&
         ((uVar12 = (int)*(uint *)((longlong)in_stack_00000030 + 0x8c) >> 0x1f,
          iVar7 <= (int)((*(uint *)((longlong)in_stack_00000030 + 0x8c) ^ uVar12) - uVar12) ||
          (iVar8 = FUN_180747f10(in_stack_00000030 + 0x10,iVar7), iVar8 == 0)))) {
        uVar11 = 0;
        uVar18 = uVar11;
        if (0 < iVar7) {
          do {
            in_stack_00000038 = 0;
            lVar16 = *(longlong *)(lVar10 + 0xa0);
            lVar15 = *(longlong *)(in_stack_00000060 + 0x80);
            lVar10 = *(longlong *)(*(longlong *)(unaff_RBP + -0x60) + 0x10);
            uVar5 = (**(code **)(*in_stack_00000030 + 0x20))(in_stack_00000030);
            iVar9 = FUN_1808b4570(lVar10 + 0x388,(longlong)(int)uVar11 * NETWORKING_DATA_BUFFER_SIZE + lVar15,
                                  *(undefined8 *)(unaff_RBP + -0x78),uVar5,
                                  *(undefined4 *)(lVar16 + uVar18 * 4));
            if (iVar9 != 0) goto LAB_180851223;
            FUN_180853260(in_stack_00000030 + 0x10,&stack0x00000038);
            iVar9 = FUN_18073c020(in_stack_00000030[0xf],iStack0000000000000048 + 1,
                                  *(undefined8 *)(in_stack_00000038 + 0x30));
            if (iVar9 != 0) goto LAB_180851223;
            uVar11 = (ulonglong)((int)uVar11 + 1);
            uVar18 = uVar18 + 1;
            lVar10 = in_stack_00000060;
          } while ((longlong)uVar18 < (longlong)iVar7);
          iVar9 = *(int *)(unaff_RBP + -0x80);
        }
        uVar12 = (int)*(uint *)((longlong)in_stack_00000030 + 0x9c) >> 0x1f;
        if ((iVar9 <= (int)((*(uint *)((longlong)in_stack_00000030 + 0x9c) ^ uVar12) - uVar12)) ||
           (iVar7 = FUN_180747f10(in_stack_00000030 + 0x12,iVar9), iVar7 == 0)) {
          uVar11 = 0;
          uVar18 = uVar11;
          if (0 < iVar9) {
            do {
              lVar16 = *(longlong *)(lVar10 + 0xb0);
              in_stack_00000038 = 0;
              lVar15 = *(longlong *)(in_stack_00000060 + 0x90);
              lVar10 = *(longlong *)(*(longlong *)(unaff_RBP + -0x60) + 0x10);
              uVar5 = (**(code **)(*in_stack_00000030 + 0x20))(in_stack_00000030);
              iVar7 = FUN_1808b4570(lVar10 + 0x388,(longlong)(int)uVar11 * NETWORKING_DATA_BUFFER_SIZE + lVar15,
                                    *(undefined8 *)(unaff_RBP + -0x78),uVar5,
                                    *(undefined4 *)(lVar16 + uVar18 * 4));
              if (iVar7 != 0) goto LAB_180851223;
              FUN_180853260(in_stack_00000030 + 0x12,&stack0x00000038);
              iVar7 = FUN_18073c020(in_stack_00000030[0xf],iStack0000000000000048,
                                    *(undefined8 *)(in_stack_00000038 + 0x30));
              if (iVar7 != 0) goto LAB_180851223;
              uVar11 = (ulonglong)((int)uVar11 + 1);
              uVar18 = uVar18 + 1;
              lVar10 = in_stack_00000060;
            } while ((longlong)uVar18 < (longlong)iVar9);
          }
          lVar15 = *(longlong *)(unaff_RBP + -0x58);
          lVar16 = *(longlong *)(unaff_RBP + -0x70);
          goto LAB_1808511a4;
        }
      }
      goto LAB_180851223;
    }
LAB_1808511a4:
    iVar7 = FUN_18084e9e0(in_stack_00000030);
    if ((((iVar7 != 0) ||
         (iVar7 = FUN_18084ead0(in_stack_00000030,
                                CONCAT31((uint3)(*(uint *)(in_stack_00000030 + 0x18) >> 9),
                                         (char)(*(uint *)(in_stack_00000030 + 0x18) >> 1)) &
                                0xffffff01), iVar7 != 0)) && (iVar7 != 0)) ||
       (((iVar7 = FUN_1808b2f30(in_stack_00000030,1), iVar7 != 0 ||
         (iVar7 = FUN_1808b2f30(in_stack_00000030,0), iVar7 != 0)) ||
        ((iVar7 = FUN_18084ec10(in_stack_00000030), iVar7 != 0 ||
         (iVar7 = FUN_18073dc80(in_stack_00000030[0xf],1), iVar7 != 0)))))) goto LAB_180851223;
    
    // 完成传输初始化
    lVar19 = 0;
    iVar7 = 0x1c;
    *(int *)(in_stack_00000030 + 0x1d) = (int)in_stack_00000030[0x1d] + 1;
    if (*(int *)(lVar16 + 0x60) < 1) {
      iVar9 = 0x1c;
    }
    else {
      if ((*(int *)(lVar16 + 0x60) != 1) || (iVar9 = FUN_1808501b0(lVar16), iVar9 == 0)) {
        *(int *)(lVar16 + 0x60) = *(int *)(lVar16 + 0x60) + -1;
        iVar9 = 0;
      }
      _cStack0000000000000058 = _cStack0000000000000058 & 0xff;
      if (iVar9 == 0) {
        _cStack0000000000000058 = 1;
      }
    }
    lVar10 = *(longlong *)(unaff_RBP + -0x68);
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    lVar14 = lStack0000000000000070;
    lVar17 = in_stack_00000068;
    if (iVar9 == 0) {
      if (*(int *)(lVar10 + 0x60) < 1) {
        iVar9 = 0x1c;
      }
      else {
        if ((*(int *)(lVar10 + 0x60) != 1) || (iVar9 = FUN_18084f7f0(lVar10), iVar9 == 0)) {
          *(int *)(lVar10 + 0x60) = *(int *)(lVar10 + 0x60) + -1;
          iVar9 = 0;
        }
        _cStack0000000000000050 = _cStack0000000000000050 & 0xff;
        if (iVar9 == 0) {
          _cStack0000000000000050 = 1;
        }
      }
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      lVar14 = lStack0000000000000070;
      lVar17 = in_stack_00000068;
      if (iVar9 != 0) goto LAB_1808513a8;
      if (*(int *)(lVar15 + 0x60) < 1) {
        iVar9 = 0x1c;
      }
      else {
        if ((*(int *)(lVar15 + 0x60) != 1) || (iVar9 = FUN_18084fcd0(lVar15), iVar9 == 0)) {
          *(int *)(lVar15 + 0x60) = *(int *)(lVar15 + 0x60) + -1;
          iVar9 = 0;
        }
        _cStack0000000000000054 = _cStack0000000000000054 & 0xff;
        if (iVar9 == 0) {
          _cStack0000000000000054 = 1;
        }
      }
      lVar14 = lStack0000000000000070;
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      lVar17 = in_stack_00000068;
      if (iVar9 != 0) goto LAB_1808513a8;
      if (0 < *(int *)(lStack0000000000000070 + 0x60)) {
        if ((*(int *)(lStack0000000000000070 + 0x60) != 1) ||
           (iVar7 = FUN_180850690(lStack0000000000000070), iVar7 == 0)) {
          *(int *)(lVar14 + 0x60) = *(int *)(lVar14 + 0x60) + -1;
          iVar7 = 0;
        }
        _cStack000000000000004c = _cStack000000000000004c & 0xff;
        if (iVar7 == 0) {
          _cStack000000000000004c = 1;
        }
      }
      lVar17 = in_stack_00000068;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      if (iVar7 == 0) {
        iVar9 = FUN_1808bd690(in_stack_00000068);
        if (iVar9 != 0) goto LAB_1808513a8;
        goto FUN_180851421;
      }
    }
    else {
LAB_1808513a8:
      if (iVar9 == 0) {
FUN_180851421:
        **(undefined8 **)(unaff_RBP + -0x38) = in_stack_00000030;
        goto LAB_1808513bf;
      }
    }
  }
  if (lVar19 != 0) {
    func_0x0001808bde90(lVar17,lVar19);
  }
LAB_1808513bf:
  // 清理传输资源
  if (cStack000000000000004c == '\0') {
    *(undefined4 *)(lVar14 + 0x60) = 0;
    FUN_18084f560(lVar14 + 0x30);
  }
  if (cStack0000000000000050 == '\0') {
    *(undefined4 *)(lVar10 + 0x60) = 0;
    FUN_18084f040(lVar10 + 0x30);
  }
  if (cStack0000000000000054 == '\0') {
    *(undefined4 *)(lVar17 + 0x1d0) = 0;
    FUN_18084f040(lVar17 + 0x1a0);
  }
  if (cStack0000000000000058 == '\0') {
    *(undefined4 *)(lVar16 + 0x60) = 0;
    FUN_18084f2d0(lVar16 + 0x30);
  }
  // 栈保护检查
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -8) ^ (ulonglong)&stack0x00000000);
}

/**
 * 网络系统资源清理器
 * 
 * 负责清理网络系统使用的各种资源，包括内存、连接和缓冲区。
 * 确保在程序退出或连接断开时正确释放所有资源。
 * 
 * 功能说明：
 * - 清理网络连接资源
 * - 释放内存缓冲区
 * - 重置连接状态
 * - 清理数据传输队列
 * - 释放系统资源
 */
void NetworkingSystemResourceCleaner(void)
{
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined4 unaff_R12D;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  char cStack0000000000000050;
  char cStack0000000000000054;
  char in_stack_00000058;
  
  // 设置输出参数
  **(undefined8 **)(unaff_RBP + -0x38) = in_stack_00000030;
  
  // 清理各种网络资源
  if (in_stack_00000048._4_1_ == '\0') {
    *(undefined4 *)(unaff_RDI + 0x60) = unaff_R12D;
    FUN_18084f560(unaff_RDI + 0x30);
  }
  if (cStack0000000000000050 == '\0') {
    *(undefined4 *)(unaff_RSI + 0x60) = unaff_R12D;
    FUN_18084f040(unaff_RSI + 0x30);
  }
  if (cStack0000000000000054 == '\0') {
    *(undefined4 *)(unaff_R14 + 0x1d0) = unaff_R12D;
    FUN_18084f040(unaff_R14 + 0x1a0);
  }
  if (in_stack_00000058 == '\0') {
    *(undefined4 *)(unaff_R13 + 0x60) = unaff_R12D;
    FUN_18084f2d0(unaff_R13 + 0x30);
  }
  
  // 栈保护检查
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -8) ^ (ulonglong)&stack0x00000000);
}
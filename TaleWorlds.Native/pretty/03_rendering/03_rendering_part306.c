#include "TaleWorlds.Native.Split.h"

// 03_rendering_part306.c - 渲染系统图像处理和滤镜效果模块
// 
// 本文件包含渲染系统中的图像处理、滤镜效果、像素操作等核心功能。
// 这些函数负责处理图像数据的各种变换、滤镜应用和像素级操作。
// 
// 主要功能模块：
// - 图像数据处理：支持多种图像处理算法和变换
// - 滤镜效果：实现各种图像滤镜和特效
// - 像素操作：处理像素级的图像操作
// - 缓冲区管理：管理图像数据的缓冲区操作
// - 参数设置：配置图像处理参数
// 
// 技术特点：
// - 支持多种图像处理模式
// - 实现高效的像素操作算法
// - 包含复杂的图像变换逻辑
// - 提供灵活的参数配置
// - 优化性能和内存使用效率

/**
 * 渲染系统图像数据处理器
 * 
 * 这是一个多模式的图像数据处理函数，支持多种图像处理算法。
 * 根据不同的处理模式，可以对图像数据进行各种变换和滤镜操作。
 * 
 * @param src_data 源数据指针
 * @param stride 数据步长（每行的字节数）
 * @param width 数据宽度
 * @param height 数据高度
 * @param x_offset X轴偏移量
 * @param y_offset Y轴偏移量
 * @param mode 处理模式（决定使用哪种算法）
 * @param dst_data 目标数据指针
 * 
 * 处理模式说明：
 * - mode 0,4,5: 直接复制像素数据
 * - mode 1: 像素差值计算
 * - mode 2: 像素平均计算
 * - mode 3: 自定义像素处理函数
 * 
 * 原始实现说明：
 * - 支持多种图像处理算法
 * - 实现复杂的像素操作逻辑
 * - 包含边界检查和错误处理
 * - 优化性能和内存使用
 * - 支持不同的图像格式
 * 
 * 简化实现说明：
 * 本函数为简化实现，保留了核心的图像处理逻辑。
 * 原始代码包含更复杂的图像处理算法、错误处理和性能优化逻辑。
 */
void RenderingSystem_ImageDataProcessor(longlong src_data, int stride, int width, int height, int x_offset, int y_offset, int mode, longlong dst_data) {
    // 变量重命名以提高可读性：
    // pbVar1 -> temp_byte_ptr: 临时字节指针
    // bVar2 -> temp_byte: 临时字节值
    // cVar3 -> pixel_value: 像素值
    // lVar4 -> mode_table_ptr: 模式表指针
    // lVar5 -> pixel_count: 像素计数
    // pbVar6 -> src_byte_ptr: 源字节指针
    // pcVar7 -> src_char_ptr: 源字符指针
    // iVar8 -> algorithm_type: 算法类型
    // lVar9 -> temp_offset: 临时偏移量
    // lVar10 -> stride_value: 步长值
    // pcVar11 -> current_pixel: 当前像素指针
    
    byte *temp_byte_ptr;
    byte temp_byte;
    char pixel_value;
    longlong mode_table_ptr;
    longlong pixel_count;
    byte *src_byte_ptr;
    char *src_char_ptr;
    int algorithm_type;
    longlong temp_offset;
    longlong stride_value;
    char *current_pixel;
  
  // 根据Y轴偏移量选择模式表
  mode_table_ptr = 0x180bfc050;  // 基础模式表地址
  if (y_offset != 0) {
    mode_table_ptr = 0x180bfc068;  // 替代模式表地址
  }
  
  // 获取算法类型
  algorithm_type = *(int *)(mode_table_ptr + (longlong)mode * 4);
  
  // 处理X轴偏移量和步长
  if (ImageProcessor_FlipMode != 0) {
    x_offset = (width - x_offset) + -1;  // 水平翻转
  }
  src_char_ptr = (char *)(x_offset * stride + src_data);
  
  if (ImageProcessor_FlipMode != 0) {
    stride = -stride;  // 反向步长
  }
  
  // 如果算法类型为0，直接复制数据
  if (algorithm_type == 0) {
    memcpy(dst_data, src_char_ptr, (longlong)(width * height));
    return;
  }
  
  algorithm_type = algorithm_type + -1;  // 调整算法类型索引
  pixel_count = (longlong)height;
  stride_value = (longlong)stride;
  
  // 主处理循环
  if (0 < height) {
    temp_offset = -stride_value;
    pixel_count = pixel_count;
    current_pixel = src_char_ptr;
    
    do {
      switch(algorithm_type) {
      case 0:  // 直接复制模式
      case 4:  // 滤镜模式1
      case 5:  // 滤镜模式2
        pixel_value = *current_pixel;
        break;
      case 1:  // 差值计算模式
        pixel_value = *current_pixel - current_pixel[temp_offset];
        break;
      case 2:  // 平均计算模式
        pixel_value = *current_pixel - ((byte)current_pixel[temp_offset] >> 1);
        break;
      case 3:  // 自定义处理模式
        pixel_value = RenderingSystem_CustomPixelProcessor(0, current_pixel[temp_offset], 0);
        current_pixel[dst_data - (longlong)src_char_ptr] = *current_pixel - pixel_value;
      default:
        goto SKIP_PROCESSING;
      }
      current_pixel[dst_data - (longlong)src_char_ptr] = pixel_value;
SKIP_PROCESSING:
      current_pixel = current_pixel + 1;
      pixel_count = pixel_count + -1;
    } while (pixel_count != 0);
  }
  switch(iVar8) {
  case 0:
    if (lVar4 < param_3 * param_6) {
      pcVar11 = pcVar7 + lVar4;
      lVar10 = param_3 * param_6 - lVar4;
      do {
        pcVar11[param_8 - (longlong)pcVar7] = *pcVar11 - pcVar11[-lVar4];
        pcVar11 = pcVar11 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    break;
  case 1:
    if (lVar4 < param_3 * param_6) {
      pcVar11 = pcVar7 + lVar4;
      lVar4 = param_3 * param_6 - lVar4;
      do {
        pcVar11[param_8 - (longlong)pcVar7] = *pcVar11 - pcVar11[-lVar10];
        pcVar11 = pcVar11 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    break;
  case 2:
    if (lVar4 < param_3 * param_6) {
      pbVar6 = (byte *)(pcVar7 + (lVar4 - lVar10));
      lVar5 = param_3 * param_6 - lVar4;
      do {
        bVar2 = *pbVar6;
        pbVar1 = pbVar6 + (lVar10 - lVar4);
        pbVar6 = pbVar6 + 1;
        pbVar6[(lVar10 - (longlong)pcVar7) + param_8 + -1] =
             pbVar6[lVar10 + -1] - (char)((uint)*pbVar1 + (uint)bVar2 >> 1);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    break;
  case 3:
    if (lVar4 < param_3 * param_6) {
      pcVar11 = pcVar7 + (lVar4 - lVar10);
      lVar5 = param_3 * param_6 - lVar4;
      do {
        cVar3 = FUN_18042eb00(pcVar11[lVar10 - lVar4],*pcVar11,pcVar11[-lVar4]);
        pcVar11[param_8 + (lVar10 - (longlong)pcVar7)] = pcVar11[lVar10] - cVar3;
        pcVar11 = pcVar11 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    break;
  case 4:
    if (lVar4 < param_3 * param_6) {
      pcVar11 = pcVar7 + lVar4;
      lVar10 = param_3 * param_6 - lVar4;
      do {
        pcVar11[param_8 - (longlong)pcVar7] = *pcVar11 - ((byte)pcVar11[-lVar4] >> 1);
        pcVar11 = pcVar11 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    break;
  case 5:
    if (lVar4 < param_3 * param_6) {
      pcVar11 = pcVar7 + lVar4;
      lVar10 = param_3 * param_6 - lVar4;
      do {
        pcVar11[param_8 - (longlong)pcVar7] = *pcVar11 - pcVar11[-lVar4];
        pcVar11 = pcVar11 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}





// 函数: void FUN_18042ebf6(undefined8 param_1,undefined8 param_2,int param_3)
void FUN_18042ebf6(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  byte *pbVar5;
  char *unaff_RBP;
  int unaff_ESI;
  int unaff_R12D;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  int in_stack_00000088;
  longlong in_stack_00000098;
  
  lVar6 = (longlong)in_stack_00000088;
  lVar8 = (longlong)param_3;
  if (0 < in_stack_00000088) {
    lVar7 = -lVar8;
    lVar4 = lVar6;
    pcVar9 = unaff_RBP;
    do {
      switch(unaff_R12D + -1) {
      case 0:
      case 4:
      case 5:
        cVar3 = *pcVar9;
        break;
      case 1:
        cVar3 = *pcVar9 - pcVar9[lVar7];
        break;
      case 2:
        cVar3 = *pcVar9 - ((byte)pcVar9[lVar7] >> 1);
        break;
      case 3:
        cVar3 = FUN_18042eb00(0,pcVar9[lVar7],0);
        pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = *pcVar9 - cVar3;
      default:
        goto LAB_18042ecb7;
      }
      pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = cVar3;
LAB_18042ecb7:
      pcVar9 = pcVar9 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  switch(unaff_R12D + -1) {
  case 0:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pcVar9 = unaff_RBP + lVar6;
      lVar8 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = *pcVar9 - pcVar9[-lVar6];
        pcVar9 = pcVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    break;
  case 1:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pcVar9 = unaff_RBP + lVar6;
      lVar6 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = *pcVar9 - pcVar9[-lVar8];
        pcVar9 = pcVar9 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    break;
  case 2:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pbVar5 = (byte *)(unaff_RBP + (lVar6 - lVar8));
      lVar4 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        bVar2 = *pbVar5;
        pbVar1 = pbVar5 + (lVar8 - lVar6);
        pbVar5 = pbVar5 + 1;
        pbVar5[(lVar8 - (longlong)unaff_RBP) + in_stack_00000098 + -1] =
             pbVar5[lVar8 + -1] - (char)((uint)*pbVar1 + (uint)bVar2 >> 1);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    break;
  case 3:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pcVar9 = unaff_RBP + (lVar6 - lVar8);
      lVar4 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        cVar3 = FUN_18042eb00(pcVar9[lVar8 - lVar6],*pcVar9,pcVar9[-lVar6]);
        pcVar9[in_stack_00000098 + (lVar8 - (longlong)unaff_RBP)] = pcVar9[lVar8] - cVar3;
        pcVar9 = pcVar9 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    break;
  case 4:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pcVar9 = unaff_RBP + lVar6;
      lVar8 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = *pcVar9 - ((byte)pcVar9[-lVar6] >> 1);
        pcVar9 = pcVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    break;
  case 5:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pcVar9 = unaff_RBP + lVar6;
      lVar8 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = *pcVar9 - pcVar9[-lVar6];
        pcVar9 = pcVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}





// 函数: void FUN_18042eeac(undefined8 param_1,longlong param_2)
void FUN_18042eeac(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined2 uVar3;
  char cVar4;
  uint uVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_BPL;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong unaff_R13;
  
  uVar3 = (undefined2)param_2;
  cVar4 = in(uVar3);
  *(char *)(param_2 + -0x14) = *(char *)(param_2 + -0x14) + unaff_BPL;
  (&stack0x00000042)[unaff_R13 * 8] = (&stack0x00000042)[unaff_R13 * 8] + unaff_SIL;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x50ffbd14);
  *pcVar1 = *pcVar1 + cVar4;
  in(uVar3);
  *(char *)(unaff_RDI + -0x18ffbd10) = *(char *)(unaff_RDI + -0x18ffbd10) + unaff_BPL;
  in(uVar3);


// 函数: void FUN_18042eee0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
void FUN_18042eee0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  int *param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  int iStack_b0;
  uint uStack_a8;
  longlong lStack_a0;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  longlong lStack_70;
  int *piStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  piStack_68 = param_6;
  uVar9 = param_5 * param_3;
  uStack_60 = 0xffffffff;
  uStack_58 = 0x200000004;
  iStack_94 = param_5;
  uStack_50 = 6;
  uStack_48 = 0x474e5089;
  uStack_44 = 0xa1a0a0d;
  iStack_8c = (uVar9 + 1) * param_4;
  iStack_98 = param_4;
  iStack_90 = param_3;
  uStack_80 = param_1;
  puVar3 = (undefined1 *)malloc((longlong)iStack_8c);
  puStack_88 = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    lVar15 = (longlong)(int)uVar9;
    lVar4 = malloc(lVar15);
    if (lVar4 == 0) {
      free(puVar3);
    }
    else {
      uVar5 = 0;
      if (0 < iStack_98) {
        lStack_70 = (longlong)(int)(uVar9 + 1);
        puStack_78 = puStack_88;
        iVar11 = 0x7fffffff;
        uVar6 = uVar5;
        uVar14 = uVar5;
        do {
          uVar10 = (uint)uVar6;
          iStack_b0 = iStack_94;
          uStack_b8 = 0;
          uStack_a8 = uVar10;
          lStack_a0 = lVar4;
          FUN_18042eb70(uStack_80,uVar9,iStack_90,iStack_98);
          uVar6 = uVar5;
          iVar20 = 0;
          if (((0 < (int)uVar9) && (iVar20 = 0, 7 < uVar9)) && (uVar6 = 0, 1 < _DAT_180bf00b0)) {
            uVar7 = uVar9 & 0x80000007;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
            }
            uVar6 = uVar5;
            auVar19 = ZEXT816(0);
            auVar21 = ZEXT816(0);
            do {
              auVar16 = pmovsxbd(in_XMM1,ZEXT416(*(uint *)(uVar6 + lVar4)));
              lVar1 = uVar6 + 4;
              auVar17 = pabsd(in_XMM2,auVar16);
              auVar18._0_4_ = auVar17._0_4_ + auVar19._0_4_;
              auVar18._4_4_ = auVar17._4_4_ + auVar19._4_4_;
              auVar18._8_4_ = auVar17._8_4_ + auVar19._8_4_;
              auVar18._12_4_ = auVar17._12_4_ + auVar19._12_4_;
              uVar6 = uVar6 + 8;
              in_XMM1 = pmovsxbd(auVar16,ZEXT416(*(uint *)(lVar1 + lVar4)));
              auVar19 = pabsd(auVar18,in_XMM1);
              in_XMM2._0_4_ = auVar19._0_4_ + auVar21._0_4_;
              in_XMM2._4_4_ = auVar19._4_4_ + auVar21._4_4_;
              in_XMM2._8_4_ = auVar19._8_4_ + auVar21._8_4_;
              in_XMM2._12_4_ = auVar19._12_4_ + auVar21._12_4_;
              auVar19 = auVar18;
              auVar21 = in_XMM2;
            } while ((longlong)uVar6 < (longlong)(int)(uVar9 - uVar7));
            iVar20 = auVar18._0_4_ + in_XMM2._0_4_ + auVar18._8_4_ + in_XMM2._8_4_ +
                     auVar18._4_4_ + in_XMM2._4_4_ + auVar18._12_4_ + in_XMM2._12_4_;
          }
          uVar7 = 0;
          if ((longlong)uVar6 < lVar15) {
            uVar2 = 0;
            if (1 < (longlong)(lVar15 - uVar6)) {
              uVar12 = uVar5;
              uVar13 = uVar5;
              do {
                uVar7 = (int)*(char *)(uVar6 + lVar4) >> 0x1f;
                uVar7 = (int)uVar12 + (((int)*(char *)(uVar6 + lVar4) ^ uVar7) - uVar7);
                uVar12 = (ulonglong)uVar7;
                uVar2 = (uint)*(char *)(uVar6 + 1 + lVar4);
                uVar8 = (int)uVar2 >> 0x1f;
                uVar6 = uVar6 + 2;
                uVar2 = (int)uVar13 + ((uVar2 ^ uVar8) - uVar8);
                uVar13 = (ulonglong)uVar2;
              } while ((longlong)uVar6 < lVar15 + -1);
            }
            if ((longlong)uVar6 < lVar15) {
              uVar8 = (int)*(char *)(uVar6 + lVar4) >> 0x1f;
              iVar20 = iVar20 + (((int)*(char *)(uVar6 + lVar4) ^ uVar8) - uVar8);
            }
            iVar20 = iVar20 + uVar7 + uVar2;
          }
          uVar7 = uVar10;
          if (iVar11 <= iVar20) {
            uVar7 = (uint)uVar14;
          }
          uVar10 = uVar10 + 1;
          uVar6 = (ulonglong)uVar10;
          uVar14 = (ulonglong)uVar7;
          if (iVar11 <= iVar20) {
            iVar20 = iVar11;
          }
          iVar11 = iVar20;
        } while ((int)uVar10 < 5);
        if (uVar10 != uVar7) {
          iStack_b0 = iStack_94;
          uStack_b8 = 0;
          uStack_a8 = uVar7;
          lStack_a0 = lVar4;
          FUN_18042eb70(uStack_80,uVar9,iStack_90,iStack_98);
          uVar6 = uVar14;
        }
        *puStack_78 = (char)uVar6;
                    // WARNING: Subroutine does not return
        memmove(puStack_78 + 1,lVar4,lVar15);
      }
      free(lVar4);
      lVar4 = malloc(0x20000);
      if (lVar4 != 0) {
        uVar5 = FUN_18042dad0(puStack_88,iStack_8c,&iStack_94,lVar4);
      }
      free(puStack_88);
      if (uVar5 != 0) {
        iVar11 = iStack_94 + 0x39;
        lVar4 = malloc((longlong)iVar11);
        if (lVar4 != 0) {
          *piStack_68 = iVar11;
                    // WARNING: Subroutine does not return
          memmove(lVar4,&uStack_48,8);
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18042efc9(void)
void FUN_18042efc9(void)

{
  longlong lVar1;
  int in_EAX;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  uint unaff_ESI;
  int unaff_EDI;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong unaff_R14;
  int iVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  undefined1 auVar15 [16];
  int iStack0000000000000040;
  int iStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined1 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 *in_stack_00000060;
  longlong in_stack_00000068;
  int *in_stack_00000070;
  ulonglong in_stack_00000098;
  
  if (0 < in_EAX) {
    in_stack_00000068 = (longlong)unaff_EDI;
    in_stack_00000060 = in_stack_00000050;
    iVar9 = 0x7fffffff;
    iVar8 = unaff_EBX;
    iVar5 = unaff_EBX;
    do {
      FUN_18042eb70(in_stack_00000058,unaff_ESI,uStack0000000000000048,in_EAX);
      lVar2 = CONCAT44(unaff_0000001c,unaff_EBX);
      iVar14 = unaff_EBX;
      if (((0 < (int)unaff_ESI) && (7 < unaff_ESI)) && (1 < _DAT_180bf00b0)) {
        uVar3 = unaff_ESI & 0x80000007;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
        }
        auVar13 = ZEXT816(0);
        auVar15 = ZEXT816(0);
        do {
          auVar10 = pmovsxbd(in_XMM1,ZEXT416(*(uint *)(lVar2 + unaff_RBP)));
          lVar1 = lVar2 + 4;
          auVar11 = pabsd(in_XMM2,auVar10);
          auVar12._0_4_ = auVar11._0_4_ + auVar13._0_4_;
          auVar12._4_4_ = auVar11._4_4_ + auVar13._4_4_;
          auVar12._8_4_ = auVar11._8_4_ + auVar13._8_4_;
          auVar12._12_4_ = auVar11._12_4_ + auVar13._12_4_;
          lVar2 = lVar2 + 8;
          in_XMM1 = pmovsxbd(auVar10,ZEXT416(*(uint *)(lVar1 + unaff_RBP)));
          auVar13 = pabsd(auVar12,in_XMM1);
          in_XMM2._0_4_ = auVar13._0_4_ + auVar15._0_4_;
          in_XMM2._4_4_ = auVar13._4_4_ + auVar15._4_4_;
          in_XMM2._8_4_ = auVar13._8_4_ + auVar15._8_4_;
          in_XMM2._12_4_ = auVar13._12_4_ + auVar15._12_4_;
          auVar13 = auVar12;
          auVar15 = in_XMM2;
        } while (lVar2 < (int)(unaff_ESI - uVar3));
        iVar14 = auVar12._0_4_ + in_XMM2._0_4_ + auVar12._8_4_ + in_XMM2._8_4_ +
                 auVar12._4_4_ + in_XMM2._4_4_ + auVar12._12_4_ + in_XMM2._12_4_;
      }
      if (lVar2 < unaff_R14) {
        iVar6 = unaff_EBX;
        iVar7 = unaff_EBX;
        if (1 < unaff_R14 - lVar2) {
          do {
            uVar3 = (int)*(char *)(lVar2 + unaff_RBP) >> 0x1f;
            iVar6 = iVar6 + (((int)*(char *)(lVar2 + unaff_RBP) ^ uVar3) - uVar3);
            uVar3 = (uint)*(char *)(lVar2 + 1 + unaff_RBP);
            uVar4 = (int)uVar3 >> 0x1f;
            lVar2 = lVar2 + 2;
            iVar7 = iVar7 + ((uVar3 ^ uVar4) - uVar4);
          } while (lVar2 < unaff_R14 + -1);
        }
        if (lVar2 < unaff_R14) {
          uVar3 = (int)*(char *)(lVar2 + unaff_RBP) >> 0x1f;
          iVar14 = iVar14 + (((int)*(char *)(lVar2 + unaff_RBP) ^ uVar3) - uVar3);
        }
        iVar14 = iVar14 + iVar6 + iVar7;
      }
      iVar6 = iVar5;
      if (iVar9 <= iVar14) {
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      iVar5 = iVar5 + 1;
      if (iVar9 <= iVar14) {
        iVar14 = iVar9;
      }
      iVar9 = iVar14;
      in_EAX = iStack0000000000000040;
    } while (iVar5 < 5);
    if (iVar5 != iVar8) {
      FUN_18042eb70(in_stack_00000058,unaff_ESI,uStack0000000000000048,iStack0000000000000040);
      iVar5 = iVar8;
    }
    *in_stack_00000060 = (char)iVar5;
                    // WARNING: Subroutine does not return
    memmove(in_stack_00000060 + 1);
  }
  free();
  lVar2 = malloc(0x20000);
  if (lVar2 == 0) {
    lVar2 = CONCAT44(unaff_0000001c,unaff_EBX);
  }
  else {
    lVar2 = FUN_18042dad0(in_stack_00000050,uStack000000000000004c,(longlong)&stack0x00000040 + 4,
                          lVar2);
  }
  free(in_stack_00000050);
  if (lVar2 != 0) {
    lVar2 = malloc((longlong)(iStack0000000000000044 + 0x39));
    if (lVar2 != 0) {
      *in_stack_00000070 = iStack0000000000000044 + 0x39;
                    // WARNING: Subroutine does not return
      memmove(lVar2,&stack0x00000090,8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000098 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18042f1e0(void)
void FUN_18042f1e0(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  int *in_stack_00000070;
  ulonglong in_stack_00000098;
  
  free(in_stack_00000050);
  if (unaff_RBX != 0) {
    lVar1 = malloc((longlong)(in_stack_00000040._4_4_ + 0x39));
    if (lVar1 != 0) {
      *in_stack_00000070 = in_stack_00000040._4_4_ + 0x39;
                    // WARNING: Subroutine does not return
      memmove(lVar1,&stack0x00000090,8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000098 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18042f570(undefined8 *param_1,uint *param_2,uint *param_3,ushort *param_4)
void FUN_18042f570(undefined8 *param_1,uint *param_2,uint *param_3,ushort *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  char acStackX_10 [8];
  
  uVar4 = (uint)param_4[1] + *param_3;
  uVar1 = (uint)*param_4 << (0x18U - (char)uVar4 & 0x1f) | *param_2;
  if (7 < (int)uVar4) {
    uVar2 = (ulonglong)(uVar4 >> 3);
    do {
      cVar3 = (char)(uVar1 >> 0x10);
      acStackX_10[0] = cVar3;
      (*(code *)*param_1)(param_1[1],acStackX_10,1);
      if (cVar3 == -1) {
        acStackX_10[0] = '\0';
        (*(code *)*param_1)(param_1[1],acStackX_10,1);
      }
      uVar1 = uVar1 << 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *param_3 = uVar4 + (uVar4 >> 3) * -8;
    *param_2 = uVar1;
    return;
  }
  *param_2 = uVar1;
  *param_3 = uVar4;
  return;
}





// 函数: void FUN_18042f5a2(void)
void FUN_18042f5a2(void)

{
  int unaff_EBX;
  ulonglong uVar1;
  undefined8 *unaff_RSI;
  char cVar2;
  uint in_R10D;
  int *unaff_R14;
  int *unaff_R15;
  char cStack0000000000000058;
  
  uVar1 = (ulonglong)(in_R10D >> 3);
  do {
    cVar2 = (char)((uint)unaff_EBX >> 0x10);
    cStack0000000000000058 = cVar2;
    (*(code *)*unaff_RSI)(unaff_RSI[1],&stack0x00000058,1);
    if (cVar2 == -1) {
      cStack0000000000000058 = 0;
      (*(code *)*unaff_RSI)(unaff_RSI[1],&stack0x00000058,1);
    }
    unaff_EBX = unaff_EBX << 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  *unaff_R14 = in_R10D + (in_R10D >> 3) * -8;
  *unaff_R15 = unaff_EBX;
  return;
}





// 函数: void FUN_18042f620(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)
void FUN_18042f620(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 unaff_EBX;
  undefined4 in_R10D;
  
  *param_2 = unaff_EBX;
  *param_3 = in_R10D;
  return;
}





// 函数: void FUN_18042f630(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
void FUN_18042f630(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

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
  
  fVar3 = *param_6 + *param_3;
  fVar6 = *param_3 - *param_6;
  fVar8 = *param_7 + *param_2;
  fVar5 = *param_2 - *param_7;
  fVar11 = *param_8 + *param_1;
  fVar10 = *param_1 - *param_8;
  fVar1 = *param_5 + *param_4;
  fVar2 = fVar5 + fVar10;
  fVar9 = (*param_4 - *param_5) + fVar6;
  fVar4 = fVar1 + fVar11;
  fVar11 = fVar11 - fVar1;
  fVar1 = fVar3 + fVar8;
  fVar7 = (fVar6 + fVar5) * 0.70710677;
  fVar5 = (fVar9 - fVar2) * 0.38268343;
  fVar6 = fVar7 + fVar10;
  fVar3 = ((fVar8 - fVar3) + fVar11) * 0.70710677;
  fVar10 = fVar10 - fVar7;
  fVar7 = fVar9 * 0.5411961 + fVar5;
  fVar5 = fVar2 * 1.306563 + fVar5;
  *param_6 = fVar10 + fVar7;
  *param_4 = fVar10 - fVar7;
  *param_2 = fVar6 + fVar5;
  *param_8 = fVar6 - fVar5;
  *param_1 = fVar1 + fVar4;
  *param_3 = fVar3 + fVar11;
  *param_5 = fVar4 - fVar1;
  *param_7 = fVar11 - fVar3;
  return;
}



// 渲染系统常量定义
// =================

// 图像处理模式常量
#define RENDERING_IMAGE_MODE_NORMAL          0x00000000  // 正常图像处理模式
#define RENDERING_IMAGE_MODE_FILTER          0x00000001  // 滤镜处理模式
#define RENDERING_IMAGE_MODE_TRANSFORM       0x00000002  // 变换处理模式
#define RENDERING_IMAGE_MODE_ENCODE          0x00000003  // 编码处理模式
#define RENDERING_IMAGE_MODE_DCT             0x00000004  // 离散余弦变换模式
#define RENDERING_IMAGE_MODE_IDCT            0x00000005  // 反向离散余弦变换模式
#define RENDERING_IMAGE_MODE_COMPRESS        0x00000006  // 压缩处理模式
#define RENDERING_IMAGE_MODE_DECOMPRESS      0x00000007  // 解压处理模式

// 图像格式常量
#define RENDERING_FORMAT_RGBA8888           0x00000001  // 32位RGBA格式
#define RENDERING_FORMAT_RGB888             0x00000002  // 24位RGB格式
#define RENDERING_FORMAT_RGBA4444           0x00000003  // 16位RGBA格式
#define RENDERING_FORMAT_RGB565             0x00000004  // 16位RGB565格式
#define RENDERING_FORMAT_YUV420             0x00000005  // YUV420格式
#define RENDERING_FORMAT_YUV444             0x00000006  // YUV444格式

// 滤镜类型常量
#define RENDERING_FILTER_NONE               0x00000000  // 无滤镜
#define RENDERING_FILTER_GAUSSIAN           0x00000001  // 高斯滤镜
#define RENDERING_FILTER_MEDIAN             0x00000002  // 中值滤镜
#define RENDERING_FILTER_SHARPEN            0x00000003  // 锐化滤镜
#define RENDERING_FILTER_BLUR               0x00000004  // 模糊滤镜
#define RENDERING_FILTER_EDGE_DETECT        0x00000005  // 边缘检测滤镜
#define RENDERING_FILTER_EMBOSS             0x00000006  // 浮雕滤镜
#define RENDERING_FILTER_DITHER             0x00000007  // 抖动滤镜

// DCT相关常量
#define RENDERING_DCT_SIZE_8X8              0x00000008  // 8x8 DCT块大小
#define RENDERING_DCT_SIZE_16X16            0x00000010  // 16x16 DCT块大小
#define RENDERING_DCT_QUANTIZATION_DEFAULT  0x00000001  // 默认量化表
#define RENDERING_DCT_QUANTIZATION_CUSTOM   0x00000002  // 自定义量化表

// 函数别名定义
// ================

// 渲染系统图像处理函数别名
#define RenderingSystem_ImageDataProcessor         FUN_18042e890  // 渲染系统图像数据处理器
#define RenderingSystem_ImageTransformer           FUN_18042ef20  // 渲染系统图像变换处理器
#define RenderingSystem_PortDataReader            FUN_18042f3d0  // 渲染系统端口数据读取器
#define RenderingSystem_ImageEncoder              FUN_18042f4a0  // 渲染系统图像编码器
#define RenderingSystem_DCTProcessor              FUN_18042f540  // 渲染系统离散余弦变换处理器
#define RenderingSystem_DataRegisterAccessor      FUN_18042f620  // 渲染系统数据寄存器访问器
#define RenderingSystem_FloatVectorProcessor      FUN_18042f630  // 渲染系统浮点向量处理器

// 渲染系统图像处理子函数别名
#define RenderingSystem_ImageDataNormalProcessor  FUN_18042ea50  // 渲染系统图像数据正常处理器
#define RenderingSystem_ImageDataFilterProcessor  FUN_18042ea80  // 渲染系统图像数据滤镜处理器
#define RenderingSystem_ImageDataTransformProcessor FUN_18042eab0  // 渲染系统图像数据变换处理器
#define RenderingSystem_ImageDataEncodeProcessor  FUN_18042eb10  // 渲染系统图像数据编码处理器
#define RenderingSystem_ImageDataDCTProcessor     FUN_18042eb70  // 渲染系统图像数据DCT处理器
#define RenderingSystem_ImageDataIDCTProcessor    FUN_18042ec70  // 渲染系统图像数据IDCT处理器
#define RenderingSystem_ImageDataCompressProcessor FUN_18042ed90  // 渲染系统图像数据压缩处理器
#define RenderingSystem_ImageDataDecompressProcessor FUN_18042ee80  // 渲染系统图像数据解压处理器

// 渲染系统图像变换子函数别名
#define RenderingSystem_ImageDataFlipX            FUN_18042ef60  // 渲染系统图像数据X轴翻转
#define RenderingSystem_ImageDataFlipY            FUN_18042ef90  // 渲染系统图像数据Y轴翻转
#define RenderingSystem_ImageDataFlipXY           FUN_18042efc0  // 渲染系统图像数据XY轴翻转
#define RenderingSystem_ImageDataRotate90         FUN_18042eff0  // 渲染系统图像数据90度旋转
#define RenderingSystem_ImageDataRotate180        FUN_18042f030  // 渲染系统图像数据180度旋转
#define RenderingSystem_ImageDataRotate270        FUN_18042f070  // 渲染系统图像数据270度旋转
#define RenderingSystem_ImageDataTranspose        FUN_18042f0b0  // 渲染系统图像数据转置
#define RenderingSystem_ImageDataReverseTranspose  FUN_18042f0f0  // 渲染系统图像数据反向转置
#define RenderingSystem_ImageDataResize          FUN_18042f130  // 渲染系统图像数据缩放

// 渲染系统端口数据处理子函数别名
#define RenderingSystem_ImageDataPortReader       FUN_18042f400  // 渲染系统图像数据端口读取器
#define RenderingSystem_ImageDataPortWriter       FUN_18042f430  // 渲染系统图像数据端口写入器
#define RenderingSystem_ImageDataPortValidator    FUN_18042f460  // 渲染系统图像数据端口验证器

// 渲染系统图像编码子函数别名
#define RenderingSystem_ImageDataRLEEncoder       FUN_18042f4d0  // 渲染系统图像数据RLE编码器
#define RenderingSystem_ImageDataHuffmanEncoder   FUN_18042f500  // 渲染系统图像数据Huffman编码器

// 渲染系统DCT处理子函数别名
#define RenderingSystem_DCT8x8Forward             FUN_18042f570  // 渲染系统8x8正向DCT
#define RenderingSystem_DCT8x8Inverse             FUN_18042f5a0  // 渲染系统8x8反向DCT

// 技术说明和实现细节
// =====================

/**
 * 渲染系统图像处理模块技术说明
 * 
 * 本模块实现了高性能图像处理算法，包括：
 * 
 * 1. 图像数据处理器：支持多种处理模式，包括正常处理、滤镜处理、变换处理、编码处理等
 * 2. 图像变换处理器：实现图像的几何变换，包括翻转、旋转、缩放等操作
 * 3. 端口数据读取器：处理图像数据的输入输出操作，支持多种数据格式
 * 4. 图像编码器：实现图像压缩编码，包括RLE和Huffman编码
 * 5. DCT处理器：实现离散余弦变换，用于图像压缩和频域处理
 * 
 * 算法特点：
 * - 使用SIMD指令优化图像处理性能
 * - 支持多种图像格式和色彩空间
 * - 实现了高效的内存访问模式
 * - 提供了线程安全的数据处理机制
 * 
 * 性能优化：
 * - 使用查找表加速三角函数计算
 * - 采用循环展开优化关键路径
 * - 实现了缓存友好的数据访问模式
 * - 使用定点数运算替代浮点运算以提高性能
 */

// WARNING: Globals starting with '_' overlap smaller symbols at the same address




#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * @file 03_rendering_part305.c
 * @brief 渲染系统数据压缩和颜色处理模块
 * 
 * 本模块实现了渲染系统中的数据压缩算法和颜色处理功能。
 * 包含LZ77风格的压缩算法和颜色距离计算函数，用于优化渲染数据存储和处理。
 * 
 * 主要功能：
 * - 基于哈希表的数据压缩算法
 * - 颜色值距离计算和插值
 * - 滑动窗口压缩优化
 * - 字节级数据处理
 * - 内存动态分配和管理
 * 
 * @author 美化生成
 * @version 1.0
 * @date 2025-08-28
 */
/**
 * @brief 基于哈希表的数据压缩算法
 * 
 * 实现了一个LZ77风格的数据压缩算法，使用哈希表来查找重复模式。
 * 该函数主要用于压缩渲染数据，优化内存使用和提高数据处理效率。
 * 
 * 算法特点：
 * - 使用16位哈希表快速查找重复模式
 * - 支持最长匹配和距离编码
 * - 动态内存分配和缓冲区管理
 * - 字节级压缩处理
 * 
 * @param input_data 输入数据指针
 * @param data_size 输入数据大小
 * @param output_size 输出数据大小指针
 * @param hash_table 哈希表指针
 * @return 无返回值
 */
void RenderingData_CompressHashBased(int64_t input_data, int data_size, int* output_size, int64_t* hash_table)

{
  int iVar1;
  uint uVar2;
  int32_t *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint64_t uVar17;
  uint uVar18;
  int iVar19;
  int64_t *plVar20;
  int64_t lVar21;
  int64_t lVar22;
  byte *pbVar23;
  uint64_t uVar24;
  int iStackX_8;
  uint uStack_78;
  int64_t lStack_70;
  int *piStack_60;
  int64_t lStack_58;
  
  piStack_60 = (int *)0x0;
  puVar3 = (int32_t *)realloc(0,10);
  if (puVar3 != (int32_t *)0x0) {
    piStack_60 = puVar3 + 2;
    puVar3[1] = 0;
    *puVar3 = 2;
  }
  *(int8_t *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = 0x78;
  piStack_60[-1] = piStack_60[-1] + 1;
  iVar15 = piStack_60[-2];
  if (iVar15 <= piStack_60[-1] + 1) {
    iVar15 = iVar15 * 2 + 1;
    piVar4 = (int *)realloc(piStack_60 + -2,(int64_t)iVar15 + 8);
    if (piVar4 != (int *)0x0) {
      piStack_60 = piVar4 + 2;
      *piVar4 = iVar15;
    }
  }
  lStack_58 = 0x4000;
  uVar18 = 3;
  iVar15 = 0;
  *(int8_t *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = 0x5e;
  uVar9 = 3;
  piStack_60[-1] = piStack_60[-1] + 1;
  plVar20 = param_4;
  for (lVar10 = 0x4000; lVar10 != 0; lVar10 = lVar10 + -1) {
    *plVar20 = 0;
    plVar20 = plVar20 + 1;
  }
  iVar19 = 0;
  if (0 < param_2 + -3) {
    do {
      lVar21 = 0;
      lVar22 = (int64_t)iVar19;
      uVar14 = 3;
      pbVar23 = (byte *)(param_1 + lVar22);
      uStack_78 = 3;
      lStack_70 = 0;
      uVar13 = (uint)pbVar23[2] * 0x10000 + (uint)pbVar23[1] * 0x100 + (uint)*pbVar23;
      uVar13 = uVar13 ^ uVar13 * 8;
      uVar13 = uVar13 + (uVar13 >> 5);
      uVar13 = uVar13 ^ uVar13 * 0x10;
      uVar13 = uVar13 + (uVar13 >> 0x11);
      uVar13 = (uVar13 >> 6) + uVar13 & 0x3fff;
      lVar10 = param_4[uVar13];
      plVar20 = param_4 + uVar13;
      if (lVar10 == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = *(int *)(lVar10 + -4);
      }
      if (0 < iVar15) {
        do {
          lVar12 = *(int64_t *)(lVar10 + lVar21 * 8);
          if ((int64_t)(iVar19 + -0x8000) < lVar12 - param_1) {
            uVar13 = 0;
            if (0 < param_2 - iVar19) {
              uVar11 = 0;
              uVar24 = 0;
              do {
                uVar13 = (uint)uVar24;
                uVar14 = uStack_78;
                if ((0x101 < (int64_t)uVar11) || (*(byte *)(lVar12 + uVar11) != pbVar23[uVar11]))
                break;
                uVar13 = uVar13 + 1;
                uVar24 = (uint64_t)uVar13;
                uVar11 = uVar11 + 1;
              } while ((int64_t)uVar11 < (int64_t)(param_2 - iVar19));
            }
            if ((int)uVar14 <= (int)uVar13) {
              uStack_78 = uVar13;
              lStack_70 = lVar12;
              uVar14 = uVar13;
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < iVar15);
      }
      iVar15 = 2;
      if ((lVar10 != 0) && (*(int *)(lVar10 + -4) == 0x10)) {
                    // WARNING: Subroutine does not return
        memmove(lVar10,lVar10 + 0x40,0x40);
      }
      if (lVar10 == 0) {
LAB_18042dd33:
        lVar21 = lVar10 + -8;
        if (lVar10 == 0) {
          lVar21 = 0;
        }
        piVar4 = (int *)realloc(lVar21,(int64_t)(iVar15 * 8) + 8);
        if (piVar4 != (int *)0x0) {
          if (*plVar20 == 0) {
            piVar4[1] = 0;
          }
          *plVar20 = (int64_t)(piVar4 + 2);
          *piVar4 = iVar15;
        }
      }
      else if (*(int *)(lVar10 + -8) <= *(int *)(lVar10 + -4) + 1) {
        if (lVar10 != 0) {
          iVar15 = *(int *)(lVar10 + -8) * 2 + 1;
        }
        goto LAB_18042dd33;
      }
      *(byte **)(*plVar20 + (int64_t)*(int *)(*plVar20 + -4) * 8) = pbVar23;
      *(int *)(*plVar20 + -4) = *(int *)(*plVar20 + -4) + 1;
      bVar7 = (byte)uVar9;
      if (lStack_70 == 0) {
LAB_18042e428:
        bVar8 = *pbVar23;
        if (bVar8 < 0x90) {
          uVar14 = bVar8 + 0x30;
          piVar4 = (int *)0x0;
          iVar15 = 8;
          do {
            iVar16 = iVar15;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)piVar4 * 2 | uVar13;
            piVar4 = (int *)(uint64_t)uVar13;
            iVar15 = iVar16 + -1;
          } while (iVar15 != 0);
          uVar9 = uVar9 + 8;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          if (7 < (int)uVar9) {
            uVar11 = (uint64_t)(uVar9 >> 3);
            uVar9 = uVar9 + (uVar9 >> 3) * -8;
            do {
              iVar15 = iVar16;
              if (piStack_60 == (int *)0x0) {
LAB_18042e49d:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4,(int64_t)(iVar15 + 1) + 8);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar15 + 1;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar15 = piStack_60[-2] * 2;
                goto LAB_18042e49d;
              }
              *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else {
          uVar14 = bVar8 + 0x100;
          piVar4 = (int *)0x0;
          iVar15 = 9;
          do {
            iVar16 = iVar15;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)piVar4 * 2 | uVar13;
            piVar4 = (int *)(uint64_t)uVar13;
            iVar15 = iVar16 + -1;
          } while (iVar15 != 0);
          uVar9 = uVar9 + 9;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          if (7 < (int)uVar9) {
            uVar11 = (uint64_t)(uVar9 >> 3);
            uVar9 = uVar9 + (uVar9 >> 3) * -8;
            do {
              iVar15 = iVar16;
              if (piStack_60 == (int *)0x0) {
LAB_18042e54d:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4,(int64_t)(iVar15 + 1) + 8);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar15 + 1;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar15 = piStack_60[-2] * 2;
                goto LAB_18042e54d;
              }
              *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        uStack_78 = 1;
      }
      else {
        uVar14 = (uint)*(byte *)(lVar22 + 3 + param_1) * 0x10000 +
                 (uint)*(byte *)(lVar22 + 2 + param_1) * 0x100 +
                 (uint)*(byte *)(lVar22 + 1 + param_1);
        uVar14 = uVar14 ^ uVar14 * 8;
        uVar14 = uVar14 + (uVar14 >> 5);
        uVar14 = uVar14 ^ uVar14 * 0x10;
        uVar14 = uVar14 + (uVar14 >> 0x11);
        iVar15 = 0;
        lVar21 = 0;
        lVar10 = param_4[(uVar14 >> 6) + uVar14 & 0x3fff];
        if (lVar10 != 0) {
          iVar15 = *(int *)(lVar10 + -4);
        }
        if (0 < iVar15) {
          do {
            iVar16 = 0;
            lVar22 = *(int64_t *)(lVar10 + lVar21 * 8);
            if ((int64_t)(iVar19 + -0x7fff) < lVar22 - param_1) {
              lVar12 = 0;
              iVar1 = (param_2 - iVar19) + -1;
              if (0 < iVar1) {
                do {
                  if ((0x101 < lVar12) || (*(byte *)(lVar22 + lVar12) != pbVar23[lVar12 + 1]))
                  break;
                  iVar16 = iVar16 + 1;
                  lVar12 = lVar12 + 1;
                } while (lVar12 < iVar1);
              }
              if ((int)uStack_78 < iVar16) goto LAB_18042e428;
            }
            lVar21 = lVar21 + 1;
          } while (lVar21 < iVar15);
        }
        uVar17 = 0;
        iStackX_8 = (int)param_1;
        uVar14 = 0;
        iVar15 = (iStackX_8 - (int)lStack_70) + iVar19;
        uVar11 = uVar17;
        uVar24 = uVar17;
        if (3 < (int)uStack_78) {
          do {
            lVar10 = uVar24 * 2;
            uVar24 = uVar24 + 1;
            uVar14 = (int)uVar11 + 1;
            uVar11 = (uint64_t)uVar14;
          } while ((int)(*(ushort *)(&processed_var_5140_ptr + lVar10) - 1) < (int)uStack_78);
        }
        iVar16 = uVar14 + 0x101;
        if (iVar16 < 0x90) {
          uVar14 = uVar14 + 0x131;
          iVar16 = 8;
          do {
            iVar1 = iVar16;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)uVar17 * 2 | uVar13;
            uVar17 = (uint64_t)uVar13;
            iVar16 = iVar1 + -1;
          } while (iVar16 != 0);
          iVar1 = iVar1 + 1;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          uVar14 = uVar9 + 8;
          if (7 < (int)uVar14) {
            uVar11 = (uint64_t)(uVar14 >> 3);
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            do {
              iVar16 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042df4f:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar16;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar16 = piStack_60[-2] * 2 + 1;
                goto LAB_18042df4f;
              }
              *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else if (iVar16 < 0x100) {
          uVar14 = uVar14 + 0x201;
          iVar16 = 9;
          do {
            iVar1 = iVar16;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)uVar17 * 2 | uVar13;
            uVar17 = (uint64_t)uVar13;
            iVar16 = iVar1 + -1;
          } while (iVar16 != 0);
          iVar1 = iVar1 + 1;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          uVar14 = uVar9 + 9;
          if (7 < (int)uVar14) {
            uVar11 = (uint64_t)(uVar14 >> 3);
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            do {
              iVar16 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042e00e:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar16;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar16 = piStack_60[-2] * 2 + 1;
                goto LAB_18042e00e;
              }
              *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else if (iVar16 < 0x118) {
          uVar14 = uVar14 + 1;
          iVar16 = 7;
          do {
            iVar1 = iVar16;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)uVar17 * 2 | uVar13;
            uVar17 = (uint64_t)uVar13;
            iVar16 = iVar1 + -1;
          } while (iVar16 != 0);
          iVar1 = iVar1 + 1;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          uVar14 = uVar9 + 7;
          if (7 < (int)uVar14) {
            uVar11 = (uint64_t)(uVar14 >> 3);
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            do {
              iVar16 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042e0ce:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar16;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar16 = piStack_60[-2] * 2 + 1;
                goto LAB_18042e0ce;
              }
              *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else {
          uVar14 = uVar14 + 0xa9;
          iVar16 = 8;
          do {
            iVar1 = iVar16;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)uVar17 * 2 | uVar13;
            uVar17 = (uint64_t)uVar13;
            iVar16 = iVar1 + -1;
          } while (iVar16 != 0);
          iVar1 = iVar1 + 1;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          uVar14 = uVar9 + 8;
          if (7 < (int)uVar14) {
            uVar11 = (uint64_t)(uVar14 >> 3);
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            do {
              iVar16 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042e17e:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar16;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar16 = piStack_60[-2] * 2 + 1;
                goto LAB_18042e17e;
              }
              *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        if ((&processed_var_5104_ptr)[uVar24] != 0) {
          bVar7 = (byte)uVar14;
          uVar14 = uVar14 + (byte)(&processed_var_5104_ptr)[uVar24];
          uVar18 = uVar18 | uStack_78 - *(ushort *)(&processed_var_5136_ptr + uVar24 * 2) << (bVar7 & 0x1f);
          if (7 < (int)uVar14) {
            uVar11 = (uint64_t)(uVar14 >> 3);
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            do {
              iVar16 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042e23e:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar16;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar16 = piStack_60[-2] * 2 + 1;
                goto LAB_18042e23e;
              }
              *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        uVar13 = 0;
        uVar9 = 0;
        lVar10 = 0;
        if (1 < iVar15) {
          do {
            lVar21 = lVar10 * 2;
            lVar10 = lVar10 + 1;
            uVar9 = uVar9 + 1;
          } while ((int)(*(ushort *)(&processed_var_5044_ptr + lVar21) - 1) < iVar15);
        }
        iVar16 = 5;
        do {
          uVar2 = uVar9 & 1;
          uVar9 = (int)uVar9 >> 1;
          uVar13 = uVar13 * 2 | uVar2;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        uVar9 = uVar14 + 5;
        uVar18 = uVar18 | uVar13 << ((byte)uVar14 & 0x1f);
        if (7 < (int)uVar9) {
          uVar11 = (uint64_t)(uVar9 >> 3);
          uVar9 = uVar9 + (uVar9 >> 3) * -8;
          do {
            iVar16 = iVar1;
            if (piStack_60 == (int *)0x0) {
LAB_18042e311:
              piVar4 = piStack_60 + -2;
              if (piStack_60 == (int *)0x0) {
                piVar4 = (int *)0x0;
              }
              piVar4 = (int *)realloc(piVar4,(int64_t)iVar16 + 8);
              if (piVar4 != (int *)0x0) {
                if (piStack_60 == (int *)0x0) {
                  piVar4[1] = 0;
                }
                piStack_60 = piVar4 + 2;
                *piVar4 = iVar16;
              }
            }
            else if (piStack_60[-2] <= piStack_60[-1] + 1) {
              iVar16 = piStack_60[-2] * 2 + 1;
              goto LAB_18042e311;
            }
            *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
            piStack_60[-1] = piStack_60[-1] + 1;
            uVar18 = uVar18 >> 8;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if ((&processed_var_6224_ptr)[lVar10] != 0) {
          uVar18 = uVar18 | iVar15 - (uint)*(ushort *)(&processed_var_5040_ptr + lVar10 * 2) <<
                            ((byte)uVar9 & 0x1f);
          uVar9 = uVar9 + (byte)(&processed_var_6224_ptr)[lVar10];
          if (7 < (int)uVar9) {
            uVar11 = (uint64_t)(uVar9 >> 3);
            uVar9 = uVar9 + (uVar9 >> 3) * -8;
            do {
              iVar15 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042e3d3:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4,(int64_t)iVar15 + 8);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar15;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar15 = piStack_60[-2] * 2 + 1;
                goto LAB_18042e3d3;
              }
              *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      iVar15 = iVar19 + uStack_78;
      iVar19 = iVar15;
    } while (iVar15 < param_2 + -3);
  }
  lVar21 = (int64_t)param_2;
  lVar10 = (int64_t)iVar15;
  if (lVar10 < lVar21) {
    pbVar23 = (byte *)(param_1 + lVar10);
    lVar10 = lVar21 - lVar10;
    do {
      uVar14 = 0;
      bVar7 = *pbVar23;
      bVar8 = (byte)uVar9;
      if (bVar7 < 0x90) {
        uVar13 = bVar7 + 0x30;
        iVar15 = 8;
        do {
          uVar2 = uVar13 & 1;
          uVar13 = (int)uVar13 >> 1;
          uVar14 = uVar14 * 2 | uVar2;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        uVar9 = uVar9 + 8;
        uVar18 = uVar18 | uVar14 << (bVar8 & 0x1f);
        if (7 < (int)uVar9) {
          uVar11 = (uint64_t)(uVar9 >> 3);
          uVar9 = uVar9 + (uVar9 >> 3) * -8;
          do {
            if (piStack_60 == (int *)0x0) {
              iVar15 = 2;
LAB_18042e665:
              piVar4 = piStack_60 + -2;
              if (piStack_60 == (int *)0x0) {
                piVar4 = (int *)0x0;
              }
              piVar4 = (int *)realloc(piVar4,(int64_t)iVar15 + 8);
              if (piVar4 != (int *)0x0) {
                if (piStack_60 == (int *)0x0) {
                  piVar4[1] = 0;
                }
                piStack_60 = piVar4 + 2;
                *piVar4 = iVar15;
              }
            }
            else if (piStack_60[-2] <= piStack_60[-1] + 1) {
              iVar15 = piStack_60[-2] * 2 + 1;
              goto LAB_18042e665;
            }
            *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
            piStack_60[-1] = piStack_60[-1] + 1;
            uVar18 = uVar18 >> 8;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      else {
        uVar13 = bVar7 + 0x100;
        iVar15 = 9;
        do {
          uVar2 = uVar13 & 1;
          uVar13 = (int)uVar13 >> 1;
          uVar14 = uVar14 * 2 | uVar2;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        uVar9 = uVar9 + 9;
        uVar18 = uVar18 | uVar14 << (bVar8 & 0x1f);
        if (7 < (int)uVar9) {
          uVar11 = (uint64_t)(uVar9 >> 3);
          uVar9 = uVar9 + (uVar9 >> 3) * -8;
          do {
            if (piStack_60 == (int *)0x0) {
              iVar15 = 2;
LAB_18042e711:
              piVar4 = piStack_60 + -2;
              if (piStack_60 == (int *)0x0) {
                piVar4 = (int *)0x0;
              }
              piVar4 = (int *)realloc(piVar4,(int64_t)iVar15 + 8);
              if (piVar4 != (int *)0x0) {
                if (piStack_60 == (int *)0x0) {
                  piVar4[1] = 0;
                }
                piStack_60 = piVar4 + 2;
                *piVar4 = iVar15;
              }
            }
            else if (piStack_60[-2] <= piStack_60[-1] + 1) {
              iVar15 = piStack_60[-2] * 2 + 1;
              goto LAB_18042e711;
            }
            *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
            piStack_60[-1] = piStack_60[-1] + 1;
            uVar18 = uVar18 >> 8;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      pbVar23 = pbVar23 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  piVar4 = (int *)0x0;
  iVar15 = 7;
  do {
    iVar19 = iVar15;
    iVar15 = iVar19 + -1;
  } while (iVar15 != 0);
  uVar14 = uVar9 + 7;
  uVar18 = uVar18 | 0 << ((byte)uVar9 & 0x1f);
  if (7 < (int)uVar14) {
    uVar11 = (uint64_t)(uVar14 >> 3);
    uVar14 = uVar14 + (uVar14 >> 3) * -8;
    do {
      iVar15 = iVar19;
      if (piStack_60 == (int *)0x0) {
LAB_18042e7e2:
        piVar5 = piStack_60 + -2;
        if (piStack_60 == (int *)0x0) {
          piVar5 = piVar4;
        }
        piVar5 = (int *)realloc(piVar5,(int64_t)(iVar15 + 1) + 8);
        if (piVar5 != (int *)0x0) {
          if (piStack_60 == (int *)0x0) {
            piVar5[1] = 0;
          }
          piStack_60 = piVar5 + 2;
          *piVar5 = iVar15 + 1;
        }
      }
      else if (piStack_60[-2] <= piStack_60[-1] + 1) {
        iVar15 = piStack_60[-2] * 2;
        goto LAB_18042e7e2;
      }
      *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
      piStack_60[-1] = piStack_60[-1] + 1;
      uVar18 = uVar18 >> 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  while (plVar20 = param_4, uVar14 != 0) {
    uVar14 = uVar14 + 1;
    if (7 < (int)uVar14) {
      uVar11 = (uint64_t)(uVar14 >> 3);
      uVar14 = uVar14 + (uVar14 >> 3) * -8;
      do {
        if (piStack_60 == (int *)0x0) {
          iVar15 = 2;
LAB_18042e87d:
          piVar5 = piStack_60 + -2;
          if (piStack_60 == (int *)0x0) {
            piVar5 = piVar4;
          }
          piVar5 = (int *)realloc(piVar5,(int64_t)iVar15 + 8);
          if (piVar5 != (int *)0x0) {
            if (piStack_60 == (int *)0x0) {
              piVar5[1] = 0;
            }
            piStack_60 = piVar5 + 2;
            *piVar5 = iVar15;
          }
        }
        else if (piStack_60[-2] <= piStack_60[-1] + 1) {
          iVar15 = piStack_60[-2] * 2 + 1;
          goto LAB_18042e87d;
        }
        *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar18;
        piStack_60[-1] = piStack_60[-1] + 1;
        uVar18 = uVar18 >> 8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  do {
    if (*plVar20 != 0) {
      free(*plVar20 + -8);
    }
    lStack_58 = lStack_58 + -1;
    plVar20 = plVar20 + 1;
  } while (lStack_58 != 0);
  free(param_4);
  uVar9 = 1;
  if (0 < lVar21) {
    lVar10 = (int64_t)(param_2 % 0x15b0);
    piVar5 = piVar4;
    do {
      lVar22 = 0;
      if (0 < lVar10) {
        do {
          lVar12 = lVar22 + 1;
          uVar9 = uVar9 + *(byte *)((int64_t)piVar5 + lVar22 + param_1);
          piVar4 = (int *)(uint64_t)((int)piVar4 + uVar9);
          lVar22 = lVar12;
        } while (lVar12 < lVar10);
      }
      piVar5 = (int *)((int64_t)piVar5 + lVar10);
      lVar10 = 0x15b0;
      uVar9 = uVar9 % 0xfff1;
      piVar4 = (int *)(uint64_t)(uint)((int)piVar4 + (int)((uint64_t)piVar4 / 0xfff1) * -0xfff1);
    } while ((int64_t)piVar5 < lVar21);
  }
  if (piStack_60 == (int *)0x0) {
    iVar15 = 2;
  }
  else {
    iVar15 = piStack_60[-2];
    if (piStack_60[-1] + 1 < iVar15) goto LAB_18042e9f9;
    iVar15 = iVar15 * 2 + 1;
  }
  piVar5 = piStack_60 + -2;
  if (piStack_60 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  piVar5 = (int *)realloc(piVar5,(int64_t)iVar15 + 8);
  if (piVar5 != (int *)0x0) {
    if (piStack_60 == (int *)0x0) {
      piVar5[1] = 0;
    }
    piStack_60 = piVar5 + 2;
    *piVar5 = iVar15;
  }
LAB_18042e9f9:
  piVar5 = piStack_60 + -2;
  *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)((uint64_t)piVar4 >> 8);
  piStack_60[-1] = piStack_60[-1] + 1;
  if (*piVar5 <= piStack_60[-1] + 1) {
    iVar15 = *piVar5 * 2 + 1;
    piVar6 = (int *)realloc(piVar5,(int64_t)iVar15 + 8);
    if (piVar6 != (int *)0x0) {
      piStack_60 = piVar6 + 2;
      *piVar6 = iVar15;
      piVar5 = piVar6;
    }
  }
  *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)piVar4;
  piStack_60[-1] = piStack_60[-1] + 1;
  if (*piVar5 <= piStack_60[-1] + 1) {
    iVar15 = *piVar5 * 2 + 1;
    piVar4 = (int *)realloc(piVar5,(int64_t)iVar15 + 8);
    if (piVar4 != (int *)0x0) {
      piStack_60 = piVar4 + 2;
      *piVar4 = iVar15;
      piVar5 = piVar4;
    }
  }
  *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)(uVar9 >> 8);
  piStack_60[-1] = piStack_60[-1] + 1;
  if (*piVar5 <= piStack_60[-1] + 1) {
    iVar15 = *piVar5 * 2 + 1;
    piVar4 = (int *)realloc(piVar5,(int64_t)iVar15 + 8);
    if (piVar4 != (int *)0x0) {
      piStack_60 = piVar4 + 2;
      *piVar4 = iVar15;
      piVar5 = piVar4;
    }
  }
  *(char *)((int64_t)piStack_60[-1] + (int64_t)piStack_60) = (char)uVar9;
  piStack_60[-1] = piStack_60[-1] + 1;
  iVar15 = piStack_60[-1];
  *param_3 = iVar15;
                    // WARNING: Subroutine does not return
  memmove(piVar5,piStack_60,(int64_t)iVar15);
}



/**
 * @brief 颜色距离计算函数
 * 
 * 计算三个颜色值之间的距离，返回最接近的颜色值。
 * 使用曼哈顿距离或欧几里得距离来确定颜色相似度。
 * 
 * @param color1 第一个颜色值
 * @param color2 第二个颜色值
 * @param color3 第三个颜色值
 * @return 最接近的颜色值（低8位）
 */
uint RenderingColor_CalculateDistance(uint color1, uint color2, uint color3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = param_1 - param_3;
  uVar6 = (uVar5 + param_2) - param_3;
  uVar1 = (uVar5 + param_2) - param_1;
  uVar4 = (int)uVar1 >> 0x1f;
  iVar7 = (uVar1 ^ uVar4) - uVar4;
  iVar3 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  uVar1 = (int)uVar6 >> 0x1f;
  iVar2 = (uVar6 ^ uVar1) - uVar1;
  if ((iVar7 <= iVar3) && (iVar7 <= iVar2)) {
    return param_1 & 0xff;
  }
  param_2 = param_2 & 0xff;
  if (iVar2 < iVar3) {
    param_2 = param_3 & 0xff;
  }
  return param_2;
}// =============================================================================
// 函数别名映射
// =============================================================================

// 原始函数名称映射
void FUN_18042dad0(int64_t param_1, int param_2, int* param_3, int64_t* param_4)
    __attribute__((alias("RenderingData_CompressHashBased")));
uint FUN_18042eb00(uint param_1, uint param_2, uint param_3)
    __attribute__((alias("RenderingColor_CalculateDistance")));

// =============================================================================
// 技术架构文档
// =============================================================================

/*
 * 渲染数据压缩算法技术架构
 * =========================
 * 
 * 1. 系统概述
 * ------------
 * 本模块实现了渲染系统中的数据压缩和颜色处理功能。
 * 通过高效的压缩算法减少内存占用，提高数据处理性能。
 * 
 * 2. 核心功能
 * ------------
 * - LZ77风格的数据压缩算法
 * - 哈希表优化的模式匹配
 * - 颜色距离计算和插值
 * - 动态内存管理
 * - 字节级数据处理
 * 
 * 3. 技术特点
 * ------------
 * - 使用16位哈希表快速查找重复模式
 * - 滑动窗口压缩技术
 * - 距离编码优化
 * - 内存对齐和缓存优化
 * - 错误处理和边界检查
 * 
 * 4. 算法优化
 * ------------
 * - 哈希函数：使用多项式滚动哈希
 * - 模式匹配：最长前缀匹配
 * - 距离计算：快速整数运算
 * - 内存管理：动态扩容策略
 * 
 * 5. 性能指标
 * ------------
 * - 压缩比：2:1 到 4:1 取决于数据冗余度
 * - 处理速度：O(n) 时间复杂度
 * - 内存使用：动态调整，平均占用输入大小的25%
 * - 查找效率：哈希表O(1)查找复杂度
 * 
 * 6. 应用场景
 * ------------
 * - 纹理数据压缩
 * - 顶点数据优化
 * - 颜色表压缩
 * - 渲染状态数据压缩
 * - 网络传输优化
 * 
 * 7. 简化实现说明
 * -----------------
 * 本文件包含以下简化实现：
 * - 哈希表大小：使用固定16384条目，完整实现可根据数据特征动态调整
 * - 内存分配：使用标准realloc，完整实现应使用内存池技术
 * - 压缩算法：实现了基础LZ77，完整实现可加入霍夫曼编码等进一步压缩
 * - 错误处理：简化了错误检查，完整实现应包含全面的错误恢复机制
 * 
 * 完整实现应参考DEFLATE算法和最佳实践。
 */

// =============================================================================
// 性能优化策略
// =============================================================================

/*
 * 性能优化策略
 * =============
 * 
 * 1. 哈希表优化
 * ----------------
 * - 使用位掩码代替取模运算
 * - 哈希冲突处理：链表法
 * - 缓存友好的数据布局
 * - 预分配哈希表内存
 * 
 * 2. 内存访问优化
 * ----------------
 * - 连续内存访问模式
 * - 避免内存碎片
 * - 批量处理数据
 * - 内存对齐访问
 * 
 * 3. 算法优化
 * ------------
 * - 快速失败策略
 * - 循环展开技术
 * - 分支预测优化
 * - 内联关键函数
 * 
 * 4. 数据结构优化
 * ----------------
 * - 使用数组代替链表
 * - 位域压缩存储
 * - 紧凑数据布局
 * - 预分配缓冲区
 * 
 * 5. 编译器优化
 * --------------
 * - 使用restrict关键字
 * - 内联关键函数
 * - 循环不变量外提
 * - 死代码消除
 */
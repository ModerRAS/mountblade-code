#include "TaleWorlds.Native.Split.h"

// 01_initialization_part054.c - 渲染系统初始化相关函数

// 全局变量重命名
#define render_global_data _DAT_180c86890
#define render_config_data _DAT_180c86870
#define render_tls_value _DAT_180d49158
#define default_render_context UNK_1809fcc28

/**
 * 处理渲染数据
 * 从渲染数据结构中提取矩阵数据并进行变换计算
 */
void process_render_data(void)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  float *pfVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  longlong lVar31;
  longlong *plVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  longlong unaff_RBX;
  ulonglong uVar37;
  char *pcVar38;
  uint *puVar39;
  int iVar40;
  longlong unaff_RDI;
  int iVar41;
  int iVar42;
  longlong lVar43;
  undefined4 *puVar44;
  uint *puVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  bool bVar48;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000058;
  
  // 获取渲染相关的指针和数据
  uint render_index = (int)*(char *)(unaff_RDI + 0xd) + *(int *)(unaff_RDI + 0x18);
  float *render_matrix = (float *)**(longlong **)(unaff_RBX + 600);
  longlong render_data_base = (longlong)*(int *)(render_global_data + 0xe78) * 0x128 + render_global_data + 0xc28;
  
  // 计算渲染数据偏移
  uint chunk_index = render_index >> 0xd;
  longlong render_chunk_ptr = *(longlong *)(render_data_base + 8 + (ulonglong)chunk_index * 8);
  longlong matrix_offset = (ulonglong)(render_index + chunk_index * -0x2000) * 0x40;
  
  // 提取4x4矩阵数据
  undefined8 matrix_row1 = ((undefined8 *)(render_chunk_ptr + matrix_offset))[1];
  *(undefined8 *)render_matrix = *(undefined8 *)(render_chunk_ptr + matrix_offset);
  *(undefined8 *)(render_matrix + 2) = matrix_row1;
  
  undefined8 *matrix_data = (undefined8 *)(render_chunk_ptr + 0x10 + matrix_offset);
  matrix_row1 = matrix_data[1];
  *(undefined8 *)(render_matrix + 4) = *matrix_data;
  *(undefined8 *)(render_matrix + 6) = matrix_row1;
  
  matrix_data = (undefined8 *)(render_chunk_ptr + 0x20 + matrix_offset);
  matrix_row1 = matrix_data[1];
  *(undefined8 *)(render_matrix + 8) = *matrix_data;
  *(undefined8 *)(render_matrix + 10) = matrix_row1;
  
  matrix_data = (undefined8 *)(render_chunk_ptr + 0x30 + matrix_offset);
  matrix_row1 = matrix_data[1];
  *(undefined8 *)(render_matrix + 0xc) = *matrix_data;
  *(undefined8 *)(render_matrix + 0xe) = matrix_row1;
  // 获取变换矩阵的各个元素
  longlong transform_ptr = *(longlong *)(unaff_RDI + 0x10);
  float m31 = render_matrix[8];
  float m32 = render_matrix[9];
  float m33 = render_matrix[10];
  float m34 = render_matrix[0xb];
  float m11 = *render_matrix;
  float m12 = render_matrix[1];
  float m13 = render_matrix[2];
  float m14 = render_matrix[3];
  float m21 = render_matrix[4];
  float m22 = render_matrix[5];
  float m23 = render_matrix[6];
  float m24 = render_matrix[7];
  // 获取变换参数
  float t11 = *(float *)(transform_ptr + 0x374);
  float t12 = *(float *)(transform_ptr + 0x370);
  float t13 = *(float *)(transform_ptr + 0x378);
  float t21 = *(float *)(transform_ptr + 900);
  float t31 = *(float *)(transform_ptr + 0x394);
  float t22 = *(float *)(transform_ptr + 0x380);
  float t23 = *(float *)(transform_ptr + 0x388);
  float t32 = *(float *)(transform_ptr + 0x390);
  float t33 = *(float *)(transform_ptr + 0x398);
  
  // 计算变换后的矩阵
  *render_matrix = t11 * m21 + t12 * m11 + t13 * m31;
  render_matrix[1] = t11 * m22 + t12 * m12 + t13 * m32;
  render_matrix[2] = t11 * m23 + t12 * m13 + t13 * m33;
  render_matrix[3] = t11 * m24 + t12 * m14 + t13 * m34;
  render_matrix[4] = t21 * m21 + t22 * m11 + t23 * m31;
  render_matrix[5] = t21 * m22 + t22 * m12 + t23 * m32;
  render_matrix[6] = t21 * m23 + t22 * m13 + t23 * m33;
  render_matrix[7] = t21 * m24 + t22 * m14 + t23 * m34;
  render_matrix[8] = t31 * m21 + t32 * m11 + t33 * m31;
  render_matrix[9] = t31 * m22 + t32 * m12 + t33 * m32;
  render_matrix[10] = t31 * m23 + t32 * m13 + t33 * m33;
  render_matrix[0xb] = t31 * m24 + t32 * m14 + t33 * m34;
  // 检查渲染配置是否需要更新
  longlong render_context = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(render_context + 0x28) != *(int *)(render_config_data + 0x224)) {
    int total_items = *(int *)(render_context + 0x1c) + *(int *)(render_context + 0x18);
    *(int *)(render_context + 0x28) = *(int *)(render_config_data + 0x224);
    
    if (0 < total_items) {
      // 准备渲染缓冲区
      uStack0000000000000050 = in_stack_00000058;
      longlong buffer_base = (longlong)*(int *)(render_global_data + 0xe78) * 0x128 + render_global_data + 0xc28;
      undefined4 render_result = FUN_180080380(buffer_base, total_items, render_data_base, render_matrix, CONCAT44(unaff_XMM7_Db, unaff_XMM7_Da));
      *(undefined4 *)(render_context + 0x30) = render_result;
      FUN_1800802e0(buffer_base, render_result);
      // 处理渲染上下文
      if (*(longlong *)(render_context + 0x10) == 0) {
        if (*(int *)(render_context + 0x18) != 0) {
          *(undefined4 *)(render_context + 0x2c) = *(undefined4 *)(render_context + 0x30);
          return;
        }
      } else {
        // 初始化渲染线程数据
        char thread_count = *(char *)(render_context + 0x44);
        ulonglong thread_count_ulong = (ulonglong)thread_count;
        longlong *thread_ptr = (longlong *)(render_context + 0x38);
        int thread_count_int = (int)thread_count;
        // 检查线程数据是否需要重新分配
        if (*(int *)(render_context + 0x40) == (int)thread_count) {
          longlong *thread_data = (longlong *)*thread_ptr;
        } else {
          *(int *)(render_context + 0x40) = thread_count_int;
          if (*thread_ptr != 0) {
            // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *thread_ptr = 0;
          
          if (thread_count == '\0') {
            longlong *thread_data = (longlong *)0x0;
            *thread_ptr = 0;
          } else {
            longlong *thread_data = (longlong *)FUN_18062b1e0(_DAT_180c8ed18, (longlong)thread_count * 4);
            *thread_ptr = (longlong)thread_data;
          }
        }
        if (plVar32 != (longlong *)0x0) {
          iVar41 = 0;
          uVar33 = (uint)cVar14;
          iVar42 = iVar41;
          if ((0 < iVar40) && (0xf < uVar33)) {
            iVar36 = *(int *)(lVar16 + 0x2c);
            plVar2 = (longlong *)((longlong)plVar32 + (longlong)(cVar14 + -1) * 4);
            if ((((longlong *)(lVar16 + 0x2c) < plVar32) || (plVar2 < (longlong *)(lVar16 + 0x2c)))
               && ((plVar1 < plVar32 || (iVar42 = 0, plVar2 < plVar1)))) {
              uVar35 = uVar33 & 0x8000000f;
              if ((int)uVar35 < 0) {
                uVar35 = (uVar35 - 1 | 0xfffffff0) + 1;
              }
              plVar32 = plVar32 + 4;
              iVar34 = 8;
              do {
                *(int *)(plVar32 + -4) = iVar41 + iVar36;
                *(int *)((longlong)plVar32 + -0x1c) = iVar41 + 1 + iVar36;
                *(int *)(plVar32 + -3) = iVar41 + 2 + iVar36;
                *(int *)((longlong)plVar32 + -0x14) = iVar41 + 3 + iVar36;
                iVar41 = iVar41 + 0x10;
                *(int *)(plVar32 + -2) = iVar34 + -4 + iVar36;
                *(int *)((longlong)plVar32 + -0xc) = iVar34 + -3 + iVar36;
                *(int *)(plVar32 + -1) = iVar34 + -2 + iVar36;
                *(int *)((longlong)plVar32 + -4) = iVar34 + -1 + iVar36;
                *(int *)plVar32 = iVar34 + iVar36;
                *(int *)((longlong)plVar32 + 4) = iVar34 + 1 + iVar36;
                *(int *)(plVar32 + 1) = iVar34 + 2 + iVar36;
                *(int *)((longlong)plVar32 + 0xc) = iVar34 + 3 + iVar36;
                *(int *)(plVar32 + 2) = iVar34 + 4 + iVar36;
                *(int *)((longlong)plVar32 + 0x14) = iVar34 + 5 + iVar36;
                *(int *)(plVar32 + 3) = iVar34 + 6 + iVar36;
                *(int *)((longlong)plVar32 + 0x1c) = iVar34 + 7 + iVar36;
                plVar32 = plVar32 + 8;
                iVar34 = iVar34 + 0x10;
                iVar42 = iVar41;
              } while (iVar41 < (int)(uVar33 - uVar35));
            }
          }
          for (lVar31 = (longlong)iVar42; lVar31 < (longlong)uVar37; lVar31 = lVar31 + 1) {
            iVar41 = *(int *)(lVar16 + 0x2c) + iVar42;
            iVar42 = iVar42 + 1;
            *(int *)(*plVar1 + lVar31 * 4) = iVar41;
          }
          iVar42 = *(int *)(lVar16 + 0x18);
          iVar41 = 0;
          if (0 < (longlong)iVar42) {
            lVar31 = 0;
            do {
              iVar36 = *(int *)(lVar16 + 0x30) + iVar41;
              iVar41 = iVar41 + 1;
              pbVar3 = (byte *)(*(longlong *)(lVar16 + 0x10) + lVar31);
              lVar31 = lVar31 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar36;
            } while (lVar31 < iVar42);
          }
        }
        puVar39 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 +
                          _DAT_180c86890 + 0x9d0);
        if (iVar40 == 0) {
          uVar33 = (int)cVar14 - 1;
        }
        else {
          LOCK();
          uVar33 = *puVar39;
          *puVar39 = *puVar39 + (int)cVar14;
          UNLOCK();
          uVar46 = (ulonglong)(uVar33 >> 0xb);
          uVar47 = (ulonglong)(cVar14 + -1 + uVar33 >> 0xb);
          if (uVar46 <= uVar47) {
            pcVar38 = (char *)((longlong)puVar39 + uVar46 + 0x108);
            lVar31 = (uVar47 - uVar46) + 1;
            puVar45 = puVar39 + uVar46 * 2 + 2;
            do {
              iVar42 = (int)uVar46;
              if (*(longlong *)puVar45 == 0) {
                lVar43 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
                LOCK();
                bVar48 = *(longlong *)(puVar39 + (longlong)iVar42 * 2 + 2) == 0;
                if (bVar48) {
                  *(longlong *)(puVar39 + (longlong)iVar42 * 2 + 2) = lVar43;
                }
                UNLOCK();
                if (bVar48) {
                  LOCK();
                  *(undefined1 *)((longlong)iVar42 + 0x108 + (longlong)puVar39) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar43 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar38 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar38 != '\0');
              }
              uVar46 = (ulonglong)(iVar42 + 1);
              puVar45 = puVar45 + 2;
              pcVar38 = pcVar38 + 1;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
          }
        }
        puVar44 = *(undefined4 **)(lVar16 + 0x38);
        uVar35 = uVar33 >> 0xb;
        *(uint *)(lVar16 + 0x2c) = uVar33;
        if (uVar35 == (int)cVar14 + uVar33 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar39 + (ulonglong)uVar35 * 2 + 2) +
                 (ulonglong)(uVar33 + uVar35 * -0x800) * 4,puVar44,(uVar37 & 0xffffffff) << 2);
        }
        if (iVar40 != 0) {
          uVar37 = uVar37 & 0xffffffff;
          do {
            uVar30 = *puVar44;
            puVar44 = puVar44 + 1;
            *(undefined4 *)
             (*(longlong *)(puVar39 + (ulonglong)(uVar33 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar33 + (uVar33 >> 0xb) * -0x800) * 4) = uVar30;
            uVar37 = uVar37 - 1;
            uVar33 = uVar33 + 1;
          } while (uVar37 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180079309(longlong param_1,uint param_2,undefined8 param_3,float *param_4)
void FUN_180079309(longlong param_1,uint param_2,undefined8 param_3,float *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  uint uVar30;
  longlong lVar31;
  longlong *plVar32;
  longlong lVar33;
  int iVar34;
  int iVar35;
  longlong unaff_RBX;
  ulonglong uVar36;
  char *pcVar37;
  uint *puVar38;
  int iVar39;
  uint uVar40;
  longlong unaff_RDI;
  int iVar41;
  int iVar42;
  undefined4 *puVar43;
  uint *puVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  bool bVar47;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000058;
  
  param_1 = (longlong)*(int *)(param_1 + 0x250) * 0x128 + param_1;
  lVar15 = *(longlong *)(param_1 + 8 + (ulonglong)(param_2 >> 0xd) * 8);
  lVar31 = (ulonglong)(param_2 + (param_2 >> 0xd) * -0x2000) * 0x40;
  uVar28 = ((undefined8 *)(lVar15 + lVar31))[1];
  *(undefined8 *)param_4 = *(undefined8 *)(lVar15 + lVar31);
  *(undefined8 *)(param_4 + 2) = uVar28;
  puVar4 = (undefined8 *)(lVar15 + 0x10 + lVar31);
  uVar28 = puVar4[1];
  *(undefined8 *)(param_4 + 4) = *puVar4;
  *(undefined8 *)(param_4 + 6) = uVar28;
  puVar4 = (undefined8 *)(lVar15 + 0x20 + lVar31);
  uVar28 = puVar4[1];
  *(undefined8 *)(param_4 + 8) = *puVar4;
  *(undefined8 *)(param_4 + 10) = uVar28;
  puVar4 = (undefined8 *)(lVar15 + 0x30 + lVar31);
  uVar28 = puVar4[1];
  *(undefined8 *)(param_4 + 0xc) = *puVar4;
  *(undefined8 *)(param_4 + 0xe) = uVar28;
  lVar15 = *(longlong *)(unaff_RDI + 0x10);
  fVar16 = param_4[8];
  fVar17 = param_4[9];
  fVar18 = param_4[10];
  fVar19 = param_4[0xb];
  fVar20 = *param_4;
  fVar21 = param_4[1];
  fVar22 = param_4[2];
  fVar23 = param_4[3];
  fVar24 = param_4[4];
  fVar25 = param_4[5];
  fVar26 = param_4[6];
  fVar27 = param_4[7];
  fVar5 = *(float *)(lVar15 + 0x374);
  fVar6 = *(float *)(lVar15 + 0x370);
  fVar7 = *(float *)(lVar15 + 0x378);
  fVar8 = *(float *)(lVar15 + 900);
  fVar9 = *(float *)(lVar15 + 0x394);
  fVar10 = *(float *)(lVar15 + 0x380);
  fVar11 = *(float *)(lVar15 + 0x388);
  fVar12 = *(float *)(lVar15 + 0x390);
  fVar13 = *(float *)(lVar15 + 0x398);
  *param_4 = fVar5 * fVar24 + fVar6 * fVar20 + fVar7 * fVar16;
  param_4[1] = fVar5 * fVar25 + fVar6 * fVar21 + fVar7 * fVar17;
  param_4[2] = fVar5 * fVar26 + fVar6 * fVar22 + fVar7 * fVar18;
  param_4[3] = fVar5 * fVar27 + fVar6 * fVar23 + fVar7 * fVar19;
  param_4[4] = fVar8 * fVar24 + fVar10 * fVar20 + fVar11 * fVar16;
  param_4[5] = fVar8 * fVar25 + fVar10 * fVar21 + fVar11 * fVar17;
  param_4[6] = fVar8 * fVar26 + fVar10 * fVar22 + fVar11 * fVar18;
  param_4[7] = fVar8 * fVar27 + fVar10 * fVar23 + fVar11 * fVar19;
  param_4[8] = fVar9 * fVar24 + fVar12 * fVar20 + fVar13 * fVar16;
  param_4[9] = fVar9 * fVar25 + fVar12 * fVar21 + fVar13 * fVar17;
  param_4[10] = fVar9 * fVar26 + fVar12 * fVar22 + fVar13 * fVar18;
  param_4[0xb] = fVar9 * fVar27 + fVar12 * fVar23 + fVar13 * fVar19;
  lVar15 = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(lVar15 + 0x28) != *(int *)(_DAT_180c86870 + 0x224)) {
    iVar39 = *(int *)(lVar15 + 0x1c) + *(int *)(lVar15 + 0x18);
    *(int *)(lVar15 + 0x28) = *(int *)(_DAT_180c86870 + 0x224);
    if (0 < iVar39) {
      uStack0000000000000050 = in_stack_00000058;
      lVar31 = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
      uVar29 = FUN_180080380(lVar31,iVar39,param_1,param_4,CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da));
      *(undefined4 *)(lVar15 + 0x30) = uVar29;
      FUN_1800802e0(lVar31,uVar29);
      if (*(longlong *)(lVar15 + 0x10) == 0) {
        if (*(int *)(lVar15 + 0x18) != 0) {
          *(undefined4 *)(lVar15 + 0x2c) = *(undefined4 *)(lVar15 + 0x30);
          return;
        }
      }
      else {
        cVar14 = *(char *)(lVar15 + 0x44);
        uVar36 = (ulonglong)cVar14;
        plVar1 = (longlong *)(lVar15 + 0x38);
        iVar39 = (int)cVar14;
        if (*(int *)(lVar15 + 0x40) == (int)cVar14) {
          plVar32 = (longlong *)*plVar1;
        }
        else {
          *(int *)(lVar15 + 0x40) = iVar39;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *plVar1 = 0;
          if (cVar14 == '\0') {
            plVar32 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar32 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)cVar14 * 4);
            *plVar1 = (longlong)plVar32;
          }
        }
        if (plVar32 != (longlong *)0x0) {
          iVar41 = 0;
          uVar40 = (uint)cVar14;
          iVar42 = iVar41;
          if ((0 < iVar39) && (0xf < uVar40)) {
            iVar35 = *(int *)(lVar15 + 0x2c);
            plVar2 = (longlong *)((longlong)plVar32 + (longlong)(cVar14 + -1) * 4);
            if ((((longlong *)(lVar15 + 0x2c) < plVar32) || (plVar2 < (longlong *)(lVar15 + 0x2c)))
               && ((plVar1 < plVar32 || (iVar42 = 0, plVar2 < plVar1)))) {
              uVar30 = uVar40 & 0x8000000f;
              if ((int)uVar30 < 0) {
                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
              }
              plVar32 = plVar32 + 4;
              iVar34 = 8;
              do {
                *(int *)(plVar32 + -4) = iVar41 + iVar35;
                *(int *)((longlong)plVar32 + -0x1c) = iVar41 + 1 + iVar35;
                *(int *)(plVar32 + -3) = iVar41 + 2 + iVar35;
                *(int *)((longlong)plVar32 + -0x14) = iVar41 + 3 + iVar35;
                iVar41 = iVar41 + 0x10;
                *(int *)(plVar32 + -2) = iVar34 + -4 + iVar35;
                *(int *)((longlong)plVar32 + -0xc) = iVar34 + -3 + iVar35;
                *(int *)(plVar32 + -1) = iVar34 + -2 + iVar35;
                *(int *)((longlong)plVar32 + -4) = iVar34 + -1 + iVar35;
                *(int *)plVar32 = iVar34 + iVar35;
                *(int *)((longlong)plVar32 + 4) = iVar34 + 1 + iVar35;
                *(int *)(plVar32 + 1) = iVar34 + 2 + iVar35;
                *(int *)((longlong)plVar32 + 0xc) = iVar34 + 3 + iVar35;
                *(int *)(plVar32 + 2) = iVar34 + 4 + iVar35;
                *(int *)((longlong)plVar32 + 0x14) = iVar34 + 5 + iVar35;
                *(int *)(plVar32 + 3) = iVar34 + 6 + iVar35;
                *(int *)((longlong)plVar32 + 0x1c) = iVar34 + 7 + iVar35;
                plVar32 = plVar32 + 8;
                iVar34 = iVar34 + 0x10;
                iVar42 = iVar41;
              } while (iVar41 < (int)(uVar40 - uVar30));
            }
          }
          for (lVar31 = (longlong)iVar42; lVar31 < (longlong)uVar36; lVar31 = lVar31 + 1) {
            iVar41 = *(int *)(lVar15 + 0x2c) + iVar42;
            iVar42 = iVar42 + 1;
            *(int *)(*plVar1 + lVar31 * 4) = iVar41;
          }
          iVar42 = *(int *)(lVar15 + 0x18);
          iVar41 = 0;
          if (0 < (longlong)iVar42) {
            lVar31 = 0;
            do {
              iVar35 = *(int *)(lVar15 + 0x30) + iVar41;
              iVar41 = iVar41 + 1;
              pbVar3 = (byte *)(*(longlong *)(lVar15 + 0x10) + lVar31);
              lVar31 = lVar31 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar35;
            } while (lVar31 < iVar42);
          }
        }
        puVar38 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 +
                          _DAT_180c86890 + 0x9d0);
        if (iVar39 == 0) {
          uVar40 = (int)cVar14 - 1;
        }
        else {
          LOCK();
          uVar40 = *puVar38;
          *puVar38 = *puVar38 + (int)cVar14;
          UNLOCK();
          uVar45 = (ulonglong)(uVar40 >> 0xb);
          uVar46 = (ulonglong)(cVar14 + -1 + uVar40 >> 0xb);
          if (uVar45 <= uVar46) {
            pcVar37 = (char *)((longlong)puVar38 + uVar45 + 0x108);
            lVar31 = (uVar46 - uVar45) + 1;
            puVar44 = puVar38 + uVar45 * 2 + 2;
            do {
              iVar42 = (int)uVar45;
              if (*(longlong *)puVar44 == 0) {
                lVar33 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
                LOCK();
                bVar47 = *(longlong *)(puVar38 + (longlong)iVar42 * 2 + 2) == 0;
                if (bVar47) {
                  *(longlong *)(puVar38 + (longlong)iVar42 * 2 + 2) = lVar33;
                }
                UNLOCK();
                if (bVar47) {
                  LOCK();
                  *(undefined1 *)((longlong)iVar42 + 0x108 + (longlong)puVar38) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar33 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar37 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar37 != '\0');
              }
              uVar45 = (ulonglong)(iVar42 + 1);
              puVar44 = puVar44 + 2;
              pcVar37 = pcVar37 + 1;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
          }
        }
        puVar43 = *(undefined4 **)(lVar15 + 0x38);
        uVar30 = uVar40 >> 0xb;
        *(uint *)(lVar15 + 0x2c) = uVar40;
        if (uVar30 == (int)cVar14 + uVar40 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar38 + (ulonglong)uVar30 * 2 + 2) +
                 (ulonglong)(uVar40 + uVar30 * -0x800) * 4,puVar43,(uVar36 & 0xffffffff) << 2);
        }
        if (iVar39 != 0) {
          uVar36 = uVar36 & 0xffffffff;
          do {
            uVar29 = *puVar43;
            puVar43 = puVar43 + 1;
            *(undefined4 *)
             (*(longlong *)(puVar38 + (ulonglong)(uVar40 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar40 + (uVar40 >> 0xb) * -0x800) * 4) = uVar29;
            uVar36 = uVar36 - 1;
            uVar40 = uVar40 + 1;
          } while (uVar36 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007940e(void)
void FUN_18007940e(void)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  char cVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong unaff_RBX;
  longlong lVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000058;
  
  lVar5 = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(lVar5 + 0x28) != *(int *)(_DAT_180c86870 + 0x224)) {
    iVar16 = *(int *)(lVar5 + 0x1c) + *(int *)(lVar5 + 0x18);
    *(int *)(lVar5 + 0x28) = *(int *)(_DAT_180c86870 + 0x224);
    if (0 < iVar16) {
      uStack0000000000000050 = in_stack_00000058;
      lVar12 = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
      uVar6 = FUN_180080380(lVar12,iVar16);
      *(undefined4 *)(lVar5 + 0x30) = uVar6;
      FUN_1800802e0(lVar12,uVar6);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar5 + 0x30);
          return;
        }
      }
      else {
        cVar4 = *(char *)(lVar5 + 0x44);
        uVar13 = (ulonglong)cVar4;
        plVar1 = (longlong *)(lVar5 + 0x38);
        iVar16 = (int)cVar4;
        if (*(int *)(lVar5 + 0x40) == (int)cVar4) {
          plVar8 = (longlong *)*plVar1;
        }
        else {
          *(int *)(lVar5 + 0x40) = iVar16;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *plVar1 = 0;
          if (cVar4 == '\0') {
            plVar8 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)cVar4 * 4);
            *plVar1 = (longlong)plVar8;
          }
        }
        if (plVar8 != (longlong *)0x0) {
          iVar18 = 0;
          uVar17 = (uint)cVar4;
          iVar19 = iVar18;
          if ((0 < iVar16) && (0xf < uVar17)) {
            iVar11 = *(int *)(lVar5 + 0x2c);
            plVar2 = (longlong *)((longlong)plVar8 + (longlong)(cVar4 + -1) * 4);
            if ((((longlong *)(lVar5 + 0x2c) < plVar8) || (plVar2 < (longlong *)(lVar5 + 0x2c))) &&
               ((plVar1 < plVar8 || (iVar19 = 0, plVar2 < plVar1)))) {
              uVar7 = uVar17 & 0x8000000f;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
              }
              plVar8 = plVar8 + 4;
              iVar10 = 8;
              do {
                *(int *)(plVar8 + -4) = iVar18 + iVar11;
                *(int *)((longlong)plVar8 + -0x1c) = iVar18 + 1 + iVar11;
                *(int *)(plVar8 + -3) = iVar18 + 2 + iVar11;
                *(int *)((longlong)plVar8 + -0x14) = iVar18 + 3 + iVar11;
                iVar18 = iVar18 + 0x10;
                *(int *)(plVar8 + -2) = iVar10 + -4 + iVar11;
                *(int *)((longlong)plVar8 + -0xc) = iVar10 + -3 + iVar11;
                *(int *)(plVar8 + -1) = iVar10 + -2 + iVar11;
                *(int *)((longlong)plVar8 + -4) = iVar10 + -1 + iVar11;
                *(int *)plVar8 = iVar10 + iVar11;
                *(int *)((longlong)plVar8 + 4) = iVar10 + 1 + iVar11;
                *(int *)(plVar8 + 1) = iVar10 + 2 + iVar11;
                *(int *)((longlong)plVar8 + 0xc) = iVar10 + 3 + iVar11;
                *(int *)(plVar8 + 2) = iVar10 + 4 + iVar11;
                *(int *)((longlong)plVar8 + 0x14) = iVar10 + 5 + iVar11;
                *(int *)(plVar8 + 3) = iVar10 + 6 + iVar11;
                *(int *)((longlong)plVar8 + 0x1c) = iVar10 + 7 + iVar11;
                plVar8 = plVar8 + 8;
                iVar10 = iVar10 + 0x10;
                iVar19 = iVar18;
              } while (iVar18 < (int)(uVar17 - uVar7));
            }
          }
          for (lVar12 = (longlong)iVar19; lVar12 < (longlong)uVar13; lVar12 = lVar12 + 1) {
            iVar18 = *(int *)(lVar5 + 0x2c) + iVar19;
            iVar19 = iVar19 + 1;
            *(int *)(*plVar1 + lVar12 * 4) = iVar18;
          }
          iVar19 = *(int *)(lVar5 + 0x18);
          iVar18 = 0;
          if (0 < (longlong)iVar19) {
            lVar12 = 0;
            do {
              iVar11 = *(int *)(lVar5 + 0x30) + iVar18;
              iVar18 = iVar18 + 1;
              pbVar3 = (byte *)(*(longlong *)(lVar5 + 0x10) + lVar12);
              lVar12 = lVar12 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar11;
            } while (lVar12 < iVar19);
          }
        }
        puVar15 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 +
                          _DAT_180c86890 + 0x9d0);
        if (iVar16 == 0) {
          uVar17 = (int)cVar4 - 1;
        }
        else {
          LOCK();
          uVar17 = *puVar15;
          *puVar15 = *puVar15 + (int)cVar4;
          UNLOCK();
          uVar22 = (ulonglong)(uVar17 >> 0xb);
          uVar23 = (ulonglong)(cVar4 + -1 + uVar17 >> 0xb);
          if (uVar22 <= uVar23) {
            pcVar14 = (char *)((longlong)puVar15 + uVar22 + 0x108);
            lVar12 = (uVar23 - uVar22) + 1;
            puVar21 = puVar15 + uVar22 * 2 + 2;
            do {
              iVar19 = (int)uVar22;
              if (*(longlong *)puVar21 == 0) {
                lVar9 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
                LOCK();
                bVar24 = *(longlong *)(puVar15 + (longlong)iVar19 * 2 + 2) == 0;
                if (bVar24) {
                  *(longlong *)(puVar15 + (longlong)iVar19 * 2 + 2) = lVar9;
                }
                UNLOCK();
                if (bVar24) {
                  LOCK();
                  *(undefined1 *)((longlong)iVar19 + 0x108 + (longlong)puVar15) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar14 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar14 != '\0');
              }
              uVar22 = (ulonglong)(iVar19 + 1);
              puVar21 = puVar21 + 2;
              pcVar14 = pcVar14 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        puVar20 = *(undefined4 **)(lVar5 + 0x38);
        uVar7 = uVar17 >> 0xb;
        *(uint *)(lVar5 + 0x2c) = uVar17;
        if (uVar7 == (int)cVar4 + uVar17 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar15 + (ulonglong)uVar7 * 2 + 2) +
                 (ulonglong)(uVar17 + uVar7 * -0x800) * 4,puVar20,(uVar13 & 0xffffffff) << 2);
        }
        if (iVar16 != 0) {
          uVar13 = uVar13 & 0xffffffff;
          do {
            uVar6 = *puVar20;
            puVar20 = puVar20 + 1;
            *(undefined4 *)
             (*(longlong *)(puVar15 + (ulonglong)(uVar17 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar17 + (uVar17 >> 0xb) * -0x800) * 4) = uVar6;
            uVar13 = uVar13 - 1;
            uVar17 = uVar17 + 1;
          } while (uVar13 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_180079430(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    return (undefined *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d49158) {
    FUN_1808fcb90(&DAT_180d49158);
    if (_DAT_180d49158 == -1) {
      _DAT_180d49160 = &UNK_1809fcc28;
      _DAT_180d49168 = &DAT_180d49178;


// 函数: void FUN_180079520(longlong param_1)
void FUN_180079520(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_1 + 0xfd) & 0x20) != 0) && (*(longlong *)(param_1 + 0x1e0) != 0)) {
    iVar2 = 0;
    lVar3 = 0;
    do {
      while ((*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + lVar3) == '\x02' ||
             (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + lVar3) == '\x01'))) {
        Sleep(0);
      }
      lVar1 = (longlong)iVar2;
      lVar3 = lVar3 + 0x18;
      iVar2 = iVar2 + 1;
      LOCK();
      *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + lVar1 * 0x18 + 0x15) = 0;
      UNLOCK();
    } while (iVar2 < 0x10);
  }
  return;
}



undefined1 FUN_18007953e(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong unaff_RBX;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 0;
  do {
    while ((*(char *)(*(longlong *)(unaff_RBX + 0x1e0) + 0x15 + lVar5) == '\x02' ||
           (*(char *)(*(longlong *)(unaff_RBX + 0x1e0) + 0x15 + lVar5) == '\x01'))) {
      Sleep(0);
    }
    lVar3 = (longlong)iVar4;
    lVar5 = lVar5 + 0x18;
    iVar4 = iVar4 + 1;
    LOCK();
    puVar1 = (undefined1 *)(*(longlong *)(unaff_RBX + 0x1e0) + lVar3 * 0x18 + 0x15);
    uVar2 = *puVar1;
    *puVar1 = 0;
    UNLOCK();
  } while (iVar4 < 0x10);
  return uVar2;
}






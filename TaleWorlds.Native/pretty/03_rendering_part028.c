#include "TaleWorlds.Native.Split.h"

// 03_rendering_part028.c - 渲染系统哈希表和资源管理模块
// 本文件包含渲染系统的核心功能，包括哈希表管理、资源分配和矩阵变换操作
//
// 主要功能模块：
// 1. 哈希表管理：FUN_180280ab8 - 渲染资源哈希表操作和缓存管理
// 2. 矩阵变换：FUN_180280ad0 - 3D矩阵变换和坐标系统处理
// 3. 资源管理：FUN_180280fd0 - 渲染资源的引用计数和生命周期管理
// 4. 内存清理：FUN_180281020 - 渲染缓冲区的内存释放和清理
// 5. 系统初始化：FUN_180281040 - 渲染系统的初始化和设置
// 6. 渲染管线：FUN_180281080 - 渲染管线的高级处理和状态管理

// 全局常量定义
// 渲染系统数据区域
#define RENDER_HASH_TABLE_BASE   unknown_var_1640
#define RENDER_MATRIX_BUFFER     system_buffer_67d8
#define RENDER_RESOURCE_POOL    unknown_var_1664
#define RENDER_SYSTEM_CONFIG    system_buffer_67e0
#define RENDER_PARAM_DATA       system_buffer_67e8
#define RENDER_BUFFER_SIZE      system_buffer_67f0
#define RENDER_CONTROL_DATA     system_buffer_67f8
#define RENDER_SYSTEM_DATA      _DAT_180c8ed18

// 函数别名定义
// 哈希表和资源管理函数
#define process_render_hash_table     FUN_180280ab8
#define transform_3d_matrices         FUN_180280ad0
#define manage_render_resources       FUN_180280fd0
#define cleanup_render_buffers        FUN_180281020
#define initialize_render_system      FUN_180281040
#define render_system_idle            FUN_18028106c
#define execute_render_pipeline       FUN_180281080

// 函数: void process_render_hash_table(uint64_t param_1,code *param_2,uint64_t param_3,longlong *param_4,
// 处理渲染哈希表，管理渲染资源的缓存和分配
// 参数: param_1 - 渲染上下文, param_2 - 代码指针, param_3 - 系统参数, param_4 - 哈希表指针,
//       param_5-param_18 - 渲染资源和处理参数
void process_render_hash_table(uint64_t param_1,code *param_2,uint64_t param_3,longlong *param_4,
                              uint64_t param_5,uint64_t param_6,uint64_t param_7,longlong *param_8,
                              longlong *param_9,longlong param_10,longlong param_11,ulonglong *param_12,
                              longlong param_13,uint64_t param_14,ulonglong *param_15,ulonglong param_16,
                              ulonglong param_17,ulonglong param_18)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  int iVar18;
  longlong lVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong unaff_RBP;
  uint64_t *unaff_RSI;
  uint unaff_EDI;
  ulonglong *puVar23;
  int iVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  
code_r0x000180280ab8:
  param_8 = (longlong *)(*param_2)(param_4);
  param_4 = param_9;
  do {
    iVar28 = 0;
    iVar24 = *(int *)*unaff_RSI;
    if (0 < iVar24) {
      uVar30 = 1;
      lVar29 = 0;
      do {
        if ((unaff_EDI & uVar30) != 0) {
          lVar19 = unaff_RSI[1];
          lVar2 = *(longlong *)(*(longlong *)(unaff_RBP + 0x1b8) + 0xa8);
          lVar3 = *(longlong *)(lVar19 + 8);
          uVar16 = *(ulonglong *)(lVar2 + 0xc);
          uVar6 = *(ulonglong *)(lVar2 + 0x14);
          uVar31 = uVar16 ^ uVar6;
          for (puVar23 = *(ulonglong **)(lVar3 + (uVar31 % (ulonglong)*(uint *)(lVar19 + 0x10)) * 8)
              ; puVar23 != (ulonglong *)0x0; puVar23 = (ulonglong *)puVar23[3]) {
            if ((uVar16 == *puVar23) && (uVar6 == puVar23[1])) {
              if (puVar23 != (ulonglong *)0x0) {
                lVar19 = *(longlong *)(lVar19 + 0x10);
                goto LAB_180280743;
              }
              break;
            }
          }
          lVar19 = *(longlong *)(lVar19 + 0x10);
          puVar23 = *(ulonglong **)(lVar3 + lVar19 * 8);
LAB_180280743:
          if (puVar23 == *(ulonglong **)(lVar3 + lVar19 * 8)) {
            plVar4 = (longlong *)unaff_RSI[2];
            iVar18 = 0;
            param_17 = (longlong)((int)plVar4[2] + 0xf) & 0xfffffffffffffff0;
            *(int *)(plVar4 + 2) = iVar24 * 0x20 + (int)param_17;
            param_17 = *plVar4 + param_17;
            if (0 < *(int *)*unaff_RSI) {
              puVar13 = (uint64_t *)(param_17 + 8);
              do {
                puVar5 = (uint64_t *)unaff_RSI[3];
                iVar18 = iVar18 + 1;
                puVar13[-1] = 0;
                *puVar13 = 0;
                puVar13[1] = 0;
                puVar13[2] = *puVar5;
                puVar13 = puVar13 + 4;
              } while (iVar18 < *(int *)*unaff_RSI);
            }
            lVar19 = unaff_RSI[1];
            uVar22 = uVar31 % (ulonglong)*(uint *)(lVar19 + 0x10);
            for (puVar23 = *(ulonglong **)(*(longlong *)(lVar19 + 8) + uVar22 * 8);
                puVar23 != (ulonglong *)0x0; puVar23 = (ulonglong *)puVar23[3]) {
              if ((uVar16 == *puVar23) && (uVar6 == puVar23[1])) {
                lVar2 = *(longlong *)(lVar19 + 8) + uVar22 * 8;
                if (puVar23 != (ulonglong *)0x0) goto LAB_180280894;
                break;
              }
            }
            plVar4 = *(longlong **)(lVar19 + 0x30);
            uVar15 = (longlong)(int)plVar4[2] + 0xfU & 0xfffffffffffffff0;
            puVar23 = (ulonglong *)(*plVar4 + uVar15);
            *(int *)(plVar4 + 2) = (int)uVar15 + 0x20;
            *puVar23 = uVar16;
            puVar23[1] = uVar6;
            puVar23[2] = param_17;
            puVar23[3] = 0;
            param_15 = (ulonglong *)uVar16;
            param_16 = uVar6;
            FUN_18066c220(lVar19 + 0x20,&param_7,*(int32_t *)(lVar19 + 0x10),
                          *(int32_t *)(lVar19 + 0x18),1);
            if ((char)param_7 != '\0') {
              uVar22 = uVar31 % (ulonglong)param_7._4_4_;
              FUN_180285760(lVar19,param_7._4_4_);
            }
            puVar23[3] = *(ulonglong *)(*(longlong *)(lVar19 + 8) + uVar22 * 8);
            *(ulonglong **)(*(longlong *)(lVar19 + 8) + uVar22 * 8) = puVar23;
            *(longlong *)(lVar19 + 0x18) = *(longlong *)(lVar19 + 0x18) + 1;
            unaff_EDI = param_6._4_4_;
            lVar2 = *(longlong *)(lVar19 + 8) + uVar22 * 8;
LAB_180280894:
            param_13 = lVar2;
            param_12 = puVar23;
            param_15 = param_12;
            param_16 = param_13;
            puVar23 = param_12;
            unaff_RBP = param_11;
          }
          puVar23 = (ulonglong *)(puVar23[2] + lVar29);
          lVar19 = *param_8;
          lVar2 = param_8[1];
          puVar25 = (uint *)puVar23[1];
          lVar3 = param_8[2];
          lVar7 = param_8[3];
          lVar8 = param_8[4];
          lVar9 = param_8[5];
          lVar10 = param_8[6];
          lVar11 = param_8[7];
          if (puVar25 < (uint *)puVar23[2]) {
            puVar23[1] = (ulonglong)(puVar25 + 0x14);
            *puVar25 = unaff_EDI;
            *(longlong *)(puVar25 + 1) = lVar19;
            *(longlong *)(puVar25 + 3) = lVar2;
            *(longlong *)(puVar25 + 5) = lVar3;
            *(longlong *)(puVar25 + 7) = lVar7;
            *(longlong *)(puVar25 + 9) = lVar8;
            *(longlong *)(puVar25 + 0xb) = lVar9;
            *(longlong *)(puVar25 + 0xd) = lVar10;
            *(longlong *)(puVar25 + 0xf) = lVar11;
            *(longlong *)(puVar25 + 0x12) = unaff_RBP;
          }
          else {
            puVar26 = (uint *)*puVar23;
            lVar21 = ((longlong)puVar25 - (longlong)puVar26) / 0x50;
            if (lVar21 == 0) {
              lVar21 = 1;
LAB_180280958:
              plVar4 = (longlong *)puVar23[3];
              uVar16 = (longlong)((int)plVar4[2] + 0xf) & 0xfffffffffffffff0;
              *(int *)(plVar4 + 2) = (int)lVar21 * 0x50 + (int)uVar16;
              puVar27 = (uint *)(*plVar4 + uVar16);
              puVar25 = (uint *)puVar23[1];
              puVar26 = (uint *)*puVar23;
            }
            else {
              lVar21 = lVar21 * 2;
              if (lVar21 != 0) goto LAB_180280958;
              puVar27 = (uint *)0x0;
            }
            puVar14 = puVar27;
            if (puVar26 != puVar25) {
              puVar20 = puVar27 + 1;
              do {
                puVar1 = puVar20 + 0x14;
                *puVar14 = *(uint *)((longlong)puVar26 + (-4 - (longlong)puVar27) +
                                    (longlong)puVar20);
                puVar14 = puVar14 + 0x14;
                puVar13 = (uint64_t *)
                          ((longlong)puVar26 + (-0x50 - (longlong)puVar27) + (longlong)puVar1);
                uVar12 = puVar13[1];
                *(uint64_t *)puVar20 = *puVar13;
                *(uint64_t *)(puVar20 + 2) = uVar12;
                puVar13 = (uint64_t *)
                          ((longlong)puVar26 + (-0x40 - (longlong)puVar27) + (longlong)puVar1);
                uVar12 = puVar13[1];
                *(uint64_t *)(puVar20 + 4) = *puVar13;
                *(uint64_t *)(puVar20 + 6) = uVar12;
                puVar13 = (uint64_t *)
                          ((longlong)puVar26 + (-0x30 - (longlong)puVar27) + (longlong)puVar1);
                uVar12 = puVar13[1];
                *(uint64_t *)(puVar20 + 8) = *puVar13;
                *(uint64_t *)(puVar20 + 10) = uVar12;
                puVar13 = (uint64_t *)
                          ((longlong)puVar26 + (-0x20 - (longlong)puVar27) + (longlong)puVar1);
                uVar12 = puVar13[1];
                *(uint64_t *)(puVar20 + 0xc) = *puVar13;
                *(uint64_t *)(puVar20 + 0xe) = uVar12;
                *(uint64_t *)(puVar20 + 0x11) =
                     *(uint64_t *)
                      ((longlong)puVar26 + (-0xc - (longlong)puVar27) + (longlong)puVar1);
                puVar17 = (uint *)((longlong)puVar20 +
                                  (longlong)puVar26 + (0x4c - (longlong)puVar27));
                puVar20 = puVar1;
              } while (puVar17 != puVar25);
            }
            *puVar14 = unaff_EDI;
            *(longlong *)(puVar14 + 1) = lVar19;
            *(longlong *)(puVar14 + 3) = lVar2;
            *(longlong *)(puVar14 + 5) = lVar3;
            *(longlong *)(puVar14 + 7) = lVar7;
            *(longlong *)(puVar14 + 9) = lVar8;
            *(longlong *)(puVar14 + 0xb) = lVar9;
            *(longlong *)(puVar14 + 0xd) = lVar10;
            *(longlong *)(puVar14 + 0xf) = lVar11;
            *(longlong *)(puVar14 + 0x12) = unaff_RBP;
            puVar23[1] = (ulonglong)(puVar14 + 0x14);
            *puVar23 = (ulonglong)puVar27;
            puVar23[2] = (ulonglong)(puVar27 + lVar21 * 0x14);
          }
        }
        iVar28 = iVar28 + 1;
        uVar30 = uVar30 << 1 | (uint)((int)uVar30 < 0);
        lVar29 = lVar29 + 0x20;
        iVar24 = *(int *)*unaff_RSI;
        param_4 = param_9;
      } while (iVar28 < iVar24);
    }
    param_6._0_4_ = (int)param_6 + 1;
    lVar29 = param_4[7];
    param_10 = param_10 + 0x10;
    if ((ulonglong)(param_4[8] - lVar29 >> 4) <= (ulonglong)(longlong)(int)param_6) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(param_18 ^ (ulonglong)&stack0x00000000);
    }
    unaff_EDI = *(uint *)(lVar29 + 8 + param_10);
    unaff_RBP = *(longlong *)(lVar29 + param_10);
    param_2 = *(code **)(*param_4 + 0x158);
    param_6._4_4_ = unaff_EDI;
    param_11 = unaff_RBP;
    if (param_2 != (code *)&unknown_var_2528_ptr) goto code_r0x000180280ab8;
    param_8 = param_4 + 0x66;
  } while( true );
}



// 全局变量和数据定义
uint8_t RENDER_CONTROL_DATA;
uint8_t unknown_var_1640;
uint8_t system_buffer_67d8;
uint8_t unknown_var_1664;
uint8_t RENDER_SYSTEM_CONFIG;
uint8_t system_buffer_67e8;
uint8_t system_buffer_67f0;
uint8_t system_buffer_67f8;
uint8_t RENDER_PARAM_DATA;
uint8_t RENDER_BUFFER_SIZE;

// 原始函数声明（保持与原始代码的兼容性）
uint64_t FUN_180280ab8;
void FUN_180280ad0;
longlong * FUN_180280fd0;
void FUN_180281020;
void FUN_180281040;
void FUN_18028106c;
void FUN_180281080;

// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void transform_3d_matrices(longlong *param_1,longlong *param_2)
// 执行3D矩阵变换，处理坐标系统转换和矩阵运算
// 参数: param_1 - 目标矩阵数组指针, param_2 - 源矩阵数组指针
// 功能：实现3D渲染中的矩阵变换，包括平移、旋转、缩放等操作
void transform_3d_matrices(longlong *param_1,longlong *param_2)

{
  int32_t uVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  longlong *plVar28;
  longlong *plVar29;
  float *pfVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong *plVar33;
  longlong lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  int iStackX_8;
  longlong lStackX_18;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  if (*(code **)(*param_2 + 0x158) == (code *)&unknown_var_2528_ptr) {
    pfVar30 = (float *)(param_2 + 0x66);
  }
  else {
    pfVar30 = (float *)(**(code **)(*param_2 + 0x158))(param_2);
  }
  fVar3 = *pfVar30;
  fVar4 = pfVar30[1];
  fVar5 = pfVar30[2];
  fVar6 = pfVar30[4];
  fVar7 = pfVar30[5];
  fVar8 = pfVar30[6];
  fVar9 = pfVar30[8];
  fVar10 = pfVar30[9];
  fVar11 = pfVar30[10];
  fVar12 = pfVar30[0xc];
  fVar13 = pfVar30[0xd];
  fVar14 = pfVar30[0xe];
  iStackX_8 = 0;
  lVar34 = param_2[7];
  if (param_2[8] - lVar34 >> 4 != 0) {
    lStackX_18 = 0;
    do {
      plVar2 = *(longlong **)(lStackX_18 + lVar34);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      uVar1 = *(int32_t *)(lStackX_18 + 8 + lVar34);
      fVar36 = *(float *)(plVar2 + 0x24);
      fVar37 = *(float *)((longlong)plVar2 + 0x124);
      fVar39 = *(float *)(plVar2 + 0x25);
      fVar40 = *(float *)(plVar2 + 0x26);
      fVar42 = *(float *)((longlong)plVar2 + 0x134);
      fVar43 = *(float *)(plVar2 + 0x27);
      fVar15 = *(float *)(plVar2 + 0x28);
      fVar16 = *(float *)((longlong)plVar2 + 0x144);
      fVar17 = *(float *)(plVar2 + 0x29);
      fVar18 = *(float *)(plVar2 + 0x2a);
      fVar19 = *(float *)((longlong)plVar2 + 0x154);
      fVar20 = *(float *)(plVar2 + 0x2b);
      fVar35 = fVar36 * fVar3 + fVar37 * fVar6 + fVar39 * fVar9;
      fVar38 = fVar36 * fVar4 + fVar37 * fVar7 + fVar39 * fVar10;
      fVar41 = fVar36 * fVar5 + fVar37 * fVar8 + fVar39 * fVar11;
      fVar36 = fVar40 * fVar3 + fVar42 * fVar6 + fVar43 * fVar9;
      fVar39 = fVar40 * fVar4 + fVar42 * fVar7 + fVar43 * fVar10;
      fVar42 = fVar40 * fVar5 + fVar42 * fVar8 + fVar43 * fVar11;
      fVar37 = fVar15 * fVar3 + fVar16 * fVar6 + fVar17 * fVar9;
      fVar40 = fVar15 * fVar4 + fVar16 * fVar7 + fVar17 * fVar10;
      fVar43 = fVar15 * fVar5 + fVar16 * fVar8 + fVar17 * fVar11;
      if (*(code **)(*param_1 + 0x158) == (code *)&unknown_var_2528_ptr) {
        pfVar30 = (float *)(param_1 + 0x66);
      }
      else {
        pfVar30 = (float *)(**(code **)(*param_1 + 0x158))(param_1);
      }
      fVar15 = *pfVar30;
      fVar16 = pfVar30[1];
      fVar17 = pfVar30[2];
      fVar21 = pfVar30[4];
      fVar22 = pfVar30[5];
      fVar23 = pfVar30[6];
      fVar24 = pfVar30[8];
      fVar25 = pfVar30[9];
      fVar26 = pfVar30[10];
      fVar27 = pfVar30[0xb];
      fStack_e0 = fVar35 * fVar15 + fVar38 * fVar16 + fVar41 * fVar17;
      fStack_dc = fVar35 * fVar21 + fVar38 * fVar22 + fVar41 * fVar23;
      fStack_d8 = fVar35 * fVar24 + fVar38 * fVar25 + fVar41 * fVar26;
      fStack_d4 = fVar35 * fVar27 + fVar38 * fVar27 + fVar41 * fVar27;
      fStack_d0 = fVar36 * fVar15 + fVar39 * fVar16 + fVar42 * fVar17;
      fStack_cc = fVar36 * fVar21 + fVar39 * fVar22 + fVar42 * fVar23;
      fStack_c8 = fVar36 * fVar24 + fVar39 * fVar25 + fVar42 * fVar26;
      fStack_c4 = fVar36 * fVar27 + fVar39 * fVar27 + fVar42 * fVar27;
      fStack_c0 = fVar37 * fVar15 + fVar40 * fVar16 + fVar43 * fVar17;
      fStack_bc = fVar37 * fVar21 + fVar40 * fVar22 + fVar43 * fVar23;
      fStack_b8 = fVar37 * fVar24 + fVar40 * fVar25 + fVar43 * fVar26;
      fStack_b4 = fVar37 * fVar27 + fVar40 * fVar27 + fVar43 * fVar27;
      fVar39 = (fVar18 * fVar4 + fVar19 * fVar7 + fVar20 * fVar10 + fVar13) - pfVar30[0xd];
      fVar37 = (fVar18 * fVar5 + fVar19 * fVar8 + fVar20 * fVar11 + fVar14) - pfVar30[0xe];
      fVar36 = (fVar18 * fVar3 + fVar19 * fVar6 + fVar20 * fVar9 + fVar12) - pfVar30[0xc];
      fStack_b0 = fVar36 * fVar15 + fVar39 * fVar16 + fVar37 * fVar17;
      fStack_ac = fVar36 * fVar21 + fVar39 * fVar22 + fVar37 * fVar23;
      fStack_a8 = fVar36 * fVar24 + fVar39 * fVar25 + fVar37 * fVar26;
      fStack_a4 = fVar36 * fVar27 + fVar39 * fVar27 + fVar37 * fVar27;
      FUN_180075630(plVar2,&fStack_e0);
      plVar2[0x39] = (longlong)param_1;
      plVar33 = (longlong *)param_1[8];
      if (plVar33 < (longlong *)param_1[9]) {
        param_1[8] = (longlong)(plVar33 + 2);
        *plVar33 = (longlong)plVar2;
        (**(code **)(*plVar2 + 0x28))(plVar2);
        *(int32_t *)(plVar33 + 1) = uVar1;
      }
      else {
        plVar31 = (longlong *)param_1[7];
        lVar34 = (longlong)plVar33 - (longlong)plVar31 >> 4;
        if (lVar34 == 0) {
          lVar34 = 1;
LAB_180280e02:
          plVar28 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar34 << 4,(char)param_1[10]);
          plVar33 = (longlong *)param_1[8];
          plVar31 = (longlong *)param_1[7];
          plVar32 = plVar28;
          plVar29 = plVar31;
        }
        else {
          lVar34 = lVar34 * 2;
          if (lVar34 != 0) goto LAB_180280e02;
          plVar28 = (longlong *)0x0;
          plVar32 = plVar28;
          plVar29 = plVar31;
        }
        for (; plVar31 != plVar33; plVar31 = plVar31 + 2) {
          *plVar28 = *plVar31;
          *plVar31 = 0;
          *(int *)((longlong)plVar31 + (longlong)plVar32 + (8 - (longlong)plVar29)) =
               (int)plVar31[1];
          plVar28 = plVar28 + 2;
        }
        *plVar28 = (longlong)plVar2;
        (**(code **)(*plVar2 + 0x28))(plVar2);
        *(int32_t *)(plVar28 + 1) = uVar1;
        plVar33 = (longlong *)param_1[8];
        plVar31 = (longlong *)param_1[7];
        if (plVar31 != plVar33) {
          do {
            if ((longlong *)*plVar31 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar31 + 0x38))();
            }
            plVar31 = plVar31 + 2;
          } while (plVar31 != plVar33);
          plVar31 = (longlong *)param_1[7];
        }
        if (plVar31 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar31);
        }
        param_1[7] = (longlong)plVar32;
        param_1[8] = (longlong)(plVar28 + 2);
        param_1[9] = (longlong)(plVar32 + lVar34 * 2);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2);
      iStackX_8 = iStackX_8 + 1;
      lStackX_18 = lStackX_18 + 0x10;
      lVar34 = param_2[7];
    } while ((ulonglong)(longlong)iStackX_8 < (ulonglong)(param_2[8] - lVar34 >> 4));
  }
  if ((int)param_1[0xb] < (int)param_2[0xb]) {
    *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  }
  if (*(code **)(*param_1 + 0x160) == (code *)&unknown_var_6368_ptr) {
    FUN_180276f30(param_1,(longlong)param_1 + 0x214,0);
  }
  else {
    (**(code **)(*param_1 + 0x160))(param_1);
  }
  lVar34 = param_1[5];
  if ((lVar34 != 0) &&
     (*(short *)(lVar34 + 0x2b0) = *(short *)(lVar34 + 0x2b0) + 1,
     *(longlong *)(lVar34 + 0x168) != 0)) {
    func_0x0001802eeba0();
  }
  return;
}



// 函数: longlong * manage_render_resources(longlong *param_1,longlong *param_2)
// 管理渲染资源，处理资源的引用计数和生命周期
// 参数: param_1 - 资源管理器指针, param_2 - 资源句柄指针
// 返回值: 更新后的资源管理器指针
longlong * manage_render_resources(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  return param_1;
}





// 函数: void cleanup_render_buffers(longlong param_1)
// 清理渲染缓冲区，释放不再使用的渲染资源
// 参数: param_1 - 渲染上下文句柄
// 功能：遍历并释放渲染缓冲区中的所有资源
cleanup_render_buffers(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4);
  lVar3 = (longlong)iVar1;
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      FUN_180075ff0(*(uint64_t *)(lVar2 + *(longlong *)(param_1 + 0x38)));
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}





// 函数: void initialize_render_system(void)
// 初始化渲染系统，设置渲染管线的初始状态
// 功能：执行渲染系统的启动初始化过程
initialize_render_system(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = 0;
  do {
    FUN_180075ff0(*(uint64_t *)(lVar1 + *(longlong *)(unaff_RSI + 0x38)));
    lVar1 = lVar1 + 0x10;
    unaff_RDI = unaff_RDI + -1;
  } while (unaff_RDI != 0);
  return;
}





// 函数: void render_system_idle(void)
// 渲染系统空闲处理，执行空闲时的维护操作
// 功能：处理渲染系统在空闲状态时的维护任务
render_system_idle(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void execute_render_pipeline(longlong param_1,uint64_t param_2,longlong param_3)
// 执行渲染管线，处理高级渲染操作和状态管理
// 参数: param_1 - 渲染设备上下文, param_2 - 渲染参数, param_3 - 渲染目标
// 功能：协调渲染管线的各个阶段，管理渲染状态
execute_render_pipeline(longlong param_1,uint64_t param_2,longlong param_3)

{
  longlong **pplVar1;
  int iVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int8_t auStack_128 [32];
  uint64_t uStack_108;
  longlong *plStack_f0;
  longlong *plStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  longlong **pplStack_c0;
  longlong *plStack_b8;
  uint64_t uStack_b0;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  uVar13 = 0;
  if (0 < *(int *)(param_3 + 0xc0)) {
    lVar3 = FUN_1800b6de0(_DAT_180c86930,param_3 + 0xb0,0);
    pplVar1 = _DAT_180c868f0;
    if (lVar3 != 0) {
      if (*(float *)(param_3 + 0x1b8) <= -1.0) {
        FUN_180275a60(lVar3,param_1,1);
      }
      else {
        iVar14 = (int)*(float *)(param_3 + 0x1b8);
        pplStack_c0 = _DAT_180c868f0;
        iVar2 = _Mtx_lock(_DAT_180c868f0);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
        plVar8 = pplVar1[10];
        uVar6 = ((longlong)pplVar1[0xb] - (longlong)plVar8) / 0x18;
        if (uVar6 != 0) {
          plVar7 = plVar8 + 2;
          uVar10 = uVar13;
          do {
            if ((plVar7[-1] == lVar3) && ((int)*plVar7 == iVar14)) {
              FUN_180275a60(plVar8[(longlong)(int)uVar10 * 3],param_1,
                            CONCAT71((int7)(uVar10 >> 8),1));
              iVar2 = _Mtx_unlock(pplVar1);
              if (iVar2 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar2);
              }
              goto LAB_18028135c;
            }
            uVar12 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar12;
            plVar7 = plVar7 + 3;
          } while ((ulonglong)(longlong)(int)uVar12 < uVar6);
        }
        iVar2 = _Mtx_unlock(pplVar1);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
        puVar4 = (uint64_t *)FUN_1801940f0(pplVar1,&plStack_b8,lVar3,iVar14);
        FUN_180275a60(*puVar4,param_1,1);
        if (plStack_b8 != (longlong *)0x0) {
          (**(code **)(*plStack_b8 + 0x38))();
        }
      }
      goto LAB_18028135c;
    }
  }
  lVar3 = *(longlong *)(param_3 + 0x98) - *(longlong *)(param_3 + 0x90);
  iVar14 = (int)(lVar3 >> 0x3f);
  iVar2 = (int)(lVar3 / 0x1a0) + iVar14;
  uVar6 = uVar13;
  uVar10 = uVar13;
  if (iVar2 != iVar14) {
    do {
      lVar3 = *(longlong *)(param_3 + 0x90);
      iVar9 = (int)uVar10;
      if (*(int *)(uVar6 + 0x70 + lVar3) == 0) {
        uStack_108 = 0;
        FUN_1800b32c0(_DAT_180c86930,&plStack_c8,(longlong)iVar9 * 0x1a0 + lVar3,1);
        FUN_1800763c0(plStack_c8,&plStack_d0);
        pplStack_c0 = &plStack_d8;
        plStack_d8 = plStack_d0;
        if (plStack_d0 != (longlong *)0x0) {
          (**(code **)(*plStack_d0 + 0x28))();
        }
        FUN_180275e10(param_1,*(int32_t *)(uVar6 + 0x58 + *(longlong *)(param_3 + 0x90)),
                      &plStack_d8,1);
        plVar8 = plStack_c8;
        if (plStack_d0 != (longlong *)0x0) {
          (**(code **)(*plStack_d0 + 0x38))();
          plVar8 = plStack_c8;
        }
      }
      else {
        uVar5 = FUN_180334930(param_2,(longlong)iVar9 * 0x1a0 + lVar3);
        FUN_1800763c0(uVar5,&plStack_e0);
        pplStack_c0 = &plStack_e8;
        plStack_e8 = plStack_e0;
        if (plStack_e0 != (longlong *)0x0) {
          (**(code **)(*plStack_e0 + 0x28))();
        }
        FUN_180275e10(param_1,*(int32_t *)(uVar6 + 0x58 + *(longlong *)(param_3 + 0x90)),
                      &plStack_e8,1);
        plVar8 = plStack_e0;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x38))();
      }
      uVar6 = uVar6 + 0x1a0;
      uVar10 = (ulonglong)(iVar9 + 1U);
    } while (iVar9 + 1U < (uint)(iVar2 - iVar14));
  }
LAB_18028135c:
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x40) - lVar3 >> 4 != 0) {
    do {
      lVar11 = uVar13 * 0x1a0 + *(longlong *)(param_3 + 0x90);
      lVar3 = *(longlong *)(lVar3 + uVar13 * 0x10);
      if ((*(uint *)(lVar11 + 0x5c) >> 8 & 1) != 0) {
        FUN_18022cb40(*(uint64_t *)(lVar3 + 0x1b8),&plStack_f0);
        plVar8 = plStack_f0;
        puStack_a8 = &unknown_var_3480_ptr;
        puStack_a0 = auStack_90;
        auStack_90[0] = 0;
        uStack_98 = 0x10;
        strcpy_s(auStack_90,0x40,&system_buffer_d580);
        uVar6 = FUN_180240430(plVar8[0x3c],&puStack_a8,0);
        plVar8[0x28] = plVar8[0x28] | uVar6;
        FUN_18022dd60(plVar8);
        *(int16_t *)(plVar8 + 0x78) = 0xffff;
        puStack_a8 = &unknown_var_720_ptr;
        FUN_180076910(lVar3,&plStack_f0);
        if (plStack_f0 != (longlong *)0x0) {
          (**(code **)(*plStack_f0 + 0x38))();
        }
      }
      *(byte *)(lVar3 + 0xfd) = *(byte *)(lVar3 + 0xfd) | 1;
      *(longlong *)(lVar11 + 400) = lVar3;
      uVar13 = (ulonglong)((int)uVar13 + 1);
      lVar3 = *(longlong *)(param_1 + 0x38);
    } while (uVar13 < (ulonglong)(*(longlong *)(param_1 + 0x40) - lVar3 >> 4));
  }
  *(int32_t *)(param_1 + 0x318) = *(int32_t *)(param_3 + 0x1bc);
  LOCK();
  *(int32_t *)(param_1 + 0x310) = *(int32_t *)(param_3 + 0x1c0);
  UNLOCK();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_128);
}






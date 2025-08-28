#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part168.c - 1 个函数
// 函数: void function_372f8c(uint64_t param_1,int param_2,uint64_t param_3,int param_4,uint64_t param_5,
void function_372f8c(uint64_t param_1,int param_2,uint64_t param_3,int param_4,uint64_t param_5,
                  int64_t param_6,uint64_t param_7,int param_8,uint64_t param_9,int param_10,
                  uint64_t param_11,uint64_t param_12,int64_t param_13,int *param_14,
                  int64_t param_15)
{
  float fVar1;
  uint uVar2;
  int64_t *plVar3;
  int *piVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int iVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  int64_t lVar19;
  int *piVar20;
  int64_t lVar21;
  uint64_t uVar22;
  float *pfVar23;
  int iVar24;
  uint64_t uVar25;
  int *piVar26;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  float *pfVar27;
  int iVar28;
  int64_t unaff_R12;
  int64_t lVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  if (0 < param_2) {
    lVar29 = 0;
    do {
      pfVar27 = (float *)(*(int64_t *)(unaff_RBX + 0x80) + lVar29);
      fVar33 = *(float *)(*(int64_t *)(unaff_RBP + -0x80) + 0x215c);
      iVar16 = *(int *)(unaff_RBX + 0x54) + -1;
      iVar31 = (int)(*pfVar27 / fVar33);
      if (iVar31 < 0) {
        iVar31 = 0;
      }
      else if (iVar16 < iVar31) {
        iVar31 = iVar16;
      }
      iVar16 = *(int *)(unaff_RBX + 0x58);
      iVar30 = (int)(pfVar27[1] / fVar33);
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (iVar16 + -1 < iVar30) {
        iVar30 = iVar16 + -1;
      }
      if ((uint)(*(int64_t *)(unaff_R12 + 0x10) - *(int64_t *)(unaff_R12 + 8) >> 3) <=
          (uint)(int)*(char *)(pfVar27 + 8)) {
        *(int8_t *)(pfVar27 + 8) = 0;
        iVar16 = *(int *)(unaff_RBX + 0x58);
      }
      lVar19 = *(int64_t *)(unaff_RBX + 0x110);
      iVar16 = iVar16 * iVar31 + iVar30;
      for (piVar20 = *(int **)(lVar19 + ((uint64_t)(int64_t)iVar16 %
                                        (uint64_t)*(uint *)(unaff_RBX + 0x118)) * 8);
          piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
        if (iVar16 == *piVar20) {
          lVar21 = *(int64_t *)(unaff_RBX + 0x118);
          goto LAB_18037309e;
        }
      }
      lVar21 = *(int64_t *)(unaff_RBX + 0x118);
      piVar20 = *(int **)(lVar19 + lVar21 * 8);
LAB_18037309e:
      if (piVar20 == *(int **)(lVar19 + lVar21 * 8)) {
        uVar17 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3);
        param_14 = (int *)CONCAT44(param_14._4_4_,iVar16);
        param_15 = SystemCore_SignalHandler(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
        puVar18 = (uint64_t *)SystemCore_MessageQueueManager(unaff_RBX + 0x108,unaff_RBP + -0x30,&param_14);
        piVar20 = (int *)*puVar18;
      }
      function_37d8b0(*(uint64_t *)(piVar20 + 2),pfVar27,unaff_R12);
      plVar3 = *(int64_t **)
                (*(int64_t *)
                  (*(int64_t *)(unaff_R12 + 8) +
                  ((uint64_t)(uint)(int)*(char *)(pfVar27 + 8) %
                  (uint64_t)(*(int64_t *)(unaff_R12 + 0x10) - *(int64_t *)(unaff_R12 + 8) >> 3))
                  * 8) + 0x28);
      if (plVar3 != (int64_t *)0x0) {
        fVar33 = *pfVar27;
        fVar34 = pfVar27[1];
        fVar35 = pfVar27[2];
        if (*(code **)(*plVar3 + 0x198) == (code *)&rendering_buffer_2544_ptr) {
          pfVar23 = (float *)((int64_t)plVar3 + 0x214);
        }
        else {
          pfVar23 = (float *)(**(code **)(*plVar3 + 0x198))(plVar3);
        }
        fVar32 = *pfVar23;
        fVar36 = pfVar23[1];
        fVar37 = pfVar23[2];
        fVar7 = pfVar23[3];
        uVar2 = *(uint *)(unaff_RBX + 0x118);
        fVar8 = pfVar23[4];
        fVar9 = pfVar23[5];
        fVar10 = pfVar23[6];
        fVar11 = pfVar23[7];
        iVar16 = *(int *)(unaff_RBX + 0x58);
        fVar1 = pfVar27[6];
        lVar19 = *(int64_t *)(unaff_RBX + 0x110);
        *(float *)(unaff_RBP + -0x68) = fVar32;
        *(float *)(unaff_RBP + -100) = fVar36;
        *(float *)(unaff_RBP + -0x60) = fVar37;
        *(float *)(unaff_RBP + -0x5c) = fVar7;
        iVar16 = iVar16 * iVar31 + iVar30;
        *(float *)(unaff_RBP + -0x58) = fVar8;
        *(float *)(unaff_RBP + -0x54) = fVar9;
        *(float *)(unaff_RBP + -0x50) = fVar10;
        *(float *)(unaff_RBP + -0x4c) = fVar11;
        fVar32 = fVar32 * fVar1 + fVar33;
        fVar33 = fVar8 * fVar1 + fVar33;
        fVar36 = *(float *)(unaff_RBP + -100) * fVar1 + fVar34;
        fVar37 = *(float *)(unaff_RBP + -0x60) * fVar1 + fVar35;
        fVar34 = *(float *)(unaff_RBP + -0x54) * fVar1 + fVar34;
        fVar35 = *(float *)(unaff_RBP + -0x50) * fVar1 + fVar35;
        for (piVar20 = *(int **)(lVar19 + ((uint64_t)(int64_t)iVar16 % (uint64_t)uVar2) * 8);
            piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
          if (iVar16 == *piVar20) {
            lVar21 = *(int64_t *)(unaff_RBX + 0x118);
            goto LAB_18037321d;
          }
        }
        lVar21 = *(int64_t *)(unaff_RBX + 0x118);
        piVar20 = *(int **)(lVar19 + lVar21 * 8);
LAB_18037321d:
        if (piVar20 == *(int **)(lVar19 + lVar21 * 8)) {
          uVar17 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3);
          param_12 = CONCAT44(param_12._4_4_,iVar16);
          param_13 = SystemCore_SignalHandler(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
          puVar18 = (uint64_t *)SystemCore_MessageQueueManager(unaff_RBX + 0x108,unaff_RBP + -0x18,&param_12);
          piVar20 = (int *)*puVar18;
        }
        lVar19 = *(int64_t *)(piVar20 + 2);
        if (fVar32 <= fVar33) {
          if (fVar32 < *(float *)(lVar19 + 0x18)) {
            *(float *)(lVar19 + 0x18) = fVar32;
          }
          if (fVar36 < *(float *)(lVar19 + 0x1c)) {
            *(float *)(lVar19 + 0x1c) = fVar36;
          }
          if (fVar37 < *(float *)(lVar19 + 0x20)) {
            *(float *)(lVar19 + 0x20) = fVar37;
          }
          if (*(float *)(lVar19 + 0x28) <= fVar33 && fVar33 != *(float *)(lVar19 + 0x28)) {
            *(float *)(lVar19 + 0x28) = fVar33;
          }
          if (*(float *)(lVar19 + 0x2c) <= fVar34 && fVar34 != *(float *)(lVar19 + 0x2c)) {
            *(float *)(lVar19 + 0x2c) = fVar34;
          }
          if (*(float *)(lVar19 + 0x30) <= fVar35 && fVar35 != *(float *)(lVar19 + 0x30)) {
            *(float *)(lVar19 + 0x30) = fVar35;
          }
        }
        fVar33 = pfVar27[6];
        if (*(code **)(*plVar3 + 0x198) == (code *)&rendering_buffer_2544_ptr) {
          lVar19 = (int64_t)plVar3 + 0x214;
        }
        else {
          lVar19 = (**(code **)(*plVar3 + 0x198))(plVar3);
        }
        fVar33 = fVar33 * *(float *)(lVar19 + 0x30);
        lVar19 = SystemCore_SecurityManager();
        if ((float)*(int *)(lVar19 + 0x110) < fVar33) {
          lVar19 = *(int64_t *)(unaff_RBX + 0x110);
          iVar16 = *(int *)(unaff_RBX + 0x58) * iVar31 + iVar30;
          for (piVar20 = *(int **)(lVar19 + ((uint64_t)(int64_t)iVar16 %
                                            (uint64_t)*(uint *)(unaff_RBX + 0x118)) * 8);
              piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
            if (iVar16 == *piVar20) {
              lVar21 = *(int64_t *)(unaff_RBX + 0x118);
              goto LAB_18037336c;
            }
          }
          lVar21 = *(int64_t *)(unaff_RBX + 0x118);
          piVar20 = *(int **)(lVar19 + lVar21 * 8);
LAB_18037336c:
          if (piVar20 == *(int **)(lVar19 + lVar21 * 8)) {
            uVar17 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3);
            param_10 = iVar16;
            param_11 = SystemCore_SignalHandler(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
            puVar18 = (uint64_t *)SystemCore_MessageQueueManager(unaff_RBX + 0x108);
            piVar20 = (int *)*puVar18;
          }
          *(int *)(*(int64_t *)(piVar20 + 2) + 0x110) = (int)fVar33;
        }
        lVar21 = SystemCore_SecurityManager();
        lVar19 = *(int64_t *)(unaff_RBX + 0x110);
        lVar21 = *(int64_t *)(lVar21 + 0x108);
        iVar30 = *(int *)(unaff_RBX + 0x58) * iVar31 + iVar30;
        for (piVar20 = *(int **)(lVar19 + ((uint64_t)(int64_t)iVar30 %
                                          (uint64_t)*(uint *)(unaff_RBX + 0x118)) * 8);
            piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
          if (iVar30 == *piVar20) goto LAB_180373428;
        }
        piVar20 = *(int **)(lVar19 + *(int64_t *)(unaff_RBX + 0x118) * 8);
LAB_180373428:
        if (piVar20 == *(int **)(lVar19 + *(int64_t *)(unaff_RBX + 0x118) * 8)) {
          uVar17 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3);
          param_8 = iVar30;
          param_9 = SystemCore_SignalHandler(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
          puVar18 = (uint64_t *)SystemCore_MessageQueueManager(unaff_RBX + 0x108,unaff_RBP + 0x78,&param_8);
          piVar20 = (int *)*puVar18;
        }
        unaff_R12 = *(int64_t *)(unaff_RBP + -0x78);
        *(int64_t *)(*(int64_t *)(piVar20 + 2) + 0x108) = lVar21 + 1;
      }
      lVar29 = lVar29 + 0x28;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
    param_4 = *(int *)(unaff_RBX + 0x54);
  }
  iVar31 = *(int *)(unaff_RBX + 0x58);
  iVar16 = 0;
  if (0 < param_4 * iVar31) {
    do {
      uVar5 = (int64_t)iVar16 / (int64_t)param_4;
      uVar6 = (int64_t)iVar16 % (int64_t)param_4;
      lVar29 = *(int64_t *)(unaff_RBX + 0x110);
      iVar24 = (int)uVar6;
      iVar30 = (int)uVar5;
      iVar28 = iVar31 * iVar24 + iVar30;
      uVar25 = (uint64_t)(int64_t)iVar28 % (uint64_t)*(uint *)(unaff_RBX + 0x118);
      piVar20 = *(int **)(lVar29 + uVar25 * 8);
      for (piVar4 = piVar20; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 4)) {
        if (iVar28 == *piVar4) {
          if (piVar4 != (int *)0x0) {
            lVar19 = *(int64_t *)(unaff_RBX + 0x118);
            param_14 = piVar4;
            puVar18 = &param_14;
            param_15 = lVar29 + uVar25 * 8;
            goto LAB_180373580;
          }
          break;
        }
      }
      lVar19 = *(int64_t *)(unaff_RBX + 0x118);
      param_12 = *(uint64_t *)(lVar29 + lVar19 * 8);
      puVar18 = &param_12;
      param_13 = lVar29 + lVar19 * 8;
LAB_180373580:
      piVar4 = *(int **)(lVar29 + lVar19 * 8);
      if ((int *)*puVar18 != piVar4) {
        iVar31 = iVar24 * iVar31 + iVar30;
        for (; (piVar26 = piVar4, piVar20 != (int *)0x0 && (piVar26 = piVar20, iVar31 != *piVar20));
            piVar20 = *(int **)(piVar20 + 4)) {
        }
        if (piVar26 == piVar4) {
          uVar17 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,CONCAT71((int7)((uint64_t)lVar29 >> 8),3));
          param_10 = iVar31;
          param_11 = SystemCore_SignalHandler(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
          puVar18 = (uint64_t *)SystemCore_MessageQueueManager(unaff_RBX + 0x108);
          piVar26 = (int *)*puVar18;
        }
        lVar29 = *(int64_t *)(piVar26 + 2);
        fVar33 = *(float *)(lVar29 + 0x28);
        if (fVar33 < *(float *)(lVar29 + 0x18)) {
          *(int32_t *)(lVar29 + 0x48) = 0;
          *(uint64_t *)(lVar29 + 0x18) = 0;
          *(uint64_t *)(lVar29 + 0x20) = 0;
          *(uint64_t *)(lVar29 + 0x28) = 0;
          *(uint64_t *)(lVar29 + 0x30) = 0;
          *(uint64_t *)(lVar29 + 0x38) = 0;
          *(uint64_t *)(lVar29 + 0x40) = 0;
        }
        else {
          fVar34 = (fVar33 + *(float *)(lVar29 + 0x18)) * 0.5;
          *(float *)(lVar29 + 0x38) = fVar34;
          *(float *)(lVar29 + 0x3c) = (*(float *)(lVar29 + 0x2c) + *(float *)(lVar29 + 0x1c)) * 0.5;
          *(float *)(lVar29 + 0x40) = (*(float *)(lVar29 + 0x30) + *(float *)(lVar29 + 0x20)) * 0.5;
          *(int32_t *)(lVar29 + 0x44) = 0x7f7fffff;
          fVar33 = fVar33 - fVar34;
          fVar34 = *(float *)(lVar29 + 0x30) - *(float *)(lVar29 + 0x40);
          fVar35 = *(float *)(lVar29 + 0x2c) - *(float *)(lVar29 + 0x3c);
          *(float *)(lVar29 + 0x48) = SQRT(fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34);
        }
        iVar31 = *(int *)(unaff_RBX + 0x58);
        uVar2 = *(uint *)(unaff_RBX + 0x118);
        lVar29 = *(int64_t *)(unaff_RBX + 0x110);
        *(int32_t *)(unaff_RBP + 0x90) = 0;
        *(int32_t *)(unaff_RBP + 0x94) = 0;
        *(int32_t *)(unaff_RBP + 0x98) = 0;
        *(int32_t *)(unaff_RBP + 0x9c) = 0x7f7fffff;
        *(int32_t *)(unaff_RBP + 0xa0) = 0;
        *(int32_t *)(unaff_RBP + 0xa4) = 0;
        *(int32_t *)(unaff_RBP + 0xa8) = 0;
        *(int32_t *)(unaff_RBP + 0xac) = 0x7f7fffff;
        *(int32_t *)(unaff_RBP + 0xb0) = 0;
        *(int32_t *)(unaff_RBP + 0xb4) = 0;
        *(int32_t *)(unaff_RBP + 0xb8) = 0;
        *(int32_t *)(unaff_RBP + 0xbc) = 0x7f7fffff;
        iVar31 = iVar31 * iVar24 + iVar30;
        *(uint64_t *)(unaff_RBP + 0x140) = 0;
        *(uint64_t *)(unaff_RBP + 0xc0) = 0;
        *(uint64_t *)(unaff_RBP + 200) = 0;
        *(uint64_t *)(unaff_RBP + 0xd0) = 0;
        *(uint64_t *)(unaff_RBP + 0xd8) = 0;
        *(uint64_t *)(unaff_RBP + 0xe0) = 0;
        *(uint64_t *)(unaff_RBP + 0xe8) = 0;
        *(uint64_t *)(unaff_RBP + 0xf0) = 0;
        *(uint64_t *)(unaff_RBP + 0xf8) = 0;
        piVar20 = *(int **)(lVar29 + ((uint64_t)(int64_t)iVar31 % (uint64_t)uVar2) * 8);
        *(uint64_t *)(unaff_RBP + 0x100) = 0;
        *(uint64_t *)(unaff_RBP + 0x108) = 0;
        *(uint64_t *)(unaff_RBP + 0x110) = 0;
        *(uint64_t *)(unaff_RBP + 0x118) = 0;
        *(uint64_t *)(unaff_RBP + 0x120) = 0;
        *(uint64_t *)(unaff_RBP + 0x128) = 0;
        *(uint64_t *)(unaff_RBP + 0x130) = 0;
        *(uint64_t *)(unaff_RBP + 0x138) = 0;
        for (; piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
          if (iVar31 == *piVar20) goto LAB_180373799;
        }
        piVar20 = *(int **)(lVar29 + *(int64_t *)(unaff_RBX + 0x118) * 8);
LAB_180373799:
        if (piVar20 == *(int **)(lVar29 + *(int64_t *)(unaff_RBX + 0x118) * 8)) {
          uVar17 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3);
          param_8 = iVar31;
          param_9 = SystemCore_SignalHandler(uVar17,*(uint64_t *)(unaff_RBX + 0x68));
          puVar18 = (uint64_t *)SystemCore_MessageQueueManager(unaff_RBX + 0x108,unaff_RBP + -0x18,&param_8);
          piVar20 = (int *)*puVar18;
        }
        uVar17 = UltraHighFreq_DataProcessor1(unaff_RBP + 0x90,*(int64_t *)(piVar20 + 2) + 0x18,&system_data_0300);
        lVar19 = SystemCore_SecurityManager(uVar17,uVar6 & 0xffffffff,uVar5 & 0xffffffff);
        uVar2 = *(uint *)(unaff_RBX + 0x118);
        lVar29 = *(int64_t *)(unaff_RBX + 0x110);
        iVar30 = *(int *)(unaff_RBX + 0x58) * iVar24 + iVar30;
        *(float *)(unaff_RBP + 0x144) = (float)*(int *)(lVar19 + 0x110);
        for (piVar20 = *(int **)(lVar29 + ((uint64_t)(int64_t)iVar30 % (uint64_t)uVar2) * 8);
            piVar20 != (int *)0x0; piVar20 = *(int **)(piVar20 + 4)) {
          if (iVar30 == *piVar20) goto LAB_180373878;
        }
        piVar20 = *(int **)(lVar29 + *(int64_t *)(unaff_RBX + 0x118) * 8);
LAB_180373878:
        if (piVar20 == *(int **)(lVar29 + *(int64_t *)(unaff_RBX + 0x118) * 8)) {
          uVar22 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3);
          uVar17 = *(uint64_t *)(unaff_RBX + 0x68);
          *(int *)(unaff_RBP + -0x78) = iVar30;
          uVar17 = SystemCore_SignalHandler(uVar22,uVar17);
          *(uint64_t *)(unaff_RBP + -0x70) = uVar17;
          puVar18 = (uint64_t *)
                    SystemCore_MessageQueueManager(unaff_RBX + 0x108,unaff_RBP + -0x30,unaff_RBP + -0x78);
          piVar20 = (int *)*puVar18;
        }
        lVar29 = *(int64_t *)(piVar20 + 2);
        uVar17 = *(uint64_t *)(unaff_RBP + 0x98);
        uVar22 = *(uint64_t *)(unaff_RBP + 0xa0);
        uVar12 = *(uint64_t *)(unaff_RBP + 0xa8);
        *(uint64_t *)(lVar29 + 0x4c) = *(uint64_t *)(unaff_RBP + 0x90);
        *(uint64_t *)(lVar29 + 0x54) = uVar17;
        uVar17 = *(uint64_t *)(unaff_RBP + 0xb0);
        uVar13 = *(uint64_t *)(unaff_RBP + 0xb8);
        *(uint64_t *)(lVar29 + 0x5c) = uVar22;
        *(uint64_t *)(lVar29 + 100) = uVar12;
        uVar22 = *(uint64_t *)(unaff_RBP + 0xc0);
        uVar12 = *(uint64_t *)(unaff_RBP + 200);
        *(uint64_t *)(lVar29 + 0x6c) = uVar17;
        *(uint64_t *)(lVar29 + 0x74) = uVar13;
        uVar17 = *(uint64_t *)(unaff_RBP + 0xd0);
        uVar13 = *(uint64_t *)(unaff_RBP + 0xd8);
        *(uint64_t *)(lVar29 + 0x7c) = uVar22;
        *(uint64_t *)(lVar29 + 0x84) = uVar12;
        uVar22 = *(uint64_t *)(unaff_RBP + 0xe0);
        uVar12 = *(uint64_t *)(unaff_RBP + 0xe8);
        *(uint64_t *)(lVar29 + 0x8c) = uVar17;
        *(uint64_t *)(lVar29 + 0x94) = uVar13;
        uVar17 = *(uint64_t *)(unaff_RBP + 0xf0);
        uVar13 = *(uint64_t *)(unaff_RBP + 0xf8);
        *(uint64_t *)(lVar29 + 0x9c) = uVar22;
        *(uint64_t *)(lVar29 + 0xa4) = uVar12;
        uVar22 = *(uint64_t *)(unaff_RBP + 0x100);
        uVar12 = *(uint64_t *)(unaff_RBP + 0x108);
        *(uint64_t *)(lVar29 + 0xac) = uVar17;
        *(uint64_t *)(lVar29 + 0xb4) = uVar13;
        uVar17 = *(uint64_t *)(unaff_RBP + 0x110);
        uVar13 = *(uint64_t *)(unaff_RBP + 0x118);
        *(uint64_t *)(lVar29 + 0xbc) = uVar22;
        *(uint64_t *)(lVar29 + 0xc4) = uVar12;
        uVar14 = *(uint64_t *)(unaff_RBP + 0x120);
        uVar15 = *(uint64_t *)(unaff_RBP + 0x128);
        *(uint64_t *)(lVar29 + 0xcc) = uVar17;
        *(uint64_t *)(lVar29 + 0xd4) = uVar13;
        uVar22 = *(uint64_t *)(unaff_RBP + 0x130);
        uVar12 = *(uint64_t *)(unaff_RBP + 0x138);
        uVar17 = *(uint64_t *)(unaff_RBP + 0x140);
        *(uint64_t *)(lVar29 + 0xdc) = uVar14;
        *(uint64_t *)(lVar29 + 0xe4) = uVar15;
        *(uint64_t *)(lVar29 + 0xec) = uVar22;
        *(uint64_t *)(lVar29 + 0xf4) = uVar12;
        *(uint64_t *)(lVar29 + 0xfc) = uVar17;
      }
      iVar31 = *(int *)(unaff_RBX + 0x58);
      iVar16 = iVar16 + 1;
      param_4 = *(int *)(unaff_RBX + 0x54);
    } while (iVar16 < param_4 * iVar31);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x150) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
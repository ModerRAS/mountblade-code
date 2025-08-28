/* 此文件包含部分未处理的原始函数，这些函数将在后续处理中完成语义化替换 */
/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part077.c - 6 个函数
// 函数: void DataStructure_ceaa0(int64_t *param_1,uint param_2,int param_3)
void DataStructure_ceaa0(int64_t *param_1,uint param_2,int param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  char *pcVar10;
  float *pfVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int iVar15;
  uint *puVar16;
  byte bVar17;
  int64_t lVar18;
  int64_t lVar19;
  uint *puVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int8_t auVar25 [16];
  float fVar26;
  float fVar27;
  uint stack_special_x_10;
  int iStack_130;
  stack_special_x_10 = param_2;
  if ((int)param_2 < param_3) {
    do {
      plVar9 = (int64_t *)
               (*(int64_t *)(*param_1 + 0x868 + (uint64_t)(stack_special_x_10 >> 10) * 8) +
               (uint64_t)(stack_special_x_10 + (stack_special_x_10 >> 10) * -0x400) * 0x18);
      lVar1 = *plVar9;
      lVar2 = *(int64_t *)(lVar1 + 0x48);
      lVar8 = *(int64_t *)(lVar1 + 0x138) - *(int64_t *)(lVar1 + 0x130);
      lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
      bVar17 = *(byte *)(lVar2 + 0x21) & 1;
      iVar15 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
      uVar4 = *(uint *)(lVar2 + 0x68) & 0x400;
      if (*(int *)(lVar2 + 0xbe8) == 0) {
        if ((uVar4 == 0) && (iVar15 < 1)) {
          if (bVar17 == 0) {
            DataStructure_d59c0(*param_1,lVar1,*(int32_t *)((int64_t)plVar9 + 0xc));
          }
          else {
            DataStructure_d51f0();
          }
        }
        else if (bVar17 == 0) {
          DataStructure_d4760(*param_1,lVar1,*(int32_t *)((int64_t)plVar9 + 0xc),param_1[1]);
        }
        else {
          DataStructure_d3bb0();
        }
      }
      else if ((uVar4 == 0) && (iVar15 < 1)) {
        if (bVar17 == 0) {
          DataStructure_d8020(*param_1,lVar1,*(int32_t *)((int64_t)plVar9 + 0xc));
        }
        else {
          DataStructure_d77a0();
        }
      }
      else if (bVar17 == 0) {
        DataStructure_d6c70(*param_1,lVar1,*(int32_t *)((int64_t)plVar9 + 0xc),param_1[1]);
      }
      else {
        DataStructure_d6020();
      }
      lVar2 = *(int64_t *)(lVar1 + 0x60);
      lVar8 = *(int64_t *)(lVar1 + 0x58);
      if (iVar15 < 1) {
        uVar6 = GenericFunction_1800dae20();
        *(uint64_t *)(lVar1 + 0xa8) = uVar6;
        DataStructure_dfe00(uVar6,lVar1,(int)plVar9[2],*(int32_t *)((int64_t)plVar9 + 0xc),
                      *(uint64_t *)param_1[2]);
      }
      else {
        lVar18 = (int64_t)iVar15;
        lVar19 = 0;
        do {
          lVar3 = *(int64_t *)(lVar1 + 0x130);
          iVar15 = *(int *)(lVar19 + lVar3);
          if (0 < iVar15) {
            puVar16 = (uint *)((int64_t)*(int *)(system_parameter_buffer + 9000) * 0x488 +
                              system_parameter_buffer + 0x1a18);
            LOCK();
            uVar4 = *puVar16;
            *puVar16 = *puVar16 + iVar15;
            UNLOCK();
            uVar14 = (uint64_t)(uVar4 >> 0xe);
            uVar12 = (uint64_t)(iVar15 + -1 + uVar4 >> 0xe);
            if (uVar14 <= uVar12) {
              pcVar10 = (char *)((int64_t)puVar16 + uVar14 + 0x408);
              lVar13 = (uVar12 - uVar14) + 1;
              puVar20 = puVar16 + (uint64_t)(uVar4 >> 0xe) * 2 + 2;
              do {
                iVar15 = (int)uVar14;
                if (*(int64_t *)puVar20 == 0) {
                  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x100000,0x25);
                  LOCK();
                  bVar21 = *(int64_t *)(puVar16 + (int64_t)iVar15 * 2 + 2) == 0;
                  if (bVar21) {
                    *(int64_t *)(puVar16 + (int64_t)iVar15 * 2 + 2) = lVar5;
                  }
                  UNLOCK();
                  if (bVar21) {
                    LOCK();
                    *(int8_t *)((int64_t)iVar15 + 0x408 + (int64_t)puVar16) = 0;
                    UNLOCK();
                  }
                  else {
                    if (lVar5 != 0) {
// WARNING: Subroutine does not return
                      CoreEngineMemoryPoolCleaner(lVar5);
                    }
                    do {
                    } while (*pcVar10 != '\0');
                  }
                }
                else {
                  do {
                  } while (*pcVar10 != '\0');
                }
                uVar14 = (uint64_t)(iVar15 + 1);
                puVar20 = puVar20 + 2;
                pcVar10 = pcVar10 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
            *(uint *)(lVar19 + 4 + lVar3) = uVar4;
            *(uint *)(lVar19 + 8 + lVar3) = uVar4;
          }
          lVar19 = lVar19 + 0xc;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        iStack_130 = (int)((lVar2 - lVar8) / 0x70);
        if (0 < iStack_130) {
          lVar2 = *(int64_t *)(lVar1 + 0x58);
          uVar4 = *(uint *)(*(int64_t *)(lVar1 + 0x130) + 8 +
                           (int64_t)*(short *)(lVar2 + 0x30) * 0xc);
          uVar7 = uVar4 >> 0xe;
          fVar23 = *(float *)(lVar2 + 0x34);
          pfVar11 = (float *)(*(int64_t *)
                               ((int64_t)*(int *)(system_parameter_buffer + 9000) * 0x488 + system_parameter_buffer +
                                0x1a20 + (uint64_t)uVar7 * 8) +
                             (uint64_t)(uVar4 + uVar7 * -0x4000) * 0x40);
          pfVar11[8] = fVar23;
          fVar22 = -fVar23;
          fVar27 = *(float *)(lVar2 + 0x38);
          pfVar11[9] = fVar27;
          pfVar11[10] = *(float *)(lVar2 + 0x3c);
          *pfVar11 = fVar27;
          pfVar11[1] = -fVar23;
          pfVar11[2] = 0.0;
          pfVar11[3] = 3.4028235e+38;
          fVar23 = fVar27 * fVar27 + fVar22 * fVar22 + 0.0;
          auVar25 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
          fVar26 = auVar25._0_4_;
          fVar23 = fVar26 * 0.5 * (3.0 - fVar23 * fVar26 * fVar26);
          fVar22 = fVar22 * fVar23;
          fVar26 = fVar23 * 0.0;
          fVar27 = fVar27 * fVar23;
          pfVar11[1] = fVar22;
          pfVar11[2] = fVar26;
          *pfVar11 = fVar27;
          pfVar11[4] = fVar26 * pfVar11[9] - fVar22 * pfVar11[10];
          pfVar11[5] = fVar27 * pfVar11[10] - fVar26 * pfVar11[8];
          pfVar11[6] = fVar22 * pfVar11[8] - fVar27 * pfVar11[9];
          pfVar11[7] = 3.4028235e+38;
          fVar23 = pfVar11[5];
          fVar27 = pfVar11[4];
          fVar22 = pfVar11[6];
          fVar26 = fVar27 * fVar27 + fVar23 * fVar23 + fVar22 * fVar22;
          auVar25 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
          fVar24 = auVar25._0_4_;
          fVar26 = fVar24 * 0.5 * (3.0 - fVar26 * fVar24 * fVar24);
          pfVar11[4] = fVar27 * fVar26;
          pfVar11[5] = fVar23 * fVar26;
          pfVar11[6] = fVar22 * fVar26;
          fVar23 = *(float *)(lVar2 + 0x2c);
          *pfVar11 = fVar23 * *pfVar11;
          pfVar11[1] = fVar23 * pfVar11[1];
          pfVar11[2] = fVar23 * pfVar11[2];
          pfVar11[4] = fVar23 * pfVar11[4];
          pfVar11[5] = fVar23 * pfVar11[5];
          pfVar11[6] = fVar23 * pfVar11[6];
          pfVar11[9] = fVar23 * pfVar11[9];
          pfVar11[8] = fVar23 * pfVar11[8];
          pfVar11[10] = fVar23 * pfVar11[10];
// WARNING: Subroutine does not return
          AdvancedSystemController(*(int32_t *)(lVar2 + 0xc));
        }
      }
      stack_special_x_10 = stack_special_x_10 + 1;
    } while ((int)stack_special_x_10 < param_3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_ceabf(int64_t *param_1,uint param_2)
void DataStructure_ceabf(int64_t *param_1,uint param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t in_RAX;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t unaff_RBX;
  int64_t *plVar9;
  char *pcVar10;
  float *pfVar11;
  uint64_t unaff_RBP;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t unaff_RDI;
  uint *puVar16;
  byte bVar17;
  int64_t lVar18;
  uint64_t unaff_R12;
  int64_t lVar19;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint *puVar20;
  uint64_t unaff_R15;
  bool bVar21;
  float fVar22;
  float fVar23;
  int8_t auVar24 [16];
  int32_t unaff_XMM6_Da;
  float fVar25;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar26;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar27;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  int iStack0000000000000038;
  float fStack0000000000000044;
  int32_t local_buffer_4c;
  float fStack0000000000000054;
  int32_t local_buffer_5c;
  int32_t local_buffer_6c;
  int32_t local_buffer_7c;
  int64_t *local_var_170;
  uint local_var_178;
  int local_var_180;
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x40) = unaff_R15;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x98) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x94) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x90) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x8c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0xa8) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0xa4) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0xa0) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x9c) = unaff_XMM11_Dd;
  *(int32_t *)(in_RAX + -0xb8) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0xb4) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0xb0) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0xac) = unaff_XMM12_Dd;
  *(int32_t *)(in_RAX + -200) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0xc4) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0xc0) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0xbc) = unaff_XMM13_Dd;
  *(int32_t *)(in_RAX + -0xd8) = unaff_XMM14_Da;
  *(int32_t *)(in_RAX + -0xd4) = unaff_XMM14_Db;
  *(int32_t *)(in_RAX + -0xd0) = unaff_XMM14_Dc;
  *(int32_t *)(in_RAX + -0xcc) = unaff_XMM14_Dd;
  *(int32_t *)(in_RAX + -0xe8) = unaff_XMM15_Da;
  *(int32_t *)(in_RAX + -0xe4) = unaff_XMM15_Db;
  *(int32_t *)(in_RAX + -0xe0) = unaff_XMM15_Dc;
  *(int32_t *)(in_RAX + -0xdc) = unaff_XMM15_Dd;
  do {
    plVar9 = (int64_t *)
             (*(int64_t *)(*param_1 + 0x868 + (uint64_t)(param_2 >> 10) * 8) +
             (uint64_t)(param_2 + (param_2 >> 10) * -0x400) * 0x18);
    lVar1 = *plVar9;
    lVar2 = *(int64_t *)(lVar1 + 0x48);
    lVar8 = *(int64_t *)(lVar1 + 0x138) - *(int64_t *)(lVar1 + 0x130);
    lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
    bVar17 = *(byte *)(lVar2 + 0x21) & 1;
    iVar15 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
    uVar4 = *(uint *)(lVar2 + 0x68) & 0x400;
    if (*(int *)(lVar2 + 0xbe8) == 0) {
      if ((uVar4 == 0) && (iVar15 < 1)) {
        if (bVar17 == 0) {
          DataStructure_d59c0(*param_1,lVar1,*(int32_t *)((int64_t)plVar9 + 0xc));
        }
        else {
          DataStructure_d51f0();
        }
      }
      else if (bVar17 == 0) {
        DataStructure_d4760(*param_1,lVar1,*(int32_t *)((int64_t)plVar9 + 0xc),param_1[1]);
      }
      else {
        DataStructure_d3bb0();
      }
    }
    else if ((uVar4 == 0) && (iVar15 < 1)) {
      if (bVar17 == 0) {
        DataStructure_d8020(*param_1,lVar1,*(int32_t *)((int64_t)plVar9 + 0xc));
      }
      else {
        DataStructure_d77a0();
      }
    }
    else if (bVar17 == 0) {
      DataStructure_d6c70(*param_1,lVar1,*(int32_t *)((int64_t)plVar9 + 0xc),param_1[1]);
    }
    else {
      DataStructure_d6020();
    }
    lVar2 = *(int64_t *)(lVar1 + 0x60);
    lVar8 = *(int64_t *)(lVar1 + 0x58);
    if (iVar15 < 1) {
      uVar6 = GenericFunction_1800dae20();
      *(uint64_t *)(lVar1 + 0xa8) = uVar6;
      DataStructure_dfe00(uVar6,lVar1,(int)plVar9[2],*(int32_t *)((int64_t)plVar9 + 0xc),
                    *(uint64_t *)param_1[2]);
    }
    else {
      lVar18 = (int64_t)iVar15;
      lVar19 = 0;
      do {
        lVar3 = *(int64_t *)(lVar1 + 0x130);
        iVar15 = *(int *)(lVar19 + lVar3);
        if (0 < iVar15) {
          puVar16 = (uint *)((int64_t)*(int *)(system_parameter_buffer + 9000) * 0x488 +
                            system_parameter_buffer + 0x1a18);
          LOCK();
          uVar4 = *puVar16;
          *puVar16 = *puVar16 + iVar15;
          UNLOCK();
          uVar14 = (uint64_t)(uVar4 >> 0xe);
          uVar12 = (uint64_t)(iVar15 + -1 + uVar4 >> 0xe);
          if (uVar14 <= uVar12) {
            pcVar10 = (char *)((int64_t)puVar16 + uVar14 + 0x408);
            lVar13 = (uVar12 - uVar14) + 1;
            puVar20 = puVar16 + (uint64_t)(uVar4 >> 0xe) * 2 + 2;
            do {
              iVar15 = (int)uVar14;
              if (*(int64_t *)puVar20 == 0) {
                lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x100000,0x25);
                LOCK();
                bVar21 = *(int64_t *)(puVar16 + (int64_t)iVar15 * 2 + 2) == 0;
                if (bVar21) {
                  *(int64_t *)(puVar16 + (int64_t)iVar15 * 2 + 2) = lVar5;
                }
                UNLOCK();
                if (bVar21) {
                  LOCK();
                  *(int8_t *)((int64_t)iVar15 + 0x408 + (int64_t)puVar16) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar5 != 0) {
// WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner(lVar5);
                  }
                  do {
                  } while (*pcVar10 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar10 != '\0');
              }
              uVar14 = (uint64_t)(iVar15 + 1);
              puVar20 = puVar20 + 2;
              pcVar10 = pcVar10 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          *(uint *)(lVar19 + 4 + lVar3) = uVar4;
          *(uint *)(lVar19 + 8 + lVar3) = uVar4;
        }
        lVar19 = lVar19 + 0xc;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      iStack0000000000000038 = (int)((lVar2 - lVar8) / 0x70);
      if (0 < iStack0000000000000038) {
        local_buffer_6c = 0x7f7fffff;
        local_buffer_7c = 0x7f7fffff;
        lVar2 = *(int64_t *)(lVar1 + 0x58);
        uVar4 = *(uint *)(*(int64_t *)(lVar1 + 0x130) + 8 +
                         (int64_t)*(short *)(lVar2 + 0x30) * 0xc);
        uVar7 = uVar4 >> 0xe;
        fVar22 = *(float *)(lVar2 + 0x34);
        pfVar11 = (float *)(*(int64_t *)
                             ((int64_t)*(int *)(system_parameter_buffer + 9000) * 0x488 + system_parameter_buffer +
                              0x1a20 + (uint64_t)uVar7 * 8) +
                           (uint64_t)(uVar4 + uVar7 * -0x4000) * 0x40);
        pfVar11[8] = fVar22;
        fStack0000000000000044 = -fVar22;
        fVar26 = *(float *)(lVar2 + 0x38);
        pfVar11[9] = fVar26;
        pfVar11[10] = *(float *)(lVar2 + 0x3c);
        *pfVar11 = fVar26;
        pfVar11[1] = -fVar22;
        pfVar11[2] = 0.0;
        pfVar11[3] = 3.4028235e+38;
        local_buffer_4c = 0x7f7fffff;
        fVar22 = fVar26 * fVar26 + fStack0000000000000044 * fStack0000000000000044 + 0.0;
        auVar24 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
        fVar25 = auVar24._0_4_;
        fVar22 = fVar25 * 0.5 * (3.0 - fVar22 * fVar25 * fVar25);
        fVar27 = fStack0000000000000044 * fVar22;
        fVar25 = fVar22 * 0.0;
        fVar26 = fVar26 * fVar22;
        pfVar11[1] = fVar27;
        pfVar11[2] = fVar25;
        *pfVar11 = fVar26;
        fStack0000000000000054 = fVar26 * pfVar11[10] - fVar25 * pfVar11[8];
        pfVar11[4] = fVar25 * pfVar11[9] - fVar27 * pfVar11[10];
        pfVar11[5] = fStack0000000000000054;
        pfVar11[6] = fVar27 * pfVar11[8] - fVar26 * pfVar11[9];
        pfVar11[7] = 3.4028235e+38;
        fVar22 = pfVar11[5];
        fVar26 = pfVar11[4];
        local_buffer_5c = 0x7f7fffff;
        fVar25 = pfVar11[6];
        fVar27 = fVar26 * fVar26 + fVar22 * fVar22 + fVar25 * fVar25;
        auVar24 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
        fVar23 = auVar24._0_4_;
        fVar27 = fVar23 * 0.5 * (3.0 - fVar27 * fVar23 * fVar23);
        pfVar11[4] = fVar26 * fVar27;
        pfVar11[5] = fVar22 * fVar27;
        pfVar11[6] = fVar25 * fVar27;
        fVar22 = *(float *)(lVar2 + 0x2c);
        *pfVar11 = fVar22 * *pfVar11;
        pfVar11[1] = fVar22 * pfVar11[1];
        pfVar11[2] = fVar22 * pfVar11[2];
        pfVar11[4] = fVar22 * pfVar11[4];
        pfVar11[5] = fVar22 * pfVar11[5];
        pfVar11[6] = fVar22 * pfVar11[6];
        pfVar11[9] = fVar22 * pfVar11[9];
        pfVar11[8] = fVar22 * pfVar11[8];
        pfVar11[10] = fVar22 * pfVar11[10];
// WARNING: Subroutine does not return
        AdvancedSystemController(*(int32_t *)(lVar2 + 0xc));
      }
    }
    param_2 = local_var_178 + 1;
    param_1 = local_var_170;
    local_var_178 = param_2;
    if (local_var_180 <= (int)param_2) {
      return;
    }
  } while( true );
}
// 函数: void DataStructure_cf258(void)
void DataStructure_cf258(void)
{
  return;
}
// 函数: void DataStructure_cf260(float *param_1,int param_2,float *param_3,float param_4,uint64_t param_5,
void DataStructure_cf260(float *param_1,int param_2,float *param_3,float param_4,uint64_t param_5,
                  short *param_6,short *param_7,char *param_8)
{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  int64_t lVar4;
  float fVar5;
  short sVar6;
  float fVar7;
  fVar7 = (param_3[1] - param_1[5]) * param_1[1] + (*param_3 - param_1[4]) * *param_1 +
          (param_3[2] - param_1[6]) * param_1[2];
  if ((fVar7 <= -param_4) || (param_4 < 0.0001)) {
    *param_8 = '\x01';
    *param_6 = 0;
    *param_7 = 0;
    return;
  }
  fVar2 = param_1[(uint64_t)(uint)param_1[0x43] * 0xf + 0x18];
  while ((fVar5 = 0.0, 1 < (int)fVar2 &&
         (fVar5 = fVar2,
         (((param_4 + param_4) * param_1[10]) / (fVar7 * param_1[0xb])) * (float)(int)param_1[8] *
         0.25 < (float)(1 << (SUB41(fVar2,0) & 0x1f))))) {
    fVar2 = (float)((int)fVar2 + -1);
  }
  lVar4 = (int64_t)(int)fVar5 * 8 + 0x68;
  do {
    fVar2 = *(float *)((uint64_t)(uint)param_1[0x43] * 0x3c + lVar4 + (int64_t)param_1);
    LOCK();
    pfVar1 = param_1 + (int64_t)(int)fVar5 + 0x74;
    fVar7 = *pfVar1;
    *pfVar1 = (float)((int)*pfVar1 + 1);
    UNLOCK();
    if ((uint)fVar7 < (uint)fVar2) {
      *(uint64_t *)
       (*(int64_t *)(param_1 + (int64_t)(int)fVar5 * 8 + 0x44) + (uint64_t)(uint)fVar7 * 8) =
           (int64_t)param_2 | param_5;
      break;
    }
    lVar4 = lVar4 + -8;
    fVar5 = (float)((int)fVar5 + -1);
  } while (-1 < (int)fVar5);
  uVar3 = (uint64_t)
          *(ushort *)
           ((uint64_t)(uint)param_1[0x43] * 0x3c + (int64_t)(int)fVar5 * 8 + 0x66 +
           (int64_t)param_1);
  sVar6 = 1 << (SUB41(fVar5,0) & 0x1f);
  *param_6 = sVar6 * (short)((uint64_t)(uint)fVar7 % uVar3);
  *param_7 = *(short *)(param_1 +
                       (int64_t)(int)fVar5 * 2 + (uint64_t)(uint)param_1[0x43] * 0xf + 0x19) +
             sVar6 * (short)((uint)fVar7 / uVar3);
  *param_8 = '\x01' << (SUB41(fVar5,0) & 0x1f);
  return;
}
// 函数: void DataStructure_cf2db(float param_1,uint64_t param_2,float param_3,float param_4,uint64_t param_5,
void DataStructure_cf2db(float param_1,uint64_t param_2,float param_3,float param_4,uint64_t param_5,
                  uint64_t param_6,short *param_7,short *param_8,char *param_9)
{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int64_t in_RAX;
  int iVar4;
  int64_t in_RCX;
  uint64_t uVar5;
  int64_t lVar6;
  int unaff_EBX;
  int iVar7;
  int iVar8;
  int64_t unaff_RDI;
  short sVar9;
  uint64_t in_R10;
  iVar8 = unaff_EBX + 1;
  iVar4 = *(int *)(in_RAX * 0x3c + 0x60 + unaff_RDI);
  while ((iVar7 = unaff_EBX, 1 < iVar4 &&
         (iVar7 = iVar4,
         ((param_4 * *(float *)(in_RCX + 0x28)) / param_3) * param_1 * 0.25 <
         (float)(iVar8 << ((byte)iVar4 & 0x1f))))) {
    iVar4 = iVar4 + -1;
  }
  lVar6 = (int64_t)iVar7 * 8 + 0x68;
  do {
    uVar3 = *(uint *)((uint64_t)*(uint *)(unaff_RDI + 0x10c) * 0x3c + lVar6 + unaff_RDI);
    LOCK();
    puVar1 = (uint *)(unaff_RDI + 0x1d0 + (int64_t)iVar7 * 4);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + iVar8;
    UNLOCK();
    if (uVar2 < uVar3) {
      *(uint64_t *)
       (*(int64_t *)((int64_t)iVar7 * 0x20 + 0x110 + unaff_RDI) + (uint64_t)uVar2 * 8) =
           in_R10 | param_6;
      break;
    }
    lVar6 = lVar6 + -8;
    iVar7 = iVar7 - iVar8;
  } while (-1 < iVar7);
  uVar5 = (uint64_t)
          *(ushort *)
           ((uint64_t)*(uint *)(unaff_RDI + 0x10c) * 0x3c + (int64_t)iVar7 * 8 + 0x66 + unaff_RDI)
  ;
  sVar9 = (short)iVar8 << ((byte)iVar7 & 0x1f);
  *param_7 = sVar9 * (short)((uint64_t)uVar2 % uVar5);
  *param_8 = *(short *)((uint64_t)*(uint *)(unaff_RDI + 0x10c) * 0x3c + (int64_t)iVar7 * 8 + 100 +
                       unaff_RDI) + sVar9 * (short)(uVar2 / uVar5);
  *param_9 = (char)iVar8 << ((byte)iVar7 & 0x1f);
  return;
}
// 函数: void DataStructure_cf40c(void)
void DataStructure_cf40c(void)
{
  int16_t *local_var_38;
  int16_t *local_var_40;
  int8_t *local_var_48;
  *local_var_48 = 1;
  *local_var_38 = 0;
  *local_var_40 = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint DataStructure_cf430(uint *param_1,int param_2,int64_t param_3)
{
  uint uVar1;
  float fVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint *puVar11;
  float fVar12;
  uVar3 = *(uint *)(param_3 + 0x114);
  uVar1 = *(uint *)(param_3 + 0x118);
  uVar7 = (uint64_t)param_2;
  *param_1 = *(uint *)(param_3 + 0x110) ^ 0x80000000;
  param_1[1] = uVar3 ^ 0x80000000;
  param_1[2] = uVar1 ^ 0x80000000;
  param_1[3] = 0x7f7fffff;
  uVar4 = *(uint64_t *)(param_3 + 0x128);
  *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_3 + 0x120);
  *(uint64_t *)(param_1 + 6) = uVar4;
  param_1[8] = (int)*(float *)(param_3 + 0x11c20);
  param_1[9] = (int)*(float *)(param_3 + 0x11c24);
  fVar2 = *(float *)(param_3 + 0x144);
  param_1[10] = (uint)fVar2;
  fVar12 = (float)tanf(*(float *)(param_3 + 0x14c) * 0.5);
  fVar12 = fVar12 * fVar2;
  puVar11 = param_1 + 0x74;
  lVar10 = 6;
  param_1[0xb] = (uint)(fVar12 + fVar12);
  param_1 = param_1 + 0x46;
  do {
    *(int64_t *)(param_1 + 0x36) = *(int64_t *)(param_1 + 0x34);
    lVar6 = *(int64_t *)(param_1 + -2);
    *(int64_t *)param_1 = lVar6;
    if (uVar7 == 0) {
      *(uint64_t *)param_1 = lVar6 + uVar7 * 8;
    }
    else if ((uint64_t)(*(int64_t *)(param_1 + 2) - lVar6 >> 3) < uVar7) {
      uVar9 = 1;
      if (1 < uVar7) {
        uVar9 = uVar7;
      }
      if (uVar9 == 0) {
        lVar5 = 0;
        lVar8 = lVar6;
      }
      else {
        lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 8,(char)param_1[4]);
        lVar6 = *(int64_t *)(param_1 + -2);
        lVar8 = *(int64_t *)param_1;
      }
      if (lVar6 != lVar8) {
// WARNING: Subroutine does not return
        memmove(lVar5,lVar6,lVar8 - lVar6);
      }
      if (uVar7 != 0) {
// WARNING: Subroutine does not return
        memset(lVar5,0,uVar7 * 8);
      }
      if (*(int64_t *)(param_1 + -2) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int64_t *)(param_1 + -2) = lVar5;
      *(uint64_t *)(param_1 + 2) = lVar5 + uVar9 * 8;
      *(int64_t *)param_1 = lVar5;
    }
    else {
      if (uVar7 != 0) {
// WARNING: Subroutine does not return
        memset(lVar6,0,uVar7 * 8);
      }
      *(int64_t *)param_1 = lVar6;
    }
    param_1 = param_1 + 8;
    LOCK();
    uVar1 = *puVar11;
    *puVar11 = 0;
    UNLOCK();
    puVar11 = puVar11 + 1;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      return uVar1;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t DataStructure_cf47f(uint param_1,int param_2,uint param_3,int32_t param_4)
{
  float fVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int32_t *in_RCX;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t unaff_RDI;
  int64_t *plVar9;
  int64_t in_R8;
  int64_t lVar10;
  int32_t *puVar11;
  float fVar12;
  int32_t in_XMM4_Da;
  int32_t in_XMM4_Db;
  uVar6 = (uint64_t)param_2;
  *in_RCX = in_XMM4_Db;
  in_RCX[1] = in_XMM4_Da;
  in_RCX[2] = param_3 ^ param_1;
  in_RCX[3] = param_4;
  uVar3 = *(uint64_t *)(in_R8 + 0x128);
  *(uint64_t *)(in_RCX + 4) = *(uint64_t *)(in_R8 + 0x120);
  *(uint64_t *)(in_RCX + 6) = uVar3;
  in_RCX[8] = (int)*(float *)(in_R8 + 0x11c20);
  in_RCX[9] = (int)*(float *)(in_R8 + 0x11c24);
  fVar1 = *(float *)(in_R8 + 0x144);
  in_RCX[10] = fVar1;
  fVar12 = (float)tanf(*(float *)(in_R8 + 0x14c) * 0.5);
  fVar12 = fVar12 * fVar1;
  puVar11 = (int32_t *)(unaff_RDI + 0x1d0);
  lVar10 = 6;
  *(float *)(unaff_RDI + 0x2c) = fVar12 + fVar12;
  plVar9 = (int64_t *)(unaff_RDI + 0x118);
  do {
    plVar9[0x1b] = plVar9[0x1a];
    lVar5 = plVar9[-1];
    *plVar9 = lVar5;
    if (uVar6 == 0) {
      *plVar9 = lVar5 + uVar6 * 8;
    }
    else if ((uint64_t)(plVar9[1] - lVar5 >> 3) < uVar6) {
      uVar8 = 1;
      if (1 < uVar6) {
        uVar8 = uVar6;
      }
      if (uVar8 == 0) {
        lVar4 = 0;
        lVar7 = lVar5;
      }
      else {
        lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar8 * 8,(char)plVar9[2]);
        lVar5 = plVar9[-1];
        lVar7 = *plVar9;
      }
      if (lVar5 != lVar7) {
// WARNING: Subroutine does not return
        memmove(lVar4,lVar5,lVar7 - lVar5);
      }
      if (uVar6 != 0) {
// WARNING: Subroutine does not return
        memset(lVar4,0,uVar6 * 8);
      }
      if (plVar9[-1] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plVar9[-1] = lVar4;
      plVar9[1] = lVar4 + uVar8 * 8;
      *plVar9 = lVar4;
    }
    else {
      if (uVar6 != 0) {
// WARNING: Subroutine does not return
        memset(lVar5,0,uVar6 * 8);
      }
      *plVar9 = lVar5;
    }
    plVar9 = plVar9 + 4;
    LOCK();
    uVar2 = *puVar11;
    *puVar11 = 0;
    UNLOCK();
    puVar11 = puVar11 + 1;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      return uVar2;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t DataStructure_cf530(int64_t param_1)
{
  int32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t unaff_RSI;
  int64_t *unaff_RDI;
  int64_t unaff_R12;
  int32_t *unaff_R15;
  do {
    unaff_RDI[0x1b] = unaff_RDI[0x1a];
    lVar3 = unaff_RDI[-1];
    *unaff_RDI = lVar3;
    if (unaff_RSI == 0) {
      *unaff_RDI = lVar3 + param_1;
    }
    else if ((uint64_t)(unaff_RDI[1] - lVar3 >> 3) < unaff_RSI) {
      uVar5 = 1;
      if (1 < unaff_RSI) {
        uVar5 = unaff_RSI;
      }
      if (uVar5 == 0) {
        lVar2 = 0;
        lVar4 = lVar3;
      }
      else {
        lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar5 * 8,(char)unaff_RDI[2]);
        lVar3 = unaff_RDI[-1];
        lVar4 = *unaff_RDI;
      }
      if (lVar3 != lVar4) {
// WARNING: Subroutine does not return
        memmove(lVar2,lVar3,lVar4 - lVar3);
      }
      if (unaff_RSI != 0) {
// WARNING: Subroutine does not return
        memset(lVar2,0,unaff_RSI * 8);
      }
      if (unaff_RDI[-1] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      unaff_RDI[-1] = lVar2;
      unaff_RDI[1] = lVar2 + uVar5 * 8;
      param_1 = 0;
      *unaff_RDI = lVar2;
    }
    else {
      if (unaff_RSI != 0) {
// WARNING: Subroutine does not return
        memset(lVar3,0,unaff_RSI * 8);
      }
      *unaff_RDI = lVar3;
      param_1 = 0;
    }
    unaff_RDI = unaff_RDI + 4;
    LOCK();
    uVar1 = *unaff_R15;
    *unaff_R15 = 0;
    UNLOCK();
    unaff_R15 = unaff_R15 + 1;
    unaff_R12 = unaff_R12 + -1;
    if (unaff_R12 == 0) {
      return uVar1;
    }
  } while( true );
}
// WARNING: Removing unreachable block (ram,0x0001802cfd28)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
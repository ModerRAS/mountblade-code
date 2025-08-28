// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_05_part024.c - 9 个函数
// 函数: void DataStructure_e804f(int64_t param_1)
void DataStructure_e804f(int64_t param_1)
{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int64_t *plVar8;
  int64_t lVar9;
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
  int32_t uVar25;
  int32_t uVar26;
  int32_t uVar27;
  int32_t uVar28;
  int32_t uVar29;
  float *pfVar30;
  uint64_t uVar31;
  int64_t lVar32;
  uint *puVar33;
  float *unaff_RBP;
  int64_t unaff_RSI;
  char cVar34;
  int iVar35;
  int64_t lVar36;
  int32_t uVar37;
  float fVar38;
  float fVar39;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Dc;
  float fVar40;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  int32_t local_buffer_70;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  int32_t local_var_110;
  int32_t local_var_118;
  int32_t local_var_120;
  int32_t local_var_128;
  int32_t local_var_130;
  int32_t local_var_138;
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0xa8) >> 2 & 1) == 0) {
      lVar32 = *(int64_t *)(param_1 + 0x208);
      lVar36 = *(int64_t *)(unaff_RSI + 0x28);
      fVar2 = *(float *)(lVar32 + 0x178);
      if (fVar2 < *(float *)(lVar32 + 0x188) || fVar2 == *(float *)(lVar32 + 0x188)) {
        if (fVar2 < *(float *)(lVar36 + 0xf8)) {
          *(float *)(lVar36 + 0xf8) = fVar2;
        }
        if (*(float *)(lVar32 + 0x17c) < *(float *)(lVar36 + 0xfc)) {
          *(float *)(lVar36 + 0xfc) = *(float *)(lVar32 + 0x17c);
        }
        if (*(float *)(lVar32 + 0x180) < *(float *)(lVar36 + 0x100)) {
          *(float *)(lVar36 + 0x100) = *(float *)(lVar32 + 0x180);
        }
        fVar2 = *(float *)(lVar32 + 0x188);
        if (*(float *)(lVar36 + 0x108) <= fVar2 && fVar2 != *(float *)(lVar36 + 0x108)) {
          *(float *)(lVar36 + 0x108) = fVar2;
        }
        fVar2 = *(float *)(lVar32 + 0x18c);
        if (*(float *)(lVar36 + 0x10c) <= fVar2 && fVar2 != *(float *)(lVar36 + 0x10c)) {
          *(float *)(lVar36 + 0x10c) = fVar2;
        }
        fVar2 = *(float *)(lVar32 + 400);
        if (*(float *)(lVar36 + 0x110) <= fVar2 && fVar2 != *(float *)(lVar36 + 0x110)) {
          *(float *)(lVar36 + 0x110) = fVar2;
        }
      }
    }
    else {
      local_buffer_70 = 0;
      _fStack0000000000000040 = 0;
      _fStack0000000000000048 = 0;
      _fStack0000000000000050 = 0;
      _fStack0000000000000058 = 0;
      local_buffer_60 = 0;
      local_buffer_68 = 0;
      DataStructure_fe910(0,&local_buffer_00000040);
      lVar32 = *(int64_t *)(unaff_RSI + 0x28);
      if (fStack0000000000000040 <= fStack0000000000000050) {
        if (fStack0000000000000040 < *(float *)(lVar32 + 0xf8)) {
          *(float *)(lVar32 + 0xf8) = fStack0000000000000040;
        }
        if (fStack0000000000000044 < *(float *)(lVar32 + 0xfc)) {
          *(float *)(lVar32 + 0xfc) = fStack0000000000000044;
        }
        if (fStack0000000000000048 < *(float *)(lVar32 + 0x100)) {
          *(float *)(lVar32 + 0x100) = fStack0000000000000048;
        }
        if (*(float *)(lVar32 + 0x108) <= fStack0000000000000050 &&
            fStack0000000000000050 != *(float *)(lVar32 + 0x108)) {
          *(float *)(lVar32 + 0x108) = fStack0000000000000050;
        }
        if (*(float *)(lVar32 + 0x10c) <= fStack0000000000000054 &&
            fStack0000000000000054 != *(float *)(lVar32 + 0x10c)) {
          *(float *)(lVar32 + 0x10c) = fStack0000000000000054;
        }
        if (*(float *)(lVar32 + 0x110) <= fStack0000000000000058 &&
            fStack0000000000000058 != *(float *)(lVar32 + 0x110)) {
          *(float *)(lVar32 + 0x110) = fStack0000000000000058;
        }
      }
    }
    param_1 = *(int64_t *)(unaff_RSI + 0x260);
    cVar34 = '\0';
    uVar37 = unaff_XMM9_Da;
    uVar25 = unaff_XMM9_Dc;
    uVar26 = unaff_XMM8_Da;
    uVar27 = unaff_XMM8_Dc;
    uVar28 = unaff_XMM7_Da;
    uVar29 = unaff_XMM7_Dc;
    if ('\0' < *(char *)(param_1 + 0x20)) {
      do {
        local_var_138 = uVar29;
        local_var_130 = uVar28;
        local_var_128 = uVar27;
        local_var_120 = uVar26;
        local_var_118 = uVar25;
        local_var_110 = uVar37;
        iVar35 = 0;
        puVar33 = (uint *)((int64_t)cVar34 * 0x100 + *(int64_t *)(param_1 + 0x18));
        lVar32 = *(int64_t *)(puVar33 + 0x2c);
        if (*(int64_t *)(puVar33 + 0x2e) - lVar32 >> 3 != 0) {
          lVar36 = 0;
          do {
            plVar8 = *(int64_t **)(lVar36 + lVar32);
            lVar32 = *(int64_t *)(unaff_RSI + 0x28);
            do {
              LOCK();
              uVar1 = *puVar33;
              *puVar33 = *puVar33 | 1;
              UNLOCK();
            } while ((uVar1 & 1) != 0);
            fVar40 = (float)puVar33[1];
            fVar2 = (float)puVar33[2];
            fVar3 = (float)puVar33[3];
            fVar4 = (float)puVar33[4];
            fVar39 = (float)puVar33[5];
            fVar10 = (float)puVar33[6];
            fVar11 = (float)puVar33[7];
            fVar12 = (float)puVar33[8];
            unaff_RBP[-6] = fVar40;
            unaff_RBP[-5] = fVar2;
            unaff_RBP[-4] = fVar3;
            unaff_RBP[-3] = fVar4;
            unaff_RBP[-2] = fVar39;
            unaff_RBP[-1] = fVar10;
            *unaff_RBP = fVar11;
            unaff_RBP[1] = fVar12;
            *puVar33 = 0;
            SystemSecurityManager(&local_buffer_00000078,&local_buffer_00000020);
            fVar24 = fStack0000000000000084;
            fVar23 = fStack0000000000000080;
            fVar22 = fStack000000000000007c;
            fVar21 = fStack0000000000000078;
            fVar13 = unaff_RBP[-0x1e];
            fVar14 = unaff_RBP[-0x1d];
            fVar15 = unaff_RBP[-0x1c];
            fVar16 = unaff_RBP[-0x1b];
            fVar17 = unaff_RBP[-0x1a];
            fVar18 = unaff_RBP[-0x19];
            fVar19 = unaff_RBP[-0x18];
            fVar20 = unaff_RBP[-0x17];
            pfVar30 = (float *)(**(code **)(*plVar8 + 0x158))(plVar8);
            fVar2 = pfVar30[1];
            fVar3 = *pfVar30;
            fVar4 = pfVar30[2];
            fVar5 = pfVar30[5];
            fVar6 = pfVar30[4];
            fVar38 = pfVar30[6];
            fVar7 = pfVar30[8];
            unaff_RBP[-0x16] = fVar2 * fVar13 + fVar3 * fVar21 + fVar4 * fVar17;
            unaff_RBP[-0x15] = fVar2 * fVar14 + fVar3 * fVar22 + fVar4 * fVar18;
            unaff_RBP[-0x14] = fVar2 * fVar15 + fVar3 * fVar23 + fVar4 * fVar19;
            unaff_RBP[-0x13] = fVar2 * fVar16 + fVar3 * fVar24 + fVar4 * fVar20;
            fVar2 = pfVar30[9];
            fVar3 = pfVar30[10];
            unaff_RBP[-0x12] = fVar5 * fVar13 + fVar6 * fVar21 + fVar38 * fVar17;
            unaff_RBP[-0x11] = fVar5 * fVar14 + fVar6 * fVar22 + fVar38 * fVar18;
            unaff_RBP[-0x10] = fVar5 * fVar15 + fVar6 * fVar23 + fVar38 * fVar19;
            unaff_RBP[-0xf] = fVar5 * fVar16 + fVar6 * fVar24 + fVar38 * fVar20;
            fVar4 = pfVar30[0xd];
            fVar5 = pfVar30[0xc];
            fVar38 = fVar2 * fVar13 + fVar7 * fVar21 + fVar3 * fVar17;
            fVar6 = pfVar30[0xe];
            lVar9 = *plVar8;
            unaff_RBP[-0xe] = fVar38;
            unaff_RBP[-0xd] = fVar2 * fVar14 + fVar7 * fVar22 + fVar3 * fVar18;
            unaff_RBP[-0xc] = fVar2 * fVar15 + fVar7 * fVar23 + fVar3 * fVar19;
            unaff_RBP[-0xb] = fVar2 * fVar16 + fVar7 * fVar24 + fVar3 * fVar20;
            fVar39 = fVar4 * fVar13 + fVar5 * fVar21 + fVar6 * fVar17 + fVar39;
            unaff_RBP[-10] = fVar39;
            unaff_RBP[-9] = fVar4 * fVar14 + fVar5 * fVar22 + fVar6 * fVar18 + fVar10;
            unaff_RBP[-8] = fVar4 * fVar15 + fVar5 * fVar23 + fVar6 * fVar19 + fVar11;
            unaff_RBP[-7] = fVar4 * fVar16 + fVar5 * fVar24 + fVar6 * fVar20 + fVar12;
            uVar31 = (**(code **)(lVar9 + 0x198))(plVar8,fVar6 * fVar17,fVar38,fVar39,fVar40);
            NetworkSystem_BufferManager(lVar32 + 0xf8,uVar31,unaff_RBP + -0x16);
            lVar32 = *(int64_t *)(puVar33 + 0x2c);
            iVar35 = iVar35 + 1;
            lVar36 = lVar36 + 8;
          } while ((uint64_t)(int64_t)iVar35 <
                   (uint64_t)(*(int64_t *)(puVar33 + 0x2e) - lVar32 >> 3));
        }
        param_1 = *(int64_t *)(unaff_RSI + 0x260);
        cVar34 = cVar34 + '\x01';
        uVar37 = local_var_110;
        uVar25 = local_var_118;
        uVar26 = local_var_120;
        uVar27 = local_var_128;
        uVar28 = local_var_130;
        uVar29 = local_var_138;
      } while (cVar34 < *(char *)(param_1 + 0x20));
    }
  }
  if (((*(int64_t *)(unaff_RSI + 0x1c8) - *(int64_t *)(unaff_RSI + 0x1c0) & 0xfffffffffffffff8U)
       == 0) && (param_1 == 0)) {
    lVar36 = *(int64_t *)(unaff_RSI + 0xf8) - *(int64_t *)(unaff_RSI + 0xf0) >> 3;
    if (lVar36 != 0) {
      lVar32 = *(int64_t *)(unaff_RSI + 0x28);
      if (*(float *)(lVar32 + 0xf8) <= *(float *)(lVar32 + 0x108)) {
        if (lVar36 == 1) {
          *(float *)(lVar32 + 0x118) =
               (*(float *)(lVar32 + 0x108) + *(float *)(lVar32 + 0xf8)) * 0.5;
          *(float *)(lVar32 + 0x11c) =
               (*(float *)(lVar32 + 0x10c) + *(float *)(lVar32 + 0xfc)) * 0.5;
          *(float *)(lVar32 + 0x120) =
               (*(float *)(lVar32 + 0x110) + *(float *)(lVar32 + 0x100)) * 0.5;
          *(int32_t *)(lVar32 + 0x124) = 0x7f7fffff;
          iVar35 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x98))();
          plVar8 = (int64_t *)**(int64_t **)(unaff_RSI + 0xf0);
          if (iVar35 == 1) {
            *(int *)(*(int64_t *)(unaff_RSI + 0x28) + 0x128) = (int)plVar8[6];
          }
          else {
            lVar32 = (**(code **)(*plVar8 + 0x198))(plVar8);
            uVar37 = *(int32_t *)(lVar32 + 0x30);
            uVar31 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x158))();
            uVar37 = SystemFunction_000180285a90(uVar31,uVar37);
            *(int32_t *)(*(int64_t *)(unaff_RSI + 0x28) + 0x128) = uVar37;
          }
          goto LAB_1802e8530;
        }
        goto LAB_1802e8524;
      }
    }
    lVar32 = *(int64_t *)(unaff_RSI + 0x28);
    *(int32_t *)(lVar32 + 0x128) = 0;
    *(uint64_t *)(lVar32 + 0xf8) = 0;
    *(uint64_t *)(lVar32 + 0x100) = 0;
    *(uint64_t *)(lVar32 + 0x108) = 0;
    *(uint64_t *)(lVar32 + 0x110) = 0;
    *(uint64_t *)(lVar32 + 0x118) = 0;
    *(uint64_t *)(lVar32 + 0x120) = 0;
  }
  else {
    lVar32 = *(int64_t *)(unaff_RSI + 0x28);
LAB_1802e8524:
    SystemCore_Parser(lVar32 + 0xf8);
  }
LAB_1802e8530:
  *(int16_t *)(unaff_RSI + 0x2b4) = *(int16_t *)(unaff_RSI + 0x2b0);
  UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RSI + 0x28),*(int64_t *)(unaff_RSI + 0x28) + 0xf8,
                unaff_RSI + 0x70);
  *(int16_t *)(unaff_RSI + 0x2b6) = *(int16_t *)(unaff_RSI + 0x2b2);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 2) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void DataStructure_e81b0(int64_t param_1)
void DataStructure_e81b0(int64_t param_1)
{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int64_t *plVar8;
  int64_t lVar9;
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
  float *pfVar25;
  uint64_t uVar26;
  int64_t lVar27;
  uint *puVar28;
  float *unaff_RBP;
  int64_t unaff_RSI;
  char unaff_R12B;
  int iVar29;
  int64_t lVar30;
  int32_t uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  do {
    iVar29 = 0;
    puVar28 = (uint *)((int64_t)unaff_R12B * 0x100 + *(int64_t *)(param_1 + 0x18));
    lVar27 = *(int64_t *)(puVar28 + 0x2c);
    if (*(int64_t *)(puVar28 + 0x2e) - lVar27 >> 3 != 0) {
      lVar30 = 0;
      do {
        plVar8 = *(int64_t **)(lVar30 + lVar27);
        lVar27 = *(int64_t *)(unaff_RSI + 0x28);
        do {
          LOCK();
          uVar1 = *puVar28;
          *puVar28 = *puVar28 | 1;
          UNLOCK();
        } while ((uVar1 & 1) != 0);
        fVar34 = (float)puVar28[1];
        fVar2 = (float)puVar28[2];
        fVar3 = (float)puVar28[3];
        fVar4 = (float)puVar28[4];
        fVar33 = (float)puVar28[5];
        fVar10 = (float)puVar28[6];
        fVar11 = (float)puVar28[7];
        fVar12 = (float)puVar28[8];
        unaff_RBP[-6] = fVar34;
        unaff_RBP[-5] = fVar2;
        unaff_RBP[-4] = fVar3;
        unaff_RBP[-3] = fVar4;
        unaff_RBP[-2] = fVar33;
        unaff_RBP[-1] = fVar10;
        *unaff_RBP = fVar11;
        unaff_RBP[1] = fVar12;
        *puVar28 = 0;
        SystemSecurityManager(&local_buffer_00000078,&local_buffer_00000020);
        fVar24 = fStack0000000000000084;
        fVar23 = fStack0000000000000080;
        fVar22 = fStack000000000000007c;
        fVar21 = fStack0000000000000078;
        fVar13 = unaff_RBP[-0x1e];
        fVar14 = unaff_RBP[-0x1d];
        fVar15 = unaff_RBP[-0x1c];
        fVar16 = unaff_RBP[-0x1b];
        fVar17 = unaff_RBP[-0x1a];
        fVar18 = unaff_RBP[-0x19];
        fVar19 = unaff_RBP[-0x18];
        fVar20 = unaff_RBP[-0x17];
        pfVar25 = (float *)(**(code **)(*plVar8 + 0x158))(plVar8);
        fVar2 = pfVar25[1];
        fVar3 = *pfVar25;
        fVar4 = pfVar25[2];
        fVar5 = pfVar25[5];
        fVar6 = pfVar25[4];
        fVar32 = pfVar25[6];
        fVar7 = pfVar25[8];
        unaff_RBP[-0x16] = fVar2 * fVar13 + fVar3 * fVar21 + fVar4 * fVar17;
        unaff_RBP[-0x15] = fVar2 * fVar14 + fVar3 * fVar22 + fVar4 * fVar18;
        unaff_RBP[-0x14] = fVar2 * fVar15 + fVar3 * fVar23 + fVar4 * fVar19;
        unaff_RBP[-0x13] = fVar2 * fVar16 + fVar3 * fVar24 + fVar4 * fVar20;
        fVar2 = pfVar25[9];
        fVar3 = pfVar25[10];
        unaff_RBP[-0x12] = fVar5 * fVar13 + fVar6 * fVar21 + fVar32 * fVar17;
        unaff_RBP[-0x11] = fVar5 * fVar14 + fVar6 * fVar22 + fVar32 * fVar18;
        unaff_RBP[-0x10] = fVar5 * fVar15 + fVar6 * fVar23 + fVar32 * fVar19;
        unaff_RBP[-0xf] = fVar5 * fVar16 + fVar6 * fVar24 + fVar32 * fVar20;
        fVar4 = pfVar25[0xd];
        fVar5 = pfVar25[0xc];
        fVar32 = fVar2 * fVar13 + fVar7 * fVar21 + fVar3 * fVar17;
        fVar6 = pfVar25[0xe];
        lVar9 = *plVar8;
        unaff_RBP[-0xe] = fVar32;
        unaff_RBP[-0xd] = fVar2 * fVar14 + fVar7 * fVar22 + fVar3 * fVar18;
        unaff_RBP[-0xc] = fVar2 * fVar15 + fVar7 * fVar23 + fVar3 * fVar19;
        unaff_RBP[-0xb] = fVar2 * fVar16 + fVar7 * fVar24 + fVar3 * fVar20;
        fVar33 = fVar4 * fVar13 + fVar5 * fVar21 + fVar6 * fVar17 + fVar33;
        unaff_RBP[-10] = fVar33;
        unaff_RBP[-9] = fVar4 * fVar14 + fVar5 * fVar22 + fVar6 * fVar18 + fVar10;
        unaff_RBP[-8] = fVar4 * fVar15 + fVar5 * fVar23 + fVar6 * fVar19 + fVar11;
        unaff_RBP[-7] = fVar4 * fVar16 + fVar5 * fVar24 + fVar6 * fVar20 + fVar12;
        uVar26 = (**(code **)(lVar9 + 0x198))(plVar8,fVar6 * fVar17,fVar32,fVar33,fVar34);
        NetworkSystem_BufferManager(lVar27 + 0xf8,uVar26,unaff_RBP + -0x16);
        lVar27 = *(int64_t *)(puVar28 + 0x2c);
        iVar29 = iVar29 + 1;
        lVar30 = lVar30 + 8;
      } while ((uint64_t)(int64_t)iVar29 <
               (uint64_t)(*(int64_t *)(puVar28 + 0x2e) - lVar27 >> 3));
    }
    param_1 = *(int64_t *)(unaff_RSI + 0x260);
    unaff_R12B = unaff_R12B + '\x01';
  } while (unaff_R12B < *(char *)(param_1 + 0x20));
  if (((*(int64_t *)(unaff_RSI + 0x1c8) - *(int64_t *)(unaff_RSI + 0x1c0) & 0xfffffffffffffff8U)
       == 0) && (param_1 == 0)) {
    lVar30 = *(int64_t *)(unaff_RSI + 0xf8) - *(int64_t *)(unaff_RSI + 0xf0) >> 3;
    if (lVar30 != 0) {
      lVar27 = *(int64_t *)(unaff_RSI + 0x28);
      if (*(float *)(lVar27 + 0xf8) <= *(float *)(lVar27 + 0x108)) {
        if (lVar30 == 1) {
          *(float *)(lVar27 + 0x118) =
               (*(float *)(lVar27 + 0x108) + *(float *)(lVar27 + 0xf8)) * 0.5;
          *(float *)(lVar27 + 0x11c) =
               (*(float *)(lVar27 + 0x10c) + *(float *)(lVar27 + 0xfc)) * 0.5;
          *(float *)(lVar27 + 0x120) =
               (*(float *)(lVar27 + 0x110) + *(float *)(lVar27 + 0x100)) * 0.5;
          *(int32_t *)(lVar27 + 0x124) = 0x7f7fffff;
          iVar29 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x98))();
          plVar8 = (int64_t *)**(int64_t **)(unaff_RSI + 0xf0);
          if (iVar29 == 1) {
            *(int *)(*(int64_t *)(unaff_RSI + 0x28) + 0x128) = (int)plVar8[6];
          }
          else {
            lVar27 = (**(code **)(*plVar8 + 0x198))(plVar8);
            uVar31 = *(int32_t *)(lVar27 + 0x30);
            uVar26 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x158))();
            uVar31 = SystemFunction_000180285a90(uVar26,uVar31);
            *(int32_t *)(*(int64_t *)(unaff_RSI + 0x28) + 0x128) = uVar31;
          }
          goto LAB_1802e8530;
        }
        goto LAB_1802e8524;
      }
    }
    lVar27 = *(int64_t *)(unaff_RSI + 0x28);
    *(int32_t *)(lVar27 + 0x128) = 0;
    *(uint64_t *)(lVar27 + 0xf8) = 0;
    *(uint64_t *)(lVar27 + 0x100) = 0;
    *(uint64_t *)(lVar27 + 0x108) = 0;
    *(uint64_t *)(lVar27 + 0x110) = 0;
    *(uint64_t *)(lVar27 + 0x118) = 0;
    *(uint64_t *)(lVar27 + 0x120) = 0;
  }
  else {
    lVar27 = *(int64_t *)(unaff_RSI + 0x28);
LAB_1802e8524:
    SystemCore_Parser(lVar27 + 0xf8);
  }
LAB_1802e8530:
  *(int16_t *)(unaff_RSI + 0x2b4) = *(int16_t *)(unaff_RSI + 0x2b0);
  UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RSI + 0x28),*(int64_t *)(unaff_RSI + 0x28) + 0xf8,
                unaff_RSI + 0x70);
  *(int16_t *)(unaff_RSI + 0x2b6) = *(int16_t *)(unaff_RSI + 0x2b2);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 2) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void DataStructure_e838f(int64_t param_1)
void DataStructure_e838f(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int32_t uVar6;
  if (((*(int64_t *)(unaff_RSI + 0x1c8) - *(int64_t *)(unaff_RSI + 0x1c0) & 0xfffffffffffffff8U)
       == 0) && (param_1 == 0)) {
    lVar3 = *(int64_t *)(unaff_RSI + 0xf8) - *(int64_t *)(unaff_RSI + 0xf0) >> 3;
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(unaff_RSI + 0x28);
      if (*(float *)(lVar4 + 0xf8) <= *(float *)(lVar4 + 0x108)) {
        if (lVar3 == 1) {
          *(float *)(lVar4 + 0x118) = (*(float *)(lVar4 + 0x108) + *(float *)(lVar4 + 0xf8)) * 0.5;
          *(float *)(lVar4 + 0x11c) = (*(float *)(lVar4 + 0x10c) + *(float *)(lVar4 + 0xfc)) * 0.5;
          *(float *)(lVar4 + 0x120) = (*(float *)(lVar4 + 0x110) + *(float *)(lVar4 + 0x100)) * 0.5;
          *(int32_t *)(lVar4 + 0x124) = 0x7f7fffff;
          iVar2 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x98))();
          plVar1 = (int64_t *)**(int64_t **)(unaff_RSI + 0xf0);
          if (iVar2 == 1) {
            *(int *)(*(int64_t *)(unaff_RSI + 0x28) + 0x128) = (int)plVar1[6];
          }
          else {
            lVar4 = (**(code **)(*plVar1 + 0x198))(plVar1);
            uVar6 = *(int32_t *)(lVar4 + 0x30);
            uVar5 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x158))();
            uVar6 = SystemFunction_000180285a90(uVar5,uVar6);
            *(int32_t *)(*(int64_t *)(unaff_RSI + 0x28) + 0x128) = uVar6;
          }
          goto LAB_1802e8530;
        }
        goto LAB_1802e8524;
      }
    }
    lVar4 = *(int64_t *)(unaff_RSI + 0x28);
    *(int32_t *)(lVar4 + 0x128) = 0;
    *(uint64_t *)(lVar4 + 0xf8) = 0;
    *(uint64_t *)(lVar4 + 0x100) = 0;
    *(uint64_t *)(lVar4 + 0x108) = 0;
    *(uint64_t *)(lVar4 + 0x110) = 0;
    *(uint64_t *)(lVar4 + 0x118) = 0;
    *(uint64_t *)(lVar4 + 0x120) = 0;
  }
  else {
    lVar4 = *(int64_t *)(unaff_RSI + 0x28);
LAB_1802e8524:
    SystemCore_Parser(lVar4 + 0xf8);
  }
LAB_1802e8530:
  *(int16_t *)(unaff_RSI + 0x2b4) = *(int16_t *)(unaff_RSI + 0x2b0);
  UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RSI + 0x28),*(int64_t *)(unaff_RSI + 0x28) + 0xf8,
                unaff_RSI + 0x70);
  *(int16_t *)(unaff_RSI + 0x2b6) = *(int16_t *)(unaff_RSI + 0x2b2);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 8) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void DataStructure_e83d9(int64_t param_1)
void DataStructure_e83d9(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int32_t uVar6;
  if (param_1 == 0) {
    lVar3 = *(int64_t *)(unaff_RSI + 0xf8) - *(int64_t *)(unaff_RSI + 0xf0) >> 3;
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(unaff_RSI + 0x28);
      if (*(float *)(lVar4 + 0xf8) <= *(float *)(lVar4 + 0x108)) {
        if (lVar3 == 1) {
          *(float *)(lVar4 + 0x118) = (*(float *)(lVar4 + 0x108) + *(float *)(lVar4 + 0xf8)) * 0.5;
          *(float *)(lVar4 + 0x11c) = (*(float *)(lVar4 + 0x10c) + *(float *)(lVar4 + 0xfc)) * 0.5;
          *(float *)(lVar4 + 0x120) = (*(float *)(lVar4 + 0x110) + *(float *)(lVar4 + 0x100)) * 0.5;
          *(int32_t *)(lVar4 + 0x124) = 0x7f7fffff;
          iVar2 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x98))();
          plVar1 = (int64_t *)**(int64_t **)(unaff_RSI + 0xf0);
          if (iVar2 == 1) {
            *(int *)(*(int64_t *)(unaff_RSI + 0x28) + 0x128) = (int)plVar1[6];
          }
          else {
            lVar4 = (**(code **)(*plVar1 + 0x198))(plVar1);
            uVar6 = *(int32_t *)(lVar4 + 0x30);
            uVar5 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RSI + 0xf0) + 0x158))();
            uVar6 = SystemFunction_000180285a90(uVar5,uVar6);
            *(int32_t *)(*(int64_t *)(unaff_RSI + 0x28) + 0x128) = uVar6;
          }
          goto LAB_1802e8530;
        }
        goto LAB_1802e8524;
      }
    }
    lVar4 = *(int64_t *)(unaff_RSI + 0x28);
    *(int32_t *)(lVar4 + 0x128) = 0;
    *(uint64_t *)(lVar4 + 0xf8) = 0;
    *(uint64_t *)(lVar4 + 0x100) = 0;
    *(uint64_t *)(lVar4 + 0x108) = 0;
    *(uint64_t *)(lVar4 + 0x110) = 0;
    *(uint64_t *)(lVar4 + 0x118) = 0;
    *(uint64_t *)(lVar4 + 0x120) = 0;
  }
  else {
    lVar4 = *(int64_t *)(unaff_RSI + 0x28);
LAB_1802e8524:
    SystemCore_Parser(lVar4 + 0xf8);
  }
LAB_1802e8530:
  *(int16_t *)(unaff_RSI + 0x2b4) = *(int16_t *)(unaff_RSI + 0x2b0);
  UltraHighFreq_DataProcessor1(*(int64_t *)(unaff_RSI + 0x28),*(int64_t *)(unaff_RSI + 0x28) + 0xf8,
                unaff_RSI + 0x70);
  *(int16_t *)(unaff_RSI + 0x2b6) = *(int16_t *)(unaff_RSI + 0x2b2);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 8) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void DataStructure_e8580(int64_t param_1,int8_t param_2,char param_3)
void DataStructure_e8580(int64_t param_1,int8_t param_2,char param_3)
{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  *(int8_t *)(param_1 + 0x2e4) = param_2;
  if ((param_3 != '\0') &&
     (uVar1 = 0, uVar3 = uVar1,
     *(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0)) {
    do {
      DataStructure_e8580(*(uint64_t *)(*(int64_t *)(param_1 + 0x1c0) + uVar1),param_2,param_3);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return;
}
// 函数: void DataStructure_e85b4(void)
void DataStructure_e85b4(void)
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  int8_t unaff_BPL;
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  int8_t unaff_R14B;
  uVar1 = 0;
  uVar3 = uVar1;
  if (in_RAX >> 3 != 0) {
    do {
      DataStructure_e8580(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + uVar1),unaff_R14B,unaff_BPL);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  }
  return;
}
// 函数: void DataStructure_e85c4(void)
void DataStructure_e85c4(void)
{
  int64_t unaff_RBX;
  int8_t unaff_BPL;
  uint64_t uVar1;
  uint unaff_EDI;
  int8_t unaff_R14B;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    DataStructure_e8580(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + uVar1),unaff_R14B,unaff_BPL);
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  return;
}
// 函数: void DataStructure_e860d(void)
void DataStructure_e860d(void)
{
  return;
}
// 函数: void DataStructure_e8612(void)
void DataStructure_e8612(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
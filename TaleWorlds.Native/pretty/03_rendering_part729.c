#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part729.c - 8 个函数
// 函数: void function_696370(int64_t param_1,int param_2,int64_t param_3,int param_4,int *param_5)
void function_696370(int64_t param_1,int param_2,int64_t param_3,int param_4,int *param_5)
{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int iVar11;
  int iVar12;
  int64_t lVar13;
  int8_t auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int8_t in_XMM2 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int64_t lStackX_18;
  int64_t lStack_48;
  iVar1 = render_system_control_ui;
  lStack_48 = 8;
  lStackX_18 = param_3;
  do {
    iVar7 = 0;
    iVar15 = 0;
    iVar17 = 0;
    iVar19 = 0;
    iVar21 = 0;
    lVar13 = 0x10;
    lVar8 = param_1;
    lVar9 = lStackX_18;
    iVar16 = iVar15;
    iVar18 = iVar17;
    iVar20 = iVar19;
    iVar22 = iVar21;
    do {
      uVar10 = 0;
      if (1 < iVar1) {
        lVar6 = 2;
        uVar10 = 0x10;
        puVar2 = (uint *)(lVar9 + 4);
        do {
          auVar14 = ZEXT416(*(uint *)((lVar8 - lVar9) + -4 + (int64_t)puVar2));
          auVar23 = pmovzxbd(in_XMM2,auVar14);
          auVar14 = pmovzxbd(auVar14,ZEXT416(puVar2[-1]));
          auVar24._0_4_ = auVar23._0_4_ - auVar14._0_4_;
          auVar24._4_4_ = auVar23._4_4_ - auVar14._4_4_;
          auVar24._8_4_ = auVar23._8_4_ - auVar14._8_4_;
          auVar24._12_4_ = auVar23._12_4_ - auVar14._12_4_;
          auVar14 = ZEXT416(*(uint *)((lVar8 - lVar9) + -8 + (int64_t)(puVar2 + 2)));
          auVar23 = pabsd(ZEXT416(puVar2[-1]),auVar24);
          iVar15 = auVar23._0_4_ + iVar15;
          iVar17 = auVar23._4_4_ + iVar17;
          iVar19 = auVar23._8_4_ + iVar19;
          iVar21 = auVar23._12_4_ + iVar21;
          auVar23 = pmovzxbd(auVar24,auVar14);
          auVar14 = pmovzxbd(auVar14,ZEXT416(*puVar2));
          in_XMM2._0_4_ = auVar23._0_4_ - auVar14._0_4_;
          in_XMM2._4_4_ = auVar23._4_4_ - auVar14._4_4_;
          in_XMM2._8_4_ = auVar23._8_4_ - auVar14._8_4_;
          in_XMM2._12_4_ = auVar23._12_4_ - auVar14._12_4_;
          auVar14 = pabsd(ZEXT416(*puVar2),in_XMM2);
          iVar16 = auVar14._0_4_ + iVar16;
          iVar18 = auVar14._4_4_ + iVar18;
          iVar20 = auVar14._8_4_ + iVar20;
          iVar22 = auVar14._12_4_ + iVar22;
          lVar6 = lVar6 + -1;
          puVar2 = puVar2 + 2;
        } while (lVar6 != 0);
      }
      iVar11 = 0;
      iVar12 = 0;
      if (uVar10 < 0x10) {
        if (1 < (int64_t)(0x10 - uVar10)) {
          pbVar3 = (byte *)(uVar10 + lVar9);
          lVar6 = (0xe - uVar10 >> 1) + 1;
          uVar10 = uVar10 + lVar6 * 2;
          do {
            uVar4 = (int)((uint)pbVar3[lVar8 - lVar9] - (uint)*pbVar3) >> 0x1f;
            iVar11 = iVar11 + (((uint)pbVar3[lVar8 - lVar9] - (uint)*pbVar3 ^ uVar4) - uVar4);
            uVar4 = (uint)(pbVar3 + 2)[(lVar8 - lVar9) + -1] - (uint)pbVar3[1];
            uVar5 = (int)uVar4 >> 0x1f;
            iVar12 = iVar12 + ((uVar4 ^ uVar5) - uVar5);
            lVar6 = lVar6 + -1;
            pbVar3 = pbVar3 + 2;
          } while (lVar6 != 0);
        }
        if ((int64_t)uVar10 < 0x10) {
          uVar4 = (uint)*(byte *)(uVar10 + lVar8) - (uint)*(byte *)(uVar10 + lVar9);
          uVar5 = (int)uVar4 >> 0x1f;
          iVar7 = iVar7 + ((uVar4 ^ uVar5) - uVar5);
        }
        iVar7 = iVar7 + iVar12 + iVar11;
      }
      lVar8 = lVar8 + param_2;
      lVar9 = lVar9 + param_4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    *param_5 = iVar16 + iVar15 + iVar20 + iVar19 + iVar18 + iVar17 + iVar22 + iVar21 + iVar7;
    param_5 = param_5 + 1;
    lStackX_18 = lStackX_18 + 1;
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_696540(int64_t param_1,int param_2,int64_t param_3,int param_4,int *param_5)
void function_696540(int64_t param_1,int param_2,int64_t param_3,int param_4,int *param_5)
{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int iVar11;
  int iVar12;
  int64_t lVar13;
  int8_t auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int8_t in_XMM2 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int64_t lStackX_18;
  int64_t lStack_48;
  iVar1 = render_system_control_ui;
  lStack_48 = 3;
  lStackX_18 = param_3;
  do {
    iVar7 = 0;
    iVar15 = 0;
    iVar17 = 0;
    iVar19 = 0;
    iVar21 = 0;
    lVar13 = 8;
    lVar8 = param_1;
    lVar9 = lStackX_18;
    iVar16 = iVar15;
    iVar18 = iVar17;
    iVar20 = iVar19;
    iVar22 = iVar21;
    do {
      uVar10 = 0;
      if (1 < iVar1) {
        lVar6 = 2;
        uVar10 = 0x10;
        puVar2 = (uint *)(lVar9 + 4);
        do {
          auVar14 = ZEXT416(*(uint *)((lVar8 - lVar9) + -4 + (int64_t)puVar2));
          auVar23 = pmovzxbd(in_XMM2,auVar14);
          auVar14 = pmovzxbd(auVar14,ZEXT416(puVar2[-1]));
          auVar24._0_4_ = auVar23._0_4_ - auVar14._0_4_;
          auVar24._4_4_ = auVar23._4_4_ - auVar14._4_4_;
          auVar24._8_4_ = auVar23._8_4_ - auVar14._8_4_;
          auVar24._12_4_ = auVar23._12_4_ - auVar14._12_4_;
          auVar14 = ZEXT416(*(uint *)((lVar8 - lVar9) + -8 + (int64_t)(puVar2 + 2)));
          auVar23 = pabsd(ZEXT416(puVar2[-1]),auVar24);
          iVar15 = auVar23._0_4_ + iVar15;
          iVar17 = auVar23._4_4_ + iVar17;
          iVar19 = auVar23._8_4_ + iVar19;
          iVar21 = auVar23._12_4_ + iVar21;
          auVar23 = pmovzxbd(auVar24,auVar14);
          auVar14 = pmovzxbd(auVar14,ZEXT416(*puVar2));
          in_XMM2._0_4_ = auVar23._0_4_ - auVar14._0_4_;
          in_XMM2._4_4_ = auVar23._4_4_ - auVar14._4_4_;
          in_XMM2._8_4_ = auVar23._8_4_ - auVar14._8_4_;
          in_XMM2._12_4_ = auVar23._12_4_ - auVar14._12_4_;
          auVar14 = pabsd(ZEXT416(*puVar2),in_XMM2);
          iVar16 = auVar14._0_4_ + iVar16;
          iVar18 = auVar14._4_4_ + iVar18;
          iVar20 = auVar14._8_4_ + iVar20;
          iVar22 = auVar14._12_4_ + iVar22;
          lVar6 = lVar6 + -1;
          puVar2 = puVar2 + 2;
        } while (lVar6 != 0);
      }
      iVar11 = 0;
      iVar12 = 0;
      if (uVar10 < 0x10) {
        if (1 < (int64_t)(0x10 - uVar10)) {
          pbVar3 = (byte *)(uVar10 + lVar9);
          lVar6 = (0xe - uVar10 >> 1) + 1;
          uVar10 = uVar10 + lVar6 * 2;
          do {
            uVar4 = (int)((uint)pbVar3[lVar8 - lVar9] - (uint)*pbVar3) >> 0x1f;
            iVar11 = iVar11 + (((uint)pbVar3[lVar8 - lVar9] - (uint)*pbVar3 ^ uVar4) - uVar4);
            uVar4 = (uint)(pbVar3 + 2)[(lVar8 - lVar9) + -1] - (uint)pbVar3[1];
            uVar5 = (int)uVar4 >> 0x1f;
            iVar12 = iVar12 + ((uVar4 ^ uVar5) - uVar5);
            lVar6 = lVar6 + -1;
            pbVar3 = pbVar3 + 2;
          } while (lVar6 != 0);
        }
        if ((int64_t)uVar10 < 0x10) {
          uVar4 = (uint)*(byte *)(uVar10 + lVar8) - (uint)*(byte *)(uVar10 + lVar9);
          uVar5 = (int)uVar4 >> 0x1f;
          iVar7 = iVar7 + ((uVar4 ^ uVar5) - uVar5);
        }
        iVar7 = iVar7 + iVar12 + iVar11;
      }
      lVar8 = lVar8 + param_2;
      lVar9 = lVar9 + param_4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    *param_5 = iVar16 + iVar15 + iVar20 + iVar19 + iVar18 + iVar17 + iVar22 + iVar21 + iVar7;
    param_5 = param_5 + 1;
    lStackX_18 = lStackX_18 + 1;
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_696710(int64_t param_1,int param_2,int64_t param_3,int param_4,int *param_5)
void function_696710(int64_t param_1,int param_2,int64_t param_3,int param_4,int *param_5)
{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int iVar11;
  int iVar12;
  int64_t lVar13;
  int8_t auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int8_t in_XMM2 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int64_t lStackX_18;
  int64_t lStack_48;
  iVar1 = render_system_control_ui;
  lStack_48 = 8;
  lStackX_18 = param_3;
  do {
    iVar7 = 0;
    iVar15 = 0;
    iVar17 = 0;
    iVar19 = 0;
    iVar21 = 0;
    lVar13 = 8;
    lVar8 = param_1;
    lVar9 = lStackX_18;
    iVar16 = iVar15;
    iVar18 = iVar17;
    iVar20 = iVar19;
    iVar22 = iVar21;
    do {
      uVar10 = 0;
      if (1 < iVar1) {
        lVar6 = 2;
        uVar10 = 0x10;
        puVar2 = (uint *)(lVar9 + 4);
        do {
          auVar14 = ZEXT416(*(uint *)((lVar8 - lVar9) + -4 + (int64_t)puVar2));
          auVar23 = pmovzxbd(in_XMM2,auVar14);
          auVar14 = pmovzxbd(auVar14,ZEXT416(puVar2[-1]));
          auVar24._0_4_ = auVar23._0_4_ - auVar14._0_4_;
          auVar24._4_4_ = auVar23._4_4_ - auVar14._4_4_;
          auVar24._8_4_ = auVar23._8_4_ - auVar14._8_4_;
          auVar24._12_4_ = auVar23._12_4_ - auVar14._12_4_;
          auVar14 = ZEXT416(*(uint *)((lVar8 - lVar9) + -8 + (int64_t)(puVar2 + 2)));
          auVar23 = pabsd(ZEXT416(puVar2[-1]),auVar24);
          iVar15 = auVar23._0_4_ + iVar15;
          iVar17 = auVar23._4_4_ + iVar17;
          iVar19 = auVar23._8_4_ + iVar19;
          iVar21 = auVar23._12_4_ + iVar21;
          auVar23 = pmovzxbd(auVar24,auVar14);
          auVar14 = pmovzxbd(auVar14,ZEXT416(*puVar2));
          in_XMM2._0_4_ = auVar23._0_4_ - auVar14._0_4_;
          in_XMM2._4_4_ = auVar23._4_4_ - auVar14._4_4_;
          in_XMM2._8_4_ = auVar23._8_4_ - auVar14._8_4_;
          in_XMM2._12_4_ = auVar23._12_4_ - auVar14._12_4_;
          auVar14 = pabsd(ZEXT416(*puVar2),in_XMM2);
          iVar16 = auVar14._0_4_ + iVar16;
          iVar18 = auVar14._4_4_ + iVar18;
          iVar20 = auVar14._8_4_ + iVar20;
          iVar22 = auVar14._12_4_ + iVar22;
          lVar6 = lVar6 + -1;
          puVar2 = puVar2 + 2;
        } while (lVar6 != 0);
      }
      iVar11 = 0;
      iVar12 = 0;
      if (uVar10 < 0x10) {
        if (1 < (int64_t)(0x10 - uVar10)) {
          pbVar3 = (byte *)(uVar10 + lVar9);
          lVar6 = (0xe - uVar10 >> 1) + 1;
          uVar10 = uVar10 + lVar6 * 2;
          do {
            uVar4 = (int)((uint)pbVar3[lVar8 - lVar9] - (uint)*pbVar3) >> 0x1f;
            iVar11 = iVar11 + (((uint)pbVar3[lVar8 - lVar9] - (uint)*pbVar3 ^ uVar4) - uVar4);
            uVar4 = (uint)(pbVar3 + 2)[(lVar8 - lVar9) + -1] - (uint)pbVar3[1];
            uVar5 = (int)uVar4 >> 0x1f;
            iVar12 = iVar12 + ((uVar4 ^ uVar5) - uVar5);
            lVar6 = lVar6 + -1;
            pbVar3 = pbVar3 + 2;
          } while (lVar6 != 0);
        }
        if ((int64_t)uVar10 < 0x10) {
          uVar4 = (uint)*(byte *)(uVar10 + lVar8) - (uint)*(byte *)(uVar10 + lVar9);
          uVar5 = (int)uVar4 >> 0x1f;
          iVar7 = iVar7 + ((uVar4 ^ uVar5) - uVar5);
        }
        iVar7 = iVar7 + iVar12 + iVar11;
      }
      lVar8 = lVar8 + param_2;
      lVar9 = lVar9 + param_4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    *param_5 = iVar16 + iVar15 + iVar20 + iVar19 + iVar18 + iVar17 + iVar22 + iVar21 + iVar7;
    param_5 = param_5 + 1;
    lStackX_18 = lStackX_18 + 1;
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_6968e0(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
void function_6968e0(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  byte *pbVar10;
  uint *puVar11;
  int64_t lVar12;
  int8_t auVar13 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int8_t in_XMM2 [16];
  int8_t auVar18 [16];
  uint *pstack_special_x_18;
  int64_t lStack_48;
  iVar1 = render_system_control_ui;
  lStack_48 = 3;
  pstack_special_x_18 = param_3;
  do {
    iVar6 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    lVar12 = 4;
    puVar5 = param_1;
    puVar11 = pstack_special_x_18;
    do {
      uVar2 = 0;
      if (1 < iVar1) {
        uVar2 = 4;
        auVar18 = pmovzxbd(in_XMM2,ZEXT416(*puVar5));
        auVar13 = pmovzxbd(ZEXT416(*puVar5),ZEXT416(*puVar11));
        in_XMM2._0_4_ = auVar18._0_4_ - auVar13._0_4_;
        in_XMM2._4_4_ = auVar18._4_4_ - auVar13._4_4_;
        in_XMM2._8_4_ = auVar18._8_4_ - auVar13._8_4_;
        in_XMM2._12_4_ = auVar18._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(*puVar11),in_XMM2);
        iVar14 = auVar13._0_4_ + iVar14;
        iVar15 = auVar13._4_4_ + iVar15;
        iVar16 = auVar13._8_4_ + iVar16;
        iVar17 = auVar13._12_4_ + iVar17;
      }
      iVar8 = 0;
      iVar7 = 0;
      if (uVar2 < 4) {
        if (1 < (int64_t)(4 - uVar2)) {
          pbVar10 = (byte *)(uVar2 + (int64_t)puVar11);
          lVar9 = (2 - uVar2 >> 1) + 1;
          uVar2 = uVar2 + lVar9 * 2;
          do {
            uVar3 = (int)((uint)pbVar10[(int64_t)puVar5 - (int64_t)puVar11] - (uint)*pbVar10) >>
                    0x1f;
            iVar8 = iVar8 + (((uint)pbVar10[(int64_t)puVar5 - (int64_t)puVar11] - (uint)*pbVar10 ^
                             uVar3) - uVar3);
            uVar3 = (uint)(pbVar10 + 2)[((int64_t)puVar5 - (int64_t)puVar11) + -1] -
                    (uint)pbVar10[1];
            uVar4 = (int)uVar3 >> 0x1f;
            iVar7 = iVar7 + ((uVar3 ^ uVar4) - uVar4);
            lVar9 = lVar9 + -1;
            pbVar10 = pbVar10 + 2;
          } while (lVar9 != 0);
        }
        if ((int64_t)uVar2 < 4) {
          uVar3 = (uint)*(byte *)(uVar2 + (int64_t)puVar5) -
                  (uint)*(byte *)(uVar2 + (int64_t)puVar11);
          uVar4 = (int)uVar3 >> 0x1f;
          iVar6 = iVar6 + ((uVar3 ^ uVar4) - uVar4);
        }
        iVar6 = iVar6 + iVar7 + iVar8;
      }
      puVar5 = (uint *)((int64_t)puVar5 + (int64_t)param_2);
      puVar11 = (uint *)((int64_t)puVar11 + (int64_t)param_4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *param_5 = iVar14 + iVar16 + iVar15 + iVar17 + iVar6;
    param_5 = param_5 + 1;
    pstack_special_x_18 = (uint *)((int64_t)pstack_special_x_18 + 1);
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_696a60(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
void function_696a60(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  byte *pbVar10;
  uint *puVar11;
  int64_t lVar12;
  int8_t auVar13 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int8_t in_XMM2 [16];
  int8_t auVar18 [16];
  uint *pstack_special_x_18;
  int64_t lStack_48;
  iVar1 = render_system_control_ui;
  lStack_48 = 8;
  pstack_special_x_18 = param_3;
  do {
    iVar6 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    lVar12 = 4;
    puVar5 = param_1;
    puVar11 = pstack_special_x_18;
    do {
      uVar2 = 0;
      if (1 < iVar1) {
        uVar2 = 4;
        auVar18 = pmovzxbd(in_XMM2,ZEXT416(*puVar5));
        auVar13 = pmovzxbd(ZEXT416(*puVar5),ZEXT416(*puVar11));
        in_XMM2._0_4_ = auVar18._0_4_ - auVar13._0_4_;
        in_XMM2._4_4_ = auVar18._4_4_ - auVar13._4_4_;
        in_XMM2._8_4_ = auVar18._8_4_ - auVar13._8_4_;
        in_XMM2._12_4_ = auVar18._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(*puVar11),in_XMM2);
        iVar14 = auVar13._0_4_ + iVar14;
        iVar15 = auVar13._4_4_ + iVar15;
        iVar16 = auVar13._8_4_ + iVar16;
        iVar17 = auVar13._12_4_ + iVar17;
      }
      iVar8 = 0;
      iVar7 = 0;
      if (uVar2 < 4) {
        if (1 < (int64_t)(4 - uVar2)) {
          pbVar10 = (byte *)(uVar2 + (int64_t)puVar11);
          lVar9 = (2 - uVar2 >> 1) + 1;
          uVar2 = uVar2 + lVar9 * 2;
          do {
            uVar3 = (int)((uint)pbVar10[(int64_t)puVar5 - (int64_t)puVar11] - (uint)*pbVar10) >>
                    0x1f;
            iVar8 = iVar8 + (((uint)pbVar10[(int64_t)puVar5 - (int64_t)puVar11] - (uint)*pbVar10 ^
                             uVar3) - uVar3);
            uVar3 = (uint)(pbVar10 + 2)[((int64_t)puVar5 - (int64_t)puVar11) + -1] -
                    (uint)pbVar10[1];
            uVar4 = (int)uVar3 >> 0x1f;
            iVar7 = iVar7 + ((uVar3 ^ uVar4) - uVar4);
            lVar9 = lVar9 + -1;
            pbVar10 = pbVar10 + 2;
          } while (lVar9 != 0);
        }
        if ((int64_t)uVar2 < 4) {
          uVar3 = (uint)*(byte *)(uVar2 + (int64_t)puVar5) -
                  (uint)*(byte *)(uVar2 + (int64_t)puVar11);
          uVar4 = (int)uVar3 >> 0x1f;
          iVar6 = iVar6 + ((uVar3 ^ uVar4) - uVar4);
        }
        iVar6 = iVar6 + iVar7 + iVar8;
      }
      puVar5 = (uint *)((int64_t)puVar5 + (int64_t)param_2);
      puVar11 = (uint *)((int64_t)puVar11 + (int64_t)param_4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *param_5 = iVar14 + iVar16 + iVar15 + iVar17 + iVar6;
    param_5 = param_5 + 1;
    pstack_special_x_18 = (uint *)((int64_t)pstack_special_x_18 + 1);
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_696be0(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
void function_696be0(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t lVar12;
  int8_t auVar13 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int8_t in_XMM2 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  uint *pstack_special_x_18;
  int64_t lStack_48;
  iVar1 = render_system_control_ui;
  lStack_48 = 3;
  pstack_special_x_18 = param_3;
  do {
    iVar6 = 0;
    iVar14 = 0;
    iVar16 = 0;
    iVar18 = 0;
    iVar20 = 0;
    lVar12 = 0x10;
    puVar7 = param_1;
    puVar8 = pstack_special_x_18;
    iVar15 = iVar14;
    iVar17 = iVar16;
    iVar19 = iVar18;
    iVar21 = iVar20;
    do {
      uVar10 = 0;
      if (1 < iVar1) {
        uVar10 = 8;
        auVar22 = pmovzxbd(in_XMM2,ZEXT416(*puVar7));
        auVar13 = pmovzxbd(ZEXT416(*puVar7),ZEXT416(*puVar8));
        auVar23._0_4_ = auVar22._0_4_ - auVar13._0_4_;
        auVar23._4_4_ = auVar22._4_4_ - auVar13._4_4_;
        auVar23._8_4_ = auVar22._8_4_ - auVar13._8_4_;
        auVar23._12_4_ = auVar22._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(*puVar8),auVar23);
        iVar14 = auVar13._0_4_ + iVar14;
        iVar16 = auVar13._4_4_ + iVar16;
        iVar18 = auVar13._8_4_ + iVar18;
        iVar20 = auVar13._12_4_ + iVar20;
        auVar22 = pmovzxbd(auVar23,ZEXT416(puVar7[1]));
        auVar13 = pmovzxbd(ZEXT416(puVar7[1]),ZEXT416(puVar8[1]));
        in_XMM2._0_4_ = auVar22._0_4_ - auVar13._0_4_;
        in_XMM2._4_4_ = auVar22._4_4_ - auVar13._4_4_;
        in_XMM2._8_4_ = auVar22._8_4_ - auVar13._8_4_;
        in_XMM2._12_4_ = auVar22._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(puVar8[1]),in_XMM2);
        iVar15 = auVar13._0_4_ + iVar15;
        iVar17 = auVar13._4_4_ + iVar17;
        iVar19 = auVar13._8_4_ + iVar19;
        iVar21 = auVar13._12_4_ + iVar21;
      }
      iVar11 = 0;
      iVar5 = 0;
      if (uVar10 < 8) {
        if (1 < (int64_t)(8 - uVar10)) {
          pbVar2 = (byte *)(uVar10 + (int64_t)puVar8);
          lVar9 = (6 - uVar10 >> 1) + 1;
          uVar10 = uVar10 + lVar9 * 2;
          do {
            uVar3 = (int)((uint)pbVar2[(int64_t)puVar7 - (int64_t)puVar8] - (uint)*pbVar2) >> 0x1f
            ;
            iVar11 = iVar11 + (((uint)pbVar2[(int64_t)puVar7 - (int64_t)puVar8] - (uint)*pbVar2 ^
                               uVar3) - uVar3);
            uVar3 = (uint)(pbVar2 + 2)[((int64_t)puVar7 - (int64_t)puVar8) + -1] - (uint)pbVar2[1]
            ;
            uVar4 = (int)uVar3 >> 0x1f;
            iVar5 = iVar5 + ((uVar3 ^ uVar4) - uVar4);
            lVar9 = lVar9 + -1;
            pbVar2 = pbVar2 + 2;
          } while (lVar9 != 0);
        }
        if ((int64_t)uVar10 < 8) {
          uVar3 = (uint)*(byte *)(uVar10 + (int64_t)puVar7) -
                  (uint)*(byte *)(uVar10 + (int64_t)puVar8);
          uVar4 = (int)uVar3 >> 0x1f;
          iVar6 = iVar6 + ((uVar3 ^ uVar4) - uVar4);
        }
        iVar6 = iVar6 + iVar5 + iVar11;
      }
      puVar7 = (uint *)((int64_t)puVar7 + (int64_t)param_2);
      puVar8 = (uint *)((int64_t)puVar8 + (int64_t)param_4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *param_5 = iVar15 + iVar14 + iVar19 + iVar18 + iVar17 + iVar16 + iVar21 + iVar20 + iVar6;
    param_5 = param_5 + 1;
    pstack_special_x_18 = (uint *)((int64_t)pstack_special_x_18 + 1);
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_696d90(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
void function_696d90(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t lVar12;
  int8_t auVar13 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int8_t in_XMM2 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  uint *pstack_special_x_18;
  int64_t lStack_48;
  iVar1 = render_system_control_ui;
  lStack_48 = 8;
  pstack_special_x_18 = param_3;
  do {
    iVar6 = 0;
    iVar14 = 0;
    iVar16 = 0;
    iVar18 = 0;
    iVar20 = 0;
    lVar12 = 0x10;
    puVar7 = param_1;
    puVar8 = pstack_special_x_18;
    iVar15 = iVar14;
    iVar17 = iVar16;
    iVar19 = iVar18;
    iVar21 = iVar20;
    do {
      uVar10 = 0;
      if (1 < iVar1) {
        uVar10 = 8;
        auVar22 = pmovzxbd(in_XMM2,ZEXT416(*puVar7));
        auVar13 = pmovzxbd(ZEXT416(*puVar7),ZEXT416(*puVar8));
        auVar23._0_4_ = auVar22._0_4_ - auVar13._0_4_;
        auVar23._4_4_ = auVar22._4_4_ - auVar13._4_4_;
        auVar23._8_4_ = auVar22._8_4_ - auVar13._8_4_;
        auVar23._12_4_ = auVar22._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(*puVar8),auVar23);
        iVar14 = auVar13._0_4_ + iVar14;
        iVar16 = auVar13._4_4_ + iVar16;
        iVar18 = auVar13._8_4_ + iVar18;
        iVar20 = auVar13._12_4_ + iVar20;
        auVar22 = pmovzxbd(auVar23,ZEXT416(puVar7[1]));
        auVar13 = pmovzxbd(ZEXT416(puVar7[1]),ZEXT416(puVar8[1]));
        in_XMM2._0_4_ = auVar22._0_4_ - auVar13._0_4_;
        in_XMM2._4_4_ = auVar22._4_4_ - auVar13._4_4_;
        in_XMM2._8_4_ = auVar22._8_4_ - auVar13._8_4_;
        in_XMM2._12_4_ = auVar22._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(puVar8[1]),in_XMM2);
        iVar15 = auVar13._0_4_ + iVar15;
        iVar17 = auVar13._4_4_ + iVar17;
        iVar19 = auVar13._8_4_ + iVar19;
        iVar21 = auVar13._12_4_ + iVar21;
      }
      iVar11 = 0;
      iVar5 = 0;
      if (uVar10 < 8) {
        if (1 < (int64_t)(8 - uVar10)) {
          pbVar2 = (byte *)(uVar10 + (int64_t)puVar8);
          lVar9 = (6 - uVar10 >> 1) + 1;
          uVar10 = uVar10 + lVar9 * 2;
          do {
            uVar3 = (int)((uint)pbVar2[(int64_t)puVar7 - (int64_t)puVar8] - (uint)*pbVar2) >> 0x1f
            ;
            iVar11 = iVar11 + (((uint)pbVar2[(int64_t)puVar7 - (int64_t)puVar8] - (uint)*pbVar2 ^
                               uVar3) - uVar3);
            uVar3 = (uint)(pbVar2 + 2)[((int64_t)puVar7 - (int64_t)puVar8) + -1] - (uint)pbVar2[1]
            ;
            uVar4 = (int)uVar3 >> 0x1f;
            iVar5 = iVar5 + ((uVar3 ^ uVar4) - uVar4);
            lVar9 = lVar9 + -1;
            pbVar2 = pbVar2 + 2;
          } while (lVar9 != 0);
        }
        if ((int64_t)uVar10 < 8) {
          uVar3 = (uint)*(byte *)(uVar10 + (int64_t)puVar7) -
                  (uint)*(byte *)(uVar10 + (int64_t)puVar8);
          uVar4 = (int)uVar3 >> 0x1f;
          iVar6 = iVar6 + ((uVar3 ^ uVar4) - uVar4);
        }
        iVar6 = iVar6 + iVar5 + iVar11;
      }
      puVar7 = (uint *)((int64_t)puVar7 + (int64_t)param_2);
      puVar8 = (uint *)((int64_t)puVar8 + (int64_t)param_4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *param_5 = iVar15 + iVar14 + iVar19 + iVar18 + iVar17 + iVar16 + iVar21 + iVar20 + iVar6;
    param_5 = param_5 + 1;
    pstack_special_x_18 = (uint *)((int64_t)pstack_special_x_18 + 1);
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_696f40(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
void function_696f40(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t lVar12;
  int8_t auVar13 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int8_t in_XMM2 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  uint *pstack_special_x_18;
  int64_t lStack_48;
  iVar1 = render_system_control_ui;
  lStack_48 = 3;
  pstack_special_x_18 = param_3;
  do {
    iVar6 = 0;
    iVar14 = 0;
    iVar16 = 0;
    iVar18 = 0;
    iVar20 = 0;
    lVar12 = 8;
    puVar7 = param_1;
    puVar8 = pstack_special_x_18;
    iVar15 = iVar14;
    iVar17 = iVar16;
    iVar19 = iVar18;
    iVar21 = iVar20;
    do {
      uVar10 = 0;
      if (1 < iVar1) {
        uVar10 = 8;
        auVar22 = pmovzxbd(in_XMM2,ZEXT416(*puVar7));
        auVar13 = pmovzxbd(ZEXT416(*puVar7),ZEXT416(*puVar8));
        auVar23._0_4_ = auVar22._0_4_ - auVar13._0_4_;
        auVar23._4_4_ = auVar22._4_4_ - auVar13._4_4_;
        auVar23._8_4_ = auVar22._8_4_ - auVar13._8_4_;
        auVar23._12_4_ = auVar22._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(*puVar8),auVar23);
        iVar14 = auVar13._0_4_ + iVar14;
        iVar16 = auVar13._4_4_ + iVar16;
        iVar18 = auVar13._8_4_ + iVar18;
        iVar20 = auVar13._12_4_ + iVar20;
        auVar22 = pmovzxbd(auVar23,ZEXT416(puVar7[1]));
        auVar13 = pmovzxbd(ZEXT416(puVar7[1]),ZEXT416(puVar8[1]));
        in_XMM2._0_4_ = auVar22._0_4_ - auVar13._0_4_;
        in_XMM2._4_4_ = auVar22._4_4_ - auVar13._4_4_;
        in_XMM2._8_4_ = auVar22._8_4_ - auVar13._8_4_;
        in_XMM2._12_4_ = auVar22._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(puVar8[1]),in_XMM2);
        iVar15 = auVar13._0_4_ + iVar15;
        iVar17 = auVar13._4_4_ + iVar17;
        iVar19 = auVar13._8_4_ + iVar19;
        iVar21 = auVar13._12_4_ + iVar21;
      }
      iVar11 = 0;
      iVar5 = 0;
      if (uVar10 < 8) {
        if (1 < (int64_t)(8 - uVar10)) {
          pbVar2 = (byte *)(uVar10 + (int64_t)puVar8);
          lVar9 = (6 - uVar10 >> 1) + 1;
          uVar10 = uVar10 + lVar9 * 2;
          do {
            uVar3 = (int)((uint)pbVar2[(int64_t)puVar7 - (int64_t)puVar8] - (uint)*pbVar2) >> 0x1f
            ;
            iVar11 = iVar11 + (((uint)pbVar2[(int64_t)puVar7 - (int64_t)puVar8] - (uint)*pbVar2 ^
                               uVar3) - uVar3);
            uVar3 = (uint)(pbVar2 + 2)[((int64_t)puVar7 - (int64_t)puVar8) + -1] - (uint)pbVar2[1]
            ;
            uVar4 = (int)uVar3 >> 0x1f;
            iVar5 = iVar5 + ((uVar3 ^ uVar4) - uVar4);
            lVar9 = lVar9 + -1;
            pbVar2 = pbVar2 + 2;
          } while (lVar9 != 0);
        }
        if ((int64_t)uVar10 < 8) {
          uVar3 = (uint)*(byte *)(uVar10 + (int64_t)puVar7) -
                  (uint)*(byte *)(uVar10 + (int64_t)puVar8);
          uVar4 = (int)uVar3 >> 0x1f;
          iVar6 = iVar6 + ((uVar3 ^ uVar4) - uVar4);
        }
        iVar6 = iVar6 + iVar5 + iVar11;
      }
      puVar7 = (uint *)((int64_t)puVar7 + (int64_t)param_2);
      puVar8 = (uint *)((int64_t)puVar8 + (int64_t)param_4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *param_5 = iVar15 + iVar14 + iVar19 + iVar18 + iVar17 + iVar16 + iVar21 + iVar20 + iVar6;
    param_5 = param_5 + 1;
    pstack_special_x_18 = (uint *)((int64_t)pstack_special_x_18 + 1);
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
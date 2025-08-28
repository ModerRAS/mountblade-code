#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part059.c - 2 个函数

// 函数: void FUN_18007cbb0(uint param_1,longlong param_2,longlong *param_3,uint64_t param_4)
void FUN_18007cbb0(uint param_1,longlong param_2,longlong *param_3,uint64_t param_4)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  ushort uVar6;
  int16_t uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  int *piVar11;
  int *piVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  int32_t *puVar16;
  int32_t *puVar17;
  byte *pbVar18;
  int8_t *puVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  longlong *plStackX_20;
  int32_t uVar35;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  lVar21 = 0;
  if (param_1 < 0xe) {
    iVar8 = func_0x000180204ae0(param_1,param_2,param_3,param_4,0,0xfffffffffffffffe);
  }
  else {
    iVar8 = -1;
  }
  iVar2 = *(int *)(param_2 + 0x60);
  lVar27 = (longlong)iVar2;
  plVar10 = (longlong *)FUN_180081480(init_system_data_config,&plStackX_20,iVar2 * iVar8);
  plVar10 = (longlong *)*plVar10;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  plVar3 = (longlong *)*param_3;
  *param_3 = (longlong)plVar10;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  uVar35 = 0;
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  pfVar20 = *(float **)(*param_3 + 0x10);
  switch(param_1) {
  case 0:
    if (0 < iVar2) {
      do {
        *pfVar20 = *(float *)(lVar21 + 0x54 + *(longlong *)(param_2 + 0x68));
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        lVar21 = lVar21 + 0x5c;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 1:
    if (0 < iVar2) {
      do {
        *pfVar20 = *(float *)(lVar21 + 0x58 + *(longlong *)(param_2 + 0x68));
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        lVar21 = lVar21 + 0x5c;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 2:
    if (3 < lVar27) {
      lVar25 = (longlong)iVar8;
      pfVar15 = (float *)(*(longlong *)(param_2 + 0x68) + 0x48);
      pfVar13 = (float *)(*(longlong *)(param_2 + 0x68) + 0x100);
      lVar22 = (lVar27 - 4U >> 2) + 1;
      lVar21 = lVar22 * 4;
      do {
        *pfVar20 = pfVar15[-1];
        pfVar20[1] = 1.0 - *pfVar15;
        pfVar20 = (float *)((longlong)pfVar20 + lVar25);
        *pfVar20 = pfVar15[0x16];
        pfVar20[1] = 1.0 - pfVar15[0x17];
        pfVar20 = (float *)((longlong)pfVar20 + lVar25);
        *pfVar20 = pfVar13[-1];
        pfVar20[1] = 1.0 - *pfVar13;
        pfVar20 = (float *)((longlong)pfVar20 + lVar25);
        *pfVar20 = pfVar13[0x16];
        pfVar20[1] = 1.0 - pfVar13[0x17];
        pfVar20 = (float *)((longlong)pfVar20 + lVar25);
        pfVar15 = pfVar15 + 0x5c;
        pfVar13 = pfVar13 + 0x5c;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (lVar21 < lVar27) {
      pfVar15 = (float *)(*(longlong *)(param_2 + 0x68) + 0x48 + lVar21 * 0x5c);
      lVar27 = lVar27 - lVar21;
      do {
        *pfVar20 = pfVar15[-1];
        pfVar20[1] = 1.0 - *pfVar15;
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        pfVar15 = pfVar15 + 0x17;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 3:
    if (3 < lVar27) {
      lVar25 = (longlong)iVar8;
      pfVar15 = (float *)(*(longlong *)(param_2 + 0x68) + 0x50);
      pfVar13 = (float *)(*(longlong *)(param_2 + 0x68) + 0x108);
      lVar22 = (lVar27 - 4U >> 2) + 1;
      lVar21 = lVar22 * 4;
      do {
        *pfVar20 = pfVar15[-1];
        pfVar20[1] = 1.0 - *pfVar15;
        pfVar20 = (float *)((longlong)pfVar20 + lVar25);
        *pfVar20 = pfVar15[0x16];
        pfVar20[1] = 1.0 - pfVar15[0x17];
        pfVar20 = (float *)((longlong)pfVar20 + lVar25);
        *pfVar20 = pfVar13[-1];
        pfVar20[1] = 1.0 - *pfVar13;
        pfVar20 = (float *)((longlong)pfVar20 + lVar25);
        *pfVar20 = pfVar13[0x16];
        pfVar20[1] = 1.0 - pfVar13[0x17];
        pfVar20 = (float *)((longlong)pfVar20 + lVar25);
        pfVar15 = pfVar15 + 0x5c;
        pfVar13 = pfVar13 + 0x5c;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (lVar21 < lVar27) {
      pfVar15 = (float *)(*(longlong *)(param_2 + 0x68) + 0x50 + lVar21 * 0x5c);
      lVar27 = lVar27 - lVar21;
      do {
        *pfVar20 = pfVar15[-1];
        pfVar20[1] = 1.0 - *pfVar15;
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        pfVar15 = pfVar15 + 0x17;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 4:
  case 5:
    if ((param_1 == 5) && (0 < *(int *)(param_2 + 0x38))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    piVar12 = (int *)(param_2 + 0x38);
    if (!bVar5) {
      piVar12 = (int *)(param_2 + 0x10);
    }
    if (3 < lVar27) {
      lVar25 = *(longlong *)(piVar12 + 2);
      lVar24 = (longlong)iVar8;
      piVar11 = (int *)(*(longlong *)(param_2 + 0x68) + 0xb8);
      lVar22 = (lVar27 - 4U >> 2) + 1;
      lVar21 = lVar22 * 4;
      do {
        *pfVar20 = *(float *)(lVar25 + (longlong)piVar11[-0x2e] * 0x10);
        pfVar20[1] = *(float *)(lVar25 + 4 + (longlong)piVar11[-0x2e] * 0x10);
        pfVar20[2] = *(float *)(lVar25 + 8 + (longlong)piVar11[-0x2e] * 0x10);
        puVar16 = (int32_t *)((longlong)pfVar20 + lVar24);
        *puVar16 = *(int32_t *)(lVar25 + (longlong)piVar11[-0x17] * 0x10);
        puVar16[1] = *(int32_t *)(lVar25 + 4 + (longlong)piVar11[-0x17] * 0x10);
        puVar16[2] = *(int32_t *)(lVar25 + 8 + (longlong)piVar11[-0x17] * 0x10);
        puVar16 = (int32_t *)((longlong)puVar16 + lVar24);
        *puVar16 = *(int32_t *)(lVar25 + (longlong)*piVar11 * 0x10);
        puVar16[1] = *(int32_t *)(lVar25 + 4 + (longlong)*piVar11 * 0x10);
        puVar16[2] = *(int32_t *)(lVar25 + 8 + (longlong)*piVar11 * 0x10);
        puVar16 = (int32_t *)((longlong)puVar16 + lVar24);
        *puVar16 = *(int32_t *)(lVar25 + (longlong)piVar11[0x17] * 0x10);
        puVar16[1] = *(int32_t *)(lVar25 + 4 + (longlong)piVar11[0x17] * 0x10);
        puVar16[2] = *(int32_t *)(lVar25 + 8 + (longlong)piVar11[0x17] * 0x10);
        pfVar20 = (float *)((longlong)puVar16 + lVar24);
        piVar11 = piVar11 + 0x5c;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (lVar21 < lVar27) {
      lVar25 = *(longlong *)(piVar12 + 2);
      pfVar20 = pfVar20 + 2;
      piVar12 = (int *)(lVar21 * 0x5c + *(longlong *)(param_2 + 0x68));
      lVar27 = lVar27 - lVar21;
      do {
        pfVar20[-2] = *(float *)(lVar25 + (longlong)*piVar12 * 0x10);
        pfVar20[-1] = *(float *)(lVar25 + 4 + (longlong)*piVar12 * 0x10);
        *pfVar20 = *(float *)(lVar25 + 8 + (longlong)*piVar12 * 0x10);
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        piVar12 = piVar12 + 0x17;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 6:
    if (3 < lVar27) {
      lVar25 = (longlong)iVar8;
      pfVar15 = (float *)(*(longlong *)(param_2 + 0x68) + 0x38);
      puVar16 = (int32_t *)(*(longlong *)(param_2 + 0x68) + 0xf0);
      lVar22 = (lVar27 - 4U >> 2) + 1;
      lVar21 = lVar22 * 4;
      do {
        *pfVar20 = pfVar15[-1];
        pfVar20[1] = *pfVar15;
        pfVar20[2] = pfVar15[1];
        pfVar20 = (float *)((longlong)pfVar20 + lVar25);
        *pfVar20 = pfVar15[0x16];
        pfVar20[1] = pfVar15[0x17];
        pfVar20[2] = pfVar15[0x18];
        puVar17 = (int32_t *)((longlong)pfVar20 + lVar25);
        *puVar17 = puVar16[-1];
        puVar17[1] = *puVar16;
        puVar17[2] = puVar16[1];
        puVar17 = (int32_t *)((longlong)puVar17 + lVar25);
        *puVar17 = puVar16[0x16];
        puVar17[1] = puVar16[0x17];
        puVar17[2] = puVar16[0x18];
        pfVar20 = (float *)((longlong)puVar17 + lVar25);
        pfVar15 = pfVar15 + 0x5c;
        puVar16 = puVar16 + 0x5c;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (lVar21 < lVar27) {
      pfVar20 = pfVar20 + 2;
      pfVar15 = (float *)(*(longlong *)(param_2 + 0x68) + 0x38 + lVar21 * 0x5c);
      lVar27 = lVar27 - lVar21;
      do {
        pfVar20[-2] = pfVar15[-1];
        pfVar20[-1] = *pfVar15;
        *pfVar20 = pfVar15[1];
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        pfVar15 = pfVar15 + 0x17;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 7:
    if (3 < lVar27) {
      lVar22 = (longlong)iVar8;
      pfVar15 = (float *)(*(longlong *)(param_2 + 0x68) + 0x14);
      pfVar13 = (float *)(*(longlong *)(param_2 + 0x68) + 0xc0);
      lVar25 = (lVar27 - 4U >> 2) + 1;
      lVar21 = lVar25 * 4;
      do {
        *pfVar20 = *pfVar15;
        pfVar20[1] = pfVar15[1];
        pfVar20[2] = pfVar15[2];
        if ((pfVar13[-0x2e] * pfVar13[-0x29] - pfVar13[-0x2d] * pfVar13[-0x2a]) * pfVar15[4] +
            (pfVar13[-0x2d] * *pfVar15 - pfVar15[-4] * pfVar13[-0x29]) * pfVar13[-0x26] +
            (pfVar15[-4] * pfVar13[-0x2a] - *pfVar15 * pfVar13[-0x2e]) * pfVar13[-0x25] <= 0.0) {
          fVar28 = -1.0;
        }
        else {
          fVar28 = 1.0;
        }
        pfVar20[3] = fVar28;
        pfVar20 = (float *)((longlong)pfVar20 + lVar22);
        *pfVar20 = pfVar15[0x17];
        pfVar20[1] = pfVar15[0x18];
        pfVar20[2] = pfVar15[0x19];
        if ((pfVar13[-0x17] * pfVar13[-0x12] - pfVar13[-0x16] * pfVar13[-0x13]) * pfVar15[0x1b] +
            (pfVar15[0x17] * pfVar13[-0x16] - pfVar15[0x13] * pfVar13[-0x12]) * pfVar13[-0xf] +
            (pfVar15[0x13] * pfVar13[-0x13] - pfVar15[0x17] * pfVar13[-0x17]) * pfVar13[-0xe] <= 0.0
           ) {
          fVar28 = -1.0;
        }
        else {
          fVar28 = 1.0;
        }
        pfVar20[3] = fVar28;
        pfVar20 = (float *)((longlong)pfVar20 + lVar22);
        *pfVar20 = pfVar13[3];
        pfVar20[1] = pfVar13[4];
        pfVar20[2] = pfVar13[5];
        if ((pfVar13[1] * pfVar13[3] - pfVar13[5] * pfVar13[-1]) * pfVar13[8] +
            (pfVar13[5] * *pfVar13 - pfVar13[1] * pfVar13[4]) * pfVar13[7] +
            (pfVar13[4] * pfVar13[-1] - *pfVar13 * pfVar13[3]) * pfVar13[9] <= 0.0) {
          fVar28 = -1.0;
        }
        else {
          fVar28 = 1.0;
        }
        pfVar20[3] = fVar28;
        pfVar20 = (float *)((longlong)pfVar20 + lVar22);
        *pfVar20 = pfVar13[0x1a];
        pfVar20[1] = pfVar13[0x1b];
        pfVar20[2] = pfVar13[0x1c];
        if ((pfVar13[0x1c] * pfVar13[0x17] - pfVar13[0x18] * pfVar13[0x1b]) * pfVar13[0x1e] +
            (pfVar13[0x1a] * pfVar13[0x18] - pfVar13[0x1c] * pfVar13[0x16]) * pfVar13[0x1f] +
            (pfVar13[0x16] * pfVar13[0x1b] - pfVar13[0x1a] * pfVar13[0x17]) * pfVar13[0x20] <= 0.0)
        {
          fVar28 = -1.0;
        }
        else {
          fVar28 = 1.0;
        }
        pfVar20[3] = fVar28;
        pfVar20 = (float *)((longlong)pfVar20 + lVar22);
        pfVar15 = pfVar15 + 0x5c;
        pfVar13 = pfVar13 + 0x5c;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    if (lVar21 < lVar27) {
      pfVar20 = pfVar20 + 2;
      pfVar15 = (float *)(*(longlong *)(param_2 + 0x68) + 8 + lVar21 * 0x5c);
      lVar27 = lVar27 - lVar21;
      do {
        pfVar20[-2] = pfVar15[3];
        pfVar20[-1] = pfVar15[4];
        *pfVar20 = pfVar15[5];
        if ((pfVar15[5] * *pfVar15 - pfVar15[1] * pfVar15[4]) * pfVar15[7] +
            (pfVar15[3] * pfVar15[1] - pfVar15[-1] * pfVar15[5]) * pfVar15[8] +
            (pfVar15[-1] * pfVar15[4] - pfVar15[3] * *pfVar15) * pfVar15[9] <= 0.0) {
          fVar28 = -1.0;
        }
        else {
          fVar28 = 1.0;
        }
        pfVar20[1] = fVar28;
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        pfVar15 = pfVar15 + 0x17;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 8:
    if (*(int *)(param_2 + 200) < 1) {
code_r0x00018007db1b:
                    // WARNING: Subroutine does not return
      memset(pfVar20,0,(longlong)(iVar2 * 4));
    }
    lVar25 = lVar21;
    if (3 < lVar27) {
      lVar24 = (longlong)iVar8;
      lVar22 = (lVar27 - 4U >> 2) + 1;
      lVar25 = lVar22 * 4;
      do {
        lVar4 = *(longlong *)(param_2 + 0x68);
        *(char *)pfVar20 =
             (char)(int)(*(float *)(*(longlong *)(param_2 + 0xd0) +
                                   (longlong)*(int *)(lVar21 + lVar4) * 0x14) * 255.0);
        *(char *)((longlong)pfVar20 + 1) =
             (char)(int)(*(float *)(*(longlong *)(param_2 + 0xd0) + 4 +
                                   (longlong)*(int *)(lVar21 + lVar4) * 0x14) * 255.0);
        uVar9 = (uint)(*(float *)(*(longlong *)(param_2 + 0xd0) + 8 +
                                 (longlong)*(int *)(lVar21 + lVar4) * 0x14) * 255.0);
        *(char *)((longlong)pfVar20 + 2) = (char)uVar9;
        fVar28 = (float)((uVar9 & 0xff) + (uint)*(byte *)((longlong)pfVar20 + 1) +
                        (uint)*(byte *)pfVar20);
        if (0.0 <= fVar28) {
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
        }
        else {
          fVar28 = 0.0;
        }
        *(char *)((longlong)pfVar20 + 3) = (char)(int)(1.0 - fVar28);
        pbVar18 = (byte *)((longlong)pfVar20 + lVar24);
        lVar4 = *(longlong *)(param_2 + 0x68);
        *pbVar18 = (byte)(int)(*(float *)(*(longlong *)(param_2 + 0xd0) +
                                         (longlong)*(int *)(lVar21 + 0x5c + lVar4) * 0x14) * 255.0);
        pbVar18[1] = (byte)(int)(*(float *)(*(longlong *)(param_2 + 0xd0) + 4 +
                                           (longlong)*(int *)(lVar21 + 0x5c + lVar4) * 0x14) * 255.0
                                );
        uVar9 = (uint)(*(float *)(*(longlong *)(param_2 + 0xd0) + 8 +
                                 (longlong)*(int *)(lVar21 + 0x5c + lVar4) * 0x14) * 255.0);
        pbVar18[2] = (byte)uVar9;
        fVar28 = (float)((uVar9 & 0xff) + (uint)pbVar18[1] + (uint)*pbVar18);
        if (0.0 <= fVar28) {
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
        }
        else {
          fVar28 = 0.0;
        }
        pbVar18[3] = (byte)(int)(1.0 - fVar28);
        pbVar18 = pbVar18 + lVar24;
        lVar4 = *(longlong *)(param_2 + 0x68);
        *pbVar18 = (byte)(int)(*(float *)(*(longlong *)(param_2 + 0xd0) +
                                         (longlong)*(int *)(lVar21 + 0xb8 + lVar4) * 0x14) * 255.0);
        pbVar18[1] = (byte)(int)(*(float *)(*(longlong *)(param_2 + 0xd0) + 4 +
                                           (longlong)*(int *)(lVar21 + 0xb8 + lVar4) * 0x14) * 255.0
                                );
        uVar9 = (uint)(*(float *)(*(longlong *)(param_2 + 0xd0) + 8 +
                                 (longlong)*(int *)(lVar21 + 0xb8 + lVar4) * 0x14) * 255.0);
        pbVar18[2] = (byte)uVar9;
        fVar28 = (float)((uVar9 & 0xff) + (uint)pbVar18[1] + (uint)*pbVar18);
        if (0.0 <= fVar28) {
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
        }
        else {
          fVar28 = 0.0;
        }
        pbVar18[3] = (byte)(int)(1.0 - fVar28);
        pbVar18 = pbVar18 + lVar24;
        lVar4 = *(longlong *)(param_2 + 0x68);
        *pbVar18 = (byte)(int)(*(float *)(*(longlong *)(param_2 + 0xd0) +
                                         (longlong)*(int *)(lVar21 + 0x114 + lVar4) * 0x14) * 255.0)
        ;
        pbVar18[1] = (byte)(int)(*(float *)(*(longlong *)(param_2 + 0xd0) + 4 +
                                           (longlong)*(int *)(lVar21 + 0x114 + lVar4) * 0x14) *
                                255.0);
        uVar9 = (uint)(*(float *)(*(longlong *)(param_2 + 0xd0) + 8 +
                                 (longlong)*(int *)(lVar21 + 0x114 + lVar4) * 0x14) * 255.0);
        pbVar18[2] = (byte)uVar9;
        fVar28 = (float)((uVar9 & 0xff) + (uint)pbVar18[1] + (uint)*pbVar18);
        if (0.0 <= fVar28) {
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
        }
        else {
          fVar28 = 0.0;
        }
        pbVar18[3] = (byte)(int)(1.0 - fVar28);
        pfVar20 = (float *)(pbVar18 + lVar24);
        lVar21 = lVar21 + 0x170;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (lVar25 < lVar27) {
      lVar21 = lVar25 * 0x5c;
      puVar19 = (int8_t *)((longlong)pfVar20 + 2);
      lVar27 = lVar27 - lVar25;
      do {
        lVar25 = *(longlong *)(param_2 + 0x68);
        uVar23 = (uint)(*(float *)(*(longlong *)(param_2 + 0xd0) +
                                  (longlong)*(int *)(lVar21 + lVar25) * 0x14) * 255.0);
        puVar19[-2] = (char)uVar23;
        uVar14 = (uint)(*(float *)(*(longlong *)(param_2 + 0xd0) + 4 +
                                  (longlong)*(int *)(lVar21 + lVar25) * 0x14) * 255.0);
        puVar19[-1] = (char)uVar14;
        uVar9 = (uint)(*(float *)(*(longlong *)(param_2 + 0xd0) + 8 +
                                 (longlong)*(int *)(lVar21 + lVar25) * 0x14) * 255.0);
        *puVar19 = (char)uVar9;
        fVar28 = (float)((uVar9 & 0xff) + (uVar14 & 0xff) + (uVar23 & 0xff));
        if (0.0 <= fVar28) {
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
        }
        else {
          fVar28 = 0.0;
        }
        puVar19[1] = (char)(int)(1.0 - fVar28);
        puVar19 = puVar19 + iVar8;
        lVar21 = lVar21 + 0x5c;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 9:
    if (*(int *)(param_2 + 200) < 1) goto code_r0x00018007db1b;
    if (0 < iVar2) {
      do {
        lVar25 = *(longlong *)(param_2 + 0x68);
        *(int8_t *)pfVar20 =
             *(int8_t *)
              (*(longlong *)(param_2 + 0xd0) + 0x10 + (longlong)*(int *)(lVar21 + lVar25) * 0x14);
        *(int8_t *)((longlong)pfVar20 + 1) =
             *(int8_t *)
              (*(longlong *)(param_2 + 0xd0) + 0x11 + (longlong)*(int *)(lVar21 + lVar25) * 0x14);
        *(int8_t *)((longlong)pfVar20 + 2) =
             *(int8_t *)
              (*(longlong *)(param_2 + 0xd0) + 0x12 + (longlong)*(int *)(lVar21 + lVar25) * 0x14);
        *(int8_t *)((longlong)pfVar20 + 3) =
             *(int8_t *)
              (*(longlong *)(param_2 + 0xd0) + 0x13 + (longlong)*(int *)(lVar21 + lVar25) * 0x14);
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        lVar21 = lVar21 + 0x5c;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 10:
    if (0 < iVar2) {
      do {
        lVar25 = *(longlong *)(param_2 + 0x68);
        fVar29 = *(float *)(lVar21 + 0x34 + lVar25) * 0.5;
        fVar34 = *(float *)(lVar21 + 0x38 + lVar25) * 0.5;
        fVar28 = *(float *)(lVar21 + 0x3c + lVar25) * 0.5;
        fVar31 = fVar29 + 0.5;
        fVar32 = fVar34 + 0.5;
        fVar33 = fVar28 + 0.5;
        if (-0.5 <= fVar28) {
          if (1.0 <= fVar33) {
            fVar33 = 1.0;
          }
        }
        else {
          fVar33 = 0.0;
        }
        if (-0.5 <= fVar34) {
          if (1.0 <= fVar32) {
            fVar32 = 1.0;
          }
        }
        else {
          fVar32 = 0.0;
        }
        if (-0.5 <= fVar29) {
          if (1.0 <= fVar31) {
            fVar31 = 1.0;
          }
        }
        else {
          fVar31 = 0.0;
        }
        *pfVar20 = (float)(((uint)(longlong)(fVar32 * 2047.0) & 0x7ff |
                           (int)(longlong)(fVar31 * 2047.0) << 0xb) << 10 |
                          (uint)(longlong)(fVar33 * 1023.0) & 0x3ff);
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        lVar21 = lVar21 + 0x5c;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 0xb:
    if (0 < iVar2) {
      lVar25 = 0x40;
      if (*(int *)(param_2 + 0x38) < 1) {
        lVar25 = 0x18;
      }
      uVar6 = func_0x0001800840d0(0x3f800000);
      uVar26 = (ulonglong)uVar6;
      do {
        lVar22 = *(longlong *)(param_2 + 0x68);
        uVar7 = func_0x0001800840d0(*(int32_t *)
                                     (*(longlong *)(lVar25 + param_2) +
                                     (longlong)*(int *)(lVar21 + lVar22) * 0x10));
        *(int16_t *)pfVar20 = uVar7;
        uVar7 = func_0x0001800840d0(*(int32_t *)
                                     (*(longlong *)(lVar25 + param_2) + 4 +
                                     (longlong)*(int *)(lVar21 + lVar22) * 0x10));
        *(int16_t *)((longlong)pfVar20 + 2) = uVar7;
        uVar7 = func_0x0001800840d0(*(int32_t *)
                                     (*(longlong *)(lVar25 + param_2) + 8 +
                                     (longlong)*(int *)(lVar21 + lVar22) * 0x10));
        *(int16_t *)(pfVar20 + 1) = uVar7;
        *(short *)((longlong)pfVar20 + 6) = (short)uVar26;
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        lVar21 = lVar21 + 0x5c;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 0xc:
    if (0 < iVar2) {
      do {
        lVar25 = *(longlong *)(param_2 + 0x68);
        fVar28 = *(float *)(lVar21 + 0x1c + lVar25);
        fVar31 = *(float *)(lVar21 + 0x18 + lVar25);
        fVar32 = *(float *)(lVar21 + 0x14 + lVar25);
        fVar33 = *(float *)(lVar21 + 4 + lVar25);
        fVar34 = fVar32 * 0.5 + 0.5;
        fVar29 = fVar31 * 0.5 + 0.5;
        fVar30 = fVar28 * 0.5 + 0.5;
        if (-0.5 <= fVar28 * 0.5) {
          if (1.0 <= fVar30) {
            fVar30 = 1.0;
          }
        }
        else {
          fVar30 = 0.0;
        }
        if (-0.5 <= fVar31 * 0.5) {
          if (1.0 <= fVar29) {
            fVar29 = 1.0;
          }
        }
        else {
          fVar29 = 0.0;
        }
        if (-0.5 <= fVar32 * 0.5) {
          if (1.0 <= fVar34) {
            fVar34 = 1.0;
          }
        }
        else {
          fVar34 = 0.0;
        }
        uVar9 = 0;
        if ((fVar32 * *(float *)(lVar21 + 0xc + lVar25) - fVar33 * fVar28) *
            *(float *)(lVar21 + 0x28 + lVar25) +
            (fVar28 * *(float *)(lVar21 + 8 + lVar25) - fVar31 * *(float *)(lVar21 + 0xc + lVar25))
            * *(float *)(lVar21 + 0x24 + lVar25) +
            (fVar33 * fVar31 - fVar32 * *(float *)(lVar21 + 8 + lVar25)) *
            *(float *)(lVar21 + 0x2c + lVar25) < 0.0) {
          uVar9 = 0x80000000;
        }
        *pfVar20 = (float)((((uint)(longlong)(fVar34 * 1023.0) & 0x3ff) << 0xb |
                           (uint)(longlong)(fVar29 * 2047.0) & 0x7ff) << 10 |
                           (uint)(longlong)(fVar30 * 1023.0) & 0x3ff | uVar9);
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        lVar21 = lVar21 + 0x5c;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    break;
  case 0xd:
    if (0 < iVar2) {
      lVar22 = 0x48;
      lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
      fVar28 = fRam0000000180d49154;
      do {
        lVar24 = *(longlong *)(param_2 + 0x68);
        pfVar15 = (float *)(lVar21 + 0x34 + lVar24);
        fStack_108 = *pfVar15;
        fStack_104 = pfVar15[1];
        fStack_100 = pfVar15[2];
        fStack_fc = pfVar15[3];
        pfVar15 = (float *)(lVar21 + 0x14 + lVar24);
        fStack_f8 = *pfVar15;
        fStack_f4 = pfVar15[1];
        fStack_f0 = pfVar15[2];
        fStack_ec = pfVar15[3];
        pfVar15 = (float *)(lVar21 + 0x24 + lVar24);
        fStack_e8 = *pfVar15;
        fStack_e4 = pfVar15[1];
        fStack_e0 = pfVar15[2];
        fStack_dc = pfVar15[3];
        fVar31 = fStack_100 * fStack_f8 - fStack_f0 * fStack_108;
        if ((fStack_f0 * fStack_104 - fStack_100 * fStack_f4) * fStack_e8 + fStack_e4 * fVar31 +
            fStack_e0 * (fStack_f4 * fStack_108 - fStack_f8 * fStack_104) < 0.0) {
          fStack_e0 = -fStack_e0;
          fStack_118 = -fStack_e8;
          fStack_114 = -fStack_e4;
          uStack_10c = 0x7f7fffff;
          fStack_e8 = -fStack_e8;
          fStack_e4 = -fStack_e4;
          fStack_dc = 3.4028235e+38;
          fStack_110 = fStack_e0;
        }
        FUN_18063b470(&fStack_128,&fStack_108,fStack_e0,fVar31,uVar35);
        FUN_180084000(&fStack_128);
        if (fStack_128 < 0.0) {
          fStack_128 = -fStack_128;
          fStack_124 = -fStack_124;
          fStack_120 = -fStack_120;
          fStack_11c = -fStack_11c;
        }
        fVar34 = fStack_11c;
        fVar33 = fStack_120;
        fVar32 = fStack_124;
        fVar31 = fStack_128;
        if (*(int *)(lVar25 + lVar22) < iRam0000000180d49150) {
          SystemInitializer(0x180d49150);
          if (iRam0000000180d49150 == -1) {
            fRam0000000180d49154 = 1.0;
            FUN_1808fcb30(0x180d49150);
          }
          lVar22 = 0x48;
          fVar28 = fRam0000000180d49154;
        }
        if (fVar31 < 3.051851e-05) {
          fVar31 = 3.051851e-05;
          fStack_128 = 3.051851e-05;
          fVar32 = fVar32 * fVar28;
          fVar33 = fVar33 * fVar28;
          fVar34 = fVar34 * fVar28;
          fStack_124 = fVar32;
          fStack_120 = fVar33;
          fStack_11c = fVar34;
        }
        fVar29 = *(float *)(lVar21 + 0x18 + lVar24);
        fVar30 = *(float *)(lVar21 + 0x1c + lVar24);
        fVar1 = *(float *)(lVar21 + 0x14 + lVar24);
        if ((fVar30 * *(float *)(lVar21 + 0x34 + lVar24) -
            fVar1 * *(float *)(lVar21 + 0x3c + lVar24)) * *(float *)(lVar21 + 0x28 + lVar24) +
            (fVar29 * *(float *)(lVar21 + 0x3c + lVar24) -
            fVar30 * *(float *)(lVar21 + 0x38 + lVar24)) * *(float *)(lVar21 + 0x24 + lVar24) +
            (fVar1 * *(float *)(lVar21 + 0x38 + lVar24) -
            fVar29 * *(float *)(lVar21 + 0x34 + lVar24)) * *(float *)(lVar21 + 0x2c + lVar24) <= 0.0
           ) {
          fVar31 = -fVar31;
          fVar32 = -fVar32;
          fVar33 = -fVar33;
          fVar34 = -fVar34;
          fStack_128 = fVar31;
          fStack_124 = fVar32;
          fStack_120 = fVar33;
          fStack_11c = fVar34;
        }
        *(short *)pfVar20 = (short)(int)(fVar32 * 32767.0);
        *(short *)((longlong)pfVar20 + 2) = (short)(int)(fVar33 * 32767.0);
        *(short *)(pfVar20 + 1) = (short)(int)(fVar34 * 32767.0);
        *(short *)((longlong)pfVar20 + 6) = (short)(int)(fVar31 * 32767.0);
        pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar8);
        lVar21 = lVar21 + 0x5c;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
  }
  return;
}





// 函数: void FUN_18007df50(longlong param_1,longlong *param_2,char param_3,uint64_t param_4)
void FUN_18007df50(longlong param_1,longlong *param_2,char param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  longlong *plStackX_8;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    if (param_3 == '\0') {
      uVar4 = FUN_180081350(param_1,&plStackX_8,*(int *)(param_1 + 0x88) * 3,param_4,
                            0xfffffffffffffffe);
      FUN_180080810(param_2,uVar4);
    }
    else {
      uVar4 = FUN_180081220();
      FUN_180080810(param_2,uVar4);
    }
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    lVar2 = *(longlong *)(*param_2 + 0x10);
    if (param_3 != '\0') {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      memcpy(lVar2,*(uint64_t *)(param_1 + 0x90),(longlong)*(int *)(param_1 + 0x88) * 0xc);
      return;
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0x88) != 0) {
      do {
        lVar1 = (longlong)(int)uVar5 * 0xc;
        uVar3 = uVar5 * 3;
        *(int16_t *)(lVar2 + (ulonglong)uVar3 * 2) =
             *(int16_t *)(lVar1 + *(longlong *)(param_1 + 0x90));
        *(int16_t *)(lVar2 + (ulonglong)(uVar3 + 1) * 2) =
             *(int16_t *)(*(longlong *)(param_1 + 0x90) + 4 + lVar1);
        *(int16_t *)(lVar2 + (ulonglong)(uVar3 + 2) * 2) =
             *(int16_t *)(*(longlong *)(param_1 + 0x90) + 8 + lVar1);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x88));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




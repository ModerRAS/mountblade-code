#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part629.c - 1 个函数

// 函数: void FUN_18061d270(int64_t param_1)
void FUN_18061d270(int64_t param_1)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  char cVar10;
  int32_t *puVar11;
  int64_t lVar12;
  int32_t *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t *plVar16;
  int iVar17;
  uint64_t uVar18;
  int32_t *puVar19;
  int iVar20;
  uint64_t uVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint uVar27;
  int32_t uVar28;
  float fVar29;
  float fVar30;
  int8_t auStack_b8 [32];
  int64_t *aplStack_98 [2];
  int8_t auStack_88 [12];
  int8_t auStack_7c [12];
  int8_t auStack_70 [48];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  uVar24 = (uint64_t)(int)(*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48) >> 3);
  uVar23 = (*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28)) / 0x60;
  if (uVar23 < uVar24) {
    FUN_180622130(param_1 + 0x28,uVar24 - uVar23);
  }
  else {
    *(uint64_t *)(param_1 + 0x30) = uVar24 * 0x60 + *(int64_t *)(param_1 + 0x28);
  }
  iVar20 = *(int *)(param_1 + 0x1a8);
  uVar23 = 0;
  uVar24 = uVar23;
  uVar25 = uVar23;
  if (0 < iVar20) {
    do {
      plVar3 = *(int64_t **)(uVar24 + *(int64_t *)(param_1 + 0x48));
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x130))(plVar3,aplStack_98);
      lVar14 = *(int64_t *)(param_1 + 0x28);
      *(int32_t *)(uVar23 + lVar14) = *puVar11;
      *(int32_t *)(uVar23 + 4 + lVar14) = puVar11[1];
      *(int32_t *)(uVar23 + 8 + lVar14) = puVar11[2];
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x140))(plVar3,auStack_88);
      lVar14 = *(int64_t *)(param_1 + 0x28);
      *(int32_t *)(lVar14 + 0x10 + uVar23) = *puVar11;
      *(int32_t *)(lVar14 + 0x14 + uVar23) = puVar11[1];
      *(int32_t *)(lVar14 + 0x18 + uVar23) = puVar11[2];
      uVar28 = (**(code **)(*plVar3 + 0xf0))(plVar3);
      *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0xc + uVar23) = uVar28;
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x108))(plVar3,auStack_7c);
      lVar14 = *(int64_t *)(param_1 + 0x28);
      *(int32_t *)(lVar14 + 0x20 + uVar23) = *puVar11;
      *(int32_t *)(lVar14 + 0x24 + uVar23) = puVar11[1];
      *(int32_t *)(lVar14 + 0x28 + uVar23) = puVar11[2];
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x90))(plVar3,auStack_70);
      lVar14 = *(int64_t *)(param_1 + 0x28);
      *(int32_t *)(lVar14 + 0x30 + uVar23) = *puVar11;
      *(int32_t *)(lVar14 + 0x34 + uVar23) = puVar11[1];
      *(int32_t *)(lVar14 + 0x38 + uVar23) = puVar11[2];
      *(int32_t *)(lVar14 + 0x3c + uVar23) = puVar11[3];
      *(int32_t *)(lVar14 + 0x40 + uVar23) = puVar11[4];
      *(int32_t *)(lVar14 + 0x44 + uVar23) = puVar11[5];
      *(int32_t *)(lVar14 + 0x48 + uVar23) = puVar11[6];
      uVar28 = (**(code **)(*plVar3 + 0x1c8))(plVar3);
      *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x1c + uVar23) = uVar28;
      uVar28 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
      *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x2c + uVar23) = uVar28;
      uVar28 = (**(code **)(*plVar3 + 0x118))(plVar3);
      *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x4c + uVar23) = uVar28;
      uVar28 = (**(code **)(*plVar3 + 0x128))(plVar3);
      *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x50 + uVar23) = uVar28;
      fVar29 = (float)(**(code **)(*plVar3 + 0x168))(plVar3);
      fVar30 = (float)(**(code **)(*plVar3 + 0x168))(plVar3);
      *(float *)(*(int64_t *)(param_1 + 0x28) + 0x54 + uVar23) = fVar29 * fVar30;
      fVar29 = (float)(**(code **)(*plVar3 + 0x158))(plVar3);
      fVar30 = (float)(**(code **)(*plVar3 + 0x158))(plVar3);
      uVar23 = uVar23 + 0x60;
      *(float *)(*(int64_t *)(param_1 + 0x28) + -8 + uVar23) = fVar29 * fVar30;
      uVar27 = (int)uVar25 + 1;
      plVar3[2] = (int64_t)(int)uVar25;
      iVar20 = *(int *)(param_1 + 0x1a8);
      uVar24 = uVar24 + 8;
      uVar25 = (uint64_t)uVar27;
    } while ((int)uVar27 < iVar20);
  }
  uVar23 = 0;
  iVar17 = *(int *)(param_1 + 0x1ac);
  if (iVar20 < *(int *)(param_1 + 0x1b0) + iVar17 + iVar20) {
    lVar22 = (int64_t)iVar20 * 0x60;
    lVar14 = (int64_t)iVar20 * 8;
    do {
      plVar3 = *(int64_t **)(lVar14 + *(int64_t *)(param_1 + 0x48));
      *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0xc + lVar22) = 0;
      lVar12 = *(int64_t *)(param_1 + 0x28);
      *(uint64_t *)(lVar12 + 0x10 + lVar22) = 0;
      *(int32_t *)(lVar12 + 0x18 + lVar22) = 0;
      *(uint64_t *)(lVar12 + lVar22) = 0;
      *(int32_t *)(lVar12 + 8 + lVar22) = 0;
      *(int32_t *)(lVar12 + 0x1c + lVar22) = 0x7f7fffff;
      lVar12 = *(int64_t *)(param_1 + 0x28);
      *(uint64_t *)(lVar12 + 0x20 + lVar22) = 0;
      *(int32_t *)(lVar12 + 0x28 + lVar22) = 0;
      *(int32_t *)(lVar12 + 0x2c + lVar22) = 0x7f7fffff;
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x90))(plVar3,auStack_70);
      lVar12 = *(int64_t *)(param_1 + 0x28);
      lVar14 = lVar14 + 8;
      lVar22 = lVar22 + 0x60;
      *(int32_t *)(lVar12 + -0x30 + lVar22) = *puVar11;
      *(int32_t *)(lVar12 + -0x2c + lVar22) = puVar11[1];
      *(int32_t *)(lVar12 + -0x28 + lVar22) = puVar11[2];
      *(int32_t *)(lVar12 + -0x24 + lVar22) = puVar11[3];
      *(int32_t *)(lVar12 + -0x20 + lVar22) = puVar11[4];
      *(int32_t *)(lVar12 + -0x1c + lVar22) = puVar11[5];
      *(int32_t *)(lVar12 + -0x18 + lVar22) = puVar11[6];
      *(int32_t *)(lVar12 + -0x14 + lVar22) = 0;
      *(int32_t *)(*(int64_t *)(param_1 + 0x28) + -0x10 + lVar22) = 0;
      *(int32_t *)(*(int64_t *)(param_1 + 0x28) + -0xc + lVar22) = 0x7f7fffff;
      *(int32_t *)(*(int64_t *)(param_1 + 0x28) + -8 + lVar22) = 0x7f7fffff;
      lVar12 = (int64_t)iVar20;
      iVar20 = iVar20 + 1;
      plVar3[2] = lVar12;
      iVar17 = *(int *)(param_1 + 0x1ac);
    } while (iVar20 < *(int *)(param_1 + 0x1b0) + iVar17 + *(int *)(param_1 + 0x1a8));
  }
  FUN_180621d60(param_1 + 8,(int64_t)iVar17);
  lVar22 = *(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8);
  lVar14 = lVar22 >> 0x3f;
  uVar24 = uVar23;
  uVar25 = uVar23;
  if (lVar22 / 0x1c + lVar14 != lVar14) {
    do {
      plVar3 = *(int64_t **)
                (*(int64_t *)(param_1 + 0x48) +
                (int64_t)(*(int *)(param_1 + 0x1a8) + (int)uVar25) * 8);
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x90))(plVar3,auStack_70);
      lVar14 = *(int64_t *)(param_1 + 8);
      uVar24 = uVar24 + 0x1c;
      uVar27 = (int)uVar25 + 1;
      *(int32_t *)(lVar14 + -0x1c + uVar24) = *puVar11;
      *(int32_t *)(lVar14 + -0x18 + uVar24) = puVar11[1];
      *(int32_t *)(lVar14 + -0x14 + uVar24) = puVar11[2];
      *(int32_t *)(lVar14 + -0x10 + uVar24) = puVar11[3];
      *(int32_t *)(lVar14 + -0xc + uVar24) = puVar11[4];
      *(int32_t *)(lVar14 + -8 + uVar24) = puVar11[5];
      *(int32_t *)(lVar14 + -4 + uVar24) = puVar11[6];
      uVar25 = (uint64_t)uVar27;
    } while ((uint64_t)(int64_t)(int)uVar27 <
             (uint64_t)((*(int64_t *)(param_1 + 0x10) - lVar14) / 0x1c));
  }
  FUN_18033a920(param_1 + 0x200,*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48) >> 3);
  lVar14 = *(int64_t *)(param_1 + 0xb0) - *(int64_t *)(param_1 + 0xa8);
  uVar27 = *(int *)(param_1 + 0x1b0) + *(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x1a8);
  lVar14 = lVar14 / 6 + (lVar14 >> 0x3f);
  uVar24 = (uint64_t)(int)uVar27;
  uVar25 = (lVar14 >> 2) - (lVar14 >> 0x3f);
  if (uVar25 < uVar24) {
    FUN_1806223a0(param_1 + 0xa8,uVar24 - uVar25);
  }
  else {
    *(uint64_t *)(param_1 + 0xb0) = *(int64_t *)(param_1 + 0xa8) + uVar24 * 0x18;
  }
  lVar14 = *(int64_t *)(param_1 + 200);
  uVar25 = *(int64_t *)(param_1 + 0xd0) - lVar14 >> 5;
  if (uVar25 < uVar24) {
    FUN_180622500((int64_t *)(param_1 + 200),uVar24 - uVar25);
  }
  else {
    *(uint64_t *)(param_1 + 0xd0) = uVar24 * 0x20 + lVar14;
  }
  uVar25 = (*(int64_t *)(param_1 + 0xf0) - *(int64_t *)(param_1 + 0xe8)) / 0x70;
  if (uVar25 < uVar24) {
    FUN_1806226d0(param_1 + 0xe8,uVar24 - uVar25);
  }
  else {
    *(uint64_t *)(param_1 + 0xf0) = uVar24 * 0x70 + *(int64_t *)(param_1 + 0xe8);
  }
  uVar18 = *(uint64_t *)(param_1 + 0x128);
  uVar25 = *(uint64_t *)(param_1 + 0x130);
  uVar15 = (int64_t)(uVar25 - uVar18) >> 3;
  if (uVar15 < uVar24) {
    uVar21 = uVar24 - uVar15;
    if ((uint64_t)((int64_t)(*(int64_t *)(param_1 + 0x138) - uVar25) >> 3) < uVar21) {
      uVar26 = uVar15 * 2;
      if (uVar15 == 0) {
        uVar26 = 1;
      }
      if (uVar26 < uVar24) {
        uVar26 = uVar24;
      }
      uVar15 = uVar25;
      uVar25 = uVar23;
      if (uVar26 != 0) {
        uVar25 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar26 * 8,*(int8_t *)(param_1 + 0x140));
        uVar18 = *(uint64_t *)(param_1 + 0x128);
        uVar15 = *(uint64_t *)(param_1 + 0x130);
      }
      if (uVar18 != uVar15) {
                    // WARNING: Subroutine does not return
        memmove(uVar25,uVar18,uVar15 - uVar18);
      }
      if (uVar21 != 0) {
                    // WARNING: Subroutine does not return
        memset(uVar25,0,uVar21 * 8);
      }
      if (*(int64_t *)(param_1 + 0x128) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      *(uint64_t *)(param_1 + 0x128) = uVar25;
      *(uint64_t *)(param_1 + 0x138) = uVar25 + uVar26 * 8;
    }
    else if (uVar21 != 0) {
                    // WARNING: Subroutine does not return
      memset(uVar25,0,uVar21 * 8);
    }
  }
  else {
    uVar25 = uVar18 + uVar24 * 8;
  }
  *(uint64_t *)(param_1 + 0x130) = uVar25;
  uVar23 = (*(int64_t *)(param_1 + 0x110) - *(int64_t *)(param_1 + 0x108)) / 0x30;
  if (uVar23 < uVar24) {
    FUN_180622920(param_1 + 0x108,uVar24 - uVar23);
  }
  else {
    *(uint64_t *)(param_1 + 0x110) = uVar24 * 0x30 + *(int64_t *)(param_1 + 0x108);
  }
  lVar14 = *(int64_t *)(param_1 + 0x68);
  uVar23 = (uint64_t)(int)(uVar27 * 4);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x78) - lVar14 >> 5) < uVar23) {
    if (uVar23 == 0) {
      lVar22 = 0;
    }
    else {
      lVar22 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar23 << 5,*(int8_t *)(param_1 + 0x80));
      lVar14 = *(int64_t *)(param_1 + 0x68);
    }
    if (lVar14 != *(int64_t *)(param_1 + 0x70)) {
                    // WARNING: Subroutine does not return
      memmove(lVar22,lVar14,*(int64_t *)(param_1 + 0x70) - lVar14);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *(int64_t *)(param_1 + 0x68) = lVar22;
    *(int64_t *)(param_1 + 0x70) = lVar22;
    *(uint64_t *)(param_1 + 0x78) = uVar23 * 0x20 + lVar22;
  }
  lVar14 = *(int64_t *)(param_1 + 0x88);
  if ((uint64_t)(*(int64_t *)(param_1 + 0x98) - lVar14 >> 6) < uVar23) {
    if (uVar23 == 0) {
      puVar11 = (int32_t *)0x0;
    }
    else {
      puVar11 = (int32_t *)
                CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar23 << 6,*(int8_t *)(param_1 + 0xa0));
      lVar14 = *(int64_t *)(param_1 + 0x88);
    }
    lVar22 = *(int64_t *)(param_1 + 0x90);
    puVar13 = puVar11;
    if (lVar14 != lVar22) {
      lVar14 = lVar14 - (int64_t)puVar11;
      puVar19 = puVar11 + 5;
      do {
        puVar1 = puVar19 + 0x10;
        *puVar13 = *(int32_t *)(lVar14 + -0x14 + (int64_t)puVar19);
        puVar13 = puVar13 + 0x10;
        puVar19[-4] = *(int32_t *)(lVar14 + -0x50 + (int64_t)puVar1);
        puVar19[-3] = *(int32_t *)(lVar14 + -0x4c + (int64_t)puVar1);
        puVar19[-2] = *(int32_t *)(lVar14 + -0x48 + (int64_t)puVar1);
        puVar19[-1] = *(int32_t *)(lVar14 + -0x44 + (int64_t)puVar1);
        *puVar19 = *(int32_t *)(lVar14 + -0x40 + (int64_t)puVar1);
        puVar19[1] = *(int32_t *)(lVar14 + -0x3c + (int64_t)puVar1);
        puVar19[2] = *(int32_t *)(lVar14 + -0x38 + (int64_t)puVar1);
        puVar19[3] = *(int32_t *)(lVar14 + -0x34 + (int64_t)puVar1);
        puVar19[4] = *(int32_t *)(lVar14 + -0x30 + (int64_t)puVar1);
        puVar19[5] = *(int32_t *)(lVar14 + -0x2c + (int64_t)puVar1);
        puVar19[6] = *(int32_t *)(lVar14 + -0x28 + (int64_t)puVar1);
        *(int8_t *)(puVar19 + 7) = *(int8_t *)(lVar14 + -0x24 + (int64_t)puVar1);
        *(int16_t *)((int64_t)puVar19 + 0x1e) =
             *(int16_t *)(lVar14 + -0x22 + (int64_t)puVar1);
        puVar19[8] = *(int32_t *)(lVar14 + -0x20 + (int64_t)puVar1);
        puVar19[9] = *(int32_t *)(lVar14 + -0x1c + (int64_t)puVar1);
        puVar19[10] = *(int32_t *)(lVar14 + -0x18 + (int64_t)puVar1);
        lVar12 = (int64_t)puVar19 + lVar14 + 0x2c;
        puVar19 = puVar1;
      } while (lVar12 != lVar22);
      lVar14 = *(int64_t *)(param_1 + 0x88);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar14);
    }
    *(int32_t **)(param_1 + 0x88) = puVar11;
    *(int32_t **)(param_1 + 0x90) = puVar13;
    *(int32_t **)(param_1 + 0x98) = puVar11 + uVar23 * 0x10;
  }
  lVar14 = *(int64_t *)(param_1 + 0x188);
  uVar24 = (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3) + uVar23;
  if ((uint64_t)((*(int64_t *)(param_1 + 0x198) - lVar14) / 0x30) < uVar24) {
    if (uVar24 == 0) {
      lVar22 = 0;
    }
    else {
      lVar22 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar24 * 0x30,*(int8_t *)(param_1 + 0x1a0));
      lVar14 = *(int64_t *)(param_1 + 0x188);
    }
    if (lVar14 != *(int64_t *)(param_1 + 400)) {
                    // WARNING: Subroutine does not return
      memmove(lVar22,lVar14,*(int64_t *)(param_1 + 400) - lVar14);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar14);
    }
    *(int64_t *)(param_1 + 0x188) = lVar22;
    *(int64_t *)(param_1 + 400) = lVar22;
    *(uint64_t *)(param_1 + 0x198) = uVar24 * 0x30 + lVar22;
  }
  lVar14 = *(int64_t *)(param_1 + 0x148);
  uVar23 = (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3) + uVar23;
  if ((uint64_t)(*(int64_t *)(param_1 + 0x158) - lVar14 >> 3) < uVar23) {
    if (uVar23 == 0) {
      lVar22 = 0;
    }
    else {
      lVar22 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar23 * 8,*(int8_t *)(param_1 + 0x160));
      lVar14 = *(int64_t *)(param_1 + 0x148);
    }
    if (lVar14 != *(int64_t *)(param_1 + 0x150)) {
                    // WARNING: Subroutine does not return
      memmove(lVar22,lVar14,*(int64_t *)(param_1 + 0x150) - lVar14);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *(int64_t *)(param_1 + 0x148) = lVar22;
    *(uint64_t *)(param_1 + 0x158) = lVar22 + uVar23 * 8;
    *(int64_t *)(param_1 + 0x150) = lVar22;
  }
  if (uVar27 != 0) {
    uVar23 = (uint64_t)uVar27;
    lVar14 = 0;
    lVar22 = 0;
    do {
      plVar3 = *(int64_t **)(lVar14 + *(int64_t *)(param_1 + 0x48));
      cVar10 = (**(code **)(*plVar3 + 0x20))(plVar3,&unknown_var_2112_ptr);
      plVar16 = (int64_t *)0x0;
      if (cVar10 != '\0') {
        plVar16 = plVar3;
      }
      (**(code **)(*plVar16 + 0xb8))(plVar16,aplStack_98,1);
      *(int64_t **)(lVar14 + *(int64_t *)(param_1 + 0x128)) = aplStack_98[0];
      puVar13 = (int32_t *)(**(code **)(*aplStack_98[0] + 0x48))(aplStack_98[0],auStack_70);
      lVar14 = lVar14 + 8;
      uVar28 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      uVar6 = *(uint64_t *)(puVar13 + 4);
      uVar7 = *(uint64_t *)(puVar13 + 6);
      uVar8 = *(uint64_t *)(puVar13 + 8);
      uVar9 = *(uint64_t *)(puVar13 + 10);
      lVar12 = *(int64_t *)(param_1 + 0x108);
      puVar11 = (int32_t *)(lVar22 + lVar12);
      *puVar11 = *puVar13;
      puVar11[1] = uVar28;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar2 = (uint64_t *)(lVar22 + 0x10 + lVar12);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2 = (uint64_t *)(lVar22 + 0x20 + lVar12);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      uVar23 = uVar23 - 1;
      lVar22 = lVar22 + 0x30;
    } while (uVar23 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




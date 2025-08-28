#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part082.c - 5 个函数
// 函数: void NetworkSystem_f35f3(int64_t param_1)
void NetworkSystem_f35f3(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int64_t in_RAX;
  int *piVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t unaff_RBX;
  int *piVar15;
  uint64_t *puVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t *puVar19;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t *puVar20;
  uint uVar21;
  uint64_t unaff_R15;
  int *piVar22;
  float fVar23;
  float fVar24;
  float fStackX_20;
  float fStackX_24;
  uint local_buffer_d0;
  int64_t lStack00000000000000e0;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  lVar18 = param_1 + 0x360;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  uVar14 = unaff_R14 & 0xffffffff;
  *(int32_t *)(param_1 + 4) = 0x40000000;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  lVar12 = lVar18;
  do {
    Function_ee06e0f3(lVar12);
    lVar12 = lVar12 + 0xcc8;
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  cVar9 = NetworkSystem_f5130(unaff_RBX + 0x60,&fStackX_20);
  while (cVar9 != '\0') {
    NetworkSystem_f5ac0(unaff_RBX + 8,&fStackX_20);
    cVar9 = NetworkSystem_f5130(unaff_RBX + 0x60,&fStackX_20);
  }
  lVar12 = *(int64_t *)(unaff_RBX + 0x18);
  piVar22 = (int *)0x0;
  lVar17 = *(int64_t *)(unaff_RBX + 0x30);
  lVar13 = *(int64_t *)(unaff_RBX + 0x38) - *(int64_t *)(unaff_RBX + 0x40);
  bVar7 = false;
  bVar8 = false;
  local_buffer_d0 = 0;
  lVar2 = lVar13 >> 0x3f;
  if (lVar13 / 0x1c + lVar2 +
      (*(int64_t *)(unaff_RBX + 0x28) - lVar12) / 0x1c +
      ((*(int64_t *)(unaff_RBX + 0x50) - lVar17 >> 3) + -1) * 8 != lVar2) {
    lStack00000000000000e0 = 0;
    piVar10 = piVar22;
    do {
      lVar12 = (lVar12 - *(int64_t *)(unaff_RBX + 0x20)) / 0x1c + lStack00000000000000e0;
      lVar18 = lVar12 + 0x1000000;
      lVar18 = ((int64_t)(lVar18 + (uint64_t)((uint)(lVar18 >> 0x3f) & 7)) >> 3) * 8 + -0x1000000;
      piVar15 = (int *)((lVar12 - lVar18) * 0x1c + *(int64_t *)(lVar18 + lVar17));
      puVar20 = (uint64_t *)(unaff_RBX + 0x360 + (int64_t)*piVar15 * 0xcc8);
      fVar23 = (float)atan2f(((float *)*puVar20)[1] - (float)piVar15[2],
                             *(float *)*puVar20 - (float)piVar15[1]);
      fVar24 = fVar23 - 0.1308997;
      if (fVar23 < 0.1308997) {
        fVar24 = fVar23 + 6.1522856;
      }
      lVar18 = (int64_t)(int)(fVar24 * 3.8197186 - 0.0001);
      puVar16 = (uint64_t *)puVar20[lVar18 * 4 + 0x1a];
      if (puVar16 < (uint64_t *)puVar20[lVar18 * 4 + 0x1b]) {
        puVar20[lVar18 * 4 + 0x1a] = (int64_t)puVar16 + 0x1c;
        uVar6 = *(uint64_t *)(piVar15 + 2);
        *puVar16 = *(uint64_t *)piVar15;
        puVar16[1] = uVar6;
        puVar16[2] = *(uint64_t *)(piVar15 + 4);
        *(int *)(puVar16 + 3) = piVar15[6];
        local_buffer_d0 = (uint)piVar10;
      }
      else {
        puVar19 = (uint64_t *)puVar20[lVar18 * 4 + 0x19];
        lVar12 = ((int64_t)puVar16 - (int64_t)puVar19) / 0x1c;
        if (lVar12 == 0) {
          lVar12 = 1;
LAB_1805f3837:
          piVar10 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x1c,
                                         *(int8_t *)(puVar20 + lVar18 * 4 + 0x1c));
          puVar19 = (uint64_t *)puVar20[lVar18 * 4 + 0x19];
          puVar16 = (uint64_t *)puVar20[lVar18 * 4 + 0x1a];
        }
        else {
          lVar12 = lVar12 * 2;
          piVar10 = piVar22;
          if (lVar12 != 0) goto LAB_1805f3837;
        }
        if (puVar19 != puVar16) {
// WARNING: Subroutine does not return
          memmove(piVar10,puVar19,(int64_t)puVar16 - (int64_t)puVar19);
        }
        iVar3 = piVar15[1];
        iVar4 = piVar15[2];
        iVar5 = piVar15[3];
        *piVar10 = *piVar15;
        piVar10[1] = iVar3;
        piVar10[2] = iVar4;
        piVar10[3] = iVar5;
        *(uint64_t *)(piVar10 + 4) = *(uint64_t *)(piVar15 + 4);
        piVar10[6] = piVar15[6];
        if (puVar20[lVar18 * 4 + 0x19] != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puVar20[lVar18 * 4 + 0x19] = piVar10;
        puVar20[lVar18 * 4 + 0x1b] = piVar10 + lVar12 * 7;
        puVar20[lVar18 * 4 + 0x1a] = piVar10 + 7;
        bVar7 = bVar8;
      }
      fVar23 = (float)system_error_code * 1e-05 - (float)piVar15[6];
      if (fVar23 < (float)piVar15[5] || fVar23 == (float)piVar15[5]) {
        bVar7 = true;
        bVar8 = true;
      }
      else if (!bVar7) {
        lVar18 = *(int64_t *)(unaff_RBX + 0x18) + 0x1c;
        if (lVar18 == *(int64_t *)(unaff_RBX + 0x28)) {
          if (*(int64_t *)(unaff_RBX + 0x20) != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          plVar11 = (int64_t *)(*(int64_t *)(unaff_RBX + 0x30) + 8);
          *(int64_t **)(unaff_RBX + 0x30) = plVar11;
          lVar18 = *plVar11;
          *(int64_t *)(unaff_RBX + 0x20) = lVar18;
          *(int64_t *)(unaff_RBX + 0x28) = lVar18 + 0xe0;
          *(uint64_t *)(unaff_RBX + 0x18) = *(uint64_t *)(unaff_RBX + 0x20);
        }
        else {
          *(int64_t *)(unaff_RBX + 0x18) = lVar18;
        }
      }
      lVar12 = *(int64_t *)(unaff_RBX + 0x18);
      local_buffer_d0 = local_buffer_d0 + 1;
      piVar10 = (int *)(uint64_t)local_buffer_d0;
      lVar17 = *(int64_t *)(unaff_RBX + 0x30);
      lStack00000000000000e0 = lStack00000000000000e0 + 1;
    } while ((uint64_t)(int64_t)(int)local_buffer_d0 <
             (uint64_t)
             ((*(int64_t *)(unaff_RBX + 0x38) - *(int64_t *)(unaff_RBX + 0x40)) / 0x1c +
             (*(int64_t *)(unaff_RBX + 0x28) - lVar12) / 0x1c +
             ((*(int64_t *)(unaff_RBX + 0x50) - lVar17 >> 3) + -1) * 8));
    lVar18 = unaff_RBX + 0x360;
    unaff_R14 = 8;
  }
  do {
    NetworkSystem_f3ce0(lVar18,piVar22);
    uVar21 = (int)piVar22 + 1;
    piVar22 = (int *)(uint64_t)uVar21;
    lVar18 = lVar18 + 0xcc8;
  } while ((int)uVar21 < 8);
  lVar18 = unaff_RBX + 0xb18;
  do {
    plVar11 = (int64_t *)(lVar18 + -0x7b0);
    lVar17 = 0x18;
    lVar12 = lVar18;
    do {
      if (((int64_t *)*plVar11 != (int64_t *)0x0) &&
         (cVar9 = (**(code **)(*(int64_t *)*plVar11 + 0xd8))(), cVar9 != '\0')) {
        plVar1 = (int64_t *)*plVar11;
        lVar2 = *plVar1;
        if (*(float *)(lVar12 + -0x10) < 1.0) {
          fVar23 = *(float *)(lVar12 + -0x10) + 0.1;
          *(float *)(lVar12 + -0x10) = fVar23;
          fVar23 = (3.0 - (fVar23 + fVar23)) * fVar23 * fVar23;
          fStackX_20 = fVar23 * *(float *)(lVar12 + -8) * *(float *)(lVar12 + -0xc) +
                       *(float *)(lVar12 + -0x30);
          fStackX_24 = fVar23 * *(float *)(lVar12 + -4) * *(float *)(lVar12 + -0xc) +
                       *(float *)(lVar12 + -0x2c);
        }
        else {
          fStackX_20 = *(float *)(lVar12 + -0x20);
          fStackX_24 = *(float *)(lVar12 + -0x1c);
        }
        (**(code **)(lVar2 + 0xa8))(plVar1,&fStackX_20);
      }
      plVar11 = plVar11 + 1;
      lVar12 = lVar12 + 0x38;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar18 = lVar18 + 0xcc8;
    unaff_R14 = unaff_R14 - 1;
  } while (unaff_R14 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_f36f9(void)
void NetworkSystem_f36f9(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  char cVar7;
  int *piVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t unaff_RBX;
  int64_t lVar12;
  int *piVar13;
  int64_t unaff_RSI;
  uint64_t *puVar14;
  int64_t lVar15;
  int64_t in_R9;
  uint64_t *puVar16;
  int64_t in_R10;
  int *in_R11;
  char unaff_R12B;
  int unaff_R13D;
  uint64_t *puVar17;
  uint uVar18;
  int *unaff_R15;
  float fVar19;
  float fVar20;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fStackX_20;
  float fStackX_24;
  int local_buffer_d0;
  char local_buffer_d8;
  int *piVar21;
  piVar21 = unaff_R15;
  do {
    lVar11 = SUB168(SEXT816(unaff_RSI) * SEXT816(in_R9 - *(int64_t *)(unaff_RBX + 0x20)),8);
    lVar10 = (lVar11 >> 3) - (lVar11 >> 0x3f);
    lVar11 = (int64_t)in_R11 + lVar10 + 0x1000000;
    lVar11 = ((int64_t)(lVar11 + (uint64_t)((uint)(lVar11 >> 0x3f) & 7)) >> 3) * 8 + -0x1000000;
    piVar13 = (int *)(((int64_t)in_R11 + (lVar10 - lVar11)) * 0x1c + *(int64_t *)(lVar11 + in_R10)
                     );
    puVar17 = (uint64_t *)(unaff_RBX + 0x360 + (int64_t)*piVar13 * 0xcc8);
    fVar19 = (float)atan2f(((float *)*puVar17)[1] - (float)piVar13[2],
                           *(float *)*puVar17 - (float)piVar13[1]);
    fVar20 = fVar19 - 0.1308997;
    if (fVar19 < 0.1308997) {
      fVar20 = fVar19 + unaff_XMM7_Da;
    }
    lVar11 = (int64_t)(int)(fVar20 * unaff_XMM8_Da - 0.0001);
    puVar14 = (uint64_t *)puVar17[lVar11 * 4 + 0x1a];
    if (puVar14 < (uint64_t *)puVar17[lVar11 * 4 + 0x1b]) {
      puVar17[lVar11 * 4 + 0x1a] = (int64_t)puVar14 + 0x1c;
      uVar6 = *(uint64_t *)(piVar13 + 2);
      *puVar14 = *(uint64_t *)piVar13;
      puVar14[1] = uVar6;
      puVar14[2] = *(uint64_t *)(piVar13 + 4);
      *(int *)(puVar14 + 3) = piVar13[6];
      local_buffer_d0 = unaff_R13D;
    }
    else {
      puVar16 = (uint64_t *)puVar17[lVar11 * 4 + 0x19];
      lVar10 = ((int64_t)puVar14 - (int64_t)puVar16) / 0x1c;
      if (lVar10 == 0) {
        lVar10 = 1;
LAB_1805f3837:
        piVar8 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x1c,
                                      *(int8_t *)(puVar17 + lVar11 * 4 + 0x1c));
        puVar16 = (uint64_t *)puVar17[lVar11 * 4 + 0x19];
        puVar14 = (uint64_t *)puVar17[lVar11 * 4 + 0x1a];
      }
      else {
        lVar10 = lVar10 * 2;
        piVar8 = unaff_R15;
        if (lVar10 != 0) goto LAB_1805f3837;
      }
      if (puVar16 != puVar14) {
// WARNING: Subroutine does not return
        memmove(piVar8,puVar16,(int64_t)puVar14 - (int64_t)puVar16);
      }
      iVar3 = piVar13[1];
      iVar4 = piVar13[2];
      iVar5 = piVar13[3];
      *piVar8 = *piVar13;
      piVar8[1] = iVar3;
      piVar8[2] = iVar4;
      piVar8[3] = iVar5;
      *(uint64_t *)(piVar8 + 4) = *(uint64_t *)(piVar13 + 4);
      piVar8[6] = piVar13[6];
      if (puVar17[lVar11 * 4 + 0x19] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      puVar17[lVar11 * 4 + 0x19] = piVar8;
      puVar17[lVar11 * 4 + 0x1b] = piVar8 + lVar10 * 7;
      puVar17[lVar11 * 4 + 0x1a] = piVar8 + 7;
      unaff_R12B = local_buffer_d8;
    }
    fVar19 = (float)system_error_code * unaff_XMM6_Da - (float)piVar13[6];
    if (fVar19 < (float)piVar13[5] || fVar19 == (float)piVar13[5]) {
      unaff_R12B = '\x01';
      local_buffer_d8 = '\x01';
    }
    else if (unaff_R12B == '\0') {
      lVar11 = *(int64_t *)(unaff_RBX + 0x18) + 0x1c;
      if (lVar11 == *(int64_t *)(unaff_RBX + 0x28)) {
        if (*(int64_t *)(unaff_RBX + 0x20) != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plVar9 = (int64_t *)(*(int64_t *)(unaff_RBX + 0x30) + 8);
        *(int64_t **)(unaff_RBX + 0x30) = plVar9;
        lVar11 = *plVar9;
        *(int64_t *)(unaff_RBX + 0x20) = lVar11;
        *(int64_t *)(unaff_RBX + 0x28) = lVar11 + 0xe0;
        *(uint64_t *)(unaff_RBX + 0x18) = *(uint64_t *)(unaff_RBX + 0x20);
      }
      else {
        *(int64_t *)(unaff_RBX + 0x18) = lVar11;
      }
    }
    in_R9 = *(int64_t *)(unaff_RBX + 0x18);
    unaff_RSI = 0x4924924924924925;
    unaff_R13D = local_buffer_d0 + 1;
    in_R10 = *(int64_t *)(unaff_RBX + 0x30);
    in_R11 = (int *)((int64_t)piVar21 + 1);
    local_buffer_d0 = unaff_R13D;
    piVar21 = in_R11;
    if ((uint64_t)
        ((*(int64_t *)(unaff_RBX + 0x38) - *(int64_t *)(unaff_RBX + 0x40)) / 0x1c +
        (*(int64_t *)(unaff_RBX + 0x28) - in_R9) / 0x1c +
        ((*(int64_t *)(unaff_RBX + 0x50) - in_R10 >> 3) + -1) * 8) <=
        (uint64_t)(int64_t)unaff_R13D) {
      lVar11 = unaff_RBX + 0x360;
      lVar10 = 8;
      do {
        NetworkSystem_f3ce0(lVar11,(uint64_t)unaff_R15 & 0xffffffff);
        uVar18 = (int)unaff_R15 + 1;
        unaff_R15 = (int *)(uint64_t)uVar18;
        lVar11 = lVar11 + 0xcc8;
      } while ((int)uVar18 < 8);
      lVar11 = unaff_RBX + 0xb18;
      do {
        plVar9 = (int64_t *)(lVar11 + -0x7b0);
        lVar15 = 0x18;
        lVar12 = lVar11;
        do {
          if (((int64_t *)*plVar9 != (int64_t *)0x0) &&
             (cVar7 = (**(code **)(*(int64_t *)*plVar9 + 0xd8))(), cVar7 != '\0')) {
            plVar1 = (int64_t *)*plVar9;
            lVar2 = *plVar1;
            if (*(float *)(lVar12 + -0x10) < 1.0) {
              fVar19 = *(float *)(lVar12 + -0x10) + 0.1;
              *(float *)(lVar12 + -0x10) = fVar19;
              fVar19 = (3.0 - (fVar19 + fVar19)) * fVar19 * fVar19;
              fStackX_20 = fVar19 * *(float *)(lVar12 + -8) * *(float *)(lVar12 + -0xc) +
                           *(float *)(lVar12 + -0x30);
              fStackX_24 = fVar19 * *(float *)(lVar12 + -4) * *(float *)(lVar12 + -0xc) +
                           *(float *)(lVar12 + -0x2c);
            }
            else {
              fStackX_20 = *(float *)(lVar12 + -0x20);
              fStackX_24 = *(float *)(lVar12 + -0x1c);
            }
            (**(code **)(lVar2 + 0xa8))(plVar1,&fStackX_20);
          }
          plVar9 = plVar9 + 1;
          lVar12 = lVar12 + 0x38;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar11 = lVar11 + 0xcc8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      return;
    }
  } while( true );
}
// 函数: void NetworkSystem_f3a10(void)
void NetworkSystem_f3a10(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RDI;
  int64_t *plVar7;
  int64_t unaff_R14;
  int unaff_R15D;
  float fVar8;
  float fStackX_20;
  float fStackX_24;
  do {
    NetworkSystem_f3ce0(unaff_RDI,unaff_R15D);
    unaff_R15D = unaff_R15D + 1;
    unaff_RDI = unaff_RDI + 0xcc8;
  } while (unaff_R15D < 8);
  lVar5 = unaff_RBX + 0xb18;
  do {
    plVar7 = (int64_t *)(lVar5 + -0x7b0);
    lVar6 = 0x18;
    lVar4 = lVar5;
    do {
      if ((int64_t *)*plVar7 != (int64_t *)0x0) {
        cVar3 = (**(code **)(*(int64_t *)*plVar7 + 0xd8))();
        if (cVar3 != '\0') {
          plVar1 = (int64_t *)*plVar7;
          lVar2 = *plVar1;
          if (*(float *)(lVar4 + -0x10) < 1.0) {
            fVar8 = *(float *)(lVar4 + -0x10) + 0.1;
            *(float *)(lVar4 + -0x10) = fVar8;
            fVar8 = (3.0 - (fVar8 + fVar8)) * fVar8 * fVar8;
            fStackX_20 = fVar8 * *(float *)(lVar4 + -8) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x30);
            fStackX_24 = fVar8 * *(float *)(lVar4 + -4) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x2c);
          }
          else {
            fStackX_20 = *(float *)(lVar4 + -0x20);
            fStackX_24 = *(float *)(lVar4 + -0x1c);
          }
          (**(code **)(lVar2 + 0xa8))(plVar1,&fStackX_20);
        }
      }
      plVar7 = plVar7 + 1;
      lVar4 = lVar4 + 0x38;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar5 = lVar5 + 0xcc8;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  return;
}
// 函数: void NetworkSystem_f3a20(void)
void NetworkSystem_f3a20(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RDI;
  int64_t *plVar7;
  int64_t unaff_R14;
  int unaff_R15D;
  float fVar8;
  float fStackX_20;
  float fStackX_24;
  do {
    NetworkSystem_f3ce0(unaff_RDI,unaff_R15D);
    unaff_R15D = unaff_R15D + 1;
    unaff_RDI = unaff_RDI + 0xcc8;
  } while (unaff_R15D < 8);
  lVar5 = unaff_RBX + 0xb18;
  do {
    plVar7 = (int64_t *)(lVar5 + -0x7b0);
    lVar6 = 0x18;
    lVar4 = lVar5;
    do {
      if ((int64_t *)*plVar7 != (int64_t *)0x0) {
        cVar3 = (**(code **)(*(int64_t *)*plVar7 + 0xd8))();
        if (cVar3 != '\0') {
          plVar1 = (int64_t *)*plVar7;
          lVar2 = *plVar1;
          if (*(float *)(lVar4 + -0x10) < 1.0) {
            fVar8 = *(float *)(lVar4 + -0x10) + 0.1;
            *(float *)(lVar4 + -0x10) = fVar8;
            fVar8 = (3.0 - (fVar8 + fVar8)) * fVar8 * fVar8;
            fStackX_20 = fVar8 * *(float *)(lVar4 + -8) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x30);
            fStackX_24 = fVar8 * *(float *)(lVar4 + -4) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x2c);
          }
          else {
            fStackX_20 = *(float *)(lVar4 + -0x20);
            fStackX_24 = *(float *)(lVar4 + -0x1c);
          }
          (**(code **)(lVar2 + 0xa8))(plVar1,&fStackX_20);
        }
      }
      plVar7 = plVar7 + 1;
      lVar4 = lVar4 + 0x38;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar5 = lVar5 + 0xcc8;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  return;
}
// 函数: void NetworkSystem_f3a43(void)
void NetworkSystem_f3a43(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t unaff_R14;
  float fVar8;
  float fStackX_20;
  float fStackX_24;
  lVar5 = unaff_RBX + 0xb18;
  do {
    plVar7 = (int64_t *)(lVar5 + -0x7b0);
    lVar6 = 0x18;
    lVar4 = lVar5;
    do {
      if ((int64_t *)*plVar7 != (int64_t *)0x0) {
        cVar3 = (**(code **)(*(int64_t *)*plVar7 + 0xd8))();
        if (cVar3 != '\0') {
          plVar1 = (int64_t *)*plVar7;
          lVar2 = *plVar1;
          if (*(float *)(lVar4 + -0x10) < 1.0) {
            fVar8 = *(float *)(lVar4 + -0x10) + 0.1;
            *(float *)(lVar4 + -0x10) = fVar8;
            fVar8 = (3.0 - (fVar8 + fVar8)) * fVar8 * fVar8;
            fStackX_20 = fVar8 * *(float *)(lVar4 + -8) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x30);
            fStackX_24 = fVar8 * *(float *)(lVar4 + -4) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x2c);
          }
          else {
            fStackX_20 = *(float *)(lVar4 + -0x20);
            fStackX_24 = *(float *)(lVar4 + -0x1c);
          }
          (**(code **)(lVar2 + 0xa8))(plVar1,&fStackX_20);
        }
      }
      plVar7 = plVar7 + 1;
      lVar4 = lVar4 + 0x38;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar5 = lVar5 + 0xcc8;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
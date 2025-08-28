#include "TaleWorlds.Native.Split.h"

// 03_rendering_part671.c - 2 个函数

// 函数: void FUN_18064e645(void)
void FUN_18064e645(void)

{
  CoreEngineSystemCleanup();
                    // WARNING: Subroutine does not return
  memset();
}



// WARNING: Possible PIC construction at 0x00018064c06c: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018064c071)
// WARNING: Removing unreachable block (ram,0x00018064c07a)
// WARNING: Removing unreachable block (ram,0x00018064c085)
// WARNING: Removing unreachable block (ram,0x00018064c08e)
// WARNING: Removing unreachable block (ram,0x00018064c09a)
// WARNING: Removing unreachable block (ram,0x00018064c0b1)
// WARNING: Removing unreachable block (ram,0x00018064c12e)
// WARNING: Removing unreachable block (ram,0x00018064c131)
// WARNING: Removing unreachable block (ram,0x00018064c137)
// WARNING: Removing unreachable block (ram,0x00018064c150)
// WARNING: Removing unreachable block (ram,0x00018064c160)
// WARNING: Removing unreachable block (ram,0x00018064c18d)
// WARNING: Removing unreachable block (ram,0x00018064c1c0)
// WARNING: Removing unreachable block (ram,0x00018064c1ce)
// WARNING: Removing unreachable block (ram,0x00018064c1d2)
// WARNING: Removing unreachable block (ram,0x00018064c192)
// WARNING: Removing unreachable block (ram,0x00018064c1a6)
// WARNING: Removing unreachable block (ram,0x00018064c1ab)
// WARNING: Removing unreachable block (ram,0x00018064c1b3)
// WARNING: Removing unreachable block (ram,0x00018064c1d6)
// WARNING: Removing unreachable block (ram,0x00018064c1e1)
// WARNING: Removing unreachable block (ram,0x00018064c1f1)
// WARNING: Removing unreachable block (ram,0x00018064c1fb)
// WARNING: Removing unreachable block (ram,0x00018064aeb0)
// WARNING: Removing unreachable block (ram,0x00018064aee9)
// WARNING: Removing unreachable block (ram,0x00018064af00)
// WARNING: Removing unreachable block (ram,0x00018064af10)
// WARNING: Removing unreachable block (ram,0x00018064af17)
// WARNING: Removing unreachable block (ram,0x00018064af1f)
// WARNING: Removing unreachable block (ram,0x00018064af40)
// WARNING: Removing unreachable block (ram,0x00018064af6a)
// WARNING: Removing unreachable block (ram,0x00018064af79)
// WARNING: Removing unreachable block (ram,0x00018064af80)
// WARNING: Removing unreachable block (ram,0x00018064af8a)
// WARNING: Removing unreachable block (ram,0x00018064af8e)
// WARNING: Removing unreachable block (ram,0x00018064af9a)
// WARNING: Removing unreachable block (ram,0x00018064afa2)
// WARNING: Removing unreachable block (ram,0x00018064afa7)
// WARNING: Removing unreachable block (ram,0x00018064afad)
// WARNING: Removing unreachable block (ram,0x00018064afb2)
// WARNING: Removing unreachable block (ram,0x00018064afc8)
// WARNING: Removing unreachable block (ram,0x00018064afcd)
// WARNING: Removing unreachable block (ram,0x00018064afd8)
// WARNING: Removing unreachable block (ram,0x00018064afe8)
// WARNING: Removing unreachable block (ram,0x00018064afdd)
// WARNING: Removing unreachable block (ram,0x00018064aff4)
// WARNING: Removing unreachable block (ram,0x00018064b008)
// WARNING: Removing unreachable block (ram,0x00018064b01c)
// WARNING: Removing unreachable block (ram,0x00018064b036)
// WARNING: Removing unreachable block (ram,0x00018064b079)
// WARNING: Removing unreachable block (ram,0x00018064b0a4)
// WARNING: Removing unreachable block (ram,0x00018064b0aa)
// WARNING: Removing unreachable block (ram,0x00018064b0c8)
// WARNING: Removing unreachable block (ram,0x00018064b0db)
// WARNING: Removing unreachable block (ram,0x00018064b086)
// WARNING: Removing unreachable block (ram,0x00018064b05d)
// WARNING: Removing unreachable block (ram,0x00018064b0f2)
// WARNING: Removing unreachable block (ram,0x00018064b021)
// WARNING: Removing unreachable block (ram,0x00018064b0f7)
// WARNING: Removing unreachable block (ram,0x00018064b000)
// WARNING: Removing unreachable block (ram,0x00018064c0c4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * FUN_18064e670(uint64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint *puVar6;
  uint *puVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  bool bVar15;
  
  if (*(int *)((param_1 & 0xffffffffffc00000) + 0x68) == 1) {
    FUN_18064f980();
    plVar8 = *(int64_t **)
              (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x10);
    puVar2 = (uint64_t *)((param_1 & 0xffffffffffc00000) + 0x70);
    LOCK();
    puVar6 = (uint *)*puVar2;
    bVar15 = puVar6 == (uint *)0x0;
    if (bVar15) {
      *puVar2 = plVar8[0x164];
      puVar6 = (uint *)0x0;
    }
    UNLOCK();
    if (bVar15) {
      *param_2 = *(uint64_t *)(param_1 + 0x10);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
      *(uint64_t **)(param_1 + 0x10) = param_2;
      lVar5 = *plVar8;
      lVar13 = lVar5 + 0x20;
      uVar10 = param_1 & 0xffffffffffc00000;
      FUN_18064c220(param_1,lVar13);
      puVar7 = *(uint **)(uVar10 + 0x48);
      if (puVar7 != (uint *)0x0) {
        if (puVar7 == *(uint **)(uVar10 + 0x38)) {
          puVar7 = (uint *)FUN_18064c570(uVar10,lVar13);
        }
        return puVar7;
      }
      lVar9 = *(int64_t *)(uVar10 + 0x78);
      for (puVar7 = (uint *)(uVar10 + 0x80); puVar7 < (uint *)(uVar10 + 0x80 + lVar9 * 0x50);
          puVar7 = puVar7 + (uint64_t)*puVar7 * 0x14) {
        if ((puVar7[7] == 0) && (*(int *)(uVar10 + 0x68) != 1)) {
          uVar12 = (uint64_t)*puVar7;
          if (1 < uVar12) {
            uVar11 = uVar12 - 1;
            if (uVar11 == 0) {
              uVar14 = 0x40;
            }
            else {
              lVar4 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              uVar14 = 0x3f - (uint64_t)(0x3f - (int)lVar4);
              if (uVar14 < 3) goto LAB_18064bfea;
            }
            uVar12 = ((uint64_t)((uint)(uVar11 >> ((char)uVar14 - 2U & 0x3f)) & 3) | uVar14 * 4) -
                     4;
          }
LAB_18064bfea:
          puVar3 = (uint64_t *)(lVar13 + uVar12 * 0x18);
          if (*(int64_t *)(puVar7 + 0x10) != 0) {
            *(uint64_t *)(*(int64_t *)(puVar7 + 0x10) + 0x38) = *(uint64_t *)(puVar7 + 0xe);
          }
          if (puVar7 == (uint *)*puVar3) {
            *puVar3 = *(uint64_t *)(puVar7 + 0xe);
          }
          if (*(int64_t *)(puVar7 + 0xe) != 0) {
            *(uint64_t *)(*(int64_t *)(puVar7 + 0xe) + 0x40) = *(uint64_t *)(puVar7 + 0x10);
          }
          if (puVar7 == (uint *)puVar3[1]) {
            puVar3[1] = *(uint64_t *)(puVar7 + 0x10);
          }
          puVar7[0x10] = 0;
          puVar7[0x11] = 0;
          puVar7[0xe] = 0;
          puVar7[0xf] = 0;
          puVar7[7] = 1;
        }
      }
      lVar13 = *(int64_t *)(uVar10 + 0x60);
      lVar5 = *(int64_t *)(lVar5 + 0x3b8);
      lVar9 = lVar13 * -0x10000;
      plVar8 = (int64_t *)(lVar5 + 0xa0);
      if (lVar9 != 0) {
        if (((int64_t *)0x180c8ed7f < plVar8) && (plVar8 < &system_ptr_efc0)) {
          LOCK();
          plVar1 = (int64_t *)(lVar5 + 0xb8);
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + lVar9;
          UNLOCK();
          puVar7 = *(uint **)(lVar5 + 0xb0);
          do {
            puVar6 = puVar7;
            if (lVar4 + lVar9 <= (int64_t)puVar7) break;
            LOCK();
            puVar6 = *(uint **)(lVar5 + 0xb0);
            bVar15 = puVar7 == puVar6;
            if (bVar15) {
              *(int64_t *)(lVar5 + 0xb0) = lVar4 + lVar9;
              puVar6 = puVar7;
            }
            UNLOCK();
            puVar7 = puVar6;
          } while (!bVar15);
          if (lVar9 < 1) {
            plVar8 = (int64_t *)(lVar5 + 0xa8);
            lVar9 = lVar13 * 0x10000;
          }
          LOCK();
          *plVar8 = *plVar8 + lVar9;
          UNLOCK();
          return puVar6;
        }
        *(int64_t *)(lVar5 + 0xb8) = *(int64_t *)(lVar5 + 0xb8) + lVar9;
        puVar7 = *(uint **)(lVar5 + 0xb8);
        if (*(int64_t *)(lVar5 + 0xb0) < (int64_t)puVar7) {
          *(uint **)(lVar5 + 0xb0) = puVar7;
        }
        if (0 < lVar9) {
          *plVar8 = *plVar8 + lVar9;
          return puVar7;
        }
        *(int64_t *)(lVar5 + 0xa8) = *(int64_t *)(lVar5 + 0xa8) + lVar13 * 0x10000;
      }
      return puVar7;
    }
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x28);
    do {
      uVar10 = (uint64_t)puVar7 & 3;
      if (((uint64_t)puVar7 & 3) == 0) {
        uVar12 = (uint64_t)puVar7 & 0xfffffffffffffffd | 1;
      }
      else {
        *param_2 = (uint64_t)puVar7 & 0xfffffffffffffffc;
        uVar12 = (uint64_t)((uint)puVar7 & 3) | (uint64_t)param_2;
      }
      LOCK();
      puVar6 = *(uint **)(param_1 + 0x28);
      bVar15 = puVar7 == puVar6;
      if (bVar15) {
        *(uint64_t *)(param_1 + 0x28) = uVar12;
        puVar6 = puVar7;
      }
      UNLOCK();
      puVar7 = puVar6;
    } while (!bVar15);
    if (uVar10 == 0) {
      lVar5 = *(int64_t *)(param_1 + 0x30);
      if (lVar5 != 0) {
        uVar10 = *(uint64_t *)(lVar5 + 0xb18);
        do {
          *param_2 = uVar10;
          LOCK();
          uVar12 = *(uint64_t *)(lVar5 + 0xb18);
          bVar15 = uVar10 == uVar12;
          if (bVar15) {
            *(uint64_t *)(lVar5 + 0xb18) = (uint64_t)param_2;
            uVar12 = uVar10;
          }
          UNLOCK();
          uVar10 = uVar12;
        } while (!bVar15);
      }
      puVar7 = *(uint **)(param_1 + 0x28);
      do {
        LOCK();
        puVar6 = *(uint **)(param_1 + 0x28);
        bVar15 = puVar7 == puVar6;
        if (bVar15) {
          *(uint64_t *)(param_1 + 0x28) = (uint64_t)puVar7 & 0xfffffffffffffffe | 2;
          puVar6 = puVar7;
        }
        UNLOCK();
        puVar7 = puVar6;
      } while (!bVar15);
    }
  }
  return puVar6;
}



// WARNING: Possible PIC construction at 0x00018064d5f0: Changing call to branch
// WARNING: Possible PIC construction at 0x00018064c06c: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018064c071)
// WARNING: Removing unreachable block (ram,0x00018064c07a)
// WARNING: Removing unreachable block (ram,0x00018064c085)
// WARNING: Removing unreachable block (ram,0x00018064c08e)
// WARNING: Removing unreachable block (ram,0x00018064c09a)
// WARNING: Removing unreachable block (ram,0x00018064c0b1)
// WARNING: Removing unreachable block (ram,0x00018064c12e)
// WARNING: Removing unreachable block (ram,0x00018064c131)
// WARNING: Removing unreachable block (ram,0x00018064c137)
// WARNING: Removing unreachable block (ram,0x00018064c150)
// WARNING: Removing unreachable block (ram,0x00018064c160)
// WARNING: Removing unreachable block (ram,0x00018064c18d)
// WARNING: Removing unreachable block (ram,0x00018064c1c0)
// WARNING: Removing unreachable block (ram,0x00018064c1ce)
// WARNING: Removing unreachable block (ram,0x00018064c1d2)
// WARNING: Removing unreachable block (ram,0x00018064c192)
// WARNING: Removing unreachable block (ram,0x00018064c1a6)
// WARNING: Removing unreachable block (ram,0x00018064c1ab)
// WARNING: Removing unreachable block (ram,0x00018064c1b3)
// WARNING: Removing unreachable block (ram,0x00018064c1d6)
// WARNING: Removing unreachable block (ram,0x00018064c1e1)
// WARNING: Removing unreachable block (ram,0x00018064c1f1)
// WARNING: Removing unreachable block (ram,0x00018064c1fb)
// WARNING: Removing unreachable block (ram,0x00018064aeb0)
// WARNING: Removing unreachable block (ram,0x00018064aee9)
// WARNING: Removing unreachable block (ram,0x00018064af00)
// WARNING: Removing unreachable block (ram,0x00018064af10)
// WARNING: Removing unreachable block (ram,0x00018064af17)
// WARNING: Removing unreachable block (ram,0x00018064af1f)
// WARNING: Removing unreachable block (ram,0x00018064af40)
// WARNING: Removing unreachable block (ram,0x00018064af6a)
// WARNING: Removing unreachable block (ram,0x00018064af79)
// WARNING: Removing unreachable block (ram,0x00018064af80)
// WARNING: Removing unreachable block (ram,0x00018064af8a)
// WARNING: Removing unreachable block (ram,0x00018064af8e)
// WARNING: Removing unreachable block (ram,0x00018064af9a)
// WARNING: Removing unreachable block (ram,0x00018064afa2)
// WARNING: Removing unreachable block (ram,0x00018064afa7)
// WARNING: Removing unreachable block (ram,0x00018064afad)
// WARNING: Removing unreachable block (ram,0x00018064afb2)
// WARNING: Removing unreachable block (ram,0x00018064afc8)
// WARNING: Removing unreachable block (ram,0x00018064afcd)
// WARNING: Removing unreachable block (ram,0x00018064afd8)
// WARNING: Removing unreachable block (ram,0x00018064afe8)
// WARNING: Removing unreachable block (ram,0x00018064afdd)
// WARNING: Removing unreachable block (ram,0x00018064aff4)
// WARNING: Removing unreachable block (ram,0x00018064b008)
// WARNING: Removing unreachable block (ram,0x00018064b01c)
// WARNING: Removing unreachable block (ram,0x00018064b036)
// WARNING: Removing unreachable block (ram,0x00018064b079)
// WARNING: Removing unreachable block (ram,0x00018064b0a4)
// WARNING: Removing unreachable block (ram,0x00018064b0aa)
// WARNING: Removing unreachable block (ram,0x00018064b0c8)
// WARNING: Removing unreachable block (ram,0x00018064b0db)
// WARNING: Removing unreachable block (ram,0x00018064b086)
// WARNING: Removing unreachable block (ram,0x00018064b05d)
// WARNING: Removing unreachable block (ram,0x00018064b0f2)
// WARNING: Removing unreachable block (ram,0x00018064b021)
// WARNING: Removing unreachable block (ram,0x00018064b0f7)
// WARNING: Removing unreachable block (ram,0x00018064b000)
// WARNING: Removing unreachable block (ram,0x00018064c0c4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * FUN_18064e790(uint *param_1,char param_2,uint64_t *param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  bool bVar16;
  
  if (param_2 == '\0') {
    if (*(int *)(((uint64_t)param_1 & 0xffffffffffc00000) + 0x68) != 1) {
      puVar6 = *(uint **)(param_1 + 10);
      do {
        uVar11 = (uint64_t)puVar6 & 3;
        if (((uint64_t)puVar6 & 3) == 0) {
          uVar13 = (uint64_t)puVar6 & 0xfffffffffffffffd | 1;
        }
        else {
          *param_3 = (uint64_t)puVar6 & 0xfffffffffffffffc;
          uVar13 = (uint64_t)((uint)puVar6 & 3) | (uint64_t)param_3;
        }
        LOCK();
        puVar7 = *(uint **)(param_1 + 10);
        bVar16 = puVar6 == puVar7;
        if (bVar16) {
          *(uint64_t *)(param_1 + 10) = uVar13;
          puVar7 = puVar6;
        }
        UNLOCK();
        puVar6 = puVar7;
      } while (!bVar16);
      if (uVar11 == 0) {
        lVar15 = *(int64_t *)(param_1 + 0xc);
        if (lVar15 != 0) {
          uVar11 = *(uint64_t *)(lVar15 + 0xb18);
          do {
            *param_3 = uVar11;
            LOCK();
            uVar13 = *(uint64_t *)(lVar15 + 0xb18);
            bVar16 = uVar11 == uVar13;
            if (bVar16) {
              *(uint64_t *)(lVar15 + 0xb18) = (uint64_t)param_3;
              uVar13 = uVar11;
            }
            UNLOCK();
            uVar11 = uVar13;
          } while (!bVar16);
        }
        puVar6 = *(uint **)(param_1 + 10);
        do {
          LOCK();
          puVar7 = *(uint **)(param_1 + 10);
          bVar16 = puVar6 == puVar7;
          if (bVar16) {
            *(uint64_t *)(param_1 + 10) = (uint64_t)puVar6 & 0xfffffffffffffffe | 2;
            puVar7 = puVar6;
          }
          UNLOCK();
          puVar6 = puVar7;
        } while (!bVar16);
      }
      return puVar7;
    }
    FUN_18064f980();
    plVar3 = *(int64_t **)
              (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x10);
    plVar8 = (int64_t *)(((uint64_t)param_1 & 0xffffffffffc00000) + 0x70);
    LOCK();
    puVar6 = (uint *)*plVar8;
    bVar16 = puVar6 == (uint *)0x0;
    if (bVar16) {
      *plVar8 = plVar3[0x164];
      puVar6 = (uint *)0x0;
    }
    UNLOCK();
    if (!bVar16) {
      return puVar6;
    }
    *param_3 = *(uint64_t *)(param_1 + 4);
    param_1[6] = param_1[6] - 1;
    *(byte *)((int64_t)param_1 + 0xf) = *(byte *)((int64_t)param_1 + 0xf) & 0xfe;
    *(uint64_t **)(param_1 + 4) = param_3;
    lVar15 = *plVar3;
  }
  else {
    puVar7 = *(uint **)(param_1 + 8);
    *param_3 = (uint64_t)puVar7;
    puVar6 = param_1 + 6;
    *puVar6 = *puVar6 - 1;
    *(uint64_t **)(param_1 + 8) = param_3;
    if (*puVar6 != 0) {
      if ((*(byte *)((int64_t)param_1 + 0xe) & 1) == 0) {
        return puVar7;
      }
      lVar15 = *(int64_t *)(param_1 + 0xc);
      *(byte *)((int64_t)param_1 + 0xe) = *(byte *)((int64_t)param_1 + 0xe) & 0xfe;
      bVar5 = func_0x00018064ceb0(param_1[7]);
      *(byte *)((int64_t)param_1 + 0xe) = *(byte *)((int64_t)param_1 + 0xe) | 1;
      puVar9 = (uint64_t *)(lVar15 + (uint64_t)bVar5 * 0x18 + 0x410);
      uVar2 = *(uint64_t *)(param_1 + 0xc);
      if (*(int64_t *)(param_1 + 0x10) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x38) = *(uint64_t *)(param_1 + 0xe);
      }
      if (*(int64_t *)(param_1 + 0xe) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0xe) + 0x40) = *(uint64_t *)(param_1 + 0x10);
      }
      if (param_1 == *(uint **)(lVar15 + 0xb08)) {
        *(uint64_t *)(lVar15 + 0xb08) = *(uint64_t *)(param_1 + 0x10);
      }
      if (param_1 == *(uint **)(lVar15 + 0xb00)) {
        *(uint64_t *)(lVar15 + 0xb00) = *(uint64_t *)(param_1 + 0xe);
        FUN_18064cf20(uVar2);
      }
      *(uint64_t *)(param_1 + 0x10) = puVar9[1];
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      if (puVar9[1] == 0) {
        *puVar9 = param_1;
        puVar9[1] = param_1;
        FUN_18064cf20(uVar2,puVar9);
      }
      else {
        *(uint **)(puVar9[1] + 0x38) = param_1;
        puVar9[1] = param_1;
      }
      bVar5 = *(byte *)((int64_t)param_1 + 0xe) & 0xfe;
      *(byte *)((int64_t)param_1 + 0xe) = puVar9[2] == 0x4010 | bVar5;
      return (uint *)(uint64_t)bVar5;
    }
    *(byte *)((int64_t)param_1 + 0xe) = *(byte *)((int64_t)param_1 + 0xe) & 0xfd;
    if ((*(byte *)((int64_t)param_1 + 0xe) & 1) == 0) {
      bVar5 = func_0x00018064ceb0(param_1[7]);
    }
    else {
      bVar5 = 0x4a;
    }
    lVar15 = *(int64_t *)(param_1 + 0xc) + (uint64_t)bVar5 * 0x18;
    puVar9 = (uint64_t *)(lVar15 + 0x410);
    if ((((param_1[7] < 0x4001) && ((*(byte *)((int64_t)param_1 + 0xe) & 1) == 0)) &&
        (*(uint **)(lVar15 + 0x418) == param_1)) && ((uint *)*puVar9 == param_1)) {
      *(byte *)((int64_t)param_1 + 0xf) = *(byte *)((int64_t)param_1 + 0xf) & 1;
      *(byte *)((int64_t)param_1 + 0xf) = *(byte *)((int64_t)param_1 + 0xf) | 0x12;
      lVar15 = *(int64_t *)(param_1 + 0xc);
      lVar10 = (int64_t)puVar9 + (-0x410 - lVar15);
      uVar11 = lVar10 / 0x18;
      puVar6 = (uint *)-(lVar10 >> 0x3f);
      if (uVar11 < *(uint64_t *)(lVar15 + 0xbd0)) {
        *(uint64_t *)(lVar15 + 0xbd0) = uVar11;
      }
      if (uVar11 <= *(uint64_t *)(lVar15 + 0xbd8)) {
        return puVar6;
      }
      *(uint64_t *)(lVar15 + 0xbd8) = uVar11;
      return puVar6;
    }
    *(byte *)((int64_t)param_1 + 0xe) = *(byte *)((int64_t)param_1 + 0xe) & 0xfd;
    puVar6 = (uint *)(uint64_t)param_1[7];
    if ((uint *)0x3ffffff < puVar6) {
      puVar6 = (uint *)((uint64_t)*param_1 << 0x10);
    }
    if ((uint *)0x4000 < puVar6) {
      lVar15 = **(int64_t **)(param_1 + 0xc);
      lVar10 = -(int64_t)puVar6;
      if (puVar6 < (uint *)0x200001) {
        plVar8 = (int64_t *)(lVar15 + 0x538);
      }
      else {
        plVar8 = (int64_t *)(lVar15 + 0x518);
      }
      goto SUB_180646ff0;
    }
    lVar15 = **(int64_t **)(param_1 + 0xc);
    FUN_18064d090(puVar9,param_1,0);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  lVar10 = lVar15 + 0x20;
  uVar11 = (uint64_t)param_1 & 0xffffffffffc00000;
  FUN_18064c220(param_1,lVar10);
  puVar6 = *(uint **)(uVar11 + 0x48);
  if (puVar6 != (uint *)0x0) {
    if (puVar6 == *(uint **)(uVar11 + 0x38)) {
      puVar6 = (uint *)FUN_18064c570(uVar11,lVar10);
    }
    return puVar6;
  }
  lVar1 = *(int64_t *)(uVar11 + 0x78);
  for (puVar6 = (uint *)(uVar11 + 0x80); puVar6 < (uint *)(uVar11 + 0x80 + lVar1 * 0x50);
      puVar6 = puVar6 + (uint64_t)*puVar6 * 0x14) {
    if ((puVar6[7] == 0) && (*(int *)(uVar11 + 0x68) != 1)) {
      uVar13 = (uint64_t)*puVar6;
      if (1 < uVar13) {
        uVar12 = uVar13 - 1;
        if (uVar12 == 0) {
          uVar14 = 0x40;
        }
        else {
          lVar4 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          uVar14 = 0x3f - (uint64_t)(0x3f - (int)lVar4);
          if (uVar14 < 3) goto LAB_18064bfea;
        }
        uVar13 = ((uint64_t)((uint)(uVar12 >> ((char)uVar14 - 2U & 0x3f)) & 3) | uVar14 * 4) - 4;
      }
LAB_18064bfea:
      puVar9 = (uint64_t *)(lVar10 + uVar13 * 0x18);
      if (*(int64_t *)(puVar6 + 0x10) != 0) {
        *(uint64_t *)(*(int64_t *)(puVar6 + 0x10) + 0x38) = *(uint64_t *)(puVar6 + 0xe);
      }
      if (puVar6 == (uint *)*puVar9) {
        *puVar9 = *(uint64_t *)(puVar6 + 0xe);
      }
      if (*(int64_t *)(puVar6 + 0xe) != 0) {
        *(uint64_t *)(*(int64_t *)(puVar6 + 0xe) + 0x40) = *(uint64_t *)(puVar6 + 0x10);
      }
      if (puVar6 == (uint *)puVar9[1]) {
        puVar9[1] = *(uint64_t *)(puVar6 + 0x10);
      }
      puVar6[0x10] = 0;
      puVar6[0x11] = 0;
      puVar6[0xe] = 0;
      puVar6[0xf] = 0;
      puVar6[7] = 1;
    }
  }
  lVar10 = *(int64_t *)(uVar11 + 0x60) * -0x10000;
  plVar8 = (int64_t *)(*(int64_t *)(lVar15 + 0x3b8) + 0xa0);
SUB_180646ff0:
  if (lVar10 != 0) {
    if (((int64_t *)0x180c8ed7f < plVar8) && (plVar8 < &system_ptr_efc0)) {
      LOCK();
      plVar3 = plVar8 + 3;
      lVar15 = *plVar3;
      *plVar3 = *plVar3 + lVar10;
      UNLOCK();
      puVar6 = (uint *)plVar8[2];
      do {
        puVar7 = puVar6;
        if (lVar15 + lVar10 <= (int64_t)puVar6) break;
        LOCK();
        puVar7 = (uint *)plVar8[2];
        bVar16 = puVar6 == puVar7;
        if (bVar16) {
          plVar8[2] = lVar15 + lVar10;
          puVar7 = puVar6;
        }
        UNLOCK();
        puVar6 = puVar7;
      } while (!bVar16);
      if (lVar10 < 1) {
        plVar8 = plVar8 + 1;
        lVar10 = -lVar10;
      }
      LOCK();
      *plVar8 = *plVar8 + lVar10;
      UNLOCK();
      return puVar7;
    }
    plVar8[3] = plVar8[3] + lVar10;
    puVar6 = (uint *)plVar8[3];
    if (plVar8[2] < (int64_t)puVar6) {
      plVar8[2] = (int64_t)puVar6;
    }
    if (0 < lVar10) {
      *plVar8 = *plVar8 + lVar10;
      return puVar6;
    }
    plVar8[1] = plVar8[1] - lVar10;
  }
  return puVar6;
}





// 函数: void CoreEngineMemoryPoolCleaner(uint64_t *param_1)
void CoreEngineMemoryPoolCleaner(uint64_t *param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  uVar3 = (uint64_t)param_1 & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((int64_t)param_1 - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (uint64_t)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *param_1 = *(uint64_t *)(lVar2 + 0x20);
      *(uint64_t **)(lVar2 + 0x20) = param_1;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList),
                          param_1,uVar3,0xfffffffffffffffe);
    }
  }
  return;
}



uint64_t CoreEngineSystemCleanup(uint64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint *puVar3;
  
  uVar1 = param_1 & 0xffffffffffc00000;
  if (uVar1 == 0) {
    return 0;
  }
  lVar2 = uVar1 + 0x80 + (param_1 - uVar1 >> 0x10) * 0x50;
  puVar3 = (uint *)(lVar2 - (uint64_t)*(uint *)(lVar2 + 4));
  if ((*(byte *)((int64_t)puVar3 + 0xe) & 2) != 0) {
    lVar2 = func_0x00018064e810(uVar1,puVar3,param_1);
    uVar1 = (uint64_t)puVar3[7];
    if (0x3ffffff < uVar1) {
      uVar1 = (uint64_t)*puVar3 << 0x10;
    }
    return (uVar1 - param_1) + lVar2;
  }
  uVar1 = (uint64_t)puVar3[7];
  if (0x3ffffff < uVar1) {
    uVar1 = (uint64_t)*puVar3 << 0x10;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00018064e5ea)
// WARNING: Removing unreachable block (ram,0x00018064e5ef)
// WARNING: Removing unreachable block (ram,0x00018064e61e)
// WARNING: Removing unreachable block (ram,0x00018064e624)
// WARNING: Removing unreachable block (ram,0x00018064e645)

uint64_t * FUN_18064ea20(int64_t param_1,uint64_t *param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  
  if (param_2 == (uint64_t *)0x0) {
    if (param_3 < 0x401) {
      lVar1 = *(int64_t *)(param_1 + 8 + (param_3 + 7 & 0xfffffffffffffff8));
      puVar2 = *(uint64_t **)(lVar1 + 0x10);
      if (puVar2 != (uint64_t *)0x0) {
        *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
        *(uint64_t *)(lVar1 + 0x10) = *puVar2;
        return puVar2;
      }
    }
    puVar2 = (uint64_t *)FUN_18064ddd0(param_1,param_3);
    return puVar2;
  }
  uVar3 = CoreEngineSystemCleanup(param_2);
  if ((param_3 <= uVar3) && (uVar3 >> 1 <= param_3)) {
    return param_2;
  }
  if (param_3 < 0x401) {
    lVar1 = *(int64_t *)(param_1 + 8 + (param_3 + 7 & 0xfffffffffffffff8));
    puVar2 = *(uint64_t **)(lVar1 + 0x10);
    if (puVar2 != (uint64_t *)0x0) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
      *(uint64_t *)(lVar1 + 0x10) = *puVar2;
      goto LAB_18064eaba;
    }
  }
  puVar2 = (uint64_t *)FUN_18064ddd0(param_1,param_3);
LAB_18064eaba:
  if (puVar2 == (uint64_t *)0x0) {
    return (uint64_t *)0x0;
  }
  if (uVar3 < param_3) {
    param_3 = uVar3;
  }
  puVar4 = param_2;
  if (system_ptr_f000 == '\0') {
                    // WARNING: Subroutine does not return
    memcpy(puVar2,param_2,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(int8_t *)puVar2 = *(int8_t *)puVar4;
    puVar4 = (uint64_t *)((int64_t)puVar4 + 1);
    puVar2 = (uint64_t *)((int64_t)puVar2 + 1);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_2);
}



uint64_t FUN_18064ea7c(void)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t unaff_RBX;
  int8_t *unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  
  if (unaff_RBX < 0x401) {
    lVar1 = *(int64_t *)(unaff_RSI + 8 + (unaff_RBX + 7 & 0xfffffffffffffff8));
    puVar2 = *(uint64_t **)(lVar1 + 0x10);
    if (puVar2 != (uint64_t *)0x0) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
      *(uint64_t *)(lVar1 + 0x10) = *puVar2;
      goto LAB_18064eaba;
    }
  }
  puVar2 = (uint64_t *)FUN_18064ddd0();
LAB_18064eaba:
  if (puVar2 == (uint64_t *)0x0) {
    return 0;
  }
  if (unaff_RDI < unaff_RBX) {
    unaff_RBX = unaff_RDI;
  }
  if (system_ptr_f000 == '\0') {
                    // WARNING: Subroutine does not return
    memcpy(puVar2);
  }
  for (; unaff_RBX != 0; unaff_RBX = unaff_RBX - 1) {
    *(int8_t *)puVar2 = *unaff_RBP;
    unaff_RBP = unaff_RBP + 1;
    puVar2 = (uint64_t *)((int64_t)puVar2 + 1);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






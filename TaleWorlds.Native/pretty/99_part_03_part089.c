#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part089.c - 14 个函数

// 函数: void FUN_18024c560(int64_t param_1,int64_t param_2,int32_t param_3,int32_t param_4,
void FUN_18024c560(int64_t param_1,int64_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5,uint64_t *param_6,byte param_7,float *param_8,
                  int32_t param_9,float param_10)

{
  int64_t lVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int32_t uVar16;
  uint64_t uVar17;
  int8_t *puVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint uVar21;
  float fVar22;
  int32_t uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int32_t uVar32;
  
  lVar20 = param_2;
  if ((*(byte *)(param_2 + 0xfd) & 0x20) == 0) {
    lVar20 = func_0x000180085de0(*(uint64_t *)(param_2 + 0x1b0));
  }
  plVar6 = *(int64_t **)(param_2 + 0x118);
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  uVar32 = 0;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  lVar20 = *(int64_t *)(lVar20 + 0x2e0);
  lVar7 = *(int64_t *)(param_2 + 0x268);
  fVar3 = *(float *)((int64_t)plVar6 + 0x124);
  fVar31 = *(float *)(plVar6 + 0x25) * 10.0;
  fVar22 = (float)logf(1.0 - *(float *)(lVar7 + 0x68));
  uVar23 = powf(1.0 - *(float *)(lVar7 + 0x54),fVar3 * 10.0);
  fVar22 = (float)powf(0x40000000,fVar22 * 1.442695 * fVar3 * 10.0);
  fVar27 = (1.0 - fVar22) * fVar3;
  fVar22 = *(float *)(lVar7 + 0x5c);
  fVar30 = ((*(float *)(plVar6 + 0xe) - *(float *)(plVar6 + 0x10)) * fVar3 * fVar22 -
           *(float *)(plVar6 + 0x25) * *(float *)(lVar7 + 0x58) * *(float *)(plVar6 + 0x25)) -
           *(float *)(plVar6 + 0x10) * fVar27;
  fVar29 = (*(float *)((int64_t)plVar6 + 0x6c) - *(float *)((int64_t)plVar6 + 0x7c)) * fVar3 *
           fVar22 - *(float *)((int64_t)plVar6 + 0x7c) * fVar27;
  fVar28 = (*(float *)(plVar6 + 0xd) - *(float *)(plVar6 + 0xf)) * fVar3 * fVar22 -
           *(float *)(plVar6 + 0xf) * fVar27;
  fVar3 = *(float *)(plVar6 + 0x12);
  fVar22 = *(float *)((int64_t)plVar6 + 0x94);
  fVar27 = *(float *)(plVar6 + 0x13);
  fVar8 = *(float *)(plVar6 + 0x14);
  fVar9 = *(float *)((int64_t)plVar6 + 0xa4);
  fVar10 = *(float *)(plVar6 + 0x15);
  fVar11 = *(float *)(plVar6 + 0x16);
  fVar12 = *(float *)((int64_t)plVar6 + 0xb4);
  fVar13 = *(float *)(plVar6 + 0x17);
  fVar14 = *(float *)((int64_t)plVar6 + 0xbc);
  fVar15 = *(float *)(plVar6 + 0x12);
  fVar26 = *(float *)((int64_t)plVar6 + 0x94) * 0.0;
  fVar24 = *(float *)(plVar6 + 0x13) * 0.0;
  puVar18 = (int8_t *)FUN_1800db0a0(fVar24,fVar26,fVar15,*(float *)(plVar6 + 0x13),uVar32);
  fVar25 = (float)powf(1.0 - *(float *)(lVar7 + 0x44),fVar31);
  *(float *)(puVar18 + 0x48) = 1.0 - fVar25;
  fVar25 = (float)powf(1.0 - *(float *)(lVar7 + 0x4c),fVar31);
  *(float *)(puVar18 + 0x44) = 1.0 - fVar25;
  fVar25 = (float)powf(1.0 - *(float *)(lVar7 + 0x48),fVar31);
  *(float *)(puVar18 + 0x4c) = 1.0 - fVar25;
  if (*(int64_t *)(lVar20 + 0x60) == 0) {
    *(int32_t *)(puVar18 + 0xe8) = 0;
  }
  else {
    fVar25 = (float)powf(1.0 - *(float *)(lVar7 + 0x50),fVar31);
    *(float *)(puVar18 + 0xe8) = 1.0 - fVar25;
  }
  *(float *)(puVar18 + 0x7c) = param_10 * *(float *)(*(int64_t *)(param_2 + 0x268) + 0x10);
  *(int32_t *)(puVar18 + 0x80) = uVar23;
  *(int *)(puVar18 + 0x50) =
       (int)((uint64_t)(int64_t)*(int *)(*(int64_t *)(lVar20 + 0x10) + 0x1c) / 0x18);
  *(int *)(puVar18 + 0xac) =
       (int)((uint64_t)(int64_t)*(int *)(*(int64_t *)(lVar20 + 0x18) + 0x1c) >> 3);
  *(int32_t *)(puVar18 + 0x5c) = *(int32_t *)(lVar20 + 0x70);
  *(int *)(puVar18 + 0x54) = (int)plVar6[0x23];
  *(int32_t *)(puVar18 + 0x58) = *(int32_t *)((int64_t)plVar6 + 0x124);
  *(uint *)(puVar18 + 0x68) = (uint)param_7;
  *(int32_t *)(puVar18 + 100) = *(int32_t *)(lVar20 + 0x74);
  *(int32_t *)(puVar18 + 0xb0) = *(int32_t *)(lVar20 + 0x78);
  *(int32_t *)(puVar18 + 0xb4) = *(int32_t *)(lVar20 + 0x80);
  *(int32_t *)(puVar18 + 0xb8) = *(int32_t *)(lVar20 + 0x84);
  *(int32_t *)(puVar18 + 0xbc) = *(int32_t *)(lVar20 + 0x88);
  *(int32_t *)(puVar18 + 0xc4) = *(int32_t *)(lVar20 + 0x90);
  *(int32_t *)(puVar18 + 200) = *(int32_t *)(lVar20 + 0x94);
  *(int32_t *)(puVar18 + 0xcc) = *(int32_t *)(lVar20 + 0x98);
  *(uint *)(puVar18 + 0x70) = *(uint *)(lVar20 + 0x7c) / 3;
  *(int *)(puVar18 + 0xd0) = (int)plVar6[0x22];
  fVar25 = *(float *)(lVar7 + 0x6c);
  fVar31 = param_8[2];
  fVar4 = param_8[1];
  *(float *)(puVar18 + 0xd4) = fVar25 * *param_8;
  *(float *)(puVar18 + 0xd8) = fVar25 * fVar4;
  *(float *)(puVar18 + 0xdc) = fVar25 * fVar31;
  *(int32_t *)(puVar18 + 0xe0) = 0x7f7fffff;
  *(int32_t *)(puVar18 + 0xe0) = param_9;
  *(int32_t *)(puVar18 + 0xe4) = *(int32_t *)(lVar20 + 0x68);
  *(float *)(puVar18 + 0x84) = fVar28 * fVar3 + fVar29 * fVar22 + fVar30 * fVar27;
  *(float *)(puVar18 + 0x88) = fVar28 * fVar8 + fVar29 * fVar9 + fVar30 * fVar10;
  *(float *)(puVar18 + 0x8c) = fVar28 * fVar11 + fVar29 * fVar12 + fVar30 * fVar13;
  *(float *)(puVar18 + 0x90) = fVar28 * fVar14 + fVar29 * fVar14 + fVar30 * fVar14;
  *(float *)(puVar18 + 0x94) = fVar15 * 0.0 + fVar26 + fVar24;
  *(float *)(puVar18 + 0x98) = fVar8 * 0.0 + fVar9 * 0.0 + fVar10 * 0.0;
  *(float *)(puVar18 + 0x9c) = fVar11 * 0.0 + fVar12 * 0.0 + fVar13 * 0.0;
  *(float *)(puVar18 + 0xa0) = fVar14 * 0.0 + fVar14 * 0.0 + fVar14 * 0.0;
  lVar7 = system_system_data_ui;
  lVar20 = plVar6[4];
  if ((int)lVar20 == -1) {
    *(int32_t *)(puVar18 + 0x74) = 0;
  }
  else {
    lVar1 = system_system_data_ui + 0x2b8;
    AcquireSRWLockShared(lVar1);
    lVar20 = (int64_t)(int)lVar20 * 0x30 + *(int64_t *)(lVar7 + 0x180);
    ReleaseSRWLockShared(lVar1);
    *(int *)(puVar18 + 0x74) =
         (int)((*(int64_t *)(lVar20 + 0x10) - *(int64_t *)(lVar20 + 8)) / 0x128);
    *(int32_t *)(puVar18 + 0x78) = *(int32_t *)(lVar20 + 0x28);
  }
  *(int *)(puVar18 + 0xf4) = (int)plVar6[3];
  *(int32_t *)(puVar18 + 0xf8) = *(int32_t *)((int64_t)plVar6 + 0x24);
  if (*(char *)((int64_t)plVar6 + 0x13c) == '\0') {
    *puVar18 = 0;
  }
  else {
    *(int32_t *)(puVar18 + 0x6c) = param_3;
    *(int32_t *)(puVar18 + 0xa4) = param_4;
    *(int32_t *)(puVar18 + 0xa8) = param_5;
    *puVar18 = 1;
  }
  uVar17 = param_6[1];
  *(uint64_t *)(puVar18 + 4) = *param_6;
  *(uint64_t *)(puVar18 + 0xc) = uVar17;
  uVar17 = param_6[3];
  *(uint64_t *)(puVar18 + 0x14) = param_6[2];
  *(uint64_t *)(puVar18 + 0x1c) = uVar17;
  uVar32 = *(int32_t *)((int64_t)param_6 + 0x24);
  uVar23 = *(int32_t *)(param_6 + 5);
  uVar16 = *(int32_t *)((int64_t)param_6 + 0x2c);
  *(int32_t *)(puVar18 + 0x24) = *(int32_t *)(param_6 + 4);
  *(int32_t *)(puVar18 + 0x28) = uVar32;
  *(int32_t *)(puVar18 + 0x2c) = uVar23;
  *(int32_t *)(puVar18 + 0x30) = uVar16;
  uVar32 = *(int32_t *)((int64_t)param_6 + 0x34);
  uVar23 = *(int32_t *)(param_6 + 7);
  uVar16 = *(int32_t *)((int64_t)param_6 + 0x3c);
  *(int32_t *)(puVar18 + 0x34) = *(int32_t *)(param_6 + 6);
  *(int32_t *)(puVar18 + 0x38) = uVar32;
  *(int32_t *)(puVar18 + 0x3c) = uVar23;
  *(int32_t *)(puVar18 + 0x40) = uVar16;
  *(int8_t *)((int64_t)plVar6 + 0x13d) = 1;
  LOCK();
  puVar2 = (uint *)(param_1 + 0x3260);
  uVar5 = *puVar2;
  *puVar2 = *puVar2 + 1;
  UNLOCK();
  uVar21 = uVar5 >> 0xb;
  FUN_18024cd70(param_1 + 0x3260,(uint64_t)uVar21);
  lVar20 = *(int64_t *)(param_1 + 0x3268 + (uint64_t)uVar21 * 8);
  uVar19 = (uint64_t)(uVar5 + uVar21 * -0x800);
  *(int *)(lVar20 + uVar19 * 0x10) = (int)plVar6[0x27];
  *(int8_t **)(lVar20 + 8 + uVar19 * 0x10) = puVar18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024cb50(int64_t param_1,int64_t param_2)
void FUN_18024cb50(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t lVar9;
  uint uVar10;
  int64_t lVar11;
  char *pcVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int iVar16;
  uint64_t uVar17;
  uint uVar18;
  int64_t *plVar19;
  bool bVar20;
  
  puVar2 = (uint *)(param_2 + 0x3260);
  if (*puVar2 != 0) {
    uVar8 = *puVar2;
    uVar17 = 0;
    if (uVar8 == 0) {
      uVar18 = 0xffffffff;
    }
    else {
      LOCK();
      puVar3 = (uint *)(param_1 + 0x3260);
      uVar18 = *puVar3;
      *puVar3 = *puVar3 + uVar8;
      UNLOCK();
      uVar15 = (uint64_t)(uVar18 >> 0xb);
      uVar13 = (uint64_t)((uVar8 - 1) + uVar18 >> 0xb);
      if (uVar15 <= uVar13) {
        pcVar12 = (char *)(param_1 + 0x3368 + uVar15);
        lVar14 = (uVar13 - uVar15) + 1;
        plVar19 = (int64_t *)(param_1 + 0x3268 + uVar15 * 8);
        do {
          iVar16 = (int)uVar15;
          if (*plVar19 == 0) {
            lVar9 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x8000,0x25);
            plVar6 = (int64_t *)(param_1 + 0x3268 + (int64_t)iVar16 * 8);
            LOCK();
            bVar20 = *plVar6 == 0;
            if (bVar20) {
              *plVar6 = lVar9;
            }
            UNLOCK();
            if (bVar20) {
              uVar8 = iVar16 * 0x800;
              iVar1 = uVar8 + 0x800;
              for (; (int)uVar8 < iVar1; uVar8 = uVar8 + 1) {
                lVar11 = (int64_t)(int)(uVar8 + (uVar8 >> 0xb) * -0x800);
                lVar9 = *(int64_t *)(param_1 + 0x3268 + (uint64_t)(uVar8 >> 0xb) * 8);
                *(int32_t *)(lVar9 + lVar11 * 0x10) = 0;
                *(uint64_t *)(lVar9 + 8 + lVar11 * 0x10) = 0;
              }
              LOCK();
              *(int8_t *)((int64_t)iVar16 + 0x3368 + param_1) = 0;
              UNLOCK();
            }
            else {
              if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
                CoreEngine_MemoryPoolManager();
              }
              do {
              } while (*pcVar12 != '\0');
            }
          }
          else {
            do {
            } while (*pcVar12 != '\0');
          }
          uVar15 = (uint64_t)(iVar16 + 1);
          plVar19 = plVar19 + 1;
          pcVar12 = pcVar12 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
    }
    uVar8 = *puVar2;
    uVar10 = uVar18 >> 0xb;
    if ((uVar10 == uVar8 + uVar18 >> 0xb) && (uVar8 < 0x800)) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      memcpy(*(int64_t *)(param_1 + 0x3268 + (uint64_t)uVar10 * 8) +
             (uint64_t)(uVar18 + uVar10 * -0x800) * 0x10,*(uint64_t *)(param_2 + 0x3268),
             (int64_t)(int)uVar8 << 4);
      return;
    }
    if (0 < (int)uVar8) {
      do {
        iVar16 = (int)uVar17;
        uVar15 = uVar17 >> 0xb;
        uVar17 = (uint64_t)(iVar16 + 1U);
        puVar4 = (uint64_t *)
                 (*(int64_t *)(param_2 + 0x3268 + uVar15 * 8) +
                 (uint64_t)(uint)(iVar16 + (int)uVar15 * -0x800) * 0x10);
        uVar7 = puVar4[1];
        uVar10 = iVar16 + uVar18 >> 0xb;
        puVar5 = (uint64_t *)
                 (*(int64_t *)(param_1 + 0x3268 + (uint64_t)uVar10 * 8) +
                 (uint64_t)(iVar16 + uVar18 + uVar10 * -0x800) * 0x10);
        *puVar5 = *puVar4;
        puVar5[1] = uVar7;
      } while ((int)(iVar16 + 1U) < (int)uVar8);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024cb72(int param_1)
void FUN_18024cb72(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  char *pcVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t uVar16;
  uint uVar17;
  uint *unaff_R13;
  int64_t *plVar18;
  int64_t unaff_R15;
  bool bVar19;
  
  uVar16 = 0;
  if (param_1 == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    LOCK();
    puVar2 = (uint *)(unaff_R15 + 0x3260);
    uVar17 = *puVar2;
    *puVar2 = *puVar2 + param_1;
    UNLOCK();
    uVar14 = (uint64_t)(uVar17 >> 0xb);
    uVar12 = (uint64_t)(param_1 + -1 + uVar17 >> 0xb);
    if (uVar14 <= uVar12) {
      pcVar11 = (char *)(unaff_R15 + 0x3368 + uVar14);
      lVar13 = (uVar12 - uVar14) + 1;
      plVar18 = (int64_t *)(unaff_R15 + 0x3268 + uVar14 * 8);
      do {
        iVar15 = (int)uVar14;
        if (*plVar18 == 0) {
          lVar8 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x8000,0x25);
          plVar5 = (int64_t *)(unaff_R15 + 0x3268 + (int64_t)iVar15 * 8);
          LOCK();
          bVar19 = *plVar5 == 0;
          if (bVar19) {
            *plVar5 = lVar8;
          }
          UNLOCK();
          if (bVar19) {
            uVar7 = iVar15 * 0x800;
            iVar1 = uVar7 + 0x800;
            for (; (int)uVar7 < iVar1; uVar7 = uVar7 + 1) {
              lVar10 = (int64_t)(int)(uVar7 + (uVar7 >> 0xb) * -0x800);
              lVar8 = *(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)(uVar7 >> 0xb) * 8);
              *(int32_t *)(lVar8 + lVar10 * 0x10) = 0;
              *(uint64_t *)(lVar8 + 8 + lVar10 * 0x10) = 0;
            }
            LOCK();
            *(int8_t *)((int64_t)iVar15 + 0x3368 + unaff_R15) = 0;
            UNLOCK();
          }
          else {
            if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager();
            }
            do {
            } while (*pcVar11 != '\0');
          }
        }
        else {
          do {
          } while (*pcVar11 != '\0');
        }
        uVar14 = (uint64_t)(iVar15 + 1);
        plVar18 = plVar18 + 1;
        pcVar11 = pcVar11 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  uVar7 = *unaff_R13;
  uVar9 = uVar17 >> 0xb;
  if ((uVar9 == uVar7 + uVar17 >> 0xb) && (uVar7 < 0x800)) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memcpy(*(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)uVar9 * 8) +
           (uint64_t)(uVar17 + uVar9 * -0x800) * 0x10,*(uint64_t *)(unaff_R13 + 2),
           (int64_t)(int)uVar7 << 4);
    return;
  }
  if (0 < (int)uVar7) {
    do {
      iVar15 = (int)uVar16;
      uVar14 = uVar16 >> 0xb;
      uVar16 = (uint64_t)(iVar15 + 1U);
      puVar3 = (uint64_t *)
               (*(int64_t *)(unaff_R13 + uVar14 * 2 + 2) +
               (uint64_t)(uint)(iVar15 + (int)uVar14 * -0x800) * 0x10);
      uVar6 = puVar3[1];
      uVar9 = iVar15 + uVar17 >> 0xb;
      puVar4 = (uint64_t *)
               (*(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)uVar9 * 8) +
               (uint64_t)(iVar15 + uVar17 + uVar9 * -0x800) * 0x10);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
    } while ((int)(iVar15 + 1U) < (int)uVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024cb8b(int param_1)
void FUN_18024cb8b(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t lVar9;
  uint uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  char *pcVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int iVar16;
  uint64_t unaff_RDI;
  uint *unaff_R13;
  int64_t *plVar17;
  int64_t unaff_R15;
  bool bVar18;
  
  LOCK();
  puVar2 = (uint *)(unaff_R15 + 0x3260);
  uVar6 = *puVar2;
  *puVar2 = *puVar2 + param_1;
  UNLOCK();
  uVar12 = (uint64_t)(uVar6 >> 0xb);
  uVar14 = (uint64_t)(param_1 + -1 + uVar6 >> 0xb);
  if (uVar12 <= uVar14) {
    pcVar13 = (char *)(unaff_R15 + 0x3368 + uVar12);
    lVar15 = (uVar14 - uVar12) + 1;
    plVar17 = (int64_t *)(unaff_R15 + 0x3268 + uVar12 * 8);
    do {
      iVar16 = (int)uVar12;
      if (*plVar17 == 0) {
        lVar9 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x8000,0x25);
        plVar5 = (int64_t *)(unaff_R15 + 0x3268 + (int64_t)iVar16 * 8);
        LOCK();
        bVar18 = *plVar5 == 0;
        if (bVar18) {
          *plVar5 = lVar9;
        }
        UNLOCK();
        if (bVar18) {
          uVar8 = iVar16 * 0x800;
          iVar1 = uVar8 + 0x800;
          for (; (int)uVar8 < iVar1; uVar8 = uVar8 + 1) {
            lVar11 = (int64_t)(int)(uVar8 + (uVar8 >> 0xb) * -0x800);
            lVar9 = *(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)(uVar8 >> 0xb) * 8);
            *(int *)(lVar9 + lVar11 * 0x10) = (int)unaff_RDI;
            *(uint64_t *)(lVar9 + 8 + lVar11 * 0x10) = unaff_RDI;
          }
          LOCK();
          *(char *)((int64_t)iVar16 + 0x3368 + unaff_R15) = (char)unaff_RDI;
          UNLOCK();
        }
        else {
          if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          do {
          } while (*pcVar13 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar13 != '\0');
      }
      uVar12 = (uint64_t)(iVar16 + 1);
      plVar17 = plVar17 + 1;
      pcVar13 = pcVar13 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  uVar8 = *unaff_R13;
  uVar10 = uVar6 >> 0xb;
  if ((uVar10 == uVar8 + uVar6 >> 0xb) && (uVar8 < 0x800)) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memcpy(*(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)uVar10 * 8) +
           (uint64_t)(uVar6 + uVar10 * -0x800) * 0x10,*(uint64_t *)(unaff_R13 + 2),
           (int64_t)(int)uVar8 << 4);
    return;
  }
  if (0 < (int)uVar8) {
    do {
      iVar16 = (int)unaff_RDI;
      uVar12 = unaff_RDI >> 0xb & 0x1fffff;
      unaff_RDI = (uint64_t)(iVar16 + 1U);
      puVar3 = (uint64_t *)
               (*(int64_t *)(unaff_R13 + uVar12 * 2 + 2) +
               (uint64_t)(uint)(iVar16 + (int)uVar12 * -0x800) * 0x10);
      uVar7 = puVar3[1];
      uVar10 = iVar16 + uVar6 >> 0xb;
      puVar4 = (uint64_t *)
               (*(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)uVar10 * 8) +
               (uint64_t)(iVar16 + uVar6 + uVar10 * -0x800) * 0x10);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
    } while ((int)(iVar16 + 1U) < (int)uVar8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024cbbc(void)
void FUN_18024cbbc(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t in_RAX;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  char *pcVar10;
  int64_t unaff_RBP;
  int64_t lVar11;
  uint64_t unaff_RSI;
  int iVar12;
  uint64_t unaff_RDI;
  int iVar13;
  uint64_t unaff_R12;
  uint *unaff_R13;
  int64_t *plVar14;
  int64_t unaff_R15;
  bool bVar15;
  
  pcVar10 = (char *)(unaff_R15 + 0x3368 + unaff_RSI);
  lVar11 = (unaff_RBP - unaff_RSI) + 1;
  plVar14 = (int64_t *)(unaff_R15 + 0x3268 + in_RAX * 8);
  do {
    iVar13 = (int)unaff_RSI;
    if (*plVar14 == 0) {
      lVar6 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x8000,0x25);
      plVar3 = (int64_t *)(unaff_R15 + 0x3268 + (int64_t)iVar13 * 8);
      LOCK();
      bVar15 = *plVar3 == 0;
      if (bVar15) {
        *plVar3 = lVar6;
      }
      UNLOCK();
      if (bVar15) {
        uVar5 = iVar13 * 0x800;
        iVar12 = uVar5 + 0x800;
        for (; (int)uVar5 < iVar12; uVar5 = uVar5 + 1) {
          lVar8 = (int64_t)(int)(uVar5 + (uVar5 >> 0xb) * -0x800);
          lVar6 = *(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)(uVar5 >> 0xb) * 8);
          *(int *)(lVar6 + lVar8 * 0x10) = (int)unaff_RDI;
          *(uint64_t *)(lVar6 + 8 + lVar8 * 0x10) = unaff_RDI;
        }
        LOCK();
        *(char *)((int64_t)iVar13 + 0x3368 + unaff_R15) = (char)unaff_RDI;
        UNLOCK();
      }
      else {
        if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        do {
        } while (*pcVar10 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar10 != '\0');
    }
    unaff_RSI = (uint64_t)(iVar13 + 1);
    plVar14 = plVar14 + 1;
    pcVar10 = pcVar10 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  uVar5 = *unaff_R13;
  iVar13 = (int)unaff_R12;
  uVar9 = unaff_R12 >> 0xb & 0x1fffff;
  uVar7 = (uint)uVar9;
  if ((uVar7 == uVar5 + iVar13 >> 0xb) && (uVar5 < 0x800)) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memcpy(*(int64_t *)(unaff_R15 + 0x3268 + uVar9 * 8) +
           (uint64_t)(iVar13 + uVar7 * -0x800) * 0x10,*(uint64_t *)(unaff_R13 + 2),
           (int64_t)(int)uVar5 << 4);
    return;
  }
  if (0 < (int)uVar5) {
    do {
      iVar12 = (int)unaff_RDI;
      uVar9 = unaff_RDI >> 0xb & 0x1fffff;
      unaff_RDI = (uint64_t)(iVar12 + 1U);
      puVar1 = (uint64_t *)
               (*(int64_t *)(unaff_R13 + uVar9 * 2 + 2) +
               (uint64_t)(uint)(iVar12 + (int)uVar9 * -0x800) * 0x10);
      uVar4 = puVar1[1];
      uVar7 = (uint)(iVar12 + iVar13) >> 0xb;
      puVar2 = (uint64_t *)
               (*(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)uVar7 * 8) +
               (uint64_t)(iVar12 + iVar13 + uVar7 * -0x800) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
    } while ((int)(iVar12 + 1U) < (int)uVar5);
  }
  return;
}






// 函数: void FUN_18024cca4(void)
void FUN_18024cca4(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_EDI;
  uint unaff_R12D;
  uint *unaff_R13;
  int64_t unaff_R15;
  
  uVar3 = *unaff_R13;
  uVar5 = unaff_R12D >> 0xb;
  if ((uVar5 == uVar3 + unaff_R12D >> 0xb) && (uVar3 < 0x800)) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memcpy(*(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)uVar5 * 8) +
           (uint64_t)(unaff_R12D + uVar5 * -0x800) * 0x10,*(uint64_t *)(unaff_R13 + 2),
           (int64_t)(int)uVar3 << 4);
    return;
  }
  if (0 < (int)uVar3) {
    do {
      uVar6 = unaff_EDI >> 0xb;
      uVar7 = unaff_EDI + uVar6 * -0x800;
      uVar5 = unaff_EDI + unaff_R12D;
      unaff_EDI = unaff_EDI + 1;
      puVar1 = (uint64_t *)
               (*(int64_t *)(unaff_R13 + (uint64_t)uVar6 * 2 + 2) + (uint64_t)uVar7 * 0x10);
      uVar4 = puVar1[1];
      uVar6 = uVar5 >> 0xb;
      puVar2 = (uint64_t *)
               (*(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)uVar6 * 8) +
               (uint64_t)(uVar5 + uVar6 * -0x800) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
    } while ((int)unaff_EDI < (int)uVar3);
  }
  return;
}






// 函数: void FUN_18024ccae(void)
void FUN_18024ccae(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_EDI;
  uint unaff_R12D;
  uint *unaff_R13;
  int64_t unaff_R15;
  
  uVar3 = *unaff_R13;
  uVar5 = unaff_R12D >> 0xb;
  if ((uVar5 == uVar3 + unaff_R12D >> 0xb) && (uVar3 < 0x800)) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memcpy(*(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)uVar5 * 8) +
           (uint64_t)(unaff_R12D + uVar5 * -0x800) * 0x10,*(uint64_t *)(unaff_R13 + 2),
           (int64_t)(int)uVar3 << 4);
    return;
  }
  if (0 < (int)uVar3) {
    do {
      uVar6 = unaff_EDI >> 0xb;
      uVar7 = unaff_EDI + uVar6 * -0x800;
      uVar5 = unaff_EDI + unaff_R12D;
      unaff_EDI = unaff_EDI + 1;
      puVar1 = (uint64_t *)
               (*(int64_t *)(unaff_R13 + (uint64_t)uVar6 * 2 + 2) + (uint64_t)uVar7 * 0x10);
      uVar4 = puVar1[1];
      uVar6 = uVar5 >> 0xb;
      puVar2 = (uint64_t *)
               (*(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)uVar6 * 8) +
               (uint64_t)(uVar5 + uVar6 * -0x800) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
    } while ((int)unaff_EDI < (int)uVar3);
  }
  return;
}






// 函数: void FUN_18024cd05(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_18024cd05(uint64_t param_1,uint64_t param_2,int param_3)

{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_EDI;
  int unaff_R12D;
  int64_t unaff_R13;
  int64_t unaff_R15;
  
  if (0 < param_3) {
    do {
      uVar5 = unaff_EDI >> 0xb;
      uVar6 = unaff_EDI + uVar5 * -0x800;
      uVar1 = unaff_EDI + unaff_R12D;
      unaff_EDI = unaff_EDI + 1;
      puVar2 = (uint64_t *)
               (*(int64_t *)(unaff_R13 + 8 + (uint64_t)uVar5 * 8) + (uint64_t)uVar6 * 0x10);
      uVar4 = puVar2[1];
      uVar5 = uVar1 >> 0xb;
      puVar3 = (uint64_t *)
               (*(int64_t *)(unaff_R15 + 0x3268 + (uint64_t)uVar5 * 8) +
               (uint64_t)(uVar1 + uVar5 * -0x800) * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
    } while ((int)unaff_EDI < param_3);
  }
  return;
}






// 函数: void FUN_18024cd5e(void)
void FUN_18024cd5e(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_18024cd70(int64_t param_1,int param_2)

{
  int64_t *plVar1;
  char *pcVar2;
  char cVar3;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  
  lVar5 = (int64_t)param_2;
  if (*(int64_t *)(param_1 + 8 + lVar5 * 8) != 0) {
    do {
      cVar3 = *(char *)(lVar5 + 0x108 + param_1);
    } while (cVar3 != '\0');
    return cVar3;
  }
  lVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x8000,0x25);
  plVar1 = (int64_t *)(param_1 + 8 + lVar5 * 8);
  LOCK();
  bVar6 = *plVar1 == 0;
  if (bVar6) {
    *plVar1 = lVar4;
  }
  UNLOCK();
  if (bVar6) {
    func_0x00018024cff0(param_1,param_2 << 0xb);
    LOCK();
    pcVar2 = (char *)(lVar5 + 0x108 + param_1);
    cVar3 = *pcVar2;
    *pcVar2 = '\0';
    UNLOCK();
    return cVar3;
  }
  if (lVar4 == 0) {
    do {
      cVar3 = *(char *)(lVar5 + 0x108 + param_1);
    } while (cVar3 != '\0');
    return cVar3;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_18024ce20(uint64_t *param_1)
void FUN_18024ce20(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x18) {
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_18024ce80(uint64_t *param_1)
void FUN_18024ce80(uint64_t *param_1)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)*param_1;
  while( true ) {
    if (plVar1 == (int64_t *)param_1[1]) {
      return;
    }
    if (*plVar1 != 0) break;
    plVar1 = plVar1 + 4;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_18024ced0(int64_t *param_1)
void FUN_18024ced0(int64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    *puVar2 = &system_data_buffer_ptr;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}






// 函数: void FUN_18024cf70(uint *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)
void FUN_18024cf70(uint *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)

{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  
  LOCK();
  uVar2 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  uVar5 = uVar2 >> 0xb;
  FUN_1800e8060(param_1,(uint64_t)uVar5);
  uVar3 = *param_2;
  puVar1 = (uint64_t *)
           (*(int64_t *)(param_1 + (uint64_t)uVar5 * 2 + 2) +
           (uint64_t)(uVar2 + uVar5 * -0x800) * 0x18);
  uVar4 = *param_4;
  puVar1[1] = *param_3;
  puVar1[2] = uVar4;
  *puVar1 = uVar3;
  return;
}






// 函数: void FUN_18024d030(int64_t param_1,uint param_2)
void FUN_18024d030(int64_t param_1,uint param_2)

{
  if ((int)param_2 < (int)(param_2 + 0x400)) {
                    // WARNING: Subroutine does not return
    memset(*(int64_t *)(param_1 + 8 + (uint64_t)(param_2 >> 10) * 8) +
           (int64_t)(int)(param_2 + (param_2 >> 10) * -0x400) * 0xc0,0,0xc0);
  }
  return;
}







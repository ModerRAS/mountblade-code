#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part499.c - 2 个函数

// 函数: void FUN_180533230(uint64_t *param_1)
void FUN_180533230(uint64_t *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  *param_1 = &unknown_var_7112_ptr;
  uVar3 = param_1[4];
  lVar9 = 0;
  uVar4 = param_1[5];
  for (uVar10 = uVar4; uVar10 != uVar3; uVar10 = uVar10 + 1) {
    if ((uVar10 & 0x1f) == 0) {
      if (lVar9 != 0) {
        lVar6 = param_1[10];
        LOCK();
        piVar1 = (int *)(lVar9 + 0x130);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -0x80000000;
        UNLOCK();
        if (iVar2 == 0) {
          lVar8 = *(longlong *)(lVar6 + 0x28);
          do {
            *(longlong *)(lVar9 + 0x138) = lVar8;
            *(int32_t *)(lVar9 + 0x130) = 1;
            plVar5 = (longlong *)(lVar6 + 0x28);
            LOCK();
            lVar7 = *plVar5;
            bVar11 = lVar8 == lVar7;
            if (bVar11) {
              *plVar5 = lVar9;
              lVar7 = lVar8;
            }
            UNLOCK();
            if (bVar11) break;
            LOCK();
            piVar1 = (int *)(lVar9 + 0x130);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 0x7fffffff;
            UNLOCK();
            lVar8 = lVar7;
          } while (iVar2 == 1);
        }
      }
LAB_1805332d2:
      plVar5 = (longlong *)param_1[0xc];
      lVar9 = *(longlong *)
               (*(longlong *)
                 (plVar5[3] +
                 (plVar5[1] +
                  ((uVar10 & 0xffffffffffffffe0) - **(longlong **)(plVar5[3] + plVar5[1] * 8) >> 5)
                 & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_1805332d2;
  }
  lVar9 = param_1[8];
  if ((lVar9 != 0) && ((uVar4 != uVar3 || ((uVar3 & 0x1f) != 0)))) {
    lVar6 = param_1[10];
    LOCK();
    piVar1 = (int *)(lVar9 + 0x130);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x80000000;
    UNLOCK();
    if (iVar2 == 0) {
      lVar8 = *(longlong *)(lVar6 + 0x28);
      do {
        *(longlong *)(lVar9 + 0x138) = lVar8;
        *(int32_t *)(lVar9 + 0x130) = 1;
        plVar5 = (longlong *)(lVar6 + 0x28);
        LOCK();
        lVar7 = *plVar5;
        bVar11 = lVar8 == lVar7;
        if (bVar11) {
          *plVar5 = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar11) break;
        LOCK();
        piVar1 = (int *)(lVar9 + 0x130);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (iVar2 == 1);
    }
  }
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &unknown_var_7096_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1805333b0(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint64_t *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint64_t *puVar15;
  bool bVar16;
  bool bVar17;
  
  uVar5 = GetCurrentThreadId();
  uVar14 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar13 = (ulonglong)(uVar14 >> 0x10 ^ uVar14);
  puVar7 = (ulonglong *)param_1[6];
  for (puVar3 = puVar7; uVar6 = uVar13, puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[2])
  {
    while( true ) {
      uVar6 = uVar6 & *puVar3 - 1;
      uVar14 = *(uint *)(uVar6 * 0x10 + puVar3[1]);
      if (uVar14 == uVar5) {
        puVar15 = *(uint64_t **)(puVar3[1] + 8 + uVar6 * 0x10);
        if (puVar3 == puVar7) {
          return puVar15;
        }
        do {
          uVar13 = uVar13 & *puVar7 - 1;
          if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
            puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
            LOCK();
            bVar17 = *puVar2 == 0;
            if (bVar17) {
              *puVar2 = uVar5;
            }
            UNLOCK();
            if (bVar17) {
              *(uint64_t **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar15;
              return puVar15;
            }
          }
          uVar13 = uVar13 + 1;
        } while( true );
      }
      if (uVar14 == 0) break;
      uVar6 = uVar6 + 1;
    }
  }
  LOCK();
  plVar1 = param_1 + 7;
  lVar9 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  uVar6 = lVar9 + 1;
  puVar15 = (uint64_t *)0x0;
  while( true ) {
    if (*puVar7 >> 1 <= uVar6) {
      LOCK();
      puVar2 = (uint *)(param_1 + 0x4b);
      uVar14 = *puVar2;
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      if ((uVar14 & 1) == 0) {
        puVar3 = (ulonglong *)param_1[6];
        puVar7 = puVar3;
        uVar12 = *puVar3;
        if (*puVar3 >> 1 <= uVar6) {
          do {
            uVar4 = uVar12;
            uVar12 = uVar4 * 2;
          } while ((uVar4 & 0x7fffffffffffffff) <= uVar6);
          puVar7 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x20 + 0x1f,10);
          if (puVar7 == (ulonglong *)0x0) {
            LOCK();
            param_1[7] = param_1[7] + -1;
            UNLOCK();
            *(int32_t *)(param_1 + 0x4b) = 0;
            return (uint64_t *)0x0;
          }
          *puVar7 = uVar12;
          puVar7[1] = (ulonglong)(-(int)(puVar7 + 3) & 7) + (longlong)(puVar7 + 3);
          puVar11 = puVar15;
          for (; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(uint64_t *)((longlong)puVar11 + puVar7[1] + 8) = 0;
            *(int32_t *)((longlong)puVar11 + puVar7[1]) = 0;
            puVar11 = puVar11 + 2;
          }
          puVar7[2] = (ulonglong)puVar3;
          param_1[6] = (longlong)puVar7;
        }
        *(int32_t *)(param_1 + 0x4b) = 0;
      }
    }
    if (uVar6 < (*puVar7 >> 2) + (*puVar7 >> 1)) break;
    puVar7 = (ulonglong *)param_1[6];
  }
  puVar11 = (uint64_t *)*param_1;
  while (puVar11 != (uint64_t *)0x0) {
    if ((*(char *)(puVar11 + 2) != '\0') && (*(char *)(puVar11 + 9) == '\0')) {
      bVar17 = true;
      LOCK();
      bVar16 = *(char *)(puVar11 + 2) == '\x01';
      if (bVar16) {
        *(char *)(puVar11 + 2) = '\0';
      }
      UNLOCK();
      if (bVar16) goto LAB_1805336bb;
    }
    plVar1 = puVar11 + 1;
    puVar11 = (uint64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      puVar11 = puVar15;
    }
  }
  bVar17 = false;
  puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x68,10);
  puVar11 = puVar15;
  if (puVar8 != (uint64_t *)0x0) {
    puVar8[1] = 0;
    *(int8_t *)(puVar8 + 2) = 0;
    puVar8[3] = 0;
    *puVar8 = &unknown_var_7096_ptr;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(int8_t *)(puVar8 + 9) = 0;
    puVar8[10] = param_1;
    *puVar8 = &unknown_var_7112_ptr;
    puVar8[0xb] = 0x20;
    puVar8[0xc] = 0;
    FUN_18005f430(puVar8);
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
    lVar9 = *param_1;
    do {
      puVar11 = (uint64_t *)(lVar9 + 8);
      if (lVar9 == 0) {
        puVar11 = puVar15;
      }
      puVar8[1] = puVar11;
      LOCK();
      lVar10 = *param_1;
      bVar16 = lVar9 == lVar10;
      if (bVar16) {
        *param_1 = (longlong)puVar8;
        lVar10 = lVar9;
      }
      UNLOCK();
      lVar9 = lVar10;
      puVar11 = puVar8;
    } while (!bVar16);
  }
LAB_1805336bb:
  if (puVar11 == (uint64_t *)0x0) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
    return (uint64_t *)0x0;
  }
  if (bVar17) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
  }
  do {
    uVar13 = uVar13 & *puVar7 - 1;
    if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
      puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
      LOCK();
      bVar17 = *puVar2 == 0;
      if (bVar17) {
        *puVar2 = uVar5;
      }
      UNLOCK();
      if (bVar17) {
        *(uint64_t **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar11;
        return puVar11;
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
}



uint64_t * FUN_180533750(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_7128_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



uint64_t FUN_180533780(uint64_t param_1,ulonglong param_2)

{
  FUN_180532d00();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}



uint64_t * FUN_1805337c0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_7096_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



uint64_t FUN_1805337f0(uint64_t param_1,ulonglong param_2)

{
  FUN_180533230();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180533830(longlong *param_1,float *param_2,char param_3,float param_4,longlong param_5,
void FUN_180533830(longlong *param_1,float *param_2,char param_3,float param_4,longlong param_5,
                  char *param_6)

{
  byte bVar1;
  float fVar2;
  char cVar3;
  int32_t uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int8_t auStack_1e8 [32];
  float *pfStack_1c8;
  char cStack_1b8;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  uint64_t uStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  uint64_t uStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint64_t uStack_138;
  float afStack_128 [4];
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  float afStack_100 [2];
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  ulonglong uStack_e8;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_e8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1e8;
  uVar14 = (ulonglong)param_3;
  lVar8 = uVar14 * 0x4a + *param_1;
  fVar15 = (float)FUN_18040f3a0(lVar8);
  fVar16 = (float)FUN_18040e640(lVar8);
  if (*param_6 == '\0') {
    iVar10 = (int)param_4;
    iVar10 = (iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3;
    if (fVar16 <= (float)iVar10) {
      iVar10 = iVar10 + -3;
    }
    if (fVar15 <= (float)iVar10) {
      iVar11 = iVar10 + 3;
    }
    else {
      iVar10 = (int)fVar15;
      iVar11 = iVar10 + 1;
      if (iVar11 != (iVar11 / 3 + (iVar11 >> 0x1f) +
                    (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * 3) {
        iVar11 = iVar10 + 4;
        iVar11 = (iVar11 / 3 + (iVar11 >> 0x1f) +
                 (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                 3;
      }
    }
    if (fVar16 < (float)iVar11) goto LAB_180533974;
  }
  else {
    iVar10 = (int)param_4;
    iVar11 = iVar10 + 1;
    if (fVar16 < (float)iVar11) {
      iVar10 = iVar10 + -1;
LAB_180533974:
      iVar11 = (int)fVar16;
    }
  }
  fVar16 = (float)iVar10;
  plVar9 = param_1 + 8;
  fStack_150 = (float)CONCAT31(fStack_150._1_3_,1);
  uStack_158 = plVar9;
  AcquireSRWLockShared(plVar9);
  iVar10 = (int)param_3;
  pfStack_1c8 = (float *)&uStack_178;
  cVar3 = FUN_180534330(param_1,iVar10);
  pfStack_1c8 = &fStack_198;
  cStack_1b8 = FUN_180534330(param_1,iVar10);
  uVar4 = ReleaseSRWLockShared(plVar9);
  fVar15 = fStack_170;
  if ((cVar3 == '\0') || (cStack_1b8 == '\0')) {
    fStack_150 = (float)((uint)fStack_150 & 0xffffff00);
    uStack_158 = plVar9;
    AcquireSRWLockExclusive(plVar9);
    fStack_150 = (float)CONCAT31(fStack_150._1_3_,1);
    if ((cVar3 == '\0') && (iVar6 = func_0x00018040e6d0(lVar8 + 0x26), iVar6 == -1)) {
      fVar15 = 1.0;
      fVar33 = 0.0;
      fVar22 = 0.0;
      fVar32 = 0.0;
      afStack_128[0] = 1.0;
      afStack_128[1] = 0.0;
      afStack_128[2] = 0.0;
      afStack_128[3] = 0.0;
      uStack_118 = 0;
      uStack_110 = 0x3f80000000000000;
      if (-1 < param_3) {
        fStack_19c = 3.4028235e+38;
        cVar3 = param_3;
        do {
          FUN_18040edc0((longlong)cVar3 * 0x4a + *param_1,&uStack_178);
          fVar2 = fStack_16c;
          fVar19 = fStack_170;
          fVar17 = (float)uStack_178;
          fVar18 = uStack_178._4_4_;
          uStack_108 = uStack_178;
          afStack_100[1] = fStack_16c;
          afStack_100[0] = fStack_170;
          lVar13 = (longlong)cVar3 * 0x1b0;
          lVar12 = *(longlong *)(param_5 + 0x140);
          pfVar7 = (float *)(lVar13 + 0x80 + lVar12);
          fVar23 = *pfVar7;
          fVar28 = pfVar7[1];
          uStack_f8 = *(uint64_t *)pfVar7;
          fVar29 = pfVar7[2];
          uStack_f0 = *(uint64_t *)(pfVar7 + 2);
          pfVar7 = (float *)FUN_1801c0fb0(&uStack_108,&fStack_198,&uStack_118);
          fStack_1a0 = fVar29 + pfVar7[2];
          fStack_1a4 = fVar28 + pfVar7[1];
          fStack_1a8 = fVar23 + *pfVar7;
          fVar29 = fVar33 * fVar2;
          fVar30 = fVar22 * fVar18;
          fVar31 = fVar32 * fVar2;
          fVar34 = fVar22 * fVar19;
          fVar23 = fVar33 * fVar19;
          fVar28 = fVar33 * fVar18;
          fVar33 = fVar33 * fVar17 * 1.0 + fVar32 * fVar19 * 1.0 +
                   (fVar15 * fVar18 - fVar22 * fVar2);
          fVar22 = fVar22 * fVar17 * 1.0 + fVar29 * 1.0 + (fVar15 * fVar19 - fVar32 * fVar18);
          fVar32 = fVar32 * fVar17 * 1.0 + fVar30 * 1.0 + (fVar15 * fVar2 - fVar23);
          fVar15 = fVar34 * -1.0 + fVar31 * -1.0 + (fVar15 * fVar17 - fVar28);
          afStack_128[1] = fVar33;
          afStack_128[0] = fVar15;
          afStack_128[3] = fVar32;
          afStack_128[2] = fVar22;
          uStack_118 = CONCAT44(fStack_1a4,fStack_1a8);
          uStack_110 = CONCAT44(fStack_19c,fStack_1a0);
          cVar3 = *(char *)(lVar13 + 0xf0 + lVar12);
        } while (-1 < cVar3);
      }
      FUN_180084000(afStack_128);
      FUN_18040e930(lVar8 + 0x26);
      FUN_18040e790(lVar8 + 0x38);
    }
    if ((cStack_1b8 == '\0') && (iVar6 = func_0x00018040e6d0(lVar8 + 0x26), iVar6 == -1)) {
      fVar15 = 1.0;
      fVar33 = 0.0;
      fVar22 = 0.0;
      fVar32 = 0.0;
      afStack_128[0] = 1.0;
      afStack_128[1] = 0.0;
      afStack_128[2] = 0.0;
      afStack_128[3] = 0.0;
      uStack_118 = 0;
      uStack_110 = 0x3f80000000000000;
      if (-1 < param_3) {
        fStack_19c = 3.4028235e+38;
        do {
          FUN_18040edc0((longlong)(char)uVar14 * 0x4a + *param_1,&uStack_178);
          fVar2 = fStack_16c;
          fVar19 = fStack_170;
          fVar17 = (float)uStack_178;
          fVar18 = uStack_178._4_4_;
          uStack_108 = uStack_178;
          afStack_100[1] = fStack_16c;
          afStack_100[0] = fStack_170;
          lVar13 = (longlong)(char)uVar14 * 0x1b0;
          lVar12 = *(longlong *)(param_5 + 0x140);
          pfVar7 = (float *)(lVar13 + 0x80 + lVar12);
          fVar23 = *pfVar7;
          fVar28 = pfVar7[1];
          uStack_f8 = *(uint64_t *)pfVar7;
          fVar29 = pfVar7[2];
          uStack_f0 = *(uint64_t *)(pfVar7 + 2);
          pfVar7 = (float *)FUN_1801c0fb0(&uStack_108,&fStack_198,&uStack_118);
          fStack_1a0 = fVar29 + pfVar7[2];
          fStack_1a4 = fVar28 + pfVar7[1];
          fStack_1a8 = fVar23 + *pfVar7;
          fVar29 = fVar33 * fVar2;
          fVar30 = fVar22 * fVar18;
          fVar31 = fVar32 * fVar2;
          fVar34 = fVar22 * fVar19;
          fVar23 = fVar33 * fVar19;
          fVar28 = fVar33 * fVar18;
          fVar33 = fVar33 * fVar17 * 1.0 + fVar32 * fVar19 * 1.0 +
                   (fVar15 * fVar18 - fVar22 * fVar2);
          fVar22 = fVar22 * fVar17 * 1.0 + fVar29 * 1.0 + (fVar15 * fVar19 - fVar32 * fVar18);
          fVar32 = fVar32 * fVar17 * 1.0 + fVar30 * 1.0 + (fVar15 * fVar2 - fVar23);
          fVar15 = fVar34 * -1.0 + fVar31 * -1.0 + (fVar15 * fVar17 - fVar28);
          afStack_128[1] = fVar33;
          afStack_128[0] = fVar15;
          afStack_128[3] = fVar32;
          afStack_128[2] = fVar22;
          uStack_118 = CONCAT44(fStack_1a4,fStack_1a8);
          uStack_110 = CONCAT44(fStack_19c,fStack_1a0);
          bVar1 = *(byte *)(lVar13 + 0xf0 + lVar12);
          uVar14 = (ulonglong)bVar1;
        } while (-1 < (char)bVar1);
      }
      FUN_180084000(afStack_128);
      FUN_18040e930(lVar8 + 0x26);
      FUN_18040e790(lVar8 + 0x38);
    }
    plVar9 = param_1 + 8;
    ReleaseSRWLockExclusive(plVar9);
    fStack_170 = (float)CONCAT31(fStack_170._1_3_,1);
    uStack_178 = plVar9;
    AcquireSRWLockShared(plVar9);
    pfStack_1c8 = (float *)&uStack_158;
    FUN_180534330(param_1,iVar10);
    pfStack_1c8 = &fStack_198;
    FUN_180534330(param_1,iVar10);
    uVar4 = ReleaseSRWLockShared(plVar9);
    fVar33 = fStack_150;
    fVar32 = (param_4 - fVar16) / ((float)iVar11 - fVar16);
    fVar15 = (float)uStack_158;
    fVar16 = uStack_158._4_4_;
    fVar22 = 0.0;
    if (fVar32 < 0.0) {
LAB_180533fc0:
      fVar32 = fVar22;
      fStack_1a8 = (float)uStack_158;
      fStack_1a4 = uStack_158._4_4_;
      fStack_1a0 = fStack_150;
      fStack_19c = fStack_14c;
      fStack_198 = (float)uStack_158;
      fStack_194 = uStack_158._4_4_;
      fStack_190 = fStack_150;
    }
    else {
      if (1.0 <= fVar32) {
        fVar32 = 1.0;
      }
      fVar22 = fVar32;
      if (fVar32 < 0.001) goto LAB_180533fc0;
      if (fVar32 <= 0.999) {
        fVar22 = fStack_150 * fStack_190;
        fVar23 = fStack_14c * fStack_18c;
        auVar26._0_4_ = fVar22 + (float)uStack_158 * fStack_198;
        auVar26._4_4_ = fVar23 + uStack_158._4_4_ * fStack_194;
        auVar26._8_4_ = fVar22 + fVar22;
        auVar26._12_4_ = fVar23 + fVar23;
        auVar27._4_12_ = auVar26._4_12_;
        auVar27._0_4_ = auVar26._0_4_ + auVar26._4_4_;
        uStack_108 = (longlong *)0x3f8000003f800000;
        afStack_100[0] = 1.0;
        afStack_100[1] = 1.0;
        uStack_f8 = 0xbf800000bf800000;
        uStack_f0 = 0xbf800000bf800000;
        uVar5 = movmskps(uVar4,auVar27);
        uVar14 = (ulonglong)(uVar5 & 1);
        fVar22 = *(float *)(&uStack_108 + uVar14 * 2);
        fVar23 = afStack_100[uVar14 * 4];
        fVar28 = afStack_100[uVar14 * 4 + 1];
        fVar29 = *(float *)((longlong)&uStack_108 + uVar14 * 0x10 + 4) * fStack_194;
        if (0.9995 < ABS(auVar27._0_4_)) {
          fVar15 = 1.0 - fVar32;
          fStack_198 = fVar15 * (float)uStack_158 + fVar32 * fVar22 * fStack_198;
          fStack_194 = fVar15 * uStack_158._4_4_ + fVar32 * fVar29;
          fStack_190 = fVar15 * fStack_150 + fVar32 * fVar23 * fStack_190;
          fStack_14c = fVar15 * fStack_14c + fVar32 * fVar28 * fStack_18c;
          fVar15 = fStack_14c * fStack_14c + fStack_198 * fStack_198;
          fVar16 = fStack_190 * fStack_190 + fStack_194 * fStack_194;
          fVar29 = fVar15 + fStack_194 * fStack_194 + fStack_190 * fStack_190;
          fVar17 = fVar16 + fStack_198 * fStack_198 + fStack_14c * fStack_14c;
          auVar21._0_4_ = fVar16 + fVar15 + 1.1754944e-38;
          auVar21._4_4_ = fVar15 + fVar16 + 1.1754944e-38;
          auVar21._8_4_ = fVar29 + 1.1754944e-38;
          auVar21._12_4_ = fVar17 + 1.1754944e-38;
          auVar26 = rsqrtps(auVar27,auVar21);
          fVar33 = auVar26._0_4_;
          fVar22 = auVar26._4_4_;
          fVar23 = auVar26._8_4_;
          fVar28 = auVar26._12_4_;
          fStack_198 = fStack_198 * (3.0 - fVar33 * fVar33 * (fVar16 + fVar15)) * fVar33 * 0.5;
          fStack_194 = fStack_194 * (3.0 - fVar22 * fVar22 * (fVar15 + fVar16)) * fVar22 * 0.5;
          fStack_190 = fStack_190 * (3.0 - fVar23 * fVar23 * fVar29) * fVar23 * 0.5;
          fStack_14c = fStack_14c * (3.0 - fVar28 * fVar28 * fVar17) * fVar28 * 0.5;
        }
        else {
          acosf();
          fVar17 = (float)sinf();
          fVar18 = (float)sinf();
          fVar18 = fVar18 * (1.0 / fVar17);
          fVar19 = (float)sinf();
          fVar19 = fVar19 * (1.0 / fVar17);
          fStack_198 = fVar18 * fVar15 + fVar19 * fVar22 * fStack_198;
          fStack_194 = fVar18 * fVar16 + fVar19 * fVar29;
          fStack_190 = fVar18 * fVar33 + fVar19 * fVar23 * fStack_190;
          fStack_14c = fVar18 * fStack_14c + fVar19 * fVar28 * fStack_18c;
        }
      }
      else {
        fStack_1a8 = fStack_198;
        fStack_1a4 = fStack_194;
        fStack_1a0 = fStack_190;
        fStack_19c = fStack_18c;
        fStack_14c = fStack_18c;
      }
    }
    fStack_168 = (fStack_188 - fStack_148) * fVar32 + fStack_148;
    fStack_164 = (fStack_184 - fStack_144) * fVar32 + fStack_144;
    fStack_160 = (fStack_180 - fStack_140) * fVar32 + fStack_140;
    fStack_15c = (fStack_17c - fStack_13c) * fVar32 + fStack_13c;
    fStack_16c = fStack_14c;
    goto LAB_18053415e;
  }
  fVar32 = (param_4 - fVar16) / ((float)iVar11 - fVar16);
  fVar16 = (float)uStack_178;
  fVar33 = uStack_178._4_4_;
  fVar22 = 0.0;
  if (fVar32 < 0.0) {
LAB_180533a30:
    fStack_1a8 = (float)uStack_178;
    fStack_1a4 = uStack_178._4_4_;
    fStack_1a0 = fStack_170;
    fStack_19c = fStack_16c;
    fStack_198 = (float)uStack_178;
    fStack_194 = uStack_178._4_4_;
    fStack_190 = fStack_170;
    fVar32 = fVar22;
  }
  else {
    if (1.0 <= fVar32) {
      fVar32 = 1.0;
    }
    fVar22 = fVar32;
    if (fVar32 < 0.001) goto LAB_180533a30;
    if (fVar32 <= 0.999) {
      fVar22 = fStack_170 * fStack_190;
      fVar23 = fStack_16c * fStack_18c;
      auVar24._0_4_ = fVar22 + (float)uStack_178 * fStack_198;
      auVar24._4_4_ = fVar23 + uStack_178._4_4_ * fStack_194;
      auVar24._8_4_ = fVar22 + fVar22;
      auVar24._12_4_ = fVar23 + fVar23;
      auVar25._4_12_ = auVar24._4_12_;
      auVar25._0_4_ = auVar24._0_4_ + auVar24._4_4_;
      afStack_128[0] = 1.0;
      afStack_128[1] = 1.0;
      afStack_128[2] = 1.0;
      afStack_128[3] = 1.0;
      uStack_118 = 0xbf800000bf800000;
      uStack_110 = 0xbf800000bf800000;
      uVar5 = movmskps(uVar4,auVar25);
      uVar14 = (ulonglong)(uVar5 & 1);
      fVar22 = afStack_128[uVar14 * 4];
      fVar23 = afStack_128[uVar14 * 4 + 1];
      fVar28 = afStack_128[uVar14 * 4 + 2];
      fVar29 = afStack_128[uVar14 * 4 + 3];
      if (0.9995 < ABS(auVar25._0_4_)) {
        fVar15 = 1.0 - fVar32;
        fStack_198 = fVar15 * (float)uStack_178 + fVar32 * fVar22 * fStack_198;
        fStack_194 = fVar15 * uStack_178._4_4_ + fVar32 * fVar23 * fStack_194;
        fStack_190 = fVar15 * fStack_170 + fVar32 * fVar28 * fStack_190;
        fStack_16c = fVar15 * fStack_16c + fVar32 * fVar29 * fStack_18c;
        fVar15 = fStack_16c * fStack_16c + fStack_198 * fStack_198;
        fVar16 = fStack_190 * fStack_190 + fStack_194 * fStack_194;
        fVar29 = fVar15 + fStack_194 * fStack_194 + fStack_190 * fStack_190;
        fVar17 = fVar16 + fStack_198 * fStack_198 + fStack_16c * fStack_16c;
        auVar20._0_4_ = fVar16 + fVar15 + 1.1754944e-38;
        auVar20._4_4_ = fVar15 + fVar16 + 1.1754944e-38;
        auVar20._8_4_ = fVar29 + 1.1754944e-38;
        auVar20._12_4_ = fVar17 + 1.1754944e-38;
        auVar26 = rsqrtps(auVar25,auVar20);
        fVar33 = auVar26._0_4_;
        fVar22 = auVar26._4_4_;
        fVar23 = auVar26._8_4_;
        fVar28 = auVar26._12_4_;
        fStack_198 = fStack_198 * (3.0 - fVar33 * fVar33 * (fVar16 + fVar15)) * fVar33 * 0.5;
        fStack_194 = fStack_194 * (3.0 - fVar22 * fVar22 * (fVar15 + fVar16)) * fVar22 * 0.5;
        fStack_190 = fStack_190 * (3.0 - fVar23 * fVar23 * fVar29) * fVar23 * 0.5;
        fStack_16c = fStack_16c * (3.0 - fVar28 * fVar28 * fVar17) * fVar28 * 0.5;
      }
      else {
        acosf();
        fVar17 = (float)sinf();
        fVar18 = (float)sinf();
        fVar18 = fVar18 * (1.0 / fVar17);
        fVar19 = (float)sinf();
        fVar19 = fVar19 * (1.0 / fVar17);
        fStack_198 = fVar18 * fVar16 + fVar19 * fVar22 * fStack_198;
        fStack_194 = fVar18 * fVar33 + fVar19 * fVar23 * fStack_194;
        fStack_190 = fVar18 * fVar15 + fVar19 * fVar28 * fStack_190;
        fStack_16c = fVar18 * fStack_16c + fVar19 * fVar29 * fStack_18c;
      }
    }
    else {
      fStack_1a8 = fStack_198;
      fStack_1a4 = fStack_194;
      fStack_1a0 = fStack_190;
      fStack_19c = fStack_18c;
      fStack_16c = fStack_18c;
    }
  }
  fStack_168 = (fStack_188 - fStack_168) * fVar32 + fStack_168;
  fStack_164 = (fStack_184 - fStack_164) * fVar32 + fStack_164;
  fStack_160 = (fStack_180 - fStack_160) * fVar32 + fStack_160;
  fStack_15c = (fStack_17c - fStack_15c) * fVar32 + fStack_15c;
LAB_18053415e:
  *param_2 = fStack_198;
  param_2[1] = fStack_194;
  param_2[2] = fStack_190;
  param_2[3] = fStack_16c;
  param_2[4] = fStack_168;
  param_2[5] = fStack_164;
  param_2[6] = fStack_160;
  param_2[7] = fStack_15c;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_1e8);
}



ulonglong FUN_1805341e0(longlong param_1,uint64_t *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  ulonglong *puVar6;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar1 & 0x1f) != 0) {
    uVar5 = *param_2;
    *(uint64_t *)(*(longlong *)(param_1 + 0x40) + (ulonglong)((uint)uVar1 & 0x1f) * 8) = uVar5;
LAB_180534315:
    *(ulonglong *)(param_1 + 0x20) = uVar1 + 1;
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  uVar3 = (*(longlong *)(param_1 + 0x28) - uVar1) - 0x20;
  if ((0x8000000000000000 < uVar3) &&
     (plVar2 = *(longlong **)(param_1 + 0x60), plVar2 != (longlong *)0x0)) {
    uVar3 = *plVar2 - 1U & plVar2[1] + 1U;
    puVar6 = *(ulonglong **)(plVar2[3] + uVar3 * 8);
    if ((*puVar6 == 1) || (puVar6[1] == 0)) {
      *puVar6 = uVar1;
      plVar2[1] = uVar3;
    }
    else {
      uVar3 = FUN_18005f430(param_1);
      if ((char)uVar3 == '\0') goto LAB_1805342e1;
      plVar2 = *(longlong **)(param_1 + 0x60);
      uVar3 = *plVar2 - 1U & plVar2[1] + 1U;
      puVar6 = *(ulonglong **)(plVar2[3] + uVar3 * 8);
      *puVar6 = uVar1;
      plVar2[1] = uVar3;
    }
    puVar4 = (uint64_t *)FUN_18005ff50(*(uint64_t *)(param_1 + 0x50));
    if (puVar4 != (uint64_t *)0x0) {
      puVar4[0x21] = 0;
      uVar5 = *param_2;
      *puVar4 = uVar5;
      puVar6[1] = (ulonglong)puVar4;
      *(uint64_t **)(param_1 + 0x40) = puVar4;
      goto LAB_180534315;
    }
    plVar2 = *(longlong **)(param_1 + 0x60);
    uVar3 = plVar2[1] - 1;
    plVar2[1] = *plVar2 - 1U & uVar3;
    puVar6[1] = 0;
  }
LAB_1805342e1:
  return uVar3 & 0xffffffffffffff00;
}



uint64_t
FUN_180534330(longlong *param_1,int param_2,int32_t param_3,uint64_t param_4,
             uint64_t *param_5)

{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  uint64_t uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  lVar8 = (longlong)param_2 * 0x4a + *param_1;
  iVar7 = func_0x00018040e6d0(lVar8 + 0x26,param_3);
  lVar9 = (longlong)iVar7;
  if (iVar7 != -1) {
    FUN_180405670(param_1 + 4,&fStack_18,param_3);
    lVar5 = *(longlong *)(lVar8 + 0x38);
    fVar2 = *(float *)(lVar5 + lVar9 * 0x10);
    fVar3 = *(float *)(lVar5 + 4 + lVar9 * 0x10);
    fVar4 = *(float *)(lVar5 + 8 + lVar9 * 0x10);
    puVar1 = (uint64_t *)(*(longlong *)(lVar8 + 0x26) + lVar9 * 0x10);
    uVar6 = puVar1[1];
    *param_5 = *puVar1;
    param_5[1] = uVar6;
    *(float *)(param_5 + 2) = fStack_18 + fVar2;
    *(float *)((longlong)param_5 + 0x14) = fStack_14 + fVar3;
    *(float *)(param_5 + 3) = fStack_10 + fVar4;
    *(int32_t *)((longlong)param_5 + 0x1c) = 0x7f7fffff;
    return 1;
  }
  return 0;
}






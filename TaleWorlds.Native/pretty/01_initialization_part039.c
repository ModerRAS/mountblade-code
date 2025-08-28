#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part039.c - 3 个函数

// 函数: void FUN_18006cf00(uint64_t *param_1)
void FUN_18006cf00(uint64_t *param_1)

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
  
  *param_1 = &unknown_var_3608_ptr;
  uVar3 = param_1[4];
  lVar9 = 0;
  uVar4 = param_1[5];
  for (uVar10 = uVar4; uVar10 != uVar3; uVar10 = uVar10 + 1) {
    if ((uVar10 & 0x1f) == 0) {
      if (lVar9 != 0) {
        lVar6 = param_1[10];
        LOCK();
        piVar1 = (int *)(lVar9 + 0x3530);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -0x80000000;
        UNLOCK();
        if (iVar2 == 0) {
          lVar8 = *(longlong *)(lVar6 + 0x28);
          do {
            *(longlong *)(lVar9 + 0x3538) = lVar8;
            *(int32_t *)(lVar9 + 0x3530) = 1;
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
            piVar1 = (int *)(lVar9 + 0x3530);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 0x7fffffff;
            UNLOCK();
            lVar8 = lVar7;
          } while (iVar2 == 1);
        }
      }
LAB_18006cfb1:
      plVar5 = (longlong *)param_1[0xc];
      lVar9 = *(longlong *)
               (*(longlong *)
                 (plVar5[3] +
                 (((uVar10 & 0xffffffffffffffe0) - **(longlong **)(plVar5[3] + plVar5[1] * 8) >> 5)
                  + plVar5[1] & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_18006cfb1;
    FUN_180069530((ulonglong)((uint)uVar10 & 0x1f) * 0x1a8 + lVar9);
  }
  lVar9 = param_1[8];
  if ((lVar9 != 0) && ((uVar4 != uVar3 || ((uVar3 & 0x1f) != 0)))) {
    lVar6 = param_1[10];
    LOCK();
    piVar1 = (int *)(lVar9 + 0x3530);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x80000000;
    UNLOCK();
    if (iVar2 == 0) {
      lVar8 = *(longlong *)(lVar6 + 0x28);
      do {
        *(longlong *)(lVar9 + 0x3538) = lVar8;
        *(int32_t *)(lVar9 + 0x3530) = 1;
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
        piVar1 = (int *)(lVar9 + 0x3530);
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
  *param_1 = &unknown_var_3768_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18006d0b0(longlong *param_1)

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
          puVar7 = (ulonglong *)FUN_18062b420(system_memory_pool_ptr,uVar4 * 0x20 + 0x1f,10);
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
      if (bVar16) goto LAB_18006d3bb;
    }
    plVar1 = puVar11 + 1;
    puVar11 = (uint64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      puVar11 = puVar15;
    }
  }
  bVar17 = false;
  puVar8 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x68,10);
  puVar11 = puVar15;
  if (puVar8 != (uint64_t *)0x0) {
    puVar8[1] = 0;
    *(int8_t *)(puVar8 + 2) = 0;
    puVar8[3] = 0;
    *puVar8 = &unknown_var_3768_ptr;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(int8_t *)(puVar8 + 9) = 0;
    puVar8[10] = param_1;
    *puVar8 = &unknown_var_3608_ptr;
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
LAB_18006d3bb:
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



uint64_t FUN_18006d450(uint64_t param_1,ulonglong param_2)

{
  FUN_18006cf00();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}



uint64_t FUN_18006d4e0(ulonglong *param_1,uint64_t param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar13 = 0;
  uVar7 = *param_1;
  uVar8 = uVar13;
  uVar10 = uVar13;
  uVar12 = uVar13;
  do {
    uVar9 = uVar8;
    uVar11 = uVar10;
    if (uVar7 == 0) break;
    uVar6 = *(longlong *)(uVar7 + 0x20) - *(longlong *)(uVar7 + 0x28);
    if ((ulonglong)(*(longlong *)(uVar7 + 0x28) - *(longlong *)(uVar7 + 0x20)) < 0x8000000000000001)
    {
      uVar6 = uVar13;
    }
    if ((uVar6 != 0) && (uVar12 = uVar12 + 1, uVar9 = uVar7, uVar11 = uVar6, uVar6 <= uVar10)) {
      uVar9 = uVar8;
      uVar11 = uVar10;
    }
    plVar1 = (longlong *)(uVar7 + 8);
    uVar7 = *plVar1 - 8;
    if (*plVar1 == 0) {
      uVar7 = uVar13;
    }
    uVar8 = uVar9;
    uVar10 = uVar11;
  } while (uVar12 < 3);
  if (uVar12 != 0) {
    cVar5 = FUN_18006d810(uVar9,param_2,uVar7,uVar11,0xfffffffffffffffe);
    if (cVar5 != '\0') {
      return 1;
    }
    uVar7 = *param_1;
    while (uVar7 != 0) {
      if (uVar7 != uVar9) {
        if (*(char *)(uVar7 + 0x48) == '\0') {
          cVar5 = FUN_18006da90(uVar7,param_2);
        }
        else {
          if (0x8000000000000000 <
              (ulonglong)
              ((*(longlong *)(uVar7 + 0x30) - *(longlong *)(uVar7 + 0x38)) -
              *(longlong *)(uVar7 + 0x20))) {
            LOCK();
            plVar1 = (longlong *)(uVar7 + 0x30);
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            if (0x8000000000000000 <
                (ulonglong)((lVar3 - *(longlong *)(uVar7 + 0x20)) - *(longlong *)(uVar7 + 0x38))) {
              LOCK();
              puVar2 = (ulonglong *)(uVar7 + 0x28);
              uVar8 = *puVar2;
              *puVar2 = *puVar2 + 1;
              UNLOCK();
              plVar1 = *(longlong **)(uVar7 + 0x58);
              lVar4 = *(longlong *)
                       (plVar1[2] + 8 +
                       (((uVar8 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10)
                        >> 5) + plVar1[1] & *plVar1 - 1U) * 0x10);
              uVar8 = (ulonglong)((uint)uVar8 & 0x1f);
              lVar3 = uVar8 * 0x1a8 + lVar4;
              FUN_18006dcb0(param_2,lVar3);
              FUN_180069530(lVar3);
              *(int8_t *)((lVar4 - uVar8) + 0x352f) = 1;
              cVar5 = '\x01';
              goto LAB_18006d67d;
            }
            LOCK();
            *(longlong *)(uVar7 + 0x38) = *(longlong *)(uVar7 + 0x38) + 1;
            UNLOCK();
          }
          cVar5 = '\0';
        }
LAB_18006d67d:
        if (cVar5 != '\0') {
          return 1;
        }
      }
      plVar1 = (longlong *)(uVar7 + 8);
      uVar7 = *plVar1 - 8;
      if (*plVar1 == 0) {
        uVar7 = uVar13;
      }
    }
  }
  return 0;
}



uint64_t FUN_18006d6c0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar1 & 0x1f) != 0) {
    FUN_18006cd80((ulonglong)((uint)uVar1 & 0x1f) * 0x1a8 + *(longlong *)(param_1 + 0x40));
LAB_18006d7fb:
    *(ulonglong *)(param_1 + 0x20) = uVar1 + 1;
    return 1;
  }
  if ((0x8000000000000000 < (*(longlong *)(param_1 + 0x28) - uVar1) - 0x20) &&
     (plVar2 = *(longlong **)(param_1 + 0x60), plVar2 != (longlong *)0x0)) {
    uVar4 = *plVar2 - 1U & plVar2[1] + 1U;
    puVar5 = *(ulonglong **)(plVar2[3] + uVar4 * 8);
    if ((*puVar5 == 1) || (puVar5[1] == 0)) {
      *puVar5 = uVar1;
      plVar2[1] = uVar4;
    }
    else {
      cVar3 = FUN_18005f430(param_1);
      if (cVar3 == '\0') {
        return 0;
      }
      plVar2 = *(longlong **)(param_1 + 0x60);
      uVar4 = *plVar2 - 1U & plVar2[1] + 1U;
      puVar5 = *(ulonglong **)(plVar2[3] + uVar4 * 8);
      *puVar5 = uVar1;
      plVar2[1] = uVar4;
    }
    uVar4 = FUN_18006d920(*(uint64_t *)(param_1 + 0x50));
    if (uVar4 != 0) {
      *(uint64_t *)(uVar4 + 0x3508) = 0;
      FUN_18006cd80(uVar4,param_2,param_3,param_4,uVar6);
      puVar5[1] = uVar4;
      *(ulonglong *)(param_1 + 0x40) = uVar4;
      goto LAB_18006d7fb;
    }
    plVar2 = *(longlong **)(param_1 + 0x60);
    plVar2[1] = *plVar2 - 1U & plVar2[1] - 1U;
    puVar5[1] = 0;
  }
  return 0;
}



uint64_t FUN_18006d810(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar7 = FUN_18006da90();
  }
  else {
    if (0x8000000000000000 <
        (ulonglong)
        ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
        *(longlong *)(param_1 + 0x20))) {
      LOCK();
      plVar1 = (longlong *)(param_1 + 0x30);
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (0x8000000000000000 <
          (ulonglong)((lVar3 - *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x38))) {
        LOCK();
        puVar2 = (ulonglong *)(param_1 + 0x28);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 + 1;
        UNLOCK();
        plVar1 = *(longlong **)(param_1 + 0x58);
        lVar5 = plVar1[2];
        lVar6 = *(longlong *)
                 (lVar5 + 8 +
                 (((uVar4 & 0xffffffffffffffe0) - *(longlong *)(lVar5 + plVar1[1] * 0x10) >> 5) +
                  plVar1[1] & *plVar1 - 1U) * 0x10);
        uVar8 = (ulonglong)((uint)uVar4 & 0x1f);
        lVar3 = uVar8 * 0x1a8 + lVar6;
        FUN_18006dcb0(param_2,lVar3,plVar1,lVar5,0xfffffffffffffffe,lVar6,uVar4);
        FUN_180069530(lVar3);
        *(int8_t *)((lVar6 - uVar8) + 0x352f) = 1;
        return 1;
      }
      LOCK();
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
      UNLOCK();
    }
    uVar7 = 0;
  }
  return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18006d920(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20)) {
    LOCK();
    puVar1 = (ulonglong *)(param_1 + 0x10);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar4 < *(ulonglong *)(param_1 + 0x20)) &&
       (lVar6 = uVar4 * 0x3548 + *(longlong *)(param_1 + 0x18), lVar6 != 0)) {
      return lVar6;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
LAB_18006d957:
  do {
    lVar9 = lVar6;
    if (lVar9 == 0) {
LAB_18006d9f6:
      lVar6 = FUN_18062b420(system_memory_pool_ptr,0x3548,10);
      if (lVar6 == 0) {
        return 0;
      }
      *(uint64_t *)(lVar6 + 0x3500) = 0;
      *(uint64_t *)(lVar6 + 0x3508) = 0;
      *(int32_t *)(lVar6 + 0x3530) = 0;
      *(uint64_t *)(lVar6 + 0x3538) = 0;
      *(int16_t *)(lVar6 + 0x3540) = 0x100;
      return lVar6;
    }
    puVar2 = (uint *)(lVar9 + 0x3530);
    uVar5 = *puVar2;
    if ((uVar5 & 0x7fffffff) == 0) {
LAB_18006d9d7:
      lVar6 = *(longlong *)(param_1 + 0x28);
      goto LAB_18006d957;
    }
    LOCK();
    uVar3 = *puVar2;
    if (uVar5 == uVar3) {
      *puVar2 = uVar5 + 1;
    }
    UNLOCK();
    if (uVar5 != uVar3) goto LAB_18006d9d7;
    LOCK();
    lVar6 = *(longlong *)(param_1 + 0x28);
    bVar10 = lVar9 == lVar6;
    if (bVar10) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(lVar9 + 0x3538);
      lVar6 = lVar9;
    }
    UNLOCK();
    if (bVar10) {
      LOCK();
      *puVar2 = *puVar2 - 2;
      UNLOCK();
      if (lVar9 != 0) {
        return lVar9;
      }
      goto LAB_18006d9f6;
    }
    LOCK();
    uVar5 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar5 == 0x80000001) {
      lVar8 = *(longlong *)(param_1 + 0x28);
      do {
        *(longlong *)(lVar9 + 0x3538) = lVar8;
        *puVar2 = 1;
        LOCK();
        lVar7 = *(longlong *)(param_1 + 0x28);
        bVar10 = lVar8 == lVar7;
        if (bVar10) {
          *(longlong *)(param_1 + 0x28) = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar10) break;
        LOCK();
        uVar5 = *puVar2;
        *puVar2 = *puVar2 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (uVar5 == 1);
    }
  } while( true );
}





// 函数: void FUN_18006da50(longlong *param_1)
void FUN_18006da50(longlong *param_1)

{
  FUN_180069530((ulonglong)(*(uint *)(param_1 + 1) & 0x1f) * 0x1a8 + *param_1);
  *(int8_t *)((*param_1 - (ulonglong)(*(uint *)(param_1 + 1) & 0x1f)) + 0x352f) = 1;
  return;
}



ulonglong FUN_18006da90(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  
  uVar8 = (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
          *(longlong *)(param_1 + 0x20);
  if (0x8000000000000000 < uVar8) {
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    uVar8 = *(ulonglong *)(param_1 + 0x20);
    if (0x8000000000000000 < (lVar5 - uVar8) - *(longlong *)(param_1 + 0x38)) {
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 0x28);
      uVar8 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x60);
      uVar11 = (uVar8 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >> 5;
      lVar5 = *(longlong *)(plVar1[3] + (plVar1[1] + uVar11 & *plVar1 - 1U) * 8);
      uVar6 = *(ulonglong *)(lVar5 + 8);
      lVar10 = (ulonglong)((uint)uVar8 & 0x1f) * 0x1a8 + uVar6;
      lVar7 = *(longlong *)(param_1 + 0x50);
      FUN_18006dcb0(param_2,lVar10,uVar11,plVar1,0xfffffffffffffffe,uVar6,uVar8,lVar5);
      FUN_180069530(lVar10);
      LOCK();
      puVar2 = (ulonglong *)(uVar6 + 0x3508);
      uVar8 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if (uVar8 == 0x1f) {
        *(uint64_t *)(lVar5 + 8) = 0;
        LOCK();
        puVar3 = (uint *)(uVar6 + 0x3530);
        uVar4 = *puVar3;
        *puVar3 = *puVar3 + 0x80000000;
        UNLOCK();
        uVar8 = (ulonglong)uVar4;
        if (uVar4 == 0) {
          uVar11 = *(ulonglong *)(lVar7 + 0x28);
          do {
            *(ulonglong *)(uVar6 + 0x3538) = uVar11;
            *(int32_t *)(uVar6 + 0x3530) = 1;
            puVar2 = (ulonglong *)(lVar7 + 0x28);
            LOCK();
            uVar9 = *puVar2;
            bVar12 = uVar11 == uVar9;
            if (bVar12) {
              *puVar2 = uVar6;
              uVar9 = uVar11;
            }
            UNLOCK();
            uVar8 = uVar9;
            if (bVar12) break;
            LOCK();
            puVar3 = (uint *)(uVar6 + 0x3530);
            uVar4 = *puVar3;
            uVar8 = (ulonglong)uVar4;
            *puVar3 = *puVar3 + 0x7fffffff;
            UNLOCK();
            uVar11 = uVar9;
          } while (uVar4 == 1);
        }
      }
      return CONCAT71((int7)(uVar8 >> 8),1);
    }
    LOCK();
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
    UNLOCK();
  }
  return uVar8 & 0xffffffffffffff00;
}





// 函数: void FUN_18006dc10(longlong *param_1)
void FUN_18006dc10(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  FUN_180069530((ulonglong)(*(uint *)(param_1 + 1) & 0x1f) * 0x1a8 + *param_1);
  LOCK();
  plVar1 = (longlong *)(*param_1 + 0x3508);
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (lVar4 == 0x1f) {
    *(uint64_t *)(param_1[2] + 8) = 0;
    lVar4 = *param_1;
    lVar5 = param_1[3];
    LOCK();
    piVar2 = (int *)(lVar4 + 0x3530);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -0x80000000;
    UNLOCK();
    if (iVar3 == 0) {
      lVar7 = *(longlong *)(lVar5 + 0x28);
      do {
        *(longlong *)(lVar4 + 0x3538) = lVar7;
        *(int32_t *)(lVar4 + 0x3530) = 1;
        plVar1 = (longlong *)(lVar5 + 0x28);
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar7 == lVar6;
        if (bVar8) {
          *plVar1 = lVar4;
          lVar6 = lVar7;
        }
        UNLOCK();
        if (bVar8) {
          return;
        }
        LOCK();
        piVar2 = (int *)(lVar4 + 0x3530);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + 0x7fffffff;
        UNLOCK();
        lVar7 = lVar6;
      } while (iVar3 == 1);
    }
  }
  return;
}



longlong FUN_18006dcb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  void *puVar2;
  
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_2 + 8);
  }
  strcpy_s(*(uint64_t *)(param_1 + 8),0x100,puVar2);
  *(uint64_t *)(param_1 + 0x118) = *(uint64_t *)(param_2 + 0x118);
  lVar1 = param_1 + 0x148;
  *(uint64_t *)(param_1 + 0x120) = *(uint64_t *)(param_2 + 0x120);
  *(uint64_t *)(param_1 + 0x128) = *(uint64_t *)(param_2 + 0x128);
  *(uint64_t *)(param_1 + 0x130) = *(uint64_t *)(param_2 + 0x130);
  *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(param_2 + 0x138);
  *(int8_t *)(param_1 + 0x140) = *(int8_t *)(param_2 + 0x140);
  if (lVar1 != param_2 + 0x148) {
    if (*(code **)(param_1 + 0x158) != (code *)0x0) {
      (**(code **)(param_1 + 0x158))(lVar1,0,0);
    }
    FUN_180069130(lVar1,param_2 + 0x148);
  }
  lVar1 = param_1 + 0x168;
  if (lVar1 != param_2 + 0x168) {
    if (*(code **)(param_1 + 0x178) != (code *)0x0) {
      (**(code **)(param_1 + 0x178))(lVar1,0,0);
    }
    FUN_180069130(lVar1,param_2 + 0x168);
  }
  *(uint64_t *)(param_1 + 0x188) = *(uint64_t *)(param_2 + 0x188);
  *(uint64_t *)(param_1 + 400) = *(uint64_t *)(param_2 + 400);
  *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(param_2 + 0x198);
  *(uint64_t *)(param_1 + 0x1a0) = *(uint64_t *)(param_2 + 0x1a0);
  return param_1;
}



longlong *
FUN_18006de00(longlong *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)

{
  uint64_t *puVar1;
  code *pcVar2;
  uint64_t *puVar3;
  void *puVar4;
  
  *param_1 = (longlong)param_4;
  if (param_2 != param_3) {
    puVar3 = param_2 + 0x2b;
    do {
      *param_4 = &system_state_ptr;
      param_4[1] = 0;
      *(int32_t *)(param_4 + 2) = 0;
      *param_4 = &unknown_var_2008_ptr;
      param_4[1] = param_4 + 3;
      *(int32_t *)(param_4 + 2) = 0;
      *(int8_t *)(param_4 + 3) = 0;
      *(int32_t *)(param_4 + 2) = *(int32_t *)(puVar3 + -0x29);
      puVar4 = &system_buffer_ptr;
      if ((void *)puVar3[-0x2a] != (void *)0x0) {
        puVar4 = (void *)puVar3[-0x2a];
      }
      strcpy_s(param_4[1],0x100,puVar4);
      param_4[0x23] = puVar3[-8];
      param_4[0x24] = puVar3[-7];
      param_4[0x25] = puVar3[-6];
      param_4[0x26] = puVar3[-5];
      param_4[0x27] = puVar3[-4];
      *(int8_t *)(param_4 + 0x28) = *(int8_t *)(puVar3 + -3);
      param_4[0x2b] = 0;
      param_4[0x2c] = _guard_check_icall;
      if (param_4 + 0x29 != puVar3 + -2) {
        pcVar2 = (code *)*puVar3;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(param_4 + 0x29,puVar3 + -2,2);
          pcVar2 = (code *)*puVar3;
        }
        param_4[0x2b] = pcVar2;
        param_4[0x2c] = puVar3[1];
        *puVar3 = 0;
        puVar3[1] = _guard_check_icall;
      }
      param_4[0x2f] = 0;
      param_4[0x30] = _guard_check_icall;
      if (param_4 + 0x2d != puVar3 + 2) {
        pcVar2 = (code *)puVar3[4];
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(param_4 + 0x2d,puVar3 + 2,2);
          pcVar2 = (code *)puVar3[4];
        }
        param_4[0x2f] = pcVar2;
        param_4[0x30] = puVar3[5];
        puVar3[4] = 0;
        puVar3[5] = _guard_check_icall;
      }
      param_4[0x31] = puVar3[6];
      param_4[0x32] = puVar3[7];
      param_4[0x33] = puVar3[8];
      param_4[0x34] = puVar3[9];
      *param_1 = *param_1 + 0x1a8;
      param_4 = (uint64_t *)*param_1;
      puVar1 = puVar3 + 10;
      puVar3 = puVar3 + 0x35;
    } while (puVar1 != param_3);
  }
  return param_1;
}



longlong * FUN_18006e000(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x318);
  uVar4 = param_2 + 0xfU & 0xfffffffffffffff0;
  plVar3 = (longlong *)0x0;
  plVar2 = (longlong *)plVar5[3];
  if (plVar2 != (longlong *)0x0) {
    do {
      if ((((char)plVar2[4] == '\0') && (uVar4 <= (ulonglong)plVar2[1])) &&
         ((plVar3 == (longlong *)0x0 || ((ulonglong)plVar2[1] < (ulonglong)plVar3[1])))) {
        plVar3 = plVar2;
      }
      plVar2 = (longlong *)plVar2[2];
    } while (plVar2 != (longlong *)0x0);
    if (plVar3 != (longlong *)0x0) {
      if (uVar4 < (ulonglong)plVar3[1]) {
        plVar2 = (longlong *)func_0x00018006e810(plVar5 + 4);
        *(int8_t *)(plVar2 + 4) = 0;
        *plVar2 = *plVar3 + uVar4;
        plVar2[1] = plVar3[1] - uVar4;
        lVar1 = plVar3[2];
        plVar2[2] = lVar1;
        if (lVar1 != 0) {
          *(longlong **)(lVar1 + 0x18) = plVar2;
        }
        plVar3[2] = (longlong)plVar2;
        plVar2[3] = (longlong)plVar3;
        plVar3[1] = uVar4;
      }
      *(int8_t *)(plVar3 + 4) = 1;
      *plVar5 = *plVar5 + uVar4;
      plVar5[2] = plVar5[2] - uVar4;
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



longlong FUN_18006e0b0(longlong param_1,ulonglong param_2)

{
  FUN_18006e5d0();
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ();
  FUN_18006e4a0(param_1 + 200);
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x408);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




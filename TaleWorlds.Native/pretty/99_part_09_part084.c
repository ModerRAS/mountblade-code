#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part084.c - 6 个函数

// 函数: void FUN_1805f4fe0(longlong param_1,longlong param_2)
void FUN_1805f4fe0(longlong param_1,longlong param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  longlong lVar10;
  int32_t auStack_18 [4];
  
  puVar1 = (int32_t *)(param_2 + 0x58);
  if (param_1 + 0x58 != param_1 + 600) {
    lVar10 = param_1 - (longlong)puVar1;
    puVar8 = puVar1;
    do {
      puVar9 = (int32_t *)(lVar10 + 0x58 + (longlong)puVar8);
      uVar2 = *puVar9;
      uVar4 = *(uint64_t *)(lVar10 + 0x60 + (longlong)puVar8);
      if (puVar9 != puVar8) {
        uVar3 = *puVar9;
        *puVar9 = *puVar8;
        *puVar8 = uVar3;
        uVar5 = *(uint64_t *)(lVar10 + 0x60 + (longlong)puVar8);
        *(uint64_t *)(lVar10 + 0x60 + (longlong)puVar8) = *(uint64_t *)(puVar8 + 2);
        *(uint64_t *)(puVar8 + 2) = uVar5;
      }
      if (puVar8 != auStack_18) {
        *puVar8 = uVar2;
        *(uint64_t *)(puVar8 + 2) = uVar4;
      }
      puVar8 = puVar8 + 4;
    } while (lVar10 + 0x58 + (longlong)puVar8 != param_1 + 600);
  }
  *(longlong *)(param_1 + 0x48) = param_1 + 0x58;
  lVar10 = param_2 + 0x40;
  *(int32_t **)(param_2 + 0x48) = puVar1;
  uVar4 = *(uint64_t *)(param_1 + 0x38);
  *(uint64_t *)(param_1 + 0x38) = *(uint64_t *)(param_2 + 0x38);
  *(uint64_t *)(param_2 + 0x38) = uVar4;
  uVar4 = *(uint64_t *)(param_1 + 0x30);
  *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_2 + 0x30);
  *(uint64_t *)(param_2 + 0x30) = uVar4;
  if (*(longlong *)(param_1 + 0x30) == lVar10) {
    *(longlong *)(param_1 + 0x30) = param_1 + 0x40;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x30);
    for (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10); lVar7 != lVar10;
        lVar7 = *(longlong *)(lVar7 + 0x10)) {
      lVar6 = lVar7;
    }
    *(longlong *)(lVar6 + 0x10) = param_1 + 0x40;
  }
  if (*(longlong *)(param_2 + 0x30) != param_1 + 0x40) {
    lVar6 = *(longlong *)(param_2 + 0x30);
    for (lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x10); lVar7 != param_1 + 0x40;
        lVar7 = *(longlong *)(lVar7 + 0x10)) {
      lVar6 = lVar7;
    }
    *(longlong *)(lVar6 + 0x10) = lVar10;
    return;
  }
  *(longlong *)(param_2 + 0x30) = lVar10;
  return;
}



uint64_t FUN_1805f5130(ulonglong *param_1,uint64_t *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int32_t *puVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  char cVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  uVar17 = *param_1;
  uVar16 = 0;
  uVar14 = uVar16;
  uVar18 = uVar16;
  uVar20 = uVar16;
  do {
    uVar15 = uVar14;
    if (uVar17 == 0) break;
    uVar13 = *(longlong *)(uVar17 + 0x20) - *(longlong *)(uVar17 + 0x28);
    if ((ulonglong)(*(longlong *)(uVar17 + 0x28) - *(longlong *)(uVar17 + 0x20)) <
        0x8000000000000001) {
      uVar13 = uVar16;
    }
    uVar19 = uVar18;
    if ((uVar13 != 0) && (uVar20 = uVar20 + 1, uVar15 = uVar17, uVar19 = uVar13, uVar13 <= uVar18))
    {
      uVar15 = uVar14;
      uVar19 = uVar18;
    }
    plVar1 = (longlong *)(uVar17 + 8);
    uVar17 = *plVar1 - 8;
    if (*plVar1 == 0) {
      uVar17 = uVar16;
    }
    uVar14 = uVar15;
    uVar18 = uVar19;
  } while (uVar20 < 3);
  if (uVar20 != 0) {
    cVar9 = FUN_1805f5cb0(uVar15,param_2);
    if (cVar9 != '\0') {
      return 1;
    }
    uVar17 = *param_1;
    while (uVar17 != 0) {
      if (uVar17 != uVar15) {
        lVar4 = *(longlong *)(uVar17 + 0x38);
        if (*(char *)(uVar17 + 0x48) == '\0') {
          if ((ulonglong)((*(longlong *)(uVar17 + 0x30) - lVar4) - *(longlong *)(uVar17 + 0x20)) <
              0x8000000000000001) goto LAB_1805f5362;
          LOCK();
          plVar1 = (longlong *)(uVar17 + 0x30);
          lVar11 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if ((ulonglong)((lVar11 - *(longlong *)(uVar17 + 0x20)) - lVar4) < 0x8000000000000001)
          goto LAB_1805f5357;
          LOCK();
          puVar2 = (ulonglong *)(uVar17 + 0x28);
          uVar14 = *puVar2;
          *puVar2 = *puVar2 + 1;
          UNLOCK();
          plVar1 = *(longlong **)(uVar17 + 0x60);
          lVar11 = *(longlong *)
                    (plVar1[3] +
                    (((uVar14 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >>
                     5) + plVar1[1] & *plVar1 - 1U) * 8);
          lVar12 = (ulonglong)((uint)uVar14 & 0x1f) * 0x1c;
          lVar4 = *(longlong *)(lVar11 + 8);
          puVar3 = (int32_t *)(lVar12 + lVar4);
          uVar5 = puVar3[1];
          uVar6 = puVar3[2];
          uVar7 = puVar3[3];
          *(int32_t *)param_2 = *puVar3;
          *(int32_t *)((longlong)param_2 + 4) = uVar5;
          *(int32_t *)(param_2 + 1) = uVar6;
          *(int32_t *)((longlong)param_2 + 0xc) = uVar7;
          param_2[2] = *(uint64_t *)(lVar12 + 0x10 + lVar4);
          *(int32_t *)(param_2 + 3) = *(int32_t *)(lVar12 + 0x18 + lVar4);
          LOCK();
          plVar1 = (longlong *)(lVar4 + 0x388);
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if (lVar4 == 0x1f) {
            *(uint64_t *)(lVar11 + 8) = 0;
            func_0x0001805f5a70(*(uint64_t *)(uVar17 + 0x50));
          }
          bVar10 = true;
        }
        else {
          if (0x8000000000000000 <
              (ulonglong)((*(longlong *)(uVar17 + 0x30) - lVar4) - *(longlong *)(uVar17 + 0x20))) {
            LOCK();
            plVar1 = (longlong *)(uVar17 + 0x30);
            lVar11 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            if (0x8000000000000000 < (ulonglong)((lVar11 - *(longlong *)(uVar17 + 0x20)) - lVar4)) {
              LOCK();
              puVar2 = (ulonglong *)(uVar17 + 0x28);
              uVar14 = *puVar2;
              *puVar2 = *puVar2 + 1;
              UNLOCK();
              plVar1 = *(longlong **)(uVar17 + 0x58);
              uVar18 = (ulonglong)((uint)uVar14 & 0x1f);
              lVar11 = uVar18 * 0x1c;
              lVar4 = *(longlong *)
                       (plVar1[2] + 8 +
                       (((uVar14 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10)
                        >> 5) + plVar1[1] & *plVar1 - 1U) * 0x10);
              uVar8 = ((uint64_t *)(lVar11 + lVar4))[1];
              *param_2 = *(uint64_t *)(lVar11 + lVar4);
              param_2[1] = uVar8;
              param_2[2] = *(uint64_t *)(lVar11 + 0x10 + lVar4);
              *(int32_t *)(param_2 + 3) = *(int32_t *)(lVar11 + 0x18 + lVar4);
              *(int8_t *)((lVar4 - uVar18) + 0x3af) = 1;
              bVar10 = true;
              goto LAB_1805f5364;
            }
LAB_1805f5357:
            LOCK();
            *(longlong *)(uVar17 + 0x38) = *(longlong *)(uVar17 + 0x38) + 1;
            UNLOCK();
          }
LAB_1805f5362:
          bVar10 = false;
        }
LAB_1805f5364:
        if (bVar10) {
          return 1;
        }
      }
      plVar1 = (longlong *)(uVar17 + 8);
      uVar17 = *plVar1 - 8;
      if (*plVar1 == 0) {
        uVar17 = uVar16;
      }
    }
  }
  return 0;
}



ulonglong FUN_1805f53b0(uint64_t param_1,uint64_t *param_2)

{
  int32_t uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint64_t *puVar7;
  ulonglong *puVar8;
  
  lVar5 = FUN_1805f5690();
  if (lVar5 == 0) {
    return 0;
  }
  uVar2 = *(ulonglong *)(lVar5 + 0x20);
  if ((uVar2 & 0x1f) == 0) {
    uVar6 = (*(longlong *)(lVar5 + 0x28) - uVar2) - 0x20;
    if ((0x8000000000000000 < uVar6) &&
       (plVar3 = *(longlong **)(lVar5 + 0x60), plVar3 != (longlong *)0x0)) {
      uVar6 = *plVar3 - 1U & plVar3[1] + 1U;
      puVar8 = *(ulonglong **)(plVar3[3] + uVar6 * 8);
      if ((*puVar8 == 1) || (puVar8[1] == 0)) {
        *puVar8 = uVar2;
        plVar3[1] = uVar6;
      }
      else {
        uVar6 = FUN_18005f430(lVar5);
        if ((char)uVar6 == '\0') goto LAB_1805f54b3;
        plVar3 = *(longlong **)(lVar5 + 0x60);
        uVar6 = *plVar3 - 1U & plVar3[1] + 1U;
        puVar8 = *(ulonglong **)(plVar3[3] + uVar6 * 8);
        *puVar8 = uVar2;
        plVar3[1] = uVar6;
      }
      uVar6 = FUN_1805f5e60(*(uint64_t *)(lVar5 + 0x50));
      if (uVar6 != 0) {
        *(uint64_t *)(uVar6 + 0x388) = 0;
        puVar8[1] = uVar6;
        *(ulonglong *)(lVar5 + 0x40) = uVar6;
        goto LAB_1805f54ca;
      }
      plVar3 = *(longlong **)(lVar5 + 0x60);
      uVar6 = plVar3[1] - 1;
      plVar3[1] = *plVar3 - 1U & uVar6;
      puVar8[1] = 0;
    }
LAB_1805f54b3:
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  else {
LAB_1805f54ca:
    uVar4 = param_2[1];
    puVar7 = (uint64_t *)((ulonglong)((uint)uVar2 & 0x1f) * 0x1c + *(longlong *)(lVar5 + 0x40));
    *puVar7 = *param_2;
    puVar7[1] = uVar4;
    puVar7[2] = param_2[2];
    uVar1 = *(int32_t *)(param_2 + 3);
    *(int32_t *)(puVar7 + 3) = uVar1;
    *(ulonglong *)(lVar5 + 0x20) = uVar2 + 1;
    uVar6 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar6;
}






// 函数: void FUN_1805f5510(uint64_t *param_1)
void FUN_1805f5510(uint64_t *param_1)

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
  
  *param_1 = &unknown_var_5464_ptr;
  uVar3 = param_1[4];
  lVar9 = 0;
  uVar4 = param_1[5];
  for (uVar10 = uVar4; uVar10 != uVar3; uVar10 = uVar10 + 1) {
    if ((uVar10 & 0x1f) == 0) {
      if (lVar9 != 0) {
        lVar6 = param_1[10];
        LOCK();
        piVar1 = (int *)(lVar9 + 0x3b0);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -0x80000000;
        UNLOCK();
        if (iVar2 == 0) {
          lVar8 = *(longlong *)(lVar6 + 0x28);
          do {
            *(longlong *)(lVar9 + 0x3b8) = lVar8;
            *(int32_t *)(lVar9 + 0x3b0) = 1;
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
            piVar1 = (int *)(lVar9 + 0x3b0);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 0x7fffffff;
            UNLOCK();
            lVar8 = lVar7;
          } while (iVar2 == 1);
        }
      }
LAB_1805f55b2:
      plVar5 = (longlong *)param_1[0xc];
      lVar9 = *(longlong *)
               (*(longlong *)
                 (plVar5[3] +
                 (plVar5[1] +
                  ((uVar10 & 0xffffffffffffffe0) - **(longlong **)(plVar5[3] + plVar5[1] * 8) >> 5)
                 & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_1805f55b2;
  }
  lVar9 = param_1[8];
  if ((lVar9 != 0) && ((uVar4 != uVar3 || ((uVar3 & 0x1f) != 0)))) {
    lVar6 = param_1[10];
    LOCK();
    piVar1 = (int *)(lVar9 + 0x3b0);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x80000000;
    UNLOCK();
    if (iVar2 == 0) {
      lVar8 = *(longlong *)(lVar6 + 0x28);
      do {
        *(longlong *)(lVar9 + 0x3b8) = lVar8;
        *(int32_t *)(lVar9 + 0x3b0) = 1;
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
        piVar1 = (int *)(lVar9 + 0x3b0);
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
  *param_1 = &unknown_var_5880_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1805f5690(longlong *param_1)

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
      if (bVar16) goto LAB_1805f599b;
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
    *puVar8 = &unknown_var_5880_ptr;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(int8_t *)(puVar8 + 9) = 0;
    puVar8[10] = param_1;
    *puVar8 = &unknown_var_5464_ptr;
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
LAB_1805f599b:
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



uint64_t FUN_1805f5a30(uint64_t param_1,ulonglong param_2)

{
  FUN_1805f5510();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805f5ac0(longlong *param_1,uint64_t *param_2)
void FUN_1805f5ac0(longlong *param_1,uint64_t *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint64_t uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  puVar5 = (uint64_t *)param_1[6];
  if ((longlong)puVar5 + 0x1c != param_1[8]) {
    param_1[6] = (longlong)puVar5 + 0x1c;
    uVar3 = param_2[1];
    *puVar5 = *param_2;
    puVar5[1] = uVar3;
    puVar5[2] = param_2[2];
    *(int32_t *)(puVar5 + 3) = *(int32_t *)(param_2 + 3);
    return;
  }
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar3 = param_2[2];
  uVar4 = *(int32_t *)(param_2 + 3);
  if (lVar11 <= (param_1[9] - lVar10 >> 3) + 1) {
    lVar6 = param_1[5];
    lVar14 = param_1[9] - lVar6 >> 3;
    uVar13 = lVar6 - lVar10 >> 3;
    lVar2 = lVar14 * 8 + 8;
    if (uVar13 != 0) {
      uVar9 = uVar13 >> 1;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
                    // WARNING: Subroutine does not return
      memmove(lVar10 + (uVar13 - uVar9) * 8,lVar6,lVar2);
    }
    lVar10 = lVar11;
    if (lVar11 == 0) {
      lVar10 = 1;
    }
    lVar10 = lVar11 + 2 + lVar10;
    lVar11 = FUN_18062b420(system_memory_pool_ptr,lVar10 * 8,(char)param_1[10]);
    plVar1 = (longlong *)(lVar11 + (param_1[5] - *param_1 >> 3) * 8);
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(plVar1,param_1[5],lVar2);
    }
    *param_1 = lVar11;
    param_1[1] = lVar10;
    param_1[5] = (longlong)plVar1;
    lVar10 = *plVar1;
    param_1[3] = lVar10;
    param_1[4] = lVar10 + 0xe0;
    param_1[9] = (longlong)(plVar1 + lVar14);
    lVar10 = plVar1[lVar14];
    param_1[7] = lVar10;
    param_1[8] = lVar10 + 0xe0;
  }
  uVar12 = FUN_18062b420(system_memory_pool_ptr,0xe0,(char)param_1[10]);
  *(uint64_t *)(param_1[9] + 8) = uVar12;
  puVar5 = (uint64_t *)param_1[6];
  *puVar5 = uVar7;
  puVar5[1] = uVar8;
  puVar5[2] = uVar3;
  *(int32_t *)(puVar5 + 3) = uVar4;
  lVar10 = param_1[9];
  param_1[9] = lVar10 + 8;
  lVar10 = *(longlong *)(lVar10 + 8);
  param_1[7] = lVar10;
  param_1[8] = lVar10 + 0xe0;
  param_1[6] = lVar10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805f5b3b(uint64_t param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_1805f5b3b(uint64_t param_1,longlong param_2,longlong param_3,longlong param_4,
                  uint64_t param_5)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  longlong *unaff_RBX;
  longlong in_R10;
  int32_t unaff_R15D;
  uint64_t uStackX_20;
  uint64_t in_stack_00000050;
  
  uVar8 = param_4 - param_3 >> 3;
  lVar2 = (param_2 >> 3) * 8 + 8;
  if (uVar8 != 0) {
    uVar4 = uVar8 >> 1;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
                    // WARNING: Subroutine does not return
    memmove(param_3 + (uVar8 - uVar4) * 8,param_4,lVar2);
  }
  lVar5 = in_R10;
  if (in_R10 == 0) {
    lVar5 = 1;
  }
  lVar5 = in_R10 + 2 + lVar5;
  lVar6 = FUN_18062b420(system_memory_pool_ptr,lVar5 * 8,(char)unaff_RBX[10]);
  plVar1 = (longlong *)(lVar6 + (unaff_RBX[5] - *unaff_RBX >> 3) * 8);
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memcpy(plVar1,unaff_RBX[5],lVar2);
  }
  *unaff_RBX = lVar6;
  unaff_RBX[1] = lVar5;
  unaff_RBX[5] = (longlong)plVar1;
  lVar2 = *plVar1;
  unaff_RBX[3] = lVar2;
  unaff_RBX[4] = lVar2 + 0xe0;
  unaff_RBX[9] = (longlong)(plVar1 + (param_2 >> 3));
  lVar2 = plVar1[param_2 >> 3];
  unaff_RBX[7] = lVar2;
  unaff_RBX[8] = lVar2 + 0xe0;
  uVar7 = FUN_18062b420(system_memory_pool_ptr,0xe0,(char)unaff_RBX[10]);
  *(uint64_t *)(unaff_RBX[9] + 8) = uVar7;
  puVar3 = (uint64_t *)unaff_RBX[6];
  *puVar3 = uStackX_20;
  puVar3[1] = param_5;
  puVar3[2] = in_stack_00000050;
  *(int32_t *)(puVar3 + 3) = unaff_R15D;
  lVar2 = unaff_RBX[9];
  unaff_RBX[9] = lVar2 + 8;
  lVar2 = *(longlong *)(lVar2 + 8);
  unaff_RBX[7] = lVar2;
  unaff_RBX[8] = lVar2 + 0xe0;
  unaff_RBX[6] = lVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805f5b9b(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_1805f5b9b(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  uint64_t *puVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong *unaff_RBX;
  longlong lVar5;
  longlong unaff_RSI;
  longlong in_R10;
  int32_t unaff_R15D;
  bool in_CF;
  uint64_t uStackX_20;
  uint64_t in_stack_00000050;
  
  if (in_CF) {
    in_RAX = param_2;
  }
  lVar5 = in_R10 + 2 + in_RAX;
  lVar2 = FUN_18062b420(param_1,lVar5 * 8);
  plVar3 = (longlong *)(lVar2 + (unaff_RBX[5] - *unaff_RBX >> 3) * 8);
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memcpy(plVar3);
  }
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar5;
  unaff_RBX[5] = (longlong)plVar3;
  lVar2 = *plVar3;
  unaff_RBX[3] = lVar2;
  unaff_RBX[4] = lVar2 + 0xe0;
  plVar3 = (longlong *)(unaff_RSI + -8 + (longlong)plVar3);
  unaff_RBX[9] = (longlong)plVar3;
  lVar2 = *plVar3;
  unaff_RBX[7] = lVar2;
  unaff_RBX[8] = lVar2 + 0xe0;
  uVar4 = FUN_18062b420(system_memory_pool_ptr,0xe0,(char)unaff_RBX[10]);
  *(uint64_t *)(unaff_RBX[9] + 8) = uVar4;
  puVar1 = (uint64_t *)unaff_RBX[6];
  *puVar1 = uStackX_20;
  puVar1[1] = param_5;
  puVar1[2] = in_stack_00000050;
  *(int32_t *)(puVar1 + 3) = unaff_R15D;
  lVar2 = unaff_RBX[9];
  unaff_RBX[9] = lVar2 + 8;
  lVar2 = *(longlong *)(lVar2 + 8);
  unaff_RBX[7] = lVar2;
  unaff_RBX[8] = lVar2 + 0xe0;
  unaff_RBX[6] = lVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805f5c06(void)
void FUN_1805f5c06(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int32_t unaff_R15D;
  uint64_t uStackX_20;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000050;
  
  *(longlong **)(unaff_RBX + 0x28) = unaff_RDI;
  lVar1 = *unaff_RDI;
  *(longlong *)(unaff_RBX + 0x18) = lVar1;
  *(longlong *)(unaff_RBX + 0x20) = lVar1 + 0xe0;
  plVar3 = (longlong *)(unaff_RSI + -8 + (longlong)unaff_RDI);
  *(longlong **)(unaff_RBX + 0x48) = plVar3;
  lVar1 = *plVar3;
  *(longlong *)(unaff_RBX + 0x38) = lVar1;
  *(longlong *)(unaff_RBX + 0x40) = lVar1 + 0xe0;
  uVar4 = FUN_18062b420(system_memory_pool_ptr,0xe0,*(int8_t *)(unaff_RBX + 0x50));
  *(uint64_t *)(*(longlong *)(unaff_RBX + 0x48) + 8) = uVar4;
  puVar2 = *(uint64_t **)(unaff_RBX + 0x30);
  *puVar2 = uStackX_20;
  puVar2[1] = in_stack_00000028;
  puVar2[2] = in_stack_00000050;
  *(int32_t *)(puVar2 + 3) = unaff_R15D;
  plVar3 = (longlong *)(*(longlong *)(unaff_RBX + 0x48) + 8);
  *(longlong **)(unaff_RBX + 0x48) = plVar3;
  lVar1 = *plVar3;
  *(longlong *)(unaff_RBX + 0x38) = lVar1;
  *(longlong *)(unaff_RBX + 0x40) = lVar1 + 0xe0;
  *(longlong *)(unaff_RBX + 0x30) = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part031.c - 4 个函数

// 函数: void FUN_18005f54c(void)
void FUN_18005f54c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18005f570(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  uint *puVar1;
  int32_t *puVar2;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int32_t *puVar21;
  int32_t *puVar22;
  int64_t lVar23;
  int64_t lVar24;
  uint64_t uVar25;
  bool bVar26;
  uint64_t uStack_78;
  uint64_t uStack_68;
  
  uVar25 = *(uint64_t *)(param_1 + 0x20);
  uVar13 = *(uint64_t *)(param_1 + 0x40);
  uVar16 = *(uint64_t *)(param_1 + 0x70);
  uVar12 = *(uint64_t *)(param_1 + 0x60);
  uVar18 = 0;
  uVar19 = param_3 + uVar25;
  uStack_78 = uVar25 - 1 & 0xffffffffffffffe0;
  lVar24 = (uVar19 - 1 & 0xffffffffffffffe0) - uStack_78;
  uVar10 = uVar18;
  uVar20 = uVar18;
  uVar15 = uVar13;
  if (lVar24 != 0) {
    do {
      uStack_68 = uVar16;
      uVar20 = uVar10;
      if ((*(int64_t *)(param_1 + 0x40) == 0) ||
         (uVar15 = *(uint64_t *)(*(int64_t *)(param_1 + 0x40) + 0x100), uVar14 = uVar18,
         uVar15 == uVar10)) goto joined_r0x00018005f6ef;
      do {
        if (*(char *)(uVar15 + 0x110 + uVar14) == '\0') goto joined_r0x00018005f6ef;
        uVar14 = uVar14 + 1;
      } while (uVar14 < 0x20);
      uStack_78 = uStack_78 + 0x20;
      uVar20 = *(uint64_t *)(*(int64_t *)(param_1 + 0x40) + 0x100);
      *(uint64_t *)(param_1 + 0x40) = uVar20;
      puVar17 = (uint64_t *)
                (*(int64_t *)(*(int64_t *)(param_1 + 0x58) + 0x10) +
                *(int64_t *)(param_1 + 0x70) * 0x10);
      *puVar17 = uStack_78;
      puVar17[1] = *(uint64_t *)(param_1 + 0x40);
      *(uint64_t *)(param_1 + 0x70) =
           *(int64_t *)(param_1 + 0x68) - 1U & *(int64_t *)(param_1 + 0x70) + 1U;
      if (uVar10 != 0) {
        uVar20 = uVar10;
      }
      lVar24 = lVar24 + -0x20;
      uVar10 = uVar20;
    } while (lVar24 != 0);
LAB_18005f6a2:
    lVar24 = 0;
    uVar16 = uVar20;
    while( true ) {
      do {
        *(int8_t *)(uVar16 + 0x110 + lVar24) = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 != 0x20);
      uVar15 = *(uint64_t *)(param_1 + 0x40);
      if (uVar16 == uVar15) break;
      uVar16 = *(uint64_t *)(uVar16 + 0x100);
      lVar24 = 0;
    }
  }
  *(uint64_t *)(param_1 + 0x40) = uVar13;
  if ((uVar25 & 0x1f) == 0) {
    if (uVar20 != 0) {
      uVar13 = uVar20;
    }
    *(uint64_t *)(param_1 + 0x40) = uVar13;
  }
  while( true ) {
    uVar16 = (uVar25 & 0xffffffffffffffe0) + 0x20;
    uVar13 = uVar19;
    if (uVar19 - uVar16 < 0x8000000000000001) {
      uVar13 = uVar16;
    }
    for (; uVar25 != uVar13; uVar25 = uVar25 + 1) {
      plVar5 = (int64_t *)*param_2;
      *(int64_t **)(*(int64_t *)(param_1 + 0x40) + (uint64_t)((uint)uVar25 & 0x1f) * 8) = plVar5;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))();
      }
      param_2 = param_2 + 1;
    }
    uVar13 = *(uint64_t *)(param_1 + 0x40);
    if (uVar13 == uVar15) break;
    *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(uVar13 + 0x100);
  }
  if (uVar20 != 0) {
    uVar13 = *(int64_t *)(param_1 + 0x68) - 1;
    *(uint64_t *)(*(int64_t *)(param_1 + 0x58) + 8) = *(int64_t *)(param_1 + 0x70) - 1U & uVar13;
  }
  *(uint64_t *)(param_1 + 0x20) = uVar19;
  return CONCAT71((int7)(uVar13 >> 8),1);
joined_r0x00018005f6ef:
  if (lVar24 == 0) goto LAB_18005f6a2;
  lVar24 = lVar24 + -0x20;
  uStack_78 = uStack_78 + 0x20;
  uVar15 = (*(int64_t *)(param_1 + 0x28) - uStack_78) - 0x20;
  plVar5 = (int64_t *)(param_1 + 0x68);
  if ((*(int64_t *)(param_1 + 0x80) == 0) || (*(int64_t *)(param_1 + 0x60) == *plVar5)) {
    if (0x8000000000000000 < uVar15) {
      lVar11 = *plVar5;
      *plVar5 = lVar11 * 2;
      plVar9 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar11 * 0x20 + 0x27,10);
      if (plVar9 != (int64_t *)0x0) {
        puVar22 = (int32_t *)((uint64_t)(-(int)(plVar9 + 4) & 7) + (int64_t)(plVar9 + 4));
        lVar23 = 0;
        if (*(int64_t *)(param_1 + 0x60) != 0) {
          uVar16 = *(int64_t *)(param_1 + 0x70) - *(int64_t *)(param_1 + 0x60) & lVar11 - 1U;
          puVar21 = puVar22;
          do {
            puVar2 = (int32_t *)(*(int64_t *)(param_1 + 0x78) + uVar16 * 0x10);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            *puVar21 = *puVar2;
            puVar21[1] = uVar6;
            puVar21[2] = uVar7;
            puVar21[3] = uVar8;
            lVar23 = lVar23 + 1;
            puVar21 = puVar21 + 4;
            uVar16 = uVar16 + 1 & lVar11 - 1U;
          } while (uVar16 != *(uint64_t *)(param_1 + 0x70));
        }
        *plVar9 = *plVar5;
        plVar9[1] = uVar12 - 1;
        plVar9[2] = (int64_t)puVar22;
        plVar9[3] = *(int64_t *)(param_1 + 0x80);
        *(int64_t *)(param_1 + 0x70) = lVar23;
        *(int32_t **)(param_1 + 0x78) = puVar22;
        *(int64_t **)(param_1 + 0x80) = plVar9;
        *(int64_t **)(param_1 + 0x58) = plVar9;
        uVar16 = uVar12;
        uStack_68 = uVar12;
        goto LAB_18005f818;
      }
      *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0x68) >> 1;
      uVar16 = uStack_68;
    }
LAB_18005fa1c:
    *(uint64_t *)(param_1 + 0x70) = uVar16;
    *(uint64_t *)(param_1 + 0x60) = uVar12;
    if (uVar13 == 0) {
      uVar13 = uVar20;
    }
    *(uint64_t *)(param_1 + 0x40) = uVar13;
LAB_18005fa01:
    return uVar12 & 0xffffffffffffff00;
  }
  if (uVar15 < 0x8000000000000001) goto LAB_18005fa1c;
LAB_18005f818:
  lVar11 = *(int64_t *)(param_1 + 0x50);
  if (*(uint64_t *)(lVar11 + 0x20) <= *(uint64_t *)(lVar11 + 0x10)) {
LAB_18005f848:
    uVar10 = *(uint64_t *)(lVar11 + 0x28);
LAB_18005f84c:
    uVar15 = uVar10;
    if (uVar15 != 0) {
      puVar1 = (uint *)(uVar15 + 0x130);
      uVar4 = *puVar1;
      if ((uVar4 & 0x7fffffff) == 0) {
LAB_18005f8c7:
        uVar10 = *(uint64_t *)(lVar11 + 0x28);
      }
      else {
        LOCK();
        uVar3 = *puVar1;
        if (uVar4 == uVar3) {
          *puVar1 = uVar4 + 1;
        }
        UNLOCK();
        if (uVar4 != uVar3) goto LAB_18005f8c7;
        LOCK();
        uVar10 = *(uint64_t *)(lVar11 + 0x28);
        bVar26 = uVar15 == uVar10;
        if (bVar26) {
          *(uint64_t *)(lVar11 + 0x28) = *(uint64_t *)(uVar15 + 0x138);
          uVar10 = uVar15;
        }
        UNLOCK();
        if (bVar26) {
          LOCK();
          *puVar1 = *puVar1 - 2;
          UNLOCK();
          if (uVar15 != 0) goto LAB_18005f92b;
          goto LAB_18005f8e3;
        }
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar4 == 0x80000001) {
          uVar18 = *(uint64_t *)(lVar11 + 0x28);
          do {
            *(uint64_t *)(uVar15 + 0x138) = uVar18;
            *puVar1 = 1;
            LOCK();
            uVar14 = *(uint64_t *)(lVar11 + 0x28);
            bVar26 = uVar18 == uVar14;
            if (bVar26) {
              *(uint64_t *)(lVar11 + 0x28) = uVar15;
              uVar14 = uVar18;
            }
            UNLOCK();
            if (bVar26) break;
            LOCK();
            uVar4 = *puVar1;
            *puVar1 = *puVar1 + 0x7fffffff;
            UNLOCK();
            uVar18 = uVar14;
          } while (uVar4 == 1);
        }
      }
      goto LAB_18005f84c;
    }
LAB_18005f8e3:
    uVar15 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x148,CONCAT71((int7)(uVar15 >> 8),10));
    if (uVar15 != 0) {
      *(uint64_t *)(uVar15 + 0x100) = 0;
      *(uint64_t *)(uVar15 + 0x108) = 0;
      *(int32_t *)(uVar15 + 0x130) = 0;
      *(uint64_t *)(uVar15 + 0x138) = 0;
      *(int16_t *)(uVar15 + 0x140) = 0x100;
      goto LAB_18005f92b;
    }
LAB_18005f9e1:
    *(uint64_t *)(param_1 + 0x70) = uVar16;
    *(uint64_t *)(param_1 + 0x60) = uVar12;
    uVar12 = uVar13;
    if (uVar13 == 0) {
      uVar12 = uVar20;
    }
    *(uint64_t *)(param_1 + 0x40) = uVar12;
    goto LAB_18005fa01;
  }
  LOCK();
  puVar17 = (uint64_t *)(lVar11 + 0x10);
  uVar15 = *puVar17;
  *puVar17 = *puVar17 + 1;
  UNLOCK();
  if ((*(uint64_t *)(lVar11 + 0x20) <= uVar15) ||
     (uVar15 = uVar15 * 0x148 + *(int64_t *)(lVar11 + 0x18), uVar15 == 0)) goto LAB_18005f848;
LAB_18005f92b:
  lVar11 = 0;
  if (uVar15 == 0) goto LAB_18005f9e1;
  do {
    *(int8_t *)(uVar15 + 0x110 + lVar11) = 1;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x20);
  if (*(int64_t *)(param_1 + 0x40) == 0) {
    *(uint64_t *)(uVar15 + 0x100) = uVar15;
  }
  else {
    *(uint64_t *)(uVar15 + 0x100) = *(uint64_t *)(*(int64_t *)(param_1 + 0x40) + 0x100);
    *(uint64_t *)(*(int64_t *)(param_1 + 0x40) + 0x100) = uVar15;
  }
  *(uint64_t *)(param_1 + 0x40) = uVar15;
  if (uVar20 != 0) {
    uVar15 = uVar20;
  }
  *(int64_t *)(param_1 + 0x60) = *(int64_t *)(param_1 + 0x60) + 1;
  puVar17 = (uint64_t *)
            (*(int64_t *)(*(int64_t *)(param_1 + 0x58) + 0x10) +
            *(int64_t *)(param_1 + 0x70) * 0x10);
  *puVar17 = uStack_78;
  puVar17[1] = *(uint64_t *)(param_1 + 0x40);
  *(uint64_t *)(param_1 + 0x70) = *(int64_t *)(param_1 + 0x70) + 1U & *plVar5 - 1U;
  uVar20 = uVar15;
  goto joined_r0x00018005f6ef;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18005fb30(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  char cVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  bool bVar21;
  
  uVar16 = *(uint64_t *)(param_1 + 0x20);
  uVar17 = *(uint64_t *)(param_1 + 0x40);
  uVar13 = uVar16 + param_3;
  uVar18 = uVar16 - 1 & 0xffffffffffffffe0;
  lVar19 = (uVar13 - 1 & 0xffffffffffffffe0) - uVar18;
  uVar14 = uVar17;
  uVar10 = uVar18;
  uVar7 = 0;
  while( true ) {
    if (lVar19 == 0) {
      *(uint64_t *)(param_1 + 0x40) = uVar17;
      if ((uVar16 & 0x1f) == 0) {
        if (uVar7 != 0) {
          uVar17 = uVar7;
        }
        *(uint64_t *)(param_1 + 0x40) = uVar17;
      }
      while( true ) {
        uVar10 = (uVar16 & 0xffffffffffffffe0) + 0x20;
        uVar17 = uVar13;
        if (uVar13 - uVar10 < 0x8000000000000001) {
          uVar17 = uVar10;
        }
        for (; uVar16 != uVar17; uVar16 = uVar16 + 1) {
          plVar5 = (int64_t *)*param_2;
          *(int64_t **)(*(int64_t *)(param_1 + 0x40) + (uint64_t)((uint)uVar16 & 0x1f) * 8) =
               plVar5;
          if (plVar5 != (int64_t *)0x0) {
            (**(code **)(*plVar5 + 0x28))();
          }
          param_2 = param_2 + 1;
        }
        uVar17 = *(uint64_t *)(param_1 + 0x40);
        if (uVar17 == uVar14) break;
        *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(uVar17 + 0x100);
      }
      *(uint64_t *)(param_1 + 0x20) = uVar13;
      return CONCAT71((int7)(uVar17 >> 8),1);
    }
    lVar19 = lVar19 + -0x20;
    uVar10 = uVar10 + 0x20;
    uVar8 = uVar7;
    if (((*(int64_t *)(param_1 + 0x28) - uVar10) - 0x20 < 0x8000000000000001) ||
       (plVar5 = *(int64_t **)(param_1 + 0x60), plVar5 == (int64_t *)0x0))
    goto joined_r0x00018005fdcd;
    uVar14 = *plVar5 - 1U & plVar5[1] + 1U;
    puVar20 = *(uint64_t **)(plVar5[3] + uVar14 * 8);
    if ((*puVar20 == 1) || (puVar20[1] == 0)) {
      *puVar20 = uVar10;
      plVar5[1] = uVar14;
    }
    else {
      cVar9 = FUN_18005f430(param_1);
      if (cVar9 == '\0') goto joined_r0x00018005fdcd;
      plVar5 = *(int64_t **)(param_1 + 0x60);
      uVar14 = *plVar5 - 1U & plVar5[1] + 1U;
      puVar20 = *(uint64_t **)(plVar5[3] + uVar14 * 8);
      *puVar20 = uVar10;
      plVar5[1] = uVar14;
    }
    lVar6 = *(int64_t *)(param_1 + 0x50);
    if (*(uint64_t *)(lVar6 + 0x20) <= *(uint64_t *)(lVar6 + 0x10)) break;
    LOCK();
    puVar1 = (uint64_t *)(lVar6 + 0x10);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((*(uint64_t *)(lVar6 + 0x20) <= uVar14) ||
       (uVar14 = uVar14 * 0x148 + *(int64_t *)(lVar6 + 0x18), uVar14 == 0)) break;
LAB_18005fd51:
    if (uVar14 == 0) goto LAB_18005fda6;
LAB_18005fd56:
    *(uint64_t *)(uVar14 + 0x108) = 0;
    *(uint64_t *)(uVar14 + 0x100) = 0;
    puVar20[1] = uVar14;
    if (((uVar16 & 0x1f) != 0) || (uVar7 != 0)) {
      *(uint64_t *)(*(int64_t *)(param_1 + 0x40) + 0x100) = uVar14;
    }
    *(uint64_t *)(param_1 + 0x40) = uVar14;
    if (uVar7 == 0) {
      uVar7 = uVar14;
    }
  }
  uVar11 = *(uint64_t *)(lVar6 + 0x28);
LAB_18005fc81:
  uVar14 = uVar11;
  if (uVar14 != 0) {
    puVar2 = (uint *)(uVar14 + 0x130);
    uVar4 = *puVar2;
    if ((uVar4 & 0x7fffffff) == 0) {
LAB_18005fcf9:
      uVar11 = *(uint64_t *)(lVar6 + 0x28);
    }
    else {
      LOCK();
      uVar3 = *puVar2;
      if (uVar4 == uVar3) {
        *puVar2 = uVar4 + 1;
      }
      UNLOCK();
      if (uVar4 != uVar3) goto LAB_18005fcf9;
      LOCK();
      uVar11 = *(uint64_t *)(lVar6 + 0x28);
      bVar21 = uVar14 == uVar11;
      if (bVar21) {
        *(uint64_t *)(lVar6 + 0x28) = *(uint64_t *)(uVar14 + 0x138);
        uVar11 = uVar14;
      }
      UNLOCK();
      if (bVar21) {
        LOCK();
        *puVar2 = *puVar2 - 2;
        UNLOCK();
        if (uVar14 != 0) goto LAB_18005fd56;
        goto LAB_18005fd0d;
      }
      LOCK();
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar4 == 0x80000001) {
        uVar15 = *(uint64_t *)(lVar6 + 0x28);
        do {
          *(uint64_t *)(uVar14 + 0x138) = uVar15;
          *puVar2 = 1;
          LOCK();
          uVar12 = *(uint64_t *)(lVar6 + 0x28);
          bVar21 = uVar15 == uVar12;
          if (bVar21) {
            *(uint64_t *)(lVar6 + 0x28) = uVar14;
            uVar12 = uVar15;
          }
          UNLOCK();
          if (bVar21) break;
          LOCK();
          uVar4 = *puVar2;
          *puVar2 = *puVar2 + 0x7fffffff;
          UNLOCK();
          uVar15 = uVar12;
        } while (uVar4 == 1);
      }
    }
    goto LAB_18005fc81;
  }
LAB_18005fd0d:
  uVar14 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x148,CONCAT71((int7)((uint64_t)lVar6 >> 8),10));
  if (uVar14 != 0) {
    *(uint64_t *)(uVar14 + 0x100) = 0;
    *(uint64_t *)(uVar14 + 0x108) = 0;
    *(int32_t *)(uVar14 + 0x130) = 0;
    *(uint64_t *)(uVar14 + 0x138) = 0;
    *(int16_t *)(uVar14 + 0x140) = 0x100;
    goto LAB_18005fd51;
  }
LAB_18005fda6:
  plVar5 = *(int64_t **)(param_1 + 0x60);
  plVar5[1] = plVar5[1] - 1U & *plVar5 - 1U;
  puVar20[1] = 0;
joined_r0x00018005fdcd:
  for (; uVar8 != 0; uVar8 = *(uint64_t *)(uVar8 + 0x100)) {
    uVar18 = uVar18 + 0x20;
    plVar5 = *(int64_t **)(param_1 + 0x60);
    *(uint64_t *)
     (*(int64_t *)
       (plVar5[3] +
       ((uVar18 - **(int64_t **)(plVar5[3] + plVar5[1] * 8) >> 5) + plVar5[1] & *plVar5 - 1U) * 8)
     + 8) = 0;
    plVar5 = *(int64_t **)(param_1 + 0x60);
    plVar5[1] = plVar5[1] - 1U & *plVar5 - 1U;
  }
  uVar13 = func_0x000180060150(*(uint64_t *)(param_1 + 0x50),uVar7);
  *(uint64_t *)(param_1 + 0x40) = uVar17;
  return uVar13 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18005ff50(int64_t param_1)

{
  uint64_t *puVar1;
  uint *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  
  if (*(uint64_t *)(param_1 + 0x10) < *(uint64_t *)(param_1 + 0x20)) {
    LOCK();
    puVar1 = (uint64_t *)(param_1 + 0x10);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar4 < *(uint64_t *)(param_1 + 0x20)) &&
       (lVar6 = uVar4 * 0x148 + *(int64_t *)(param_1 + 0x18), lVar6 != 0)) {
      return lVar6;
    }
  }
  lVar6 = *(int64_t *)(param_1 + 0x28);
LAB_18005ff87:
  do {
    lVar9 = lVar6;
    if (lVar9 == 0) {
LAB_180060026:
      lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x148,10);
      if (lVar6 == 0) {
        return 0;
      }
      *(uint64_t *)(lVar6 + 0x100) = 0;
      *(uint64_t *)(lVar6 + 0x108) = 0;
      *(int32_t *)(lVar6 + 0x130) = 0;
      *(uint64_t *)(lVar6 + 0x138) = 0;
      *(int16_t *)(lVar6 + 0x140) = 0x100;
      return lVar6;
    }
    puVar2 = (uint *)(lVar9 + 0x130);
    uVar5 = *puVar2;
    if ((uVar5 & 0x7fffffff) == 0) {
LAB_180060007:
      lVar6 = *(int64_t *)(param_1 + 0x28);
      goto LAB_18005ff87;
    }
    LOCK();
    uVar3 = *puVar2;
    if (uVar5 == uVar3) {
      *puVar2 = uVar5 + 1;
    }
    UNLOCK();
    if (uVar5 != uVar3) goto LAB_180060007;
    LOCK();
    lVar6 = *(int64_t *)(param_1 + 0x28);
    bVar10 = lVar9 == lVar6;
    if (bVar10) {
      *(int64_t *)(param_1 + 0x28) = *(int64_t *)(lVar9 + 0x138);
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
      goto LAB_180060026;
    }
    LOCK();
    uVar5 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar5 == 0x80000001) {
      lVar8 = *(int64_t *)(param_1 + 0x28);
      do {
        *(int64_t *)(lVar9 + 0x138) = lVar8;
        *puVar2 = 1;
        LOCK();
        lVar7 = *(int64_t *)(param_1 + 0x28);
        bVar10 = lVar8 == lVar7;
        if (bVar10) {
          *(int64_t *)(param_1 + 0x28) = lVar9;
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



uint64_t FUN_180060080(int64_t param_1,int64_t *param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t in_RAX;
  uint64_t uVar5;
  
  plVar1 = *(int64_t **)(param_1 + 0x60);
  if (plVar1 != (int64_t *)0x0) {
    uVar5 = *plVar1 - 1U & plVar1[1] + 1U;
    plVar2 = *(int64_t **)(plVar1[3] + uVar5 * 8);
    *param_2 = (int64_t)plVar2;
    if ((*plVar2 == 1) || (*(int64_t *)(*param_2 + 8) == 0)) {
      puVar4 = (uint64_t *)*param_2;
      *puVar4 = param_3;
      plVar1[1] = uVar5;
      return CONCAT71((int7)((uint64_t)puVar4 >> 8),1);
    }
    in_RAX = FUN_18005f430();
    if ((char)in_RAX != '\0') {
      plVar1 = *(int64_t **)(param_1 + 0x60);
      uVar5 = *plVar1 - 1U & plVar1[1] + 1U;
      lVar3 = plVar1[3];
      puVar4 = *(uint64_t **)(lVar3 + uVar5 * 8);
      *param_2 = (int64_t)puVar4;
      *puVar4 = param_3;
      plVar1[1] = uVar5;
      return CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



uint64_t FUN_1800601c0(uint64_t param_1,uint64_t param_2)

{
  FUN_180060200();
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}





// 函数: void FUN_180060200(uint64_t *param_1)
void FUN_180060200(uint64_t *param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  bool bVar12;
  
  *param_1 = &processed_var_9008_ptr;
  if (param_1[8] != 0) {
    lVar11 = 0;
    if ((param_1[5] & 0x1f) != 0) {
      uVar10 = param_1[0xe] - param_1[0xc];
      uVar5 = param_1[0xd] - 1;
      while( true ) {
        uVar10 = uVar10 & uVar5;
        if ((uint64_t)((*(int64_t *)(param_1[0xf] + uVar10 * 0x10) + 0x20) - param_1[5]) <
            0x8000000000000001) break;
        uVar5 = uVar10 + 1;
        uVar10 = param_1[0xd] - 1;
      }
      lVar11 = *(int64_t *)(param_1[0xf] + 8 + uVar10 * 0x10);
    }
    lVar9 = param_1[8];
LAB_1800602a0:
    lVar9 = *(int64_t *)(lVar9 + 0x100);
    uVar5 = 0;
    do {
      if (*(char *)(lVar9 + 0x110 + uVar5) == '\0') {
        uVar5 = 0;
        if (lVar9 == lVar11) {
          uVar5 = (uint64_t)((uint)param_1[5] & 0x1f);
        }
        if ((param_1[4] & 0x1f) == 0) {
          uVar10 = 0x20;
        }
        else {
          uVar10 = (uint64_t)((uint)param_1[4] & 0x1f);
        }
        goto LAB_1800602f0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
    goto LAB_18006031a;
  }
LAB_18006039b:
  if (param_1[0x10] == 0) {
    *param_1 = &processed_var_9040_ptr;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
  while( true ) {
    uVar4 = (uint)uVar5;
    uVar5 = uVar5 + 1;
    plVar1 = *(int64_t **)(lVar9 + (uint64_t)(uVar4 & 0x1f) * 8);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (uVar5 == 0x20) break;
LAB_1800602f0:
    if ((lVar9 == param_1[8]) && (uVar5 == uVar10)) break;
  }
LAB_18006031a:
  lVar7 = param_1[8];
  if (lVar9 == lVar7) goto code_r0x000180060327;
  goto LAB_1800602a0;
code_r0x000180060327:
  if (lVar7 != 0) {
    do {
      lVar11 = *(int64_t *)(lVar7 + 0x100);
      if (*(char *)(lVar7 + 0x141) != '\0') {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lVar9 = param_1[10];
      LOCK();
      piVar2 = (int *)(lVar7 + 0x130);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -0x80000000;
      UNLOCK();
      if (iVar3 == 0) {
        lVar8 = *(int64_t *)(lVar9 + 0x28);
        do {
          *(int64_t *)(lVar7 + 0x138) = lVar8;
          *(int32_t *)(lVar7 + 0x130) = 1;
          plVar1 = (int64_t *)(lVar9 + 0x28);
          LOCK();
          lVar6 = *plVar1;
          bVar12 = lVar8 == lVar6;
          if (bVar12) {
            *plVar1 = lVar7;
            lVar6 = lVar8;
          }
          UNLOCK();
          if (bVar12) break;
          LOCK();
          piVar2 = (int *)(lVar7 + 0x130);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + 0x7fffffff;
          UNLOCK();
          lVar8 = lVar6;
        } while (iVar3 == 1);
      }
      lVar7 = lVar11;
    } while (lVar11 != param_1[8]);
  }
  goto LAB_18006039b;
}



uint64_t FUN_1800603e0(uint64_t param_1,uint64_t param_2)

{
  FUN_180060420();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}





// 函数: void FUN_180060420(uint64_t *param_1)
void FUN_180060420(uint64_t *param_1)

{
  int *piVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  bool bVar11;
  
  *param_1 = &processed_var_9024_ptr;
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
          lVar8 = *(int64_t *)(lVar6 + 0x28);
          do {
            *(int64_t *)(lVar9 + 0x138) = lVar8;
            *(int32_t *)(lVar9 + 0x130) = 1;
            plVar5 = (int64_t *)(lVar6 + 0x28);
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
LAB_1800604d1:
      plVar5 = (int64_t *)param_1[0xc];
      lVar9 = *(int64_t *)
               (*(int64_t *)
                 (plVar5[3] +
                 (((uVar10 & 0xffffffffffffffe0) - **(int64_t **)(plVar5[3] + plVar5[1] * 8) >> 5)
                  + plVar5[1] & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_1800604d1;
    plVar5 = *(int64_t **)(lVar9 + (uint64_t)((uint)uVar10 & 0x1f) * 8);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))();
    }
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
      lVar8 = *(int64_t *)(lVar6 + 0x28);
      do {
        *(int64_t *)(lVar9 + 0x138) = lVar8;
        *(int32_t *)(lVar9 + 0x130) = 1;
        plVar5 = (int64_t *)(lVar6 + 0x28);
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
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = &processed_var_9040_ptr;
  return;
}



uint64_t * FUN_1800605d0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &processed_var_9040_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}





// 函数: void FUN_180060610(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180060610(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &rendering_buffer_2392_ptr;
  cVar1 = FUN_18020eba0(param_1,1,param_3,param_4,0xfffffffffffffffe);
  while (cVar1 != '\0') {
    cVar1 = FUN_18020eba0(param_1,1,param_3,param_4,uVar2);
  }
  if (param_1[1] == 0) {
    param_1[1] = 0;
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ(param_1 + 0x2a);
    _Mtx_destroy_in_situ();
    FUN_18020f530();
    if (param_1[0xe] != 0) {
      *(uint64_t *)(param_1[0xe] + 0x10) = 0;
      *(int8_t *)(param_1[0xe] + 8) = 1;
    }
    param_1[2] = &system_state_ptr;
    return;
  }
  if (*(int *)(param_1[1] + 8) == 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
                    // WARNING: Subroutine does not return
  terminate();
}



uint64_t FUN_180060630(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_18020e6c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x208,param_3,param_4,uVar1);
  }
  return param_1;
}



int > MedHighFreq_StateMachine1(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar2 = (uint64_t *)func_0x00018004b9a0();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&uStackX_18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




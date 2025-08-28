#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part037.c - 14 个函数

// 函数: void FUN_1800697a0(uint64_t *param_1)
void FUN_1800697a0(uint64_t *param_1)

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
  
  *param_1 = &unknown_var_2296_ptr;
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
LAB_180069842:
      plVar5 = (longlong *)param_1[0xc];
      lVar9 = *(longlong *)
               (*(longlong *)
                 (plVar5[3] +
                 (plVar5[1] +
                  ((uVar10 & 0xffffffffffffffe0) - **(longlong **)(plVar5[3] + plVar5[1] * 8) >> 5)
                 & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_180069842;
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
  *param_1 = &unknown_var_2280_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180069920(longlong *param_1)

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
      if (bVar16) goto LAB_180069c2b;
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
    *puVar8 = &unknown_var_2280_ptr;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(int8_t *)(puVar8 + 9) = 0;
    puVar8[10] = param_1;
    *puVar8 = &unknown_var_2296_ptr;
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
LAB_180069c2b:
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



ulonglong FUN_180069cc0(uint64_t param_1,uint64_t *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  
  lVar4 = FUN_180069920();
  if (lVar4 == 0) {
    return 0;
  }
  uVar1 = *(ulonglong *)(lVar4 + 0x20);
  if ((uVar1 & 0x1f) == 0) {
    uVar5 = (*(longlong *)(lVar4 + 0x28) - uVar1) - 0x20;
    if ((0x8000000000000000 < uVar5) &&
       (plVar2 = *(longlong **)(lVar4 + 0x60), plVar2 != (longlong *)0x0)) {
      uVar5 = *plVar2 - 1U & plVar2[1] + 1U;
      puVar6 = *(ulonglong **)(plVar2[3] + uVar5 * 8);
      if ((*puVar6 == 1) || (puVar6[1] == 0)) {
        *puVar6 = uVar1;
        plVar2[1] = uVar5;
      }
      else {
        uVar5 = FUN_18005f430(lVar4);
        if ((char)uVar5 == '\0') goto LAB_180069dc3;
        plVar2 = *(longlong **)(lVar4 + 0x60);
        uVar5 = *plVar2 - 1U & plVar2[1] + 1U;
        puVar6 = *(ulonglong **)(plVar2[3] + uVar5 * 8);
        *puVar6 = uVar1;
        plVar2[1] = uVar5;
      }
      uVar5 = FUN_18005ff50(*(uint64_t *)(lVar4 + 0x50));
      if (uVar5 != 0) {
        *(uint64_t *)(uVar5 + 0x108) = 0;
        puVar6[1] = uVar5;
        *(ulonglong *)(lVar4 + 0x40) = uVar5;
        goto LAB_180069dda;
      }
      plVar2 = *(longlong **)(lVar4 + 0x60);
      uVar5 = plVar2[1] - 1;
      plVar2[1] = *plVar2 - 1U & uVar5;
      puVar6[1] = 0;
    }
LAB_180069dc3:
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
LAB_180069dda:
    uVar3 = *param_2;
    *(uint64_t *)(*(longlong *)(lVar4 + 0x40) + (ulonglong)((uint)uVar1 & 0x1f) * 8) = uVar3;
    *(ulonglong *)(lVar4 + 0x20) = uVar1 + 1;
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar5;
}



uint64_t *
FUN_180069e10(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_1000_ptr;
  LOCK();
  *(int8_t *)(param_1 + 2) = 0;
  UNLOCK();
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &unknown_var_2312_ptr;
  param_1[6] = 0;
  param_1[7] = _guard_check_icall;
  if (param_1 + 4 != param_2) {
    pcVar1 = (code *)param_2[2];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 4,param_2,1,param_4,0xfffffffffffffffe);
      pcVar1 = (code *)param_2[2];
    }
    param_1[6] = pcVar1;
    param_1[7] = param_2[3];
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2,0,0);
  }
  return param_1;
}



uint64_t
FUN_180069f00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  uVar1 = FUN_180628ca0();
  FUN_180627ae0(param_2,uVar1,param_3,param_4,uVar2,uVar3);
  return param_2;
}



uint64_t * FUN_180069f60(uint64_t param_1,uint64_t *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(int32_t *)(param_2 + 3) = 3;
  return param_2;
}



uint64_t * FUN_180069fb0(uint64_t param_1,uint64_t *param_2)

{
  *param_2 = 0;
  return param_2;
}



uint64_t FUN_180069fe0(uint64_t param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1801570c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x260,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18006a050(int param_1)

{
  if ((param_1 != -0x3fffff03) && (param_1 != -0x3ffffffb)) {
    return 0;
  }
  (**(code **)(*(longlong *)*init_system_data_config + 0x68))();
  return 1;
}



uint64_t * FUN_18006a090(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_2672_ptr;
  param_1[0x18] = &unknown_var_3456_ptr;
  if (param_1[0x19] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0;
  param_1[0x18] = &unknown_var_720_ptr;
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18006a130(longlong param_1)
void FUN_18006a130(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  void *puVar5;
  int8_t auStack_278 [40];
  longlong *plStack_250;
  int iStack_248;
  char cStack_1fc;
  uint64_t uStack_98;
  
  uStack_98 = 0xfffffffffffffffe;
  SetErrorMode(1);
  cVar2 = (**(code **)**(uint64_t **)(init_system_data_config + 0x18))();
  if (cVar2 == '\0') {
    SetUnhandledExceptionFilter(&unknown_var_5168_ptr);
  }
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x170,8,3);
  init_system_data_config = FUN_18006e870(uVar3);
  FUN_18004c330(auStack_278);
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,1000,8,3);
  system_main_module_state = FUN_18004c480(uVar3);
  FUN_180055050();
  FUN_18004d020();
  if ((*(char *)(init_system_data_config + 0x20) == '\0') && (*(char *)(init_system_data_config + 0x21) == '\0')) {
    uVar3 = FUN_1808fc418(0x428);
    plStack_250 = (longlong *)FUN_18049d530(uVar3);
  }
  else {
    plStack_250 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,3);
    *plStack_250 = (longlong)&unknown_var_4416_ptr;
    *plStack_250 = (longlong)&unknown_var_4920_ptr;
    plStack_250[4] = 0;
    *(int8_t *)(plStack_250 + 1) = 0;
    plStack_250[2] = 0;
    *(int8_t *)(plStack_250 + 3) = 0;
    plVar1 = (longlong *)plStack_250[4];
    plStack_250[4] = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_1 + 200) != (void *)0x0) {
    puVar5 = *(void **)(param_1 + 200);
  }
  (**(code **)(*plStack_250 + 0x50))(plStack_250,puVar5);
  (**(code **)(*plStack_250 + 0x60))(plStack_250,auStack_278);
  if (cStack_1fc == '\0') {
    iStack_248 = 0;
  }
  else if (system_data_2841 == '\0') {
    iStack_248 = (system_exception_handler != '\0') + 2;
  }
  else {
    iStack_248 = 1;
  }
  init_system_data_config = FUN_18062b1e0(system_memory_pool_ptr,0x28,8,3);
  *(uint64_t *)(init_system_data_config + 8) = 0;
  *(uint64_t *)(init_system_data_config + 0x10) = 0;
  *(uint64_t *)(init_system_data_config + 0x18) = 0;
  *(int32_t *)(init_system_data_config + 0x20) = 3;
  FUN_180162600();
  puVar4 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x478,8,3);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(int32_t *)(puVar4 + 3) = 3;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  *(int32_t *)(puVar4 + 7) = 3;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  *(int32_t *)(puVar4 + 0xb) = 3;
  *(int8_t *)(puVar4 + 0xc) = 0;
  *(uint64_t *)((longlong)puVar4 + 100) = 0xffffffffffffffff;
  *(int32_t *)((longlong)puVar4 + 0x6c) = 0;
  *(int16_t *)(puVar4 + 0xe) = 0;
  *(int8_t *)((longlong)puVar4 + 0x72) = 0;
                    // WARNING: Subroutine does not return
  memset((longlong)puVar4 + 0x74,0,0x400);
}





// 函数: void FUN_18006b220(longlong param_1)
void FUN_18006b220(longlong param_1)

{
  *(uint64_t *)(param_1 + 0xa0) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb8) = 0;
  *(uint64_t *)(param_1 + 0xa0) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x80) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x88) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0x80) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x58) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x60) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x58) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x38) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x38) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 8) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &unknown_var_720_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18006b350(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  if (param_3 == 3) {
    return 0x180bfd730;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      *puVar2 = *puVar1;
      *(int32_t *)(puVar2 + 1) = *(int32_t *)(puVar1 + 1);
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      *param_1 = (longlong)puVar2;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_18006b440(longlong param_1,int32_t param_2)
void FUN_18006b440(longlong param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x1e20) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1e28))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1dd0) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x1dd0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x1dc0) = *(int32_t *)(param_1 + 0x1e08);
    return;
  }
  *(int32_t *)(param_1 + 0x1dc0) = param_2;
  return;
}





// 函数: void FUN_18006b4c0(longlong param_1,int32_t param_2)
void FUN_18006b4c0(longlong param_1,int32_t param_2)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x1db0) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1db8))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1d60) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x1d60);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(param_1 + 0x1d50) = *(int32_t *)(param_1 + 0x1d98);
    return;
  }
  *(int32_t *)(param_1 + 0x1d50) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18006b540(uint64_t param_1,int32_t param_2)
void FUN_18006b540(uint64_t param_1,int32_t param_2)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  int32_t auStackX_10 [6];
  
  lVar1 = SYSTEM_STATE_MANAGER;
  if ((*(longlong *)(SYSTEM_STATE_MANAGER + 0x1870) != 0) &&
     (auStackX_10[0] = param_2, cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1878))(auStackX_10),
     param_2 = auStackX_10[0], cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1820) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x1820);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x1810) = *(int32_t *)(lVar1 + 0x1858);
    return;
  }
  *(int32_t *)(lVar1 + 0x1810) = param_2;
  return;
}



longlong FUN_18006b5c0(longlong param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
    (**(code **)(param_1 + 0xd0))(param_1 + 0xc0,0,0,param_4,0xfffffffffffffffe);
  }
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe0);
  }
  return param_1;
}



uint64_t *
FUN_18006b640(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_180049830();
  *param_1 = &unknown_var_2528_ptr;
  param_1[0x1a] = 0;
  param_1[0x1b] = _guard_check_icall;
  if (param_1 + 0x18 != param_2) {
    pcVar1 = (code *)param_2[2];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 0x18,param_2,1,param_4,uVar2);
      pcVar1 = (code *)param_2[2];
    }
    param_1[0x1a] = pcVar1;
    param_1[0x1b] = param_2[3];
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2,0,0);
  }
  return param_1;
}





// 函数: void FUN_18006b6f0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18006b6f0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x13) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18006b760(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18006b760(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x13) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18006b780(void)
void FUN_18006b780(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  if (system_cache_buffer != 0) {
    (**(code **)(system_cache_buffer + 0x88))(1);
  }


// 函数: void FUN_18006b8f0(longlong param_1)
void FUN_18006b8f0(longlong param_1)

{
  *(uint64_t *)(param_1 + 0x20) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x20) = &unknown_var_720_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18006b940(uint64_t *param_1)
void FUN_18006b940(uint64_t *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  longlong lVar7;
  int8_t auStack_b8 [48];
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  uint64_t uStack_68;
  uint64_t *puStack_60;
  ulonglong uStack_30;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  *param_1 = &unknown_var_3784_ptr;
  uVar2 = 0;
  param_1[1] = 0;
  puStack_80 = param_1 + 2;
  *puStack_80 = 0;
  *(int32_t *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  puVar5 = param_1 + 0xd;
  lVar7 = 0x20;
  lVar6 = 0x20;
  puVar4 = puVar5;
  puStack_60 = param_1;
  do {
    func_0x000180059bb0(puVar4);
    puVar4 = puVar4 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(uint64_t *)((longlong)param_1 + 0x26c) = 0;
  *(int32_t *)(param_1 + 0x4d) = 0;
  param_1[9] = 0;
  param_1[10] = 0x20;
  param_1[0xb] = puVar5;
  do {
    *(int32_t *)puVar5 = 0;
    puVar5 = puVar5 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  param_1[0xc] = 0;
  param_1[8] = param_1 + 10;
  param_1[6] = 0x15;
  lVar6 = FUN_180059bc0();
  param_1[5] = lVar6;
  if (lVar6 == 0) {
    param_1[6] = 0;
    uVar1 = uVar2;
  }
  else {
    uVar1 = param_1[6];
  }
  uVar3 = uVar2;
  if (uVar1 != 0) {
    do {
      *(int8_t *)(uVar2 + 0x141 + param_1[5]) = 0;
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 0x148;
    } while (uVar3 < (ulonglong)param_1[6]);
  }
  puStack_88 = param_1 + 0x4f;
  _Cnd_init_in_situ();
  puStack_88 = param_1 + 0x58;
  _Mtx_init_in_situ(puStack_88,2);
  *(int32_t *)(param_1 + 0x65) = 0;
  *(int32_t *)((longlong)param_1 + 0x32c) = 0x80;
  puStack_80 = param_1 + 0x66;
  *(int32_t *)(param_1 + 0x6a) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x354) = 0x40000000;
  *(int32_t *)((longlong)param_1 + 0x35c) = 3;
  param_1[0x68] = 1;
  param_1[0x67] = &system_data_0000;
  param_1[0x69] = 0;
  *(int32_t *)(param_1 + 0x6b) = 0;
  *(int8_t *)(param_1 + 0x6d) = 1;
  lVar6 = FUN_18062b1e0(system_memory_pool_ptr,0x140038,8,3);
                    // WARNING: Subroutine does not return
  memset(lVar6 + 0x20,0,0x140000);
}



uint64_t FUN_18006bd20(uint64_t param_1,ulonglong param_2)

{
  FUN_18006bfe0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x370);
  }
  return param_1;
}





// 函数: void FUN_18006bd60(longlong param_1)
void FUN_18006bd60(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        *puVar2 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18006bd80(longlong param_1)
void FUN_18006bd80(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        *puVar2 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18006bda0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint8_t uVar7;
  
  lVar3 = *(longlong *)(param_2 + 0x128);
  if (lVar3 != 0) {
    *param_3 = lVar3;
    lVar3 = *(longlong *)(param_2 + 0x128);
  }
  lVar1 = *(longlong *)(param_2 + 0x130);
  uVar4 = 0;
  if (lVar1 == 0) {
    if (lVar3 == 0) {
      uVar4 = *(ulonglong *)(param_2 + 0x120);
    }
  }
  else {
    uVar4 = *(ulonglong *)(param_2 + 0x120);
    if (lVar3 == 0) {
      uVar4 = uVar4 + *(longlong *)(param_2 + 0x138);
    }
  }
  *(uint64_t *)(param_2 + 0x1a0) = 0;
  *(uint64_t *)(param_2 + 0x198) = 0;
  *(uint64_t *)(param_2 + 400) = 0;
  *(uint64_t *)(param_2 + 0x188) = 0;
  uVar5 = (*(longlong *)(param_2 + 0x120) - (*(ulonglong *)(param_2 + 0x118) & 0xfffffffffffff000))
          + *(ulonglong *)(param_2 + 0x118);
  uVar6 = uVar5 & 0xfffffffffffff000;
  lVar3 = (-(uint)((uVar5 & 0xfff) != 0) & 0x1000) + uVar6;
  if (*(ulonglong *)(param_1 + 0x360) < uVar4) {
    uVar7 = (uint8_t)(uVar6 >> 8);
    if (lVar1 == 0) {
      if (*param_3 == 0) {
        lVar3 = FUN_18062b420(system_memory_pool_ptr,lVar3,CONCAT71(uVar7,3));
        *param_3 = lVar3;
        *(longlong *)(param_2 + 0x198) = lVar3;
        *param_5 = *param_3;
      }
    }
    else {
      lVar3 = FUN_18062b420(system_memory_pool_ptr,lVar3,CONCAT71(uVar7,3));
      *param_4 = lVar3;
      *(longlong *)(param_2 + 0x198) = lVar3;
      *param_5 = *param_4;
      if (*param_3 == 0) {
        lVar3 = FUN_18062b420(system_memory_pool_ptr,*(uint64_t *)(param_2 + 0x138),3);
        *param_3 = lVar3;
        *(longlong *)(param_2 + 0x1a0) = lVar3;
      }
    }
  }
  else if (lVar1 == 0) {
    if (*param_3 == 0) {
      plVar2 = (longlong *)FUN_18006e000(param_1,lVar3);
      *(longlong **)(param_2 + 400) = plVar2;
      if (plVar2 == (longlong *)0x0) goto LAB_18006bf7f;
      lVar3 = *(longlong *)(param_1 + 800) + *plVar2;
      *param_3 = lVar3;
      *param_5 = lVar3;
    }
  }
  else {
    plVar2 = (longlong *)FUN_18006e000(param_1,lVar3);
    *(longlong **)(param_2 + 0x188) = plVar2;
    if (plVar2 == (longlong *)0x0) {
LAB_18006bf7f:
      func_0x0001800695d0(param_1,*(uint64_t *)(param_2 + 0x188));
      func_0x0001800695d0(param_1,*(uint64_t *)(param_2 + 400));
      return 0;
    }
    lVar3 = *plVar2 + *(longlong *)(param_1 + 800);
    *param_4 = lVar3;
    *param_5 = lVar3;
    if (*param_3 == 0) {
      plVar2 = (longlong *)FUN_18006e000(param_1,*(uint64_t *)(param_2 + 0x138));
      *(longlong **)(param_2 + 400) = plVar2;
      if (plVar2 == (longlong *)0x0) goto LAB_18006bf7f;
      *param_3 = *plVar2 + *(longlong *)(param_1 + 800);
    }
  }
  return 1;
}





// 函数: void FUN_18006bfe0(uint64_t *param_1)
void FUN_18006bfe0(uint64_t *param_1)

{
  *param_1 = &unknown_var_3784_ptr;
  FUN_18006cb90();
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ();
  FUN_180059ee0(param_1 + 2);
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




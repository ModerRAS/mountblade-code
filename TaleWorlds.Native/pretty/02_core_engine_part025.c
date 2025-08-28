#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part025.c - 2 个函数

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
  (**(code **)(*(longlong *)*core_system_data_config + 0x68))();
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



// 函数: void FUN_180070680(uint64_t param_1,uint64_t param_2)
void FUN_180070680(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *puVar6;
  uint64_t uVar7;
  void *puVar8;
  bool bVar9;
  void *puStack_70;
  void *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_38;
  
  iVar3 = WaitForSingleObject(core_system_config,0);
  if (iVar3 != 0) {
    return;
  }
  bVar9 = true;
  cVar2 = (**(code **)**(uint64_t **)(core_system_data_config + 0x18))();
  if ((cVar2 == '\0') && (iVar3 = IsDebuggerPresent(), iVar3 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (system_context_ptr != 0) {
    iVar3 = *(int *)(**(longlong **)(system_context_ptr + 8) + 0x48);
    iVar4 = _Thrd_id();
    bVar9 = iVar4 == iVar3;
  }
  puVar8 = (void *)0x0;
  if (!bVar1) {
    lVar5 = FUN_1800f9ce0(&puStack_50,0);
    puVar8 = *(void **)(lVar5 + 8);
    *(int32_t *)(lVar5 + 0x10) = 0;
    *(uint64_t *)(lVar5 + 8) = 0;
    *(uint64_t *)(lVar5 + 0x18) = 0;
    puStack_50 = &unknown_var_3456_ptr;
    if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_48 = 0;
    uStack_38 = 0;
    puStack_50 = &unknown_var_720_ptr;
  }
  puStack_70 = &unknown_var_3456_ptr;
  uStack_58 = 0;
  puStack_68 = (void *)0x0;
  uStack_60 = 0;
  FUN_180628040(&puStack_70,&unknown_var_3944_ptr,param_2);
  FUN_180062380(system_message_context,5,0xffffffff00000000,&unknown_var_3968_ptr);
  puVar6 = &system_buffer_ptr;
  if (puStack_68 != (void *)0x0) {
    puVar6 = puStack_68;
  }
  FUN_180062380(system_message_context,5,0xffffffff00000000,&unknown_var_4064_ptr,puVar6);
  puVar6 = &system_buffer_ptr;
  if (puVar8 != (void *)0x0) {
    puVar6 = puVar8;
  }
  FUN_1800623b0(system_message_context,5,0xffffffff00000000,3,puVar6);
  FUN_1800623e0();
  puVar8 = &system_buffer_ptr;
  if (puStack_68 != (void *)0x0) {
    puVar8 = puStack_68;
  }
  OutputDebugStringA(puVar8);
  lVar5 = system_operation_state;
  if (((bVar9) && (system_operation_state != 0)) && (*(char *)(system_operation_state + 0x1609) != '\x01')) {
    FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),*(char *)(core_system_data_config + 0x2028) != '\0',
                  *(int32_t *)(system_operation_state + 0x160c));
    *(int8_t *)(lVar5 + 0x1609) = 1;
  }
  if (system_debug_flag2 == '\0') {
    FUN_1800f93e0();
  }
  else {
    uVar7 = func_0x0001800464d0(&puStack_70);
    FUN_1806272a0(uVar7);
  }
  FUN_180046130(&system_data_1900,1);
  _Exit(5);
  return;
}



// WARNING: Removing unreachable block (ram,0x000180070cdc)
// WARNING: Removing unreachable block (ram,0x000180070ce2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




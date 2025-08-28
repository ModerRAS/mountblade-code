#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part535.c - 12 个函数

// 函数: void FUN_18055cc16(void)
void FUN_18055cc16(void)

{
  int32_t in_EAX;
  
                    // WARNING: Could not recover jumptable at 0x00018055cc1c. Too many branches
                    // WARNING: Treating indirect jump as call
  __Throw_C_error_std__YAXH_Z(in_EAX);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_18055cc30(int64_t param_1,int16_t param_2)

{
  int16_t *puVar1;
  char cVar2;
  int16_t uVar3;
  int *piVar4;
  void *puVar5;
  int *piVar6;
  int64_t lVar7;
  int *piVar8;
  int iVar9;
  int iStack_34;
  
  puVar1 = (int16_t *)(param_1 + 0x778);
  if (render_system_control_config == 0) {
    *(int32_t *)(param_1 + 0x78c) = 0;
    *puVar1 = 2;
    *(int16_t *)(param_1 + 0x788) = param_2;
    uVar3 = htons(param_2);
    *(int16_t *)(param_1 + 0x77a) = uVar3;
    *(int32_t *)(param_1 + 0x77c) = 0;
  }
  else {
    puVar5 = &system_buffer_ptr;
    if (render_system_control_config != (void *)0x0) {
      puVar5 = render_system_control_config;
    }
    FUN_180645b70(puVar1,puVar5);
  }
  cVar2 = FUN_18056f700(param_1,puVar1);
  if (cVar2 != '\0') {
    iVar9 = 0x3fe;
    do {
      piVar8 = *(int **)(param_1 + 0x3600);
      if (piVar8 < *(int **)(param_1 + 0x3608)) {
        *(int **)(param_1 + 0x3600) = piVar8 + 4;
        *piVar8 = iVar9;
        piVar8[1] = iStack_34;
        piVar8[2] = 0;
        piVar8[3] = 0;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x35f8);
        lVar7 = (int64_t)piVar8 - (int64_t)piVar6 >> 4;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_18055cd27:
          piVar4 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 << 4,*(int8_t *)(param_1 + 0x3610))
          ;
          piVar6 = *(int **)(param_1 + 0x35f8);
          piVar8 = *(int **)(param_1 + 0x3600);
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_18055cd27;
          piVar4 = (int *)0x0;
        }
        if (piVar6 != piVar8) {
                    // WARNING: Subroutine does not return
          memmove(piVar4,piVar6,(int64_t)piVar8 - (int64_t)piVar6);
        }
        *piVar4 = iVar9;
        piVar4[1] = iStack_34;
        piVar4[2] = 0;
        piVar4[3] = 0;
        if (*(int64_t *)(param_1 + 0x35f8) != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(int **)(param_1 + 0x35f8) = piVar4;
        *(int **)(param_1 + 0x3608) = piVar4 + lVar7 * 4;
        *(int **)(param_1 + 0x3600) = piVar4 + 4;
      }
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return cVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_18055ccaf(void)

{
  int *piVar1;
  int *piVar2;
  int64_t unaff_RBX;
  int64_t lVar3;
  int *piVar4;
  int iVar5;
  int8_t unaff_R15B;
  int iStackX_24;
  int iStack0000000000000028;
  int iStack000000000000002c;
  
  iVar5 = 0x3fe;
  do {
    piVar4 = *(int **)(unaff_RBX + 0x3600);
    _iStack0000000000000028 = 0;
    if (piVar4 < *(int **)(unaff_RBX + 0x3608)) {
      *(int **)(unaff_RBX + 0x3600) = piVar4 + 4;
      *piVar4 = iVar5;
      piVar4[1] = iStackX_24;
      piVar4[2] = 0;
      piVar4[3] = 0;
    }
    else {
      piVar2 = *(int **)(unaff_RBX + 0x35f8);
      lVar3 = (int64_t)piVar4 - (int64_t)piVar2 >> 4;
      if (lVar3 == 0) {
        lVar3 = 1;
LAB_18055cd27:
        piVar1 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar3 << 4,*(int8_t *)(unaff_RBX + 0x3610))
        ;
        piVar2 = *(int **)(unaff_RBX + 0x35f8);
        piVar4 = *(int **)(unaff_RBX + 0x3600);
      }
      else {
        lVar3 = lVar3 * 2;
        if (lVar3 != 0) goto LAB_18055cd27;
        piVar1 = (int *)0x0;
      }
      if (piVar2 != piVar4) {
                    // WARNING: Subroutine does not return
        memmove(piVar1,piVar2,(int64_t)piVar4 - (int64_t)piVar2);
      }
      *piVar1 = iVar5;
      piVar1[1] = iStackX_24;
      piVar1[2] = iStack0000000000000028;
      piVar1[3] = iStack000000000000002c;
      if (*(int64_t *)(unaff_RBX + 0x35f8) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(int **)(unaff_RBX + 0x35f8) = piVar1;
      *(int **)(unaff_RBX + 0x3608) = piVar1 + lVar3 * 4;
      *(int **)(unaff_RBX + 0x3600) = piVar1 + 4;
    }
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      return unaff_R15B;
    }
  } while( true );
}



int8_t FUN_18055cdc9(void)

{
  int8_t unaff_R15B;
  
  return unaff_R15B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055cde0(int64_t param_1,int64_t param_2,int *param_3)
void FUN_18055cde0(int64_t param_1,int64_t param_2,int *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  ushort uVar11;
  uint64_t *puVar12;
  short sVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  uint64_t uVar16;
  bool bVar17;
  int8_t auStack_878 [32];
  uint uStack_858;
  int iStack_854;
  uint auStack_850 [2];
  uint64_t auStack_848 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_878;
  uStack_858 = 0xffffffff;
  iStack_854 = -1;
  auStack_850[0] = 0xff;
  cVar7 = SystemSynchronizationProcessor(param_2,auStack_850,&unknown_var_7456_ptr);
  if ((((cVar7 != '\0') && (cVar7 = (char)auStack_850[0], (auStack_850[0] & 0xfc) == 0)) &&
      (cVar7 != '\x02')) &&
     (((cVar8 = SystemSynchronizationProcessor(param_2,&uStack_858,&unknown_var_7472_ptr), uVar6 = uStack_858, cVar8 != '\0'
       && (lVar14 = (int64_t)(int)uStack_858, -1 < (int)uStack_858)) &&
      ((plVar1 = *(int64_t **)(param_1 + 0x790 + lVar14 * 8), plVar1 != (int64_t *)0x0 &&
       (((int)plVar1[2] == 1 && (lVar2 = *plVar1, lVar2 != 0)))))))) {
    if (cVar7 == '\x01') {
      if (((uStack_858 < 0x3ff) && (plVar1 != (int64_t *)0x0)) && (lVar2 != 0)) {
        puVar12 = auStack_848;
        lVar14 = 0xff;
        do {
          func_0x00018005d390(puVar12);
          puVar12 = puVar12 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        sVar9 = 0;
        uStack_858 = 0;
        cVar7 = SystemSynchronizationProcessor(param_2,&uStack_858,&unknown_var_5456_ptr);
        bVar17 = cVar7 != '\0';
        uVar11 = (ushort)uStack_858;
        if (0xff < (ushort)uStack_858) {
          uVar11 = 0xff;
        }
        if (uVar11 != 0) {
          puVar12 = auStack_848;
          uVar16 = (uint64_t)uVar11;
          puVar15 = auStack_848;
          sVar13 = sVar9;
          do {
            *puVar12 = render_system_config;
            if ((bVar17) && (cVar7 = FUN_180646b50(param_2,render_system_config,puVar15), cVar7 != '\0'))
            {
              bVar17 = true;
            }
            else {
              bVar17 = false;
            }
            sVar9 = sVar13 + 1;
            if (!bVar17) {
              sVar9 = sVar13;
            }
            puVar15 = puVar15 + 1;
            puVar12 = puVar12 + 1;
            uVar16 = uVar16 - 1;
            sVar13 = sVar9;
          } while (uVar16 != 0);
        }
        FUN_1805b5330(lVar2,*(uint64_t *)(param_2 + 0x5a8),auStack_848,sVar9);
        if (bVar17) {
          *(uint64_t *)(lVar2 + 0x20) = *(uint64_t *)(param_2 + 0x5a8);
        }
      }
    }
    else {
      cVar8 = SystemSynchronizationProcessor(param_2,&iStack_854,&unknown_var_7488_ptr);
      if (cVar8 != '\0') {
        if (cVar7 == '\0') {
          if ((((uVar6 < 0x3ff) &&
               (puVar12 = *(uint64_t **)(param_1 + 0x790 + lVar14 * 8),
               puVar12 != (uint64_t *)0x0)) && (*(int *)(puVar12 + 2) == 1)) &&
             ((piVar3 = (int *)*puVar12, piVar3 != (int *)0x0 && (*piVar3 == iStack_854)))) {
            FUN_1805b41b0(piVar3,param_2,param_3);
          }
        }
        else if (((cVar7 == '\x03') && (uVar6 < 0x3ff)) &&
                (((puVar12 = *(uint64_t **)(param_1 + 0x790 + lVar14 * 8),
                  puVar12 != (uint64_t *)0x0 &&
                  (((*(int *)(puVar12 + 2) == 1 && (piVar3 = (int *)*puVar12, piVar3 != (int *)0x0))
                   && (*piVar3 == iStack_854)))) && (*(char *)((int64_t)piVar3 + 0x31) == '\0'))))
        {
          iVar10 = piVar3[6];
          if ((iVar10 == 0) && ((short)piVar3[5] == 0)) {
            iVar10 = param_3[1];
            iVar4 = param_3[2];
            iVar5 = param_3[3];
            piVar3[1] = *param_3;
            piVar3[2] = iVar10;
            piVar3[3] = iVar4;
            piVar3[4] = iVar5;
            *(uint64_t *)(piVar3 + 5) = *(uint64_t *)(param_3 + 4);
            iVar10 = piVar3[6];
          }
          if ((iVar10 != param_3[5]) || ((short)piVar3[5] != (short)param_3[4])) {
            FUN_180062340(system_message_context,2,&unknown_var_3048_ptr);
            iVar10 = param_3[1];
            iVar4 = param_3[2];
            iVar5 = param_3[3];
            piVar3[1] = *param_3;
            piVar3[2] = iVar10;
            piVar3[3] = iVar4;
            piVar3[4] = iVar5;
            *(uint64_t *)(piVar3 + 5) = *(uint64_t *)(param_3 + 4);
          }
          cVar7 = FUN_1805b6170(piVar3,param_2);
          if (cVar7 != '\0') {
            *(uint64_t *)(piVar3 + 8) = *(uint64_t *)(param_2 + 0x5a8);
          }
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_878);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055d130(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18055d130(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int *piVar2;
  int16_t *puVar3;
  int *piVar4;
  uint uVar5;
  int64_t lVar6;
  int *piVar7;
  int64_t *plVar8;
  int *piVar9;
  int iVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int iStack_4c;
  
  uVar12 = 0xfffffffffffffffe;
  FUN_18056f5d0();
  plVar8 = (int64_t *)(param_1 + 0x790);
  lVar11 = 0x3ff;
  lVar6 = 0x3ff;
  piVar9 = (int *)0x0;
  do {
    lVar1 = *plVar8;
    if (lVar1 != 0) {
      if ((*(int *)(lVar1 + 0x4c) != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))();
      }
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar1);
    }
    *plVar8 = 0;
    plVar8 = plVar8 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_18055e830(param_1 + 0x758);
  *(uint64_t *)(param_1 + 0x35e0) = *(uint64_t *)(param_1 + 0x35d8);
  lVar6 = *(int64_t *)(param_1 + 0x738);
  piVar7 = piVar9;
  piVar4 = piVar9;
  if (*(int64_t *)(param_1 + 0x740) - lVar6 >> 3 != 0) {
    do {
      lVar6 = *(int64_t *)(lVar6 + (int64_t)piVar4);
      if (lVar6 != 0) {
        FUN_18055e8d0(lVar6);
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar6);
      }
      *(uint64_t *)((int64_t)piVar4 + *(int64_t *)(param_1 + 0x738)) = 0;
      uVar5 = (int)piVar7 + 1;
      lVar6 = *(int64_t *)(param_1 + 0x738);
      piVar7 = (int *)(uint64_t)uVar5;
      piVar4 = piVar4 + 2;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(param_1 + 0x740) - lVar6 >> 3));
  }
  *(uint64_t *)(param_1 + 0x3600) = *(uint64_t *)(param_1 + 0x35f8);
  iVar10 = 0x3fe;
  do {
    piVar7 = *(int **)(param_1 + 0x3600);
    if (piVar7 < *(int **)(param_1 + 0x3608)) {
      *(int **)(param_1 + 0x3600) = piVar7 + 4;
      *piVar7 = iVar10;
      piVar7[1] = iStack_4c;
      piVar7[2] = 0;
      piVar7[3] = 0;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x35f8);
      lVar6 = (int64_t)piVar7 - (int64_t)piVar4 >> 4;
      if (lVar6 == 0) {
        lVar6 = 1;
LAB_18055d29b:
        piVar2 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 << 4,*(int8_t *)(param_1 + 0x3610),
                                      param_4,uVar12);
        piVar7 = *(int **)(param_1 + 0x3600);
        piVar4 = *(int **)(param_1 + 0x35f8);
      }
      else {
        lVar6 = lVar6 * 2;
        piVar2 = piVar9;
        if (lVar6 != 0) goto LAB_18055d29b;
      }
      if (piVar4 != piVar7) {
                    // WARNING: Subroutine does not return
        memmove(piVar2,piVar4,(int64_t)piVar7 - (int64_t)piVar4);
      }
      *piVar2 = iVar10;
      piVar2[1] = iStack_4c;
      piVar2[2] = 0;
      piVar2[3] = 0;
      if (*(int64_t *)(param_1 + 0x35f8) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(int **)(param_1 + 0x35f8) = piVar2;
      *(int **)(param_1 + 0x3600) = piVar2 + 4;
      *(int **)(param_1 + 0x3608) = piVar2 + lVar6 * 4;
    }
    iVar10 = iVar10 + -1;
    if (iVar10 < 0) {
      puVar3 = (int16_t *)(param_1 + 0x2788);
      do {
        LOCK();
        *puVar3 = 0xffff;
        UNLOCK();
        puVar3 = puVar3 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      *(uint64_t *)(param_1 + 0x740) = *(uint64_t *)(param_1 + 0x738);
      *(uint64_t *)(param_1 + 0x359c) = 0;
                    // WARNING: Subroutine does not return
      memset(*(uint64_t *)(param_1 + 0x3570),0,(int64_t)(*(int *)(param_1 + 0x3568) >> 3));
    }
  } while( true );
}





// 函数: void FUN_18055d3f0(int64_t param_1)
void FUN_18055d3f0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  plVar1 = (int64_t *)(param_1 + 0x790);
  lVar3 = 0x3ff;
  do {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      *(int32_t *)(lVar2 + 0x48) = 0xffffffff;
      *(int32_t *)(lVar2 + 0x18) = 0xffffffff;
      *(int8_t *)(lVar2 + 0x1c) = 0;
    }
    plVar1 = plVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = *(int64_t *)(param_1 + 0x760);
  lVar2 = *(int64_t *)(param_1 + 0x758);
  if (lVar2 == lVar3) {
    *(int64_t *)(param_1 + 0x760) = lVar2;
  }
  else {
    do {
      if (*(int64_t *)(lVar2 + 0xcb8) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(lVar2 + 0xcb8) = 0;
      if (*(int64_t *)(lVar2 + 0x6e8) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(lVar2 + 0x6e8) = 0;
      lVar2 = lVar2 + 0xd08;
    } while (lVar2 != lVar3);
    *(uint64_t *)(param_1 + 0x760) = *(uint64_t *)(param_1 + 0x758);
  }
  return;
}





// 函数: void FUN_18055d4d0(int64_t param_1,int param_2)
void FUN_18055d4d0(int64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar5;
  
  uVar7 = (uint64_t)param_2;
  plVar1 = (int64_t *)(param_1 + 0x758);
  lVar3 = *(int64_t *)(param_1 + 0x760);
  lVar6 = *plVar1;
  uVar5 = (lVar3 - lVar6) / 0xd08;
  if ((int)uVar5 < param_2) {
    if (uVar5 < uVar7) {
      FUN_18055e9a0(plVar1,uVar7 - uVar5,lVar3 - lVar6,lVar6,0xfffffffffffffffe);
    }
    else {
      lVar2 = uVar7 * 0xd08 + lVar6;
      if (lVar2 != lVar3) {
        do {
          if (*(int64_t *)(lVar2 + 0xcb8) != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *(uint64_t *)(lVar2 + 0xcb8) = 0;
          if (*(int64_t *)(lVar2 + 0x6e8) != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *(uint64_t *)(lVar2 + 0x6e8) = 0;
          lVar2 = lVar2 + 0xd08;
        } while (lVar2 != lVar3);
        lVar6 = *plVar1;
      }
      *(uint64_t *)(param_1 + 0x760) = uVar7 * 0xd08 + lVar6;
    }
    lVar3 = (int64_t)(int)uVar5 * 0xd08;
    do {
      FUN_180560140(*plVar1 + lVar3);
      FUN_1805b32b0(param_1,uVar5 & 0xffffffff);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      lVar3 = lVar3 + 0xd08;
    } while ((int)uVar4 < param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055d610(int64_t *param_1)
void FUN_18055d610(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  
  plVar5 = (int64_t *)(**(code **)(*param_1 + 0x20))();
  if ((plVar5 != (int64_t *)0x0) && (lVar2 = *plVar5, lVar2 != 0)) {
    lVar6 = 0;
    lVar9 = (int64_t)(int)(*(int64_t *)(lVar2 + 0x5948) - *(int64_t *)(lVar2 + 0x5940) >> 5);
    lVar8 = lVar6;
    if (3 < lVar9) {
      lVar10 = (lVar9 - 4U >> 2) + 1;
      lVar8 = lVar10 * 4;
      lVar7 = lVar6;
      do {
        lVar3 = *(int64_t *)(lVar2 + 0x5940);
        lVar1 = lVar7 + 0x80;
        *(uint64_t *)(lVar7 + 0xc + lVar3) = render_system_config;
        *(uint64_t *)(lVar7 + lVar3) = 0;
        *(uint64_t *)(lVar7 + 0x14 + lVar3) = render_system_config;
        *(int16_t *)(lVar7 + 8 + lVar3) = 0x101;
        lVar3 = *(int64_t *)(lVar2 + 0x5940);
        *(uint64_t *)(lVar3 + -0x54 + lVar1) = render_system_config;
        *(uint64_t *)(lVar3 + -0x60 + lVar1) = 0;
        *(uint64_t *)(lVar3 + -0x4c + lVar1) = render_system_config;
        *(int16_t *)(lVar3 + -0x58 + lVar1) = 0x101;
        lVar3 = *(int64_t *)(lVar2 + 0x5940);
        *(uint64_t *)(lVar3 + -0x34 + lVar1) = render_system_config;
        *(uint64_t *)(lVar3 + -0x40 + lVar1) = 0;
        *(uint64_t *)(lVar3 + -0x2c + lVar1) = render_system_config;
        *(int16_t *)(lVar3 + -0x38 + lVar1) = 0x101;
        lVar3 = *(int64_t *)(lVar2 + 0x5940);
        *(uint64_t *)(lVar7 + 0x6c + lVar3) = render_system_config;
        *(uint64_t *)(lVar7 + 0x60 + lVar3) = 0;
        *(uint64_t *)(lVar7 + 0x74 + lVar3) = render_system_config;
        *(int16_t *)(lVar7 + 0x68 + lVar3) = 0x101;
        lVar10 = lVar10 + -1;
        lVar7 = lVar1;
      } while (lVar10 != 0);
    }
    if (lVar8 < lVar9) {
      lVar9 = lVar9 - lVar8;
      lVar8 = lVar8 << 5;
      do {
        lVar7 = *(int64_t *)(lVar2 + 0x5940);
        *(uint64_t *)(lVar8 + 0xc + lVar7) = render_system_config;
        *(uint64_t *)(lVar8 + lVar7) = 0;
        *(uint64_t *)(lVar8 + 0x14 + lVar7) = render_system_config;
        *(int16_t *)(lVar8 + 8 + lVar7) = 0x101;
        lVar9 = lVar9 + -1;
        lVar8 = lVar8 + 0x20;
      } while (lVar9 != 0);
    }
    iVar4 = (int)(*(int64_t *)(lVar2 + 0x5968) - *(int64_t *)(lVar2 + 0x5960) >> 3);
    if (0 < iVar4) {
      do {
        lVar8 = *(int64_t *)(lVar2 + 0x5960);
        *(int32_t *)(lVar8 + lVar6 * 8) = 0xffffffff;
        *(int16_t *)(lVar8 + 4 + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055d641(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_18055d641(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int in_EAX;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  
  lVar4 = 0;
  lVar7 = (int64_t)in_EAX;
  lVar6 = lVar4;
  if (3 < lVar7) {
    lVar8 = (lVar7 - 4U >> 2) + 1;
    lVar6 = lVar8 * 4;
    lVar5 = lVar4;
    do {
      lVar2 = *(int64_t *)(param_3 + 0x5940);
      lVar1 = lVar5 + 0x80;
      *(uint64_t *)(lVar5 + 0xc + lVar2) = render_system_config;
      *(uint64_t *)(lVar5 + lVar2) = 0;
      *(uint64_t *)(lVar5 + 0x14 + lVar2) = render_system_config;
      *(int16_t *)(lVar5 + 8 + lVar2) = 0x101;
      lVar2 = *(int64_t *)(param_3 + 0x5940);
      *(uint64_t *)(lVar2 + -0x54 + lVar1) = render_system_config;
      *(uint64_t *)(lVar2 + -0x60 + lVar1) = 0;
      *(uint64_t *)(lVar2 + -0x4c + lVar1) = render_system_config;
      *(int16_t *)(lVar2 + -0x58 + lVar1) = 0x101;
      lVar2 = *(int64_t *)(param_3 + 0x5940);
      *(uint64_t *)(lVar2 + -0x34 + lVar1) = render_system_config;
      *(uint64_t *)(lVar2 + -0x40 + lVar1) = 0;
      *(uint64_t *)(lVar2 + -0x2c + lVar1) = render_system_config;
      *(int16_t *)(lVar2 + -0x38 + lVar1) = 0x101;
      lVar2 = *(int64_t *)(param_3 + 0x5940);
      *(uint64_t *)(lVar5 + 0x6c + lVar2) = render_system_config;
      *(uint64_t *)(lVar5 + 0x60 + lVar2) = 0;
      *(uint64_t *)(lVar5 + 0x74 + lVar2) = render_system_config;
      *(int16_t *)(lVar5 + 0x68 + lVar2) = 0x101;
      lVar8 = lVar8 + -1;
      lVar5 = lVar1;
    } while (lVar8 != 0);
  }
  if (lVar6 < lVar7) {
    lVar7 = lVar7 - lVar6;
    lVar6 = lVar6 << 5;
    do {
      lVar5 = *(int64_t *)(param_3 + 0x5940);
      *(uint64_t *)(lVar6 + 0xc + lVar5) = render_system_config;
      *(uint64_t *)(lVar6 + lVar5) = 0;
      *(uint64_t *)(lVar6 + 0x14 + lVar5) = render_system_config;
      *(int16_t *)(lVar6 + 8 + lVar5) = 0x101;
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + 0x20;
    } while (lVar7 != 0);
  }
  iVar3 = (int)(*(int64_t *)(param_3 + 0x5968) - *(int64_t *)(param_3 + 0x5960) >> 3);
  if (0 < iVar3) {
    do {
      lVar6 = *(int64_t *)(param_3 + 0x5960);
      *(int32_t *)(lVar6 + lVar4 * 8) = 0xffffffff;
      *(int16_t *)(lVar6 + 4 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}





// 函数: void FUN_18055d7b0(void)
void FUN_18055d7b0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055d7c0(int64_t param_1,int param_2,uint64_t param_3)
void FUN_18055d7c0(int64_t param_1,int param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  
  plVar1 = (int64_t *)(param_1 + 0x758);
  uVar3 = (*(int64_t *)(param_1 + 0x760) - *plVar1) / 0xd08;
  lVar5 = (int64_t)(int)(*(int64_t *)(param_1 + 0x740) - *(int64_t *)(param_1 + 0x738) >> 3);
  if (0 < lVar5) {
    uVar6 = param_2 >> 0x1f & 0xf;
    uVar4 = param_2 + uVar6;
    lVar8 = 0;
    lVar7 = (int64_t)((int)uVar4 >> 4) * 8;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x738) + lVar8 * 8);
      FUN_18055fb60(lVar2 + 0x5940,uVar3 & 0xffffffff,plVar1);
      FUN_18055f960(*(int64_t *)(lVar2 + 0x5940) + (int64_t)param_2 * 0x20,param_3);
      lVar8 = lVar8 + 1;
      *(ushort *)(*(int64_t *)(lVar2 + 0x5960) + 4 + lVar7) =
           *(ushort *)(*(int64_t *)(lVar2 + 0x5960) + 4 + lVar7) |
           (ushort)(1 << ((uVar4 & 0xf) - uVar6 & 0x1f));
    } while (lVar8 < lVar5);
  }
  lVar5 = render_system_config;
  if ((render_system_config != 0) && (*(char *)(render_system_config + 0x670) != '\0')) {
    FUN_18055fb60(render_system_config + 0x5f8,uVar3 & 0xffffffff,plVar1);
    FUN_18055f960((int64_t)param_2 * 0x20 + *(int64_t *)(lVar5 + 0x5f8),param_3);
    uVar6 = param_2 >> 0x1f & 0xf;
    uVar4 = param_2 + uVar6;
    lVar7 = (int64_t)((int)uVar4 >> 4);
    lVar5 = *(int64_t *)(lVar5 + 0x618);
    *(ushort *)(lVar5 + lVar7 * 8 + 4) =
         *(ushort *)(lVar5 + 4 + lVar7 * 8) | (ushort)(1 << ((uVar4 & 0xf) - uVar6 & 0x1f));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055d7f7(int64_t param_1,int64_t param_2)
void FUN_18055d7f7(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t unaff_RDI;
  int64_t lVar6;
  uint64_t unaff_R12;
  uint64_t uVar7;
  uint in_stack_00000088;
  uint64_t in_stack_00000090;
  int64_t lStack0000000000000098;
  
  uVar5 = (param_2 >> 8) - (param_2 >> 0x3f);
  lStack0000000000000098 =
       (int64_t)(int)(*(int64_t *)(param_1 + 0x740) - *(int64_t *)(param_1 + 0x738) >> 3);
  uVar7 = unaff_R12;
  if (0 < lStack0000000000000098) {
    uVar4 = (int)unaff_R12 >> 0x1f & 0xf;
    uVar3 = (int)unaff_R12 + uVar4;
    lVar6 = 0;
    lVar1 = (int64_t)((int)uVar3 >> 4) * 8;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x738) + lVar6 * 8);
      FUN_18055fb60(lVar2 + 0x5940,uVar5 & 0xffffffff);
      FUN_18055f960(*(int64_t *)(lVar2 + 0x5940) + unaff_R12 * 0x20,in_stack_00000090);
      lVar6 = lVar6 + 1;
      *(ushort *)(*(int64_t *)(lVar2 + 0x5960) + 4 + lVar1) =
           *(ushort *)(*(int64_t *)(lVar2 + 0x5960) + 4 + lVar1) |
           (ushort)(1 << ((uVar3 & 0xf) - uVar4 & 0x1f));
    } while (lVar6 < lStack0000000000000098);
    uVar7 = (uint64_t)in_stack_00000088;
    unaff_RDI = in_stack_00000090;
  }
  lVar1 = render_system_config;
  if ((render_system_config != 0) && (*(char *)(render_system_config + 0x670) != '\0')) {
    FUN_18055fb60(render_system_config + 0x5f8,uVar5 & 0xffffffff);
    FUN_18055f960(unaff_R12 * 0x20 + *(int64_t *)(lVar1 + 0x5f8),unaff_RDI);
    uVar4 = (int)uVar7 >> 0x1f & 0xf;
    uVar3 = (int)uVar7 + uVar4;
    lVar6 = (int64_t)((int)uVar3 >> 4);
    lVar1 = *(int64_t *)(lVar1 + 0x618);
    *(ushort *)(lVar1 + lVar6 * 8 + 4) =
         *(ushort *)(lVar1 + 4 + lVar6 * 8) | (ushort)(1 << ((uVar3 & 0xf) - uVar4 & 0x1f));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055d840(void)
void FUN_18055d840(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  int32_t unaff_EBP;
  int64_t lVar5;
  int64_t unaff_R12;
  int64_t unaff_R15;
  uint64_t uStackX_20;
  int in_stack_00000088;
  uint64_t in_stack_00000090;
  int64_t in_stack_00000098;
  
  uVar4 = in_EAX >> 0x1f & 0xf;
  uVar3 = in_EAX + uVar4;
  lVar5 = 0;
  lVar1 = (int64_t)((int)uVar3 >> 4) * 8;
  do {
    lVar2 = *(int64_t *)(*(int64_t *)(unaff_R15 + 0x738) + lVar5 * 8);
    FUN_18055fb60(lVar2 + 0x5940,unaff_EBP);
    FUN_18055f960(*(int64_t *)(lVar2 + 0x5940) + unaff_R12 * 0x20,in_stack_00000090);
    lVar5 = lVar5 + 1;
    *(ushort *)(*(int64_t *)(lVar2 + 0x5960) + 4 + lVar1) =
         *(ushort *)(*(int64_t *)(lVar2 + 0x5960) + 4 + lVar1) |
         (ushort)(1 << ((uVar3 & 0xf) - uVar4 & 0x1f));
    lVar2 = render_system_config;
  } while (lVar5 < in_stack_00000098);
  if ((render_system_config != 0) && (*(char *)(render_system_config + 0x670) != '\0')) {
    FUN_18055fb60(render_system_config + 0x5f8,unaff_EBP);
    FUN_18055f960(uStackX_20 * 0x20 + *(int64_t *)(lVar2 + 0x5f8),in_stack_00000090);
    uVar4 = in_stack_00000088 >> 0x1f & 0xf;
    uVar3 = in_stack_00000088 + uVar4;
    lVar5 = (int64_t)((int)uVar3 >> 4);
    lVar1 = *(int64_t *)(lVar2 + 0x618);
    *(ushort *)(lVar1 + lVar5 * 8 + 4) =
         *(ushort *)(lVar1 + 4 + lVar5 * 8) | (ushort)(1 << ((uVar3 & 0xf) - uVar4 & 0x1f));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055d8e0(void)
void FUN_18055d8e0(void)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int unaff_R12D;
  
  lVar1 = render_system_config;
  if ((render_system_config != 0) && (*(char *)(render_system_config + 0x670) != '\0')) {
    FUN_18055fb60(render_system_config + 0x5f8,unaff_EBP);
    FUN_18055f960(unaff_RSI * 0x20 + *(int64_t *)(lVar1 + 0x5f8));
    uVar3 = unaff_R12D >> 0x1f & 0xf;
    uVar2 = unaff_R12D + uVar3;
    lVar4 = (int64_t)((int)uVar2 >> 4);
    lVar1 = *(int64_t *)(lVar1 + 0x618);
    *(ushort *)(lVar1 + lVar4 * 8 + 4) =
         *(ushort *)(lVar1 + 4 + lVar4 * 8) | (ushort)(1 << ((uVar2 & 0xf) - uVar3 & 0x1f));
  }
  return;
}






#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part036.c - 12 个函数

// 函数: void FUN_180067f60(int64_t param_1,int64_t param_2)
void FUN_180067f60(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  int8_t auStack_2e8 [32];
  uint64_t uStack_2c8;
  int32_t uStack_2c0;
  uint64_t uStack_2b8;
  int64_t lStack_2a8;
  uint64_t uStack_2a0;
  int64_t alStack_288 [4];
  void *puStack_268;
  void *puStack_260;
  uint64_t uStack_48;
  uint64_t uVar8;
  
  uStack_2a0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2e8;
  FUN_180624440(&puStack_268);
  puVar4 = &system_buffer_ptr;
  if (puStack_260 != (void *)0x0) {
    puVar4 = puStack_260;
  }
  uVar6 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0x60000001;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,3);
  lVar2 = CreateFileA(puVar4,0x80000000,1,0);
  if (lVar2 == -1) {
    puVar4 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar4 = *(void **)(param_2 + 8);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_1800_ptr,puVar4);
  }
  lVar3 = CreateIoCompletionPort(lVar2,*(uint64_t *)(param_1 + 0x213430),0,0);
  if (lVar3 != *(int64_t *)(param_1 + 0x213430)) {
    puVar4 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar4 = *(void **)(param_2 + 8);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_1856_ptr,puVar4);
  }
  lVar3 = param_1 + 0x2133e0;
  lStack_2a8 = lVar3;
  iVar1 = _Mtx_lock(lVar3);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  puVar5 = *(uint64_t **)(param_1 + 0x2133d8);
  if (puVar5 == (uint64_t *)0x0) {
    uVar8 = *(uint64_t *)(param_1 + 0x2133d0);
    if (0xff < uVar8) {
      iVar1 = _Mtx_unlock(lVar3);
      if (iVar1 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar1);
      }
      init_system_config = *(int32_t *)(param_2 + 0x10);
      puVar4 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar4 = *(void **)(param_2 + 8);
      }
      strcpy_s(init_system_config,0x100,puVar4);
      uVar8 = uVar6;
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          uVar6 = uVar6 * 0x1f + (int64_t)*(char *)(uVar8 + *(int64_t *)(param_2 + 8));
          uVar7 = (int)uVar8 + 1;
          uVar8 = (uint64_t)uVar7;
        } while ((int)uVar7 < *(int *)(param_2 + 0x10));
      }
      lRam0000000000000128 = lVar2;
      uStack_2c8 = uVar6;
      FUN_180068860(param_1 + 0x330,alStack_288,uVar8,param_2);
      *(uint64_t *)(alStack_288[0] + 0x118) = 0;
      puStack_268 = &system_state_ptr;
                    // WARNING: Subroutine does not return
      SystemDataManager(uStack_48 ^ (uint64_t)auStack_2e8);
    }
    puVar5 = (uint64_t *)(uVar8 * 0x130 + param_1 + 0x2003d0);
    *(uint64_t *)(param_1 + 0x2133d0) = uVar8 + 1;
  }
  else {
    *(uint64_t *)(param_1 + 0x2133d8) = *puVar5;
  }
                    // WARNING: Subroutine does not return
  memset(puVar5 + 1,0,0x128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180068250(int64_t param_1,int64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  uVar8 = *(uint64_t *)(param_3 + 0x118) & 0xfffffffffffff000;
  uVar5 = (*(int64_t *)(param_3 + 0x120) - uVar8) + *(uint64_t *)(param_3 + 0x118);
  uVar7 = (uint64_t)(-(uint)((uVar5 & 0xfff) != 0) & 0x1000) + (uVar5 & 0xfffffffffffff000);
  iVar3 = _Mtx_lock(param_1 + 0x200380);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  puVar6 = *(uint64_t **)(param_1 + 0x200378);
  if (puVar6 == (uint64_t *)0x0) {
    uVar1 = *(uint64_t *)(param_1 + 0x200370);
    if (0xfff < uVar1) {
      iVar3 = _Mtx_unlock(param_1 + 0x200380);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      FUN_180068490(0x20,param_3);
      uRam00000000000001f0 = 0;
      uRam00000000000001e8 = 0;
      uRam00000000000001e0 = 0;
      cVar2 = FUN_18006bda0(param_1,0x20,0x1e0,0x1e8,0x1f0);
      if (cVar2 == '\0') {
        FUN_1800687d0(param_1 + 0x370,0);
        uVar4 = 0;
      }
      else {
        init_system_config = 0;
        init_system_config = 0;
        init_system_config = 0;
        LOCK();
        init_system_config = uVar8;
        uRam00000000000001c8 = uVar5;
        uRam00000000000001d0 = uVar7;
        uRam00000000000001d8 = uVar8;
        lRam00000000000001f8 = param_2;
        *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + 1;
        UNLOCK();
        iVar3 = ReadFile(*(uint64_t *)(param_2 + 0x128),uRam00000000000001f0,uVar7 & 0xffffffff,0,
                         0);
        if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_180062300(system_message_context,&unknown_var_1960_ptr);
        }
        iVar3 = GetLastError();
        if (iVar3 != 0x3e5) {
                    // WARNING: Subroutine does not return
          FUN_180062300(system_message_context,&unknown_var_1904_ptr,iVar3);
        }
        uVar4 = 1;
      }
      return uVar4;
    }
    puVar6 = (uint64_t *)(uVar1 * 0x200 + param_1 + 0x370);
    *(uint64_t *)(param_1 + 0x200370) = uVar1 + 1;
  }
  else {
    *(uint64_t *)(param_1 + 0x200378) = *puVar6;
    *puVar6 = 0;
  }
                    // WARNING: Subroutine does not return
  memset(puVar6,0,0x200);
}



int64_t FUN_180068490(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  code *pcVar2;
  void *puVar3;
  
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_2 + 8);
  }
  strcpy_s(*(uint64_t *)(param_1 + 8),0x100,puVar3);
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
    pcVar2 = *(code **)(param_2 + 0x158);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1,param_2 + 0x148,1);
      pcVar2 = *(code **)(param_2 + 0x158);
    }
    *(code **)(param_1 + 0x158) = pcVar2;
    *(uint64_t *)(param_1 + 0x160) = *(uint64_t *)(param_2 + 0x160);
  }
  lVar1 = param_1 + 0x168;
  if (lVar1 != param_2 + 0x168) {
    if (*(code **)(param_1 + 0x178) != (code *)0x0) {
      (**(code **)(param_1 + 0x178))(lVar1,0,0);
    }
    pcVar2 = *(code **)(param_2 + 0x178);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1,param_2 + 0x168,1);
      pcVar2 = *(code **)(param_2 + 0x178);
    }
    *(code **)(param_1 + 0x178) = pcVar2;
    *(uint64_t *)(param_1 + 0x180) = *(uint64_t *)(param_2 + 0x180);
  }
  *(uint64_t *)(param_1 + 0x188) = *(uint64_t *)(param_2 + 0x188);
  *(uint64_t *)(param_1 + 400) = *(uint64_t *)(param_2 + 400);
  *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(param_2 + 0x198);
  *(uint64_t *)(param_1 + 0x1a0) = *(uint64_t *)(param_2 + 0x1a0);
  return param_1;
}





// 函数: void FUN_180068620(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180068620(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  CloseHandle(param_2[0x25]);
  iVar1 = _Mtx_lock(param_1 + 0x2133e0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  (**(code **)*param_2)(param_2,0,param_3,param_4,uVar2);
  *param_2 = *(uint64_t *)(param_1 + 0x2133d8);
  *(uint64_t **)(param_1 + 0x2133d8) = param_2;
  iVar1 = _Mtx_unlock(param_1 + 0x2133e0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_1800686b0(int64_t param_1)
void FUN_1800686b0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plStackX_8;
  
  cVar4 = FUN_180068a90(param_1 + 0x10,&plStackX_8);
  do {
    if (cVar4 == '\0') {
      return;
    }
    plVar2 = *(int64_t **)(param_1 + 0x318);
    if (plStackX_8 != (int64_t *)0x0) {
      *(int8_t *)(plStackX_8 + 4) = 0;
      *plVar2 = *plVar2 - plStackX_8[1];
      plVar2[2] = plVar2[2] + plStackX_8[1];
      plVar7 = (int64_t *)plStackX_8[3];
      plVar6 = (int64_t *)plVar2[3];
      plVar5 = plStackX_8;
      if (plVar7 != plVar6) {
        do {
          if ((plVar7 == (int64_t *)0x0) || ((char)plVar7[4] != '\0')) break;
          lVar3 = plVar5[2];
          plVar7[2] = lVar3;
          if (lVar3 != 0) {
            *(int64_t **)(lVar3 + 0x18) = plVar7;
          }
          plVar7[1] = plVar7[1] + plVar5[1];
          *plVar5 = plVar2[0x28005];
          plVar2[0x28005] = (int64_t)plVar5;
          plVar6 = (int64_t *)plVar2[3];
          plVar1 = plVar7 + 3;
          plVar5 = plVar7;
          plVar7 = (int64_t *)*plVar1;
        } while ((int64_t *)*plVar1 != plVar6);
      }
      plVar7 = (int64_t *)plVar5[2];
      while (((plVar5 != plVar6 && (plVar7 != (int64_t *)0x0)) && ((char)plVar7[4] == '\0'))) {
        lVar3 = plVar7[2];
        plVar5[2] = lVar3;
        if (lVar3 != 0) {
          *(int64_t **)(lVar3 + 0x18) = plVar5;
        }
        plVar5[1] = plVar5[1] + plVar7[1];
        *plVar7 = plVar2[0x28005];
        plVar2[0x28005] = (int64_t)plVar7;
        plVar6 = (int64_t *)plVar2[3];
        plVar7 = (int64_t *)plVar5[2];
      }
    }
    cVar4 = FUN_180068a90(param_1 + 0x10,&plStackX_8);
  } while( true );
}





// 函数: void FUN_1800687d0(int64_t param_1,uint64_t *param_2)
void FUN_1800687d0(int64_t param_1,uint64_t *param_2)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x200010);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_180069530(param_2 + 4);
  *param_2 = *(uint64_t *)(param_1 + 0x200008);
  *(uint64_t **)(param_1 + 0x200008) = param_2;
  iVar1 = _Mtx_unlock(param_1 + 0x200010);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t *
FUN_180068860(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  lVar3 = func_0x0001800694c0(param_1,*(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8),
                              param_4);
  if (lVar3 == 0) {
    FUN_18066c220(param_1 + 0x20,&param_5,*(int32_t *)(param_1 + 0x10),
                  *(int32_t *)(param_1 + 0x18),1);
    lVar3 = SystemMemoryManager(system_memory_pool_ptr,0x128,*(int8_t *)(param_1 + 0x2c));
    FUN_180068ff0(lVar3,param_4);
    *(uint64_t *)(lVar3 + 0x118) = 0;
    *(uint64_t *)(lVar3 + 0x120) = 0;
    if ((char)param_5 != '\0') {
      uVar4 = SystemStateHandler(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                            *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
      memset(uVar4,0,(uint64_t)param_5._4_4_ * 8);
    }
    *(uint64_t *)(lVar3 + 0x120) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
    *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = lVar3;
    *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
    lVar1 = *(int64_t *)(param_1 + 8);
    *param_2 = lVar3;
    param_2[1] = lVar1 + uVar2 * 8;
    *(int8_t *)(param_2 + 2) = 1;
  }
  else {
    lVar1 = *(int64_t *)(param_1 + 8);
    *param_2 = lVar3;
    param_2[1] = lVar1 + uVar2 * 8;
    *(int8_t *)(param_2 + 2) = 0;
  }
  return param_2;
}



uint64_t FUN_180068a90(uint64_t *param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  bool bVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  
  uVar11 = *param_1;
  uVar10 = 0;
  uVar8 = uVar10;
  uVar12 = uVar10;
  uVar14 = uVar10;
  do {
    uVar9 = uVar8;
    if (uVar11 == 0) break;
    uVar7 = *(int64_t *)(uVar11 + 0x20) - *(int64_t *)(uVar11 + 0x28);
    if ((uint64_t)(*(int64_t *)(uVar11 + 0x28) - *(int64_t *)(uVar11 + 0x20)) <
        0x8000000000000001) {
      uVar7 = uVar10;
    }
    uVar13 = uVar12;
    if ((uVar7 != 0) && (uVar14 = uVar14 + 1, uVar9 = uVar11, uVar13 = uVar7, uVar7 <= uVar12)) {
      uVar9 = uVar8;
      uVar13 = uVar12;
    }
    plVar1 = (int64_t *)(uVar11 + 8);
    uVar11 = *plVar1 - 8;
    if (*plVar1 == 0) {
      uVar11 = uVar10;
    }
    uVar8 = uVar9;
    uVar12 = uVar13;
  } while (uVar14 < 3);
  if (uVar14 != 0) {
    cVar5 = FUN_180068ce0(uVar9,param_2);
    if (cVar5 != '\0') {
      return 1;
    }
    uVar11 = *param_1;
    while (uVar11 != 0) {
      if (uVar11 != uVar9) {
        lVar4 = *(int64_t *)(uVar11 + 0x38);
        if (*(char *)(uVar11 + 0x48) == '\0') {
          if ((uint64_t)((*(int64_t *)(uVar11 + 0x30) - lVar4) - *(int64_t *)(uVar11 + 0x20)) <
              0x8000000000000001) goto LAB_180068c92;
          LOCK();
          plVar1 = (int64_t *)(uVar11 + 0x30);
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if ((uint64_t)((lVar3 - *(int64_t *)(uVar11 + 0x20)) - lVar4) < 0x8000000000000001)
          goto LAB_180068c87;
          LOCK();
          puVar2 = (uint64_t *)(uVar11 + 0x28);
          uVar8 = *puVar2;
          *puVar2 = *puVar2 + 1;
          UNLOCK();
          plVar1 = *(int64_t **)(uVar11 + 0x60);
          lVar3 = *(int64_t *)
                   (plVar1[3] +
                   (((uVar8 & 0xffffffffffffffe0) - **(int64_t **)(plVar1[3] + plVar1[1] * 8) >> 5)
                    + plVar1[1] & *plVar1 - 1U) * 8);
          lVar4 = *(int64_t *)(lVar3 + 8);
          *param_2 = *(uint64_t *)(lVar4 + (uint64_t)((uint)uVar8 & 0x1f) * 8);
          LOCK();
          plVar1 = (int64_t *)(lVar4 + 0x108);
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if (lVar4 == 0x1f) {
            *(uint64_t *)(lVar3 + 8) = 0;
            func_0x000180060c10(*(uint64_t *)(uVar11 + 0x50));
          }
          bVar6 = true;
        }
        else {
          if (0x8000000000000000 <
              (uint64_t)((*(int64_t *)(uVar11 + 0x30) - lVar4) - *(int64_t *)(uVar11 + 0x20))) {
            LOCK();
            plVar1 = (int64_t *)(uVar11 + 0x30);
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            if (0x8000000000000000 < (uint64_t)((lVar3 - *(int64_t *)(uVar11 + 0x20)) - lVar4)) {
              LOCK();
              puVar2 = (uint64_t *)(uVar11 + 0x28);
              uVar8 = *puVar2;
              *puVar2 = *puVar2 + 1;
              UNLOCK();
              plVar1 = *(int64_t **)(uVar11 + 0x58);
              uVar12 = (uint64_t)((uint)uVar8 & 0x1f);
              lVar4 = *(int64_t *)
                       (plVar1[2] + 8 +
                       (((uVar8 & 0xffffffffffffffe0) - *(int64_t *)(plVar1[2] + plVar1[1] * 0x10)
                        >> 5) + plVar1[1] & *plVar1 - 1U) * 0x10);
              *param_2 = *(uint64_t *)(lVar4 + uVar12 * 8);
              *(int8_t *)((lVar4 - uVar12) + 0x12f) = 1;
              bVar6 = true;
              goto LAB_180068c94;
            }
LAB_180068c87:
            LOCK();
            *(int64_t *)(uVar11 + 0x38) = *(int64_t *)(uVar11 + 0x38) + 1;
            UNLOCK();
          }
LAB_180068c92:
          bVar6 = false;
        }
LAB_180068c94:
        if (bVar6) {
          return 1;
        }
      }
      plVar1 = (int64_t *)(uVar11 + 8);
      uVar11 = *plVar1 - 8;
      if (*plVar1 == 0) {
        uVar11 = uVar10;
      }
    }
  }
  return 0;
}



uint64_t FUN_180068ce0(int64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    if ((uint64_t)
        ((*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x38)) -
        *(int64_t *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (int64_t *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (uint64_t)((lVar3 - *(int64_t *)(param_1 + 0x20)) - *(int64_t *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (uint64_t *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(int64_t **)(param_1 + 0x60);
      lVar5 = *(int64_t *)
               (plVar1[3] +
               (((uVar4 & 0xffffffffffffffe0) - **(int64_t **)(plVar1[3] + plVar1[1] * 8) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 8);
      lVar3 = *(int64_t *)(lVar5 + 8);
      *param_2 = *(uint64_t *)(lVar3 + (uint64_t)((uint)uVar4 & 0x1f) * 8);
      LOCK();
      plVar1 = (int64_t *)(lVar3 + 0x108);
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar3 == 0x1f) {
        *(uint64_t *)(lVar5 + 8) = 0;
        func_0x000180060c10(*(uint64_t *)(param_1 + 0x50));
      }
      return 1;
    }
  }
  else {
    if ((uint64_t)
        ((*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x38)) -
        *(int64_t *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (int64_t *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (uint64_t)((lVar3 - *(int64_t *)(param_1 + 0x20)) - *(int64_t *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (uint64_t *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(int64_t **)(param_1 + 0x58);
      uVar6 = (uint64_t)((uint)uVar4 & 0x1f);
      lVar3 = *(int64_t *)
               (plVar1[2] + 8 +
               (((uVar4 & 0xffffffffffffffe0) - *(int64_t *)(plVar1[2] + plVar1[1] * 0x10) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 0x10);
      *param_2 = *(uint64_t *)(lVar3 + uVar6 * 8);
      *(int8_t *)((lVar3 - uVar6) + 0x12f) = 1;
      return 1;
    }
  }
  LOCK();
  *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + 1;
  UNLOCK();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180068ec0(int64_t *param_1,int64_t *param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  
  if (param_3 == 3) {
    lVar2 = 0x180bfd400;
  }
  else if (param_3 == 4) {
    lVar2 = *param_1;
  }
  else {
    if (param_3 == 0) {
      lVar2 = *param_1;
      if (lVar2 != 0) {
        if (*(code **)(lVar2 + 0x10) != (code *)0x0) {
          (**(code **)(lVar2 + 0x10))(lVar2,0,0,param_4,0xfffffffffffffffe);
        }
                    // WARNING: Subroutine does not return
        SystemCoreProcessor(lVar2);
      }
    }
    else {
      if (param_3 == 1) {
        lVar1 = SystemStateHandler(system_memory_pool_ptr,0x20,8,system_allocation_flags);
        lVar2 = *param_2;
        *(uint64_t *)(lVar1 + 0x10) = 0;
        *(code **)(lVar1 + 0x18) = _guard_check_icall;
        if (lVar1 != lVar2) {
          pcVar3 = *(code **)(lVar2 + 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(lVar1,lVar2,1);
            pcVar3 = *(code **)(lVar2 + 0x10);
          }
          *(code **)(lVar1 + 0x10) = pcVar3;
          *(uint64_t *)(lVar1 + 0x18) = *(uint64_t *)(lVar2 + 0x18);
        }
        *param_1 = lVar1;
        return 0;
      }
      if (param_3 == 2) {
        *param_1 = *param_2;
        *param_2 = 0;
        return 0;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



uint64_t *
FUN_180068ff0(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_2008_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x100,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



uint64_t * FUN_180069070(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_2008_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = _guard_check_icall;
  param_1[0x2f] = 0;
  param_1[0x30] = _guard_check_icall;
  param_1[0x27] = 0xffffffffffffffff;
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(int8_t *)(param_1 + 0x28) = 0;
  return param_1;
}





// 函数: void FUN_180069130(int64_t param_1,int64_t param_2)
void FUN_180069130(int64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_2 + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,2);
    pcVar1 = *(code **)(param_2 + 0x10);
  }
  *(code **)(param_1 + 0x10) = pcVar1;
  *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_2 + 0x18);
  *(code **)(param_2 + 0x18) = _guard_check_icall;
  *(uint64_t *)(param_2 + 0x10) = 0;
  return;
}



int64_t FUN_180069190(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *(void **)(param_1 + 8) = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x128,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_1800691e0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x118,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180069220(int64_t param_1,uint64_t param_2,int param_3)
void FUN_180069220(int64_t param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 0x100) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_180069241(void)
void FUN_180069241(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180069266(int8_t *param_1)
void FUN_180069266(int8_t *param_1)

{
  int64_t unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180069280(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180069280(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t auStack_198 [32];
  uint64_t uStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [264];
  uint64_t uStack_48;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  puStack_168 = &unknown_var_2008_ptr;
  puStack_160 = auStack_150;
  uStack_158 = 0;
  auStack_150[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_160,*(int64_t *)(param_1 + 8),lVar1 - *(int64_t *)(param_1 + 8));
  }
  puStack_168 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemDataManager(uStack_48 ^ (uint64_t)auStack_198);
}





// 函数: void FUN_1800693f0(int64_t param_1,int64_t param_2)
void FUN_1800693f0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x100) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180069429. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x100);
    return;
  }
  SystemOptimizationProcessor(&unknown_var_616_ptr,0x100,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}



int64_t FUN_180069470(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *(void **)(param_1 + 8) = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x130,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180069530(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180069530(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if ((code *)param_1[0x2f] != (code *)0x0) {
    (*(code *)param_1[0x2f])(param_1 + 0x2d,0,0,param_4,0xfffffffffffffffe);
  }
  if ((code *)param_1[0x2b] != (code *)0x0) {
    (*(code *)param_1[0x2b])(param_1 + 0x29,0,0);
  }
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_1800695a0(int64_t param_1)
void FUN_1800695a0(int64_t param_1)

{
  *(void **)(param_1 + 8) = &system_state_ptr;
  return;
}



uint64_t *
FUN_1800696d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_1000_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_180069720(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_2280_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



uint64_t FUN_180069760(uint64_t param_1,uint64_t param_2)

{
  FUN_1800697a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}






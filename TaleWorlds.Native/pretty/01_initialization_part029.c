#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part029.c - 5 个函数

// 函数: void FUN_18005e57a(longlong param_1,longlong *param_2)
void FUN_18005e57a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = 0;
  plVar1 = *(longlong **)(param_1 + 0x48);
  uVar6 = *(longlong *)(param_1 + 0x50) - (longlong)plVar1 >> 3;
  plVar4 = plVar1;
  if (uVar6 != 0) {
    do {
      if ((longlong *)*plVar4 == param_2) {
        FUN_18020e7b0(plVar1[iVar5]);
        uVar2 = *(ulonglong *)(param_1 + 0x50);
        lVar3 = *(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 8;
        uVar6 = lVar3 + 8;
        if (uVar6 < uVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar3,uVar6,uVar2 - uVar6);
        }
        *(ulonglong *)(param_1 + 0x50) = uVar2 - 8;
        break;
      }
      iVar5 = iVar5 + 1;
      plVar4 = plVar4 + 1;
    } while ((ulonglong)(longlong)iVar5 < uVar6);
  }
  if (param_2 != (longlong *)0x0) {
    lVar3 = __RTCastToVoid(param_2);
    (**(code **)(*param_2 + 0x28))(param_2,0);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  return;
}





// 函数: void FUN_18005e5ff(void)
void FUN_18005e5ff(void)

{
  longlong lVar1;
  longlong *unaff_RDI;
  
  lVar1 = __RTCastToVoid();
  (**(code **)(*unaff_RDI + 0x28))();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005e630(longlong param_1)
void FUN_18005e630(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_18020f150(*(uint64_t *)(*(longlong *)(param_1 + 8) + 8));
  lVar2 = system_message_buffer + 0x20;
  iVar1 = _Mtx_lock(lVar2);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_unlock(lVar2);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00018005e68f. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}





// 函数: void FUN_18005e6a0(uint64_t param_1,longlong *param_2,int8_t param_3,uint64_t param_4)
void FUN_18005e6a0(uint64_t param_1,longlong *param_2,int8_t param_3,uint64_t param_4)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  while( true ) {
    pcVar1 = *(code **)(*(longlong *)*param_2 + 0x68);
    if (pcVar1 == (code *)&unknown_var_9696_ptr) {
      cVar3 = (char)((longlong *)*param_2)[2] != '\0';
    }
    else {
      cVar3 = (*pcVar1)();
    }
    if (cVar3 != '\0') break;
    plVar2 = (longlong *)FUN_18005e890(param_1);
    cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_3,*(code **)(*plVar2 + 0x20),param_4,uVar4);
    if (cVar3 == '\0') {
      pcVar1 = *(code **)(*(longlong *)*param_2 + 0x80);
      if (pcVar1 == (code *)&unknown_var_1840_ptr) {
        FUN_1800496b0((longlong *)*param_2 + 4);
      }
      else {
        (*pcVar1)();
      }
    }
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}





// 函数: void FUN_18005e770(uint64_t param_1,longlong *param_2,char param_3)
void FUN_18005e770(uint64_t param_1,longlong *param_2,char param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  
  lVar6 = param_2[1];
  lVar5 = *param_2;
  do {
    bVar2 = false;
    uVar4 = 0;
    if (lVar6 - lVar5 >> 3 == 0) {
      return;
    }
    do {
      plVar3 = *(longlong **)(uVar4 * 8 + lVar5);
      pcVar1 = *(code **)(*plVar3 + 0x68);
      if (pcVar1 == (code *)&unknown_var_9696_ptr) {
        cVar7 = (char)plVar3[2] != '\0';
      }
      else {
        cVar7 = (*pcVar1)();
      }
      if (cVar7 == '\0') {
        bVar2 = true;
        plVar3 = (longlong *)FUN_18005e890(param_1);
        if (param_3 == '\0') {
          cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,0);
        }
        else {
          cVar7 = FUN_18020ee40();
        }
        if (cVar7 == '\0') {
          plVar3 = *(longlong **)(uVar4 * 8 + *param_2);
          pcVar1 = *(code **)(*plVar3 + 0x80);
          if (pcVar1 == (code *)&unknown_var_1840_ptr) {
            FUN_1800496b0(plVar3 + 4);
          }
          else {
            (*pcVar1)();
          }
        }
      }
      lVar6 = param_2[1];
      uVar4 = (ulonglong)((int)uVar4 + 1);
      lVar5 = *param_2;
    } while (uVar4 < (ulonglong)(lVar6 - lVar5 >> 3));
  } while (bVar2);
  return;
}



longlong FUN_18005e890(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = uVar4;
  if (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3 != 0) {
    do {
      iVar2 = _Thrd_id();
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
      if (*(int *)(lVar1 + 0x48) == iVar2) {
        return lVar1;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < (ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3));
  }
  if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3 != 0) {
    do {
      iVar2 = _Thrd_id();
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4 * 8);
      if (*(int *)(lVar1 + 0x48) == iVar2) {
        return lVar1;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < (ulonglong)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3)
            );
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18005e950(uint64_t *param_1)

{
  uint64_t uVar1;
  ulonglong uVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint64_t *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = 0;
  puVar3 = param_1 + 0xb;
  *param_1 = 0;
  lVar8 = 0x20;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  lVar7 = 0x20;
  puVar6 = puVar3;
  do {
    func_0x000180059bb0(puVar6);
    puVar6 = puVar6 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(uint64_t *)((longlong)param_1 + 0x25c) = 0;
  *(int32_t *)(param_1 + 0x4b) = 0;
  param_1[7] = 0;
  param_1[8] = 0x20;
  param_1[9] = puVar3;
  do {
    *(int32_t *)puVar3 = 0;
    uVar1 = system_memory_pool_ptr;
    puVar3 = puVar3 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar7 = 6;
  param_1[10] = 0;
  param_1[6] = param_1 + 8;
  param_1[4] = 6;
  uVar2 = FUN_18062b420(uVar1,0x7b0,10);
  uVar4 = uVar5;
  if (uVar2 != 0) {
    puVar3 = (uint64_t *)(uVar2 + 0x108);
    do {
      puVar3[-1] = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 5) = 0;
      puVar3[6] = 0;
      *(int16_t *)(puVar3 + 7) = 0x100;
      puVar3 = puVar3 + 0x29;
      lVar7 = lVar7 + -1;
      uVar4 = uVar2;
    } while (lVar7 != 0);
  }
  param_1[3] = uVar4;
  if (uVar4 == 0) {
    param_1[4] = 0;
    uVar4 = uVar5;
  }
  else {
    uVar4 = param_1[4];
  }
  uVar2 = uVar5;
  if (uVar4 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *(int8_t *)(uVar5 + 0x141 + param_1[3]) = 0;
      uVar5 = uVar5 + 0x148;
    } while (uVar2 < (ulonglong)param_1[4]);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




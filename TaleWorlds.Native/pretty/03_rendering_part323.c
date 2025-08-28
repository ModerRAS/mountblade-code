#include "TaleWorlds.Native.Split.h"

// 03_rendering_part323.c - 38 个函数

// 函数: void FUN_180438c93(uint64_t param_1,longlong param_2)
void FUN_180438c93(uint64_t param_1,longlong param_2)

{
  longlong in_RAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)((ulonglong)*(uint *)(param_2 + 0x43a014 + in_RAX * 4) + param_2);
                    // WARNING: Could not recover jumptable at 0x000180438ca2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}





// 函数: void FUN_180438d14(void)
void FUN_180438d14(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x1340) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438d31(void)
void FUN_180438d31(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  longlong unaff_RBP;
  int32_t unaff_XMM6_Da;
  
  lVar1 = _DAT_180c86920;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(longlong *)(lVar1 + 0x1410) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1418))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(void **)(lVar1 + 0x13c0) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x13c0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      *(int32_t *)(lVar1 + 0x13b0) = *(int32_t *)(lVar1 + 0x13f8);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x13b0) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_180438da1(void)
void FUN_180438da1(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x13b0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438dbe(void)
void FUN_180438dbe(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  longlong unaff_RBP;
  int32_t unaff_XMM6_Da;
  
  lVar1 = _DAT_180c86920;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(longlong *)(lVar1 + 0x1480) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1488))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(void **)(lVar1 + 0x1430) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x1430);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      *(int32_t *)(lVar1 + 0x1420) = *(int32_t *)(lVar1 + 0x1468);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x1420) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_180438e2e(void)
void FUN_180438e2e(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x1420) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438e4b(void)
void FUN_180438e4b(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  longlong unaff_RBP;
  int32_t unaff_XMM6_Da;
  
  lVar1 = _DAT_180c86920;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(longlong *)(lVar1 + 0x14f0) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x14f8))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(void **)(lVar1 + 0x14a0) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x14a0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      *(int32_t *)(lVar1 + 0x1490) = *(int32_t *)(lVar1 + 0x14d8);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x1490) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_180438ebb(void)
void FUN_180438ebb(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x1490) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438ed8(void)
void FUN_180438ed8(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  longlong unaff_RBP;
  int32_t unaff_XMM6_Da;
  
  lVar1 = _DAT_180c86920;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(longlong *)(lVar1 + 0x1560) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1568))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(void **)(lVar1 + 0x1510) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x1510);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      *(int32_t *)(lVar1 + 0x1500) = *(int32_t *)(lVar1 + 0x1548);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x1500) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_180438f48(void)
void FUN_180438f48(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x1500) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438f65(void)
void FUN_180438f65(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  int iVar6;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar6 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x15d0);
  *(int *)(unaff_RBP + 0x10) = iVar6;
  iVar4 = iVar6;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x15d8))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar2 + 0x1580) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x1580);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      iVar4 = *(int *)(lVar2 + 0x15b8);
    }
    else {
      iVar4 = *(int *)(unaff_RBP + 0x10);
    }
  }
  *(int *)(lVar2 + 0x1570) = iVar4;
                    // WARNING: Could not recover jumptable at 0x000180438ff3. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*_DAT_180c86878 + 0xa8))(_DAT_180c86878,iVar6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438ffa(void)
void FUN_180438ffa(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x1330) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x1338))(&stack0x00000048), cVar2 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar3 = &DAT_18098bc73;
      if (*(void **)(lVar1 + 0x12e0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x12e0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar3);
    }
    *(int32_t *)(lVar1 + 0x12d0) = *(int32_t *)(lVar1 + 0x1318);
    return;
  }
  *(int *)(lVar1 + 0x12d0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439019(void)
void FUN_180439019(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x1640);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x1648))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar2 + 0x15f0) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x15f0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      *(int32_t *)(lVar2 + 0x15e0) = *(int32_t *)(lVar2 + 0x1628);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x15e0) = iVar4;
  return;
}





// 函数: void FUN_18043908b(void)
void FUN_18043908b(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x15e0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804390a4(void)
void FUN_1804390a4(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x16b0);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x16b8))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar2 + 0x1660) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x1660);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      *(int32_t *)(lVar2 + 0x1650) = *(int32_t *)(lVar2 + 0x1698);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x1650) = iVar4;
  return;
}





// 函数: void FUN_180439116(void)
void FUN_180439116(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x1650) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043912f(void)
void FUN_18043912f(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x23d0);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x23d8))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar2 + 0x2380) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x2380);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      *(int32_t *)(lVar2 + 0x2370) = *(int32_t *)(lVar2 + 0x23b8);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x2370) = iVar4;
  return;
}





// 函数: void FUN_1804391a1(void)
void FUN_1804391a1(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x2370) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804391ba(void)
void FUN_1804391ba(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x2440);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x2448))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar2 + 0x23f0) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x23f0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      *(int32_t *)(lVar2 + 0x23e0) = *(int32_t *)(lVar2 + 0x2428);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x23e0) = iVar4;
  return;
}





// 函数: void FUN_18043922c(void)
void FUN_18043922c(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x23e0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439245(void)
void FUN_180439245(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  longlong unaff_RBP;
  int32_t unaff_XMM6_Da;
  
  lVar1 = _DAT_180c86920;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(longlong *)(lVar1 + 0x1720) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1728))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(void **)(lVar1 + 0x16d0) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x16d0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      *(int32_t *)(lVar1 + 0x16c0) = *(int32_t *)(lVar1 + 0x1708);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x16c0) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_1804392b5(void)
void FUN_1804392b5(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x16c0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804392d2(void)
void FUN_1804392d2(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x1790);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x1798))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar2 + 0x1740) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x1740);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      *(int32_t *)(lVar2 + 0x1730) = *(int32_t *)(lVar2 + 0x1778);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x1730) = iVar4;
  return;
}





// 函数: void FUN_180439344(void)
void FUN_180439344(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x1730) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043935d(void)
void FUN_18043935d(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  longlong unaff_RBP;
  int32_t unaff_XMM6_Da;
  
  lVar1 = _DAT_180c86920;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(longlong *)(lVar1 + 0x1950) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x1958))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(void **)(lVar1 + 0x1900) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x1900);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      *(int32_t *)(lVar1 + 0x18f0) = *(int32_t *)(lVar1 + 0x1938);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x18f0) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_1804393cd(void)
void FUN_1804393cd(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x18f0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804393ea(void)
void FUN_1804393ea(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x2360);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x2368))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar2 + 0x2310) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x2310);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      *(int32_t *)(lVar2 + 0x2300) = *(int32_t *)(lVar2 + 0x2348);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x2300) = iVar4;
  return;
}





// 函数: void FUN_18043945c(void)
void FUN_18043945c(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x2300) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439475(void)
void FUN_180439475(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x24b0);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x24b8))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar2 + 0x2460) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x2460);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      *(int32_t *)(lVar2 + 0x2450) = *(int32_t *)(lVar2 + 0x2498);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x2450) = iVar4;
  return;
}





// 函数: void FUN_1804394e7(void)
void FUN_1804394e7(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x2450) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439500(void)
void FUN_180439500(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  longlong unaff_RBP;
  int32_t unaff_XMM6_Da;
  
  lVar1 = _DAT_180c86920;
  *(int32_t *)(unaff_RBP + 0x10) = unaff_XMM6_Da;
  if (*(longlong *)(lVar1 + 0x2520) != 0) {
    cVar2 = (**(code **)(lVar1 + 0x2528))(unaff_RBP + 0x10);
    if (cVar2 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(void **)(lVar1 + 0x24d0) != (void *)0x0) {
          puVar3 = *(void **)(lVar1 + 0x24d0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      *(int32_t *)(lVar1 + 0x24c0) = *(int32_t *)(lVar1 + 0x2508);
      return;
    }
    unaff_XMM6_Da = *(int32_t *)(unaff_RBP + 0x10);
  }
  *(int32_t *)(lVar1 + 0x24c0) = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_180439570(void)
void FUN_180439570(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x24c0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043958d(void)
void FUN_18043958d(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x2590);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x2598))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar2 + 0x2540) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x2540);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      *(int32_t *)(lVar2 + 0x2530) = *(int32_t *)(lVar2 + 0x2578);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x2530) = iVar4;
  return;
}





// 函数: void FUN_1804395ff(void)
void FUN_1804395ff(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x2530) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439618(void)
void FUN_180439618(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x2600);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x2608))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar2 + 0x25b0) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x25b0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      *(int32_t *)(lVar2 + 0x25a0) = *(int32_t *)(lVar2 + 0x25e8);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x25a0) = iVar4;
  return;
}





// 函数: void FUN_18043968a(void)
void FUN_18043968a(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x25a0) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804396a3(void)
void FUN_1804396a3(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x680) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x688))(&stack0x00000048), cVar2 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar3 = &DAT_18098bc73;
      if (*(void **)(lVar1 + 0x630) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x630);
      }
      FUN_180626f80(&UNK_18098bc00,puVar3);
    }
    *(int32_t *)(lVar1 + 0x620) = *(int32_t *)(lVar1 + 0x668);
    return;
  }
  *(int *)(lVar1 + 0x620) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804396c2(void)
void FUN_1804396c2(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x6f0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x6f8))(&stack0x00000048), cVar2 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar3 = &DAT_18098bc73;
      if (*(void **)(lVar1 + 0x6a0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x6a0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar3);
    }
    *(int32_t *)(lVar1 + 0x690) = *(int32_t *)(lVar1 + 0x6d8);
    return;
  }
  *(int *)(lVar1 + 0x690) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




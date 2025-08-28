#include "TaleWorlds.Native.Split.h"

// 03_rendering_part664_sub002_sub002.c - 1 个函数

// 函数: void FUN_180648fd0(ulonglong param_1,int8_t param_2,byte *param_3)
void FUN_180648fd0(ulonglong param_1,int8_t param_2,byte *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte abStackX_8 [32];
  
  if (param_1 < -_DAT_180bf66a8 - 1) {
    uVar2 = _DAT_180bf66a8 - 1;
    if ((uVar2 & _DAT_180bf66a8) == 0) {
      param_1 = ~uVar2 & param_1 + uVar2;
    }
    else {
      param_1 = ((param_1 + uVar2) / _DAT_180bf66a8) * _DAT_180bf66a8;
    }
  }
  if ((_DAT_180bf66a8 - 1 & _DAT_180bf66a8) == 0) {
    uVar2 = ~(_DAT_180bf66a8 - 1) & _DAT_180bf66a8 + 0x3fffff;
  }
  else {
    uVar2 = ((_DAT_180bf66a8 + 0x3fffff) / _DAT_180bf66a8) * _DAT_180bf66a8;
  }
  uVar3 = _DAT_180bf66a8 & 0xffffffffffffff00;
  abStackX_8[0] = 0;
  if (param_3 != (byte *)0x0) {
    abStackX_8[0] = *param_3;
    uVar3 = (ulonglong)abStackX_8[0];
    *param_3 = 0;
  }
  pbVar1 = abStackX_8;
  if (param_3 != (byte *)0x0) {
    pbVar1 = param_3;
  }
  FUN_180648cc0(param_1,uVar2,param_2,uVar3,pbVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180649070(ulonglong param_1,longlong param_2,int8_t *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_3 != (int8_t *)0x0) {
    *param_3 = 0;
  }
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar3 = _DAT_180bf66a8 - 1;
    if ((_DAT_180bf66a8 & uVar3) == 0) {
      uVar5 = ~uVar3 & param_1;
    }
    else {
      uVar5 = (param_1 / _DAT_180bf66a8) * _DAT_180bf66a8;
    }
    uVar2 = uVar3 + param_1 + param_2;
    if ((_DAT_180bf66a8 & uVar3) == 0) {
      uVar2 = ~uVar3 & uVar2;
    }
    else {
      uVar2 = (uVar2 / _DAT_180bf66a8) * _DAT_180bf66a8;
    }
    lVar4 = uVar2 - uVar5;
    if (0 < lVar4) {
      func_0x000180646ff0(&system_data_ede0,param_2);
      LOCK();
      _DAT_180c8ef68 = _DAT_180c8ef68 + 1;
      UNLOCK();
      LOCK();
      _DAT_180c8ef60 = _DAT_180c8ef60 + 1;
      UNLOCK();
      uVar3 = VirtualAlloc(uVar5,lVar4,0x1000,4);
      if (uVar3 == uVar5) {
        return true;
      }
      iVar1 = GetLastError();
      if (iVar1 != 0) {
        FUN_180650340(&unknown_var_8392_ptr,&unknown_var_8436_ptr,uVar5,lVar4,iVar1);
      }
      return iVar1 == 0;
    }
  }
  return true;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1806490f8(void)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RDI;
  
  func_0x000180646ff0(&system_data_ede0);
  LOCK();
  _DAT_180c8ef68 = _DAT_180c8ef68 + 1;
  UNLOCK();
  LOCK();
  _DAT_180c8ef60 = _DAT_180c8ef60 + 1;
  UNLOCK();
  lVar2 = VirtualAlloc();
  if (lVar2 == unaff_RDI) {
    return true;
  }
  iVar1 = GetLastError();
  if (iVar1 != 0) {
    FUN_180650340(&unknown_var_8392_ptr,&unknown_var_8436_ptr);
  }
  return iVar1 == 0;
}



bool FUN_18064915c(void)

{
  int iVar1;
  
  iVar1 = GetLastError();
  if (iVar1 != 0) {
    FUN_180650340(&unknown_var_8392_ptr,&unknown_var_8436_ptr);
  }
  return iVar1 == 0;
}



int8_t FUN_18064919e(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1806491b0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar2 = _DAT_180bf66a8 - 1;
    if ((_DAT_180bf66a8 & uVar2) == 0) {
      uVar4 = ~uVar2 & uVar2 + param_1;
    }
    else {
      uVar4 = ((uVar2 + param_1) / _DAT_180bf66a8) * _DAT_180bf66a8;
    }
    if ((_DAT_180bf66a8 & uVar2) == 0) {
      uVar2 = ~uVar2 & param_1 + param_2;
    }
    else {
      uVar2 = ((ulonglong)(param_1 + param_2) / _DAT_180bf66a8) * _DAT_180bf66a8;
    }
    lVar3 = uVar2 - uVar4;
    if (0 < lVar3) {
      func_0x000180646ff0(&system_data_ede0,-param_2);
      iVar1 = VirtualFree(uVar4,lVar3,0x4000);
      if (iVar1 != 0) {
        return true;
      }
      iVar1 = GetLastError();
      if (iVar1 != 0) {
        FUN_180650340(&unknown_var_8392_ptr,&unknown_var_8448_ptr,uVar4,lVar3,iVar1);
      }
      return iVar1 == 0;
    }
  }
  return true;
}



bool FUN_180649229(void)

{
  int iVar1;
  uint64_t in_R9;
  
  func_0x000180646ff0(&system_data_ede0,in_R9);
  iVar1 = VirtualFree();
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = GetLastError();
  if (iVar1 != 0) {
    FUN_180650340(&unknown_var_8392_ptr,&unknown_var_8448_ptr);
  }
  return iVar1 == 0;
}



bool FUN_18064926a(void)

{
  int iVar1;
  
  iVar1 = GetLastError();
  if (iVar1 != 0) {
    FUN_180650340(&unknown_var_8392_ptr,&unknown_var_8448_ptr);
  }
  return iVar1 == 0;
}



int8_t FUN_1806492a8(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1806492c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar2 = _DAT_180bf66a8 - 1;
    if ((_DAT_180bf66a8 & uVar2) == 0) {
      uVar1 = ~uVar2 & uVar2 + param_1;
    }
    else {
      uVar1 = ((uVar2 + param_1) / _DAT_180bf66a8) * _DAT_180bf66a8;
    }
    if ((_DAT_180bf66a8 & uVar2) == 0) {
      uVar2 = ~uVar2 & param_1 + param_2;
    }
    else {
      uVar2 = ((ulonglong)(param_1 + param_2) / _DAT_180bf66a8) * _DAT_180bf66a8;
    }
    if (0 < (longlong)(uVar2 - uVar1)) {
      func_0x000180646ff0(&system_data_ee00,uVar2 - uVar1);
      return 0;
    }
  }
  return 1;
}



ulonglong FUN_180649350(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  
  uVar2 = *(ulonglong *)(param_1 + param_2 * 8);
  puVar1 = (ulonglong *)(param_1 + param_2 * 8);
  if (uVar2 != 0xffffffffffffffff) {
    if (param_3 < 0x40) {
      lVar7 = (1L << ((byte)param_3 & 0x3f)) + -1;
    }
    else {
      lVar7 = -1;
    }
    uVar6 = 0x40;
    uVar4 = ~uVar2;
    in_RAX = uVar4;
    if (uVar4 != 0) {
      in_RAX = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> in_RAX & 1) == 0; in_RAX = in_RAX + 1) {
        }
      }
      uVar6 = in_RAX & 0xffffffff;
    }
    uVar4 = lVar7 << ((byte)uVar6 & 0x3f);
    while (uVar6 <= 0x40 - param_3) {
      uVar5 = uVar4 & uVar2;
      if (uVar5 == 0) {
        LOCK();
        in_RAX = *puVar1;
        bVar8 = uVar2 == in_RAX;
        if (bVar8) {
          *puVar1 = uVar4 | uVar2;
          in_RAX = uVar2;
        }
        UNLOCK();
        uVar2 = in_RAX;
        if (bVar8) {
          *param_4 = param_2 * 0x40 + uVar6;
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
      }
      else {
        if (param_3 == 1) {
          lVar7 = 1;
        }
        else {
          lVar7 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          uVar3 = 0x3f - (int)lVar7;
          in_RAX = (ulonglong)uVar3;
          lVar7 = (-uVar6 - (ulonglong)uVar3) + 0x40;
        }
        uVar6 = uVar6 + lVar7;
        uVar4 = uVar4 << ((byte)lVar7 & 0x3f);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



uint64_t
FUN_180649440(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             longlong *param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar5 = 0;
  if (param_2 != 0) {
    do {
      uVar6 = 0;
      if (param_3 < param_2) {
        uVar6 = param_3;
      }
      uVar2 = *(ulonglong *)(param_1 + uVar6 * 8);
      if (uVar2 != 0xffffffffffffffff) {
        if (param_4 < 0x40) {
          lVar7 = (1L << ((byte)param_4 & 0x3f)) + -1;
        }
        else {
          lVar7 = -1;
        }
        uVar3 = ~uVar2;
        if (uVar3 == 0) {
          uVar8 = 0x40;
        }
        else {
          uVar8 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          uVar8 = uVar8 & 0xffffffff;
        }
        uVar3 = lVar7 << ((byte)uVar8 & 0x3f);
        while (uVar8 <= 0x40 - param_4) {
          uVar4 = uVar3 & uVar2;
          if (uVar4 == 0) {
            puVar1 = (ulonglong *)(param_1 + uVar6 * 8);
            LOCK();
            uVar4 = *puVar1;
            bVar9 = uVar2 == uVar4;
            if (bVar9) {
              *puVar1 = uVar3 | uVar2;
              uVar4 = uVar2;
            }
            UNLOCK();
            uVar2 = uVar4;
            if (bVar9) {
              *param_5 = uVar6 * 0x40 + uVar8;
              return 1;
            }
          }
          else {
            if (param_4 == 1) {
              lVar7 = 1;
            }
            else {
              lVar7 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              lVar7 = (-uVar8 - (ulonglong)(0x3f - (int)lVar7)) + 0x40;
            }
            uVar8 = uVar8 + lVar7;
            uVar3 = uVar3 << ((byte)lVar7 & 0x3f);
          }
        }
      }
      uVar5 = uVar5 + 1;
      param_3 = uVar6 + 1;
    } while (uVar5 < param_2);
  }
  return 0;
}



uint64_t
FUN_1806495c0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,ulonglong param_5
             ,longlong *param_6)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  bool bVar12;
  
  puVar1 = (ulonglong *)(param_1 + param_3 * 8);
  do {
    uVar4 = *puVar1;
    if (uVar4 == 0) {
      uVar8 = 0x40;
    }
    else {
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar8 = 0x3f - (int)lVar2;
      if (uVar8 == 0) {
        return 0;
      }
    }
    uVar4 = (ulonglong)uVar8;
    if (param_4 <= uVar4) {
      uVar5 = FUN_180649350(param_1,param_3,param_4,param_6);
      return uVar5;
    }
    uVar9 = uVar4;
    puVar10 = puVar1;
    if ((ulonglong)(param_2 - param_3) <= (param_4 - uVar4) + 0x3f >> 6) {
      return 0;
    }
    do {
      puVar11 = puVar10 + 1;
      if (param_4 < uVar9 + 0x40) {
        uVar6 = param_4 - uVar9;
        if (uVar6 < 0x40) {
          uVar7 = (1L << ((byte)uVar6 & 0x3f)) - 1;
        }
        else {
          uVar7 = 0xffffffffffffffff;
        }
      }
      else {
        uVar6 = 0x40;
        uVar7 = 0xffffffffffffffff;
      }
      if ((uVar7 & puVar10[1]) != 0) {
        return 0;
      }
      uVar9 = uVar9 + uVar6;
      puVar10 = puVar11;
    } while (uVar9 < param_4);
    if (uVar4 < 0x40) {
      uVar9 = (1L << ((byte)uVar8 & 0x3f)) + -1 << (0x40 - (byte)uVar8 & 0x3f);
    }
    else {
      uVar9 = 0xffffffffffffffff;
    }
    uVar6 = *puVar1;
    do {
      puVar10 = puVar1;
      if ((uVar6 & uVar9) != 0) goto joined_r0x000180649719;
      LOCK();
      uVar3 = *puVar1;
      bVar12 = uVar6 == uVar3;
      if (bVar12) {
        *puVar1 = uVar9 | uVar6;
        uVar3 = uVar6;
      }
      UNLOCK();
      uVar6 = uVar3;
    } while (!bVar12);
    while (puVar10 = puVar10 + 1, puVar10 < puVar11) {
      LOCK();
      uVar6 = *puVar10;
      if (uVar6 == 0) {
        *puVar10 = 0xffffffffffffffff;
      }
      UNLOCK();
      if (uVar6 != 0) goto joined_r0x000180649719;
    }
    uVar6 = *puVar10;
    while ((uVar7 & uVar6) == 0) {
      LOCK();
      uVar3 = *puVar10;
      bVar12 = uVar6 == uVar3;
      if (bVar12) {
        *puVar10 = uVar6 | uVar7;
        uVar3 = uVar6;
      }
      UNLOCK();
      uVar6 = uVar3;
      if (bVar12) {
        *param_6 = (param_3 + 1) * 0x40 - uVar4;
        return 1;
      }
    }
joined_r0x000180649719:
    while (puVar10 = puVar10 + -1, puVar1 < puVar10) {
      *puVar10 = 0;
    }
    if (puVar10 == puVar1) {
      uVar4 = *puVar10;
      do {
        LOCK();
        uVar6 = *puVar10;
        bVar12 = uVar4 == uVar6;
        if (bVar12) {
          *puVar10 = ~uVar9 & uVar4;
          uVar6 = uVar4;
        }
        UNLOCK();
        uVar4 = uVar6;
      } while (!bVar12);
    }
    if (3 < param_5) {
      return 0;
    }
    param_5 = param_5 + 1;
  } while( true );
}



bool FUN_1806497b0(longlong param_1,uint64_t param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar7 = (uint)param_4 & 0x3f;
  if (uVar7 + param_3 < 0x41) {
    if (param_3 < 0x40) {
      uVar3 = (1L << ((byte)param_3 & 0x3f)) + -1 << (sbyte)uVar7;
      uVar4 = 0;
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      uVar4 = 0;
      uVar3 = 0xffffffffffffffff;
      uVar8 = uVar4;
      uVar9 = uVar4;
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
    uVar8 = 0x40 - (ulonglong)uVar7;
    if (uVar8 < 0x40) {
      uVar3 = (1L << ((byte)uVar8 & 0x3f)) + -1 << (sbyte)uVar7;
    }
    else {
      uVar3 = 0xffffffffffffffff;
    }
    param_3 = param_3 - uVar8;
    uVar8 = param_3 >> 6;
    if ((param_3 & 0x3f) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (1L << ((byte)param_3 & 0x3f)) - 1;
    }
  }
  puVar5 = (ulonglong *)(param_1 + (param_4 >> 6) * 8);
  puVar6 = puVar5 + 1;
  uVar2 = *puVar5;
  do {
    LOCK();
    uVar1 = *puVar5;
    bVar10 = uVar2 == uVar1;
    if (bVar10) {
      *puVar5 = uVar2 & ~uVar3;
      uVar1 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar1;
  } while (!bVar10);
  bVar10 = (uVar1 & uVar3) == uVar3;
  if (uVar8 != 0) {
    puVar5 = puVar6;
    do {
      uVar8 = uVar8 - 1;
      puVar6 = puVar5 + 1;
      uVar3 = *puVar5;
      do {
        LOCK();
        uVar2 = *puVar5;
        bVar11 = uVar3 == uVar2;
        if (bVar11) {
          *puVar5 = uVar3 & ~uVar4;
          uVar2 = uVar3;
        }
        UNLOCK();
        uVar3 = uVar2;
      } while (!bVar11);
      bVar11 = false;
      if ((uVar2 & uVar4) == uVar4) {
        bVar11 = bVar10;
      }
      bVar10 = bVar11;
      puVar5 = puVar6;
    } while (uVar8 != 0);
  }
  if (uVar9 == 0) {
    return bVar10;
  }
  uVar8 = *puVar6;
  do {
    LOCK();
    uVar4 = *puVar6;
    bVar11 = uVar8 == uVar4;
    if (bVar11) {
      *puVar6 = uVar8 & ~uVar9;
      uVar4 = uVar8;
    }
    UNLOCK();
    uVar8 = uVar4;
  } while (!bVar11);
  if ((uVar4 & uVar9) != uVar9) {
    bVar10 = false;
  }
  return bVar10;
}



bool FUN_1806497b2(longlong param_1,uint64_t param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar7 = (uint)param_4 & 0x3f;
  if (uVar7 + param_3 < 0x41) {
    if (param_3 < 0x40) {
      uVar3 = (1L << ((byte)param_3 & 0x3f)) + -1 << (sbyte)uVar7;
      uVar4 = 0;
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      uVar4 = 0;
      uVar3 = 0xffffffffffffffff;
      uVar8 = uVar4;
      uVar9 = uVar4;
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
    uVar8 = 0x40 - (ulonglong)uVar7;
    if (uVar8 < 0x40) {
      uVar3 = (1L << ((byte)uVar8 & 0x3f)) + -1 << (sbyte)uVar7;
    }
    else {
      uVar3 = 0xffffffffffffffff;
    }
    param_3 = param_3 - uVar8;
    uVar8 = param_3 >> 6;
    if ((param_3 & 0x3f) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (1L << ((byte)param_3 & 0x3f)) - 1;
    }
  }
  puVar5 = (ulonglong *)(param_1 + (param_4 >> 6) * 8);
  puVar6 = puVar5 + 1;
  uVar2 = *puVar5;
  do {
    LOCK();
    uVar1 = *puVar5;
    bVar10 = uVar2 == uVar1;
    if (bVar10) {
      *puVar5 = uVar2 & ~uVar3;
      uVar1 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar1;
  } while (!bVar10);
  bVar10 = (uVar1 & uVar3) == uVar3;
  if (uVar8 != 0) {
    puVar5 = puVar6;
    do {
      uVar8 = uVar8 - 1;
      puVar6 = puVar5 + 1;
      uVar3 = *puVar5;
      do {
        LOCK();
        uVar2 = *puVar5;
        bVar11 = uVar3 == uVar2;
        if (bVar11) {
          *puVar5 = uVar3 & ~uVar4;
          uVar2 = uVar3;
        }
        UNLOCK();
        uVar3 = uVar2;
      } while (!bVar11);
      bVar11 = false;
      if ((uVar2 & uVar4) == uVar4) {
        bVar11 = bVar10;
      }
      bVar10 = bVar11;
      puVar5 = puVar6;
    } while (uVar8 != 0);
  }
  if (uVar9 == 0) {
    return bVar10;
  }
  uVar8 = *puVar6;
  do {
    LOCK();
    uVar4 = *puVar6;
    bVar11 = uVar8 == uVar4;
    if (bVar11) {
      *puVar6 = uVar8 & ~uVar9;
      uVar4 = uVar8;
    }
    UNLOCK();
    uVar8 = uVar4;
  } while (!bVar11);
  if ((uVar4 & uVar9) != uVar9) {
    bVar10 = false;
  }
  return bVar10;
}



bool FUN_1806497c7(longlong param_1,uint64_t param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  
  if (param_4 + param_3 < 0x41) {
    if (param_3 < 0x40) {
      uVar3 = (1L << ((byte)param_3 & 0x3f)) + -1 << ((byte)param_4 & 0x3f);
      uVar4 = 0;
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = 0;
      uVar3 = 0xffffffffffffffff;
      uVar7 = uVar4;
      uVar8 = uVar4;
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
    uVar7 = 0x40 - param_4;
    if (uVar7 < 0x40) {
      uVar3 = (1L << ((byte)uVar7 & 0x3f)) + -1 << ((byte)param_4 & 0x3f);
    }
    else {
      uVar3 = 0xffffffffffffffff;
    }
    param_3 = param_3 - uVar7;
    uVar7 = param_3 >> 6;
    if ((param_3 & 0x3f) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (1L << ((byte)param_3 & 0x3f)) - 1;
    }
  }
  puVar5 = (ulonglong *)(param_1 + unaff_RDI * 8);
  puVar6 = puVar5 + 1;
  uVar2 = *puVar5;
  do {
    LOCK();
    uVar1 = *puVar5;
    bVar9 = uVar2 == uVar1;
    if (bVar9) {
      *puVar5 = uVar2 & ~uVar3;
      uVar1 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar1;
  } while (!bVar9);
  bVar9 = (uVar1 & uVar3) == uVar3;
  if (uVar7 != 0) {
    puVar5 = puVar6;
    do {
      uVar7 = uVar7 - 1;
      puVar6 = puVar5 + 1;
      uVar3 = *puVar5;
      do {
        LOCK();
        uVar2 = *puVar5;
        bVar10 = uVar3 == uVar2;
        if (bVar10) {
          *puVar5 = uVar3 & ~uVar4;
          uVar2 = uVar3;
        }
        UNLOCK();
        uVar3 = uVar2;
      } while (!bVar10);
      bVar10 = false;
      if ((uVar2 & uVar4) == uVar4) {
        bVar10 = bVar9;
      }
      bVar9 = bVar10;
      puVar5 = puVar6;
    } while (uVar7 != 0);
  }
  if (uVar8 == 0) {
    return bVar9;
  }
  uVar7 = *puVar6;
  do {
    LOCK();
    uVar4 = *puVar6;
    bVar10 = uVar7 == uVar4;
    if (bVar10) {
      *puVar6 = uVar7 & ~uVar8;
      uVar4 = uVar7;
    }
    UNLOCK();
    uVar7 = uVar4;
  } while (!bVar10);
  if ((uVar4 & uVar8) != uVar8) {
    bVar9 = false;
  }
  return bVar9;
}



int8_t FUN_180649880(uint64_t param_1,ulonglong param_2,ulonglong *param_3,ulonglong *param_4)

{
  int8_t uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  int8_t unaff_SIL;
  ulonglong unaff_RDI;
  ulonglong *puVar4;
  longlong in_R10;
  ulonglong in_R11;
  bool bVar5;
  int8_t uVar6;
  
  do {
    LOCK();
    uVar2 = *param_4;
    bVar5 = in_RAX == uVar2;
    if (bVar5) {
      *param_4 = in_RAX & unaff_RDI;
      uVar2 = in_RAX;
    }
    UNLOCK();
    in_RAX = uVar2;
  } while (!bVar5);
  uVar6 = (uVar2 & param_2) == param_2;
  if (in_R10 != 0) {
    puVar4 = param_3;
    uVar1 = uVar6;
    do {
      in_R10 = in_R10 + -1;
      param_3 = puVar4 + 1;
      uVar2 = *puVar4;
      do {
        LOCK();
        uVar3 = *puVar4;
        bVar5 = uVar2 == uVar3;
        if (bVar5) {
          *puVar4 = uVar2 & ~unaff_RBX;
          uVar3 = uVar2;
        }
        UNLOCK();
        uVar2 = uVar3;
      } while (!bVar5);
      uVar6 = unaff_SIL;
      if ((uVar3 & unaff_RBX) == unaff_RBX) {
        uVar6 = uVar1;
      }
      puVar4 = param_3;
      uVar1 = uVar6;
    } while (in_R10 != 0);
  }
  if (in_R11 == 0) {
    return uVar6;
  }
  uVar2 = *param_3;
  do {
    LOCK();
    uVar3 = *param_3;
    bVar5 = uVar2 == uVar3;
    if (bVar5) {
      *param_3 = uVar2 & ~in_R11;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar5);
  if ((uVar3 & in_R11) != in_R11) {
    uVar6 = unaff_SIL;
  }
  return uVar6;
}



int8_t FUN_1806498f3(uint64_t param_1,int8_t param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int8_t unaff_SIL;
  ulonglong in_R11;
  bool bVar3;
  
  uVar1 = *param_3;
  do {
    LOCK();
    uVar2 = *param_3;
    bVar3 = uVar1 == uVar2;
    if (bVar3) {
      *param_3 = uVar1 & ~in_R11;
      uVar2 = uVar1;
    }
    UNLOCK();
    uVar1 = uVar2;
  } while (!bVar3);
  if ((uVar2 & in_R11) != in_R11) {
    param_2 = unaff_SIL;
  }
  return param_2;
}



bool FUN_180649930(longlong param_1,uint64_t param_2,ulonglong param_3,ulonglong param_4,
                  int8_t *param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  uVar7 = (uint)param_4 & 0x3f;
  if (uVar7 + param_3 < 0x41) {
    if (param_3 < 0x40) {
      uVar4 = (1L << ((byte)param_3 & 0x3f)) + -1 << (sbyte)uVar7;
      uVar6 = 0;
      uVar8 = 0;
      uVar5 = 0;
    }
    else {
      uVar4 = 0xffffffffffffffff;
      uVar6 = 0;
      uVar8 = 0;
      uVar5 = 0;
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
    uVar5 = 0x40 - (ulonglong)uVar7;
    if (uVar5 < 0x40) {
      uVar4 = (1L << ((byte)uVar5 & 0x3f)) + -1 << (sbyte)uVar7;
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    param_3 = param_3 - uVar5;
    uVar5 = param_3 >> 6;
    if ((param_3 & 0x3f) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (1L << ((byte)param_3 & 0x3f)) - 1;
    }
  }
  puVar1 = (ulonglong *)(param_1 + (param_4 >> 6) * 8);
  uVar3 = *puVar1;
  do {
    LOCK();
    uVar2 = *puVar1;
    bVar9 = uVar3 == uVar2;
    if (bVar9) {
      *puVar1 = uVar3 | uVar4;
      uVar2 = uVar3;
    }
    UNLOCK();
    uVar3 = uVar2;
  } while (!bVar9);
  bVar10 = (uVar2 & uVar4) != uVar4;
  bVar9 = (uVar2 & uVar4) == 0;
  while (puVar1 = puVar1 + 1, uVar5 != 0) {
    uVar5 = uVar5 - 1;
    uVar4 = *puVar1;
    do {
      LOCK();
      uVar3 = *puVar1;
      bVar11 = uVar4 == uVar3;
      if (bVar11) {
        *puVar1 = uVar4 | uVar6;
        uVar3 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar3;
    } while (!bVar11);
    bVar11 = false;
    if ((uVar3 & uVar6) == 0) {
      bVar11 = bVar9;
    }
    bVar9 = bVar11;
    if ((uVar3 & uVar6) != uVar6) {
      bVar10 = true;
    }
  }
  bVar11 = bVar9;
  if (uVar8 != 0) {
    uVar5 = *puVar1;
    do {
      LOCK();
      uVar6 = *puVar1;
      bVar11 = uVar5 == uVar6;
      if (bVar11) {
        *puVar1 = uVar5 | uVar8;
        uVar6 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar6;
    } while (!bVar11);
    bVar11 = false;
    if ((uVar6 & uVar8) == 0) {
      bVar11 = bVar9;
    }
    if ((uVar6 & uVar8) != uVar8) {
      bVar10 = true;
    }
  }
  if (param_5 != (int8_t *)0x0) {
    *param_5 = bVar10;
  }
  return bVar11;
}



bool FUN_180649932(longlong param_1,uint64_t param_2,ulonglong param_3,ulonglong param_4,
                  uint64_t param_5,int8_t *param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  uVar7 = (uint)param_4 & 0x3f;
  if (uVar7 + param_3 < 0x41) {
    if (param_3 < 0x40) {
      uVar4 = (1L << ((byte)param_3 & 0x3f)) + -1 << (sbyte)uVar7;
      uVar6 = 0;
      uVar8 = 0;
      uVar5 = 0;
    }
    else {
      uVar4 = 0xffffffffffffffff;
      uVar6 = 0;
      uVar8 = 0;
      uVar5 = 0;
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
    uVar5 = 0x40 - (ulonglong)uVar7;
    if (uVar5 < 0x40) {
      uVar4 = (1L << ((byte)uVar5 & 0x3f)) + -1 << (sbyte)uVar7;
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    param_3 = param_3 - uVar5;
    uVar5 = param_3 >> 6;
    if ((param_3 & 0x3f) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (1L << ((byte)param_3 & 0x3f)) - 1;
    }
  }
  puVar1 = (ulonglong *)(param_1 + (param_4 >> 6) * 8);
  uVar3 = *puVar1;
  do {
    LOCK();
    uVar2 = *puVar1;
    bVar9 = uVar3 == uVar2;
    if (bVar9) {
      *puVar1 = uVar3 | uVar4;
      uVar2 = uVar3;
    }
    UNLOCK();
    uVar3 = uVar2;
  } while (!bVar9);
  bVar10 = (uVar2 & uVar4) != uVar4;
  bVar9 = (uVar2 & uVar4) == 0;
  while (puVar1 = puVar1 + 1, uVar5 != 0) {
    uVar5 = uVar5 - 1;
    uVar4 = *puVar1;
    do {
      LOCK();
      uVar3 = *puVar1;
      bVar11 = uVar4 == uVar3;
      if (bVar11) {
        *puVar1 = uVar4 | uVar6;
        uVar3 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar3;
    } while (!bVar11);
    bVar11 = false;
    if ((uVar3 & uVar6) == 0) {
      bVar11 = bVar9;
    }
    bVar9 = bVar11;
    if ((uVar3 & uVar6) != uVar6) {
      bVar10 = true;
    }
  }
  bVar11 = bVar9;
  if (uVar8 != 0) {
    uVar5 = *puVar1;
    do {
      LOCK();
      uVar6 = *puVar1;
      bVar11 = uVar5 == uVar6;
      if (bVar11) {
        *puVar1 = uVar5 | uVar8;
        uVar6 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar6;
    } while (!bVar11);
    bVar11 = false;
    if ((uVar6 & uVar8) == 0) {
      bVar11 = bVar9;
    }
    if ((uVar6 & uVar8) != uVar8) {
      bVar10 = true;
    }
  }
  if (param_6 != (int8_t *)0x0) {
    *param_6 = bVar10;
  }
  return bVar11;
}



int8_t
FUN_180649a82(uint64_t param_1,uint64_t param_2,ulonglong *param_3,uint64_t param_4,
             uint64_t param_5,int8_t *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int8_t unaff_SIL;
  int8_t unaff_DIL;
  int8_t in_R10B;
  ulonglong in_R11;
  bool bVar3;
  
  uVar1 = *param_3;
  do {
    LOCK();
    uVar2 = *param_3;
    bVar3 = uVar1 == uVar2;
    if (bVar3) {
      *param_3 = uVar1 | in_R11;
      uVar2 = uVar1;
    }
    UNLOCK();
    uVar1 = uVar2;
  } while (!bVar3);
  if ((uVar2 & in_R11) == 0) {
    unaff_DIL = in_R10B;
  }
  if ((uVar2 & in_R11) != in_R11) {
    unaff_SIL = 1;
  }
  if (param_6 != (int8_t *)0x0) {
    *param_6 = unaff_SIL;
  }
  return unaff_DIL;
}



int8_t FUN_180649ac2(void)

{
  int8_t *in_RAX;
  int8_t unaff_SIL;
  int8_t in_R10B;
  
  *in_RAX = unaff_SIL;
  return in_R10B;
}



bool FUN_180649ad0(longlong param_1,uint64_t param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = (uint)param_4 & 0x3f;
  if (uVar7 + param_3 < 0x41) {
    if (param_3 < 0x40) {
      uVar3 = (1L << ((byte)param_3 & 0x3f)) + -1 << (sbyte)uVar7;
      uVar5 = 0;
      uVar6 = 0;
      uVar8 = 0;
    }
    else {
      uVar3 = 0xffffffffffffffff;
      uVar5 = 0;
      uVar6 = 0;
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 0x40 - (ulonglong)uVar7;
    uVar3 = 0xffffffffffffffff;
    uVar5 = 0xffffffffffffffff;
    if (uVar8 < 0x40) {
      uVar3 = (1L << ((byte)uVar8 & 0x3f)) + -1 << (sbyte)uVar7;
    }
    param_3 = param_3 - uVar8;
    uVar8 = param_3 >> 6;
    if ((param_3 & 0x3f) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (1L << ((byte)param_3 & 0x3f)) - 1;
    }
  }
  puVar1 = (ulonglong *)(param_1 + (param_4 >> 6) * 8);
  bVar2 = (*puVar1 & uVar3) == uVar3;
  for (; puVar1 = puVar1 + 1, uVar8 != 0; uVar8 = uVar8 - 1) {
    bVar4 = false;
    if ((*puVar1 & uVar5) == uVar5) {
      bVar4 = bVar2;
    }
    bVar2 = bVar4;
  }
  if (uVar6 != 0) {
    bVar4 = false;
    if ((*puVar1 & uVar6) == uVar6) {
      bVar4 = bVar2;
    }
    return bVar4;
  }
  return bVar2;
}



bool FUN_180649ad9(longlong param_1,uint64_t param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint in_R11D;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = in_R11D & 0x3f;
  if (uVar7 + param_3 < 0x41) {
    if (param_3 < 0x40) {
      uVar3 = (1L << ((byte)param_3 & 0x3f)) + -1 << (sbyte)uVar7;
      uVar5 = 0;
      uVar6 = 0;
      uVar8 = 0;
    }
    else {
      uVar3 = 0xffffffffffffffff;
      uVar5 = 0;
      uVar6 = 0;
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 0x40 - (ulonglong)uVar7;
    uVar3 = 0xffffffffffffffff;
    uVar5 = 0xffffffffffffffff;
    if (uVar8 < 0x40) {
      uVar3 = (1L << ((byte)uVar8 & 0x3f)) + -1 << (sbyte)uVar7;
    }
    param_3 = param_3 - uVar8;
    uVar8 = param_3 >> 6;
    if ((param_3 & 0x3f) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (1L << ((byte)param_3 & 0x3f)) - 1;
    }
  }
  puVar1 = (ulonglong *)(param_1 + (param_4 >> 6) * 8);
  bVar2 = (*puVar1 & uVar3) == uVar3;
  for (; puVar1 = puVar1 + 1, uVar8 != 0; uVar8 = uVar8 - 1) {
    bVar4 = false;
    if ((*puVar1 & uVar5) == uVar5) {
      bVar4 = bVar2;
    }
    bVar2 = bVar4;
  }
  if (uVar6 != 0) {
    bVar4 = false;
    if ((*puVar1 & uVar6) == uVar6) {
      bVar4 = bVar2;
    }
    return bVar4;
  }
  return bVar2;
}



int8_t FUN_180649ba2(uint64_t param_1,uint64_t param_2,int8_t param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int8_t uVar2;
  int8_t unaff_BL;
  ulonglong *unaff_RDI;
  ulonglong in_R10;
  longlong in_R11;
  
  do {
    uVar1 = *unaff_RDI;
    unaff_RDI = unaff_RDI + 1;
    uVar2 = unaff_BL;
    if ((uVar1 & param_4) == param_4) {
      uVar2 = param_3;
    }
    param_3 = uVar2;
    in_R11 = in_R11 + -1;
  } while (in_R11 != 0);
  if (in_R10 != 0) {
    if ((*unaff_RDI & in_R10) == in_R10) {
      unaff_BL = param_3;
    }
    return unaff_BL;
  }
  return param_3;
}



ulonglong FUN_180649c10(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (param_2 == 1) {
    uVar4 = FUN_180649440(param_1 + 0x38,uVar2,0,1,param_3);
    if ((char)uVar4 != '\0') {
LAB_180649d17:
      uVar2 = *param_3;
      *(ulonglong *)(param_1 + 0x20) = uVar2 >> 6;
      return CONCAT71((uint7)(uVar2 >> 0xe),1);
    }
  }
  else {
    uVar11 = 0;
    uVar4 = uVar11;
    uVar9 = uVar11;
    if (uVar2 != 0) {
      do {
        uVar8 = uVar11;
        if (uVar4 < uVar2) {
          uVar8 = uVar4;
        }
        if ((param_2 < 0x41) &&
           (uVar4 = *(ulonglong *)(param_1 + 0x38 + uVar8 * 8), uVar4 != 0xffffffffffffffff)) {
          if (param_2 < 0x40) {
            lVar7 = (1L << ((byte)param_2 & 0x3f)) + -1;
          }
          else {
            lVar7 = -1;
          }
          uVar5 = ~uVar4;
          if (uVar5 == 0) {
            uVar10 = 0x40;
          }
          else {
            uVar10 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar10 = uVar10 & 0xffffffff;
          }
          uVar5 = lVar7 << ((byte)uVar10 & 0x3f);
          while (uVar10 <= 0x40 - param_2) {
            uVar6 = uVar5 & uVar4;
            if (uVar6 == 0) {
              puVar1 = (ulonglong *)(param_1 + 0x38 + uVar8 * 8);
              LOCK();
              uVar6 = *puVar1;
              bVar12 = uVar4 == uVar6;
              if (bVar12) {
                *puVar1 = uVar5 | uVar4;
                uVar6 = uVar4;
              }
              UNLOCK();
              uVar4 = uVar6;
              if (bVar12) {
                *param_3 = uVar8 * 0x40 + uVar10;
                goto LAB_180649d17;
              }
            }
            else {
              lVar7 = 0x3f;
              if (uVar6 != 0) {
                for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              lVar7 = (-uVar10 - (ulonglong)(0x3f - (int)lVar7)) + 0x40;
              uVar10 = uVar10 + lVar7;
              uVar5 = uVar5 << ((byte)lVar7 & 0x3f);
            }
          }
        }
        cVar3 = FUN_1806495c0(param_1 + 0x38,uVar2,uVar8,param_2,0,param_3);
        if (cVar3 != '\0') goto LAB_180649d17;
        uVar9 = uVar9 + 1;
        uVar4 = uVar8 + 1;
      } while (uVar9 < uVar2);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



longlong FUN_180649d90(longlong *param_1,char param_2,longlong param_3,char *param_4,
                      int8_t *param_5,int8_t *param_6,int8_t *param_7,ulonglong *param_8
                      ,char param_9)

{
  int8_t uVar1;
  char cVar2;
  int8_t uVar3;
  longlong lVar4;
  char acStack_28 [8];
  longlong lStack_20;
  
  cVar2 = FUN_180649c10(param_1,param_3,&lStack_20);
  if (cVar2 == '\0') {
    return 0;
  }
  lVar4 = lStack_20 * 0x400000 + *param_1;
  *param_8 = (ulonglong)(byte)(param_2 + 1) | lStack_20 << 8;
  uVar3 = FUN_180649930(param_1[5]);
  uVar1 = *(int8_t *)((longlong)param_1 + 0x1e);
  *param_7 = uVar3;
  *param_5 = uVar1;
  cVar2 = *(char *)((longlong)param_1 + 0x1d);
  if ((*(char *)((longlong)param_1 + 0x1e) == '\0') && (cVar2 == '\0')) {
    *param_6 = 0;
  }
  else {
    *param_6 = 1;
    if (cVar2 != '\0') {
      *param_4 = '\x01';
      return lVar4;
    }
  }
  if (*param_4 == '\0') {
    cVar2 = FUN_180649ad0(param_1[6]);
    *param_4 = cVar2;
  }
  else {
    FUN_180649930();
    if ((param_9 != '\0') &&
       (FUN_180649070(lVar4,param_3 << 0x16,acStack_28), acStack_28[0] != '\0')) {
      *param_7 = 1;
    }
  }
  return lVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180649ed0(int param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                      char *param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = _DAT_180d48cc0;
  uVar5 = param_2 + 0x3fffffU >> 0x16;
  if ((_DAT_180d48cc0 != 0) && (uVar4 = 0, uVar3 = uVar4, _DAT_180d48cc0 != 0)) {
    do {
      lVar2 = *(longlong *)(uVar3 * 8 + 0x180c9e940);
      if (lVar2 == 0) break;
      if ((((*(int *)(lVar2 + 0x18) < 0) || (*(int *)(lVar2 + 0x18) == param_1)) &&
          ((*param_5 != '\0' || (*(char *)(lVar2 + 0x1e) == '\0')))) &&
         (lVar2 = FUN_180649d90(lVar2,uVar3,uVar5,param_4,param_5,param_6,param_7,param_8),
         lVar2 != 0)) {
        return lVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
    if (uVar1 != 0) {
      do {
        lVar2 = *(longlong *)(uVar4 * 8 + 0x180c9e940);
        if (lVar2 == 0) {
          return 0;
        }
        if (((-1 < *(int *)(lVar2 + 0x18)) && (*(int *)(lVar2 + 0x18) != param_1)) &&
           (((*param_5 != '\0' || (*(char *)(lVar2 + 0x1e) == '\0')) &&
            (lVar2 = FUN_180649d90(lVar2,uVar4,uVar5,param_4,param_5,param_6,param_7,param_8),
            lVar2 != 0)))) {
          return lVar2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18064a040(uint64_t param_1,longlong param_2,byte param_3,char param_4,uint64_t param_5,
             int32_t param_6)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  byte bVar6;
  
  puVar4 = (uint64_t *)0x0;
  bVar6 = 0;
  if (param_4 == '\0') {
    bVar6 = param_3;
  }
  uVar3 = param_2 + 0x3fffffU >> 0x16;
  uVar5 = uVar3 + 0x3f >> 6;
  puVar2 = (uint64_t *)FUN_180648ea0((((ulonglong)bVar6 ^ 1) + 2) * uVar5 * 8 + 0x40);
  if (puVar2 != (uint64_t *)0x0) {
    puVar2[1] = uVar3;
    puVar2[2] = uVar5;
    LOCK();
    *puVar2 = param_1;
    UNLOCK();
    *(int32_t *)(puVar2 + 3) = param_6;
    *(char *)((longlong)puVar2 + 0x1e) = param_4;
    *(int8_t *)((longlong)puVar2 + 0x1c) = 1;
    *(byte *)((longlong)puVar2 + 0x1d) = bVar6;
    LOCK();
    puVar2[4] = 0;
    UNLOCK();
    puVar2[5] = puVar2 + uVar5 + 7;
    if (bVar6 == 0) {
      puVar4 = puVar2 + uVar5 * 2 + 7;
    }
    puVar2[6] = puVar4;
    if (0 < (longlong)(uVar5 * 0x40 - uVar3)) {
      func_0x000180649560(puVar2 + 7);
    }
    LOCK();
    UNLOCK();
    if (_DAT_180d48cc0 < 0x40) {
      lVar1 = _DAT_180d48cc0 * 8;
      _DAT_180d48cc0 = _DAT_180d48cc0 + 1;
      *(uint64_t **)(lVar1 + 0x180c9e940) = puVar2;
    }
    else {
      LOCK();
      UNLOCK();
    }
    puVar2 = (uint64_t *)0x1;
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18064a180(ulonglong param_1)

{
  char cVar1;
  longlong lVar2;
  void *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char acStackX_18 [16];
  char *pcVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  if (param_1 < ~_DAT_180bf66a8) {
    param_1 = (param_1 - 1) + _DAT_180bf66a8;
    if ((_DAT_180bf66a8 - 1 & _DAT_180bf66a8) == 0) {
      param_1 = param_1 & ~(_DAT_180bf66a8 - 1);
    }
    else {
      param_1 = param_1 - param_1 % _DAT_180bf66a8;
    }
  }
  if (param_1 != 0) {
    uVar4 = param_1;
    if (param_1 < ~_DAT_180bf66a8) {
      uVar5 = _DAT_180bf66a8 - 1;
      uVar4 = uVar5 + param_1;
      if ((uVar5 & _DAT_180bf66a8) == 0) {
        uVar4 = uVar4 & ~uVar5;
      }
      else {
        uVar4 = uVar4 - uVar4 % _DAT_180bf66a8;
      }
    }
    uVar5 = _DAT_180bf66a8 + 0x3fffff;
    if ((_DAT_180bf66a8 - 1 & _DAT_180bf66a8) == 0) {
      uVar5 = uVar5 & ~(_DAT_180bf66a8 - 1);
    }
    else {
      uVar5 = uVar5 - uVar5 % _DAT_180bf66a8;
    }
    acStackX_18[0] = '\0';
    pcVar6 = acStackX_18;
    lVar2 = FUN_180648cc0(uVar4,uVar5,1,1,pcVar6);
    if (lVar2 != 0) {
      cVar1 = FUN_18064a040(lVar2,param_1,1,acStackX_18[0],pcVar6,0xffffffff,uVar7);
      if (cVar1 != '\0') {
        puVar3 = &system_buffer_ptr;
        if (acStackX_18[0] != '\0') {
          puVar3 = &unknown_var_8464_ptr;
        }
        FUN_1806502e0(&unknown_var_8488_ptr,param_1 + 0x3ff >> 10,puVar3);
        return 0;
      }
      uVar4 = param_1;
      if (param_1 < ~_DAT_180bf66a8) {
        uVar5 = _DAT_180bf66a8 - 1;
        uVar4 = uVar5 + param_1;
        if ((uVar5 & _DAT_180bf66a8) == 0) {
          uVar4 = uVar4 & ~uVar5;
        }
        else {
          uVar4 = uVar4 - uVar4 % _DAT_180bf66a8;
        }
      }
      FUN_180648840(lVar2,uVar4,1);
      FUN_1806502e0(&unknown_var_8576_ptr,param_1 + 0x3ff >> 10);
    }
  }
  return 0xc;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18064a320(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar8 = 0xffffffff;
  if (-2 < (int)param_2) {
    uVar8 = param_2 & 0xffffffff;
  }
  if (-1 < (int)uVar8) {
    uVar4 = FUN_180646f40();
    uVar8 = (ulonglong)(longlong)(int)uVar8 % uVar4;
  }
  uVar4 = _DAT_180ca8bc0;
  do {
    uVar9 = uVar4;
    if (uVar4 == 0) {
      uVar9 = 0x4000000000;
    }
    LOCK();
    bVar10 = uVar4 != _DAT_180ca8bc0;
    uVar7 = uVar9 + param_1 * 0x40000000;
    if (bVar10) {
      uVar4 = _DAT_180ca8bc0;
      uVar7 = _DAT_180ca8bc0;
    }
    _DAT_180ca8bc0 = uVar7;
    UNLOCK();
  } while (bVar10);
  if (uVar9 != 0) {
    FUN_1806486f0();
    uVar4 = param_1;
    uVar7 = 0;
    if (param_1 != 0) {
      do {
        LOCK();
        lVar1 = _DAT_180c8edf8 + 0x40000000;
        UNLOCK();
        lVar5 = _DAT_180c8edf0;
        do {
          if (_DAT_180c8edf8 + 0x40000000 <= lVar5) break;
          LOCK();
          bVar10 = lVar5 != _DAT_180c8edf0;
          lVar6 = _DAT_180c8edf8 + 0x40000000;
          if (bVar10) {
            lVar5 = _DAT_180c8edf0;
            lVar6 = _DAT_180c8edf0;
          }
          _DAT_180c8edf0 = lVar6;
          UNLOCK();
        } while (bVar10);
        LOCK();
        _DAT_180c8ede0 = _DAT_180c8ede0 + 0x40000000;
        UNLOCK();
        LOCK();
        lVar5 = _DAT_180c8edd8 + 0x40000000;
        UNLOCK();
        lVar6 = _DAT_180c8edd0;
        do {
          if (_DAT_180c8edd8 + 0x40000000 <= lVar6) break;
          LOCK();
          bVar10 = lVar6 != _DAT_180c8edd0;
          lVar2 = _DAT_180c8edd8 + 0x40000000;
          if (bVar10) {
            lVar6 = _DAT_180c8edd0;
            lVar2 = _DAT_180c8edd0;
          }
          _DAT_180c8edd0 = lVar2;
          UNLOCK();
        } while (bVar10);
        LOCK();
        _DAT_180c8edc0 = _DAT_180c8edc0 + 0x40000000;
        UNLOCK();
        uVar4 = uVar4 - 1;
        uVar7 = param_1;
        _DAT_180c8edd8 = lVar5;
        _DAT_180c8edf8 = lVar1;
      } while (uVar4 != 0);
    }
    if (uVar7 == 0) {
      uVar9 = 0;
    }
    if ((uVar9 != 0) && (uVar7 != 0)) {
      FUN_1806502e0(&unknown_var_8704_ptr,uVar8 & 0xffffffff,uVar7,param_1);
      cVar3 = FUN_18064a040(uVar9,uVar7 << 0x1e,1);
      if (cVar3 != '\0') {
        return 0;
      }
      if (uVar7 << 0x1e < 0x40000000) {
        return 0xc;
      }
      uVar7 = uVar7 & 0x3ffffffff;
      do {
        uVar8 = 0x40000000;
        if (0x40000000 < ~_DAT_180bf66a8) {
          uVar8 = _DAT_180bf66a8 + 0x3fffffff;
          if ((_DAT_180bf66a8 & _DAT_180bf66a8 - 1) == 0) {
            uVar8 = uVar8 & ~(_DAT_180bf66a8 - 1);
          }
          else {
            uVar8 = uVar8 - uVar8 % _DAT_180bf66a8;
          }
        }
        FUN_180648840(uVar9,uVar8,1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return 0xc;
    }
  }
  FUN_180650340(&unknown_var_8656_ptr,param_1);
  return 0xc;
}



uint64_t FUN_18064a540(ulonglong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  if (param_1 != 0) {
    uVar1 = FUN_180646f40();
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    uVar2 = param_1 / uVar1;
    uVar5 = param_1 % uVar1;
    uVar6 = 0;
    if (uVar1 != 0) {
      do {
        if (param_1 == 0) {
          return 0;
        }
        uVar7 = uVar2 + 1;
        if (uVar5 <= uVar6) {
          uVar7 = uVar2;
        }
        uVar3 = FUN_18064a320(uVar7,uVar6 & 0xffffffff,param_3,param_4,uVar9);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar6 = uVar6 + 1;
        uVar4 = param_1 - uVar7;
        bVar8 = uVar7 <= param_1;
        param_1 = 0;
        if (bVar8) {
          param_1 = uVar4;
        }
      } while (uVar6 < uVar1);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18064a5f0(longlong param_1,uint64_t *param_2,char *param_3,int8_t *param_4,
             int8_t *param_5,uint64_t *param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if (param_1 == 0x400000) {
    if (_DAT_180c8ed78 != 1) {
      FUN_180646f40();
    }
    if (*param_3 != '\0') {
      uVar4 = 0;
      uVar10 = 0;
      do {
        uVar9 = 0;
        if (uVar4 < 0x10) {
          uVar9 = uVar4;
        }
        uVar4 = *(ulonglong *)(uVar9 * 8 + 0x180bfbd00);
        if ((uVar4 != 0xffffffffffffffff) && (uVar5 = ~uVar4, uVar5 != 0)) {
          uVar8 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          uVar5 = 1L << ((byte)uVar8 & 0x3f);
          uVar8 = uVar8 & 0xffffffff;
          while (uVar8 < 0x40) {
            if ((uVar4 & uVar5) == 0) {
              puVar2 = (ulonglong *)(uVar9 * 8 + 0x180bfbd00);
              LOCK();
              uVar6 = *puVar2;
              bVar11 = uVar4 == uVar6;
              if (bVar11) {
                *puVar2 = uVar5 | uVar4;
                uVar6 = uVar4;
              }
              UNLOCK();
              uVar4 = uVar6;
              if (bVar11) {
                cVar7 = '\x01';
                uVar8 = uVar9 * 0x40 + uVar8;
                goto LAB_18064a74a;
              }
            }
            else {
              uVar8 = uVar8 + 1;
              uVar5 = uVar5 * 2;
            }
          }
        }
        uVar10 = uVar10 + 1;
        uVar4 = uVar9 + 1;
      } while (uVar10 < 0x10);
    }
    uVar4 = 0;
    uVar10 = 0;
    do {
      uVar9 = 0;
      if (uVar4 < 0x10) {
        uVar9 = uVar4;
      }
      uVar4 = *(ulonglong *)(uVar9 * 8 + 0x180bfbfc0);
      if ((uVar4 != 0xffffffffffffffff) && (uVar5 = ~uVar4, uVar5 != 0)) {
        uVar8 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        uVar5 = 1L << ((byte)uVar8 & 0x3f);
        uVar8 = uVar8 & 0xffffffff;
        while (uVar8 < 0x40) {
          if ((uVar4 & uVar5) == 0) {
            puVar2 = (ulonglong *)(uVar9 * 8 + 0x180bfbfc0);
            LOCK();
            uVar6 = *puVar2;
            bVar11 = uVar4 == uVar6;
            if (bVar11) {
              *puVar2 = uVar5 | uVar4;
              uVar6 = uVar4;
            }
            UNLOCK();
            uVar4 = uVar6;
            if (bVar11) {
              uVar8 = uVar9 * 0x40 + uVar8;
              cVar7 = '\0';
LAB_18064a74a:
              *param_3 = cVar7;
              lVar1 = uVar8 * 0x28;
              uVar3 = *(uint64_t *)(lVar1 + 0x180c9eb80);
              *(uint64_t *)(lVar1 + 0x180c9eb80) = 0;
              *param_6 = *(uint64_t *)(uVar8 * 0x28 + 0x180c9eb88);
              *param_4 = *(int8_t *)(lVar1 + 0x180c9eb90);
              *param_5 = 0;
              *(uint64_t *)(lVar1 + 0x180c9eba0) = 0;
              *param_2 = *(uint64_t *)(lVar1 + 0x180c9eb98);
              LOCK();
              puVar2 = (ulonglong *)((uVar8 >> 6) * 8 + 0x180ca8c00);
              *puVar2 = *puVar2 & ~(1L << ((byte)uVar8 & 0x3f));
              UNLOCK();
              return uVar3;
            }
          }
          else {
            uVar8 = uVar8 + 1;
            uVar5 = uVar5 * 2;
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar4 = uVar9 + 1;
    } while (uVar10 < 0x10);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






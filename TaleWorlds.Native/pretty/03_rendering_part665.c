#include "TaleWorlds.Native.Split.h"

// 03_rendering_part665.c - 14 个函数

// 函数: void FUN_18064a7f0(ulonglong *param_1,longlong param_2)
void FUN_18064a7f0(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar4 = *param_1;
  if (uVar4 == 0) {
    *param_1 = 0;
    return;
  }
  if (uVar4 == 0xffffffffffffffff) {
    FUN_1806491b0(param_2,0x400000);
    *param_1 = 0;
    return;
  }
  lVar9 = 0;
  uVar8 = _DAT_180bf66a8;
  do {
    lVar7 = 0;
    for (uVar3 = uVar4; (uVar3 & 1) != 0; uVar3 = uVar3 >> 1) {
      lVar7 = lVar7 + 1;
    }
    if (lVar7 != 0) {
      lVar2 = lVar9 * 0x10000 + param_2;
      if ((lVar7 * 0x10000 != 0) && (lVar2 != 0)) {
        uVar4 = uVar8 - 1;
        if ((uVar4 & uVar8) == 0) {
          uVar5 = ~uVar4 & uVar4 + lVar2;
        }
        else {
          uVar5 = ((uVar4 + lVar2) / uVar8) * uVar8;
        }
        uVar6 = lVar7 * 0x10000 + lVar2;
        if ((uVar4 & uVar8) == 0) {
          uVar6 = ~uVar4 & uVar6;
        }
        else {
          uVar6 = (uVar6 / uVar8) * uVar8;
        }
        lVar2 = uVar6 - uVar5;
        if (0 < lVar2) {
          func_0x000180646ff0(&DAT_180c8ede0,lVar7 * -0x10000);
          iVar1 = VirtualFree(uVar5,lVar2,0x4000);
          uVar8 = _DAT_180bf66a8;
          if ((iVar1 == 0) && (iVar1 = GetLastError(), uVar8 = _DAT_180bf66a8, iVar1 != 0)) {
            FUN_180650340(&UNK_180a3d728,&UNK_180a3d760,uVar5,lVar2,iVar1);
            uVar8 = _DAT_180bf66a8;
          }
        }
      }
    }
    uVar4 = uVar3 >> 1;
    lVar9 = lVar9 + 1 + lVar7;
  } while (1 < uVar3);
  *param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064a83d(void)
void FUN_18064a83d(void)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong in_R9;
  undefined8 *unaff_R12;
  longlong unaff_R13;
  longlong lVar8;
  
  lVar8 = 0;
  do {
    lVar7 = 0;
    for (uVar4 = unaff_RBX; (uVar4 & 1) != 0; uVar4 = uVar4 >> 1) {
      lVar7 = lVar7 + 1;
    }
    if (lVar7 != 0) {
      lVar3 = lVar8 * 0x10000 + unaff_R13;
      if ((lVar7 * 0x10000 != 0) && (lVar3 != 0)) {
        uVar1 = in_R9 - 1;
        if ((uVar1 & in_R9) == 0) {
          uVar5 = ~uVar1 & uVar1 + lVar3;
        }
        else {
          uVar5 = ((uVar1 + lVar3) / in_R9) * in_R9;
        }
        uVar6 = lVar7 * 0x10000 + lVar3;
        if ((uVar1 & in_R9) == 0) {
          uVar6 = ~uVar1 & uVar6;
        }
        else {
          uVar6 = (uVar6 / in_R9) * in_R9;
        }
        lVar3 = uVar6 - uVar5;
        if (0 < lVar3) {
          func_0x000180646ff0(&DAT_180c8ede0,lVar7 * -0x10000);
          iVar2 = VirtualFree(uVar5,lVar3,0x4000);
          in_R9 = _DAT_180bf66a8;
          if ((iVar2 == 0) && (iVar2 = GetLastError(), in_R9 = _DAT_180bf66a8, iVar2 != 0)) {
            FUN_180650340(&UNK_180a3d728,&UNK_180a3d760,uVar5,lVar3,iVar2);
            in_R9 = _DAT_180bf66a8;
          }
        }
      }
    }
    unaff_RBX = uVar4 >> 1;
    lVar8 = lVar8 + 1 + lVar7;
  } while (1 < uVar4);
  *unaff_R12 = 0;
  return;
}





// 函数: void FUN_18064a98a(undefined8 *param_1)
void FUN_18064a98a(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064a9a0(longlong param_1)
void FUN_18064a9a0(longlong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong lStackX_8;
  longlong lStackX_10;
  
  lStackX_8 = param_1;
  QueryPerformanceCounter(&lStackX_8);
  lVar1 = lStackX_8;
  if (_DAT_180d4a090 == 0) {
    QueryPerformanceFrequency(&lStackX_10);
    _DAT_180d4a090 = lStackX_10 / 1000;
    if (_DAT_180d4a090 == 0) {
      _DAT_180d4a090 = 1;
    }
  }
  uVar3 = lVar1 / _DAT_180d4a090;
  uVar5 = uVar3;
  if (uVar3 == 0) {
    uVar5 = 0x11;
  }
  uVar5 = (uVar5 >> 0x1e ^ uVar5) * -0x40a7b892e31b1a47;
  uVar5 = (uVar5 >> 0x1b ^ uVar5) * -0x6b2fb644ecceee15;
  uVar5 = (ulonglong)(((uint)(uVar5 >> 0x1f) ^ (uint)uVar5) & 0x3ff);
  uVar10 = 0;
  uVar7 = uVar10;
  uVar11 = uVar10;
  do {
    uVar8 = uVar10;
    if (uVar5 < 0x400) {
      uVar8 = uVar5;
    }
    lVar1 = uVar8 * 0x28;
    if ((*(longlong *)(lVar1 + 0x180c9eba0) != 0) &&
       (*(longlong *)(lVar1 + 0x180c9eba0) <= (longlong)uVar3)) {
      uVar11 = uVar11 + 1;
      uVar9 = 1L << ((byte)uVar8 & 0x3f);
      uVar6 = uVar8 >> 6;
      uVar5 = *(ulonglong *)(uVar6 * 8 + 0x180bfbfc0);
      do {
        puVar2 = (ulonglong *)(uVar6 * 8 + 0x180bfbfc0);
        LOCK();
        uVar4 = *puVar2;
        bVar12 = uVar5 == uVar4;
        if (bVar12) {
          *puVar2 = uVar5 | uVar9;
          uVar4 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar4;
      } while (!bVar12);
      if ((uVar9 & uVar4) == 0) {
        if ((*(longlong *)(lVar1 + 0x180c9eba0) != 0) &&
           (*(longlong *)(lVar1 + 0x180c9eba0) <= (longlong)uVar3)) {
          *(undefined8 *)(lVar1 + 0x180c9eba0) = 0;
          while (_DAT_180c9e900 != 0) {
            _Thrd_yield();
          }
          FUN_18064a7f0(lVar1 + 0x180c9eb98,*(undefined8 *)(lVar1 + 0x180c9eb80));
        }
        LOCK();
        puVar2 = (ulonglong *)(uVar6 * 8 + 0x180bfbfc0);
        *puVar2 = *puVar2 & ~uVar9;
        UNLOCK();
      }
      if (4 < uVar11) {
        return;
      }
    }
    uVar7 = uVar7 + 1;
    uVar5 = uVar8 + 1;
    if (0xf < uVar7) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18064ab80(ulonglong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       char param_5,char param_6,longlong param_7)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong alStack_28 [2];
  
  if ((param_2 == 0x400000) && ((param_1 & 0x3fffff) == 0)) {
    if (_DAT_180c8ed78 != 1) {
      FUN_180646f40();
    }
    FUN_18064a9a0();
    in_RAX = 0;
    uVar10 = 0;
    do {
      uVar8 = 0;
      if (in_RAX < 0x10) {
        uVar8 = in_RAX;
      }
      uVar2 = *(ulonglong *)(uVar8 * 8 + 0x180ca8c00);
      if ((uVar2 != 0xffffffffffffffff) && (uVar5 = ~uVar2, uVar5 != 0)) {
        uVar9 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        uVar5 = 1L << ((byte)uVar9 & 0x3f);
        uVar9 = uVar9 & 0xffffffff;
        while (uVar9 < 0x40) {
          if ((uVar2 & uVar5) == 0) {
            puVar1 = (ulonglong *)(uVar8 * 8 + 0x180ca8c00);
            LOCK();
            uVar6 = *puVar1;
            bVar11 = uVar2 == uVar6;
            if (bVar11) {
              *puVar1 = uVar5 | uVar2;
              uVar6 = uVar2;
            }
            UNLOCK();
            uVar2 = uVar6;
            if (bVar11) {
              uVar9 = uVar8 * 0x40 + uVar9;
              *(ulonglong *)(uVar9 * 0x28 + 0x180c9eb80) = param_1;
              lVar7 = uVar9 * 0x28;
              *(char *)(lVar7 + 0x180c9eb90) = param_6;
              *(undefined8 *)(lVar7 + 0x180c9eb88) = param_3;
              *(undefined8 *)(lVar7 + 0x180c9eba0) = 0;
              *(longlong *)(lVar7 + 0x180c9eb98) = param_4;
              if (((param_4 != 0) && (param_5 == '\0')) && (param_6 == '\0')) {
                if (_DAT_180bfbed4 == 0) {
                  FUN_180650490(&DAT_180bfbed0);
                }
                if (_DAT_180bfbed0 != 0) {
                  iVar4 = FUN_18064ff90(0x10);
                  if (iVar4 == 0) {
                    while (_DAT_180c9e900 != 0) {
                      _Thrd_yield();
                    }
                    FUN_18064a7f0(lVar7 + 0x180c9eb98,param_1);
                  }
                  else {
                    QueryPerformanceCounter(&param_7);
                    lVar3 = param_7;
                    if (_DAT_180d4a090 == 0) {
                      QueryPerformanceFrequency(alStack_28);
                      _DAT_180d4a090 = alStack_28[0] / 1000;
                      if (alStack_28[0] / 1000 == 0) {
                        _DAT_180d4a090 = 1;
                      }
                    }
                    *(longlong *)(lVar7 + 0x180c9eba0) = lVar3 / _DAT_180d4a090 + (longlong)iVar4;
                  }
                }
              }
              lVar7 = 0x180bfbfc0;
              if (param_5 != '\0') {
                lVar7 = 0x180bfbd00;
              }
              LOCK();
              puVar1 = (ulonglong *)(lVar7 + (uVar9 >> 6) * 8);
              *puVar1 = *puVar1 & ~(1L << ((byte)uVar9 & 0x3f));
              UNLOCK();
              return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
            }
          }
          else {
            uVar9 = uVar9 + 1;
            uVar5 = uVar5 * 2;
          }
        }
      }
      uVar10 = uVar10 + 1;
      in_RAX = uVar8 + 1;
    } while (uVar10 < 0x10);
  }
  return in_RAX & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18064ac5c(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  longlong unaff_R15;
  longlong lStackX_20;
  char in_stack_00000070;
  char in_stack_00000078;
  longlong in_stack_00000080;
  
  *(undefined8 *)(in_R11 + 0xc9eb80 + unaff_RDI * 0x28) = unaff_R12;
  lVar4 = in_R11 + 0xc9eb80 + unaff_RDI * 0x28;
  *(char *)(lVar4 + 0x10) = in_stack_00000078;
  *(undefined8 *)(lVar4 + 8) = unaff_RBX;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(longlong *)(lVar4 + 0x18) = unaff_RSI;
  if (((unaff_RSI != 0) && (in_stack_00000070 == '\0')) && (in_stack_00000078 == '\0')) {
    if (_DAT_180bfbed4 == 0) {
      FUN_180650490(&DAT_180bfbed0);
    }
    if (_DAT_180bfbed0 != 0) {
      iVar3 = FUN_18064ff90(0x10);
      if (iVar3 == 0) {
        while (_DAT_180c9e900 != 0) {
          _Thrd_yield();
        }
        FUN_18064a7f0(lVar4 + 0x18);
      }
      else {
        QueryPerformanceCounter(&stack0x00000080);
        lVar2 = in_stack_00000080;
        if (_DAT_180d4a090 == 0) {
          QueryPerformanceFrequency(&lStackX_20);
          _DAT_180d4a090 = lStackX_20 / 1000;
          if (_DAT_180d4a090 == 0) {
            _DAT_180d4a090 = unaff_R15;
          }
        }
        *(longlong *)(lVar4 + 0x20) = lVar2 / _DAT_180d4a090 + (longlong)iVar3;
      }
    }
  }
  lVar4 = 0x180bfbfc0;
  if (in_stack_00000070 != '\0') {
    lVar4 = 0x180bfbd00;
  }
  LOCK();
  puVar1 = (ulonglong *)(lVar4 + (unaff_RDI >> 6) * 8);
  *puVar1 = *puVar1 & ~(unaff_R15 << ((byte)unaff_RDI & 0x3f));
  UNLOCK();
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18064acf4(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  longlong unaff_R15;
  bool bVar6;
  longlong lStackX_20;
  char in_stack_00000070;
  char in_stack_00000078;
  longlong in_stack_00000080;
  
  do {
    param_3 = param_3 + 1;
    param_2 = param_2 * 2;
    while( true ) {
      for (; 0x3f < param_3; param_3 = param_3 & 0xffffffff) {
        do {
          in_R10 = in_R10 + 1;
          uVar4 = unaff_RDI + 1;
          if (0xf < in_R10) {
            return uVar4 & 0xffffffffffffff00;
          }
          unaff_RDI = 0;
          if (uVar4 < 0x10) {
            unaff_RDI = uVar4;
          }
          param_4 = *(ulonglong *)(in_R11 + 0xca8c00 + unaff_RDI * 8);
        } while ((param_4 == 0xffffffffffffffff) || (uVar4 = ~param_4, uVar4 == 0));
        param_3 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> param_3 & 1) == 0; param_3 = param_3 + 1) {
          }
        }
        param_2 = unaff_R15 << ((byte)param_3 & 0x3f);
      }
      if ((param_4 & param_2) != 0) break;
      puVar1 = (ulonglong *)(in_R11 + 0xca8c00 + unaff_RDI * 8);
      LOCK();
      uVar4 = *puVar1;
      bVar6 = param_4 == uVar4;
      if (bVar6) {
        *puVar1 = param_2 | param_4;
        uVar4 = param_4;
      }
      UNLOCK();
      param_4 = uVar4;
      if (bVar6) {
        param_3 = unaff_RDI * 0x40 + param_3;
        *(undefined8 *)(in_R11 + 0xc9eb80 + param_3 * 0x28) = unaff_R12;
        lVar5 = in_R11 + 0xc9eb80 + param_3 * 0x28;
        *(char *)(lVar5 + 0x10) = in_stack_00000078;
        *(undefined8 *)(lVar5 + 8) = unaff_RBX;
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *(longlong *)(lVar5 + 0x18) = unaff_RSI;
        if (((unaff_RSI != 0) && (in_stack_00000070 == '\0')) && (in_stack_00000078 == '\0')) {
          if (_DAT_180bfbed4 == 0) {
            FUN_180650490(&DAT_180bfbed0);
          }
          if (_DAT_180bfbed0 != 0) {
            iVar3 = FUN_18064ff90(0x10);
            if (iVar3 == 0) {
              while (_DAT_180c9e900 != 0) {
                _Thrd_yield();
              }
              FUN_18064a7f0(lVar5 + 0x18);
            }
            else {
              QueryPerformanceCounter(&stack0x00000080);
              lVar2 = in_stack_00000080;
              if (_DAT_180d4a090 == 0) {
                QueryPerformanceFrequency(&lStackX_20);
                _DAT_180d4a090 = lStackX_20 / 1000;
                if (_DAT_180d4a090 == 0) {
                  _DAT_180d4a090 = unaff_R15;
                }
              }
              *(longlong *)(lVar5 + 0x20) = lVar2 / _DAT_180d4a090 + (longlong)iVar3;
            }
          }
        }
        lVar5 = 0x180bfbfc0;
        if (in_stack_00000070 != '\0') {
          lVar5 = 0x180bfbd00;
        }
        LOCK();
        puVar1 = (ulonglong *)(lVar5 + (param_3 >> 6) * 8);
        *puVar1 = *puVar1 & ~(unaff_R15 << ((byte)param_3 & 0x3f));
        UNLOCK();
        return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      }
    }
  } while( true );
}



undefined8 FUN_18064ad2b(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong unaff_RDI;
  longlong unaff_R14;
  longlong unaff_R15;
  char in_stack_00000070;
  
  FUN_18064a7f0(unaff_R14 + 0x18);
  lVar2 = 0x180bfbfc0;
  if (in_stack_00000070 != '\0') {
    lVar2 = 0x180bfbd00;
  }
  LOCK();
  puVar1 = (ulonglong *)(lVar2 + (unaff_RDI >> 6) * 8);
  *puVar1 = *puVar1 & ~(unaff_R15 << ((byte)unaff_RDI & 0x3f));
  UNLOCK();
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}





// 函数: void FUN_18064ae40(int param_1,longlong param_2)
void FUN_18064ae40(int param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  uVar1 = lVar2 >> 0x3f & 0xfffffffffffffffe;
  func_0x000180646ff0(*(undefined8 *)(param_2 + 0x398),uVar1 + 1);
  *(longlong *)(param_2 + 0x360) = *(longlong *)(param_2 + 0x360) + uVar1 + 1;
  if (*(ulonglong *)(param_2 + 0x368) < *(ulonglong *)(param_2 + 0x360)) {
    *(ulonglong *)(param_2 + 0x368) = *(ulonglong *)(param_2 + 0x360);
  }
  *(longlong *)(param_2 + 0x370) = *(longlong *)(param_2 + 0x370) + lVar2;
  if (*(ulonglong *)(param_2 + 0x378) < *(ulonglong *)(param_2 + 0x370)) {
    *(ulonglong *)(param_2 + 0x378) = *(ulonglong *)(param_2 + 0x370);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064aeb0(ulonglong *param_1,undefined8 param_2)
void FUN_18064aeb0(ulonglong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  
  LOCK();
  param_1[0xe] = 0;
  UNLOCK();
  if (param_1 < (ulonglong *)0x140000000000) {
    if ((ulonglong)param_1 >> 0x1c != 0) {
      lVar7 = ((ulonglong)param_1 >> 0x1c) * 8;
      uVar6 = *(ulonglong *)(lVar7 + 0x180ca8c80);
      do {
        puVar1 = (ulonglong *)(lVar7 + 0x180ca8c80);
        LOCK();
        uVar4 = *puVar1;
        bVar8 = uVar6 == uVar4;
        if (bVar8) {
          *puVar1 = uVar6 & ~(1L << (ulonglong)((uint)((ulonglong)param_1 >> 0x16) & 0x3f));
          uVar4 = uVar6;
        }
        UNLOCK();
        uVar6 = uVar4;
      } while (!bVar8);
    }
  }
  FUN_18064ae40((int)param_1[0xb] * -0x10000,param_2);
  uVar6 = param_1[0xb] << 0x10;
  if ((uVar6 == 0x400000) &&
     (cVar3 = FUN_18064ab80(param_1,0x400000,*param_1,param_1[4],
                            *(undefined1 *)((longlong)param_1 + 9),(char)param_1[1]), cVar3 != '\0')
     ) {
    return;
  }
  uVar4 = param_1[4];
  if (uVar4 != 0xffffffffffffffff) {
    lVar7 = 0;
    if (uVar4 == 0) goto LAB_18064aff4;
    do {
      lVar5 = lVar7 + 1;
      if ((uVar4 & 1) == 0) {
        lVar5 = lVar7;
      }
      bVar8 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
      lVar7 = lVar5;
    } while (bVar8);
    uVar6 = (uVar6 >> 6) * lVar5;
  }
  if (((uVar6 != 0) && ((char)param_1[1] == '\0')) && (lVar7 = -uVar6, lVar7 != 0)) {
    LOCK();
    UNLOCK();
    lVar5 = _DAT_180c8edf0;
    do {
      if (_DAT_180c8edf8 + lVar7 <= lVar5) break;
      LOCK();
      bVar8 = lVar5 != _DAT_180c8edf0;
      lVar2 = _DAT_180c8edf8 + lVar7;
      if (bVar8) {
        lVar5 = _DAT_180c8edf0;
        lVar2 = _DAT_180c8edf0;
      }
      _DAT_180c8edf0 = lVar2;
      UNLOCK();
    } while (bVar8);
    if (lVar7 == 0 || 0 < (longlong)uVar6) {
      LOCK();
      _DAT_180c8ede8 = _DAT_180c8ede8 + uVar6;
      UNLOCK();
      _DAT_180c8edf8 = _DAT_180c8edf8 + lVar7;
    }
    else {
      LOCK();
      _DAT_180c8ede0 = _DAT_180c8ede0 + lVar7;
      UNLOCK();
      _DAT_180c8edf8 = _DAT_180c8edf8 + lVar7;
    }
  }
LAB_18064aff4:
  while (_DAT_180c9e900 != 0) {
    _Thrd_yield();
  }
  uVar6 = *param_1;
  lVar7 = param_1[0xb] * 0x10000;
  if (lVar7 != 0) {
    if (uVar6 == 0) {
      func_0x000180648f70(param_1,lVar7,(char)param_1[1]);
    }
    else {
      lVar5 = *(longlong *)((uVar6 & 0xff) * 8 + 0x180c9e938);
      if (lVar5 == 0) {
        FUN_1806503d0(0x16,&UNK_180a3d670,param_1,lVar7,uVar6);
      }
      else if (uVar6 >> 0xe < *(ulonglong *)(lVar5 + 0x10)) {
        if (*(char *)(lVar5 + 0x1d) == '\0') {
          FUN_1806491b0(param_1,lVar7 + 0x3fffffU & 0xffffffffffc00000);
          FUN_1806497b0(*(undefined8 *)(lVar5 + 0x30));
        }
        cVar3 = FUN_1806497b0(lVar5 + 0x38);
        if (cVar3 == '\0') {
          FUN_1806503d0(0xb,&UNK_180a3d7a8,param_1,lVar7);
        }
      }
      else {
        FUN_1806503d0(0x16,&UNK_180a3d6c0,param_1,lVar7,uVar6);
      }
    }
  }
  return;
}





// 函数: void FUN_18064b036(ulonglong param_1)
void FUN_18064b036(ulonglong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong unaff_R14;
  
  lVar1 = *(longlong *)(unaff_R14 + 0xc9e938 + (param_1 & 0xff) * 8);
  if (lVar1 == 0) {
    FUN_1806503d0(0x16,&UNK_180a3d670);
  }
  else if (param_1 >> 0xe < *(ulonglong *)(lVar1 + 0x10)) {
    if (*(char *)(lVar1 + 0x1d) == '\0') {
      FUN_1806491b0();
      FUN_1806497b0(*(undefined8 *)(lVar1 + 0x30));
    }
    cVar2 = FUN_1806497b0(lVar1 + 0x38);
    if (cVar2 == '\0') {
      FUN_1806503d0(0xb,&UNK_180a3d7a8);
    }
  }
  else {
    FUN_1806503d0(0x16,&UNK_180a3d6c0);
  }
  return;
}





// 函数: void FUN_18064b0f7(void)
void FUN_18064b0f7(void)

{
  return;
}



ulonglong FUN_18064b110(longlong param_1,char param_2,ulonglong param_3,ulonglong param_4,
                       longlong *param_5,ulonglong *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((param_4 < 0x400001) &&
     (param_3 < (ulonglong)(*(longlong *)(param_1 + 0x58) * 0x10000 + param_1))) {
    uVar5 = param_3 - param_1;
    uVar1 = param_4 + uVar5;
    if (param_2 == '\0') {
      uVar1 = uVar1 + 0xffff;
    }
    else {
      uVar5 = uVar5 + 0xffff;
    }
    uVar6 = uVar5 & 0xffffffffffff0000;
    uVar1 = uVar1 & 0xffffffffffff0000;
    uVar2 = 0;
    *param_5 = param_1 + uVar6;
    uVar3 = uVar1 - uVar6;
    if (uVar1 <= uVar6) {
      uVar3 = uVar2;
    }
    *param_6 = uVar3;
    if (uVar3 != 0) {
      uVar4 = uVar3 >> 0x10;
      if (0x40 < uVar4 + (uVar5 >> 0x10)) {
        FUN_180650340(&UNK_180a3d800,uVar5 >> 0x10,uVar4,uVar6,uVar1,param_3,param_4);
      }
      if (uVar4 == 0x40) {
        return 0xffffffffffffffff;
      }
      if (uVar4 != 0) {
        uVar2 = (1L << ((byte)(uVar3 >> 0x10) & 0x3f)) + -1 << ((byte)(uVar6 >> 0x10) & 0x3f);
      }
      return uVar2;
    }
  }
  return 0;
}



longlong FUN_18064b19a(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  ulonglong uVar1;
  undefined8 uStack0000000000000028;
  
  uVar1 = unaff_RDI >> 0x10;
  if (0x40 < uVar1 + (param_4 >> 0x10)) {
    uStack0000000000000028 = param_3;
    FUN_180650340(&UNK_180a3d800,param_4 >> 0x10,uVar1,param_4,param_2);
  }
  if (uVar1 == 0x40) {
    return -1;
  }
  if (uVar1 != 0) {
    unaff_RBX = (1L << ((byte)(unaff_RDI >> 0x10) & 0x3f)) + -1 << ((byte)(param_4 >> 0x10) & 0x3f);
  }
  return unaff_RBX;
}



longlong FUN_18064b1f5(void)

{
  longlong unaff_RBX;
  byte unaff_SIL;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    unaff_RBX = (1L << ((byte)unaff_RDI & 0x3f)) + -1 << (unaff_SIL & 0x3f);
  }
  return unaff_RBX;
}



undefined8 FUN_18064b221(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1
FUN_18064b230(longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStackX_20 [8];
  undefined8 uStack_28;
  longlong lStack_20;
  longlong alStack_18 [2];
  
  if (((param_4 != 0) &&
      (uVar5 = FUN_18064b110(param_1,param_2 ^ 1,param_3,param_4,&uStack_28,&param_5), uVar5 != 0))
     && (param_5 != 0)) {
    uVar1 = *(ulonglong *)(param_1 + 0x20);
    if ((char)param_2 == '\0') {
      if ((uVar1 & uVar5) != 0) {
        lVar6 = func_0x000180646ef0(uVar1 & uVar5,0x400000);
        lVar6 = param_5 - lVar6;
        if (lVar6 != 0) {
          LOCK();
          UNLOCK();
          lVar8 = _DAT_180c8edf0;
          do {
            if (_DAT_180c8edf8 + lVar6 <= lVar8) break;
            LOCK();
            bVar9 = lVar8 != _DAT_180c8edf0;
            lVar7 = _DAT_180c8edf8 + lVar6;
            if (bVar9) {
              lVar8 = _DAT_180c8edf0;
              lVar7 = _DAT_180c8edf0;
            }
            _DAT_180c8edf0 = lVar7;
            UNLOCK();
          } while (bVar9);
          if (lVar6 < 1) {
            LOCK();
            _DAT_180c8ede8 = _DAT_180c8ede8 - lVar6;
            UNLOCK();
            _DAT_180c8edf8 = _DAT_180c8edf8 + lVar6;
          }
          else {
            LOCK();
            _DAT_180c8ede0 = _DAT_180c8ede0 + lVar6;
            UNLOCK();
            _DAT_180c8edf8 = _DAT_180c8edf8 + lVar6;
          }
        }
        if (*(char *)(param_1 + 0xb) != '\0') {
          FUN_1806491b0(uStack_28,param_5);
        }
        *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) & ~uVar5;
      }
    }
    else {
      if ((uVar1 & uVar5) != uVar5) {
        auStackX_20[0] = 0;
        lVar6 = func_0x000180646ef0(~uVar1 & uVar5,0x400000);
        lVar8 = -lVar6;
        if (lVar8 != 0) {
          LOCK();
          UNLOCK();
          lVar7 = _DAT_180c8edf0;
          do {
            if (_DAT_180c8edf8 + lVar8 <= lVar7) break;
            LOCK();
            bVar9 = lVar7 != _DAT_180c8edf0;
            lVar2 = _DAT_180c8edf8 + lVar8;
            if (bVar9) {
              lVar7 = _DAT_180c8edf0;
              lVar2 = _DAT_180c8edf0;
            }
            _DAT_180c8edf0 = lVar2;
            UNLOCK();
          } while (bVar9);
          if (lVar8 == 0 || 0 < lVar6) {
            LOCK();
            _DAT_180c8ede8 = _DAT_180c8ede8 + lVar6;
            UNLOCK();
            _DAT_180c8edf8 = _DAT_180c8edf8 + lVar8;
          }
          else {
            LOCK();
            _DAT_180c8ede0 = _DAT_180c8ede0 + lVar8;
            UNLOCK();
            _DAT_180c8edf8 = _DAT_180c8edf8 + lVar8;
          }
        }
        cVar3 = FUN_180649070(uStack_28,param_5,auStackX_20);
        if (cVar3 == '\0') {
          return 0;
        }
        *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) | uVar5;
      }
      if ((*(ulonglong *)(param_1 + 0x18) & uVar5) != 0) {
        QueryPerformanceCounter(&lStack_20);
        if (_DAT_180d4a090 == 0) {
          QueryPerformanceFrequency(alStack_18);
          _DAT_180d4a090 = alStack_18[0] / 1000;
          if (_DAT_180d4a090 == 0) {
            _DAT_180d4a090 = 1;
          }
        }
        lVar6 = lStack_20 / _DAT_180d4a090;
        iVar4 = FUN_18064ff90(0xf,lStack_20 % _DAT_180d4a090);
        *(longlong *)(param_1 + 0x10) = iVar4 + lVar6;
      }
    }
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) & ~uVar5;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064b460(longlong param_1,char param_2,longlong param_3)
void FUN_18064b460(longlong param_1,char param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lStackX_8;
  longlong lStackX_18;
  
  if ((*(char *)(param_1 + 0xb) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    lStackX_18 = param_3;
    QueryPerformanceCounter(&lStackX_18);
    lVar3 = lStackX_18;
    if (_DAT_180d4a090 == 0) {
      QueryPerformanceFrequency(&lStackX_8);
      _DAT_180d4a090 = lStackX_8 / 1000;
      if (_DAT_180d4a090 == 0) {
        _DAT_180d4a090 = 1;
      }
    }
    if ((param_2 != '\0') || (*(longlong *)(param_1 + 0x10) <= lVar3 / _DAT_180d4a090)) {
      uVar2 = *(ulonglong *)(param_1 + 0x18);
      lVar3 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (uVar2 != 0) {
        do {
          lVar4 = 0;
          for (uVar1 = uVar2; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
            lVar4 = lVar4 + 1;
          }
          if (lVar4 != 0) {
            FUN_18064b230(param_1,0,lVar3 * 0x10000 + param_1,lVar4 << 0x10);
          }
          uVar2 = uVar1 >> 1;
          lVar3 = lVar3 + 1 + lVar4;
        } while (1 < uVar1);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064b48b(void)
void FUN_18064b48b(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  char unaff_DIL;
  longlong lVar3;
  longlong in_stack_00000050;
  longlong in_stack_00000060;
  
  QueryPerformanceCounter();
  if (_DAT_180d4a090 == 0) {
    QueryPerformanceFrequency(&stack0x00000050);
    _DAT_180d4a090 = in_stack_00000050 / 1000;
    if (_DAT_180d4a090 == 0) {
      _DAT_180d4a090 = 1;
    }
  }
  if ((unaff_DIL != '\0') || (*(longlong *)(unaff_RBP + 0x10) <= in_stack_00000060 / _DAT_180d4a090)
     ) {
    uVar2 = *(ulonglong *)(unaff_RBP + 0x18);
    *(undefined8 *)(unaff_RBP + 0x10) = 0;
    *(undefined8 *)(unaff_RBP + 0x18) = 0;
    if (uVar2 != 0) {
      do {
        lVar3 = 0;
        for (uVar1 = uVar2; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
          lVar3 = lVar3 + 1;
        }
        if (lVar3 != 0) {
          FUN_18064b230();
        }
        uVar2 = uVar1 >> 1;
      } while (1 < uVar1);
    }
  }
  return;
}





// 函数: void FUN_18064b4fd(void)
void FUN_18064b4fd(void)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong lVar2;
  
  *(undefined8 *)(unaff_RBP + 0x10) = 0;
  *(undefined8 *)(unaff_RBP + 0x18) = 0;
  if (unaff_RBX != 0) {
    do {
      lVar2 = 0;
      for (uVar1 = unaff_RBX; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
        lVar2 = lVar2 + 1;
      }
      if (lVar2 != 0) {
        FUN_18064b230();
      }
      unaff_RBX = uVar1 >> 1;
    } while (1 < uVar1);
  }
  return;
}





// 函数: void FUN_18064b519(void)
void FUN_18064b519(void)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  longlong lVar2;
  
  do {
    lVar2 = 0;
    for (uVar1 = unaff_RBX; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
      lVar2 = lVar2 + 1;
    }
    if (lVar2 != 0) {
      FUN_18064b230();
    }
    unaff_RBX = uVar1 >> 1;
  } while (1 < uVar1);
  return;
}





// 函数: void FUN_18064b572(void)
void FUN_18064b572(void)

{
  return;
}





// 函数: void FUN_18064b577(void)
void FUN_18064b577(void)

{
  return;
}






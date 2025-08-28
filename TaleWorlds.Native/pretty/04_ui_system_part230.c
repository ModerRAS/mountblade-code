#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part230.c - 4 个函数

// 函数: void FUN_18079cda0(longlong param_1)
void FUN_18079cda0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar1 + 0xb0) != 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(lVar1 + 0xb0),0,(longlong)(*(int *)(lVar1 + 0xac) << 3) << 2);
  }
  if (*(longlong *)(lVar1 + 0x108) != 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(lVar1 + 0x108),0,(longlong)(*(int *)(lVar1 + 0x104) << 3) << 2);
  }
  if (*(longlong *)(lVar1 + 0x160) != 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(lVar1 + 0x160),0,(longlong)(*(int *)(lVar1 + 0x15c) << 3) << 2);
  }
  if (*(longlong *)(lVar1 + 0x1b8) != 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(lVar1 + 0x1b8),0,(longlong)(*(int *)(lVar1 + 0x1b4) << 3) << 2);
  }
  if (*(longlong *)(lVar1 + 0x210) != 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(lVar1 + 0x210),0,(longlong)(*(int *)(lVar1 + 0x20c) << 3) << 2);
  }
  *(int32_t *)(lVar1 + 0xb8) = 0;
  return;
}



uint64_t FUN_18079cfc0(longlong param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint64_t uVar5;
  code *pcVar6;
  longlong *plVar7;
  int32_t *puVar8;
  longlong lVar9;
  
  lVar9 = 0;
  puVar8 = (int32_t *)(*(longlong *)(param_1 + 8) + 0xc);
  plVar7 = (longlong *)(*(longlong *)(param_1 + 8) + 0xb0);
  do {
    if (*(int *)((longlong)plVar7 + -4) != param_2) {
      *(int *)((longlong)plVar7 + -4) = param_2;
      iVar2 = param_2;
      if (*plVar7 != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(*plVar7,0,&unknown_var_4528_ptr);
        iVar2 = *(int *)((longlong)plVar7 + -4);
      }
      lVar3 = (*(code *)**(uint64_t **)(param_1 + 0x28))(iVar2 << 5,0,&unknown_var_4528_ptr);
      *plVar7 = lVar3;
      if (lVar3 == 0) {
        return 0x26;
      }
    }
    lVar3 = plVar7[1];
    if ((int)lVar3 != puVar8[1]) {
      *(int32_t *)(plVar7 + 1) = puVar8[1];
      iVar2 = puVar8[-3];
      if ((iVar2 == 3) || (iVar2 == 6)) {
        iVar2 = FUN_1807681a0(0);
        pcVar6 = FUN_18079c2e0;
        pcVar4 = FUN_1807f9910;
LAB_18079d0af:
        if (iVar2 != 0) {
          pcVar6 = pcVar4;
        }
      }
      else {
        if ((iVar2 == 2) || (iVar2 == 5)) {
          iVar2 = FUN_1807681a0(0);
          pcVar6 = FUN_18079bc20;
          pcVar4 = FUN_1807f98c0;
          goto LAB_18079d0af;
        }
        iVar2 = FUN_1807681a0(0);
        pcVar6 = FUN_18079b740;
        if (iVar2 != 0) {
          pcVar6 = FUN_1807f9870;
        }
      }
      plVar7[-9] = (longlong)pcVar6;
      uVar5 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      pfVar1 = (float *)(plVar7 + -3);
      FUN_18079af30(puVar8[-3],puVar8[-2],0,puVar8[-1],*puVar8,pfVar1);
      if ((int)lVar3 == 0) {
        *(float *)(plVar7 + -8) = *pfVar1;
        *(int32_t *)((longlong)plVar7 + -0x3c) = *(int32_t *)((longlong)plVar7 + -0x14);
        *(int *)(plVar7 + -7) = (int)plVar7[-2];
        *(int32_t *)((longlong)plVar7 + -0x34) = *(int32_t *)((longlong)plVar7 + -0xc);
        *(int *)(plVar7 + -6) = (int)plVar7[-1];
        *(uint64_t *)((longlong)plVar7 + -0x2c) = 0;
        *(uint64_t *)((longlong)plVar7 + -0x24) = 0;
        *(int32_t *)((longlong)plVar7 + -0x1c) = 0;
      }
      else {
        uVar5 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(float *)((longlong)plVar7 + -0x2c) = (*pfVar1 - *(float *)(plVar7 + -8)) / 0.0;
        *(float *)(plVar7 + -5) =
             (*(float *)((longlong)plVar7 + -0x14) - *(float *)((longlong)plVar7 + -0x3c)) / 0.0;
        *(float *)((longlong)plVar7 + -0x24) =
             (*(float *)(plVar7 + -2) - *(float *)(plVar7 + -7)) / 0.0;
        *(float *)(plVar7 + -4) =
             (*(float *)((longlong)plVar7 + -0xc) - *(float *)((longlong)plVar7 + -0x34)) / 0.0;
        *(float *)((longlong)plVar7 + -0x1c) =
             (*(float *)(plVar7 + -1) - *(float *)(plVar7 + -6)) / 0.0;
      }
    }
    lVar9 = lVar9 + 1;
    puVar8 = puVar8 + 5;
    plVar7 = plVar7 + 0xb;
    if (4 < lVar9) {
      return 0;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18079d1f0(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11734) {
    FUN_1808fcb90(&system_ptr_1734);
    if (_DAT_180c11734 == -1) {
      _DAT_180be3528 = _DAT_180be3448;
      _DAT_180be3530 = 0;
      _DAT_180be3538 = 0;
      _DAT_180be3540 = 0;
      _DAT_180be3548 = 0;
      _DAT_180be3550 = 0;
      _DAT_180be3558 = 0;
      FUN_1808fcb30(&system_ptr_1734);
    }
  }
  _DAT_180be3540 = 0x180be3470;
  _DAT_180be3530 = CONCAT44(0xc,_DAT_180be3530);
  _DAT_180be3538 = CONCAT44(DAT_180be3538_4,1);
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11738) {
    FUN_1808fcb90(&system_ptr_1738);
    if (_DAT_180c11738 == -1) {
      _DAT_180be3588 = _DAT_180be3450;
      _DAT_180be3590 = 0;
      _DAT_180be3598 = 0;
      _DAT_180be35a0 = 0;
      _DAT_180be35a8 = 0;
      _DAT_180be35b0 = 0;
      _DAT_180be35b8 = 0;
      FUN_1808fcb30(&system_ptr_1738);
    }
  }
  _DAT_180be3598 = CONCAT44(DAT_180be3598_4,_DAT_180be34e0);
  _DAT_180be3590 = CONCAT44(_DAT_180be34dc,_DAT_180be34d8);
  _DAT_180be35a0 = _DAT_180be35a0 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c1173c) {
    FUN_1808fcb90(&system_ptr_173c);
    if (_DAT_180c1173c == -1) {
      _DAT_180be35e8 = _DAT_180be3458;
      _DAT_180be35f0 = 0;
      _DAT_180be35f8 = 0;
      _DAT_180be3600 = 0;
      _DAT_180be3608 = 0;
      _DAT_180be3610 = 0;
      _DAT_180be3618 = 0;
      FUN_1808fcb30(&system_ptr_173c);
    }
  }
  _DAT_180be35f8 = CONCAT44(DAT_180be35f8_4,_DAT_180be34ec);
  _DAT_180be35f0 = CONCAT44(_DAT_180be34e8,_DAT_180be34e4);
  _DAT_180be3600 = _DAT_180be3600 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11740) {
    FUN_1808fcb90(&system_ptr_1740);
    if (_DAT_180c11740 == -1) {
      _DAT_180be3648 = _DAT_180be3460;
      _DAT_180be3650 = 0;
      _DAT_180be3658 = 0;
      _DAT_180be3660 = 0;
      _DAT_180be3668 = 0;
      _DAT_180be3670 = 0;
      _DAT_180be3678 = 0;
      FUN_1808fcb30(&system_ptr_1740);
    }
  }
  _DAT_180be3658 = CONCAT44(DAT_180be3658_4,_DAT_180c11730);
  _DAT_180be3650 = CONCAT44(_DAT_180be34f4,_DAT_180be34f0);
  _DAT_180be3660 = _DAT_180be3660 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11744) {
    FUN_1808fcb90(&system_ptr_1744);
    if (_DAT_180c11744 == -1) {
      _DAT_180be36a8 = _DAT_180be3448;
      _DAT_180be36b0 = 0;
      _DAT_180be36b4 = 0;
      _DAT_180be36b8 = 0;
      uRam0000000180be36bc = 0;
      _DAT_180be36c0 = 0;
      _DAT_180be36c8 = 0;
      _DAT_180be36d0 = 0;
      _DAT_180be36d8 = 0;
      FUN_1808fcb30(&system_ptr_1744);
    }
  }
  _DAT_180be36c0 = 0x180be3470;
  _DAT_180be36b4 = 0xc;
  _DAT_180be36b8 = 0;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11748) {
    FUN_1808fcb90(&system_ptr_1748);
    if (_DAT_180c11748 == -1) {
      _DAT_180be3708 = _DAT_180be3450;
      _DAT_180be3710 = 0;
      _DAT_180be3718 = 0;
      _DAT_180be3720 = 0;
      _DAT_180be3728 = 0;
      _DAT_180be3730 = 0;
      _DAT_180be3738 = 0;
      FUN_1808fcb30(&system_ptr_1748);
    }
  }
  _DAT_180be3718 = CONCAT44(DAT_180be3718_4,_DAT_180be34e0);
  _DAT_180be3710 = CONCAT44(_DAT_180be34dc,_DAT_180be34d8);
  _DAT_180be3720 = _DAT_180be3720 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c1174c) {
    FUN_1808fcb90(&system_ptr_174c);
    if (_DAT_180c1174c == -1) {
      _DAT_180be3768 = _DAT_180be3458;
      _DAT_180be3770 = 0;
      _DAT_180be3778 = 0;
      _DAT_180be3780 = 0;
      _DAT_180be3788 = 0;
      _DAT_180be3790 = 0;
      _DAT_180be3798 = 0;
      FUN_1808fcb30(&system_ptr_174c);
    }
  }
  _DAT_180be3778 = CONCAT44(DAT_180be3778_4,_DAT_180be34ec);
  _DAT_180be3770 = CONCAT44(_DAT_180be34e8,_DAT_180be34e4);
  _DAT_180be3780 = _DAT_180be3780 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11750) {
    FUN_1808fcb90(&system_ptr_1750);
    if (_DAT_180c11750 == -1) {
      _DAT_180be37c8 = _DAT_180be3460;
      _DAT_180be37d0 = 0;
      _DAT_180be37d8 = 0;
      _DAT_180be37e0 = 0;
      _DAT_180be37e8 = 0;
      _DAT_180be37f0 = 0;
      _DAT_180be37f8 = 0;
      FUN_1808fcb30(&system_ptr_1750);
    }
  }
  _DAT_180be37d8 = CONCAT44(DAT_180be37d8_4,_DAT_180c11730);
  _DAT_180be37d0 = CONCAT44(_DAT_180be34f4,_DAT_180be34f0);
  _DAT_180be37e0 = _DAT_180be37e0 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11754) {
    FUN_1808fcb90(&system_ptr_1754);
    if (_DAT_180c11754 == -1) {
      _DAT_180be3828 = _DAT_180be3448;
      _DAT_180be3830 = 0;
      _DAT_180be3834 = 0;
      _DAT_180be3838 = 0;
      uRam0000000180be383c = 0;
      _DAT_180be3840 = 0;
      _DAT_180be3848 = 0;
      _DAT_180be3850 = 0;
      _DAT_180be3858 = 0;
      FUN_1808fcb30(&system_ptr_1754);
    }
  }
  _DAT_180be3840 = 0x180be3470;
  _DAT_180be3834 = 0xc;
  _DAT_180be3838 = 0;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11758) {
    FUN_1808fcb90(&system_ptr_1758);
    if (_DAT_180c11758 == -1) {
      _DAT_180be3888 = _DAT_180be3450;
      _DAT_180be3890 = 0;
      _DAT_180be3898 = 0;
      _DAT_180be38a0 = 0;
      _DAT_180be38a8 = 0;
      _DAT_180be38b0 = 0;
      _DAT_180be38b8 = 0;
      FUN_1808fcb30(&system_ptr_1758);
    }
  }
  _DAT_180be3898 = CONCAT44(DAT_180be3898_4,_DAT_180be34e0);
  _DAT_180be3890 = CONCAT44(_DAT_180be34dc,_DAT_180be34d8);
  _DAT_180be38a0 = _DAT_180be38a0 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c1175c) {
    FUN_1808fcb90(&system_ptr_175c);
    if (_DAT_180c1175c == -1) {
      _DAT_180be38e8 = _DAT_180be3458;
      _DAT_180be38f0 = 0;
      _DAT_180be38f8 = 0;
      _DAT_180be3900 = 0;
      _DAT_180be3908 = 0;
      _DAT_180be3910 = 0;
      _DAT_180be3918 = 0;
      FUN_1808fcb30(&system_ptr_175c);
    }
  }
  _DAT_180be38f8 = CONCAT44(DAT_180be38f8_4,_DAT_180be34ec);
  _DAT_180be38f0 = CONCAT44(_DAT_180be34e8,_DAT_180be34e4);
  _DAT_180be3900 = _DAT_180be3900 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11760) {
    FUN_1808fcb90(&system_ptr_1760);
    if (_DAT_180c11760 == -1) {
      _DAT_180be3948 = _DAT_180be3460;
      _DAT_180be3950 = 0;
      _DAT_180be3958 = 0;
      _DAT_180be3960 = 0;
      _DAT_180be3968 = 0;
      _DAT_180be3970 = 0;
      _DAT_180be3978 = 0;
      FUN_1808fcb30(&system_ptr_1760);
    }
  }
  _DAT_180be3958 = CONCAT44(DAT_180be3958_4,_DAT_180c11730);
  _DAT_180be3950 = CONCAT44(_DAT_180be34f4,_DAT_180be34f0);
  _DAT_180be3960 = _DAT_180be3960 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11764) {
    FUN_1808fcb90(&system_ptr_1764);
    if (_DAT_180c11764 == -1) {
      _DAT_180be39a8 = _DAT_180be3448;
      _DAT_180be39b0 = 0;
      _DAT_180be39b4 = 0;
      _DAT_180be39b8 = 0;
      uRam0000000180be39bc = 0;
      _DAT_180be39c0 = 0;
      _DAT_180be39c8 = 0;
      _DAT_180be39d0 = 0;
      _DAT_180be39d8 = 0;
      FUN_1808fcb30(&system_ptr_1764);
    }
  }
  _DAT_180be39c0 = 0x180be3470;
  _DAT_180be39b4 = 0xc;
  _DAT_180be39b8 = 0;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11768) {
    FUN_1808fcb90(&system_ptr_1768);
    if (_DAT_180c11768 == -1) {
      _DAT_180be3a08 = _DAT_180be3450;
      _DAT_180be3a10 = 0;
      _DAT_180be3a18 = 0;
      _DAT_180be3a20 = 0;
      _DAT_180be3a28 = 0;
      _DAT_180be3a30 = 0;
      _DAT_180be3a38 = 0;
      FUN_1808fcb30(&system_ptr_1768);
    }
  }
  _DAT_180be3a18 = CONCAT44(DAT_180be3a18_4,_DAT_180be34e0);
  _DAT_180be3a10 = CONCAT44(_DAT_180be34dc,_DAT_180be34d8);
  _DAT_180be3a20 = _DAT_180be3a20 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c1176c) {
    FUN_1808fcb90(&system_ptr_176c);
    if (_DAT_180c1176c == -1) {
      _DAT_180be3a68 = _DAT_180be3458;
      _DAT_180be3a70 = 0;
      _DAT_180be3a78 = 0;
      _DAT_180be3a80 = 0;
      _DAT_180be3a88 = 0;
      _DAT_180be3a90 = 0;
      _DAT_180be3a98 = 0;
      FUN_1808fcb30(&system_ptr_176c);
    }
  }
  _DAT_180be3a78 = CONCAT44(DAT_180be3a78_4,_DAT_180be34ec);
  _DAT_180be3a70 = CONCAT44(_DAT_180be34e8,_DAT_180be34e4);
  _DAT_180be3a80 = _DAT_180be3a80 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11770) {
    FUN_1808fcb90(&system_ptr_1770);
    if (_DAT_180c11770 == -1) {
      _DAT_180be3ac8 = _DAT_180be3460;
      _DAT_180be3ad0 = 0;
      _DAT_180be3ad8 = 0;
      _DAT_180be3ae0 = 0;
      _DAT_180be3ae8 = 0;
      _DAT_180be3af0 = 0;
      _DAT_180be3af8 = 0;
      FUN_1808fcb30(&system_ptr_1770);
    }
  }
  _DAT_180be3ad8 = CONCAT44(DAT_180be3ad8_4,_DAT_180c11730);
  _DAT_180be3ad0 = CONCAT44(_DAT_180be34f4,_DAT_180be34f0);
  _DAT_180be3ae0 = _DAT_180be3ae0 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11774) {
    FUN_1808fcb90(&system_ptr_1774);
    if (_DAT_180c11774 == -1) {
      _DAT_180be3b28 = _DAT_180be3448;
      _DAT_180be3b30 = 0;
      _DAT_180be3b34 = 0;
      _DAT_180be3b38 = 0;
      uRam0000000180be3b3c = 0;
      _DAT_180be3b40 = 0;
      _DAT_180be3b48 = 0;
      _DAT_180be3b50 = 0;
      _DAT_180be3b58 = 0;
      FUN_1808fcb30(&system_ptr_1774);
    }
  }
  _DAT_180be3b40 = 0x180be3470;
  _DAT_180be3b34 = 0xc;
  _DAT_180be3b38 = 0;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11778) {
    FUN_1808fcb90(&system_ptr_1778);
    if (_DAT_180c11778 == -1) {
      _DAT_180be3b88 = _DAT_180be3450;
      _DAT_180be3b90 = 0;
      _DAT_180be3b98 = 0;
      _DAT_180be3ba0 = 0;
      _DAT_180be3ba8 = 0;
      _DAT_180be3bb0 = 0;
      _DAT_180be3bb8 = 0;
      FUN_1808fcb30(&system_ptr_1778);
    }
  }
  _DAT_180be3b98 = CONCAT44(DAT_180be3b98_4,_DAT_180be34e0);
  _DAT_180be3b90 = CONCAT44(_DAT_180be34dc,_DAT_180be34d8);
  _DAT_180be3ba0 = _DAT_180be3ba0 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c1177c) {
    FUN_1808fcb90(&system_ptr_177c);
    if (_DAT_180c1177c == -1) {
      _DAT_180be3be8 = _DAT_180be3458;
      _DAT_180be3bf0 = 0;
      _DAT_180be3bf8 = 0;
      _DAT_180be3c00 = 0;
      _DAT_180be3c08 = 0;
      _DAT_180be3c10 = 0;
      _DAT_180be3c18 = 0;
      FUN_1808fcb30(&system_ptr_177c);
    }
  }
  _DAT_180be3bf8 = CONCAT44(DAT_180be3bf8_4,_DAT_180be34ec);
  _DAT_180be3bf0 = CONCAT44(_DAT_180be34e8,_DAT_180be34e4);
  _DAT_180be3c00 = _DAT_180be3c00 & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < _DAT_180c11780) {
    FUN_1808fcb90(&system_ptr_1780);
    if (_DAT_180c11780 == -1) {
      _DAT_180be3c48 = _DAT_180be3460;
      _DAT_180be3c50 = 0;
      _DAT_180be3c58 = 0;
      _DAT_180be3c60 = 0;
      _DAT_180be3c68 = 0;
      _DAT_180be3c70 = 0;
      _DAT_180be3c78 = 0;
      FUN_1808fcb30(&system_ptr_1780);
    }
  }
  _DAT_180be3d88 = 0x180be3c80;
  _DAT_180be3d50 = FUN_18079b400;
  _DAT_180be3d58 = FUN_18079cd20;
  _DAT_180be3d60 = FUN_18079cda0;
  _DAT_180be3d70 = FUN_18079b600;
  _DAT_180be3d90 = &unknown_var_3648_ptr;
  _DAT_180be3d98 = &unknown_var_3904_ptr;
  _DAT_180be3db0 = FUN_18079b4c0;
  _DAT_180be3db8 = FUN_18079b5a0;
  _DAT_180be3c60 = _DAT_180be3c60 & 0xffffffff00000000;
  _DAT_180be3c50 = CONCAT44(_DAT_180be34f4,_DAT_180be34f0);
  _DAT_180be3c58 = CONCAT44(DAT_180be3c58_4,_DAT_180c11730);
  _DAT_180be3d80 = 0x14;
  return 0x180be3d20;
}



uint64_t FUN_18079df60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  int32_t *puVar5;
  longlong lVar6;
  int32_t uVar7;
  
  lVar1 = *param_1;
  iVar4 = 0;
  puVar5 = (int32_t *)(lVar1 + 0x218);
  do {
    uVar7 = cosf((float)iVar4 * 0.0001917476);
    iVar4 = iVar4 + 1;
    *puVar5 = uVar7;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 0x2000);
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  iVar4 = 0;
  *(int32_t *)(lVar1 + 0xc220) = 4;
  *(uint64_t *)(lVar1 + 0xc228) = 0;
  *(int32_t *)(lVar1 + 0xc218) = 0x3f800000;
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar6 = 0;
    do {
      uVar3 = func_0x000180762a70(lVar1,iVar4,
                                  *(int32_t *)
                                   (*(longlong *)(*(longlong *)(lVar2 + 0x68) + lVar6) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(longlong *)(lVar1 + 0xe8);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar4 < *(int *)(lVar2 + 0x60));
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18079e030(longlong *param_1)

{
  if (*(longlong *)(*param_1 + 0xc228) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(*param_1 + 0xc228),
                  &unknown_var_5760_ptr,0x322,1);
  }
  return 0;
}



uint64_t FUN_18079e080(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0xc228) == 0) {
    return 0;
  }
  if (0 < *(int *)(lVar1 + 0xc234)) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(lVar1 + 0xc228),0,0x14020);
  }
  return 0;
}



uint64_t FUN_18079e097(void)

{
  longlong unaff_RBX;
  
  if (0 < *(int *)(unaff_RBX + 0xc234)) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(unaff_RBX + 0xc228),0,0x14020);
  }
  return 0;
}



uint64_t FUN_18079e1a1(void)

{
  return 0;
}



uint64_t FUN_18079e1b3(void)

{
  return 0;
}



uint64_t
FUN_18079e1c0(longlong *param_1,longlong param_2,uint64_t param_3,int param_4,int param_5,
             int *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = *param_1;
  if ((param_5 <= *(int *)(lVar1 + 0xc234)) && (*(longlong *)(lVar1 + 0xc228) != 0)) {
    uVar2 = 0;
    uVar4 = uVar2;
    uVar5 = uVar2;
    if (0 < param_5) {
      do {
        *(int32_t *)(*(longlong *)(lVar1 + 0xc228) + 0x14030 + uVar2) =
             *(int32_t *)(lVar1 + 0xc21c);
        *(int32_t *)(*(longlong *)(lVar1 + 0xc228) + 0x14034 + uVar2) =
             *(int32_t *)(lVar1 + 0xc238);
        FUN_1807a0c70(*(longlong *)(lVar1 + 0xc228) + uVar5,*(int32_t *)(lVar1 + 0xc218),param_4,
                      *(int32_t *)(lVar1 + 0xc220),(float)*(int *)(lVar1 + 0xc230),param_2,
                      param_3,(int)uVar4,param_5);
        uVar3 = (int)uVar4 + 1;
        uVar2 = uVar2 + 0x14048;
        uVar4 = (ulonglong)uVar3;
        uVar5 = uVar5 + 0x14048;
      } while ((int)uVar3 < param_5);
    }
    return 0;
  }
                    // WARNING: Subroutine does not return
  memcpy(param_3,param_2,(ulonglong)(uint)(*param_6 * param_4) << 2);
}



uint64_t FUN_18079e1df(longlong *param_1)

{
  longlong lVar1;
  longlong in_RAX;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  ulonglong uVar2;
  uint64_t unaff_RSI;
  uint uVar3;
  uint64_t unaff_RDI;
  int32_t unaff_R12D;
  uint64_t unaff_R15;
  ulonglong uVar5;
  int in_stack_000000a0;
  ulonglong uVar4;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  lVar1 = *param_1;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  if ((in_stack_000000a0 <= *(int *)(lVar1 + 0xc234)) && (*(longlong *)(lVar1 + 0xc228) != 0)) {
    *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
    uVar2 = 0;
    if (0 < in_stack_000000a0) {
      *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
      *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
      uVar4 = uVar2;
      uVar5 = uVar2;
      do {
        *(int32_t *)(*(longlong *)(lVar1 + 0xc228) + 0x14030 + uVar2) =
             *(int32_t *)(lVar1 + 0xc21c);
        *(int32_t *)(*(longlong *)(lVar1 + 0xc228) + 0x14034 + uVar2) =
             *(int32_t *)(lVar1 + 0xc238);
        FUN_1807a0c70(*(longlong *)(lVar1 + 0xc228) + uVar5,*(int32_t *)(lVar1 + 0xc218),
                      unaff_R12D,*(int32_t *)(lVar1 + 0xc220),(float)*(int *)(lVar1 + 0xc230));
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar2 = uVar2 + 0x14048;
        uVar5 = uVar5 + 0x14048;
      } while ((int)uVar3 < in_stack_000000a0);
    }
    return 0;
  }
                    // WARNING: Subroutine does not return
  memcpy();
}



uint64_t FUN_18079e20b(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  ulonglong uVar1;
  int unaff_ESI;
  uint uVar2;
  uint64_t unaff_RDI;
  int32_t unaff_R12D;
  uint64_t unaff_R15;
  ulonglong uVar4;
  int iStack0000000000000038;
  ulonglong uVar3;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  uVar1 = 0;
  if (0 < unaff_ESI) {
    *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
    *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
    uVar3 = uVar1;
    uVar4 = uVar1;
    do {
      *(int32_t *)(*(longlong *)(unaff_RBX + 0xc228) + 0x14030 + uVar1) =
           *(int32_t *)(unaff_RBX + 0xc21c);
      *(int32_t *)(*(longlong *)(unaff_RBX + 0xc228) + 0x14034 + uVar1) =
           *(int32_t *)(unaff_RBX + 0xc238);
      iStack0000000000000038 = (int)uVar3;
      FUN_1807a0c70(*(longlong *)(unaff_RBX + 0xc228) + uVar4,*(int32_t *)(unaff_RBX + 0xc218),
                    unaff_R12D,*(int32_t *)(unaff_RBX + 0xc220),
                    (float)*(int *)(unaff_RBX + 0xc230));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar1 = uVar1 + 0x14048;
      uVar4 = uVar4 + 0x14048;
    } while ((int)uVar2 < unaff_ESI);
  }
  return 0;
}



uint64_t FUN_18079e219(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  ulonglong uVar1;
  int unaff_ESI;
  uint unaff_EDI;
  int32_t unaff_R12D;
  uint64_t unaff_R15;
  ulonglong uVar2;
  uint uStack0000000000000038;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  uVar1 = (ulonglong)unaff_EDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  uVar2 = (ulonglong)unaff_EDI;
  do {
    *(int32_t *)(*(longlong *)(unaff_RBX + 0xc228) + 0x14030 + uVar1) =
         *(int32_t *)(unaff_RBX + 0xc21c);
    *(int32_t *)(*(longlong *)(unaff_RBX + 0xc228) + 0x14034 + uVar1) =
         *(int32_t *)(unaff_RBX + 0xc238);
    uStack0000000000000038 = unaff_EDI;
    FUN_1807a0c70(*(longlong *)(unaff_RBX + 0xc228) + uVar2,*(int32_t *)(unaff_RBX + 0xc218),
                  unaff_R12D,*(int32_t *)(unaff_RBX + 0xc220),(float)*(int *)(unaff_RBX + 0xc230)
                 );
    unaff_EDI = unaff_EDI + 1;
    uVar1 = uVar1 + 0x14048;
    uVar2 = uVar2 + 0x14048;
  } while ((int)unaff_EDI < unaff_ESI);
  return 0;
}





// 函数: void FUN_18079e2bf(void)
void FUN_18079e2bf(void)

{
  return;
}





// 函数: void FUN_18079e2c4(void)
void FUN_18079e2c4(void)

{
  return;
}



uint64_t FUN_18079e2df(void)

{
  return 0;
}





// 函数: void FUN_18079e2e3(void)
void FUN_18079e2e3(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}



uint64_t FUN_18079e302(void)

{
  return 0;
}



uint64_t FUN_18079e320(longlong *param_1,int param_2,float *param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    if (param_3 != (float *)0x0) {
      *param_3 = *(float *)(lVar1 + 0xc218);
    }
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&unknown_var_2048_ptr,(double)*(float *)(lVar1 + 0xc218));
    }
  }
  else if (param_2 == 1) {
    if (param_3 != (float *)0x0) {
      *param_3 = (float)*(int *)(lVar1 + 0xc21c);
    }
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&unknown_var_4576_ptr,*(int32_t *)(lVar1 + 0xc21c));
    }
  }
  else if (param_2 == 2) {
    if (param_3 != (float *)0x0) {
      *param_3 = (float)*(int *)(lVar1 + 0xc220);
    }
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&unknown_var_4576_ptr,*(int32_t *)(lVar1 + 0xc220));
    }
  }
  else if (param_2 == 3) {
    if (param_3 != (float *)0x0) {
      *param_3 = (float)*(int *)(lVar1 + 0xc224);
    }
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&unknown_var_4576_ptr,*(int32_t *)(lVar1 + 0xc224));
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




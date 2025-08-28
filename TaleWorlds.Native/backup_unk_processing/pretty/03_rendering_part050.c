#include "TaleWorlds.Native.Split.h"

// 03_rendering_part050.c - 9 个函数

// 函数: void FUN_1802943c0(longlong param_1)
void FUN_1802943c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8);
  }
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180294430(longlong param_1)
void FUN_180294430(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  uVar5 = uVar6;
  uVar8 = uVar6;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      lVar2 = *(longlong *)(uVar8 + *(longlong *)(param_1 + 0x68));
      if ((lVar2 != 0) && (*(char *)(uVar8 + 0xc + *(longlong *)(param_1 + 0x68)) != '\0')) {
        if (_DAT_180c8a9b0 != 0) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar2,_DAT_180c8a9a8);
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      uVar8 = uVar8 + 0x88;
    } while ((int)uVar7 < *(int *)(param_1 + 0x60));
  }
  uVar5 = uVar6;
  uVar8 = uVar6;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + uVar5);
      uVar3 = *(ulonglong *)(lVar2 + 0x50);
      if ((*(ulonglong *)(param_1 + 0x68) <= uVar3) &&
         (uVar3 < (longlong)*(int *)(param_1 + 0x60) * 0x88 + *(ulonglong *)(param_1 + 0x68))) {
        *(uint64_t *)(lVar2 + 0x50) = 0;
        *(int16_t *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar5) + 0x4e) = 0;
      }
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 0x40));
  }
  lVar4 = _DAT_180c8a9b0;
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    if (lVar2 != 0) {
      *(uint64_t *)(param_1 + 0x50) = 0;
      if (lVar4 != 0) {
        *(int *)(lVar4 + 0x3a8) = *(int *)(lVar4 + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar2,_DAT_180c8a9a8);
    }
    *(int32_t *)(param_1 + 0x70) = 0xffffffff;
    FUN_1802943c0(param_1);
    lVar2 = _DAT_180c8a9b0;
    uVar5 = uVar6;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        lVar4 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x48));
        if (lVar4 != 0) {
          FUN_180296ad0(lVar4);
          if (_DAT_180c8a9b0 != 0) {
            *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
          }
                    // WARNING: Subroutine does not return
          FUN_180059ba0(lVar4,_DAT_180c8a9a8);
        }
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
        uVar5 = uVar5 + 8;
      } while ((int)uVar7 < *(int *)(param_1 + 0x40));
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (lVar4 == 0) {
      return;
    }
    *(uint64_t *)(param_1 + 0x40) = 0;
    if (lVar2 != 0) {
      piVar1 = (int *)(lVar2 + 0x3a8);
      *piVar1 = *piVar1 + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar4,_DAT_180c8a9a8);
  }
  *(uint64_t *)(param_1 + 0x60) = 0;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x3a8) = *(int *)(lVar4 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(lVar2,_DAT_180c8a9a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029443c(longlong param_1)
void FUN_18029443c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong unaff_RBP;
  uint uVar7;
  ulonglong uVar8;
  
  iVar6 = (int)unaff_RBP;
  uVar5 = unaff_RBP & 0xffffffff;
  if (iVar6 < *(int *)(param_1 + 0x60)) {
    uVar8 = unaff_RBP & 0xffffffff;
    do {
      lVar2 = *(longlong *)(uVar8 + *(longlong *)(param_1 + 0x68));
      if ((lVar2 != 0) &&
         (*(char *)(uVar8 + 0xc + *(longlong *)(param_1 + 0x68)) != (char)unaff_RBP)) {
        if (_DAT_180c8a9b0 != 0) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar2,_DAT_180c8a9a8);
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      uVar8 = uVar8 + 0x88;
    } while ((int)uVar7 < *(int *)(param_1 + 0x60));
  }
  uVar8 = unaff_RBP & 0xffffffff;
  uVar5 = unaff_RBP;
  if (iVar6 < *(int *)(param_1 + 0x40)) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + uVar5);
      uVar3 = *(ulonglong *)(lVar2 + 0x50);
      if ((*(ulonglong *)(param_1 + 0x68) <= uVar3) &&
         (uVar3 < (longlong)*(int *)(param_1 + 0x60) * 0x88 + *(ulonglong *)(param_1 + 0x68))) {
        *(ulonglong *)(lVar2 + 0x50) = unaff_RBP;
        *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar5) + 0x4e) = (short)unaff_RBP;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0x40));
  }
  lVar4 = _DAT_180c8a9b0;
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    if (lVar2 != 0) {
      *(ulonglong *)(param_1 + 0x50) = unaff_RBP;
      if (lVar4 != 0) {
        *(int *)(lVar4 + 0x3a8) = *(int *)(lVar4 + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar2,_DAT_180c8a9a8);
    }
    *(int32_t *)(param_1 + 0x70) = 0xffffffff;
    FUN_1802943c0(param_1);
    lVar2 = _DAT_180c8a9b0;
    uVar8 = unaff_RBP & 0xffffffff;
    uVar5 = unaff_RBP;
    if (iVar6 < *(int *)(param_1 + 0x40)) {
      do {
        lVar4 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x48));
        if (lVar4 != 0) {
          FUN_180296ad0(lVar4);
          if (_DAT_180c8a9b0 != 0) {
            *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
          }
                    // WARNING: Subroutine does not return
          FUN_180059ba0(lVar4,_DAT_180c8a9a8);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar5 = uVar5 + 8;
      } while ((int)uVar7 < *(int *)(param_1 + 0x40));
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (lVar4 == 0) {
      return;
    }
    *(ulonglong *)(param_1 + 0x40) = unaff_RBP;
    if (lVar2 != 0) {
      piVar1 = (int *)(lVar2 + 0x3a8);
      *piVar1 = *piVar1 + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar4,_DAT_180c8a9a8);
  }
  *(ulonglong *)(param_1 + 0x60) = unaff_RBP;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x3a8) = *(int *)(lVar4 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(lVar2,_DAT_180c8a9a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180294576(void)
void FUN_180294576(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong lVar4;
  
  lVar3 = _DAT_180c8a9b0;
  lVar4 = unaff_RBP;
  do {
    lVar2 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBX + 0x48));
    if (lVar2 != 0) {
      FUN_180296ad0(lVar2);
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(lVar2,_DAT_180c8a9a8);
    }
    unaff_ESI = unaff_ESI + 1;
    lVar4 = lVar4 + 8;
  } while (unaff_ESI < *(int *)(unaff_RBX + 0x40));
  lVar4 = *(longlong *)(unaff_RBX + 0x48);
  if (lVar4 != 0) {
    *(longlong *)(unaff_RBX + 0x40) = unaff_RBP;
    if (lVar3 != 0) {
      piVar1 = (int *)(lVar3 + 0x3a8);
      *piVar1 = *piVar1 + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar4,_DAT_180c8a9a8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802945c6(void)
void FUN_1802945c6(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  
  lVar3 = _DAT_180c8a9b0;
  lVar2 = *(longlong *)(unaff_RBX + 0x48);
  if (lVar2 != 0) {
    *(uint64_t *)(unaff_RBX + 0x40) = unaff_RBP;
    if (lVar3 != 0) {
      piVar1 = (int *)(lVar3 + 0x3a8);
      *piVar1 = *piVar1 + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802945d9(uint64_t param_1)
void FUN_1802945d9(uint64_t param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  
  lVar2 = _DAT_180c8a9b0;
  *(uint64_t *)(unaff_RBX + 0x40) = unaff_RBP;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x3a8);
    *piVar1 = *piVar1 + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(param_1,_DAT_180c8a9a8);
}



// WARNING: Removing unreachable block (ram,0x0001802947a0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180294610(longlong param_1,uint64_t *param_2,int32_t *param_3,int32_t *param_4)
void FUN_180294610(longlong param_1,uint64_t *param_2,int32_t *param_3,int32_t *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  int8_t auStack_198 [32];
  void *puStack_178;
  uint64_t uStack_168;
  longlong lStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int8_t uStack_148;
  uint7 uStack_147;
  uint64_t uStack_140;
  longlong lStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  int32_t uStack_124;
  uint uStack_120;
  int32_t uStack_11c;
  int8_t uStack_118;
  int8_t uStack_117;
  int8_t uStack_116;
  int8_t uStack_115;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  uint uStack_cc;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  int32_t uStack_bc;
  uint uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  uint uStack_a4;
  uint64_t uStack_a0;
  int32_t uStack_98;
  uint uStack_90;
  int32_t uStack_8c;
  uint64_t uStack_84;
  int8_t uStack_7c;
  int8_t uStack_7b;
  int8_t uStack_7a;
  int8_t uStack_79;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  uint64_t uStack_64;
  uint64_t uStack_58;
  ulonglong uStack_48;
  
  uVar4 = uStack_b8;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        uStack_7c = 0;
        uStack_7b = 0;
        uStack_7a = 0;
        uStack_79 = 0;
        uStack_78 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_84 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_64 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_cc = CONCAT31(uStack_cc._1_3_,1);
        lStack_160 = (ulonglong)uStack_cc << 0x20;
        uStack_168 = 0;
        uStack_b8 = uStack_b8 & 0xffffff00;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_140 = 0;
        uStack_98 = 0;
        uStack_90 = uStack_90 & 0xffffff00;
        uStack_8c = 0;
        uStack_c8 = 0;
        uStack_128 = 0;
        uStack_124 = 0x7f7fffff;
        uStack_120 = uStack_90;
        uStack_11c = 0;
        uStack_c0 = 3;
        uStack_bc = 1;
        uStack_118 = 0;
        uStack_117 = 0;
        uStack_116 = 0x80;
        uStack_115 = 0x3f;
        uStack_a0 = 0;
        lStack_138 = (ulonglong)uStack_a4 << 0x20;
        uStack_58 = 0;
        uStack_130 = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_150 = 0x100000001;
        _uStack_148 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
        uStack_100 = 0x78;
        uStack_108 = 0x703331202c667474;
        uStack_10c = 0x2e6e6165;
        uStack_110 = 0x6c437967;
        uStack_114 = 0x676f7250;
        uStack_158 = 0x4150000000000000;
        puStack_178 = &UNK_180a16f40;
        lVar5 = FUN_180294c20(param_1,&UNK_18098e3b0,param_3,&uStack_168);
        *(int32_t *)(lVar5 + 0xc) = 0x3f800000;
      }
      FUN_180294f50(param_1);
    }
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 != (byte *)0x0) {
      iVar7 = *(int *)(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x2c);
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      puVar6 = (uint *)func_0x000180120ce0((longlong)iVar2 * (longlong)iVar7 * 4,_DAT_180c8a9a8);
      *(uint **)(param_1 + 0x20) = puVar6;
      for (iVar7 = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28); 0 < iVar7;
          iVar7 = iVar7 + -1) {
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        *puVar6 = (uint)bVar1 << 0x18 | 0xffffff;
        puVar6 = puVar6 + 1;
      }
    }
  }
  *param_2 = *(uint64_t *)(param_1 + 0x20);
  if (param_3 != (int32_t *)0x0) {
    *param_3 = *(int32_t *)(param_1 + 0x28);
  }
  if (param_4 != (int32_t *)0x0) {
    *param_4 = *(int32_t *)(param_1 + 0x2c);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180294638(longlong param_1,uint64_t *param_2,int32_t *param_3,uint64_t param_4,
void FUN_180294638(longlong param_1,uint64_t *param_2,int32_t *param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                  void *param_13,uint64_t param_14,uint64_t param_15)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  uint64_t uVar5;
  longlong lVar6;
  uint *puVar7;
  void *puVar8;
  int iVar9;
  int32_t *unaff_RBP;
  int32_t *unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  bool in_ZF;
  
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R15;
  if (in_ZF) {
    lVar6 = *(longlong *)(param_1 + 0x18);
    *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
    if (lVar6 == 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        *(uint64_t *)(unaff_RBP + 7) = 0;
        *(uint64_t *)(unaff_RBP + 0xb) = 0;
        *(uint64_t *)(unaff_RBP + -5) = 0;
        *(uint64_t *)(unaff_RBP + 5) = 0;
        *(uint64_t *)(unaff_RBP + 9) = 0;
        *(uint64_t *)(unaff_RBP + 0xd) = 0;
        *(uint64_t *)(unaff_RBP + -0x10) = 0;
        unaff_RBP[-0xe] = 0;
        *(int8_t *)(unaff_RBP + -0xd) = 1;
        param_6 = *(uint64_t *)(unaff_RBP + -0x10);
        param_7 = *(uint64_t *)(unaff_RBP + -0xe);
        *(int8_t *)(unaff_RBP + -8) = 0;
        *(uint64_t *)(unaff_RBP + -7) = 0;
        param_11 = *(uint64_t *)(unaff_RBP + -6);
        *unaff_RBP = 0;
        *(int8_t *)(unaff_RBP + 2) = 0;
        unaff_RBP[3] = 0;
        param_14._0_4_ = *unaff_RBP;
        param_15._0_4_ = unaff_RBP[2];
        param_15._4_4_ = unaff_RBP[3];
        *(uint64_t *)(unaff_RBP + -0xc) = 0;
        param_14._4_4_ = 0x7f7fffff;
        unaff_RBP[-10] = 3;
        unaff_RBP[-9] = 1;
        uVar5 = *(uint64_t *)(unaff_RBP + -0xc);
        *(int8_t *)(unaff_RBP + -0x20) = 0;
        *(int8_t *)((longlong)unaff_RBP + -0x7f) = 0;
        *(int8_t *)((longlong)unaff_RBP + -0x7e) = 0x80;
        *(int8_t *)((longlong)unaff_RBP + -0x7d) = 0x3f;
        *(char *)(unaff_RBP + -0x1f) = *(char *)(unaff_RBP + 5);
        *(int8_t *)((longlong)unaff_RBP + -0x7b) = *(int8_t *)((longlong)unaff_RBP + 0x15);
        *(int8_t *)((longlong)unaff_RBP + -0x7a) = *(int8_t *)((longlong)unaff_RBP + 0x16);
        *(int8_t *)((longlong)unaff_RBP + -0x79) = *(int8_t *)((longlong)unaff_RBP + 0x17);
        *(int8_t *)(unaff_RBP + -0x1e) = *(int8_t *)(unaff_RBP + 6);
        *(int8_t *)((longlong)unaff_RBP + -0x77) = *(int8_t *)((longlong)unaff_RBP + 0x19);
        *(int8_t *)((longlong)unaff_RBP + -0x76) = *(int8_t *)((longlong)unaff_RBP + 0x1a);
        *(int8_t *)((longlong)unaff_RBP + -0x75) = *(int8_t *)((longlong)unaff_RBP + 0x1b);
        *(int8_t *)(unaff_RBP + -0x1d) = *(int8_t *)(unaff_RBP + 7);
        *(int8_t *)((longlong)unaff_RBP + -0x73) = *(int8_t *)((longlong)unaff_RBP + 0x1d);
        *(int8_t *)((longlong)unaff_RBP + -0x72) = *(int8_t *)((longlong)unaff_RBP + 0x1e);
        *(int8_t *)((longlong)unaff_RBP + -0x71) = *(int8_t *)((longlong)unaff_RBP + 0x1f);
        *(uint64_t *)(unaff_RBP + -2) = 0;
        param_12 = *(uint64_t *)(unaff_RBP + -4);
        param_13 = *(void **)(unaff_RBP + -2);
        *(uint64_t *)(unaff_RBP + 0x10) = 0;
        *(uint64_t *)(unaff_RBP + -0x1c) = *(uint64_t *)(unaff_RBP + 8);
        *(uint64_t *)(unaff_RBP + -0x1a) = *(uint64_t *)(unaff_RBP + 10);
        unaff_RBP[-0x18] = unaff_RBP[0xc];
        unaff_RBP[-0x17] = unaff_RBP[0xd];
        unaff_RBP[-0x16] = unaff_RBP[0xe];
        unaff_RBP[-0x15] = unaff_RBP[0xf];
        *(uint64_t *)(unaff_RBP + -0x14) = *(uint64_t *)(unaff_RBP + 0x10);
        param_9 = 0x100000001;
        param_10 = CONCAT71((int7)((ulonglong)*(uint64_t *)(unaff_RBP + -8) >> 8),1);
        if (*(char *)(unaff_RBP + 5) == '\0') {
          unaff_RBP[-0x1b] = 0x70333120;
          unaff_RBP[-0x1f] = 0x676f7250;
          unaff_RBP[-0x1e] = 0x6c437967;
          unaff_RBP[-0x1d] = 0x2e6e6165;
          unaff_RBP[-0x1c] = 0x2c667474;
          *(int16_t *)(unaff_RBP + -0x1a) = 0x78;
        }
        param_8._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        bVar4 = param_8._4_4_ <= 0.0;
        param_8 = uVar5;
        if (bVar4) {
          param_8 = CONCAT44(0x41500000,(int)uVar5);
        }
        puVar8 = &UNK_180a16f40;
        if (param_13 != (void *)0x0) {
          puVar8 = param_13;
        }
        lVar6 = FUN_180294c20(param_1,&UNK_18098e3b0,param_3,&param_6,puVar8);
        *(int32_t *)(lVar6 + 0xc) = 0x3f800000;
      }
      FUN_180294f50(param_1);
    }
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 != (byte *)0x0) {
      iVar9 = *(int *)(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x2c);
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      puVar7 = (uint *)func_0x000180120ce0((longlong)iVar2 * (longlong)iVar9 * 4,_DAT_180c8a9a8);
      *(uint **)(param_1 + 0x20) = puVar7;
      for (iVar9 = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28); 0 < iVar9;
          iVar9 = iVar9 + -1) {
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        *puVar7 = (uint)bVar1 << 0x18 | 0xffffff;
        puVar7 = puVar7 + 1;
      }
    }
  }
  *param_2 = *(uint64_t *)(param_1 + 0x20);
  if (param_3 != (int32_t *)0x0) {
    *param_3 = *(int32_t *)(param_1 + 0x28);
  }
  if (unaff_RSI != (int32_t *)0x0) {
    *unaff_RSI = *(int32_t *)(param_1 + 0x2c);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x14) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029463f(longlong param_1,uint64_t *param_2,int32_t *param_3,uint64_t param_4,
void FUN_18029463f(longlong param_1,uint64_t *param_2,int32_t *param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                  void *param_13,uint64_t param_14,uint64_t param_15)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  uint64_t uVar5;
  longlong lVar6;
  uint *puVar7;
  void *puVar8;
  int iVar9;
  longlong unaff_RBX;
  int32_t *unaff_RBP;
  int32_t *unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R15;
  bool in_ZF;
  int32_t uVar10;
  
  *(uint64_t *)(in_R11 + -0x30) = unaff_R15;
  if (in_ZF) {
    lVar6 = *(longlong *)(param_1 + 0x18);
    *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
    if (lVar6 == 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        *(uint64_t *)(unaff_RBP + 7) = 0;
        *(uint64_t *)(unaff_RBP + 0xb) = 0;
        *(uint64_t *)(unaff_RBP + -5) = 0;
        *(uint64_t *)(unaff_RBP + 5) = 0;
        *(uint64_t *)(unaff_RBP + 9) = 0;
        *(uint64_t *)(unaff_RBP + 0xd) = 0;
        *(uint64_t *)(unaff_RBP + -0x10) = 0;
        unaff_RBP[-0xe] = 0;
        *(int8_t *)(unaff_RBP + -0xd) = 1;
        param_6 = *(uint64_t *)(unaff_RBP + -0x10);
        param_7 = *(uint64_t *)(unaff_RBP + -0xe);
        *(int8_t *)(unaff_RBP + -8) = 0;
        *(uint64_t *)(unaff_RBP + -7) = 0;
        param_11 = *(uint64_t *)(unaff_RBP + -6);
        *unaff_RBP = 0;
        *(int8_t *)(unaff_RBP + 2) = 0;
        unaff_RBP[3] = 0;
        param_14._0_4_ = *unaff_RBP;
        param_15._0_4_ = unaff_RBP[2];
        param_15._4_4_ = unaff_RBP[3];
        *(uint64_t *)(unaff_RBP + -0xc) = 0;
        param_14._4_4_ = 0x7f7fffff;
        unaff_RBP[-10] = 3;
        unaff_RBP[-9] = 1;
        uVar5 = *(uint64_t *)(unaff_RBP + -0xc);
        *(int8_t *)(unaff_RBP + -0x20) = 0;
        *(int8_t *)((longlong)unaff_RBP + -0x7f) = 0;
        *(int8_t *)((longlong)unaff_RBP + -0x7e) = 0x80;
        *(int8_t *)((longlong)unaff_RBP + -0x7d) = 0x3f;
        *(char *)(unaff_RBP + -0x1f) = *(char *)(unaff_RBP + 5);
        *(int8_t *)((longlong)unaff_RBP + -0x7b) = *(int8_t *)((longlong)unaff_RBP + 0x15);
        *(int8_t *)((longlong)unaff_RBP + -0x7a) = *(int8_t *)((longlong)unaff_RBP + 0x16);
        *(int8_t *)((longlong)unaff_RBP + -0x79) = *(int8_t *)((longlong)unaff_RBP + 0x17);
        *(int8_t *)(unaff_RBP + -0x1e) = *(int8_t *)(unaff_RBP + 6);
        *(int8_t *)((longlong)unaff_RBP + -0x77) = *(int8_t *)((longlong)unaff_RBP + 0x19);
        *(int8_t *)((longlong)unaff_RBP + -0x76) = *(int8_t *)((longlong)unaff_RBP + 0x1a);
        *(int8_t *)((longlong)unaff_RBP + -0x75) = *(int8_t *)((longlong)unaff_RBP + 0x1b);
        *(int8_t *)(unaff_RBP + -0x1d) = *(int8_t *)(unaff_RBP + 7);
        *(int8_t *)((longlong)unaff_RBP + -0x73) = *(int8_t *)((longlong)unaff_RBP + 0x1d);
        *(int8_t *)((longlong)unaff_RBP + -0x72) = *(int8_t *)((longlong)unaff_RBP + 0x1e);
        *(int8_t *)((longlong)unaff_RBP + -0x71) = *(int8_t *)((longlong)unaff_RBP + 0x1f);
        *(uint64_t *)(unaff_RBP + -2) = 0;
        param_12 = *(uint64_t *)(unaff_RBP + -4);
        param_13 = *(void **)(unaff_RBP + -2);
        *(uint64_t *)(unaff_RBP + 0x10) = 0;
        *(uint64_t *)(unaff_RBP + -0x1c) = *(uint64_t *)(unaff_RBP + 8);
        *(uint64_t *)(unaff_RBP + -0x1a) = *(uint64_t *)(unaff_RBP + 10);
        uVar10 = (int32_t)*(uint64_t *)(unaff_RBP + 0x10);
        unaff_RBP[-0x18] = unaff_RBP[0xc];
        unaff_RBP[-0x17] = unaff_RBP[0xd];
        unaff_RBP[-0x16] = unaff_RBP[0xe];
        unaff_RBP[-0x15] = unaff_RBP[0xf];
        *(uint64_t *)(unaff_RBP + -0x14) = *(uint64_t *)(unaff_RBP + 0x10);
        param_9 = 0x100000001;
        param_10 = CONCAT71((int7)((ulonglong)*(uint64_t *)(unaff_RBP + -8) >> 8),1);
        if (*(char *)(unaff_RBP + 5) == '\0') {
          uVar10 = 0x676f7250;
          unaff_RBP[-0x1b] = 0x70333120;
          unaff_RBP[-0x1f] = 0x676f7250;
          unaff_RBP[-0x1e] = 0x6c437967;
          unaff_RBP[-0x1d] = 0x2e6e6165;
          unaff_RBP[-0x1c] = 0x2c667474;
          *(int16_t *)(unaff_RBP + -0x1a) = 0x78;
        }
        param_8._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        bVar4 = param_8._4_4_ <= 0.0;
        param_8 = uVar5;
        if (bVar4) {
          param_8 = CONCAT44(0x41500000,(int)uVar5);
        }
        puVar8 = &UNK_180a16f40;
        if (param_13 != (void *)0x0) {
          puVar8 = param_13;
        }
        lVar6 = FUN_180294c20(uVar10,&UNK_18098e3b0,param_3,&param_6,puVar8);
        *(int32_t *)(lVar6 + 0xc) = 0x3f800000;
      }
      FUN_180294f50();
    }
    pbVar3 = *(byte **)(unaff_RBX + 0x18);
    if (pbVar3 != (byte *)0x0) {
      iVar9 = *(int *)(unaff_RBX + 0x28);
      iVar2 = *(int *)(unaff_RBX + 0x2c);
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      puVar7 = (uint *)func_0x000180120ce0((longlong)iVar2 * (longlong)iVar9 * 4,_DAT_180c8a9a8);
      *(uint **)(unaff_RBX + 0x20) = puVar7;
      for (iVar9 = *(int *)(unaff_RBX + 0x2c) * *(int *)(unaff_RBX + 0x28); 0 < iVar9;
          iVar9 = iVar9 + -1) {
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        *puVar7 = (uint)bVar1 << 0x18 | 0xffffff;
        puVar7 = puVar7 + 1;
      }
    }
  }
  *param_2 = *(uint64_t *)(unaff_RBX + 0x20);
  if (param_3 != (int32_t *)0x0) {
    *param_3 = *(int32_t *)(unaff_RBX + 0x28);
  }
  if (unaff_RSI != (int32_t *)0x0) {
    *unaff_RSI = *(int32_t *)(unaff_RBX + 0x2c);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x14) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




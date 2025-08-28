#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part075.c - 2 个函数

// 函数: void FUN_18070f535(void)
void FUN_18070f535(void)

{
  return;
}



uint FUN_18070f540(longlong *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar8 = *(uint *)(param_1 + 4);
  uVar5 = param_2 - 1;
  uVar9 = *(uint *)((longlong)param_1 + 0x24);
  iVar11 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
    }
  }
  if (iVar11 + 1 < 9) {
    iVar1 = (int)((ulonglong)uVar8 / (ulonglong)param_2);
    *(int *)(param_1 + 5) = iVar1;
    iVar4 = (int)((ulonglong)uVar9 / ((ulonglong)uVar8 / (ulonglong)param_2));
    iVar11 = 0;
    if (param_2 < iVar4 + 1U) {
      iVar11 = (param_2 - iVar4) + -1;
    }
    iVar4 = (param_2 - iVar11) - iVar4;
    iVar11 = (param_2 - iVar4) * iVar1;
    uVar6 = iVar4 - 1;
    *(uint *)((longlong)param_1 + 0x24) = uVar9 - iVar11;
    if (uVar6 == 0) {
      iVar1 = uVar8 - iVar11;
    }
    *(int *)(param_1 + 4) = iVar1;
    FUN_18070f490(param_1);
  }
  else {
    uVar6 = iVar11 - 7;
    bVar3 = (byte)uVar6;
    uVar10 = (uVar5 >> (bVar3 & 0x1f)) + 1;
    iVar1 = (int)((ulonglong)uVar8 / (ulonglong)uVar10);
    *(int *)(param_1 + 5) = iVar1;
    iVar4 = (int)((ulonglong)uVar9 / ((ulonglong)uVar8 / (ulonglong)uVar10));
    iVar11 = 0;
    if (uVar10 < iVar4 + 1U) {
      iVar11 = (uVar10 - iVar4) + -1;
    }
    iVar4 = (uVar10 - iVar11) - iVar4;
    iVar11 = (uVar10 - iVar4) * iVar1;
    iVar4 = iVar4 + -1;
    *(uint *)((longlong)param_1 + 0x24) = uVar9 - iVar11;
    if (iVar4 == 0) {
      iVar1 = uVar8 - iVar11;
    }
    *(int *)(param_1 + 4) = iVar1;
    FUN_18070f490(param_1);
    uVar8 = *(uint *)((longlong)param_1 + 0x14);
    uVar9 = *(uint *)(param_1 + 2);
    if (uVar8 < uVar6) {
      uVar10 = *(uint *)((longlong)param_1 + 0xc);
      uVar7 = uVar8;
      do {
        if (uVar10 < *(uint *)(param_1 + 1)) {
          uVar10 = uVar10 + 1;
          *(uint *)((longlong)param_1 + 0xc) = uVar10;
          uVar2 = (uint)*(byte *)((ulonglong)(*(uint *)(param_1 + 1) - uVar10) + *param_1);
        }
        else {
          uVar2 = 0;
        }
        uVar8 = uVar7 + 8;
        uVar9 = uVar9 | uVar2 << ((byte)uVar7 & 0x1f);
        uVar7 = uVar8;
      } while ((int)uVar8 < 0x19);
    }
    *(uint *)(param_1 + 3) = (int)param_1[3] + uVar6;
    *(uint *)((longlong)param_1 + 0x14) = uVar8 - uVar6;
    *(uint *)(param_1 + 2) = uVar9 >> (bVar3 & 0x1f);
    uVar6 = (1 << (bVar3 & 0x1f)) - 1U & uVar9 | iVar4 << (bVar3 & 0x1f);
    if (uVar5 < uVar6) {
      *(int32_t *)(param_1 + 6) = 1;
      uVar6 = uVar5;
    }
  }
  return uVar6;
}



uint FUN_18070f57b(uint64_t param_1,uint param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_RAX;
  int iVar5;
  uint uVar6;
  uint unaff_EBX;
  uint unaff_EBP;
  uint unaff_ESI;
  longlong *unaff_RDI;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint in_R11D;
  int unaff_R14D;
  
  bVar2 = (byte)unaff_ESI;
  uVar9 = (unaff_EBX >> (bVar2 & 0x1f)) + 1;
  uVar1 = ((ulonglong)param_2 << 0x20 | in_RAX & 0xffffffff) / (ulonglong)uVar9;
  iVar3 = (int)uVar1;
  *(int *)(unaff_RDI + 5) = iVar3;
  iVar5 = (int)((ulonglong)in_R11D / (uVar1 & 0xffffffff));
  uVar8 = unaff_EBP;
  if (uVar9 < iVar5 + 1U) {
    uVar8 = (uVar9 - iVar5) - 1;
  }
  iVar5 = (uVar9 - uVar8) - iVar5;
  iVar10 = (uVar9 - iVar5) * iVar3;
  iVar5 = iVar5 + -1;
  *(uint *)((longlong)unaff_RDI + 0x24) = in_R11D - iVar10;
  if (iVar5 == 0) {
    iVar3 = unaff_R14D - iVar10;
  }
  *(int *)(unaff_RDI + 4) = iVar3;
  FUN_18070f490();
  uVar8 = *(uint *)((longlong)unaff_RDI + 0x14);
  uVar9 = *(uint *)(unaff_RDI + 2);
  if (uVar8 < unaff_ESI) {
    uVar6 = *(uint *)((longlong)unaff_RDI + 0xc);
    uVar7 = uVar8;
    do {
      uVar4 = unaff_EBP;
      if (uVar6 < *(uint *)(unaff_RDI + 1)) {
        uVar6 = uVar6 + 1;
        *(uint *)((longlong)unaff_RDI + 0xc) = uVar6;
        uVar4 = (uint)*(byte *)((ulonglong)(*(uint *)(unaff_RDI + 1) - uVar6) + *unaff_RDI);
      }
      uVar8 = uVar7 + 8;
      uVar9 = uVar9 | uVar4 << ((byte)uVar7 & 0x1f);
      uVar7 = uVar8;
    } while ((int)uVar8 < 0x19);
  }
  *(uint *)(unaff_RDI + 3) = (int)unaff_RDI[3] + unaff_ESI;
  *(uint *)((longlong)unaff_RDI + 0x14) = uVar8 - unaff_ESI;
  *(uint *)(unaff_RDI + 2) = uVar9 >> (bVar2 & 0x1f);
  uVar8 = (1 << (bVar2 & 0x1f)) - 1U & uVar9 | iVar5 << (bVar2 & 0x1f);
  if (unaff_EBX < uVar8) {
    *(int32_t *)(unaff_RDI + 6) = 1;
    uVar8 = unaff_EBX;
  }
  return uVar8;
}



int32_t FUN_18070f64d(void)

{
  int32_t unaff_EBX;
  longlong unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 0x30) = 1;
  return unaff_EBX;
}



ulonglong FUN_18070f860(byte *param_1,int param_2,int param_3,byte *param_4,longlong param_5,
                       short *param_6,int *param_7,int *param_8)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  short *psVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uStackX_8;
  
  uVar8 = 0;
  uVar9 = 0;
  uStackX_8 = 0;
  if ((param_6 == (short *)0x0) || (param_2 < 0)) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xfffffffc;
  }
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    iVar6 = 48000 << (bVar1 >> 3 & 3);
    iVar6 = iVar6 / 400 + (iVar6 >> 0x1f);
LAB_18070f928:
    iVar6 = iVar6 - (iVar6 >> 0x1f);
  }
  else if ((bVar1 & 0x60) == 0x60) {
    iVar6 = 0x3c0;
    if ((bVar1 & 8) == 0) {
      iVar6 = 0x1e0;
    }
  }
  else {
    bVar4 = bVar1 >> 3 & 3;
    if (bVar4 != 3) {
      iVar6 = 48000 << bVar4;
      iVar6 = iVar6 / 100 + (iVar6 >> 0x1f);
      goto LAB_18070f928;
    }
    iVar6 = 0xb40;
  }
  uVar15 = param_2 - 1;
  pbVar14 = param_1 + 1;
  bVar4 = 0;
  uVar13 = uVar15;
  if ((bVar1 & 3) == 0) {
    uVar10 = 1;
    uStackX_8 = uVar9;
  }
  else if ((bVar1 & 3) == 1) {
    uVar10 = 2;
    bVar4 = 1;
    uStackX_8 = uVar9;
    if (param_3 == 0) {
      if ((uVar15 & 1) != 0) {
        return 0xfffffffc;
      }
      *param_6 = (short)((int)uVar15 / 2);
      uVar13 = (int)uVar15 / 2;
    }
  }
  else if ((bVar1 & 3) == 2) {
    uVar10 = 2;
    iVar6 = func_0x0001807104d0(pbVar14,uVar15,param_6);
    sVar3 = *param_6;
    uVar15 = uVar15 - iVar6;
    if (sVar3 < 0) {
      return 0xfffffffc;
    }
    if ((int)uVar15 < (int)sVar3) {
      return 0xfffffffc;
    }
    pbVar14 = pbVar14 + iVar6;
    uStackX_8 = uVar9;
    uVar13 = uVar15 - (int)sVar3;
  }
  else {
    if ((int)uVar15 < 1) {
      return 0xfffffffc;
    }
    bVar4 = *pbVar14;
    pbVar14 = param_1 + 2;
    uVar9 = bVar4 & 0x3f;
    uVar10 = (ulonglong)uVar9;
    if ((bVar4 & 0x3f) == 0) {
      return 0xfffffffc;
    }
    if (0x1680 < (int)(iVar6 * uVar9)) {
      return 0xfffffffc;
    }
    uVar15 = param_2 - 2;
    uVar5 = uVar8;
    if ((bVar4 & 0x40) != 0) {
      do {
        if ((int)uVar15 < 1) {
          return 0xfffffffc;
        }
        bVar2 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        uVar11 = (uint)bVar2;
        if (bVar2 == 0xff) {
          uVar11 = 0xfe;
        }
        uStackX_8 = (int)uVar5 + uVar11;
        uVar15 = uVar15 + (-1 - uVar11);
        uVar5 = (ulonglong)uStackX_8;
      } while (bVar2 == 0xff);
    }
    if ((int)uVar15 < 0) {
      return 0xfffffffc;
    }
    bVar4 = ~(bVar4 >> 7) & 1;
    if (bVar4 == 0) {
      uVar5 = uVar8;
      psVar12 = param_6;
      uVar13 = uVar15;
      if (0 < (int)(uVar9 - 1)) {
        do {
          iVar6 = func_0x0001807104d0(pbVar14,uVar15,param_6 + (int)uVar5);
          sVar3 = *psVar12;
          uVar15 = uVar15 - iVar6;
          if (sVar3 < 0) {
            return 0xfffffffc;
          }
          if ((int)uVar15 < (int)sVar3) {
            return 0xfffffffc;
          }
          uVar11 = (int)uVar5 + 1;
          pbVar14 = pbVar14 + iVar6;
          uVar13 = uVar13 - (iVar6 + sVar3);
          uVar5 = (ulonglong)uVar11;
          psVar12 = psVar12 + 1;
        } while ((int)uVar11 < (int)(uVar9 - 1));
      }
      if ((int)uVar13 < 0) {
        return 0xfffffffc;
      }
    }
    else if (param_3 == 0) {
      uVar13 = (int)uVar15 / (int)uVar9;
      if (uVar9 * uVar13 != uVar15) {
        return 0xfffffffc;
      }
      if (0 < (int)(uVar9 - 1)) {
        psVar12 = param_6;
        for (uVar5 = uVar10 * 2 - 2 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *psVar12 = (short)uVar13;
          psVar12 = psVar12 + 1;
        }
      }
    }
  }
  if (param_3 == 0) {
    if ((int)uVar13 < 0x4fc) {
      param_6[uVar10 - 1] = (short)uVar13;
      goto LAB_18070fb9d;
    }
  }
  else {
    iVar6 = func_0x0001807104d0(pbVar14,uVar15,param_6 + (uVar10 - 1));
    if ((-1 < param_6[uVar10 - 1]) &&
       (iVar7 = (int)param_6[uVar10 - 1], iVar7 <= (int)(uVar15 - iVar6))) {
      pbVar14 = pbVar14 + iVar6;
      if (bVar4 == 0) {
        if (iVar6 + iVar7 <= (int)uVar13) goto LAB_18070fb9d;
      }
      else if (iVar7 * (int)uVar10 <= (int)(uVar15 - iVar6)) {
        uVar5 = uVar8;
        if (0 < (longlong)(uVar10 - 1)) {
          do {
            param_6[uVar5] = param_6[uVar10 - 1];
            uVar5 = uVar5 + 1;
          } while ((longlong)uVar5 < (longlong)(uVar10 - 1));
        }
LAB_18070fb9d:
        if (param_7 != (int *)0x0) {
          *param_7 = (int)pbVar14 - (int)param_1;
        }
        if ((int)uVar10 != 0) {
          do {
            if (param_5 != 0) {
              *(byte **)(param_5 + uVar8 * 8) = pbVar14;
            }
            psVar12 = param_6 + uVar8;
            uVar8 = uVar8 + 1;
            pbVar14 = pbVar14 + *psVar12;
          } while ((longlong)uVar8 < (longlong)uVar10);
        }
        if (param_8 != (int *)0x0) {
          *param_8 = ((int)pbVar14 - (int)param_1) + uStackX_8;
        }
        if (param_4 != (byte *)0x0) {
          *param_4 = bVar1;
          return uVar10;
        }
        return uVar10;
      }
    }
  }
  return 0xfffffffc;
}



ulonglong FUN_18070f8a4(byte *param_1,uint64_t param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong unaff_RBX;
  uint uVar8;
  ulonglong uVar9;
  short *unaff_RSI;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  longlong in_R10;
  byte *pbVar13;
  int in_R11D;
  uint uVar14;
  uint uVar15;
  int unaff_R14D;
  int unaff_R15D;
  bool in_ZF;
  int iStackX_20;
  int in_stack_00000070;
  int in_stack_00000080;
  byte *in_stack_00000088;
  longlong in_stack_00000090;
  int *in_stack_000000a0;
  int *in_stack_000000a8;
  
  if (in_ZF) {
    return 0xfffffffc;
  }
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    iVar6 = 48000 << (bVar1 >> 3 & 3);
    iVar6 = iVar6 / 400 + (iVar6 >> 0x1f);
LAB_18070f928:
    iVar6 = iVar6 - (iVar6 >> 0x1f);
  }
  else if ((bVar1 & 0x60) == 0x60) {
    iVar6 = 0x3c0;
    if ((bVar1 & 8) == 0) {
      iVar6 = 0x1e0;
    }
  }
  else {
    bVar4 = bVar1 >> 3 & 3;
    if (bVar4 != 3) {
      iVar6 = 48000 << bVar4;
      iVar6 = iVar6 / 100 + (iVar6 >> 0x1f);
      goto LAB_18070f928;
    }
    iVar6 = 0xb40;
  }
  uVar14 = in_R11D - 1;
  pbVar13 = (byte *)(in_R10 + 1);
  uVar15 = (uint)unaff_RBX;
  uVar12 = uVar14;
  if ((bVar1 & 3) == 0) {
    uVar9 = 1;
  }
  else if ((bVar1 & 3) == 1) {
    uVar9 = 2;
    uVar15 = 1;
    if (param_3 == 0) {
      if ((uVar14 & 1) != 0) {
        return 0xfffffffc;
      }
      *unaff_RSI = (short)((int)uVar14 / 2);
      uVar12 = (int)uVar14 / 2;
    }
  }
  else if ((bVar1 & 3) == 2) {
    uVar9 = 2;
    iVar6 = func_0x0001807104d0(pbVar13,uVar14);
    sVar3 = *unaff_RSI;
    uVar14 = uVar14 - iVar6;
    if (sVar3 < 0) {
      return 0xfffffffc;
    }
    if ((int)uVar14 < (int)sVar3) {
      return 0xfffffffc;
    }
    pbVar13 = pbVar13 + iVar6;
    uVar12 = uVar14 - (int)sVar3;
  }
  else {
    if ((int)uVar14 < 1) {
      return 0xfffffffc;
    }
    bVar4 = *pbVar13;
    pbVar13 = (byte *)(in_R10 + 2);
    uVar8 = bVar4 & 0x3f;
    uVar9 = (ulonglong)uVar8;
    if ((bVar4 & 0x3f) == 0) {
      return 0xfffffffc;
    }
    if (0x1680 < (int)(iVar6 * uVar8)) {
      return 0xfffffffc;
    }
    uVar14 = in_R11D - 2;
    if ((bVar4 & 0x40) != 0) {
      do {
        if ((int)uVar14 < 1) {
          return 0xfffffffc;
        }
        bVar2 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        uVar15 = (uint)bVar2;
        if (bVar2 == 0xff) {
          uVar15 = 0xfe;
        }
        unaff_R15D = unaff_R15D + uVar15;
        uVar14 = uVar14 + (-1 - uVar15);
        in_stack_00000070 = unaff_R15D;
      } while (bVar2 == 0xff);
    }
    if ((int)uVar14 < 0) {
      return 0xfffffffc;
    }
    uVar15 = ~(uint)(bVar4 >> 7) & 1;
    if (uVar15 == 0) {
      uVar5 = unaff_RBX & 0xffffffff;
      psVar11 = unaff_RSI;
      uVar12 = uVar14;
      if (0 < (int)(uVar8 - 1)) {
        do {
          iVar6 = func_0x0001807104d0(pbVar13,uVar14,unaff_RSI + (int)uVar5);
          sVar3 = *psVar11;
          uVar14 = uVar14 - iVar6;
          if (sVar3 < 0) {
            return 0xfffffffc;
          }
          if ((int)uVar14 < (int)sVar3) {
            return 0xfffffffc;
          }
          uVar10 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar10;
          pbVar13 = pbVar13 + iVar6;
          uVar12 = uVar12 - (iVar6 + sVar3);
          psVar11 = psVar11 + 1;
          unaff_R14D = in_stack_00000080;
        } while ((int)uVar10 < (int)(uVar8 - 1));
      }
      unaff_R15D = in_stack_00000070;
      if ((int)uVar12 < 0) {
        return 0xfffffffc;
      }
    }
    else if (param_3 == 0) {
      uVar12 = (int)uVar14 / (int)uVar8;
      if (uVar8 * uVar12 != uVar14) {
        return 0xfffffffc;
      }
      if (0 < (int)(uVar8 - 1)) {
        psVar11 = unaff_RSI;
        for (uVar5 = uVar9 * 2 - 2 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *psVar11 = (short)uVar12;
          psVar11 = psVar11 + 1;
        }
      }
    }
  }
  if (unaff_R14D == 0) {
    if ((int)uVar12 < 0x4fc) {
      unaff_RSI[uVar9 - 1] = (short)uVar12;
      goto LAB_18070fb9d;
    }
  }
  else {
    iVar6 = func_0x0001807104d0(pbVar13,uVar14,unaff_RSI + (uVar9 - 1));
    if ((-1 < unaff_RSI[uVar9 - 1]) &&
       (iVar7 = (int)unaff_RSI[uVar9 - 1], iVar7 <= (int)(uVar14 - iVar6))) {
      pbVar13 = pbVar13 + iVar6;
      if (uVar15 == 0) {
        if (iVar6 + iVar7 <= (int)uVar12) goto LAB_18070fb9d;
      }
      else if (iVar7 * (int)uVar9 <= (int)(uVar14 - iVar6)) {
        uVar5 = unaff_RBX;
        if (0 < (longlong)(uVar9 - 1)) {
          do {
            unaff_RSI[uVar5] = unaff_RSI[uVar9 - 1];
            uVar5 = uVar5 + 1;
          } while ((longlong)uVar5 < (longlong)(uVar9 - 1));
        }
LAB_18070fb9d:
        if (in_stack_000000a0 != (int *)0x0) {
          *in_stack_000000a0 = (int)pbVar13 - iStackX_20;
        }
        if ((int)uVar9 != 0) {
          do {
            if (in_stack_00000090 != 0) {
              *(byte **)(in_stack_00000090 + unaff_RBX * 8) = pbVar13;
            }
            psVar11 = unaff_RSI + unaff_RBX;
            unaff_RBX = unaff_RBX + 1;
            pbVar13 = pbVar13 + *psVar11;
          } while ((longlong)unaff_RBX < (longlong)uVar9);
        }
        if (in_stack_000000a8 != (int *)0x0) {
          *in_stack_000000a8 = ((int)pbVar13 - iStackX_20) + unaff_R15D;
        }
        if (in_stack_00000088 != (byte *)0x0) {
          *in_stack_00000088 = bVar1;
          return uVar9;
        }
        return uVar9;
      }
    }
  }
  return 0xfffffffc;
}



int FUN_18070fb8e(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int in_R9D;
  longlong in_R10;
  int8_t unaff_R13B;
  int unaff_R15D;
  int32_t uStackX_20;
  int8_t *in_stack_00000088;
  longlong in_stack_00000090;
  int *in_stack_000000a0;
  int *in_stack_000000a8;
  
  if (in_R9D < 0x4fc) {
    *(short *)(unaff_RSI + -2 + unaff_RDI * 2) = (short)in_R9D;
    if (in_stack_000000a0 != (int *)0x0) {
      *in_stack_000000a0 = (int)in_R10 - uStackX_20;
    }
    if (unaff_EBP != 0) {
      do {
        if (in_stack_00000090 != 0) {
          *(longlong *)(in_stack_00000090 + unaff_RBX * 8) = in_R10;
        }
        lVar1 = unaff_RBX * 2;
        unaff_RBX = unaff_RBX + 1;
        in_R10 = in_R10 + *(short *)(unaff_RSI + lVar1);
      } while (unaff_RBX < unaff_RDI);
    }
    if (in_stack_000000a8 != (int *)0x0) {
      *in_stack_000000a8 = ((int)in_R10 - uStackX_20) + unaff_R15D;
    }
    if (in_stack_00000088 != (int8_t *)0x0) {
      *in_stack_00000088 = unaff_R13B;
    }
  }
  else {
    unaff_EBP = -4;
  }
  return unaff_EBP;
}



uint64_t FUN_18070fc08(void)

{
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18070fc20(longlong param_1,int param_2,int param_3,float *param_4)
void FUN_18070fc20(longlong param_1,int param_2,int param_3,float *param_4)

{
  bool bVar1;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  int iVar4;
  int8_t (*pauVar5) [16];
  uint uVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int8_t auVar25 [16];
  float *pfStackX_20;
  longlong lStack_a8;
  
  auVar3 = _DAT_180a401b0;
  auVar2 = _DAT_18094ed40;
  lVar19 = (longlong)param_3;
  if ((((0 < param_3) && (0 < param_2)) && (param_1 != 0)) && (param_4 != (float *)0x0)) {
    uVar11 = param_2 * param_3;
    iVar15 = 0;
    if (0 < (int)uVar11) {
      if (0xf < uVar11) {
        uVar6 = uVar11 & 0x8000000f;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
        }
        lVar8 = 0;
        pauVar5 = (int8_t (*) [16])(param_1 + 0x20);
        do {
          iVar15 = iVar15 + 0x10;
          auVar25 = minps(auVar3,pauVar5[-2]);
          lVar8 = lVar8 + 0x10;
          auVar25 = maxps(auVar2,auVar25);
          pauVar5[-2] = auVar25;
          auVar25 = minps(auVar3,pauVar5[-1]);
          auVar25 = maxps(auVar2,auVar25);
          pauVar5[-1] = auVar25;
          auVar25 = minps(auVar3,*pauVar5);
          auVar25 = maxps(auVar2,auVar25);
          *pauVar5 = auVar25;
          auVar25 = minps(auVar3,pauVar5[1]);
          auVar25 = maxps(auVar2,auVar25);
          pauVar5[1] = auVar25;
          pauVar5 = pauVar5 + 4;
        } while (lVar8 < (int)(uVar11 - uVar6));
      }
      if (iVar15 < (int)uVar11) {
        if (3 < (int)(uVar11 - iVar15)) {
          uVar6 = ((uVar11 - iVar15) - 4 >> 2) + 1;
          pfVar9 = (float *)(param_1 + ((longlong)iVar15 + 2) * 4);
          uVar17 = (ulonglong)uVar6;
          iVar15 = iVar15 + uVar6 * 4;
          do {
            fVar22 = pfVar9[-2];
            if (2.0 <= fVar22) {
              fVar22 = 2.0;
            }
            if (fVar22 < -2.0) {
              fVar22 = -2.0;
            }
            fVar20 = pfVar9[-1];
            if (2.0 <= fVar20) {
              fVar20 = 2.0;
            }
            pfVar9[-2] = fVar22;
            if (fVar20 < -2.0) {
              fVar20 = -2.0;
            }
            fVar22 = *pfVar9;
            if (2.0 <= fVar22) {
              fVar22 = 2.0;
            }
            pfVar9[-1] = fVar20;
            if (fVar22 < -2.0) {
              fVar22 = -2.0;
            }
            *pfVar9 = fVar22;
            fVar22 = pfVar9[1];
            if (2.0 <= fVar22) {
              fVar22 = 2.0;
            }
            if (fVar22 < -2.0) {
              fVar22 = -2.0;
            }
            pfVar9[1] = fVar22;
            pfVar9 = pfVar9 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        if (iVar15 < (int)uVar11) {
          pfVar9 = (float *)(param_1 + (longlong)iVar15 * 4);
          lVar8 = (longlong)(int)(uVar11 - iVar15);
          do {
            fVar22 = *pfVar9;
            if (2.0 <= fVar22) {
              fVar22 = 2.0;
            }
            if (fVar22 < -2.0) {
              fVar22 = -2.0;
            }
            *pfVar9 = fVar22;
            pfVar9 = pfVar9 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
    }
    if (0 < param_3) {
      pfStackX_20 = param_4;
      lStack_a8 = lVar19;
      do {
        fVar22 = *pfStackX_20;
        pfVar9 = (float *)((param_1 - (longlong)param_4) + (longlong)pfStackX_20);
        iVar15 = 0;
        if (3 < param_2) {
          iVar12 = param_3 * 2;
          do {
            iVar4 = param_3 * -2 + iVar12;
            fVar20 = pfVar9[iVar4] * fVar22;
            if (0.0 <= fVar20) goto LAB_18070ff9b;
            pfVar9[iVar4] = (fVar20 + 1.0) * pfVar9[iVar4];
            fVar20 = pfVar9[iVar12 - param_3] * fVar22;
            if (0.0 <= fVar20) goto LAB_18070ff9b;
            pfVar9[iVar12 - param_3] = (fVar20 + 1.0) * pfVar9[iVar12 - param_3];
            fVar20 = pfVar9[iVar12] * fVar22;
            if (0.0 <= fVar20) goto LAB_18070ff9b;
            pfVar9[iVar12] = (fVar20 + 1.0) * pfVar9[iVar12];
            iVar4 = iVar12 + param_3;
            fVar20 = pfVar9[iVar4] * fVar22;
            if (0.0 <= fVar20) goto LAB_18070ff9b;
            iVar15 = iVar15 + 4;
            iVar12 = iVar12 + param_3 * 4;
            pfVar9[iVar4] = (fVar20 + 1.0) * pfVar9[iVar4];
          } while (iVar15 < param_2 + -3);
        }
        if (iVar15 < param_2) {
          iVar12 = iVar15 * param_3;
          do {
            fVar20 = pfVar9[iVar12] * fVar22;
            if (0.0 <= fVar20) break;
            iVar15 = iVar15 + 1;
            pfVar9[iVar12] = (fVar20 + 1.0) * pfVar9[iVar12];
            iVar12 = iVar12 + param_3;
          } while (iVar15 < param_2);
        }
LAB_18070ff9b:
        fVar22 = *pfVar9;
        iVar15 = 0;
        do {
          iVar12 = iVar15;
          if (iVar15 < param_2) {
            if (3 < param_2 - iVar15) {
              iVar18 = iVar15 - (iVar15 + 2);
              iVar4 = (iVar15 + 2) * param_3;
              do {
                if ((1.0 < pfVar9[iVar18 * param_3 + iVar4]) ||
                   (pfVar9[iVar18 * param_3 + iVar4] < -1.0)) goto LAB_1807100a5;
                if ((1.0 < pfVar9[(iVar18 + 1) * param_3 + iVar4]) ||
                   (pfVar9[(iVar18 + 1) * param_3 + iVar4] < -1.0)) {
                  iVar12 = iVar12 + 1;
                  goto LAB_1807100a5;
                }
                if ((1.0 < pfVar9[iVar4]) || (pfVar9[iVar4] < -1.0)) {
                  iVar12 = iVar12 + 2;
                  goto LAB_1807100a5;
                }
                if ((1.0 < pfVar9[(iVar18 + 3) * param_3 + iVar4]) ||
                   (pfVar9[(iVar18 + 3) * param_3 + iVar4] < -1.0)) {
                  iVar12 = iVar12 + 3;
                  goto LAB_1807100a5;
                }
                iVar12 = iVar12 + 4;
                iVar4 = iVar4 + param_3 * 4;
              } while (iVar12 < param_2 + -3);
            }
            if (iVar12 < param_2) {
              iVar4 = iVar12 * param_3;
              do {
                if ((1.0 < pfVar9[iVar4]) || (pfVar9[iVar4] < -1.0)) break;
                iVar12 = iVar12 + 1;
                iVar4 = iVar4 + param_3;
              } while (iVar12 < param_2);
            }
          }
LAB_1807100a5:
          if (iVar12 == param_2) {
            fVar20 = 0.0;
            break;
          }
          iVar4 = iVar12 * param_3;
          fVar24 = pfVar9[iVar4];
          fVar20 = ABS(fVar24);
          iVar18 = iVar12;
          iVar16 = iVar12;
          if (0 < iVar12) {
            iVar7 = (iVar12 + -1) * param_3;
            do {
              if (fVar24 * pfVar9[iVar7] < 0.0) break;
              iVar16 = iVar16 + -1;
              iVar7 = iVar7 - param_3;
            } while (0 < iVar16);
          }
          while ((iVar7 = iVar18, iVar18 = iVar12, iVar18 < param_2 &&
                 (0.0 <= fVar24 * pfVar9[iVar4]))) {
            fVar23 = ABS(pfVar9[iVar4]);
            fVar21 = fVar20;
            if (fVar20 < fVar23) {
              fVar21 = fVar23;
            }
            iVar4 = iVar4 + param_3;
            bVar1 = fVar23 <= fVar20;
            fVar20 = fVar21;
            iVar12 = iVar18 + 1;
            if (bVar1) {
              iVar18 = iVar7;
            }
          }
          if ((iVar16 != 0) || (fVar24 * *pfVar9 < 0.0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          fVar21 = (fVar20 - 1.0) / (fVar20 * fVar20);
          fVar20 = fVar21 * 1.0000002;
          if (0.0 < fVar24) {
            fVar20 = fVar21 * -1.0000002;
          }
          if (iVar16 < iVar18) {
            if (3 < iVar18 - iVar16) {
              lVar8 = (longlong)((iVar16 + 2) * param_3);
              pfVar10 = pfVar9 + lVar8;
              lVar13 = (iVar16 + 1) * param_3 - lVar8;
              lVar14 = (iVar16 + 3) * param_3 - lVar8;
              lVar8 = iVar16 * param_3 - lVar8;
              uVar11 = ((iVar18 - iVar16) - 4U >> 2) + 1;
              uVar17 = (ulonglong)uVar11;
              iVar16 = iVar16 + uVar11 * 4;
              do {
                pfVar10[lVar8] = (pfVar10[lVar8] * fVar20 + 1.0) * pfVar10[lVar8];
                pfVar10[lVar13] = (pfVar10[lVar13] * fVar20 + 1.0) * pfVar10[lVar13];
                *pfVar10 = (fVar20 * *pfVar10 + 1.0) * *pfVar10;
                pfVar10[lVar14] = (pfVar10[lVar14] * fVar20 + 1.0) * pfVar10[lVar14];
                pfVar10 = pfVar10 + param_3 * 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            if (iVar16 < iVar18) {
              pfVar10 = pfVar9 + iVar16 * param_3;
              lVar8 = (longlong)(iVar18 - iVar16);
              do {
                *pfVar10 = (*pfVar10 * fVar20 + 1.0) * *pfVar10;
                pfVar10 = pfVar10 + lVar19;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
          }
          if ((bVar1) && (1 < iVar7)) {
            fVar24 = fVar22 - *pfVar9;
            fVar21 = fVar24 / (float)iVar7;
            if (iVar15 < iVar7) {
              if (3 < iVar7 - iVar15) {
                lVar8 = (longlong)((iVar15 + 2) * param_3);
                pfVar10 = pfVar9 + lVar8;
                lVar13 = (iVar15 + 1) * param_3 - lVar8;
                lVar14 = (iVar15 + 3) * param_3 - lVar8;
                lVar8 = iVar15 * param_3 - lVar8;
                uVar11 = ((iVar7 - iVar15) - 4U >> 2) + 1;
                uVar17 = (ulonglong)uVar11;
                iVar15 = iVar15 + uVar11 * 4;
                do {
                  fVar23 = (fVar24 - fVar21) + pfVar10[lVar8];
                  if (1.0 <= fVar23) {
                    fVar23 = 1.0;
                  }
                  if (fVar23 < -1.0) {
                    fVar23 = -1.0;
                  }
                  pfVar10[lVar8] = fVar23;
                  fVar24 = (fVar24 - fVar21) - fVar21;
                  fVar23 = fVar24 + pfVar10[lVar13];
                  if (1.0 <= fVar23) {
                    fVar23 = 1.0;
                  }
                  if (fVar23 < -1.0) {
                    fVar23 = -1.0;
                  }
                  pfVar10[lVar13] = fVar23;
                  fVar24 = fVar24 - fVar21;
                  fVar23 = fVar24 + *pfVar10;
                  if (1.0 <= fVar23) {
                    fVar23 = 1.0;
                  }
                  if (fVar23 < -1.0) {
                    fVar23 = -1.0;
                  }
                  *pfVar10 = fVar23;
                  fVar24 = fVar24 - fVar21;
                  fVar23 = fVar24 + pfVar10[lVar14];
                  if (1.0 <= fVar23) {
                    fVar23 = 1.0;
                  }
                  if (fVar23 < -1.0) {
                    fVar23 = -1.0;
                  }
                  pfVar10[lVar14] = fVar23;
                  pfVar10 = pfVar10 + param_3 * 4;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              if (iVar15 < iVar7) {
                pfVar10 = pfVar9 + iVar15 * param_3;
                lVar8 = (longlong)(iVar7 - iVar15);
                do {
                  fVar24 = fVar24 - fVar21;
                  fVar23 = fVar24 + *pfVar10;
                  if (1.0 <= fVar23) {
                    fVar23 = 1.0;
                  }
                  if (fVar23 < -1.0) {
                    fVar23 = -1.0;
                  }
                  *pfVar10 = fVar23;
                  pfVar10 = pfVar10 + lVar19;
                  lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
              }
            }
          }
          iVar15 = iVar18;
        } while (iVar18 != param_2);
        *pfStackX_20 = fVar20;
        pfStackX_20 = pfStackX_20 + 1;
        lStack_a8 = lStack_a8 + -1;
      } while (lStack_a8 != 0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




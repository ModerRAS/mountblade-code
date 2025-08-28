#include "TaleWorlds.Native.Split.h"

// 99_part_10_part024.c - 8 个函数

// 函数: void FUN_1806b3af0(longlong param_1)
void FUN_1806b3af0(longlong param_1)

{
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  return;
}



longlong FUN_1806b3b20(longlong param_1,ushort *param_2,int8_t *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *param_3 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar2 = ~((uint)uVar1 << 0xf) + (uint)uVar1;
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + ~(uVar2 << 0xb);
    uVar4 = (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x2c) - 1U);
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4);
    bVar5 = uVar2 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 0x10) == uVar1) break;
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4);
      } while (uVar2 != 0xffffffff);
      bVar5 = uVar2 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x10);
    }
  }
  if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x28)) goto LAB_1806b3c2b;
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (uVar2 == 0) {
    uVar3 = 0x10;
LAB_1806b3be8:
    FUN_1806b56d0(param_1,uVar3);
    uVar2 = *(uint *)(param_1 + 0x2c);
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar2 < uVar3) goto LAB_1806b3be8;
  }
  uVar3 = (uint)*param_2 + ~((uint)*param_2 << 0xf);
  uVar3 = (uVar3 >> 10 ^ uVar3) * 9;
  uVar3 = uVar3 ^ uVar3 >> 6;
  uVar3 = uVar3 + ~(uVar3 << 0xb);
  uVar4 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & uVar2 - 1);
LAB_1806b3c2b:
  uVar2 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x34) = uVar2 + 1;
  *(int32_t *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4) =
       *(int32_t *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4) = uVar2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x10);
}



longlong FUN_1806b3c70(longlong param_1,uint64_t *param_2,int8_t *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte *pbVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  uVar12 = 0;
  uVar9 = 0x1505;
  if (*(int *)(param_1 + 0x34) == 0) {
    *param_3 = 0;
  }
  else {
    uVar11 = 0x1505;
    pbVar6 = (byte *)*param_2;
    bVar3 = *pbVar6;
    pbVar2 = pbVar6;
    while (bVar3 != 0) {
      pbVar2 = pbVar2 + 1;
      uVar11 = uVar11 * 0x21 ^ (uint)bVar3;
      bVar3 = *pbVar2;
    }
    uVar12 = (ulonglong)(*(int *)(param_1 + 0x34) - 1U & uVar11);
    uVar11 = *(uint *)(*(longlong *)(param_1 + 0x28) + uVar12 * 4);
    uVar8 = (ulonglong)uVar11;
    bVar13 = uVar11 == 0xffffffff;
    if (!bVar13) {
      do {
        pcVar7 = *(char **)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x10);
        lVar10 = (longlong)pbVar6 - (longlong)pcVar7;
        do {
          cVar4 = *pcVar7;
          cVar5 = pcVar7[lVar10];
          if (cVar4 != cVar5) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar5 != '\0');
      } while ((cVar4 != cVar5) &&
              (uVar11 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar8 * 4),
              uVar8 = (ulonglong)uVar11, uVar11 != 0xffffffff));
      bVar13 = (int)uVar8 == -1;
    }
    *param_3 = !bVar13;
    if (!bVar13) goto LAB_1806b3dc9;
  }
  if (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x30)) {
    uVar11 = *(uint *)(param_1 + 0x34);
    if (uVar11 == 0) {
      uVar1 = 0x10;
LAB_1806b3d64:
      FUN_1806b5870(param_1,uVar1);
    }
    else {
      uVar1 = uVar11 * 2;
      if (uVar11 < uVar1) goto LAB_1806b3d64;
    }
    pbVar2 = (byte *)*param_2;
    bVar3 = *pbVar2;
    while (bVar3 != 0) {
      pbVar2 = pbVar2 + 1;
      uVar9 = uVar9 * 0x21 ^ (uint)bVar3;
      bVar3 = *pbVar2;
    }
    uVar12 = (ulonglong)(*(int *)(param_1 + 0x34) - 1U & uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x3c);
  uVar8 = (ulonglong)uVar9;
  *(uint *)(param_1 + 0x3c) = uVar9 + 1;
  *(int32_t *)(*(longlong *)(param_1 + 0x20) + uVar8 * 4) =
       *(int32_t *)(*(longlong *)(param_1 + 0x28) + uVar12 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x28) + uVar12 * 4) = uVar9;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
LAB_1806b3dc9:
  return uVar8 * 0x10 + *(longlong *)(param_1 + 0x18);
}



longlong FUN_1806b3c9a(int param_1,uint64_t *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  uint unaff_EDI;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint64_t unaff_R14;
  uint64_t *unaff_R15;
  bool bVar11;
  
  pbVar5 = (byte *)*param_2;
  bVar2 = *pbVar5;
  pbVar1 = pbVar5;
  uVar9 = unaff_EDI;
  while (bVar2 != 0) {
    pbVar1 = pbVar1 + 1;
    uVar9 = uVar9 * 0x21 ^ (uint)bVar2;
    bVar2 = *pbVar1;
  }
  uVar10 = (ulonglong)(param_1 - 1U & uVar9);
  uVar9 = *(uint *)(*(longlong *)(unaff_RBX + 0x28) + uVar10 * 4);
  uVar7 = (ulonglong)uVar9;
  bVar11 = uVar9 == 0xffffffff;
  if (!bVar11) {
    do {
      pcVar6 = *(char **)(*(longlong *)(unaff_RBX + 0x18) + uVar7 * 0x10);
      lVar8 = (longlong)pbVar5 - (longlong)pcVar6;
      do {
        cVar3 = *pcVar6;
        cVar4 = pcVar6[lVar8];
        if (cVar3 != cVar4) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
    } while ((cVar3 != cVar4) &&
            (uVar9 = *(uint *)(*(longlong *)(unaff_RBX + 0x20) + uVar7 * 4),
            uVar7 = (ulonglong)uVar9, uVar9 != 0xffffffff));
    bVar11 = (int)uVar7 == -1;
  }
  *(bool *)unaff_R14 = !bVar11;
  if (bVar11) {
    if (*(int *)(unaff_RBX + 0x44) == *(int *)(unaff_RBX + 0x30)) {
      uVar9 = *(uint *)(unaff_RBX + 0x34);
      if ((uVar9 == 0) || (uVar9 < uVar9 * 2)) {
        FUN_1806b5870();
      }
      pbVar1 = (byte *)*unaff_R15;
      bVar2 = *pbVar1;
      while (bVar2 != 0) {
        pbVar1 = pbVar1 + 1;
        unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar2;
        bVar2 = *pbVar1;
      }
      uVar10 = (ulonglong)(*(int *)(unaff_RBX + 0x34) - 1U & unaff_EDI);
    }
    uVar9 = *(uint *)(unaff_RBX + 0x3c);
    uVar7 = (ulonglong)uVar9;
    *(uint *)(unaff_RBX + 0x3c) = uVar9 + 1;
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x20) + uVar7 * 4) =
         *(int32_t *)(*(longlong *)(unaff_RBX + 0x28) + uVar10 * 4);
    *(uint *)(*(longlong *)(unaff_RBX + 0x28) + uVar10 * 4) = uVar9;
    *(int *)(unaff_RBX + 0x44) = *(int *)(unaff_RBX + 0x44) + 1;
    *(int *)(unaff_RBX + 0x40) = *(int *)(unaff_RBX + 0x40) + 1;
  }
  return uVar7 * 0x10 + *(longlong *)(unaff_RBX + 0x18);
}



longlong FUN_1806b3cdb(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  longlong lVar8;
  uint in_R9D;
  ulonglong in_R10;
  uint64_t unaff_R14;
  uint64_t *unaff_R15;
  
  do {
    pcVar6 = *(char **)(*(longlong *)(unaff_RBX + 0x18) + (ulonglong)in_R9D * 0x10);
    lVar8 = unaff_RBP - (longlong)pcVar6;
    do {
      cVar1 = *pcVar6;
      cVar2 = pcVar6[lVar8];
      if (cVar1 != cVar2) break;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if ((cVar1 == cVar2) ||
       (in_R9D = *(uint *)(*(longlong *)(unaff_RBX + 0x20) + (ulonglong)in_R9D * 4),
       in_R9D == 0xffffffff)) {
      *(bool *)unaff_R14 = in_R9D != 0xffffffff;
      if (in_R9D != 0xffffffff) {
        uVar7 = (ulonglong)in_R9D;
      }
      else {
        if (*(int *)(unaff_RBX + 0x44) == *(int *)(unaff_RBX + 0x30)) {
          uVar4 = *(uint *)(unaff_RBX + 0x34);
          if ((uVar4 == 0) || (uVar4 < uVar4 * 2)) {
            FUN_1806b5870();
          }
          pbVar5 = (byte *)*unaff_R15;
          bVar3 = *pbVar5;
          while (bVar3 != 0) {
            pbVar5 = pbVar5 + 1;
            unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar3;
            bVar3 = *pbVar5;
          }
          in_R10 = (ulonglong)(*(int *)(unaff_RBX + 0x34) - 1U & unaff_EDI);
        }
        uVar4 = *(uint *)(unaff_RBX + 0x3c);
        uVar7 = (ulonglong)uVar4;
        *(uint *)(unaff_RBX + 0x3c) = uVar4 + 1;
        *(int32_t *)(*(longlong *)(unaff_RBX + 0x20) + uVar7 * 4) =
             *(int32_t *)(*(longlong *)(unaff_RBX + 0x28) + in_R10 * 4);
        *(uint *)(*(longlong *)(unaff_RBX + 0x28) + in_R10 * 4) = uVar4;
        *(int *)(unaff_RBX + 0x44) = *(int *)(unaff_RBX + 0x44) + 1;
        *(int *)(unaff_RBX + 0x40) = *(int *)(unaff_RBX + 0x40) + 1;
      }
      return uVar7 * 0x10 + *(longlong *)(unaff_RBX + 0x18);
    }
  } while( true );
}



longlong FUN_1806b3d31(void)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  uint unaff_EDI;
  uint in_R9D;
  ulonglong in_R10;
  uint64_t unaff_R14;
  uint64_t *unaff_R15;
  bool in_ZF;
  
  *(bool *)unaff_R14 = !in_ZF;
  if (in_ZF) {
    if (*(int *)(unaff_RBX + 0x44) == *(int *)(unaff_RBX + 0x30)) {
      uVar2 = *(uint *)(unaff_RBX + 0x34);
      if ((uVar2 == 0) || (uVar2 < uVar2 * 2)) {
        FUN_1806b5870();
      }
      pbVar3 = (byte *)*unaff_R15;
      bVar1 = *pbVar3;
      while (bVar1 != 0) {
        pbVar3 = pbVar3 + 1;
        unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar1;
        bVar1 = *pbVar3;
      }
      in_R10 = (ulonglong)(*(int *)(unaff_RBX + 0x34) - 1U & unaff_EDI);
    }
    uVar2 = *(uint *)(unaff_RBX + 0x3c);
    uVar4 = (ulonglong)uVar2;
    *(uint *)(unaff_RBX + 0x3c) = uVar2 + 1;
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x20) + uVar4 * 4) =
         *(int32_t *)(*(longlong *)(unaff_RBX + 0x28) + in_R10 * 4);
    *(uint *)(*(longlong *)(unaff_RBX + 0x28) + in_R10 * 4) = uVar2;
    *(int *)(unaff_RBX + 0x44) = *(int *)(unaff_RBX + 0x44) + 1;
    *(int *)(unaff_RBX + 0x40) = *(int *)(unaff_RBX + 0x40) + 1;
  }
  else {
    uVar4 = (ulonglong)in_R9D;
  }
  return uVar4 * 0x10 + *(longlong *)(unaff_RBX + 0x18);
}



longlong FUN_1806b3d3e(void)

{
  longlong unaff_RBX;
  uint in_R9D;
  
  return (ulonglong)in_R9D * 0x10 + *(longlong *)(unaff_RBX + 0x18);
}



longlong FUN_1806b3de0(longlong param_1,uint64_t *param_2,int8_t *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte *pbVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  uVar12 = 0;
  uVar9 = 0x1505;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *param_3 = 0;
  }
  else {
    uVar11 = 0x1505;
    pbVar6 = (byte *)*param_2;
    bVar3 = *pbVar6;
    pbVar2 = pbVar6;
    while (bVar3 != 0) {
      pbVar2 = pbVar2 + 1;
      uVar11 = uVar11 * 0x21 ^ (uint)bVar3;
      bVar3 = *pbVar2;
    }
    uVar12 = (ulonglong)(*(int *)(param_1 + 0x2c) - 1U & uVar11);
    uVar11 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar12 * 4);
    uVar8 = (ulonglong)uVar11;
    bVar13 = uVar11 == 0xffffffff;
    if (!bVar13) {
      do {
        pcVar7 = *(char **)(*(longlong *)(param_1 + 0x10) + uVar8 * 0x10);
        lVar10 = (longlong)pbVar6 - (longlong)pcVar7;
        do {
          cVar4 = *pcVar7;
          cVar5 = pcVar7[lVar10];
          if (cVar4 != cVar5) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar5 != '\0');
      } while ((cVar4 != cVar5) &&
              (uVar11 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar8 * 4),
              uVar8 = (ulonglong)uVar11, uVar11 != 0xffffffff));
      bVar13 = (int)uVar8 == -1;
    }
    *param_3 = !bVar13;
    if (!bVar13) goto LAB_1806b3f39;
  }
  if (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x28)) {
    uVar11 = *(uint *)(param_1 + 0x2c);
    if (uVar11 == 0) {
      uVar1 = 0x10;
LAB_1806b3ed4:
      FUN_1806b5a10(param_1,uVar1);
    }
    else {
      uVar1 = uVar11 * 2;
      if (uVar11 < uVar1) goto LAB_1806b3ed4;
    }
    pbVar2 = (byte *)*param_2;
    bVar3 = *pbVar2;
    while (bVar3 != 0) {
      pbVar2 = pbVar2 + 1;
      uVar9 = uVar9 * 0x21 ^ (uint)bVar3;
      bVar3 = *pbVar2;
    }
    uVar12 = (ulonglong)(*(int *)(param_1 + 0x2c) - 1U & uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x34);
  uVar8 = (ulonglong)uVar9;
  *(uint *)(param_1 + 0x34) = uVar9 + 1;
  *(int32_t *)(*(longlong *)(param_1 + 0x18) + uVar8 * 4) =
       *(int32_t *)(*(longlong *)(param_1 + 0x20) + uVar12 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x20) + uVar12 * 4) = uVar9;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
LAB_1806b3f39:
  return uVar8 * 0x10 + *(longlong *)(param_1 + 0x10);
}



longlong FUN_1806b3e0a(int param_1,uint64_t *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  uint unaff_EDI;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint64_t unaff_R14;
  uint64_t *unaff_R15;
  bool bVar11;
  
  pbVar5 = (byte *)*param_2;
  bVar2 = *pbVar5;
  pbVar1 = pbVar5;
  uVar9 = unaff_EDI;
  while (bVar2 != 0) {
    pbVar1 = pbVar1 + 1;
    uVar9 = uVar9 * 0x21 ^ (uint)bVar2;
    bVar2 = *pbVar1;
  }
  uVar10 = (ulonglong)(param_1 - 1U & uVar9);
  uVar9 = *(uint *)(*(longlong *)(unaff_RBX + 0x20) + uVar10 * 4);
  uVar7 = (ulonglong)uVar9;
  bVar11 = uVar9 == 0xffffffff;
  if (!bVar11) {
    do {
      pcVar6 = *(char **)(*(longlong *)(unaff_RBX + 0x10) + uVar7 * 0x10);
      lVar8 = (longlong)pbVar5 - (longlong)pcVar6;
      do {
        cVar3 = *pcVar6;
        cVar4 = pcVar6[lVar8];
        if (cVar3 != cVar4) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
    } while ((cVar3 != cVar4) &&
            (uVar9 = *(uint *)(*(longlong *)(unaff_RBX + 0x18) + uVar7 * 4),
            uVar7 = (ulonglong)uVar9, uVar9 != 0xffffffff));
    bVar11 = (int)uVar7 == -1;
  }
  *(bool *)unaff_R14 = !bVar11;
  if (bVar11) {
    if (*(int *)(unaff_RBX + 0x3c) == *(int *)(unaff_RBX + 0x28)) {
      uVar9 = *(uint *)(unaff_RBX + 0x2c);
      if ((uVar9 == 0) || (uVar9 < uVar9 * 2)) {
        FUN_1806b5a10();
      }
      pbVar1 = (byte *)*unaff_R15;
      bVar2 = *pbVar1;
      while (bVar2 != 0) {
        pbVar1 = pbVar1 + 1;
        unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar2;
        bVar2 = *pbVar1;
      }
      uVar10 = (ulonglong)(*(int *)(unaff_RBX + 0x2c) - 1U & unaff_EDI);
    }
    uVar9 = *(uint *)(unaff_RBX + 0x34);
    uVar7 = (ulonglong)uVar9;
    *(uint *)(unaff_RBX + 0x34) = uVar9 + 1;
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x18) + uVar7 * 4) =
         *(int32_t *)(*(longlong *)(unaff_RBX + 0x20) + uVar10 * 4);
    *(uint *)(*(longlong *)(unaff_RBX + 0x20) + uVar10 * 4) = uVar9;
    *(int *)(unaff_RBX + 0x3c) = *(int *)(unaff_RBX + 0x3c) + 1;
    *(int *)(unaff_RBX + 0x38) = *(int *)(unaff_RBX + 0x38) + 1;
  }
  return uVar7 * 0x10 + *(longlong *)(unaff_RBX + 0x10);
}



longlong FUN_1806b3e4b(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  longlong lVar8;
  uint in_R9D;
  ulonglong in_R10;
  uint64_t unaff_R14;
  uint64_t *unaff_R15;
  
  do {
    pcVar6 = *(char **)(*(longlong *)(unaff_RBX + 0x10) + (ulonglong)in_R9D * 0x10);
    lVar8 = unaff_RBP - (longlong)pcVar6;
    do {
      cVar1 = *pcVar6;
      cVar2 = pcVar6[lVar8];
      if (cVar1 != cVar2) break;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if ((cVar1 == cVar2) ||
       (in_R9D = *(uint *)(*(longlong *)(unaff_RBX + 0x18) + (ulonglong)in_R9D * 4),
       in_R9D == 0xffffffff)) {
      *(bool *)unaff_R14 = in_R9D != 0xffffffff;
      if (in_R9D != 0xffffffff) {
        uVar7 = (ulonglong)in_R9D;
      }
      else {
        if (*(int *)(unaff_RBX + 0x3c) == *(int *)(unaff_RBX + 0x28)) {
          uVar4 = *(uint *)(unaff_RBX + 0x2c);
          if ((uVar4 == 0) || (uVar4 < uVar4 * 2)) {
            FUN_1806b5a10();
          }
          pbVar5 = (byte *)*unaff_R15;
          bVar3 = *pbVar5;
          while (bVar3 != 0) {
            pbVar5 = pbVar5 + 1;
            unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar3;
            bVar3 = *pbVar5;
          }
          in_R10 = (ulonglong)(*(int *)(unaff_RBX + 0x2c) - 1U & unaff_EDI);
        }
        uVar4 = *(uint *)(unaff_RBX + 0x34);
        uVar7 = (ulonglong)uVar4;
        *(uint *)(unaff_RBX + 0x34) = uVar4 + 1;
        *(int32_t *)(*(longlong *)(unaff_RBX + 0x18) + uVar7 * 4) =
             *(int32_t *)(*(longlong *)(unaff_RBX + 0x20) + in_R10 * 4);
        *(uint *)(*(longlong *)(unaff_RBX + 0x20) + in_R10 * 4) = uVar4;
        *(int *)(unaff_RBX + 0x3c) = *(int *)(unaff_RBX + 0x3c) + 1;
        *(int *)(unaff_RBX + 0x38) = *(int *)(unaff_RBX + 0x38) + 1;
      }
      return uVar7 * 0x10 + *(longlong *)(unaff_RBX + 0x10);
    }
  } while( true );
}



longlong FUN_1806b3ea1(void)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  uint unaff_EDI;
  uint in_R9D;
  ulonglong in_R10;
  uint64_t unaff_R14;
  uint64_t *unaff_R15;
  bool in_ZF;
  
  *(bool *)unaff_R14 = !in_ZF;
  if (in_ZF) {
    if (*(int *)(unaff_RBX + 0x3c) == *(int *)(unaff_RBX + 0x28)) {
      uVar2 = *(uint *)(unaff_RBX + 0x2c);
      if ((uVar2 == 0) || (uVar2 < uVar2 * 2)) {
        FUN_1806b5a10();
      }
      pbVar3 = (byte *)*unaff_R15;
      bVar1 = *pbVar3;
      while (bVar1 != 0) {
        pbVar3 = pbVar3 + 1;
        unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar1;
        bVar1 = *pbVar3;
      }
      in_R10 = (ulonglong)(*(int *)(unaff_RBX + 0x2c) - 1U & unaff_EDI);
    }
    uVar2 = *(uint *)(unaff_RBX + 0x34);
    uVar4 = (ulonglong)uVar2;
    *(uint *)(unaff_RBX + 0x34) = uVar2 + 1;
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x18) + uVar4 * 4) =
         *(int32_t *)(*(longlong *)(unaff_RBX + 0x20) + in_R10 * 4);
    *(uint *)(*(longlong *)(unaff_RBX + 0x20) + in_R10 * 4) = uVar2;
    *(int *)(unaff_RBX + 0x3c) = *(int *)(unaff_RBX + 0x3c) + 1;
    *(int *)(unaff_RBX + 0x38) = *(int *)(unaff_RBX + 0x38) + 1;
  }
  else {
    uVar4 = (ulonglong)in_R9D;
  }
  return uVar4 * 0x10 + *(longlong *)(unaff_RBX + 0x10);
}



longlong FUN_1806b3eae(void)

{
  longlong unaff_RBX;
  uint in_R9D;
  
  return (ulonglong)in_R9D * 0x10 + *(longlong *)(unaff_RBX + 0x10);
}






// 函数: void FUN_1806b3f50(longlong *param_1,uint64_t param_2,void **param_3,int32_t param_4)
void FUN_1806b3f50(longlong *param_1,uint64_t param_2,void **param_3,int32_t param_4)

{
  int32_t *puVar1;
  void **ppuVar2;
  void *puStackX_8;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int8_t auStack_18 [16];
  
  puStackX_8 = &unknown_var_5832_ptr;
  ppuVar2 = &puStackX_8;
  if (param_3 != (void **)0x0) {
    ppuVar2 = param_3;
  }
  puVar1 = (int32_t *)(**(code **)*ppuVar2)(ppuVar2,auStack_18);
  uStack_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&uStack_28,param_4);
  return;
}



longlong FUN_1806b3fc0(longlong *param_1,uint64_t param_2,int32_t *param_3,int32_t param_4)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  plVar1 = (longlong *)param_1[1];
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1,0x1e0,&unknown_var_6480_ptr,&unknown_var_6304_ptr,0x31);
  uStack_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  lVar3 = FUN_1806b2770(uVar2,plVar1,param_2,param_4,&uStack_18);
  (**(code **)(*param_1 + 0x10))(param_1,lVar3 + 0xa0);
  return lVar3 + 0xa0;
}






// 函数: void FUN_1806b4070(longlong param_1,int16_t param_2,ulonglong param_3,uint64_t param_4)
void FUN_1806b4070(longlong param_1,int16_t param_2,ulonglong param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  int8_t *puVar3;
  int8_t uVar4;
  int8_t uStackX_8;
  int8_t uStackX_9;
  int16_t uStackX_a;
  int16_t uStackX_10;
  uint64_t uStack_48;
  ulonglong uStack_40;
  int32_t uStack_38;
  
  if (*(char *)(param_1 + 0x128) != '\0') {
    uStackX_10 = param_2;
    uStack_38 = _getId_ThreadImpl_shdfnd_physx__SA_KXZ();
    lVar1 = *(longlong *)(param_1 + -0x48);
    if (lVar1 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
    }
    uStackX_8 = 5;
    if (param_3 < 0x100) {
      uVar4 = 3;
    }
    else if (param_3 < 0x10000) {
      uVar4 = 7;
    }
    else {
      uVar4 = 0xf;
      if (param_3 < 0x100000000) {
        uVar4 = 0xb;
      }
    }
    lVar2 = *(longlong *)(param_1 + -0x38);
    uStackX_9 = uVar4;
    uStackX_a = param_2;
    uStack_48 = param_4;
    uStack_40 = param_3;
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = 5;
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
    lVar2 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
    **(int8_t **)(lVar2 + 0x18) = uVar4;
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
    lVar2 = *(longlong *)(param_1 + -0x38);
    FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
    puVar3 = *(int8_t **)(lVar2 + 0x18);
    *puVar3 = (char)param_2;
    puVar3[1] = uStackX_10._1_1_;
    *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 2;
    FUN_1806b25c0(&uStack_48,param_1 + -0x38,&uStackX_8);
    if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90)))
    {
      FUN_1806b4470(param_1 + -0xb0);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
    }
  }
  return;
}






// 函数: void FUN_1806b4096(longlong param_1)
void FUN_1806b4096(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int8_t *puVar3;
  int8_t uVar4;
  ulonglong unaff_RDI;
  int8_t unaff_R15B;
  uint64_t in_stack_00000028;
  int8_t in_stack_00000070;
  int8_t uStack0000000000000071;
  uint64_t in_stack_00000078;
  
  _getId_ThreadImpl_shdfnd_physx__SA_KXZ();
  lVar1 = *(longlong *)(param_1 + -0x48);
  if (lVar1 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
  in_stack_00000070 = 5;
  if (unaff_RDI < 0x100) {
    uVar4 = 3;
  }
  else if (unaff_RDI < 0x10000) {
    uVar4 = 7;
  }
  else {
    uVar4 = 0xf;
    if (unaff_RDI < 0x100000000) {
      uVar4 = 0xb;
    }
  }
  lVar2 = *(longlong *)(param_1 + -0x38);
  uStack0000000000000071 = uVar4;
  FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
  **(int8_t **)(lVar2 + 0x18) = 5;
  *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  lVar2 = *(longlong *)(param_1 + -0x38);
  FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
  **(int8_t **)(lVar2 + 0x18) = uVar4;
  *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  lVar2 = *(longlong *)(param_1 + -0x38);
  FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
  puVar3 = *(int8_t **)(lVar2 + 0x18);
  *puVar3 = unaff_R15B;
  puVar3[1] = in_stack_00000078._1_1_;
  *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 2;
  FUN_1806b25c0(&stack0x00000020,param_1 + -0x38,&stack0x00000070);
  if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
    FUN_1806b4470(param_1 + -0xb0);
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
  return;
}






// 函数: void FUN_1806b409e(longlong param_1)
void FUN_1806b409e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int8_t *puVar3;
  int8_t uVar4;
  ulonglong unaff_RDI;
  int8_t unaff_R15B;
  uint64_t in_stack_00000028;
  int8_t in_stack_00000070;
  int8_t uStack0000000000000071;
  uint64_t in_stack_00000078;
  
  _getId_ThreadImpl_shdfnd_physx__SA_KXZ();
  lVar1 = *(longlong *)(param_1 + -0x48);
  if (lVar1 != 0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
  in_stack_00000070 = 5;
  if (unaff_RDI < 0x100) {
    uVar4 = 3;
  }
  else if (unaff_RDI < 0x10000) {
    uVar4 = 7;
  }
  else {
    uVar4 = 0xf;
    if (unaff_RDI < 0x100000000) {
      uVar4 = 0xb;
    }
  }
  lVar2 = *(longlong *)(param_1 + -0x38);
  uStack0000000000000071 = uVar4;
  FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
  **(int8_t **)(lVar2 + 0x18) = 5;
  *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  lVar2 = *(longlong *)(param_1 + -0x38);
  FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
  **(int8_t **)(lVar2 + 0x18) = uVar4;
  *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
  lVar2 = *(longlong *)(param_1 + -0x38);
  FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
  puVar3 = *(int8_t **)(lVar2 + 0x18);
  *puVar3 = unaff_R15B;
  puVar3[1] = in_stack_00000078._1_1_;
  *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 2;
  FUN_1806b25c0(&stack0x00000020,param_1 + -0x38,&stack0x00000070);
  if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
    FUN_1806b4470(param_1 + -0xb0);
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
  }
  return;
}






// 函数: void FUN_1806b41a6(void)
void FUN_1806b41a6(void)

{
  longlong unaff_RBX;
  
  FUN_1806b4470();
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
  }
  return;
}






// 函数: void FUN_1806b41b8(void)
void FUN_1806b41b8(void)

{
  longlong unaff_RBX;
  
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(unaff_RBX + 8));
}






// 函数: void FUN_1806b41c9(void)
void FUN_1806b41c9(void)

{
  return;
}



uint64_t * FUN_1806b41e0(longlong param_1,uint64_t *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    return (uint64_t *)0x0;
  }
  uVar7 = 0x1505;
  pbVar5 = (byte *)*param_2;
  bVar2 = *pbVar5;
  pbVar1 = pbVar5;
  while (bVar2 != 0) {
    pbVar1 = pbVar1 + 1;
    uVar7 = uVar7 * 0x21 ^ (uint)bVar2;
    bVar2 = *pbVar1;
  }
  uVar7 = *(uint *)(*(longlong *)(param_1 + 0x20) +
                   (ulonglong)(*(int *)(param_1 + 0x2c) - 1U & uVar7) * 4);
  if (uVar7 != 0xffffffff) {
    do {
      puVar8 = (uint64_t *)((ulonglong)uVar7 * 0x10 + *(longlong *)(param_1 + 0x10));
      pcVar6 = (char *)*puVar8;
      lVar9 = (longlong)pbVar5 - (longlong)pcVar6;
      do {
        cVar3 = *pcVar6;
        cVar4 = pcVar6[lVar9];
        if (cVar3 != cVar4) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
      if (cVar3 == cVar4) {
        if (uVar7 == 0xffffffff) {
          return (uint64_t *)0x0;
        }
        return puVar8;
      }
      uVar7 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar7 * 4);
    } while (uVar7 != 0xffffffff);
  }
  return (uint64_t *)0x0;
}



uint64_t * FUN_1806b41f7(void)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  uint64_t *in_RAX;
  char *pcVar6;
  uint uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong in_R10;
  
  uVar7 = 0x1505;
  pbVar5 = (byte *)*in_RAX;
  bVar2 = *pbVar5;
  pbVar1 = pbVar5;
  while (bVar2 != 0) {
    pbVar1 = pbVar1 + 1;
    uVar7 = uVar7 * 0x21 ^ (uint)bVar2;
    bVar2 = *pbVar1;
  }
  uVar7 = *(uint *)(*(longlong *)(in_R10 + 0x20) +
                   (ulonglong)(*(int *)(in_R10 + 0x2c) - 1U & uVar7) * 4);
  if (uVar7 != 0xffffffff) {
    do {
      puVar8 = (uint64_t *)((ulonglong)uVar7 * 0x10 + *(longlong *)(in_R10 + 0x10));
      pcVar6 = (char *)*puVar8;
      lVar9 = (longlong)pbVar5 - (longlong)pcVar6;
      do {
        cVar3 = *pcVar6;
        cVar4 = pcVar6[lVar9];
        if (cVar3 != cVar4) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
      if (cVar3 == cVar4) {
        if (uVar7 == 0xffffffff) {
          return (uint64_t *)0x0;
        }
        return puVar8;
      }
      uVar7 = *(uint *)(*(longlong *)(in_R10 + 0x18) + (ulonglong)uVar7 * 4);
    } while (uVar7 != 0xffffffff);
  }
  return (uint64_t *)0x0;
}



uint64_t FUN_1806b42aa(void)

{
  uint64_t unaff_RBX;
  int in_R9D;
  
  if (in_R9D != -1) {
    return unaff_RBX;
  }
  return 0;
}







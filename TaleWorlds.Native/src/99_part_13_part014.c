#include "TaleWorlds.Native.Split.h"

// 99_part_13_part014.c - 1 个函数

// 函数: void FUN_1808acb82(void)
void FUN_1808acb82(void)

{
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808acb90(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong auStackX_10 [2];
  uint auStackX_20 [2];
  ulonglong in_stack_ffffffffffffffa8;
  
  lVar10 = (longlong)param_3;
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = 0;
  plVar2 = (longlong *)*param_2;
  uVar8 = 0x1c;
  iVar9 = 0;
  uVar6 = uVar8;
  if (*plVar2 != 0) {
    if (plVar2[2] == 0) {
LAB_1808acc1a:
      in_stack_ffffffffffffffa8 = 0;
      uVar6 = FUN_180769ed0(*plVar2,auStackX_20,1,4,0);
    }
    else {
      auStackX_10[0] = auStackX_10[0] & 0xffffffff00000000;
      uVar6 = func_0x00018076a7d0(*plVar2,auStackX_10);
      if ((int)uVar6 == 0) {
        if ((auStackX_10[0] & 0xffffffff) + 4 <= (ulonglong)plVar2[2]) goto LAB_1808acc1a;
        uVar6 = 0x11;
      }
    }
  }
  if ((int)uVar6 == 0) {
    if (auStackX_20[0] < 4) {
      if ((auStackX_20[0] != 0) && (iVar9 = 1, auStackX_20[0] != 1)) {
        if (auStackX_20[0] == 2) {
          iVar9 = 2;
        }
        else if (auStackX_20[0] == 3) {
          iVar9 = 3;
        }
        else {
          iVar9 = 4;
        }
      }
      goto LAB_1808acc86;
    }
    uVar6 = 0xd;
  }
  uVar4 = uVar6;
  iVar9 = (int)auStackX_10[0];
LAB_1808acc86:
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar3 = (uint)(in_stack_ffffffffffffffa8 >> 0x20);
  if (iVar9 == 0) {
    puVar5 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x112,
                           (ulonglong)uVar3 << 0x20,0,1);
    if (puVar5 == (undefined8 *)0x0) {
      return 0x26;
    }
    *(undefined4 *)(puVar5 + 3) = 0;
    *puVar5 = &UNK_180986940;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x48) + lVar10 * 8) = puVar5;
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = FUN_1808995c0(*param_2,puVar5 + 3);
    uVar8 = (ulonglong)uVar3;
  }
  else if (iVar9 == 1) {
    auStackX_10[0] = 0;
    uVar8 = FUN_1808ae8e0(param_1,param_3,auStackX_10);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar8 = FUN_1808aed00(*param_2,auStackX_10[0] + 0x18,4);
    uVar3 = (uint)uVar8;
  }
  else if (iVar9 == 2) {
    puVar5 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x120,
                           (ulonglong)uVar3 << 0x20,0,1);
    if (puVar5 == (undefined8 *)0x0) {
      return 0x26;
    }
    *(undefined1 *)(puVar5 + 3) = 0;
    *puVar5 = &UNK_180986940;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 2;
    *(undefined8 **)(*(longlong *)(param_1 + 0x48) + lVar10 * 8) = puVar5;
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar8 = FUN_1808a2e00(*param_2,puVar5 + 3);
    uVar3 = (uint)uVar8;
  }
  else {
    if (iVar9 != 3) {
      return 0xd;
    }
    puVar5 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x127,
                           in_stack_ffffffffffffffa8 & 0xffffffff00000000,0,1);
    if (puVar5 == (undefined8 *)0x0) {
      return 0x26;
    }
    puVar5[1] = 0;
    puVar1 = puVar5 + 3;
    *(undefined4 *)(puVar5 + 2) = 3;
    *puVar5 = &UNK_180986948;
    func_0x00018005d5f0(puVar1);
    auStackX_10[0] = auStackX_10[0] & 0xffffffff00000000;
    *(undefined8 **)(*(longlong *)(param_1 + 0x48) + lVar10 * 8) = puVar5;
    uVar6 = FUN_1808afe30(*param_2,auStackX_10);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    lVar10 = (longlong)(int)auStackX_10[0];
    if ((int)auStackX_10[0] == 0) {
      return 0;
    }
    uVar6 = FUN_1808d9de0(auStackX_10[0] & 0xffffffff,puVar1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar7 = func_0x0001808d9e70(puVar1);
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar8 = FUN_1808aed00(*param_2,uVar7,lVar10);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar8 = func_0x0001808d9fc0(puVar1);
      if ((int)uVar8 == 0) {
        return 0;
      }
    }
    uVar3 = (uint)uVar8;
  }
  if (uVar3 == 0) {
    return 0;
  }
  return uVar8;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808acbc7(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *unaff_RSI;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R15;
  undefined8 in_stack_00000020;
  ulonglong uVar12;
  int iStack0000000000000088;
  undefined4 uStack000000000000008c;
  uint in_stack_00000098;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  param_2 = (longlong *)*param_2;
  iVar2 = (int)unaff_R12;
  iVar9 = iVar2 + 1;
  uVar7 = (ulonglong)(iVar2 + 0x1c);
  uVar4 = uVar7;
  if (*param_2 != 0) {
    if (param_2[2] == unaff_R12) {
LAB_1808acc1a:
      uVar12 = unaff_R12;
      uVar4 = FUN_180769ed0(*param_2,&stack0x00000098,iVar9,4);
      uVar13 = (undefined4)(uVar12 >> 0x20);
    }
    else {
      _iStack0000000000000088 = CONCAT44(uStack000000000000008c,iVar2);
      uVar4 = func_0x00018076a7d0(*param_2,&stack0x00000088);
      if ((int)uVar4 == 0) {
        if ((_iStack0000000000000088 & 0xffffffff) + 4 <= (ulonglong)param_2[2]) goto LAB_1808acc1a;
        uVar4 = 0x11;
      }
    }
  }
  if ((int)uVar4 == 0) {
    if (in_stack_00000098 < 4) {
      iVar10 = iVar2;
      if ((in_stack_00000098 != 0) &&
         (iVar8 = in_stack_00000098 - iVar9, iVar10 = iVar9, iVar8 != 0)) {
        if (iVar8 == iVar9) {
          iVar10 = 2;
        }
        else if (iVar8 - iVar9 == iVar9) {
          iVar10 = 3;
        }
        else {
          iVar10 = 4;
        }
      }
      uVar4 = unaff_R12 & 0xffffffff;
      goto LAB_1808acc86;
    }
    uVar4 = 0xd;
  }
  iVar10 = iStack0000000000000088;
LAB_1808acc86:
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (iVar10 == 0) {
    puVar5 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x112,
                           CONCAT44(uVar13,iVar2));
    if (puVar5 == (undefined8 *)0x0) {
      return 0x26;
    }
    *(int *)(puVar5 + 3) = iVar2;
    *puVar5 = &UNK_180986940;
    puVar5[1] = unaff_R12;
    *(int *)(puVar5 + 2) = iVar2;
    *(undefined8 **)(*(longlong *)(unaff_R13 + 0x48) + unaff_R15 * 8) = puVar5;
    if (*(int *)(unaff_RSI[1] + 0x18) != iVar2) {
      return uVar7;
    }
    uVar3 = FUN_1808995c0(*unaff_RSI,puVar5 + 3);
    uVar7 = (ulonglong)uVar3;
  }
  else if (iVar10 == 1) {
    _iStack0000000000000088 = unaff_R12;
    uVar4 = FUN_1808ae8e0();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (*(int *)(unaff_RSI[1] + 0x18) != iVar2) {
      return uVar7;
    }
    uVar7 = FUN_1808aed00(*unaff_RSI,_iStack0000000000000088 + 0x18,4);
    uVar3 = (uint)uVar7;
  }
  else if (iVar10 == 2) {
    puVar5 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x120,
                           CONCAT44(uVar13,iVar2));
    if (puVar5 == (undefined8 *)0x0) {
      return 0x26;
    }
    *(char *)(puVar5 + 3) = (char)unaff_R12;
    *puVar5 = &UNK_180986940;
    puVar5[1] = unaff_R12;
    *(undefined4 *)(puVar5 + 2) = 2;
    *(undefined8 **)(*(longlong *)(unaff_R13 + 0x48) + unaff_R15 * 8) = puVar5;
    if (*(int *)(unaff_RSI[1] + 0x18) != iVar2) {
      return uVar7;
    }
    uVar7 = FUN_1808a2e00(*unaff_RSI,puVar5 + 3);
    uVar3 = (uint)uVar7;
  }
  else {
    if (iVar10 != 3) {
      return 0xd;
    }
    puVar5 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x127,
                           CONCAT44(uVar13,iVar2));
    if (puVar5 == (undefined8 *)0x0) {
      return 0x26;
    }
    puVar5[1] = unaff_R12;
    puVar1 = puVar5 + 3;
    *(undefined4 *)(puVar5 + 2) = 3;
    *puVar5 = &UNK_180986948;
    func_0x00018005d5f0(puVar1);
    _iStack0000000000000088 = CONCAT44(uStack000000000000008c,iVar2);
    *(undefined8 **)(*(longlong *)(unaff_R13 + 0x48) + unaff_R15 * 8) = puVar5;
    uVar4 = FUN_1808afe30(*unaff_RSI,&stack0x00000088);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar11 = (longlong)iStack0000000000000088;
    if (iStack0000000000000088 == 0) {
      return 0;
    }
    uVar4 = FUN_1808d9de0(_iStack0000000000000088 & 0xffffffff,puVar1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar6 = func_0x0001808d9e70(puVar1);
    if (*(int *)(unaff_RSI[1] + 0x18) == iVar2) {
      uVar7 = FUN_1808aed00(*unaff_RSI,uVar6,lVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      uVar7 = func_0x0001808d9fc0(puVar1);
      if ((int)uVar7 == 0) {
        return 0;
      }
    }
    uVar3 = (uint)uVar7;
  }
  if (uVar3 == 0) {
    return 0;
  }
  return uVar7;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808acc41(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong unaff_RBX;
  undefined8 *unaff_RSI;
  int unaff_EDI;
  int iVar8;
  longlong lVar9;
  ulonglong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R15;
  int iStack0000000000000088;
  undefined4 uStack000000000000008c;
  uint in_stack_00000098;
  
  iVar2 = (int)unaff_R12;
  if (in_stack_00000098 < 4) {
    iVar8 = iVar2;
    if ((in_stack_00000098 != 0) &&
       (iVar7 = in_stack_00000098 - unaff_EDI, iVar8 = unaff_EDI, iVar7 != 0)) {
      if (iVar7 == unaff_EDI) {
        iVar8 = 2;
      }
      else if (iVar7 - unaff_EDI == unaff_EDI) {
        iVar8 = 3;
      }
      else {
        iVar8 = 4;
      }
    }
    uVar4 = unaff_R12 & 0xffffffff;
  }
  else {
    uVar4 = 0xd;
    iVar8 = iStack0000000000000088;
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      _iStack0000000000000088 = unaff_R12;
      uVar4 = FUN_1808ae8e0();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (*(int *)(unaff_RSI[1] + 0x18) != iVar2) goto LAB_1808acf0b;
      uVar4 = FUN_1808aed00(*unaff_RSI,_iStack0000000000000088 + 0x18,4);
      iVar2 = (int)uVar4;
    }
    else if (iVar8 == 2) {
      puVar5 = (undefined8 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x120);
      if (puVar5 == (undefined8 *)0x0) {
        return 0x26;
      }
      *(char *)(puVar5 + 3) = (char)unaff_R12;
      *puVar5 = &UNK_180986940;
      puVar5[1] = unaff_R12;
      *(undefined4 *)(puVar5 + 2) = 2;
      *(undefined8 **)(*(longlong *)(unaff_R13 + 0x48) + unaff_R15 * 8) = puVar5;
      if (*(int *)(unaff_RSI[1] + 0x18) != iVar2) goto LAB_1808acf0b;
      uVar4 = FUN_1808a2e00(*unaff_RSI,puVar5 + 3);
      iVar2 = (int)uVar4;
    }
    else {
      if (iVar8 != 3) {
        return 0xd;
      }
      puVar5 = (undefined8 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x127);
      if (puVar5 == (undefined8 *)0x0) {
        return 0x26;
      }
      puVar5[1] = unaff_R12;
      puVar1 = puVar5 + 3;
      *(undefined4 *)(puVar5 + 2) = 3;
      *puVar5 = &UNK_180986948;
      func_0x00018005d5f0(puVar1);
      _iStack0000000000000088 = CONCAT44(uStack000000000000008c,iVar2);
      *(undefined8 **)(*(longlong *)(unaff_R13 + 0x48) + unaff_R15 * 8) = puVar5;
      uVar4 = FUN_1808afe30(*unaff_RSI,&stack0x00000088);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      lVar9 = (longlong)iStack0000000000000088;
      if (iStack0000000000000088 == 0) {
        return 0;
      }
      uVar4 = FUN_1808d9de0(_iStack0000000000000088 & 0xffffffff,puVar1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar6 = func_0x0001808d9e70(puVar1);
      if (*(int *)(unaff_RSI[1] + 0x18) == iVar2) {
        uVar4 = FUN_1808aed00(*unaff_RSI,uVar6,lVar9);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = func_0x0001808d9fc0(puVar1);
        if ((int)uVar4 == 0) {
          return 0;
        }
      }
      else {
        uVar4 = unaff_RBX & 0xffffffff;
      }
      iVar2 = (int)uVar4;
    }
    if (iVar2 == 0) {
      return 0;
    }
    return uVar4;
  }
  puVar5 = (undefined8 *)
           FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x112);
  if (puVar5 == (undefined8 *)0x0) {
    return 0x26;
  }
  *(int *)(puVar5 + 3) = iVar2;
  *puVar5 = &UNK_180986940;
  puVar5[1] = unaff_R12;
  *(int *)(puVar5 + 2) = iVar2;
  *(undefined8 **)(*(longlong *)(unaff_R13 + 0x48) + unaff_R15 * 8) = puVar5;
  if (*(int *)(unaff_RSI[1] + 0x18) == iVar2) {
    uVar3 = FUN_1808995c0(*unaff_RSI,puVar5 + 3);
    unaff_RBX = (ulonglong)uVar3;
    if (uVar3 == 0) {
      return 0;
    }
  }
LAB_1808acf0b:
  return unaff_RBX & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808acc8e(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong unaff_RBX;
  undefined8 *unaff_RSI;
  int unaff_EDI;
  longlong lVar7;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R15;
  int iStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  iVar2 = (int)unaff_R12;
  if (unaff_EDI != 0) {
    if (unaff_EDI == 1) {
      _iStack0000000000000088 = unaff_R12;
      uVar5 = FUN_1808ae8e0();
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (*(int *)(unaff_RSI[1] + 0x18) != iVar2) goto LAB_1808acf0b;
      uVar5 = FUN_1808aed00(*unaff_RSI,_iStack0000000000000088 + 0x18,4);
      iVar2 = (int)uVar5;
    }
    else if (unaff_EDI == 2) {
      puVar4 = (undefined8 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x120);
      if (puVar4 == (undefined8 *)0x0) {
        return 0x26;
      }
      *(char *)(puVar4 + 3) = (char)unaff_R12;
      *puVar4 = &UNK_180986940;
      puVar4[1] = unaff_R12;
      *(undefined4 *)(puVar4 + 2) = 2;
      *(undefined8 **)(*(longlong *)(unaff_R13 + 0x48) + unaff_R15 * 8) = puVar4;
      if (*(int *)(unaff_RSI[1] + 0x18) != iVar2) goto LAB_1808acf0b;
      uVar5 = FUN_1808a2e00(*unaff_RSI,puVar4 + 3);
      iVar2 = (int)uVar5;
    }
    else {
      if (unaff_EDI != 3) {
        return 0xd;
      }
      puVar4 = (undefined8 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x127);
      if (puVar4 == (undefined8 *)0x0) {
        return 0x26;
      }
      puVar4[1] = unaff_R12;
      puVar1 = puVar4 + 3;
      *(undefined4 *)(puVar4 + 2) = 3;
      *puVar4 = &UNK_180986948;
      func_0x00018005d5f0(puVar1);
      _iStack0000000000000088 = CONCAT44(uStack000000000000008c,iVar2);
      *(undefined8 **)(*(longlong *)(unaff_R13 + 0x48) + unaff_R15 * 8) = puVar4;
      uVar5 = FUN_1808afe30(*unaff_RSI,&stack0x00000088);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      lVar7 = (longlong)iStack0000000000000088;
      if (iStack0000000000000088 == 0) {
        return 0;
      }
      uVar5 = FUN_1808d9de0(_iStack0000000000000088 & 0xffffffff,puVar1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar6 = func_0x0001808d9e70(puVar1);
      if (*(int *)(unaff_RSI[1] + 0x18) == iVar2) {
        uVar5 = FUN_1808aed00(*unaff_RSI,uVar6,lVar7);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar5 = func_0x0001808d9fc0(puVar1);
        if ((int)uVar5 == 0) {
          return 0;
        }
      }
      else {
        uVar5 = unaff_RBX & 0xffffffff;
      }
      iVar2 = (int)uVar5;
    }
    if (iVar2 == 0) {
      return 0;
    }
    return uVar5;
  }
  puVar4 = (undefined8 *)
           FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x20,&UNK_1809869a0,0x112);
  if (puVar4 == (undefined8 *)0x0) {
    return 0x26;
  }
  *(int *)(puVar4 + 3) = iVar2;
  *puVar4 = &UNK_180986940;
  puVar4[1] = unaff_R12;
  *(int *)(puVar4 + 2) = iVar2;
  *(undefined8 **)(*(longlong *)(unaff_R13 + 0x48) + unaff_R15 * 8) = puVar4;
  if (*(int *)(unaff_RSI[1] + 0x18) == iVar2) {
    uVar3 = FUN_1808995c0(*unaff_RSI,puVar4 + 3);
    unaff_RBX = (ulonglong)uVar3;
    if (uVar3 == 0) {
      return 0;
    }
  }
LAB_1808acf0b:
  return unaff_RBX & 0xffffffff;
}







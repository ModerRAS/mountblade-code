#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part247.c - 1 个函数

// 函数: void FUN_18080becf(undefined8 param_1,uint *param_2)
void FUN_18080becf(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint in_EAX;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong in_R10;
  uint uVar6;
  uint unaff_R15D;
  
  uVar6 = (int)unaff_R15D >> 3;
  uVar5 = (ulonglong)in_EAX;
  do {
    lVar2 = 0;
    if (uVar6 != 0) {
      lVar2 = (ulonglong)uVar6 << 3;
      puVar3 = (uint *)(in_R10 + 0x1ffc);
      uVar4 = uVar6;
      do {
        *param_2 = puVar3[-0x800] ^ 0x80000000;
        param_2[1] = puVar3[-0x400] ^ 0x80000000;
        param_2[2] = *puVar3 ^ 0x80000000;
        param_2[3] = puVar3[0x400] ^ 0x80000000;
        param_2[4] = puVar3[0x800] ^ 0x80000000;
        param_2[5] = puVar3[0xc00] ^ 0x80000000;
        param_2[6] = puVar3[0x1000] ^ 0x80000000;
        param_2[7] = puVar3[0x1400] ^ 0x80000000;
        param_2 = param_2 + 8;
        uVar4 = uVar4 - 1;
        puVar3 = puVar3 + 0x2000;
      } while (uVar4 != 0);
    }
    if ((unaff_R15D & 7) != 0) {
      puVar3 = (uint *)(lVar2 * 0x1000 + in_R10 + -4);
      uVar4 = unaff_R15D & 7;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 0x400;
        *param_2 = uVar1 ^ 0x80000000;
        param_2 = param_2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar5 = uVar5 - 1;
    in_R10 = in_R10 + -4;
  } while (uVar5 != 0);
  return;
}



int FUN_18080bff0(longlong *param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_20 [2];
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 uVar20;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int aiStack_34 [3];
  
  lVar2 = *param_1;
  iVar3 = (int)param_1[3];
  if ((-1 < iVar3) && (iVar3 < *(int *)((longlong)param_1 + 0x1c))) {
    iVar6 = *(int *)((longlong)param_1 + 0x1c) - iVar3;
    if (param_2 != 0) {
      piVar19 = aiStack_34;
      piVar17 = &iStack_38;
      if (param_3 < iVar6) {
        iVar6 = param_3;
      }
      puVar15 = &uStack_40;
      puVar13 = &uStack_3c;
      puVar11 = auStackX_8;
      puVar9 = auStackX_20;
      puVar7 = &uStack_48;
      FUN_18080c4a0(param_1,iVar3,iVar3 + iVar6,&uStack_44,puVar7,puVar9,puVar11,puVar13,puVar15,
                    piVar17,piVar19);
      uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
      uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
      uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20);
      uVar14 = (undefined4)((ulonglong)puVar13 >> 0x20);
      uVar16 = (undefined4)((ulonglong)puVar15 >> 0x20);
      uVar18 = (undefined4)((ulonglong)piVar17 >> 0x20);
      uVar20 = (undefined4)((ulonglong)piVar19 >> 0x20);
      lVar5 = 0x180be6500;
      if (((int)param_1[5] == 0) || (lVar4 = 0x180be6500, *(int *)((longlong)param_1 + 0x24) == 0))
      {
        lVar4 = 0x180be6300;
      }
      lVar4 = lVar4 + (longlong)iStack_38 * 4;
      if (((int)param_1[5] == 0) || (*(int *)((longlong)param_1 + 0x24) == 0)) {
        lVar5 = 0x180be6300;
      }
      lVar5 = lVar5 + (longlong)aiStack_34[0] * 4;
      iVar3 = FUN_1807681a0(2);
      if (iVar3 == 0) {
        iVar3 = FUN_1807681a0(0);
        uVar1 = *(undefined4 *)(lVar2 + 4);
        if (iVar3 == 0) {
          FUN_18080ba00(param_1,param_2,lVar4,lVar5,CONCAT44(uVar8,uStack_3c),
                        CONCAT44(uVar10,uStack_40),CONCAT44(uVar12,uVar1),CONCAT44(uVar14,uStack_44)
                        ,CONCAT44(uVar16,uStack_48),CONCAT44(uVar18,auStackX_20[0]),
                        CONCAT44(uVar20,auStackX_8[0]));
        }
        else {
          FUN_18082b380(param_1,param_2,lVar4,lVar5,CONCAT44(uVar8,uStack_3c),
                        CONCAT44(uVar10,uStack_40),CONCAT44(uVar12,uVar1),CONCAT44(uVar14,uStack_44)
                       );
        }
      }
      else {
        FUN_18082c450(param_1,param_2,lVar4,lVar5,CONCAT44(uVar8,uStack_3c),
                      CONCAT44(uVar10,uStack_40),CONCAT44(uVar12,*(undefined4 *)(lVar2 + 4)),
                      CONCAT44(uVar14,uStack_44),CONCAT44(uVar16,uStack_48),
                      CONCAT44(uVar18,auStackX_20[0]),CONCAT44(uVar20,auStackX_8[0]));
      }
    }
    return iVar6;
  }
  return 0;
}



int FUN_18080c031(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong unaff_RBP;
  int unaff_EDI;
  longlong in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_R14;
  *(undefined8 *)(in_R11 + 0x18) = unaff_R15;
  *(longlong *)(in_R11 + -0x58) = unaff_RBP + -0xc;
  if (!in_ZF && in_OF == in_SF) {
    unaff_EDI = param_3;
  }
  *(longlong *)(in_R11 + -0x60) = unaff_RBP + -0x10;
  *(longlong *)(in_R11 + -0x68) = unaff_RBP + -0x18;
  *(longlong *)(in_R11 + -0x70) = unaff_RBP + -0x14;
  *(longlong *)(in_R11 + -0x78) = unaff_RBP + 0x30;
  *(longlong *)(in_R11 + -0x80) = unaff_RBP + 0x48;
  FUN_18080c4a0(param_1,param_2,(int)param_2 + unaff_EDI,unaff_RBP + -0x1c,unaff_RBP + -0x20);
  iVar1 = FUN_1807681a0(2);
  if (iVar1 == 0) {
    iVar1 = FUN_1807681a0(0);
    if (iVar1 == 0) {
      FUN_18080ba00();
    }
    else {
      FUN_18082b380();
    }
  }
  else {
    FUN_18082c450();
  }
  return unaff_EDI;
}



undefined4 FUN_18080c19b(void)

{
  undefined4 unaff_EDI;
  
  return unaff_EDI;
}



undefined8 FUN_18080c230(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar10 = *param_1;
  lVar1 = *(longlong *)(lVar10 + 0x20);
  iVar3 = FUN_18080b990(param_2,1);
  if (iVar3 != 0) {
    return 0xffffff79;
  }
  uVar11 = 0;
  uVar4 = *(int *)(lVar1 + 8) - 1;
  if (*(int *)(lVar1 + 8) == 0) {
    uVar4 = 0;
  }
  uVar6 = (ulonglong)uVar4;
  uVar9 = uVar11;
  if (uVar4 != 0) {
    do {
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar4 = (uint)uVar6;
      uVar6 = uVar6 >> 1;
    } while (1 < uVar4);
  }
  iVar3 = FUN_18080b990(param_2,uVar9);
  if ((iVar3 == -1) || (*(int *)(lVar1 + 8) <= iVar3)) {
LAB_18080c480:
    uVar7 = 0xffffff78;
  }
  else {
    lVar2 = param_1[5];
    *(int *)((longlong)param_1 + 0x24) = (int)lVar2;
    uVar4 = (uint)*(byte *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar3 * 2);
    *(uint *)(param_1 + 5) = uVar4;
    iVar8 = 0;
    if (0 < *(int *)(lVar10 + 4)) {
      lVar10 = (longlong)(*(int *)(lVar1 + (longlong)(int)lVar2 * 4) >> 2);
                    // WARNING: Subroutine does not return
      memcpy(param_1[2],param_1[1] + lVar10 * 4,lVar10 * 4);
    }
    if (uVar4 != 0) {
      FUN_18080b990(param_2,1);
      iVar5 = FUN_18080b990(param_2,1);
      if (iVar5 == -1) goto LAB_18080c480;
    }
    if (param_3 != 0) {
      FUN_18082aee0(param_1,param_2,
                    *(longlong *)(lVar1 + 0x28) +
                    (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x20) + 1 + (longlong)iVar3 * 2) *
                    0x28);
    }
    lVar10 = param_1[3];
    *(undefined4 *)(param_1 + 3) = 0;
    if ((int)lVar10 != -1) {
      iVar3 = *(int *)(lVar1 + (longlong)(int)param_1[5] * 4);
      iVar8 = *(int *)(lVar1 + (longlong)*(int *)((longlong)param_1 + 0x24) * 4);
      iVar8 = ((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) +
              ((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2);
    }
    *(int *)((longlong)param_1 + 0x1c) = iVar8;
    if (param_1[7] == -1) {
      param_1[6] = -1;
      param_1[8] = -1;
      lVar10 = -1;
    }
    else {
      lVar10 = param_1[8];
    }
    param_1[7] = param_1[7] + 1;
    uVar6 = uVar11;
    if (lVar10 != -1) {
      iVar3 = *(int *)(lVar1 + (longlong)(int)param_1[5] * 4);
      iVar8 = *(int *)(lVar1 + (longlong)*(int *)((longlong)param_1 + 0x24) * 4);
      uVar6 = (((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2) +
              ((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2)) + lVar10;
    }
    param_1[8] = uVar6;
    if (param_1[6] != -1) {
      iVar3 = *(int *)(lVar1 + (longlong)(int)param_1[5] * 4);
      iVar8 = *(int *)(lVar1 + (longlong)*(int *)((longlong)param_1 + 0x24) * 4);
      uVar11 = (longlong)
               (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) +
               ((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2)) + param_1[6];
    }
    param_1[6] = uVar11;
    uVar7 = 0;
  }
  return uVar7;
}



undefined8 FUN_18080c2c7(longlong param_1)

{
  int iVar1;
  longlong in_RAX;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong unaff_RBX;
  longlong lVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R13;
  int unaff_R15D;
  longlong lStack0000000000000088;
  
  lStack0000000000000088 = in_RAX * 2;
  uVar4 = (uint)*(byte *)(*(longlong *)(unaff_RSI + 0x20) + lStack0000000000000088);
  *(uint *)(unaff_RBX + 0x28) = uVar4;
  iVar3 = (int)unaff_RDI;
  if (iVar3 < *(int *)(unaff_R13 + 4)) {
    lVar5 = (longlong)(*(int *)(unaff_RSI + param_1 * 4) >> 2);
                    // WARNING: Subroutine does not return
    memcpy(*(longlong *)(unaff_RBX + 0x10) + (longlong)iVar3 * 4,
           *(longlong *)(unaff_RBX + 8) + (iVar3 + lVar5) * 4,lVar5 * 4);
  }
  if (uVar4 != 0) {
    FUN_18080b990();
    iVar1 = FUN_18080b990();
    if (iVar1 == -1) {
      return 0xffffff78;
    }
  }
  if (unaff_R15D != 0) {
    FUN_18082aee0();
  }
  iVar1 = *(int *)(unaff_RBX + 0x18);
  *(int *)(unaff_RBX + 0x18) = iVar3;
  if (iVar1 != -1) {
    iVar3 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x28) * 4);
    iVar1 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x24) * 4);
    iVar3 = ((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  }
  *(int *)(unaff_RBX + 0x1c) = iVar3;
  if (*(longlong *)(unaff_RBX + 0x38) == -1) {
    *(undefined8 *)(unaff_RBX + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(unaff_RBX + 0x40) = 0xffffffffffffffff;
    lVar5 = -1;
  }
  else {
    lVar5 = *(longlong *)(unaff_RBX + 0x40);
  }
  *(longlong *)(unaff_RBX + 0x38) = *(longlong *)(unaff_RBX + 0x38) + 1;
  lVar2 = unaff_RDI;
  if (lVar5 != -1) {
    iVar3 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x28) * 4);
    iVar1 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x24) * 4);
    lVar2 = (((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + ((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2)
            ) + lVar5;
  }
  *(longlong *)(unaff_RBX + 0x40) = lVar2;
  if (*(longlong *)(unaff_RBX + 0x30) != -1) {
    iVar3 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x28) * 4);
    iVar1 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x24) * 4);
    unaff_RDI = (longlong)
                (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) +
                ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + *(longlong *)(unaff_RBX + 0x30);
  }
  *(longlong *)(unaff_RBX + 0x30) = unaff_RDI;
  return 0;
}



undefined8 FUN_18080c36e(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  int unaff_R15D;
  
  FUN_18080b990();
  iVar1 = FUN_18080b990();
  if (iVar1 == -1) {
    uVar3 = 0xffffff78;
  }
  else {
    if (unaff_R15D != 0) {
      FUN_18082aee0();
    }
    iVar1 = *(int *)(unaff_RBX + 0x18);
    iVar4 = (int)unaff_RDI;
    *(int *)(unaff_RBX + 0x18) = iVar4;
    if (iVar1 != -1) {
      iVar1 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x28) * 4);
      iVar4 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x24) * 4);
      iVar4 = ((int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2) +
              ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
    }
    *(int *)(unaff_RBX + 0x1c) = iVar4;
    if (*(longlong *)(unaff_RBX + 0x38) == -1) {
      *(undefined8 *)(unaff_RBX + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(unaff_RBX + 0x40) = 0xffffffffffffffff;
      lVar5 = -1;
    }
    else {
      lVar5 = *(longlong *)(unaff_RBX + 0x40);
    }
    *(longlong *)(unaff_RBX + 0x38) = *(longlong *)(unaff_RBX + 0x38) + 1;
    lVar2 = unaff_RDI;
    if (lVar5 != -1) {
      iVar1 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x28) * 4);
      iVar4 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x24) * 4);
      lVar2 = (((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) +
              ((int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2)) + lVar5;
    }
    *(longlong *)(unaff_RBX + 0x40) = lVar2;
    if (*(longlong *)(unaff_RBX + 0x30) != -1) {
      iVar1 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x28) * 4);
      iVar4 = *(int *)(unaff_RSI + (longlong)*(int *)(unaff_RBX + 0x24) * 4);
      unaff_RDI = (longlong)
                  (((int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2) +
                  ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2)) + *(longlong *)(unaff_RBX + 0x30);
    }
    *(longlong *)(unaff_RBX + 0x30) = unaff_RDI;
    uVar3 = 0;
  }
  return uVar3;
}






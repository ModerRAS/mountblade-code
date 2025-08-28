#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part178.c - 4 个函数

// 函数: void FUN_18076f970(longlong *param_1)
void FUN_18076f970(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 *apuStackX_8 [4];
  
  lVar2 = *param_1;
  lVar1 = lVar2 + 600;
  *(undefined8 *)(lVar2 + 0x268) = 0;
  *(longlong *)(lVar2 + 0x260) = lVar1;
  *(longlong *)lVar1 = lVar1;
  iVar4 = *(int *)(*(longlong *)(lVar2 + 0xa8) + 0x127a0);
  iVar3 = iVar4 + 1;
  if (0x7ffffffe < iVar4) {
    iVar3 = 0;
  }
  *(int *)(*(longlong *)(lVar2 + 0xa8) + 0x127a0) = iVar3;
  *(int *)(lVar2 + 0x270) = iVar4;
  *(undefined8 *)(lVar2 + 0x230) = 0;
  *(undefined4 *)(lVar2 + 0x238) = 0;
  *(undefined8 *)(lVar2 + 0x220) = 0;
  *(undefined8 *)(lVar2 + 0x228) = 0;
  *(undefined8 *)(lVar2 + 0x240) = 0;
  *(undefined4 *)(lVar2 + 0x250) = 0;
  *(undefined4 *)(lVar2 + 0x274) = 0x3f800000;
  iVar4 = FUN_180743700(*(undefined8 *)(lVar2 + 0xa8),apuStackX_8,0x10,1);
  if (iVar4 == 0) {
    *apuStackX_8[0] = 8;
    *(longlong *)(apuStackX_8[0] + 8) = lVar2;
    func_0x000180743b40(*(undefined8 *)(lVar2 + 0xa8),apuStackX_8[0],1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18076fa40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x218);
  if (lVar2 != 0) {
    FUN_180741df0(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar2,&UNK_180958e20,0xb8);
    *(undefined8 *)(lVar1 + 0x218) = 0;
  }
  return 0;
}



undefined8
FUN_18076faa0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,undefined8 param_5,
             undefined4 *param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    return 0;
  }
  *param_6 = *(undefined4 *)(lVar1 + 0x234);
  param_4 = *(int *)(lVar1 + 0x234) * param_4;
  if (*(int *)(lVar1 + 0x238) < param_4) {
    return 0x1c;
  }
  if (*(longlong *)(lVar1 + 8) == *(longlong *)(lVar1 + 0x240)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x220);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x228);
    *(undefined8 *)(lVar1 + 0x228) = *(undefined8 *)(lVar1 + 0x220);
    *(undefined1 *)(lVar1 + 0x248) = *(undefined1 *)(lVar1 + 0x249);
    *(undefined8 *)(lVar1 + 0x220) = uVar2;
    *(undefined1 *)(lVar1 + 0x249) = 0;
    *(longlong *)(lVar1 + 0x240) = *(longlong *)(lVar1 + 8);
  }
                    // WARNING: Subroutine does not return
  memcpy(param_3,uVar2,(longlong)param_4 << 2);
}



undefined8 FUN_18076fb80(longlong *param_1,int param_2,undefined4 *param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(undefined4 *)(lVar2 + 0x270);
    if (param_4 == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x270);
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    *param_3 = *(undefined4 *)(lVar2 + 0x250);
    if (param_4 == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x250);
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,&UNK_1809fd0a0,uVar1);
}



undefined8 FUN_18076fc40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_180744cc0(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_180744e20(param_1 + 0x20);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18076fc90(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int aiStackX_10 [6];
  
  if (param_2 == 1) {
    if ((*(int *)(param_1 + 0x230) != *(int *)(param_1 + 0x250)) || (*(int *)(param_1 + 0x238) == 0)
       ) {
      *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x250);
      uVar4 = func_0x00018074a590(*(undefined8 *)(param_1 + 0xa8));
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = func_0x000180746360(*(undefined8 *)(param_1 + 0xa8),aiStackX_10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      aiStackX_10[0] = aiStackX_10[0] * *(int *)(param_1 + 0x234);
      *(int *)(param_1 + 0x238) = aiStackX_10[0];
      if (*(longlong *)(param_1 + 0x218) != 0) {
        FUN_180741df0(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x218),
                      &UNK_180958e20,0x174);
        aiStackX_10[0] = *(int *)(param_1 + 0x238);
      }
      lVar5 = FUN_180741d80(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),aiStackX_10[0] * 8,0x10,
                            &UNK_180958e20,0x177,0);
      *(longlong *)(param_1 + 0x218) = lVar5;
      if (lVar5 != 0) {
        *(longlong *)(param_1 + 0x220) = lVar5;
        *(undefined2 *)(param_1 + 0x248) = 0;
        *(longlong *)(param_1 + 0x228) = lVar5 + (longlong)*(int *)(param_1 + 0x238) * 4;
        return 0;
      }
      return 0x26;
    }
  }
  else if (param_2 == 0x80) {
    puVar1 = (undefined8 *)(param_1 + 600);
    puVar2 = (undefined8 *)*puVar1;
    while (puVar2 != puVar1) {
      if (puVar2[2] == 0) {
        return 0x1c;
      }
      uVar4 = FUN_180771050();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      puVar2 = (undefined8 *)*puVar1;
    }
    lVar5 = *(longlong *)(param_1 + 0xa8);
    if (*(int *)(lVar5 + 0x127cc) == 0) {
      uVar4 = 0;
    }
    else if (*(int *)(lVar5 + 0x127b0) == 0) {
      uVar4 = 0x1c;
    }
    else {
      uVar4 = 0;
      lVar6 = (longlong)(int)(*(int *)(lVar5 + 0x127b0) - 1U & *(uint *)(param_1 + 0x270));
      piVar8 = (int *)(*(longlong *)(lVar5 + 0x127a8) + lVar6 * 4);
      iVar3 = *(int *)(*(longlong *)(lVar5 + 0x127a8) + lVar6 * 4);
      if (iVar3 != -1) {
        lVar6 = *(longlong *)(lVar5 + 0x127b8);
        do {
          if (*(uint *)(lVar6 + (longlong)iVar3 * 0x10) == *(uint *)(param_1 + 0x270)) {
            iVar3 = *piVar8;
            lVar7 = (longlong)iVar3;
            *(undefined8 *)(lVar6 + 8 + lVar7 * 0x10) = 0;
            *piVar8 = *(int *)(lVar6 + 4 + lVar7 * 0x10);
            *(undefined4 *)(lVar6 + 4 + lVar7 * 0x10) = *(undefined4 *)(lVar5 + 0x127c8);
            *(int *)(lVar5 + 0x127cc) = *(int *)(lVar5 + 0x127cc) + -1;
            *(int *)(lVar5 + 0x127c8) = iVar3;
            uVar4 = 0;
            break;
          }
          piVar8 = (int *)(lVar6 + 4 + (longlong)iVar3 * 0x10);
          iVar3 = *piVar8;
        } while (iVar3 != -1);
      }
    }
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  }
  return 0;
}





// 函数: void FUN_18076ff30(void)
void FUN_18076ff30(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0cb24,0,0x5c);
}



undefined8 FUN_180770070(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)(param_1 + 3) == 0) {
    uVar1 = FUN_180770270(param_1 + 2,0x40);
    return uVar1;
  }
  return 0x1c;
}



undefined8 FUN_1807700b0(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (iVar2 == -1) {
    return 0x1c;
  }
  if (iVar2 == (int)param_1[1]) {
    iVar3 = iVar2 * 2;
    if (iVar2 * 2 < 4) {
      iVar3 = 4;
    }
    uVar4 = FUN_180770270(param_1,iVar3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  if ((int)param_1[1] == 0) {
FUN_180770229:
    uVar4 = 0x1c;
  }
  else {
    uVar1 = *param_2;
    lVar8 = (longlong)(int)((int)param_1[1] - 1U & uVar1);
    piVar12 = (int *)(*param_1 + lVar8 * 4);
    iVar2 = *(int *)(*param_1 + lVar8 * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(param_1[2] + (longlong)iVar2 * 0x10) == uVar1) goto FUN_180770229;
        piVar12 = (int *)(param_1[2] + 4 + (longlong)iVar2 * 0x10);
        iVar2 = *piVar12;
      } while (iVar2 != -1);
    }
    iVar2 = (int)param_1[4];
    if (iVar2 == -1) {
      uVar4 = *param_3;
      iVar2 = (int)param_1[3];
      iVar13 = iVar2 + 1;
      uVar10 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
      iVar3 = (*(uint *)((longlong)param_1 + 0x1c) ^ uVar10) - uVar10;
      if (iVar3 < iVar13) {
        iVar7 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar13;
        if (iVar13 <= iVar7) {
          iVar3 = iVar7;
        }
        iVar11 = 4;
        if ((3 < iVar3) && (iVar11 = iVar7, iVar7 < iVar13)) {
          iVar11 = iVar13;
        }
        uVar5 = FUN_180748010(param_1 + 2,iVar11);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      puVar6 = (undefined8 *)((longlong)(int)param_1[3] * 0x10 + param_1[2]);
      *puVar6 = CONCAT44(0xffffffff,uVar1);
      puVar6[1] = uVar4;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      puVar9 = (uint *)((longlong)iVar2 * 0x10 + param_1[2]);
      *(uint *)(param_1 + 4) = puVar9[1];
      puVar9[1] = 0xffffffff;
      *puVar9 = *param_2;
      *(undefined8 *)(puVar9 + 2) = *param_3;
    }
    *piVar12 = iVar2;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    uVar4 = 0;
  }
  return uVar4;
}



undefined8 FUN_180770102(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  longlong *unaff_RBX;
  int unaff_EBP;
  int *piVar10;
  int iVar11;
  undefined8 *unaff_R12;
  uint *unaff_R15;
  undefined8 uStack0000000000000028;
  
  if (in_EAX == 0) {
FUN_180770229:
    uVar4 = 0x1c;
  }
  else {
    uVar1 = *unaff_R15;
    lVar7 = (longlong)(int)(in_EAX - 1U & uVar1);
    piVar10 = (int *)(*unaff_RBX + lVar7 * 4);
    iVar2 = *(int *)(*unaff_RBX + lVar7 * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(unaff_RBX[2] + (longlong)iVar2 * 0x10) == uVar1) goto FUN_180770229;
        piVar10 = (int *)(unaff_RBX[2] + 4 + (longlong)iVar2 * 0x10);
        iVar2 = *piVar10;
      } while (iVar2 != -1);
    }
    iVar2 = (int)unaff_RBX[4];
    if (iVar2 == -1) {
      uStack0000000000000028 = *unaff_R12;
      iVar2 = (int)unaff_RBX[3];
      iVar11 = iVar2 + 1;
      uVar9 = (int)*(uint *)((longlong)unaff_RBX + 0x1c) >> 0x1f;
      iVar3 = (*(uint *)((longlong)unaff_RBX + 0x1c) ^ uVar9) - uVar9;
      if (iVar3 < iVar11) {
        iVar6 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar11;
        if (iVar11 <= iVar6) {
          iVar3 = iVar6;
        }
        if ((unaff_EBP <= iVar3) && (unaff_EBP = iVar6, iVar6 < iVar11)) {
          unaff_EBP = iVar11;
        }
        uVar4 = FUN_180748010(unaff_RBX + 2,unaff_EBP);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      puVar5 = (undefined8 *)((longlong)(int)unaff_RBX[3] * 0x10 + unaff_RBX[2]);
      *puVar5 = CONCAT44(0xffffffff,uVar1);
      puVar5[1] = uStack0000000000000028;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
    }
    else {
      puVar8 = (uint *)((longlong)iVar2 * 0x10 + unaff_RBX[2]);
      *(uint *)(unaff_RBX + 4) = puVar8[1];
      puVar8[1] = 0xffffffff;
      *puVar8 = *unaff_R15;
      *(undefined8 *)(puVar8 + 2) = *unaff_R12;
    }
    *piVar10 = iVar2;
    *(int *)((longlong)unaff_RBX + 0x24) = *(int *)((longlong)unaff_RBX + 0x24) + 1;
    uVar4 = 0;
  }
  return uVar4;
}



undefined8 FUN_18077014d(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong unaff_RBX;
  int unaff_EBP;
  int *unaff_RDI;
  int iVar7;
  undefined8 *unaff_R12;
  int iVar8;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000028;
  
  iVar8 = *(int *)(unaff_RBX + 0x20);
  if (iVar8 == -1) {
    uStack0000000000000028 = *unaff_R12;
    iVar8 = *(int *)(unaff_RBX + 0x18);
    iVar7 = iVar8 + 1;
    uVar6 = (int)*(uint *)(unaff_RBX + 0x1c) >> 0x1f;
    iVar1 = (*(uint *)(unaff_RBX + 0x1c) ^ uVar6) - uVar6;
    if (iVar1 < iVar7) {
      iVar4 = (int)((float)iVar1 * 1.5);
      iVar1 = iVar7;
      if (iVar7 <= iVar4) {
        iVar1 = iVar4;
      }
      if ((unaff_EBP <= iVar1) && (unaff_EBP = iVar4, iVar4 < iVar7)) {
        unaff_EBP = iVar7;
      }
      uVar2 = FUN_180748010(unaff_RBX + 0x10,unaff_EBP);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    puVar3 = (undefined8 *)
             ((longlong)*(int *)(unaff_RBX + 0x18) * 0x10 + *(longlong *)(unaff_RBX + 0x10));
    *puVar3 = CONCAT44(0xffffffff,param_2);
    puVar3[1] = uStack0000000000000028;
    *(int *)(unaff_RBX + 0x18) = *(int *)(unaff_RBX + 0x18) + 1;
  }
  else {
    puVar5 = (undefined4 *)((longlong)iVar8 * 0x10 + *(longlong *)(unaff_RBX + 0x10));
    *(undefined4 *)(unaff_RBX + 0x20) = puVar5[1];
    puVar5[1] = 0xffffffff;
    *puVar5 = *unaff_R15;
    *(undefined8 *)(puVar5 + 2) = *unaff_R12;
  }
  *unaff_RDI = iVar8;
  *(int *)(unaff_RBX + 0x24) = *(int *)(unaff_RBX + 0x24) + 1;
  return 0;
}





// 函数: void FUN_180770215(void)
void FUN_180770215(void)

{
  return;
}





// 函数: void FUN_18077021a(void)
void FUN_18077021a(void)

{
  return;
}



undefined8 FUN_180770229(void)

{
  return 0x1c;
}





